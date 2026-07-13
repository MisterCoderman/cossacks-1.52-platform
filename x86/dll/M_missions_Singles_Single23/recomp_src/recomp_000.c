#include "recomp.h"

/* OnInit @ 0x11301005 (5 bytes, 1 insns) */
void f_11301005(void) {
  FTRACE(0x11301005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11301005 jmp 0x11301030 */
  f_11301030(); return;
}

/* thunk_FUN_10001eb0 @ 0x1130100a (5 bytes, 1 insns) */
void f_1130100a(void) {
  FTRACE(0x1130100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130100a jmp 0x11301eb0 */
  f_11301eb0(); return;
}

/* ProcessScenary @ 0x1130100f (5 bytes, 1 insns) */
void f_1130100f(void) {
  FTRACE(0x1130100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130100f jmp 0x11301f10 */
  f_11301f10(); return;
}

/* FUN_10001030 @ 0x11301030 (2964 bytes, 773 insns) */
void f_11301030(void) {
  FTRACE(0x11301030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11301030 push ebp */
  push32((uint32_t)(EBP));
  /* 11301031 mov ebp, esp */
  EBP = (ESP);
  /* 11301033 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11301036 push ebx */
  push32((uint32_t)(EBX));
  /* 11301037 push esi */
  push32((uint32_t)(ESI));
  /* 11301038 push edi */
  push32((uint32_t)(EDI));
  /* 11301039 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1130103c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11301041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11301046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11301048 mov esi, esp */
  ESI = (ESP);
  /* 1130104a push 0x1132d390 */
  push32((uint32_t)(0x1132d390u));
  /* 1130104f push 0x11332478 */
  push32((uint32_t)(0x11332478u));
  /* 11301054 call dword ptr [0x113354fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354fc))), 0x1130105au);
  /* 1130105a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130105d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130105f call 0x113052a0 */
  push32(0x11301064u); f_113052a0();
  /* 11301064 mov esi, esp */
  ESI = (ESP);
  /* 11301066 push 0x1132d388 */
  push32((uint32_t)(0x1132d388u));
  /* 1130106b push 0x113324c0 */
  push32((uint32_t)(0x113324c0u));
  /* 11301070 call dword ptr [0x113354fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354fc))), 0x11301076u);
  /* 11301076 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301079 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130107b call 0x113052a0 */
  push32(0x11301080u); f_113052a0();
  /* 11301080 mov esi, esp */
  ESI = (ESP);
  /* 11301082 push 0x1132d37c */
  push32((uint32_t)(0x1132d37cu));
  /* 11301087 push 0x11332508 */
  push32((uint32_t)(0x11332508u));
  /* 1130108c call dword ptr [0x113354fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354fc))), 0x11301092u);
  /* 11301092 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301095 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301097 call 0x113052a0 */
  push32(0x1130109cu); f_113052a0();
  /* 1130109c mov esi, esp */
  ESI = (ESP);
  /* 1130109e push 0x1132d370 */
  push32((uint32_t)(0x1132d370u));
  /* 113010a3 push 0x11332500 */
  push32((uint32_t)(0x11332500u));
  /* 113010a8 call dword ptr [0x113354fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354fc))), 0x113010aeu);
  /* 113010ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113010b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113010b3 call 0x113052a0 */
  push32(0x113010b8u); f_113052a0();
  /* 113010b8 mov esi, esp */
  ESI = (ESP);
  /* 113010ba push 0x1132d364 */
  push32((uint32_t)(0x1132d364u));
  /* 113010bf push 0x113324f8 */
  push32((uint32_t)(0x113324f8u));
  /* 113010c4 call dword ptr [0x113354fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354fc))), 0x113010cau);
  /* 113010ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113010cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113010cf call 0x113052a0 */
  push32(0x113010d4u); f_113052a0();
  /* 113010d4 mov esi, esp */
  ESI = (ESP);
  /* 113010d6 push 0x1132d358 */
  push32((uint32_t)(0x1132d358u));
  /* 113010db push 0x113324f0 */
  push32((uint32_t)(0x113324f0u));
  /* 113010e0 call dword ptr [0x113354fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354fc))), 0x113010e6u);
  /* 113010e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113010e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113010eb call 0x113052a0 */
  push32(0x113010f0u); f_113052a0();
  /* 113010f0 mov esi, esp */
  ESI = (ESP);
  /* 113010f2 push 0x1132d34c */
  push32((uint32_t)(0x1132d34cu));
  /* 113010f7 push 0x113324e8 */
  push32((uint32_t)(0x113324e8u));
  /* 113010fc call dword ptr [0x113354fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354fc))), 0x11301102u);
  /* 11301102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301107 call 0x113052a0 */
  push32(0x1130110cu); f_113052a0();
  /* 1130110c mov esi, esp */
  ESI = (ESP);
  /* 1130110e push 0x1132d340 */
  push32((uint32_t)(0x1132d340u));
  /* 11301113 push 0x11332520 */
  push32((uint32_t)(0x11332520u));
  /* 11301118 call dword ptr [0x113354fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354fc))), 0x1130111eu);
  /* 1130111e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301123 call 0x113052a0 */
  push32(0x11301128u); f_113052a0();
  /* 11301128 mov esi, esp */
  ESI = (ESP);
  /* 1130112a push 0x1132d334 */
  push32((uint32_t)(0x1132d334u));
  /* 1130112f push 0x11332518 */
  push32((uint32_t)(0x11332518u));
  /* 11301134 call dword ptr [0x113354fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354fc))), 0x1130113au);
  /* 1130113a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130113d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130113f call 0x113052a0 */
  push32(0x11301144u); f_113052a0();
  /* 11301144 mov esi, esp */
  ESI = (ESP);
  /* 11301146 push 0x1132d328 */
  push32((uint32_t)(0x1132d328u));
  /* 1130114b push 0x11332510 */
  push32((uint32_t)(0x11332510u));
  /* 11301150 call dword ptr [0x113354fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354fc))), 0x11301156u);
  /* 11301156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130115b call 0x113052a0 */
  push32(0x11301160u); f_113052a0();
  /* 11301160 mov esi, esp */
  ESI = (ESP);
  /* 11301162 push 0x1132d320 */
  push32((uint32_t)(0x1132d320u));
  /* 11301167 push 0x11332680 */
  push32((uint32_t)(0x11332680u));
  /* 1130116c call dword ptr [0x113354fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354fc))), 0x11301172u);
  /* 11301172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301177 call 0x113052a0 */
  push32(0x1130117cu); f_113052a0();
  /* 1130117c mov esi, esp */
  ESI = (ESP);
  /* 1130117e push 0x1132d318 */
  push32((uint32_t)(0x1132d318u));
  /* 11301183 push 0x113326b0 */
  push32((uint32_t)(0x113326b0u));
  /* 11301188 call dword ptr [0x113354fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354fc))), 0x1130118eu);
  /* 1130118e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301191 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301193 call 0x113052a0 */
  push32(0x11301198u); f_113052a0();
  /* 11301198 mov esi, esp */
  ESI = (ESP);
  /* 1130119a push 0x1132d30c */
  push32((uint32_t)(0x1132d30cu));
  /* 1130119f push 0x11332678 */
  push32((uint32_t)(0x11332678u));
  /* 113011a4 call dword ptr [0x113354fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354fc))), 0x113011aau);
  /* 113011aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113011ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113011af call 0x113052a0 */
  push32(0x113011b4u); f_113052a0();
  /* 113011b4 mov esi, esp */
  ESI = (ESP);
  /* 113011b6 push 0x1132d304 */
  push32((uint32_t)(0x1132d304u));
  /* 113011bb push 0x113325d8 */
  push32((uint32_t)(0x113325d8u));
  /* 113011c0 call dword ptr [0x113354fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354fc))), 0x113011c6u);
  /* 113011c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113011c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113011cb call 0x113052a0 */
  push32(0x113011d0u); f_113052a0();
  /* 113011d0 mov esi, esp */
  ESI = (ESP);
  /* 113011d2 push 0x1132d2fc */
  push32((uint32_t)(0x1132d2fcu));
  /* 113011d7 push 0x113325e0 */
  push32((uint32_t)(0x113325e0u));
  /* 113011dc call dword ptr [0x113354fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354fc))), 0x113011e2u);
  /* 113011e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113011e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113011e7 call 0x113052a0 */
  push32(0x113011ecu); f_113052a0();
  /* 113011ec mov esi, esp */
  ESI = (ESP);
  /* 113011ee push 0x1132d2f4 */
  push32((uint32_t)(0x1132d2f4u));
  /* 113011f3 push 0x113325e8 */
  push32((uint32_t)(0x113325e8u));
  /* 113011f8 call dword ptr [0x113354fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354fc))), 0x113011feu);
  /* 113011fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301203 call 0x113052a0 */
  push32(0x11301208u); f_113052a0();
  /* 11301208 mov esi, esp */
  ESI = (ESP);
  /* 1130120a push 0x1132d2ec */
  push32((uint32_t)(0x1132d2ecu));
  /* 1130120f push 0x113325f0 */
  push32((uint32_t)(0x113325f0u));
  /* 11301214 call dword ptr [0x113354fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354fc))), 0x1130121au);
  /* 1130121a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130121d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130121f call 0x113052a0 */
  push32(0x11301224u); f_113052a0();
  /* 11301224 mov esi, esp */
  ESI = (ESP);
  /* 11301226 push 0x1132d2e4 */
  push32((uint32_t)(0x1132d2e4u));
  /* 1130122b push 0x113325f8 */
  push32((uint32_t)(0x113325f8u));
  /* 11301230 call dword ptr [0x113354fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354fc))), 0x11301236u);
  /* 11301236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301239 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130123b call 0x113052a0 */
  push32(0x11301240u); f_113052a0();
  /* 11301240 mov esi, esp */
  ESI = (ESP);
  /* 11301242 push 0x1132d2dc */
  push32((uint32_t)(0x1132d2dcu));
  /* 11301247 push 0x113326c0 */
  push32((uint32_t)(0x113326c0u));
  /* 1130124c call dword ptr [0x113354fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354fc))), 0x11301252u);
  /* 11301252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301257 call 0x113052a0 */
  push32(0x1130125cu); f_113052a0();
  /* 1130125c mov esi, esp */
  ESI = (ESP);
  /* 1130125e push 0x1132d2d4 */
  push32((uint32_t)(0x1132d2d4u));
  /* 11301263 push 0x113323f0 */
  push32((uint32_t)(0x113323f0u));
  /* 11301268 call dword ptr [0x113354fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354fc))), 0x1130126eu);
  /* 1130126e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301271 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301273 call 0x113052a0 */
  push32(0x11301278u); f_113052a0();
  /* 11301278 mov esi, esp */
  ESI = (ESP);
  /* 1130127a push 0x1132d2cc */
  push32((uint32_t)(0x1132d2ccu));
  /* 1130127f push 0x113323e0 */
  push32((uint32_t)(0x113323e0u));
  /* 11301284 call dword ptr [0x113354fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354fc))), 0x1130128au);
  /* 1130128a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130128d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130128f call 0x113052a0 */
  push32(0x11301294u); f_113052a0();
  /* 11301294 mov esi, esp */
  ESI = (ESP);
  /* 11301296 push 0x1132d2c0 */
  push32((uint32_t)(0x1132d2c0u));
  /* 1130129b push 0x11332668 */
  push32((uint32_t)(0x11332668u));
  /* 113012a0 call dword ptr [0x113354fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354fc))), 0x113012a6u);
  /* 113012a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113012a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113012ab call 0x113052a0 */
  push32(0x113012b0u); f_113052a0();
  /* 113012b0 mov esi, esp */
  ESI = (ESP);
  /* 113012b2 push 0x1132d2b4 */
  push32((uint32_t)(0x1132d2b4u));
  /* 113012b7 push 0x11332670 */
  push32((uint32_t)(0x11332670u));
  /* 113012bc call dword ptr [0x113354fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354fc))), 0x113012c2u);
  /* 113012c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113012c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113012c7 call 0x113052a0 */
  push32(0x113012ccu); f_113052a0();
  /* 113012cc mov esi, esp */
  ESI = (ESP);
  /* 113012ce push 0x1132d2a8 */
  push32((uint32_t)(0x1132d2a8u));
  /* 113012d3 push 0x113324b0 */
  push32((uint32_t)(0x113324b0u));
  /* 113012d8 call dword ptr [0x113354fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354fc))), 0x113012deu);
  /* 113012de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113012e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113012e3 call 0x113052a0 */
  push32(0x113012e8u); f_113052a0();
  /* 113012e8 mov esi, esp */
  ESI = (ESP);
  /* 113012ea push 0x1132d29c */
  push32((uint32_t)(0x1132d29cu));
  /* 113012ef push 0x113324a0 */
  push32((uint32_t)(0x113324a0u));
  /* 113012f4 call dword ptr [0x113354fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354fc))), 0x113012fau);
  /* 113012fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113012fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113012ff call 0x113052a0 */
  push32(0x11301304u); f_113052a0();
  /* 11301304 mov esi, esp */
  ESI = (ESP);
  /* 11301306 push 0x1132d290 */
  push32((uint32_t)(0x1132d290u));
  /* 1130130b push 0x11332498 */
  push32((uint32_t)(0x11332498u));
  /* 11301310 call dword ptr [0x113354fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354fc))), 0x11301316u);
  /* 11301316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301319 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130131b call 0x113052a0 */
  push32(0x11301320u); f_113052a0();
  /* 11301320 mov esi, esp */
  ESI = (ESP);
  /* 11301322 push 0x1132d284 */
  push32((uint32_t)(0x1132d284u));
  /* 11301327 push 0x113324a8 */
  push32((uint32_t)(0x113324a8u));
  /* 1130132c call dword ptr [0x113354fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354fc))), 0x11301332u);
  /* 11301332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301335 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301337 call 0x113052a0 */
  push32(0x1130133cu); f_113052a0();
  /* 1130133c mov esi, esp */
  ESI = (ESP);
  /* 1130133e push 0x1132d27c */
  push32((uint32_t)(0x1132d27cu));
  /* 11301343 push 0x11332490 */
  push32((uint32_t)(0x11332490u));
  /* 11301348 call dword ptr [0x113354fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354fc))), 0x1130134eu);
  /* 1130134e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301351 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301353 call 0x113052a0 */
  push32(0x11301358u); f_113052a0();
  /* 11301358 mov esi, esp */
  ESI = (ESP);
  /* 1130135a push 0x1132d270 */
  push32((uint32_t)(0x1132d270u));
  /* 1130135f push 0x11332690 */
  push32((uint32_t)(0x11332690u));
  /* 11301364 call dword ptr [0x113354fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354fc))), 0x1130136au);
  /* 1130136a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130136d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130136f call 0x113052a0 */
  push32(0x11301374u); f_113052a0();
  /* 11301374 mov esi, esp */
  ESI = (ESP);
  /* 11301376 push 0x1132d264 */
  push32((uint32_t)(0x1132d264u));
  /* 1130137b push 0x11332688 */
  push32((uint32_t)(0x11332688u));
  /* 11301380 call dword ptr [0x113354fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354fc))), 0x11301386u);
  /* 11301386 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301389 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130138b call 0x113052a0 */
  push32(0x11301390u); f_113052a0();
  /* 11301390 mov esi, esp */
  ESI = (ESP);
  /* 11301392 push 0x1132d25c */
  push32((uint32_t)(0x1132d25cu));
  /* 11301397 push 0x113324c8 */
  push32((uint32_t)(0x113324c8u));
  /* 1130139c call dword ptr [0x113354fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354fc))), 0x113013a2u);
  /* 113013a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113013a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113013a7 call 0x113052a0 */
  push32(0x113013acu); f_113052a0();
  /* 113013ac mov esi, esp */
  ESI = (ESP);
  /* 113013ae push 0x1132d254 */
  push32((uint32_t)(0x1132d254u));
  /* 113013b3 push 0x11332698 */
  push32((uint32_t)(0x11332698u));
  /* 113013b8 call dword ptr [0x113354fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354fc))), 0x113013beu);
  /* 113013be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113013c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113013c3 call 0x113052a0 */
  push32(0x113013c8u); f_113052a0();
  /* 113013c8 mov esi, esp */
  ESI = (ESP);
  /* 113013ca push 0x1132d24c */
  push32((uint32_t)(0x1132d24cu));
  /* 113013cf push 0x11332608 */
  push32((uint32_t)(0x11332608u));
  /* 113013d4 call dword ptr [0x11335500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335500))), 0x113013dau);
  /* 113013da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113013dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113013df call 0x113052a0 */
  push32(0x113013e4u); f_113052a0();
  /* 113013e4 mov esi, esp */
  ESI = (ESP);
  /* 113013e6 push 0x1132d244 */
  push32((uint32_t)(0x1132d244u));
  /* 113013eb push 0x11332530 */
  push32((uint32_t)(0x11332530u));
  /* 113013f0 call dword ptr [0x11335500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335500))), 0x113013f6u);
  /* 113013f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113013f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113013fb call 0x113052a0 */
  push32(0x11301400u); f_113052a0();
  /* 11301400 mov esi, esp */
  ESI = (ESP);
  /* 11301402 push 0x1132d238 */
  push32((uint32_t)(0x1132d238u));
  /* 11301407 push 0x113326a0 */
  push32((uint32_t)(0x113326a0u));
  /* 1130140c call dword ptr [0x11335500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335500))), 0x11301412u);
  /* 11301412 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301415 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301417 call 0x113052a0 */
  push32(0x1130141cu); f_113052a0();
  /* 1130141c mov esi, esp */
  ESI = (ESP);
  /* 1130141e push 0x1132d22c */
  push32((uint32_t)(0x1132d22cu));
  /* 11301423 push 0x113326a8 */
  push32((uint32_t)(0x113326a8u));
  /* 11301428 call dword ptr [0x11335500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335500))), 0x1130142eu);
  /* 1130142e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301431 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301433 call 0x113052a0 */
  push32(0x11301438u); f_113052a0();
  /* 11301438 mov esi, esp */
  ESI = (ESP);
  /* 1130143a push 0x1132d224 */
  push32((uint32_t)(0x1132d224u));
  /* 1130143f push 0x113325a8 */
  push32((uint32_t)(0x113325a8u));
  /* 11301444 call dword ptr [0x11335500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335500))), 0x1130144au);
  /* 1130144a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130144d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130144f call 0x113052a0 */
  push32(0x11301454u); f_113052a0();
  /* 11301454 mov esi, esp */
  ESI = (ESP);
  /* 11301456 push 0x1132d21c */
  push32((uint32_t)(0x1132d21cu));
  /* 1130145b push 0x113325b0 */
  push32((uint32_t)(0x113325b0u));
  /* 11301460 call dword ptr [0x11335500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335500))), 0x11301466u);
  /* 11301466 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301469 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130146b call 0x113052a0 */
  push32(0x11301470u); f_113052a0();
  /* 11301470 mov esi, esp */
  ESI = (ESP);
  /* 11301472 push 0x1132d214 */
  push32((uint32_t)(0x1132d214u));
  /* 11301477 push 0x11332630 */
  push32((uint32_t)(0x11332630u));
  /* 1130147c call dword ptr [0x11335500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335500))), 0x11301482u);
  /* 11301482 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301485 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301487 call 0x113052a0 */
  push32(0x1130148cu); f_113052a0();
  /* 1130148c mov esi, esp */
  ESI = (ESP);
  /* 1130148e push 0x1132d20c */
  push32((uint32_t)(0x1132d20cu));
  /* 11301493 push 0x11332638 */
  push32((uint32_t)(0x11332638u));
  /* 11301498 call dword ptr [0x11335500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335500))), 0x1130149eu);
  /* 1130149e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113014a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113014a3 call 0x113052a0 */
  push32(0x113014a8u); f_113052a0();
  /* 113014a8 mov esi, esp */
  ESI = (ESP);
  /* 113014aa push 0x1132d204 */
  push32((uint32_t)(0x1132d204u));
  /* 113014af push 0x11332640 */
  push32((uint32_t)(0x11332640u));
  /* 113014b4 call dword ptr [0x11335500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335500))), 0x113014bau);
  /* 113014ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113014bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113014bf call 0x113052a0 */
  push32(0x113014c4u); f_113052a0();
  /* 113014c4 mov esi, esp */
  ESI = (ESP);
  /* 113014c6 push 0x1132d1fc */
  push32((uint32_t)(0x1132d1fcu));
  /* 113014cb push 0x11332648 */
  push32((uint32_t)(0x11332648u));
  /* 113014d0 call dword ptr [0x11335500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335500))), 0x113014d6u);
  /* 113014d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113014d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113014db call 0x113052a0 */
  push32(0x113014e0u); f_113052a0();
  /* 113014e0 mov esi, esp */
  ESI = (ESP);
  /* 113014e2 push 0x1132d1f0 */
  push32((uint32_t)(0x1132d1f0u));
  /* 113014e7 push 0x11332618 */
  push32((uint32_t)(0x11332618u));
  /* 113014ec call dword ptr [0x11335500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335500))), 0x113014f2u);
  /* 113014f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113014f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113014f7 call 0x113052a0 */
  push32(0x113014fcu); f_113052a0();
  /* 113014fc mov esi, esp */
  ESI = (ESP);
  /* 113014fe push 0x1132d1e4 */
  push32((uint32_t)(0x1132d1e4u));
  /* 11301503 push 0x11332610 */
  push32((uint32_t)(0x11332610u));
  /* 11301508 call dword ptr [0x11335500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335500))), 0x1130150eu);
  /* 1130150e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301511 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301513 call 0x113052a0 */
  push32(0x11301518u); f_113052a0();
  /* 11301518 mov esi, esp */
  ESI = (ESP);
  /* 1130151a push 0x1132d1d8 */
  push32((uint32_t)(0x1132d1d8u));
  /* 1130151f push 0x11332620 */
  push32((uint32_t)(0x11332620u));
  /* 11301524 call dword ptr [0x11335500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335500))), 0x1130152au);
  /* 1130152a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130152d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130152f call 0x113052a0 */
  push32(0x11301534u); f_113052a0();
  /* 11301534 mov esi, esp */
  ESI = (ESP);
  /* 11301536 push 0x1132d1cc */
  push32((uint32_t)(0x1132d1ccu));
  /* 1130153b push 0x11332628 */
  push32((uint32_t)(0x11332628u));
  /* 11301540 call dword ptr [0x11335500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335500))), 0x11301546u);
  /* 11301546 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301549 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130154b call 0x113052a0 */
  push32(0x11301550u); f_113052a0();
  /* 11301550 mov esi, esp */
  ESI = (ESP);
  /* 11301552 push 0x1132d1c4 */
  push32((uint32_t)(0x1132d1c4u));
  /* 11301557 push 0x113324d8 */
  push32((uint32_t)(0x113324d8u));
  /* 1130155c call dword ptr [0x11335500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335500))), 0x11301562u);
  /* 11301562 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301565 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301567 call 0x113052a0 */
  push32(0x1130156cu); f_113052a0();
  /* 1130156c mov esi, esp */
  ESI = (ESP);
  /* 1130156e push 0x1132d1bc */
  push32((uint32_t)(0x1132d1bcu));
  /* 11301573 push 0x113324e0 */
  push32((uint32_t)(0x113324e0u));
  /* 11301578 call dword ptr [0x11335500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335500))), 0x1130157eu);
  /* 1130157e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301581 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301583 call 0x113052a0 */
  push32(0x11301588u); f_113052a0();
  /* 11301588 mov esi, esp */
  ESI = (ESP);
  /* 1130158a push 0x1132d1b0 */
  push32((uint32_t)(0x1132d1b0u));
  /* 1130158f push 0x11332590 */
  push32((uint32_t)(0x11332590u));
  /* 11301594 call dword ptr [0x11335500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335500))), 0x1130159au);
  /* 1130159a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130159d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130159f call 0x113052a0 */
  push32(0x113015a4u); f_113052a0();
  /* 113015a4 mov esi, esp */
  ESI = (ESP);
  /* 113015a6 push 0x1132d1a4 */
  push32((uint32_t)(0x1132d1a4u));
  /* 113015ab push 0x11332598 */
  push32((uint32_t)(0x11332598u));
  /* 113015b0 call dword ptr [0x11335500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335500))), 0x113015b6u);
  /* 113015b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113015b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113015bb call 0x113052a0 */
  push32(0x113015c0u); f_113052a0();
  /* 113015c0 mov esi, esp */
  ESI = (ESP);
  /* 113015c2 push 0x1132d198 */
  push32((uint32_t)(0x1132d198u));
  /* 113015c7 push 0x11332580 */
  push32((uint32_t)(0x11332580u));
  /* 113015cc call dword ptr [0x11335500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335500))), 0x113015d2u);
  /* 113015d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113015d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113015d7 call 0x113052a0 */
  push32(0x113015dcu); f_113052a0();
  /* 113015dc mov esi, esp */
  ESI = (ESP);
  /* 113015de push 0x1132d18c */
  push32((uint32_t)(0x1132d18cu));
  /* 113015e3 push 0x11332588 */
  push32((uint32_t)(0x11332588u));
  /* 113015e8 call dword ptr [0x11335500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335500))), 0x113015eeu);
  /* 113015ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113015f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113015f3 call 0x113052a0 */
  push32(0x113015f8u); f_113052a0();
  /* 113015f8 mov esi, esp */
  ESI = (ESP);
  /* 113015fa push 0x1132d188 */
  push32((uint32_t)(0x1132d188u));
  /* 113015ff push 0x113323e8 */
  push32((uint32_t)(0x113323e8u));
  /* 11301604 call dword ptr [0x11335500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335500))), 0x1130160au);
  /* 1130160a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130160d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130160f call 0x113052a0 */
  push32(0x11301614u); f_113052a0();
  /* 11301614 mov esi, esp */
  ESI = (ESP);
  /* 11301616 push 0x1132d17c */
  push32((uint32_t)(0x1132d17cu));
  /* 1130161b push 0x11332468 */
  push32((uint32_t)(0x11332468u));
  /* 11301620 call dword ptr [0x11335500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335500))), 0x11301626u);
  /* 11301626 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301629 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130162b call 0x113052a0 */
  push32(0x11301630u); f_113052a0();
  /* 11301630 mov esi, esp */
  ESI = (ESP);
  /* 11301632 push 0x1132d170 */
  push32((uint32_t)(0x1132d170u));
  /* 11301637 push 0x11332470 */
  push32((uint32_t)(0x11332470u));
  /* 1130163c call dword ptr [0x11335500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335500))), 0x11301642u);
  /* 11301642 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301645 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301647 call 0x113052a0 */
  push32(0x1130164cu); f_113052a0();
  /* 1130164c mov esi, esp */
  ESI = (ESP);
  /* 1130164e push 0x1132d168 */
  push32((uint32_t)(0x1132d168u));
  /* 11301653 push 0x113325b8 */
  push32((uint32_t)(0x113325b8u));
  /* 11301658 call dword ptr [0x11335500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335500))), 0x1130165eu);
  /* 1130165e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301661 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301663 call 0x113052a0 */
  push32(0x11301668u); f_113052a0();
  /* 11301668 mov esi, esp */
  ESI = (ESP);
  /* 1130166a push 0x1132d160 */
  push32((uint32_t)(0x1132d160u));
  /* 1130166f push 0x113325c0 */
  push32((uint32_t)(0x113325c0u));
  /* 11301674 call dword ptr [0x11335500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335500))), 0x1130167au);
  /* 1130167a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130167d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130167f call 0x113052a0 */
  push32(0x11301684u); f_113052a0();
  /* 11301684 mov esi, esp */
  ESI = (ESP);
  /* 11301686 push 0x1132d158 */
  push32((uint32_t)(0x1132d158u));
  /* 1130168b push 0x113325c8 */
  push32((uint32_t)(0x113325c8u));
  /* 11301690 call dword ptr [0x11335500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335500))), 0x11301696u);
  /* 11301696 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301699 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130169b call 0x113052a0 */
  push32(0x113016a0u); f_113052a0();
  /* 113016a0 mov esi, esp */
  ESI = (ESP);
  /* 113016a2 push 0x1132d150 */
  push32((uint32_t)(0x1132d150u));
  /* 113016a7 push 0x113325d0 */
  push32((uint32_t)(0x113325d0u));
  /* 113016ac call dword ptr [0x11335500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335500))), 0x113016b2u);
  /* 113016b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113016b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113016b7 call 0x113052a0 */
  push32(0x113016bcu); f_113052a0();
  /* 113016bc mov esi, esp */
  ESI = (ESP);
  /* 113016be push 0x1132d13c */
  push32((uint32_t)(0x1132d13cu));
  /* 113016c3 push 0x11332410 */
  push32((uint32_t)(0x11332410u));
  /* 113016c8 call dword ptr [0x113354f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354f8))), 0x113016ceu);
  /* 113016ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113016d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113016d3 call 0x113052a0 */
  push32(0x113016d8u); f_113052a0();
  /* 113016d8 mov esi, esp */
  ESI = (ESP);
  /* 113016da push 0x1132d128 */
  push32((uint32_t)(0x1132d128u));
  /* 113016df push 0x113324d0 */
  push32((uint32_t)(0x113324d0u));
  /* 113016e4 call dword ptr [0x113354f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354f8))), 0x113016eau);
  /* 113016ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113016ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113016ef call 0x113052a0 */
  push32(0x113016f4u); f_113052a0();
  /* 113016f4 mov esi, esp */
  ESI = (ESP);
  /* 113016f6 push 0x1132d114 */
  push32((uint32_t)(0x1132d114u));
  /* 113016fb push 0x11332480 */
  push32((uint32_t)(0x11332480u));
  /* 11301700 call dword ptr [0x113354f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354f8))), 0x11301706u);
  /* 11301706 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301709 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130170b call 0x113052a0 */
  push32(0x11301710u); f_113052a0();
  /* 11301710 mov esi, esp */
  ESI = (ESP);
  /* 11301712 push 0x1132d0fc */
  push32((uint32_t)(0x1132d0fcu));
  /* 11301717 push 0x11332548 */
  push32((uint32_t)(0x11332548u));
  /* 1130171c call dword ptr [0x113354f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354f8))), 0x11301722u);
  /* 11301722 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301725 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301727 call 0x113052a0 */
  push32(0x1130172cu); f_113052a0();
  /* 1130172c mov esi, esp */
  ESI = (ESP);
  /* 1130172e push 0x1132d0f0 */
  push32((uint32_t)(0x1132d0f0u));
  /* 11301733 push 0x113326c8 */
  push32((uint32_t)(0x113326c8u));
  /* 11301738 call dword ptr [0x113354f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354f8))), 0x1130173eu);
  /* 1130173e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301741 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301743 call 0x113052a0 */
  push32(0x11301748u); f_113052a0();
  /* 11301748 mov esi, esp */
  ESI = (ESP);
  /* 1130174a push 0x1132d0e0 */
  push32((uint32_t)(0x1132d0e0u));
  /* 1130174f push 0x11332488 */
  push32((uint32_t)(0x11332488u));
  /* 11301754 call dword ptr [0x113354f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354f8))), 0x1130175au);
  /* 1130175a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130175d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130175f call 0x113052a0 */
  push32(0x11301764u); f_113052a0();
  /* 11301764 mov esi, esp */
  ESI = (ESP);
  /* 11301766 push 0x1132d0d0 */
  push32((uint32_t)(0x1132d0d0u));
  /* 1130176b push 0x11332408 */
  push32((uint32_t)(0x11332408u));
  /* 11301770 call dword ptr [0x113354f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354f8))), 0x11301776u);
  /* 11301776 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301779 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130177b call 0x113052a0 */
  push32(0x11301780u); f_113052a0();
  /* 11301780 mov esi, esp */
  ESI = (ESP);
  /* 11301782 push 0x1132d0c0 */
  push32((uint32_t)(0x1132d0c0u));
  /* 11301787 push 0x11332538 */
  push32((uint32_t)(0x11332538u));
  /* 1130178c call dword ptr [0x113354f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354f8))), 0x11301792u);
  /* 11301792 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301795 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301797 call 0x113052a0 */
  push32(0x1130179cu); f_113052a0();
  /* 1130179c mov esi, esp */
  ESI = (ESP);
  /* 1130179e push 8 */
  push32((uint32_t)(0x8u));
  /* 113017a0 push 0x11332450 */
  push32((uint32_t)(0x11332450u));
  /* 113017a5 call dword ptr [0x11335508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335508))), 0x113017abu);
  /* 113017ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113017ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113017b0 call 0x113052a0 */
  push32(0x113017b5u); f_113052a0();
  /* 113017b5 mov esi, esp */
  ESI = (ESP);
  /* 113017b7 push 8 */
  push32((uint32_t)(0x8u));
  /* 113017b9 push 0x11332448 */
  push32((uint32_t)(0x11332448u));
  /* 113017be call dword ptr [0x11335508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335508))), 0x113017c4u);
  /* 113017c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113017c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113017c9 call 0x113052a0 */
  push32(0x113017ceu); f_113052a0();
  /* 113017ce mov esi, esp */
  ESI = (ESP);
  /* 113017d0 push 8 */
  push32((uint32_t)(0x8u));
  /* 113017d2 push 0x11332460 */
  push32((uint32_t)(0x11332460u));
  /* 113017d7 call dword ptr [0x11335508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335508))), 0x113017ddu);
  /* 113017dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113017e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113017e2 call 0x113052a0 */
  push32(0x113017e7u); f_113052a0();
  /* 113017e7 mov esi, esp */
  ESI = (ESP);
  /* 113017e9 push 8 */
  push32((uint32_t)(0x8u));
  /* 113017eb push 0x11332458 */
  push32((uint32_t)(0x11332458u));
  /* 113017f0 call dword ptr [0x11335508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335508))), 0x113017f6u);
  /* 113017f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113017f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113017fb call 0x113052a0 */
  push32(0x11301800u); f_113052a0();
  /* 11301800 mov esi, esp */
  ESI = (ESP);
  /* 11301802 push 8 */
  push32((uint32_t)(0x8u));
  /* 11301804 push 0x11332428 */
  push32((uint32_t)(0x11332428u));
  /* 11301809 call dword ptr [0x11335508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335508))), 0x1130180fu);
  /* 1130180f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301812 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301814 call 0x113052a0 */
  push32(0x11301819u); f_113052a0();
  /* 11301819 mov esi, esp */
  ESI = (ESP);
  /* 1130181b push 8 */
  push32((uint32_t)(0x8u));
  /* 1130181d push 0x11332420 */
  push32((uint32_t)(0x11332420u));
  /* 11301822 call dword ptr [0x11335508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335508))), 0x11301828u);
  /* 11301828 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130182b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130182d call 0x113052a0 */
  push32(0x11301832u); f_113052a0();
  /* 11301832 mov esi, esp */
  ESI = (ESP);
  /* 11301834 push 8 */
  push32((uint32_t)(0x8u));
  /* 11301836 push 0x11332438 */
  push32((uint32_t)(0x11332438u));
  /* 1130183b call dword ptr [0x11335508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335508))), 0x11301841u);
  /* 11301841 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301844 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301846 call 0x113052a0 */
  push32(0x1130184bu); f_113052a0();
  /* 1130184b mov esi, esp */
  ESI = (ESP);
  /* 1130184d push 8 */
  push32((uint32_t)(0x8u));
  /* 1130184f push 0x11332430 */
  push32((uint32_t)(0x11332430u));
  /* 11301854 call dword ptr [0x11335508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335508))), 0x1130185au);
  /* 1130185a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130185d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130185f call 0x113052a0 */
  push32(0x11301864u); f_113052a0();
  /* 11301864 mov esi, esp */
  ESI = (ESP);
  /* 11301866 push 8 */
  push32((uint32_t)(0x8u));
  /* 11301868 push 0x11332440 */
  push32((uint32_t)(0x11332440u));
  /* 1130186d call dword ptr [0x11335508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335508))), 0x11301873u);
  /* 11301873 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301876 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301878 call 0x113052a0 */
  push32(0x1130187du); f_113052a0();
  /* 1130187d mov esi, esp */
  ESI = (ESP);
  /* 1130187f push 8 */
  push32((uint32_t)(0x8u));
  /* 11301881 push 0x11332528 */
  push32((uint32_t)(0x11332528u));
  /* 11301886 call dword ptr [0x11335508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335508))), 0x1130188cu);
  /* 1130188c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130188f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301891 call 0x113052a0 */
  push32(0x11301896u); f_113052a0();
  /* 11301896 mov esi, esp */
  ESI = (ESP);
  /* 11301898 push 0x1132d0b8 */
  push32((uint32_t)(0x1132d0b8u));
  /* 1130189d push 0x11332660 */
  push32((uint32_t)(0x11332660u));
  /* 113018a2 call dword ptr [0x1133550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133550c))), 0x113018a8u);
  /* 113018a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113018ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113018ad call 0x113052a0 */
  push32(0x113018b2u); f_113052a0();
  /* 113018b2 mov esi, esp */
  ESI = (ESP);
  /* 113018b4 push 0x1132d0a8 */
  push32((uint32_t)(0x1132d0a8u));
  /* 113018b9 push 0x11332550 */
  push32((uint32_t)(0x11332550u));
  /* 113018be call dword ptr [0x1133550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133550c))), 0x113018c4u);
  /* 113018c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113018c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113018c9 call 0x113052a0 */
  push32(0x113018ceu); f_113052a0();
  /* 113018ce mov esi, esp */
  ESI = (ESP);
  /* 113018d0 push 0x1132d098 */
  push32((uint32_t)(0x1132d098u));
  /* 113018d5 push 0x11332560 */
  push32((uint32_t)(0x11332560u));
  /* 113018da call dword ptr [0x1133550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133550c))), 0x113018e0u);
  /* 113018e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113018e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113018e5 call 0x113052a0 */
  push32(0x113018eau); f_113052a0();
  /* 113018ea mov esi, esp */
  ESI = (ESP);
  /* 113018ec push 0x1132d088 */
  push32((uint32_t)(0x1132d088u));
  /* 113018f1 push 0x11332568 */
  push32((uint32_t)(0x11332568u));
  /* 113018f6 call dword ptr [0x1133550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133550c))), 0x113018fcu);
  /* 113018fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113018ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301901 call 0x113052a0 */
  push32(0x11301906u); f_113052a0();
  /* 11301906 mov esi, esp */
  ESI = (ESP);
  /* 11301908 push 0x1132d078 */
  push32((uint32_t)(0x1132d078u));
  /* 1130190d push 0x11332558 */
  push32((uint32_t)(0x11332558u));
  /* 11301912 call dword ptr [0x1133550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133550c))), 0x11301918u);
  /* 11301918 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130191b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130191d call 0x113052a0 */
  push32(0x11301922u); f_113052a0();
  /* 11301922 mov esi, esp */
  ESI = (ESP);
  /* 11301924 push 0x1132d068 */
  push32((uint32_t)(0x1132d068u));
  /* 11301929 push 0x11332540 */
  push32((uint32_t)(0x11332540u));
  /* 1130192e call dword ptr [0x1133550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133550c))), 0x11301934u);
  /* 11301934 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301937 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301939 call 0x113052a0 */
  push32(0x1130193eu); f_113052a0();
  /* 1130193e mov esi, esp */
  ESI = (ESP);
  /* 11301940 push 0x1132d060 */
  push32((uint32_t)(0x1132d060u));
  /* 11301945 push 0x11332658 */
  push32((uint32_t)(0x11332658u));
  /* 1130194a call dword ptr [0x1133550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133550c))), 0x11301950u);
  /* 11301950 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301953 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301955 call 0x113052a0 */
  push32(0x1130195au); f_113052a0();
  /* 1130195a mov esi, esp */
  ESI = (ESP);
  /* 1130195c push 0x1132d054 */
  push32((uint32_t)(0x1132d054u));
  /* 11301961 push 0x113323f8 */
  push32((uint32_t)(0x113323f8u));
  /* 11301966 call dword ptr [0x1133550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133550c))), 0x1130196cu);
  /* 1130196c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130196f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301971 call 0x113052a0 */
  push32(0x11301976u); f_113052a0();
  /* 11301976 mov esi, esp */
  ESI = (ESP);
  /* 11301978 push 0x1132d048 */
  push32((uint32_t)(0x1132d048u));
  /* 1130197d push 0x11332400 */
  push32((uint32_t)(0x11332400u));
  /* 11301982 call dword ptr [0x1133550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133550c))), 0x11301988u);
  /* 11301988 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130198b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130198d call 0x113052a0 */
  push32(0x11301992u); f_113052a0();
  /* 11301992 mov esi, esp */
  ESI = (ESP);
  /* 11301994 push 0x1132d040 */
  push32((uint32_t)(0x1132d040u));
  /* 11301999 push 0x113324b8 */
  push32((uint32_t)(0x113324b8u));
  /* 1130199e call dword ptr [0x1133550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133550c))), 0x113019a4u);
  /* 113019a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113019a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113019a9 call 0x113052a0 */
  push32(0x113019aeu); f_113052a0();
  /* 113019ae mov esi, esp */
  ESI = (ESP);
  /* 113019b0 push 0x11332450 */
  push32((uint32_t)(0x11332450u));
  /* 113019b5 call dword ptr [0x11335504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335504))), 0x113019bbu);
  /* 113019bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113019be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113019c0 call 0x113052a0 */
  push32(0x113019c5u); f_113052a0();
  /* 113019c5 mov esi, esp */
  ESI = (ESP);
  /* 113019c7 push 0x11332448 */
  push32((uint32_t)(0x11332448u));
  /* 113019cc call dword ptr [0x11335504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335504))), 0x113019d2u);
  /* 113019d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113019d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113019d7 call 0x113052a0 */
  push32(0x113019dcu); f_113052a0();
  /* 113019dc mov esi, esp */
  ESI = (ESP);
  /* 113019de push 0x11332460 */
  push32((uint32_t)(0x11332460u));
  /* 113019e3 call dword ptr [0x11335504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335504))), 0x113019e9u);
  /* 113019e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113019ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113019ee call 0x113052a0 */
  push32(0x113019f3u); f_113052a0();
  /* 113019f3 mov esi, esp */
  ESI = (ESP);
  /* 113019f5 push 0x11332458 */
  push32((uint32_t)(0x11332458u));
  /* 113019fa call dword ptr [0x11335504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335504))), 0x11301a00u);
  /* 11301a00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301a03 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301a05 call 0x113052a0 */
  push32(0x11301a0au); f_113052a0();
  /* 11301a0a mov esi, esp */
  ESI = (ESP);
  /* 11301a0c push 0x11332428 */
  push32((uint32_t)(0x11332428u));
  /* 11301a11 call dword ptr [0x11335504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335504))), 0x11301a17u);
  /* 11301a17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301a1a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301a1c call 0x113052a0 */
  push32(0x11301a21u); f_113052a0();
  /* 11301a21 mov esi, esp */
  ESI = (ESP);
  /* 11301a23 push 0x11332420 */
  push32((uint32_t)(0x11332420u));
  /* 11301a28 call dword ptr [0x11335504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335504))), 0x11301a2eu);
  /* 11301a2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301a31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301a33 call 0x113052a0 */
  push32(0x11301a38u); f_113052a0();
  /* 11301a38 mov esi, esp */
  ESI = (ESP);
  /* 11301a3a push 0x11332438 */
  push32((uint32_t)(0x11332438u));
  /* 11301a3f call dword ptr [0x11335504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335504))), 0x11301a45u);
  /* 11301a45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301a48 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301a4a call 0x113052a0 */
  push32(0x11301a4fu); f_113052a0();
  /* 11301a4f mov esi, esp */
  ESI = (ESP);
  /* 11301a51 push 0x11332430 */
  push32((uint32_t)(0x11332430u));
  /* 11301a56 call dword ptr [0x11335504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335504))), 0x11301a5cu);
  /* 11301a5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301a5f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301a61 call 0x113052a0 */
  push32(0x11301a66u); f_113052a0();
  /* 11301a66 mov esi, esp */
  ESI = (ESP);
  /* 11301a68 push 0x11332440 */
  push32((uint32_t)(0x11332440u));
  /* 11301a6d call dword ptr [0x11335504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335504))), 0x11301a73u);
  /* 11301a73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301a76 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301a78 call 0x113052a0 */
  push32(0x11301a7du); f_113052a0();
  /* 11301a7d mov esi, esp */
  ESI = (ESP);
  /* 11301a7f push 0x11332528 */
  push32((uint32_t)(0x11332528u));
  /* 11301a84 call dword ptr [0x11335504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335504))), 0x11301a8au);
  /* 11301a8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301a8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301a8f call 0x113052a0 */
  push32(0x11301a94u); f_113052a0();
  /* 11301a94 mov esi, esp */
  ESI = (ESP);
  /* 11301a96 push 0x11332650 */
  push32((uint32_t)(0x11332650u));
  /* 11301a9b call dword ptr [0x11335504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335504))), 0x11301aa1u);
  /* 11301aa1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301aa4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301aa6 call 0x113052a0 */
  push32(0x11301aabu); f_113052a0();
  /* 11301aab mov esi, esp */
  ESI = (ESP);
  /* 11301aad push 0x1132d038 */
  push32((uint32_t)(0x1132d038u));
  /* 11301ab2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11301ab4 call dword ptr [0x11335514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335514))), 0x11301abau);
  /* 11301aba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301abd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301abf call 0x113052a0 */
  push32(0x11301ac4u); f_113052a0();
  /* 11301ac4 mov esi, esp */
  ESI = (ESP);
  /* 11301ac6 push 0x1132d030 */
  push32((uint32_t)(0x1132d030u));
  /* 11301acb push 2 */
  push32((uint32_t)(0x2u));
  /* 11301acd call dword ptr [0x11335514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335514))), 0x11301ad3u);
  /* 11301ad3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301ad6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301ad8 call 0x113052a0 */
  push32(0x11301addu); f_113052a0();
  /* 11301add mov esi, esp */
  ESI = (ESP);
  /* 11301adf push 0x1132d028 */
  push32((uint32_t)(0x1132d028u));
  /* 11301ae4 push 3 */
  push32((uint32_t)(0x3u));
  /* 11301ae6 call dword ptr [0x11335514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335514))), 0x11301aecu);
  /* 11301aec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301aef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301af1 call 0x113052a0 */
  push32(0x11301af6u); f_113052a0();
  /* 11301af6 mov esi, esp */
  ESI = (ESP);
  /* 11301af8 push 0x1132d01c */
  push32((uint32_t)(0x1132d01cu));
  /* 11301afd push 5 */
  push32((uint32_t)(0x5u));
  /* 11301aff call dword ptr [0x11335514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335514))), 0x11301b05u);
  /* 11301b05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301b08 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301b0a call 0x113052a0 */
  push32(0x11301b0fu); f_113052a0();
  /* 11301b0f mov esi, esp */
  ESI = (ESP);
  /* 11301b11 push 3 */
  push32((uint32_t)(0x3u));
  /* 11301b13 push 0 */
  push32((uint32_t)(0x0u));
  /* 11301b15 call dword ptr [0x11335518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335518))), 0x11301b1bu);
  /* 11301b1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301b1e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301b20 call 0x113052a0 */
  push32(0x11301b25u); f_113052a0();
  /* 11301b25 mov esi, esp */
  ESI = (ESP);
  /* 11301b27 push 3 */
  push32((uint32_t)(0x3u));
  /* 11301b29 push 1 */
  push32((uint32_t)(0x1u));
  /* 11301b2b call dword ptr [0x11335518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335518))), 0x11301b31u);
  /* 11301b31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301b34 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301b36 call 0x113052a0 */
  push32(0x11301b3bu); f_113052a0();
  /* 11301b3b mov esi, esp */
  ESI = (ESP);
  /* 11301b3d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11301b3f push 2 */
  push32((uint32_t)(0x2u));
  /* 11301b41 call dword ptr [0x11335518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335518))), 0x11301b47u);
  /* 11301b47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301b4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301b4c call 0x113052a0 */
  push32(0x11301b51u); f_113052a0();
  /* 11301b51 mov esi, esp */
  ESI = (ESP);
  /* 11301b53 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11301b55 push 3 */
  push32((uint32_t)(0x3u));
  /* 11301b57 call dword ptr [0x11335518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335518))), 0x11301b5du);
  /* 11301b5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301b60 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301b62 call 0x113052a0 */
  push32(0x11301b67u); f_113052a0();
  /* 11301b67 mov esi, esp */
  ESI = (ESP);
  /* 11301b69 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11301b6b push 5 */
  push32((uint32_t)(0x5u));
  /* 11301b6d call dword ptr [0x11335518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335518))), 0x11301b73u);
  /* 11301b73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301b76 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301b78 call 0x113052a0 */
  push32(0x11301b7du); f_113052a0();
  /* 11301b7d mov esi, esp */
  ESI = (ESP);
  /* 11301b7f push 0 */
  push32((uint32_t)(0x0u));
  /* 11301b81 push 0x11332410 */
  push32((uint32_t)(0x11332410u));
  /* 11301b86 push 0 */
  push32((uint32_t)(0x0u));
  /* 11301b88 call dword ptr [0x11335510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335510))), 0x11301b8eu);
  /* 11301b8e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301b91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301b93 call 0x113052a0 */
  push32(0x11301b98u); f_113052a0();
  /* 11301b98 mov esi, esp */
  ESI = (ESP);
  /* 11301b9a push 0 */
  push32((uint32_t)(0x0u));
  /* 11301b9c push 0x113324d0 */
  push32((uint32_t)(0x113324d0u));
  /* 11301ba1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11301ba3 call dword ptr [0x11335510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335510))), 0x11301ba9u);
  /* 11301ba9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301bac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301bae call 0x113052a0 */
  push32(0x11301bb3u); f_113052a0();
  /* 11301bb3 pop edi */
  EDI = (pop32());
  /* 11301bb4 pop esi */
  ESI = (pop32());
  /* 11301bb5 pop ebx */
  EBX = (pop32());
  /* 11301bb6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301bb9 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301bbb call 0x113052a0 */
  push32(0x11301bc0u); f_113052a0();
  /* 11301bc0 mov esp, ebp */
  ESP = (EBP);
  /* 11301bc2 pop ebp */
  EBP = (pop32());
  /* 11301bc3 ret  */
  ESPCHK(0x11301030u, _esp0);
  ESP += 4; return;
}

/* FUN_10001eb0 @ 0x11301eb0 (67 bytes, 26 insns) */
void f_11301eb0(void) {
  FTRACE(0x11301eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11301eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11301eb1 mov ebp, esp */
  EBP = (ESP);
  /* 11301eb3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11301eb6 push ebx */
  push32((uint32_t)(EBX));
  /* 11301eb7 push esi */
  push32((uint32_t)(ESI));
  /* 11301eb8 push edi */
  push32((uint32_t)(EDI));
  /* 11301eb9 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11301ebc mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11301ec1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11301ec6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11301ec8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11301ecb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11301ece cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301ed2 je 0x11301ed6 */
  if (C.zf) goto L_11301ed6;
  /* 11301ed4 jmp 0x11301edb */
  goto L_11301edb;
L_11301ed6:;
  /* 11301ed6 call 0x11301005 */
  push32(0x11301edbu); f_11301005();
L_11301edb:;
  /* 11301edb mov eax, 1 */
  EAX = (0x1u);
  /* 11301ee0 pop edi */
  EDI = (pop32());
  /* 11301ee1 pop esi */
  ESI = (pop32());
  /* 11301ee2 pop ebx */
  EBX = (pop32());
  /* 11301ee3 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301ee6 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301ee8 call 0x113052a0 */
  push32(0x11301eedu); f_113052a0();
  /* 11301eed mov esp, ebp */
  ESP = (EBP);
  /* 11301eef pop ebp */
  EBP = (pop32());
  /* 11301ef0 ret 0xc */
  ESPCHK(0x11301eb0u, _esp0);
  ESP += 16; return;
}

/* FUN_10001f10 @ 0x11301f10 (10273 bytes, 2939 insns) [3 switch table(s)] */
void f_11301f10(void) {
  FTRACE(0x11301f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11301f10 push ebp */
  push32((uint32_t)(EBP));
  /* 11301f11 mov ebp, esp */
  EBP = (ESP);
  /* 11301f13 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11301f16 push ebx */
  push32((uint32_t)(EBX));
  /* 11301f17 push esi */
  push32((uint32_t)(ESI));
  /* 11301f18 push edi */
  push32((uint32_t)(EDI));
  /* 11301f19 lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 11301f1c mov ecx, 0x13 */
  ECX = (0x13u);
  /* 11301f21 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11301f26 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11301f28 mov esi, esp */
  ESI = (ESP);
  /* 11301f2a push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11301f2c call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x11301f32u);
  /* 11301f32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301f35 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301f37 call 0x113052a0 */
  push32(0x11301f3cu); f_113052a0();
  /* 11301f3c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11301f41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11301f43 je 0x113027a4 */
  if (C.zf) goto L_113027a4;
  /* 11301f49 mov esi, esp */
  ESI = (ESP);
  /* 11301f4b push 0 */
  push32((uint32_t)(0x0u));
  /* 11301f4d push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11301f4f call dword ptr [0x11335460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335460))), 0x11301f55u);
  /* 11301f55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301f58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301f5a call 0x113052a0 */
  push32(0x11301f5fu); f_113052a0();
  /* 11301f5f mov esi, esp */
  ESI = (ESP);
  /* 11301f61 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11301f63 call dword ptr [0x11335464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335464))), 0x11301f69u);
  /* 11301f69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301f6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301f6e call 0x113052a0 */
  push32(0x11301f73u); f_113052a0();
  /* 11301f73 mov esi, esp */
  ESI = (ESP);
  /* 11301f75 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11301f77 call dword ptr [0x1133545c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133545c))), 0x11301f7du);
  /* 11301f7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301f80 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301f82 call 0x113052a0 */
  push32(0x11301f87u); f_113052a0();
  /* 11301f87 mov esi, esp */
  ESI = (ESP);
  /* 11301f89 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11301f8b call dword ptr [0x1133545c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133545c))), 0x11301f91u);
  /* 11301f91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301f94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301f96 call 0x113052a0 */
  push32(0x11301f9bu); f_113052a0();
  /* 11301f9b mov esi, esp */
  ESI = (ESP);
  /* 11301f9d push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11301f9f call dword ptr [0x1133545c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133545c))), 0x11301fa5u);
  /* 11301fa5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301fa8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301faa call 0x113052a0 */
  push32(0x11301fafu); f_113052a0();
  /* 11301faf mov esi, esp */
  ESI = (ESP);
  /* 11301fb1 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11301fb3 call dword ptr [0x1133545c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133545c))), 0x11301fb9u);
  /* 11301fb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301fbc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301fbe call 0x113052a0 */
  push32(0x11301fc3u); f_113052a0();
  /* 11301fc3 mov esi, esp */
  ESI = (ESP);
  /* 11301fc5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11301fc7 call dword ptr [0x1133545c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133545c))), 0x11301fcdu);
  /* 11301fcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301fd0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301fd2 call 0x113052a0 */
  push32(0x11301fd7u); f_113052a0();
  /* 11301fd7 mov esi, esp */
  ESI = (ESP);
  /* 11301fd9 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11301fdb call dword ptr [0x1133545c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133545c))), 0x11301fe1u);
  /* 11301fe1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301fe4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301fe6 call 0x113052a0 */
  push32(0x11301febu); f_113052a0();
  /* 11301feb mov esi, esp */
  ESI = (ESP);
  /* 11301fed push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11301fef call dword ptr [0x1133545c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133545c))), 0x11301ff5u);
  /* 11301ff5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11301ff8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11301ffa call 0x113052a0 */
  push32(0x11301fffu); f_113052a0();
  /* 11301fff mov esi, esp */
  ESI = (ESP);
  /* 11302001 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11302003 call dword ptr [0x1133545c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133545c))), 0x11302009u);
  /* 11302009 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130200c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130200e call 0x113052a0 */
  push32(0x11302013u); f_113052a0();
  /* 11302013 mov esi, esp */
  ESI = (ESP);
  /* 11302015 push 0x11332508 */
  push32((uint32_t)(0x11332508u));
  /* 1130201a call dword ptr [0x1133546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133546c))), 0x11302020u);
  /* 11302020 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302023 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302025 call 0x113052a0 */
  push32(0x1130202au); f_113052a0();
  /* 1130202a mov esi, esp */
  ESI = (ESP);
  /* 1130202c push 0x113324e8 */
  push32((uint32_t)(0x113324e8u));
  /* 11302031 call dword ptr [0x1133546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133546c))), 0x11302037u);
  /* 11302037 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130203a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130203c call 0x113052a0 */
  push32(0x11302041u); f_113052a0();
  /* 11302041 mov esi, esp */
  ESI = (ESP);
  /* 11302043 push 0x11332518 */
  push32((uint32_t)(0x11332518u));
  /* 11302048 call dword ptr [0x1133546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133546c))), 0x1130204eu);
  /* 1130204e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302051 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302053 call 0x113052a0 */
  push32(0x11302058u); f_113052a0();
  /* 11302058 mov esi, esp */
  ESI = (ESP);
  /* 1130205a push 0x113324f8 */
  push32((uint32_t)(0x113324f8u));
  /* 1130205f call dword ptr [0x11335470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335470))), 0x11302065u);
  /* 11302065 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302068 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130206a call 0x113052a0 */
  push32(0x1130206fu); f_113052a0();
  /* 1130206f mov esi, esp */
  ESI = (ESP);
  /* 11302071 push 0x113324f0 */
  push32((uint32_t)(0x113324f0u));
  /* 11302076 call dword ptr [0x11335470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335470))), 0x1130207cu);
  /* 1130207c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130207f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302081 call 0x113052a0 */
  push32(0x11302086u); f_113052a0();
  /* 11302086 mov esi, esp */
  ESI = (ESP);
  /* 11302088 push 0x11332520 */
  push32((uint32_t)(0x11332520u));
  /* 1130208d call dword ptr [0x11335470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335470))), 0x11302093u);
  /* 11302093 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302096 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302098 call 0x113052a0 */
  push32(0x1130209du); f_113052a0();
  /* 1130209d mov esi, esp */
  ESI = (ESP);
  /* 1130209f push 0x11332500 */
  push32((uint32_t)(0x11332500u));
  /* 113020a4 call dword ptr [0x11335468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335468))), 0x113020aau);
  /* 113020aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113020ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113020af call 0x113052a0 */
  push32(0x113020b4u); f_113052a0();
  /* 113020b4 mov esi, esp */
  ESI = (ESP);
  /* 113020b6 push 0x11332510 */
  push32((uint32_t)(0x11332510u));
  /* 113020bb call dword ptr [0x11335468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335468))), 0x113020c1u);
  /* 113020c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113020c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113020c6 call 0x113052a0 */
  push32(0x113020cbu); f_113052a0();
  /* 113020cb mov esi, esp */
  ESI = (ESP);
  /* 113020cd push 0 */
  push32((uint32_t)(0x0u));
  /* 113020cf push 0x11332680 */
  push32((uint32_t)(0x11332680u));
  /* 113020d4 call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x113020dau);
  /* 113020da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113020dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113020df call 0x113052a0 */
  push32(0x113020e4u); f_113052a0();
  /* 113020e4 mov esi, esp */
  ESI = (ESP);
  /* 113020e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 113020e8 push 0x113326b0 */
  push32((uint32_t)(0x113326b0u));
  /* 113020ed call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x113020f3u);
  /* 113020f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113020f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113020f8 call 0x113052a0 */
  push32(0x113020fdu); f_113052a0();
  /* 113020fd mov esi, esp */
  ESI = (ESP);
  /* 113020ff push 1 */
  push32((uint32_t)(0x1u));
  /* 11302101 push 1 */
  push32((uint32_t)(0x1u));
  /* 11302103 call dword ptr [0x1133547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133547c))), 0x11302109u);
  /* 11302109 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130210c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130210e call 0x113052a0 */
  push32(0x11302113u); f_113052a0();
  /* 11302113 mov esi, esp */
  ESI = (ESP);
  /* 11302115 push 0 */
  push32((uint32_t)(0x0u));
  /* 11302117 push 0x11332668 */
  push32((uint32_t)(0x11332668u));
  /* 1130211c call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x11302122u);
  /* 11302122 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302125 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302127 call 0x113052a0 */
  push32(0x1130212cu); f_113052a0();
  /* 1130212c mov esi, esp */
  ESI = (ESP);
  /* 1130212e push 1 */
  push32((uint32_t)(0x1u));
  /* 11302130 push 0x11332670 */
  push32((uint32_t)(0x11332670u));
  /* 11302135 call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x1130213bu);
  /* 1130213b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130213e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302140 call 0x113052a0 */
  push32(0x11302145u); f_113052a0();
  /* 11302145 mov esi, esp */
  ESI = (ESP);
  /* 11302147 push 1 */
  push32((uint32_t)(0x1u));
  /* 11302149 push 2 */
  push32((uint32_t)(0x2u));
  /* 1130214b call dword ptr [0x1133547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133547c))), 0x11302151u);
  /* 11302151 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302154 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302156 call 0x113052a0 */
  push32(0x1130215bu); f_113052a0();
  /* 1130215b mov esi, esp */
  ESI = (ESP);
  /* 1130215d push 0 */
  push32((uint32_t)(0x0u));
  /* 1130215f push 0x113324b0 */
  push32((uint32_t)(0x113324b0u));
  /* 11302164 call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x1130216au);
  /* 1130216a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130216d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130216f call 0x113052a0 */
  push32(0x11302174u); f_113052a0();
  /* 11302174 mov esi, esp */
  ESI = (ESP);
  /* 11302176 push 0 */
  push32((uint32_t)(0x0u));
  /* 11302178 push 0x11332580 */
  push32((uint32_t)(0x11332580u));
  /* 1130217d push 2 */
  push32((uint32_t)(0x2u));
  /* 1130217f call dword ptr [0x11335474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335474))), 0x11302185u);
  /* 11302185 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302188 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130218a call 0x113052a0 */
  push32(0x1130218fu); f_113052a0();
  /* 1130218f mov esi, esp */
  ESI = (ESP);
  /* 11302191 push 0 */
  push32((uint32_t)(0x0u));
  /* 11302193 push 0x113324a0 */
  push32((uint32_t)(0x113324a0u));
  /* 11302198 call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x1130219eu);
  /* 1130219e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113021a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113021a3 call 0x113052a0 */
  push32(0x113021a8u); f_113052a0();
  /* 113021a8 mov esi, esp */
  ESI = (ESP);
  /* 113021aa push 0x82 */
  push32((uint32_t)(0x82u));
  /* 113021af push 0x11332588 */
  push32((uint32_t)(0x11332588u));
  /* 113021b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 113021b6 call dword ptr [0x11335474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335474))), 0x113021bcu);
  /* 113021bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113021bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113021c1 call 0x113052a0 */
  push32(0x113021c6u); f_113052a0();
  /* 113021c6 mov esi, esp */
  ESI = (ESP);
  /* 113021c8 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 113021cd push 6 */
  push32((uint32_t)(0x6u));
  /* 113021cf call dword ptr [0x11335484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335484))), 0x113021d5u);
  /* 113021d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113021d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113021da call 0x113052a0 */
  push32(0x113021dfu); f_113052a0();
  /* 113021df mov esi, esp */
  ESI = (ESP);
  /* 113021e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 113021e3 call dword ptr [0x11335488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335488))), 0x113021e9u);
  /* 113021e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113021ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113021ee call 0x113052a0 */
  push32(0x113021f3u); f_113052a0();
  /* 113021f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113021f6 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113021fa ja 0x113025a5 */
  if ((!C.cf&&!C.zf)) goto L_113025a5;
  /* 11302200 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11302203 jmp dword ptr [eax*4 + 0x11304731] */
  switch (EAX) {
    case 0: goto L_1130220a;
    case 1: goto L_11302342;
    case 2: goto L_1130242f;
    case 3: goto L_11302503;
    case 4: goto L_113030dd;
    case 5: goto L_11303136;
    case 6: goto L_1130318f;
    case 7: goto L_113031e5;
    case 8: goto L_113040ee;
    case 9: goto L_11304147;
    case 10: goto L_113041a0;
    case 11: goto L_113041f6;
    default: x86_unimpl("switch@0x11302203 out of table"); return;
  }
L_1130220a:;
  /* 1130220a mov esi, esp */
  ESI = (ESP);
  /* 1130220c push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11302211 push 3 */
  push32((uint32_t)(0x3u));
  /* 11302213 push 0 */
  push32((uint32_t)(0x0u));
  /* 11302215 call dword ptr [0x11335480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335480))), 0x1130221bu);
  /* 1130221b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130221e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302220 call 0x113052a0 */
  push32(0x11302225u); f_113052a0();
  /* 11302225 mov esi, esp */
  ESI = (ESP);
  /* 11302227 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 1130222c push 0 */
  push32((uint32_t)(0x0u));
  /* 1130222e push 0 */
  push32((uint32_t)(0x0u));
  /* 11302230 call dword ptr [0x11335480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335480))), 0x11302236u);
  /* 11302236 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302239 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130223b call 0x113052a0 */
  push32(0x11302240u); f_113052a0();
  /* 11302240 mov esi, esp */
  ESI = (ESP);
  /* 11302242 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11302247 push 2 */
  push32((uint32_t)(0x2u));
  /* 11302249 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130224b call dword ptr [0x11335480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335480))), 0x11302251u);
  /* 11302251 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302254 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302256 call 0x113052a0 */
  push32(0x1130225bu); f_113052a0();
  /* 1130225b mov esi, esp */
  ESI = (ESP);
  /* 1130225d push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11302262 push 1 */
  push32((uint32_t)(0x1u));
  /* 11302264 push 0 */
  push32((uint32_t)(0x0u));
  /* 11302266 call dword ptr [0x11335480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335480))), 0x1130226cu);
  /* 1130226c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130226f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302271 call 0x113052a0 */
  push32(0x11302276u); f_113052a0();
  /* 11302276 mov esi, esp */
  ESI = (ESP);
  /* 11302278 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 1130227d push 5 */
  push32((uint32_t)(0x5u));
  /* 1130227f push 0 */
  push32((uint32_t)(0x0u));
  /* 11302281 call dword ptr [0x11335480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335480))), 0x11302287u);
  /* 11302287 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130228a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130228c call 0x113052a0 */
  push32(0x11302291u); f_113052a0();
  /* 11302291 mov esi, esp */
  ESI = (ESP);
  /* 11302293 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 11302298 push 4 */
  push32((uint32_t)(0x4u));
  /* 1130229a push 0 */
  push32((uint32_t)(0x0u));
  /* 1130229c call dword ptr [0x11335480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335480))), 0x113022a2u);
  /* 113022a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113022a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113022a7 call 0x113052a0 */
  push32(0x113022acu); f_113052a0();
  /* 113022ac mov esi, esp */
  ESI = (ESP);
  /* 113022ae push 0 */
  push32((uint32_t)(0x0u));
  /* 113022b0 push 0x113325d8 */
  push32((uint32_t)(0x113325d8u));
  /* 113022b5 call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x113022bbu);
  /* 113022bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113022be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113022c0 call 0x113052a0 */
  push32(0x113022c5u); f_113052a0();
  /* 113022c5 mov esi, esp */
  ESI = (ESP);
  /* 113022c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 113022c9 push 0x113325e0 */
  push32((uint32_t)(0x113325e0u));
  /* 113022ce call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x113022d4u);
  /* 113022d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113022d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113022d9 call 0x113052a0 */
  push32(0x113022deu); f_113052a0();
  /* 113022de mov esi, esp */
  ESI = (ESP);
  /* 113022e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 113022e2 push 0x113325e8 */
  push32((uint32_t)(0x113325e8u));
  /* 113022e7 call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x113022edu);
  /* 113022ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113022f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113022f2 call 0x113052a0 */
  push32(0x113022f7u); f_113052a0();
  /* 113022f7 mov esi, esp */
  ESI = (ESP);
  /* 113022f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 113022fb push 0x113325f0 */
  push32((uint32_t)(0x113325f0u));
  /* 11302300 call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x11302306u);
  /* 11302306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302309 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130230b call 0x113052a0 */
  push32(0x11302310u); f_113052a0();
  /* 11302310 mov esi, esp */
  ESI = (ESP);
  /* 11302312 push 1 */
  push32((uint32_t)(0x1u));
  /* 11302314 push 0x113325f8 */
  push32((uint32_t)(0x113325f8u));
  /* 11302319 call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x1130231fu);
  /* 1130231f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302322 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302324 call 0x113052a0 */
  push32(0x11302329u); f_113052a0();
  /* 11302329 mov esi, esp */
  ESI = (ESP);
  /* 1130232b push 5 */
  push32((uint32_t)(0x5u));
  /* 1130232d call dword ptr [0x11335490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335490))), 0x11302333u);
  /* 11302333 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302336 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302338 call 0x113052a0 */
  push32(0x1130233du); f_113052a0();
  /* 1130233d jmp 0x113025a5 */
  goto L_113025a5;
L_11302342:;
  /* 11302342 mov esi, esp */
  ESI = (ESP);
  /* 11302344 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 11302349 push 3 */
  push32((uint32_t)(0x3u));
  /* 1130234b push 0 */
  push32((uint32_t)(0x0u));
  /* 1130234d call dword ptr [0x11335480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335480))), 0x11302353u);
  /* 11302353 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302356 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302358 call 0x113052a0 */
  push32(0x1130235du); f_113052a0();
  /* 1130235d mov esi, esp */
  ESI = (ESP);
  /* 1130235f push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 11302364 push 0 */
  push32((uint32_t)(0x0u));
  /* 11302366 push 0 */
  push32((uint32_t)(0x0u));
  /* 11302368 call dword ptr [0x11335480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335480))), 0x1130236eu);
  /* 1130236e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302371 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302373 call 0x113052a0 */
  push32(0x11302378u); f_113052a0();
  /* 11302378 mov esi, esp */
  ESI = (ESP);
  /* 1130237a push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 1130237f push 2 */
  push32((uint32_t)(0x2u));
  /* 11302381 push 0 */
  push32((uint32_t)(0x0u));
  /* 11302383 call dword ptr [0x11335480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335480))), 0x11302389u);
  /* 11302389 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130238c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130238e call 0x113052a0 */
  push32(0x11302393u); f_113052a0();
  /* 11302393 mov esi, esp */
  ESI = (ESP);
  /* 11302395 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 1130239a push 1 */
  push32((uint32_t)(0x1u));
  /* 1130239c push 0 */
  push32((uint32_t)(0x0u));
  /* 1130239e call dword ptr [0x11335480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335480))), 0x113023a4u);
  /* 113023a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113023a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113023a9 call 0x113052a0 */
  push32(0x113023aeu); f_113052a0();
  /* 113023ae mov esi, esp */
  ESI = (ESP);
  /* 113023b0 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 113023b5 push 5 */
  push32((uint32_t)(0x5u));
  /* 113023b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 113023b9 call dword ptr [0x11335480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335480))), 0x113023bfu);
  /* 113023bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113023c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113023c4 call 0x113052a0 */
  push32(0x113023c9u); f_113052a0();
  /* 113023c9 mov esi, esp */
  ESI = (ESP);
  /* 113023cb push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 113023d0 push 4 */
  push32((uint32_t)(0x4u));
  /* 113023d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113023d4 call dword ptr [0x11335480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335480))), 0x113023dau);
  /* 113023da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113023dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113023df call 0x113052a0 */
  push32(0x113023e4u); f_113052a0();
  /* 113023e4 mov esi, esp */
  ESI = (ESP);
  /* 113023e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 113023e8 push 0x113325d8 */
  push32((uint32_t)(0x113325d8u));
  /* 113023ed call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x113023f3u);
  /* 113023f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113023f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113023f8 call 0x113052a0 */
  push32(0x113023fdu); f_113052a0();
  /* 113023fd mov esi, esp */
  ESI = (ESP);
  /* 113023ff push 1 */
  push32((uint32_t)(0x1u));
  /* 11302401 push 0x113325e8 */
  push32((uint32_t)(0x113325e8u));
  /* 11302406 call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x1130240cu);
  /* 1130240c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130240f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302411 call 0x113052a0 */
  push32(0x11302416u); f_113052a0();
  /* 11302416 mov esi, esp */
  ESI = (ESP);
  /* 11302418 push 5 */
  push32((uint32_t)(0x5u));
  /* 1130241a call dword ptr [0x11335490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335490))), 0x11302420u);
  /* 11302420 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302423 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302425 call 0x113052a0 */
  push32(0x1130242au); f_113052a0();
  /* 1130242a jmp 0x113025a5 */
  goto L_113025a5;
L_1130242f:;
  /* 1130242f mov esi, esp */
  ESI = (ESP);
  /* 11302431 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11302436 push 3 */
  push32((uint32_t)(0x3u));
  /* 11302438 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130243a call dword ptr [0x11335480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335480))), 0x11302440u);
  /* 11302440 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302443 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302445 call 0x113052a0 */
  push32(0x1130244au); f_113052a0();
  /* 1130244a mov esi, esp */
  ESI = (ESP);
  /* 1130244c push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11302451 push 0 */
  push32((uint32_t)(0x0u));
  /* 11302453 push 0 */
  push32((uint32_t)(0x0u));
  /* 11302455 call dword ptr [0x11335480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335480))), 0x1130245bu);
  /* 1130245b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130245e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302460 call 0x113052a0 */
  push32(0x11302465u); f_113052a0();
  /* 11302465 mov esi, esp */
  ESI = (ESP);
  /* 11302467 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 1130246c push 2 */
  push32((uint32_t)(0x2u));
  /* 1130246e push 0 */
  push32((uint32_t)(0x0u));
  /* 11302470 call dword ptr [0x11335480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335480))), 0x11302476u);
  /* 11302476 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302479 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130247b call 0x113052a0 */
  push32(0x11302480u); f_113052a0();
  /* 11302480 mov esi, esp */
  ESI = (ESP);
  /* 11302482 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11302487 push 1 */
  push32((uint32_t)(0x1u));
  /* 11302489 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130248b call dword ptr [0x11335480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335480))), 0x11302491u);
  /* 11302491 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302494 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302496 call 0x113052a0 */
  push32(0x1130249bu); f_113052a0();
  /* 1130249b mov esi, esp */
  ESI = (ESP);
  /* 1130249d push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 113024a2 push 5 */
  push32((uint32_t)(0x5u));
  /* 113024a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113024a6 call dword ptr [0x11335480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335480))), 0x113024acu);
  /* 113024ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113024af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113024b1 call 0x113052a0 */
  push32(0x113024b6u); f_113052a0();
  /* 113024b6 mov esi, esp */
  ESI = (ESP);
  /* 113024b8 push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 113024bd push 4 */
  push32((uint32_t)(0x4u));
  /* 113024bf push 0 */
  push32((uint32_t)(0x0u));
  /* 113024c1 call dword ptr [0x11335480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335480))), 0x113024c7u);
  /* 113024c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113024ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113024cc call 0x113052a0 */
  push32(0x113024d1u); f_113052a0();
  /* 113024d1 mov esi, esp */
  ESI = (ESP);
  /* 113024d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113024d5 push 0x113325f0 */
  push32((uint32_t)(0x113325f0u));
  /* 113024da call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x113024e0u);
  /* 113024e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113024e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113024e5 call 0x113052a0 */
  push32(0x113024eau); f_113052a0();
  /* 113024ea mov esi, esp */
  ESI = (ESP);
  /* 113024ec push 5 */
  push32((uint32_t)(0x5u));
  /* 113024ee call dword ptr [0x11335490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335490))), 0x113024f4u);
  /* 113024f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113024f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113024f9 call 0x113052a0 */
  push32(0x113024feu); f_113052a0();
  /* 113024fe jmp 0x113025a5 */
  goto L_113025a5;
L_11302503:;
  /* 11302503 mov esi, esp */
  ESI = (ESP);
  /* 11302505 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1130250a push 3 */
  push32((uint32_t)(0x3u));
  /* 1130250c push 0 */
  push32((uint32_t)(0x0u));
  /* 1130250e call dword ptr [0x11335480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335480))), 0x11302514u);
  /* 11302514 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302517 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302519 call 0x113052a0 */
  push32(0x1130251eu); f_113052a0();
  /* 1130251e mov esi, esp */
  ESI = (ESP);
  /* 11302520 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11302525 push 0 */
  push32((uint32_t)(0x0u));
  /* 11302527 push 0 */
  push32((uint32_t)(0x0u));
  /* 11302529 call dword ptr [0x11335480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335480))), 0x1130252fu);
  /* 1130252f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302532 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302534 call 0x113052a0 */
  push32(0x11302539u); f_113052a0();
  /* 11302539 mov esi, esp */
  ESI = (ESP);
  /* 1130253b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11302540 push 2 */
  push32((uint32_t)(0x2u));
  /* 11302542 push 0 */
  push32((uint32_t)(0x0u));
  /* 11302544 call dword ptr [0x11335480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335480))), 0x1130254au);
  /* 1130254a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130254d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130254f call 0x113052a0 */
  push32(0x11302554u); f_113052a0();
  /* 11302554 mov esi, esp */
  ESI = (ESP);
  /* 11302556 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1130255b push 1 */
  push32((uint32_t)(0x1u));
  /* 1130255d push 0 */
  push32((uint32_t)(0x0u));
  /* 1130255f call dword ptr [0x11335480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335480))), 0x11302565u);
  /* 11302565 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302568 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130256a call 0x113052a0 */
  push32(0x1130256fu); f_113052a0();
  /* 1130256f mov esi, esp */
  ESI = (ESP);
  /* 11302571 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11302576 push 5 */
  push32((uint32_t)(0x5u));
  /* 11302578 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130257a call dword ptr [0x11335480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335480))), 0x11302580u);
  /* 11302580 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302583 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302585 call 0x113052a0 */
  push32(0x1130258au); f_113052a0();
  /* 1130258a mov esi, esp */
  ESI = (ESP);
  /* 1130258c push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11302591 push 4 */
  push32((uint32_t)(0x4u));
  /* 11302593 push 0 */
  push32((uint32_t)(0x0u));
  /* 11302595 call dword ptr [0x11335480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335480))), 0x1130259bu);
  /* 1130259b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130259e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113025a0 call 0x113052a0 */
  push32(0x113025a5u); f_113052a0();
L_113025a5:;
  /* 113025a5 mov esi, esp */
  ESI = (ESP);
  /* 113025a7 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 113025ac push 1 */
  push32((uint32_t)(0x1u));
  /* 113025ae call dword ptr [0x11335484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335484))), 0x113025b4u);
  /* 113025b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113025b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113025b9 call 0x113052a0 */
  push32(0x113025beu); f_113052a0();
  /* 113025be mov esi, esp */
  ESI = (ESP);
  /* 113025c0 push 0x1132d500 */
  push32((uint32_t)(0x1132d500u));
  /* 113025c5 push 0x1132d27c */
  push32((uint32_t)(0x1132d27cu));
  /* 113025ca call dword ptr [0x11335494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335494))), 0x113025d0u);
  /* 113025d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113025d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113025d5 call 0x113052a0 */
  push32(0x113025dau); f_113052a0();
  /* 113025da mov esi, esp */
  ESI = (ESP);
  /* 113025dc push 0x1132d4f4 */
  push32((uint32_t)(0x1132d4f4u));
  /* 113025e1 push 0x1132d27c */
  push32((uint32_t)(0x1132d27cu));
  /* 113025e6 call dword ptr [0x11335494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335494))), 0x113025ecu);
  /* 113025ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113025ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113025f1 call 0x113052a0 */
  push32(0x113025f6u); f_113052a0();
  /* 113025f6 mov esi, esp */
  ESI = (ESP);
  /* 113025f8 push 0x1132d4e8 */
  push32((uint32_t)(0x1132d4e8u));
  /* 113025fd push 0x1132d390 */
  push32((uint32_t)(0x1132d390u));
  /* 11302602 call dword ptr [0x11335494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335494))), 0x11302608u);
  /* 11302608 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130260b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130260d call 0x113052a0 */
  push32(0x11302612u); f_113052a0();
  /* 11302612 mov esi, esp */
  ESI = (ESP);
  /* 11302614 push 0x1132d4dc */
  push32((uint32_t)(0x1132d4dcu));
  /* 11302619 push 0x1132d390 */
  push32((uint32_t)(0x1132d390u));
  /* 1130261e call dword ptr [0x11335494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335494))), 0x11302624u);
  /* 11302624 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302627 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302629 call 0x113052a0 */
  push32(0x1130262eu); f_113052a0();
  /* 1130262e mov esi, esp */
  ESI = (ESP);
  /* 11302630 push 0x1132d4d0 */
  push32((uint32_t)(0x1132d4d0u));
  /* 11302635 push 0x1132d390 */
  push32((uint32_t)(0x1132d390u));
  /* 1130263a call dword ptr [0x11335494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335494))), 0x11302640u);
  /* 11302640 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302643 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302645 call 0x113052a0 */
  push32(0x1130264au); f_113052a0();
  /* 1130264a mov esi, esp */
  ESI = (ESP);
  /* 1130264c push 0x1132d4c4 */
  push32((uint32_t)(0x1132d4c4u));
  /* 11302651 push 0x1132d390 */
  push32((uint32_t)(0x1132d390u));
  /* 11302656 call dword ptr [0x11335494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335494))), 0x1130265cu);
  /* 1130265c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130265f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302661 call 0x113052a0 */
  push32(0x11302666u); f_113052a0();
  /* 11302666 mov esi, esp */
  ESI = (ESP);
  /* 11302668 push 0x1132d4b8 */
  push32((uint32_t)(0x1132d4b8u));
  /* 1130266d push 0x1132d390 */
  push32((uint32_t)(0x1132d390u));
  /* 11302672 call dword ptr [0x11335494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335494))), 0x11302678u);
  /* 11302678 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130267b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130267d call 0x113052a0 */
  push32(0x11302682u); f_113052a0();
  /* 11302682 mov esi, esp */
  ESI = (ESP);
  /* 11302684 push 0x1132d4ac */
  push32((uint32_t)(0x1132d4acu));
  /* 11302689 push 0x1132d2dc */
  push32((uint32_t)(0x1132d2dcu));
  /* 1130268e call dword ptr [0x11335494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335494))), 0x11302694u);
  /* 11302694 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302697 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302699 call 0x113052a0 */
  push32(0x1130269eu); f_113052a0();
  /* 1130269e mov esi, esp */
  ESI = (ESP);
  /* 113026a0 push 0x1132d4a0 */
  push32((uint32_t)(0x1132d4a0u));
  /* 113026a5 push 0x1132d2dc */
  push32((uint32_t)(0x1132d2dcu));
  /* 113026aa call dword ptr [0x11335494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335494))), 0x113026b0u);
  /* 113026b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113026b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113026b5 call 0x113052a0 */
  push32(0x113026bau); f_113052a0();
  /* 113026ba mov esi, esp */
  ESI = (ESP);
  /* 113026bc push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 113026c1 push 3 */
  push32((uint32_t)(0x3u));
  /* 113026c3 push 3 */
  push32((uint32_t)(0x3u));
  /* 113026c5 call dword ptr [0x11335480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335480))), 0x113026cbu);
  /* 113026cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113026ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113026d0 call 0x113052a0 */
  push32(0x113026d5u); f_113052a0();
  /* 113026d5 mov esi, esp */
  ESI = (ESP);
  /* 113026d7 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 113026dc push 0 */
  push32((uint32_t)(0x0u));
  /* 113026de push 3 */
  push32((uint32_t)(0x3u));
  /* 113026e0 call dword ptr [0x11335480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335480))), 0x113026e6u);
  /* 113026e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113026e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113026eb call 0x113052a0 */
  push32(0x113026f0u); f_113052a0();
  /* 113026f0 mov esi, esp */
  ESI = (ESP);
  /* 113026f2 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 113026f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 113026f9 push 3 */
  push32((uint32_t)(0x3u));
  /* 113026fb call dword ptr [0x11335480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335480))), 0x11302701u);
  /* 11302701 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302704 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302706 call 0x113052a0 */
  push32(0x1130270bu); f_113052a0();
  /* 1130270b mov esi, esp */
  ESI = (ESP);
  /* 1130270d push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11302712 push 1 */
  push32((uint32_t)(0x1u));
  /* 11302714 push 3 */
  push32((uint32_t)(0x3u));
  /* 11302716 call dword ptr [0x11335480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335480))), 0x1130271cu);
  /* 1130271c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130271f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302721 call 0x113052a0 */
  push32(0x11302726u); f_113052a0();
  /* 11302726 mov esi, esp */
  ESI = (ESP);
  /* 11302728 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1130272d push 5 */
  push32((uint32_t)(0x5u));
  /* 1130272f push 3 */
  push32((uint32_t)(0x3u));
  /* 11302731 call dword ptr [0x11335480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335480))), 0x11302737u);
  /* 11302737 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130273a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130273c call 0x113052a0 */
  push32(0x11302741u); f_113052a0();
  /* 11302741 mov esi, esp */
  ESI = (ESP);
  /* 11302743 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11302748 push 4 */
  push32((uint32_t)(0x4u));
  /* 1130274a push 3 */
  push32((uint32_t)(0x3u));
  /* 1130274c call dword ptr [0x11335480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335480))), 0x11302752u);
  /* 11302752 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302755 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302757 call 0x113052a0 */
  push32(0x1130275cu); f_113052a0();
  /* 1130275c mov esi, esp */
  ESI = (ESP);
  /* 1130275e push 0 */
  push32((uint32_t)(0x0u));
  /* 11302760 call dword ptr [0x11335488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335488))), 0x11302766u);
  /* 11302766 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302769 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130276b call 0x113052a0 */
  push32(0x11302770u); f_113052a0();
  /* 11302770 mov esi, esp */
  ESI = (ESP);
  /* 11302772 push eax */
  push32((uint32_t)(EAX));
  /* 11302773 push 2 */
  push32((uint32_t)(0x2u));
  /* 11302775 push 1 */
  push32((uint32_t)(0x1u));
  /* 11302777 push 2 */
  push32((uint32_t)(0x2u));
  /* 11302779 push 0x1132d494 */
  push32((uint32_t)(0x1132d494u));
  /* 1130277e push 3 */
  push32((uint32_t)(0x3u));
  /* 11302780 call dword ptr [0x1133548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133548c))), 0x11302786u);
  /* 11302786 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302789 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130278b call 0x113052a0 */
  push32(0x11302790u); f_113052a0();
  /* 11302790 mov esi, esp */
  ESI = (ESP);
  /* 11302792 push 2 */
  push32((uint32_t)(0x2u));
  /* 11302794 call dword ptr [0x1133549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133549c))), 0x1130279au);
  /* 1130279a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130279d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130279f call 0x113052a0 */
  push32(0x113027a4u); f_113052a0();
L_113027a4:;
  /* 113027a4 mov esi, esp */
  ESI = (ESP);
  /* 113027a6 push 6 */
  push32((uint32_t)(0x6u));
  /* 113027a8 call dword ptr [0x113354a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354a0))), 0x113027aeu);
  /* 113027ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113027b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113027b3 call 0x113052a0 */
  push32(0x113027b8u); f_113052a0();
  /* 113027b8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113027bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113027bf je 0x11302878 */
  if (C.zf) goto L_11302878;
  /* 113027c5 mov esi, esp */
  ESI = (ESP);
  /* 113027c7 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 113027c9 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x113027cfu);
  /* 113027cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113027d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113027d4 call 0x113052a0 */
  push32(0x113027d9u); f_113052a0();
  /* 113027d9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113027de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113027e0 je 0x11302878 */
  if (C.zf) goto L_11302878;
  /* 113027e6 mov esi, esp */
  ESI = (ESP);
  /* 113027e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 113027ea push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 113027ec call dword ptr [0x11335460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335460))), 0x113027f2u);
  /* 113027f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113027f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113027f7 call 0x113052a0 */
  push32(0x113027fcu); f_113052a0();
  /* 113027fc mov esi, esp */
  ESI = (ESP);
  /* 113027fe push 0x1132d488 */
  push32((uint32_t)(0x1132d488u));
  /* 11302803 call dword ptr [0x11335498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335498))), 0x11302809u);
  /* 11302809 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130280c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130280e call 0x113052a0 */
  push32(0x11302813u); f_113052a0();
  /* 11302813 mov esi, esp */
  ESI = (ESP);
  /* 11302815 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11302817 call dword ptr [0x11335464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335464))), 0x1130281du);
  /* 1130281d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302820 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302822 call 0x113052a0 */
  push32(0x11302827u); f_113052a0();
  /* 11302827 mov esi, esp */
  ESI = (ESP);
  /* 11302829 push 1 */
  push32((uint32_t)(0x1u));
  /* 1130282b push 4 */
  push32((uint32_t)(0x4u));
  /* 1130282d push 0x11332618 */
  push32((uint32_t)(0x11332618u));
  /* 11302832 call dword ptr [0x113354a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354a8))), 0x11302838u);
  /* 11302838 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130283b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130283d call 0x113052a0 */
  push32(0x11302842u); f_113052a0();
  /* 11302842 mov esi, esp */
  ESI = (ESP);
  /* 11302844 push 2 */
  push32((uint32_t)(0x2u));
  /* 11302846 push 2 */
  push32((uint32_t)(0x2u));
  /* 11302848 push 0x11332610 */
  push32((uint32_t)(0x11332610u));
  /* 1130284d call dword ptr [0x113354a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354a8))), 0x11302853u);
  /* 11302853 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302856 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302858 call 0x113052a0 */
  push32(0x1130285du); f_113052a0();
  /* 1130285d mov esi, esp */
  ESI = (ESP);
  /* 1130285f push 3 */
  push32((uint32_t)(0x3u));
  /* 11302861 push 1 */
  push32((uint32_t)(0x1u));
  /* 11302863 push 0x113325b0 */
  push32((uint32_t)(0x113325b0u));
  /* 11302868 call dword ptr [0x113354a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354a8))), 0x1130286eu);
  /* 1130286e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302871 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302873 call 0x113052a0 */
  push32(0x11302878u); f_113052a0();
L_11302878:;
  /* 11302878 mov esi, esp */
  ESI = (ESP);
  /* 1130287a push 3 */
  push32((uint32_t)(0x3u));
  /* 1130287c call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x11302882u);
  /* 11302882 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302885 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302887 call 0x113052a0 */
  push32(0x1130288cu); f_113052a0();
  /* 1130288c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11302891 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11302893 je 0x113028f3 */
  if (C.zf) goto L_113028f3;
  /* 11302895 mov esi, esp */
  ESI = (ESP);
  /* 11302897 push 0 */
  push32((uint32_t)(0x0u));
  /* 11302899 push 0x11332530 */
  push32((uint32_t)(0x11332530u));
  /* 1130289e call dword ptr [0x113354ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354ac))), 0x113028a4u);
  /* 113028a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113028a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113028a9 call 0x113052a0 */
  push32(0x113028aeu); f_113052a0();
  /* 113028ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113028b0 jle 0x113028f3 */
  if ((C.zf||C.sf!=C.of)) goto L_113028f3;
  /* 113028b2 mov esi, esp */
  ESI = (ESP);
  /* 113028b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113028b6 push 3 */
  push32((uint32_t)(0x3u));
  /* 113028b8 call dword ptr [0x11335460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335460))), 0x113028beu);
  /* 113028be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113028c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113028c3 call 0x113052a0 */
  push32(0x113028c8u); f_113052a0();
  /* 113028c8 mov esi, esp */
  ESI = (ESP);
  /* 113028ca push 0x1132d480 */
  push32((uint32_t)(0x1132d480u));
  /* 113028cf call dword ptr [0x11335498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335498))), 0x113028d5u);
  /* 113028d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113028d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113028da call 0x113052a0 */
  push32(0x113028dfu); f_113052a0();
  /* 113028df mov esi, esp */
  ESI = (ESP);
  /* 113028e1 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 113028e3 call dword ptr [0x11335464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335464))), 0x113028e9u);
  /* 113028e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113028ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113028ee call 0x113052a0 */
  push32(0x113028f3u); f_113052a0();
L_113028f3:;
  /* 113028f3 mov esi, esp */
  ESI = (ESP);
  /* 113028f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 113028f7 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x113028fdu);
  /* 113028fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302900 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302902 call 0x113052a0 */
  push32(0x11302907u); f_113052a0();
  /* 11302907 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130290c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130290e jne 0x11302999 */
  if (!C.zf) goto L_11302999;
  /* 11302914 mov esi, esp */
  ESI = (ESP);
  /* 11302916 push 0x113324c0 */
  push32((uint32_t)(0x113324c0u));
  /* 1130291b push 0x11332608 */
  push32((uint32_t)(0x11332608u));
  /* 11302920 call dword ptr [0x113354a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354a4))), 0x11302926u);
  /* 11302926 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302929 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130292b call 0x113052a0 */
  push32(0x11302930u); f_113052a0();
  /* 11302930 mov esi, eax */
  ESI = (EAX);
  /* 11302932 mov edi, esp */
  EDI = (ESP);
  /* 11302934 push 0x113324c0 */
  push32((uint32_t)(0x113324c0u));
  /* 11302939 call dword ptr [0x113354b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354b4))), 0x1130293fu);
  /* 1130293f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302942 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302944 call 0x113052a0 */
  push32(0x11302949u); f_113052a0();
  /* 11302949 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130294b jge 0x11302999 */
  if ((C.sf==C.of)) goto L_11302999;
  /* 1130294d mov esi, esp */
  ESI = (ESP);
  /* 1130294f push 1 */
  push32((uint32_t)(0x1u));
  /* 11302951 push 1 */
  push32((uint32_t)(0x1u));
  /* 11302953 call dword ptr [0x11335460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335460))), 0x11302959u);
  /* 11302959 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130295c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130295e call 0x113052a0 */
  push32(0x11302963u); f_113052a0();
  /* 11302963 mov esi, esp */
  ESI = (ESP);
  /* 11302965 push 0 */
  push32((uint32_t)(0x0u));
  /* 11302967 push 0x113324c0 */
  push32((uint32_t)(0x113324c0u));
  /* 1130296c call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x11302972u);
  /* 11302972 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302975 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302977 call 0x113052a0 */
  push32(0x1130297cu); f_113052a0();
  /* 1130297c mov esi, esp */
  ESI = (ESP);
  /* 1130297e push 0 */
  push32((uint32_t)(0x0u));
  /* 11302980 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 11302982 push 0x113326a8 */
  push32((uint32_t)(0x113326a8u));
  /* 11302987 push 5 */
  push32((uint32_t)(0x5u));
  /* 11302989 call dword ptr [0x113354b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354b8))), 0x1130298fu);
  /* 1130298f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302992 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302994 call 0x113052a0 */
  push32(0x11302999u); f_113052a0();
L_11302999:;
  /* 11302999 mov esi, esp */
  ESI = (ESP);
  /* 1130299b push 1 */
  push32((uint32_t)(0x1u));
  /* 1130299d call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x113029a3u);
  /* 113029a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113029a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113029a8 call 0x113052a0 */
  push32(0x113029adu); f_113052a0();
  /* 113029ad and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113029b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113029b4 je 0x11302a3d */
  if (C.zf) goto L_11302a3d;
  /* 113029ba mov esi, esp */
  ESI = (ESP);
  /* 113029bc push 0x113324c0 */
  push32((uint32_t)(0x113324c0u));
  /* 113029c1 push 0x11332608 */
  push32((uint32_t)(0x11332608u));
  /* 113029c6 call dword ptr [0x113354a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354a4))), 0x113029ccu);
  /* 113029cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113029cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113029d1 call 0x113052a0 */
  push32(0x113029d6u); f_113052a0();
  /* 113029d6 mov esi, eax */
  ESI = (EAX);
  /* 113029d8 mov edi, esp */
  EDI = (ESP);
  /* 113029da push 0x113324c0 */
  push32((uint32_t)(0x113324c0u));
  /* 113029df call dword ptr [0x113354b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354b4))), 0x113029e5u);
  /* 113029e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113029e8 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113029ea call 0x113052a0 */
  push32(0x113029efu); f_113052a0();
  /* 113029ef cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113029f1 jne 0x11302a3d */
  if (!C.zf) goto L_11302a3d;
  /* 113029f3 mov esi, esp */
  ESI = (ESP);
  /* 113029f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113029f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 113029f9 call dword ptr [0x11335460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335460))), 0x113029ffu);
  /* 113029ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302a02 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302a04 call 0x113052a0 */
  push32(0x11302a09u); f_113052a0();
  /* 11302a09 mov esi, esp */
  ESI = (ESP);
  /* 11302a0b push 0 */
  push32((uint32_t)(0x0u));
  /* 11302a0d push 0x113324c0 */
  push32((uint32_t)(0x113324c0u));
  /* 11302a12 call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x11302a18u);
  /* 11302a18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302a1b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302a1d call 0x113052a0 */
  push32(0x11302a22u); f_113052a0();
  /* 11302a22 mov esi, esp */
  ESI = (ESP);
  /* 11302a24 push 0 */
  push32((uint32_t)(0x0u));
  /* 11302a26 push 0x113326a0 */
  push32((uint32_t)(0x113326a0u));
  /* 11302a2b push 5 */
  push32((uint32_t)(0x5u));
  /* 11302a2d call dword ptr [0x11335474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335474))), 0x11302a33u);
  /* 11302a33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302a36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302a38 call 0x113052a0 */
  push32(0x11302a3du); f_113052a0();
L_11302a3d:;
  /* 11302a3d mov esi, esp */
  ESI = (ESP);
  /* 11302a3f push 2 */
  push32((uint32_t)(0x2u));
  /* 11302a41 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x11302a47u);
  /* 11302a47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302a4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302a4c call 0x113052a0 */
  push32(0x11302a51u); f_113052a0();
  /* 11302a51 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11302a56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11302a58 je 0x11302b4d */
  if (C.zf) goto L_11302b4d;
  /* 11302a5e mov esi, esp */
  ESI = (ESP);
  /* 11302a60 push 0x113324c0 */
  push32((uint32_t)(0x113324c0u));
  /* 11302a65 call dword ptr [0x113354b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354b4))), 0x11302a6bu);
  /* 11302a6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302a6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302a70 call 0x113052a0 */
  push32(0x11302a75u); f_113052a0();
  /* 11302a75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11302a77 jne 0x11302b4d */
  if (!C.zf) goto L_11302b4d;
  /* 11302a7d mov esi, esp */
  ESI = (ESP);
  /* 11302a7f push 0 */
  push32((uint32_t)(0x0u));
  /* 11302a81 push 0x11332608 */
  push32((uint32_t)(0x11332608u));
  /* 11302a86 call dword ptr [0x113354ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354ac))), 0x11302a8cu);
  /* 11302a8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302a8f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302a91 call 0x113052a0 */
  push32(0x11302a96u); f_113052a0();
  /* 11302a96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11302a98 jle 0x11302b4d */
  if ((C.zf||C.sf!=C.of)) goto L_11302b4d;
  /* 11302a9e mov esi, esp */
  ESI = (ESP);
  /* 11302aa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11302aa2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11302aa4 call dword ptr [0x11335460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335460))), 0x11302aaau);
  /* 11302aaa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302aad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302aaf call 0x113052a0 */
  push32(0x11302ab4u); f_113052a0();
  /* 11302ab4 mov esi, esp */
  ESI = (ESP);
  /* 11302ab6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11302ab8 call dword ptr [0x11335488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335488))), 0x11302abeu);
  /* 11302abe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302ac1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302ac3 call 0x113052a0 */
  push32(0x11302ac8u); f_113052a0();
  /* 11302ac8 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11302ace mov ecx, 0x1388 */
  ECX = (0x1388u);
  /* 11302ad3 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11302ad5 mov esi, esp */
  ESI = (ESP);
  /* 11302ad7 push ecx */
  push32((uint32_t)(ECX));
  /* 11302ad8 push 0x1132d478 */
  push32((uint32_t)(0x1132d478u));
  /* 11302add call dword ptr [0x113354b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354b0))), 0x11302ae3u);
  /* 11302ae3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302ae6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302ae8 call 0x113052a0 */
  push32(0x11302aedu); f_113052a0();
  /* 11302aed mov esi, esp */
  ESI = (ESP);
  /* 11302aef push 0 */
  push32((uint32_t)(0x0u));
  /* 11302af1 call dword ptr [0x11335488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335488))), 0x11302af7u);
  /* 11302af7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302afa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302afc call 0x113052a0 */
  push32(0x11302b01u); f_113052a0();
  /* 11302b01 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11302b07 mov edx, 0x1388 */
  EDX = (0x1388u);
  /* 11302b0c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11302b0e mov esi, esp */
  ESI = (ESP);
  /* 11302b10 push edx */
  push32((uint32_t)(EDX));
  /* 11302b11 push 1 */
  push32((uint32_t)(0x1u));
  /* 11302b13 push 0 */
  push32((uint32_t)(0x0u));
  /* 11302b15 call dword ptr [0x113354c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354c0))), 0x11302b1bu);
  /* 11302b1b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302b1e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302b20 call 0x113052a0 */
  push32(0x11302b25u); f_113052a0();
  /* 11302b25 mov esi, esp */
  ESI = (ESP);
  /* 11302b27 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11302b29 call dword ptr [0x1133545c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133545c))), 0x11302b2fu);
  /* 11302b2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302b32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302b34 call 0x113052a0 */
  push32(0x11302b39u); f_113052a0();
  /* 11302b39 mov esi, esp */
  ESI = (ESP);
  /* 11302b3b push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11302b3d call dword ptr [0x11335464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335464))), 0x11302b43u);
  /* 11302b43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302b46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302b48 call 0x113052a0 */
  push32(0x11302b4du); f_113052a0();
L_11302b4d:;
  /* 11302b4d mov esi, esp */
  ESI = (ESP);
  /* 11302b4f push 1 */
  push32((uint32_t)(0x1u));
  /* 11302b51 call dword ptr [0x113354a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354a0))), 0x11302b57u);
  /* 11302b57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302b5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302b5c call 0x113052a0 */
  push32(0x11302b61u); f_113052a0();
  /* 11302b61 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11302b66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11302b68 je 0x11302bcf */
  if (C.zf) goto L_11302bcf;
  /* 11302b6a mov esi, esp */
  ESI = (ESP);
  /* 11302b6c push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 11302b6e call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x11302b74u);
  /* 11302b74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302b77 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302b79 call 0x113052a0 */
  push32(0x11302b7eu); f_113052a0();
  /* 11302b7e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11302b83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11302b85 je 0x11302bcf */
  if (C.zf) goto L_11302bcf;
  /* 11302b87 mov esi, esp */
  ESI = (ESP);
  /* 11302b89 push 0 */
  push32((uint32_t)(0x0u));
  /* 11302b8b push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 11302b8d call dword ptr [0x11335460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335460))), 0x11302b93u);
  /* 11302b93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302b96 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302b98 call 0x113052a0 */
  push32(0x11302b9du); f_113052a0();
  /* 11302b9d mov esi, esp */
  ESI = (ESP);
  /* 11302b9f push 0x1132d46c */
  push32((uint32_t)(0x1132d46cu));
  /* 11302ba4 call dword ptr [0x11335498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335498))), 0x11302baau);
  /* 11302baa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302bad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302baf call 0x113052a0 */
  push32(0x11302bb4u); f_113052a0();
  /* 11302bb4 mov esi, esp */
  ESI = (ESP);
  /* 11302bb6 push 4 */
  push32((uint32_t)(0x4u));
  /* 11302bb8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11302bba push 0x113325a8 */
  push32((uint32_t)(0x113325a8u));
  /* 11302bbf call dword ptr [0x113354a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354a8))), 0x11302bc5u);
  /* 11302bc5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302bc8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302bca call 0x113052a0 */
  push32(0x11302bcfu); f_113052a0();
L_11302bcf:;
  /* 11302bcf mov esi, esp */
  ESI = (ESP);
  /* 11302bd1 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11302bd3 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x11302bd9u);
  /* 11302bd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302bdc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302bde call 0x113052a0 */
  push32(0x11302be3u); f_113052a0();
  /* 11302be3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11302be8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11302bea je 0x11302c7a */
  if (C.zf) goto L_11302c7a;
  /* 11302bf0 mov esi, esp */
  ESI = (ESP);
  /* 11302bf2 push 0x11332478 */
  push32((uint32_t)(0x11332478u));
  /* 11302bf7 call dword ptr [0x113354b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354b4))), 0x11302bfdu);
  /* 11302bfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302c00 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302c02 call 0x113052a0 */
  push32(0x11302c07u); f_113052a0();
  /* 11302c07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11302c09 jne 0x11302c7a */
  if (!C.zf) goto L_11302c7a;
  /* 11302c0b mov esi, esp */
  ESI = (ESP);
  /* 11302c0d push 0 */
  push32((uint32_t)(0x0u));
  /* 11302c0f push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11302c11 call dword ptr [0x11335460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335460))), 0x11302c17u);
  /* 11302c17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302c1a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302c1c call 0x113052a0 */
  push32(0x11302c21u); f_113052a0();
  /* 11302c21 mov esi, esp */
  ESI = (ESP);
  /* 11302c23 push 3 */
  push32((uint32_t)(0x3u));
  /* 11302c25 push 0 */
  push32((uint32_t)(0x0u));
  /* 11302c27 call dword ptr [0x113354c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354c4))), 0x11302c2du);
  /* 11302c2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302c30 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302c32 call 0x113052a0 */
  push32(0x11302c37u); f_113052a0();
  /* 11302c37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11302c39 jle 0x11302c54 */
  if ((C.zf||C.sf!=C.of)) goto L_11302c54;
  /* 11302c3b mov esi, esp */
  ESI = (ESP);
  /* 11302c3d push 0x1132d464 */
  push32((uint32_t)(0x1132d464u));
  /* 11302c42 call dword ptr [0x11335498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335498))), 0x11302c48u);
  /* 11302c48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302c4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302c4d call 0x113052a0 */
  push32(0x11302c52u); f_113052a0();
  /* 11302c52 jmp 0x11302c6b */
  goto L_11302c6b;
L_11302c54:;
  /* 11302c54 mov esi, esp */
  ESI = (ESP);
  /* 11302c56 push 0x1132d458 */
  push32((uint32_t)(0x1132d458u));
  /* 11302c5b call dword ptr [0x11335498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335498))), 0x11302c61u);
  /* 11302c61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302c64 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302c66 call 0x113052a0 */
  push32(0x11302c6bu); f_113052a0();
L_11302c6b:;
  /* 11302c6b mov esi, esp */
  ESI = (ESP);
  /* 11302c6d call dword ptr [0x113354bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354bc))), 0x11302c73u);
  /* 11302c73 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302c75 call 0x113052a0 */
  push32(0x11302c7au); f_113052a0();
L_11302c7a:;
  /* 11302c7a mov esi, esp */
  ESI = (ESP);
  /* 11302c7c push 2 */
  push32((uint32_t)(0x2u));
  /* 11302c7e call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x11302c84u);
  /* 11302c84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302c87 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302c89 call 0x113052a0 */
  push32(0x11302c8eu); f_113052a0();
  /* 11302c8e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11302c93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11302c95 jne 0x11302d2e */
  if (!C.zf) goto L_11302d2e;
  /* 11302c9b mov esi, esp */
  ESI = (ESP);
  /* 11302c9d push 0xf */
  push32((uint32_t)(0xfu));
  /* 11302c9f call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x11302ca5u);
  /* 11302ca5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302ca8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302caa call 0x113052a0 */
  push32(0x11302cafu); f_113052a0();
  /* 11302caf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11302cb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11302cb6 jne 0x11302d2e */
  if (!C.zf) goto L_11302d2e;
  /* 11302cb8 mov esi, esp */
  ESI = (ESP);
  /* 11302cba push 0xc */
  push32((uint32_t)(0xcu));
  /* 11302cbc call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x11302cc2u);
  /* 11302cc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302cc5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302cc7 call 0x113052a0 */
  push32(0x11302cccu); f_113052a0();
  /* 11302ccc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11302cd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11302cd3 jne 0x11302d2e */
  if (!C.zf) goto L_11302d2e;
  /* 11302cd5 mov esi, esp */
  ESI = (ESP);
  /* 11302cd7 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11302cd9 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x11302cdfu);
  /* 11302cdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302ce2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302ce4 call 0x113052a0 */
  push32(0x11302ce9u); f_113052a0();
  /* 11302ce9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11302cee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11302cf0 je 0x11302d2e */
  if (C.zf) goto L_11302d2e;
  /* 11302cf2 mov esi, esp */
  ESI = (ESP);
  /* 11302cf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11302cf6 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11302cf8 call dword ptr [0x11335460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335460))), 0x11302cfeu);
  /* 11302cfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302d01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302d03 call 0x113052a0 */
  push32(0x11302d08u); f_113052a0();
  /* 11302d08 mov esi, esp */
  ESI = (ESP);
  /* 11302d0a push 0x1132d450 */
  push32((uint32_t)(0x1132d450u));
  /* 11302d0f call dword ptr [0x11335498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335498))), 0x11302d15u);
  /* 11302d15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302d18 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302d1a call 0x113052a0 */
  push32(0x11302d1fu); f_113052a0();
  /* 11302d1f mov esi, esp */
  ESI = (ESP);
  /* 11302d21 call dword ptr [0x113354cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354cc))), 0x11302d27u);
  /* 11302d27 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302d29 call 0x113052a0 */
  push32(0x11302d2eu); f_113052a0();
L_11302d2e:;
  /* 11302d2e mov esi, esp */
  ESI = (ESP);
  /* 11302d30 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11302d32 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x11302d38u);
  /* 11302d38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302d3b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302d3d call 0x113052a0 */
  push32(0x11302d42u); f_113052a0();
  /* 11302d42 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11302d47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11302d49 je 0x11302dab */
  if (C.zf) goto L_11302dab;
  /* 11302d4b mov esi, esp */
  ESI = (ESP);
  /* 11302d4d push 0 */
  push32((uint32_t)(0x0u));
  /* 11302d4f push 0x11332470 */
  push32((uint32_t)(0x11332470u));
  /* 11302d54 call dword ptr [0x113354ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354ac))), 0x11302d5au);
  /* 11302d5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302d5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302d5f call 0x113052a0 */
  push32(0x11302d64u); f_113052a0();
  /* 11302d64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11302d66 jle 0x11302dab */
  if ((C.zf||C.sf!=C.of)) goto L_11302dab;
  /* 11302d68 mov esi, esp */
  ESI = (ESP);
  /* 11302d6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11302d6c push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11302d6e call dword ptr [0x11335460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335460))), 0x11302d74u);
  /* 11302d74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302d77 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302d79 call 0x113052a0 */
  push32(0x11302d7eu); f_113052a0();
  /* 11302d7e mov esi, esp */
  ESI = (ESP);
  /* 11302d80 push 0 */
  push32((uint32_t)(0x0u));
  /* 11302d82 push 0x11332688 */
  push32((uint32_t)(0x11332688u));
  /* 11302d87 call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x11302d8du);
  /* 11302d8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302d90 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302d92 call 0x113052a0 */
  push32(0x11302d97u); f_113052a0();
  /* 11302d97 mov esi, esp */
  ESI = (ESP);
  /* 11302d99 push 1 */
  push32((uint32_t)(0x1u));
  /* 11302d9b call dword ptr [0x113354d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354d0))), 0x11302da1u);
  /* 11302da1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302da4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302da6 call 0x113052a0 */
  push32(0x11302dabu); f_113052a0();
L_11302dab:;
  /* 11302dab mov esi, esp */
  ESI = (ESP);
  /* 11302dad push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11302daf call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x11302db5u);
  /* 11302db5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302db8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302dba call 0x113052a0 */
  push32(0x11302dbfu); f_113052a0();
  /* 11302dbf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11302dc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11302dc6 jne 0x11302e28 */
  if (!C.zf) goto L_11302e28;
  /* 11302dc8 mov esi, esp */
  ESI = (ESP);
  /* 11302dca push 0 */
  push32((uint32_t)(0x0u));
  /* 11302dcc push 0x11332470 */
  push32((uint32_t)(0x11332470u));
  /* 11302dd1 call dword ptr [0x113354ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354ac))), 0x11302dd7u);
  /* 11302dd7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302dda cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302ddc call 0x113052a0 */
  push32(0x11302de1u); f_113052a0();
  /* 11302de1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11302de3 jne 0x11302e28 */
  if (!C.zf) goto L_11302e28;
  /* 11302de5 mov esi, esp */
  ESI = (ESP);
  /* 11302de7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11302de9 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11302deb call dword ptr [0x11335460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335460))), 0x11302df1u);
  /* 11302df1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302df4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302df6 call 0x113052a0 */
  push32(0x11302dfbu); f_113052a0();
  /* 11302dfb mov esi, esp */
  ESI = (ESP);
  /* 11302dfd push 0 */
  push32((uint32_t)(0x0u));
  /* 11302dff push 0x11332688 */
  push32((uint32_t)(0x11332688u));
  /* 11302e04 call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x11302e0au);
  /* 11302e0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302e0d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302e0f call 0x113052a0 */
  push32(0x11302e14u); f_113052a0();
  /* 11302e14 mov esi, esp */
  ESI = (ESP);
  /* 11302e16 push 1 */
  push32((uint32_t)(0x1u));
  /* 11302e18 call dword ptr [0x113354c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354c8))), 0x11302e1eu);
  /* 11302e1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302e21 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302e23 call 0x113052a0 */
  push32(0x11302e28u); f_113052a0();
L_11302e28:;
  /* 11302e28 mov esi, esp */
  ESI = (ESP);
  /* 11302e2a push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11302e2c call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x11302e32u);
  /* 11302e32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302e35 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302e37 call 0x113052a0 */
  push32(0x11302e3cu); f_113052a0();
  /* 11302e3c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11302e41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11302e43 jne 0x11302f2e */
  if (!C.zf) goto L_11302f2e;
  /* 11302e49 mov esi, esp */
  ESI = (ESP);
  /* 11302e4b push 4 */
  push32((uint32_t)(0x4u));
  /* 11302e4d call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x11302e53u);
  /* 11302e53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302e56 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302e58 call 0x113052a0 */
  push32(0x11302e5du); f_113052a0();
  /* 11302e5d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11302e62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11302e64 je 0x11302f2e */
  if (C.zf) goto L_11302f2e;
  /* 11302e6a mov esi, esp */
  ESI = (ESP);
  /* 11302e6c push 0x11332478 */
  push32((uint32_t)(0x11332478u));
  /* 11302e71 push 0x113325b0 */
  push32((uint32_t)(0x113325b0u));
  /* 11302e76 call dword ptr [0x113354a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354a4))), 0x11302e7cu);
  /* 11302e7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302e7f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302e81 call 0x113052a0 */
  push32(0x11302e86u); f_113052a0();
  /* 11302e86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11302e88 jle 0x11302f2e */
  if ((C.zf||C.sf!=C.of)) goto L_11302f2e;
  /* 11302e8e mov esi, esp */
  ESI = (ESP);
  /* 11302e90 push 0 */
  push32((uint32_t)(0x0u));
  /* 11302e92 push 4 */
  push32((uint32_t)(0x4u));
  /* 11302e94 call dword ptr [0x11335460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335460))), 0x11302e9au);
  /* 11302e9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302e9d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302e9f call 0x113052a0 */
  push32(0x11302ea4u); f_113052a0();
  /* 11302ea4 mov esi, esp */
  ESI = (ESP);
  /* 11302ea6 push 0x1132d448 */
  push32((uint32_t)(0x1132d448u));
  /* 11302eab call dword ptr [0x11335498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335498))), 0x11302eb1u);
  /* 11302eb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302eb4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302eb6 call 0x113052a0 */
  push32(0x11302ebbu); f_113052a0();
  /* 11302ebb mov esi, esp */
  ESI = (ESP);
  /* 11302ebd push 0x1132d440 */
  push32((uint32_t)(0x1132d440u));
  /* 11302ec2 call dword ptr [0x11335498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335498))), 0x11302ec8u);
  /* 11302ec8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302ecb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302ecd call 0x113052a0 */
  push32(0x11302ed2u); f_113052a0();
  /* 11302ed2 mov esi, esp */
  ESI = (ESP);
  /* 11302ed4 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11302ed9 push 0x11332640 */
  push32((uint32_t)(0x11332640u));
  /* 11302ede push 1 */
  push32((uint32_t)(0x1u));
  /* 11302ee0 push 0x11332408 */
  push32((uint32_t)(0x11332408u));
  /* 11302ee5 push 0x113323f8 */
  push32((uint32_t)(0x113323f8u));
  /* 11302eea push 0x11332428 */
  push32((uint32_t)(0x11332428u));
  /* 11302eef call dword ptr [0x113354d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354d8))), 0x11302ef5u);
  /* 11302ef5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302ef8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302efa call 0x113052a0 */
  push32(0x11302effu); f_113052a0();
  /* 11302eff mov esi, esp */
  ESI = (ESP);
  /* 11302f01 push 0 */
  push32((uint32_t)(0x0u));
  /* 11302f03 push 0x11332428 */
  push32((uint32_t)(0x11332428u));
  /* 11302f08 call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x11302f0eu);
  /* 11302f0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302f11 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302f13 call 0x113052a0 */
  push32(0x11302f18u); f_113052a0();
  /* 11302f18 mov esi, esp */
  ESI = (ESP);
  /* 11302f1a push 0 */
  push32((uint32_t)(0x0u));
  /* 11302f1c push 1 */
  push32((uint32_t)(0x1u));
  /* 11302f1e call dword ptr [0x113354dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354dc))), 0x11302f24u);
  /* 11302f24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302f27 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302f29 call 0x113052a0 */
  push32(0x11302f2eu); f_113052a0();
L_11302f2e:;
  /* 11302f2e mov esi, esp */
  ESI = (ESP);
  /* 11302f30 push 4 */
  push32((uint32_t)(0x4u));
  /* 11302f32 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x11302f38u);
  /* 11302f38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302f3b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302f3d call 0x113052a0 */
  push32(0x11302f42u); f_113052a0();
  /* 11302f42 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11302f47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11302f49 jne 0x11303041 */
  if (!C.zf) goto L_11303041;
  /* 11302f4f mov esi, esp */
  ESI = (ESP);
  /* 11302f51 push 8 */
  push32((uint32_t)(0x8u));
  /* 11302f53 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x11302f59u);
  /* 11302f59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302f5c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302f5e call 0x113052a0 */
  push32(0x11302f63u); f_113052a0();
  /* 11302f63 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11302f68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11302f6a je 0x11303041 */
  if (C.zf) goto L_11303041;
  /* 11302f70 mov esi, esp */
  ESI = (ESP);
  /* 11302f72 push 0x11332428 */
  push32((uint32_t)(0x11332428u));
  /* 11302f77 call dword ptr [0x113354b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354b4))), 0x11302f7du);
  /* 11302f7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302f80 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302f82 call 0x113052a0 */
  push32(0x11302f87u); f_113052a0();
  /* 11302f87 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302f8a jge 0x11303041 */
  if ((C.sf==C.of)) goto L_11303041;
  /* 11302f90 mov esi, esp */
  ESI = (ESP);
  /* 11302f92 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11302f97 push 0x11332640 */
  push32((uint32_t)(0x11332640u));
  /* 11302f9c push 1 */
  push32((uint32_t)(0x1u));
  /* 11302f9e push 0x11332408 */
  push32((uint32_t)(0x11332408u));
  /* 11302fa3 push 0x113324b8 */
  push32((uint32_t)(0x113324b8u));
  /* 11302fa8 push 0x11332440 */
  push32((uint32_t)(0x11332440u));
  /* 11302fad call dword ptr [0x113354d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354d8))), 0x11302fb3u);
  /* 11302fb3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302fb6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302fb8 call 0x113052a0 */
  push32(0x11302fbdu); f_113052a0();
  /* 11302fbd mov esi, esp */
  ESI = (ESP);
  /* 11302fbf push 0 */
  push32((uint32_t)(0x0u));
  /* 11302fc1 push 0x11332440 */
  push32((uint32_t)(0x11332440u));
  /* 11302fc6 call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x11302fccu);
  /* 11302fcc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302fcf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302fd1 call 0x113052a0 */
  push32(0x11302fd6u); f_113052a0();
  /* 11302fd6 mov esi, esp */
  ESI = (ESP);
  /* 11302fd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11302fda push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11302fdf push 0x11332620 */
  push32((uint32_t)(0x11332620u));
  /* 11302fe4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11302fe6 call dword ptr [0x113354d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354d4))), 0x11302fecu);
  /* 11302fec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11302fef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11302ff1 call 0x113052a0 */
  push32(0x11302ff6u); f_113052a0();
  /* 11302ff6 mov esi, esp */
  ESI = (ESP);
  /* 11302ff8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11302ffa push 0x11332440 */
  push32((uint32_t)(0x11332440u));
  /* 11302fff call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x11303005u);
  /* 11303005 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303008 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130300a call 0x113052a0 */
  push32(0x1130300fu); f_113052a0();
  /* 1130300f mov esi, esp */
  ESI = (ESP);
  /* 11303011 push 0 */
  push32((uint32_t)(0x0u));
  /* 11303013 push 1 */
  push32((uint32_t)(0x1u));
  /* 11303015 call dword ptr [0x113354dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354dc))), 0x1130301bu);
  /* 1130301b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130301e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303020 call 0x113052a0 */
  push32(0x11303025u); f_113052a0();
  /* 11303025 mov esi, esp */
  ESI = (ESP);
  /* 11303027 push 0x11332428 */
  push32((uint32_t)(0x11332428u));
  /* 1130302c push 0x11332440 */
  push32((uint32_t)(0x11332440u));
  /* 11303031 call dword ptr [0x113354e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354e4))), 0x11303037u);
  /* 11303037 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130303a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130303c call 0x113052a0 */
  push32(0x11303041u); f_113052a0();
L_11303041:;
  /* 11303041 mov esi, esp */
  ESI = (ESP);
  /* 11303043 push 8 */
  push32((uint32_t)(0x8u));
  /* 11303045 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x1130304bu);
  /* 1130304b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130304e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303050 call 0x113052a0 */
  push32(0x11303055u); f_113052a0();
  /* 11303055 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130305a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130305c je 0x1130329c */
  if (C.zf) goto L_1130329c;
  /* 11303062 mov esi, esp */
  ESI = (ESP);
  /* 11303064 push 5 */
  push32((uint32_t)(0x5u));
  /* 11303066 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x1130306cu);
  /* 1130306c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130306f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303071 call 0x113052a0 */
  push32(0x11303076u); f_113052a0();
  /* 11303076 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130307b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130307d je 0x1130329c */
  if (C.zf) goto L_1130329c;
  /* 11303083 mov esi, esp */
  ESI = (ESP);
  /* 11303085 push 0 */
  push32((uint32_t)(0x0u));
  /* 11303087 push 5 */
  push32((uint32_t)(0x5u));
  /* 11303089 call dword ptr [0x11335460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335460))), 0x1130308fu);
  /* 1130308f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303092 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303094 call 0x113052a0 */
  push32(0x11303099u); f_113052a0();
  /* 11303099 mov esi, esp */
  ESI = (ESP);
  /* 1130309b push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 113030a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 113030a2 call dword ptr [0x11335484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335484))), 0x113030a8u);
  /* 113030a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113030ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113030ad call 0x113052a0 */
  push32(0x113030b2u); f_113052a0();
  /* 113030b2 mov esi, esp */
  ESI = (ESP);
  /* 113030b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113030b6 call dword ptr [0x11335488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335488))), 0x113030bcu);
  /* 113030bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113030bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113030c1 call 0x113052a0 */
  push32(0x113030c6u); f_113052a0();
  /* 113030c6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113030c9 cmp dword ptr [ebp - 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113030cd ja 0x11303239 */
  if ((!C.cf&&!C.zf)) goto L_11303239;
  /* 113030d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113030d6 jmp dword ptr [eax*4 + 0x11304741] */
  switch (EAX) {
    case 0: goto L_113030dd;
    case 1: goto L_11303136;
    case 2: goto L_1130318f;
    case 3: goto L_113031e5;
    case 4: goto L_113040ee;
    case 5: goto L_11304147;
    case 6: goto L_113041a0;
    case 7: goto L_113041f6;
    default: x86_unimpl("switch@0x113030d6 out of table"); return;
  }
L_113030dd:;
  /* 113030dd mov esi, esp */
  ESI = (ESP);
  /* 113030df push 0x41 */
  push32((uint32_t)(0x41u));
  /* 113030e1 push 0x11332630 */
  push32((uint32_t)(0x11332630u));
  /* 113030e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 113030e8 push 0x113326c8 */
  push32((uint32_t)(0x113326c8u));
  /* 113030ed push 0x113324b8 */
  push32((uint32_t)(0x113324b8u));
  /* 113030f2 push 0x11332450 */
  push32((uint32_t)(0x11332450u));
  /* 113030f7 call dword ptr [0x113354d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354d8))), 0x113030fdu);
  /* 113030fd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303100 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303102 call 0x113052a0 */
  push32(0x11303107u); f_113052a0();
  /* 11303107 mov esi, esp */
  ESI = (ESP);
  /* 11303109 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1130310b push 0x11332630 */
  push32((uint32_t)(0x11332630u));
  /* 11303110 push 2 */
  push32((uint32_t)(0x2u));
  /* 11303112 push 0x11332488 */
  push32((uint32_t)(0x11332488u));
  /* 11303117 push 0x113324b8 */
  push32((uint32_t)(0x113324b8u));
  /* 1130311c push 0x11332448 */
  push32((uint32_t)(0x11332448u));
  /* 11303121 call dword ptr [0x113354d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354d8))), 0x11303127u);
  /* 11303127 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130312a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130312c call 0x113052a0 */
  push32(0x11303131u); f_113052a0();
  /* 11303131 jmp 0x11303239 */
  goto L_11303239;
L_11303136:;
  /* 11303136 mov esi, esp */
  ESI = (ESP);
  /* 11303138 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1130313a push 0x11332630 */
  push32((uint32_t)(0x11332630u));
  /* 1130313f push 2 */
  push32((uint32_t)(0x2u));
  /* 11303141 push 0x113326c8 */
  push32((uint32_t)(0x113326c8u));
  /* 11303146 push 0x113323f8 */
  push32((uint32_t)(0x113323f8u));
  /* 1130314b push 0x11332450 */
  push32((uint32_t)(0x11332450u));
  /* 11303150 call dword ptr [0x113354d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354d8))), 0x11303156u);
  /* 11303156 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130315b call 0x113052a0 */
  push32(0x11303160u); f_113052a0();
  /* 11303160 mov esi, esp */
  ESI = (ESP);
  /* 11303162 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11303164 push 0x11332630 */
  push32((uint32_t)(0x11332630u));
  /* 11303169 push 2 */
  push32((uint32_t)(0x2u));
  /* 1130316b push 0x11332488 */
  push32((uint32_t)(0x11332488u));
  /* 11303170 push 0x113324b8 */
  push32((uint32_t)(0x113324b8u));
  /* 11303175 push 0x11332448 */
  push32((uint32_t)(0x11332448u));
  /* 1130317a call dword ptr [0x113354d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354d8))), 0x11303180u);
  /* 11303180 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303183 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303185 call 0x113052a0 */
  push32(0x1130318au); f_113052a0();
  /* 1130318a jmp 0x11303239 */
  goto L_11303239;
L_1130318f:;
  /* 1130318f mov esi, esp */
  ESI = (ESP);
  /* 11303191 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11303193 push 0x11332630 */
  push32((uint32_t)(0x11332630u));
  /* 11303198 push 2 */
  push32((uint32_t)(0x2u));
  /* 1130319a push 0x113326c8 */
  push32((uint32_t)(0x113326c8u));
  /* 1130319f push 0x113323f8 */
  push32((uint32_t)(0x113323f8u));
  /* 113031a4 push 0x11332450 */
  push32((uint32_t)(0x11332450u));
  /* 113031a9 call dword ptr [0x113354d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354d8))), 0x113031afu);
  /* 113031af add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113031b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113031b4 call 0x113052a0 */
  push32(0x113031b9u); f_113052a0();
  /* 113031b9 mov esi, esp */
  ESI = (ESP);
  /* 113031bb push 0x41 */
  push32((uint32_t)(0x41u));
  /* 113031bd push 0x11332630 */
  push32((uint32_t)(0x11332630u));
  /* 113031c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 113031c4 push 0x11332488 */
  push32((uint32_t)(0x11332488u));
  /* 113031c9 push 0x113323f8 */
  push32((uint32_t)(0x113323f8u));
  /* 113031ce push 0x11332448 */
  push32((uint32_t)(0x11332448u));
  /* 113031d3 call dword ptr [0x113354d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354d8))), 0x113031d9u);
  /* 113031d9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113031dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113031de call 0x113052a0 */
  push32(0x113031e3u); f_113052a0();
  /* 113031e3 jmp 0x11303239 */
  goto L_11303239;
L_113031e5:;
  /* 113031e5 mov esi, esp */
  ESI = (ESP);
  /* 113031e7 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 113031e9 push 0x11332630 */
  push32((uint32_t)(0x11332630u));
  /* 113031ee push 2 */
  push32((uint32_t)(0x2u));
  /* 113031f0 push 0x113326c8 */
  push32((uint32_t)(0x113326c8u));
  /* 113031f5 push 0x11332400 */
  push32((uint32_t)(0x11332400u));
  /* 113031fa push 0x11332450 */
  push32((uint32_t)(0x11332450u));
  /* 113031ff call dword ptr [0x113354d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354d8))), 0x11303205u);
  /* 11303205 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303208 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130320a call 0x113052a0 */
  push32(0x1130320fu); f_113052a0();
  /* 1130320f mov esi, esp */
  ESI = (ESP);
  /* 11303211 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11303213 push 0x11332630 */
  push32((uint32_t)(0x11332630u));
  /* 11303218 push 2 */
  push32((uint32_t)(0x2u));
  /* 1130321a push 0x11332488 */
  push32((uint32_t)(0x11332488u));
  /* 1130321f push 0x113323f8 */
  push32((uint32_t)(0x113323f8u));
  /* 11303224 push 0x11332448 */
  push32((uint32_t)(0x11332448u));
  /* 11303229 call dword ptr [0x113354d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354d8))), 0x1130322fu);
  /* 1130322f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303232 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303234 call 0x113052a0 */
  push32(0x11303239u); f_113052a0();
L_11303239:;
  /* 11303239 mov esi, esp */
  ESI = (ESP);
  /* 1130323b push 0 */
  push32((uint32_t)(0x0u));
  /* 1130323d push 0x11332448 */
  push32((uint32_t)(0x11332448u));
  /* 11303242 call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x11303248u);
  /* 11303248 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130324b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130324d call 0x113052a0 */
  push32(0x11303252u); f_113052a0();
  /* 11303252 mov esi, esp */
  ESI = (ESP);
  /* 11303254 push 1 */
  push32((uint32_t)(0x1u));
  /* 11303256 push 0x11332450 */
  push32((uint32_t)(0x11332450u));
  /* 1130325b call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x11303261u);
  /* 11303261 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303264 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303266 call 0x113052a0 */
  push32(0x1130326bu); f_113052a0();
  /* 1130326b mov esi, esp */
  ESI = (ESP);
  /* 1130326d push 0 */
  push32((uint32_t)(0x0u));
  /* 1130326f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11303271 push 0x11332620 */
  push32((uint32_t)(0x11332620u));
  /* 11303276 push 2 */
  push32((uint32_t)(0x2u));
  /* 11303278 call dword ptr [0x113354d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354d4))), 0x1130327eu);
  /* 1130327e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303281 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303283 call 0x113052a0 */
  push32(0x11303288u); f_113052a0();
  /* 11303288 mov esi, esp */
  ESI = (ESP);
  /* 1130328a push 2 */
  push32((uint32_t)(0x2u));
  /* 1130328c call dword ptr [0x1133549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133549c))), 0x11303292u);
  /* 11303292 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303295 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303297 call 0x113052a0 */
  push32(0x1130329cu); f_113052a0();
L_1130329c:;
  /* 1130329c mov esi, esp */
  ESI = (ESP);
  /* 1130329e push 3 */
  push32((uint32_t)(0x3u));
  /* 113032a0 call dword ptr [0x113354e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354e8))), 0x113032a6u);
  /* 113032a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113032a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113032ab call 0x113052a0 */
  push32(0x113032b0u); f_113052a0();
  /* 113032b0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113032b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113032b7 je 0x11303325 */
  if (C.zf) goto L_11303325;
  /* 113032b9 mov esi, esp */
  ESI = (ESP);
  /* 113032bb push 0x11332450 */
  push32((uint32_t)(0x11332450u));
  /* 113032c0 call dword ptr [0x113354b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354b4))), 0x113032c6u);
  /* 113032c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113032c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113032cb call 0x113052a0 */
  push32(0x113032d0u); f_113052a0();
  /* 113032d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113032d2 jne 0x113032ef */
  if (!C.zf) goto L_113032ef;
  /* 113032d4 mov esi, esp */
  ESI = (ESP);
  /* 113032d6 push 0x11332448 */
  push32((uint32_t)(0x11332448u));
  /* 113032db call dword ptr [0x113354b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354b4))), 0x113032e1u);
  /* 113032e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113032e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113032e6 call 0x113052a0 */
  push32(0x113032ebu); f_113052a0();
  /* 113032eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113032ed je 0x1130330c */
  if (C.zf) goto L_1130330c;
L_113032ef:;
  /* 113032ef mov esi, esp */
  ESI = (ESP);
  /* 113032f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 113032f3 call dword ptr [0x113354a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354a0))), 0x113032f9u);
  /* 113032f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113032fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113032fe call 0x113052a0 */
  push32(0x11303303u); f_113052a0();
  /* 11303303 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11303308 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130330a je 0x11303325 */
  if (C.zf) goto L_11303325;
L_1130330c:;
  /* 1130330c mov esi, esp */
  ESI = (ESP);
  /* 1130330e push 0x258 */
  push32((uint32_t)(0x258u));
  /* 11303313 push 3 */
  push32((uint32_t)(0x3u));
  /* 11303315 call dword ptr [0x11335484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335484))), 0x1130331bu);
  /* 1130331b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130331e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303320 call 0x113052a0 */
  push32(0x11303325u); f_113052a0();
L_11303325:;
  /* 11303325 mov esi, esp */
  ESI = (ESP);
  /* 11303327 push 3 */
  push32((uint32_t)(0x3u));
  /* 11303329 call dword ptr [0x113354e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354e0))), 0x1130332fu);
  /* 1130332f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303332 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303334 call 0x113052a0 */
  push32(0x11303339u); f_113052a0();
  /* 11303339 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130333e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11303340 je 0x11303380 */
  if (C.zf) goto L_11303380;
  /* 11303342 mov esi, esp */
  ESI = (ESP);
  /* 11303344 push 3 */
  push32((uint32_t)(0x3u));
  /* 11303346 call dword ptr [0x113354f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354f0))), 0x1130334cu);
  /* 1130334c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130334f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303351 call 0x113052a0 */
  push32(0x11303356u); f_113052a0();
  /* 11303356 mov esi, esp */
  ESI = (ESP);
  /* 11303358 push 2 */
  push32((uint32_t)(0x2u));
  /* 1130335a call dword ptr [0x113354f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354f0))), 0x11303360u);
  /* 11303360 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303363 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303365 call 0x113052a0 */
  push32(0x1130336au); f_113052a0();
  /* 1130336a mov esi, esp */
  ESI = (ESP);
  /* 1130336c push 1 */
  push32((uint32_t)(0x1u));
  /* 1130336e push 5 */
  push32((uint32_t)(0x5u));
  /* 11303370 call dword ptr [0x11335460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335460))), 0x11303376u);
  /* 11303376 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303379 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130337b call 0x113052a0 */
  push32(0x11303380u); f_113052a0();
L_11303380:;
  /* 11303380 mov esi, esp */
  ESI = (ESP);
  /* 11303382 push 8 */
  push32((uint32_t)(0x8u));
  /* 11303384 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x1130338au);
  /* 1130338a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130338d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130338f call 0x113052a0 */
  push32(0x11303394u); f_113052a0();
  /* 11303394 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11303399 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130339b je 0x113033e5 */
  if (C.zf) goto L_113033e5;
  /* 1130339d mov esi, esp */
  ESI = (ESP);
  /* 1130339f push 0x113326c0 */
  push32((uint32_t)(0x113326c0u));
  /* 113033a4 call dword ptr [0x113354b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354b4))), 0x113033aau);
  /* 113033aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113033ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113033af call 0x113052a0 */
  push32(0x113033b4u); f_113052a0();
  /* 113033b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113033b6 jne 0x113033e5 */
  if (!C.zf) goto L_113033e5;
  /* 113033b8 mov esi, esp */
  ESI = (ESP);
  /* 113033ba push 0 */
  push32((uint32_t)(0x0u));
  /* 113033bc push 8 */
  push32((uint32_t)(0x8u));
  /* 113033be call dword ptr [0x11335460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335460))), 0x113033c4u);
  /* 113033c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113033c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113033c9 call 0x113052a0 */
  push32(0x113033ceu); f_113052a0();
  /* 113033ce mov esi, esp */
  ESI = (ESP);
  /* 113033d0 push 0x1132d434 */
  push32((uint32_t)(0x1132d434u));
  /* 113033d5 call dword ptr [0x11335498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335498))), 0x113033dbu);
  /* 113033db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113033de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113033e0 call 0x113052a0 */
  push32(0x113033e5u); f_113052a0();
L_113033e5:;
  /* 113033e5 mov esi, esp */
  ESI = (ESP);
  /* 113033e7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 113033e9 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x113033efu);
  /* 113033ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113033f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113033f4 call 0x113052a0 */
  push32(0x113033f9u); f_113052a0();
  /* 113033f9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113033fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11303400 je 0x11303462 */
  if (C.zf) goto L_11303462;
  /* 11303402 mov esi, esp */
  ESI = (ESP);
  /* 11303404 push 0 */
  push32((uint32_t)(0x0u));
  /* 11303406 push 0x11332468 */
  push32((uint32_t)(0x11332468u));
  /* 1130340b call dword ptr [0x113354ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354ac))), 0x11303411u);
  /* 11303411 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303414 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303416 call 0x113052a0 */
  push32(0x1130341bu); f_113052a0();
  /* 1130341b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130341d jle 0x11303462 */
  if ((C.zf||C.sf!=C.of)) goto L_11303462;
  /* 1130341f mov esi, esp */
  ESI = (ESP);
  /* 11303421 push 0 */
  push32((uint32_t)(0x0u));
  /* 11303423 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 11303425 call dword ptr [0x11335460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335460))), 0x1130342bu);
  /* 1130342b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130342e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303430 call 0x113052a0 */
  push32(0x11303435u); f_113052a0();
  /* 11303435 mov esi, esp */
  ESI = (ESP);
  /* 11303437 push 0 */
  push32((uint32_t)(0x0u));
  /* 11303439 push 0x11332690 */
  push32((uint32_t)(0x11332690u));
  /* 1130343e call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x11303444u);
  /* 11303444 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303447 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303449 call 0x113052a0 */
  push32(0x1130344eu); f_113052a0();
  /* 1130344e mov esi, esp */
  ESI = (ESP);
  /* 11303450 push 1 */
  push32((uint32_t)(0x1u));
  /* 11303452 call dword ptr [0x113354d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354d0))), 0x11303458u);
  /* 11303458 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130345b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130345d call 0x113052a0 */
  push32(0x11303462u); f_113052a0();
L_11303462:;
  /* 11303462 mov esi, esp */
  ESI = (ESP);
  /* 11303464 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 11303466 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x1130346cu);
  /* 1130346c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130346f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303471 call 0x113052a0 */
  push32(0x11303476u); f_113052a0();
  /* 11303476 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130347b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130347d jne 0x113034df */
  if (!C.zf) goto L_113034df;
  /* 1130347f mov esi, esp */
  ESI = (ESP);
  /* 11303481 push 0 */
  push32((uint32_t)(0x0u));
  /* 11303483 push 0x11332468 */
  push32((uint32_t)(0x11332468u));
  /* 11303488 call dword ptr [0x113354ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354ac))), 0x1130348eu);
  /* 1130348e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303491 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303493 call 0x113052a0 */
  push32(0x11303498u); f_113052a0();
  /* 11303498 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130349a jne 0x113034df */
  if (!C.zf) goto L_113034df;
  /* 1130349c mov esi, esp */
  ESI = (ESP);
  /* 1130349e push 1 */
  push32((uint32_t)(0x1u));
  /* 113034a0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 113034a2 call dword ptr [0x11335460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335460))), 0x113034a8u);
  /* 113034a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113034ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113034ad call 0x113052a0 */
  push32(0x113034b2u); f_113052a0();
  /* 113034b2 mov esi, esp */
  ESI = (ESP);
  /* 113034b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113034b6 push 0x11332690 */
  push32((uint32_t)(0x11332690u));
  /* 113034bb call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x113034c1u);
  /* 113034c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113034c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113034c6 call 0x113052a0 */
  push32(0x113034cbu); f_113052a0();
  /* 113034cb mov esi, esp */
  ESI = (ESP);
  /* 113034cd push 1 */
  push32((uint32_t)(0x1u));
  /* 113034cf call dword ptr [0x113354c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354c8))), 0x113034d5u);
  /* 113034d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113034d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113034da call 0x113052a0 */
  push32(0x113034dfu); f_113052a0();
L_113034df:;
  /* 113034df mov esi, esp */
  ESI = (ESP);
  /* 113034e1 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 113034e3 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x113034e9u);
  /* 113034e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113034ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113034ee call 0x113052a0 */
  push32(0x113034f3u); f_113052a0();
  /* 113034f3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113034f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113034fa jne 0x11303677 */
  if (!C.zf) goto L_11303677;
  /* 11303500 mov esi, esp */
  ESI = (ESP);
  /* 11303502 push 6 */
  push32((uint32_t)(0x6u));
  /* 11303504 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x1130350au);
  /* 1130350a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130350d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130350f call 0x113052a0 */
  push32(0x11303514u); f_113052a0();
  /* 11303514 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11303519 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130351b je 0x11303677 */
  if (C.zf) goto L_11303677;
  /* 11303521 mov esi, esp */
  ESI = (ESP);
  /* 11303523 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11303525 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x1130352bu);
  /* 1130352b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130352e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303530 call 0x113052a0 */
  push32(0x11303535u); f_113052a0();
  /* 11303535 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130353a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130353c je 0x11303677 */
  if (C.zf) goto L_11303677;
  /* 11303542 mov esi, esp */
  ESI = (ESP);
  /* 11303544 push 0x11332478 */
  push32((uint32_t)(0x11332478u));
  /* 11303549 push 0x113325a8 */
  push32((uint32_t)(0x113325a8u));
  /* 1130354e call dword ptr [0x113354a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354a4))), 0x11303554u);
  /* 11303554 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303557 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303559 call 0x113052a0 */
  push32(0x1130355eu); f_113052a0();
  /* 1130355e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11303560 jle 0x11303677 */
  if ((C.zf||C.sf!=C.of)) goto L_11303677;
  /* 11303566 mov esi, esp */
  ESI = (ESP);
  /* 11303568 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130356a push 6 */
  push32((uint32_t)(0x6u));
  /* 1130356c call dword ptr [0x11335460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335460))), 0x11303572u);
  /* 11303572 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303575 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303577 call 0x113052a0 */
  push32(0x1130357cu); f_113052a0();
  /* 1130357c mov esi, esp */
  ESI = (ESP);
  /* 1130357e push 0x1132d42c */
  push32((uint32_t)(0x1132d42cu));
  /* 11303583 call dword ptr [0x11335498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335498))), 0x11303589u);
  /* 11303589 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130358c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130358e call 0x113052a0 */
  push32(0x11303593u); f_113052a0();
  /* 11303593 mov esi, esp */
  ESI = (ESP);
  /* 11303595 push 0x1132d424 */
  push32((uint32_t)(0x1132d424u));
  /* 1130359a call dword ptr [0x11335498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335498))), 0x113035a0u);
  /* 113035a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113035a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113035a5 call 0x113052a0 */
  push32(0x113035aau); f_113052a0();
  /* 113035aa mov esi, esp */
  ESI = (ESP);
  /* 113035ac push 0x1132d418 */
  push32((uint32_t)(0x1132d418u));
  /* 113035b1 call dword ptr [0x11335498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335498))), 0x113035b7u);
  /* 113035b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113035ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113035bc call 0x113052a0 */
  push32(0x113035c1u); f_113052a0();
  /* 113035c1 mov esi, esp */
  ESI = (ESP);
  /* 113035c3 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 113035c5 call dword ptr [0x11335464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335464))), 0x113035cbu);
  /* 113035cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113035ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113035d0 call 0x113052a0 */
  push32(0x113035d5u); f_113052a0();
  /* 113035d5 mov esi, esp */
  ESI = (ESP);
  /* 113035d7 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 113035d9 call dword ptr [0x11335464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335464))), 0x113035dfu);
  /* 113035df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113035e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113035e4 call 0x113052a0 */
  push32(0x113035e9u); f_113052a0();
  /* 113035e9 mov esi, esp */
  ESI = (ESP);
  /* 113035eb push 0xaa */
  push32((uint32_t)(0xaau));
  /* 113035f0 push 0x11332648 */
  push32((uint32_t)(0x11332648u));
  /* 113035f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 113035f7 push 0x11332408 */
  push32((uint32_t)(0x11332408u));
  /* 113035fc push 0x113323f8 */
  push32((uint32_t)(0x113323f8u));
  /* 11303601 push 0x11332420 */
  push32((uint32_t)(0x11332420u));
  /* 11303606 call dword ptr [0x113354d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354d8))), 0x1130360cu);
  /* 1130360c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130360f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303611 call 0x113052a0 */
  push32(0x11303616u); f_113052a0();
  /* 11303616 mov esi, esp */
  ESI = (ESP);
  /* 11303618 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130361a push 0x11332420 */
  push32((uint32_t)(0x11332420u));
  /* 1130361f call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x11303625u);
  /* 11303625 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303628 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130362a call 0x113052a0 */
  push32(0x1130362fu); f_113052a0();
  /* 1130362f mov esi, esp */
  ESI = (ESP);
  /* 11303631 push 1 */
  push32((uint32_t)(0x1u));
  /* 11303633 push 0x11332678 */
  push32((uint32_t)(0x11332678u));
  /* 11303638 call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x1130363eu);
  /* 1130363e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303641 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303643 call 0x113052a0 */
  push32(0x11303648u); f_113052a0();
  /* 11303648 mov esi, esp */
  ESI = (ESP);
  /* 1130364a push 1 */
  push32((uint32_t)(0x1u));
  /* 1130364c push 0x11332508 */
  push32((uint32_t)(0x11332508u));
  /* 11303651 call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x11303657u);
  /* 11303657 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130365a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130365c call 0x113052a0 */
  push32(0x11303661u); f_113052a0();
  /* 11303661 mov esi, esp */
  ESI = (ESP);
  /* 11303663 push 0 */
  push32((uint32_t)(0x0u));
  /* 11303665 push 1 */
  push32((uint32_t)(0x1u));
  /* 11303667 call dword ptr [0x113354dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354dc))), 0x1130366du);
  /* 1130366d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303670 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303672 call 0x113052a0 */
  push32(0x11303677u); f_113052a0();
L_11303677:;
  /* 11303677 mov esi, esp */
  ESI = (ESP);
  /* 11303679 push 6 */
  push32((uint32_t)(0x6u));
  /* 1130367b call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x11303681u);
  /* 11303681 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303684 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303686 call 0x113052a0 */
  push32(0x1130368bu); f_113052a0();
  /* 1130368b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11303690 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11303692 jne 0x1130373d */
  if (!C.zf) goto L_1130373d;
  /* 11303698 mov esi, esp */
  ESI = (ESP);
  /* 1130369a push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1130369c call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x113036a2u);
  /* 113036a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113036a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113036a7 call 0x113052a0 */
  push32(0x113036acu); f_113052a0();
  /* 113036ac and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113036b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113036b3 je 0x1130373d */
  if (C.zf) goto L_1130373d;
  /* 113036b9 mov esi, esp */
  ESI = (ESP);
  /* 113036bb push 1 */
  push32((uint32_t)(0x1u));
  /* 113036bd push 0 */
  push32((uint32_t)(0x0u));
  /* 113036bf call dword ptr [0x113354c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354c4))), 0x113036c5u);
  /* 113036c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113036c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113036ca call 0x113052a0 */
  push32(0x113036cfu); f_113052a0();
  /* 113036cf cmp eax, 0x4ee8 */
  { uint32_t _a=(EAX),_b=(0x4ee8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113036d4 jle 0x1130373d */
  if ((C.zf||C.sf!=C.of)) goto L_1130373d;
  /* 113036d6 mov esi, esp */
  ESI = (ESP);
  /* 113036d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 113036da push 0 */
  push32((uint32_t)(0x0u));
  /* 113036dc call dword ptr [0x113354c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354c4))), 0x113036e2u);
  /* 113036e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113036e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113036e7 call 0x113052a0 */
  push32(0x113036ecu); f_113052a0();
  /* 113036ec cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113036f1 jle 0x1130373d */
  if ((C.zf||C.sf!=C.of)) goto L_1130373d;
  /* 113036f3 mov esi, esp */
  ESI = (ESP);
  /* 113036f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 113036f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 113036f9 call dword ptr [0x113354c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354c4))), 0x113036ffu);
  /* 113036ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303702 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303704 call 0x113052a0 */
  push32(0x11303709u); f_113052a0();
  /* 11303709 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130370e jle 0x1130373d */
  if ((C.zf||C.sf!=C.of)) goto L_1130373d;
  /* 11303710 mov esi, esp */
  ESI = (ESP);
  /* 11303712 push 0 */
  push32((uint32_t)(0x0u));
  /* 11303714 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11303716 call dword ptr [0x11335460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335460))), 0x1130371cu);
  /* 1130371c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130371f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303721 call 0x113052a0 */
  push32(0x11303726u); f_113052a0();
  /* 11303726 mov esi, esp */
  ESI = (ESP);
  /* 11303728 push 0x1132d40c */
  push32((uint32_t)(0x1132d40cu));
  /* 1130372d call dword ptr [0x11335498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335498))), 0x11303733u);
  /* 11303733 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303736 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303738 call 0x113052a0 */
  push32(0x1130373du); f_113052a0();
L_1130373d:;
  /* 1130373d mov esi, esp */
  ESI = (ESP);
  /* 1130373f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11303741 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x11303747u);
  /* 11303747 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130374a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130374c call 0x113052a0 */
  push32(0x11303751u); f_113052a0();
  /* 11303751 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11303756 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11303758 jne 0x11303881 */
  if (!C.zf) goto L_11303881;
  /* 1130375e mov esi, esp */
  ESI = (ESP);
  /* 11303760 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11303762 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x11303768u);
  /* 11303768 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130376b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130376d call 0x113052a0 */
  push32(0x11303772u); f_113052a0();
  /* 11303772 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11303777 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11303779 je 0x11303881 */
  if (C.zf) goto L_11303881;
  /* 1130377f mov esi, esp */
  ESI = (ESP);
  /* 11303781 push 1 */
  push32((uint32_t)(0x1u));
  /* 11303783 push 0 */
  push32((uint32_t)(0x0u));
  /* 11303785 call dword ptr [0x113354c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354c4))), 0x1130378bu);
  /* 1130378b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130378e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303790 call 0x113052a0 */
  push32(0x11303795u); f_113052a0();
  /* 11303795 cmp eax, 0x4ee8 */
  { uint32_t _a=(EAX),_b=(0x4ee8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130379a jle 0x11303881 */
  if ((C.zf||C.sf!=C.of)) goto L_11303881;
  /* 113037a0 mov esi, esp */
  ESI = (ESP);
  /* 113037a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113037a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113037a6 call dword ptr [0x113354c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354c4))), 0x113037acu);
  /* 113037ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113037af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113037b1 call 0x113052a0 */
  push32(0x113037b6u); f_113052a0();
  /* 113037b6 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113037bb jle 0x11303881 */
  if ((C.zf||C.sf!=C.of)) goto L_11303881;
  /* 113037c1 mov esi, esp */
  ESI = (ESP);
  /* 113037c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 113037c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113037c7 call dword ptr [0x113354c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354c4))), 0x113037cdu);
  /* 113037cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113037d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113037d2 call 0x113052a0 */
  push32(0x113037d7u); f_113052a0();
  /* 113037d7 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113037dc jle 0x11303881 */
  if ((C.zf||C.sf!=C.of)) goto L_11303881;
  /* 113037e2 mov esi, esp */
  ESI = (ESP);
  /* 113037e4 push 0x113324c8 */
  push32((uint32_t)(0x113324c8u));
  /* 113037e9 push 0x113324d8 */
  push32((uint32_t)(0x113324d8u));
  /* 113037ee call dword ptr [0x113354a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354a4))), 0x113037f4u);
  /* 113037f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113037f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113037f9 call 0x113052a0 */
  push32(0x113037feu); f_113052a0();
  /* 113037fe cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303801 jne 0x11303881 */
  if (!C.zf) goto L_11303881;
  /* 11303803 mov esi, esp */
  ESI = (ESP);
  /* 11303805 push 0 */
  push32((uint32_t)(0x0u));
  /* 11303807 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11303809 call dword ptr [0x11335460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335460))), 0x1130380fu);
  /* 1130380f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303812 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303814 call 0x113052a0 */
  push32(0x11303819u); f_113052a0();
  /* 11303819 mov esi, esp */
  ESI = (ESP);
  /* 1130381b push 0x1132d400 */
  push32((uint32_t)(0x1132d400u));
  /* 11303820 call dword ptr [0x11335498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335498))), 0x11303826u);
  /* 11303826 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303829 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130382b call 0x113052a0 */
  push32(0x11303830u); f_113052a0();
  /* 11303830 mov esi, esp */
  ESI = (ESP);
  /* 11303832 push 0xffffb1e0 */
  push32((uint32_t)(0xffffb1e0u));
  /* 11303837 push 1 */
  push32((uint32_t)(0x1u));
  /* 11303839 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130383b call dword ptr [0x113354c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354c0))), 0x11303841u);
  /* 11303841 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303844 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303846 call 0x113052a0 */
  push32(0x1130384bu); f_113052a0();
  /* 1130384b mov esi, esp */
  ESI = (ESP);
  /* 1130384d push 0xffff3cb0 */
  push32((uint32_t)(0xffff3cb0u));
  /* 11303852 push 0 */
  push32((uint32_t)(0x0u));
  /* 11303854 push 0 */
  push32((uint32_t)(0x0u));
  /* 11303856 call dword ptr [0x113354c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354c0))), 0x1130385cu);
  /* 1130385c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130385f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303861 call 0x113052a0 */
  push32(0x11303866u); f_113052a0();
  /* 11303866 mov esi, esp */
  ESI = (ESP);
  /* 11303868 push 0xffff3cb0 */
  push32((uint32_t)(0xffff3cb0u));
  /* 1130386d push 2 */
  push32((uint32_t)(0x2u));
  /* 1130386f push 0 */
  push32((uint32_t)(0x0u));
  /* 11303871 call dword ptr [0x113354c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354c0))), 0x11303877u);
  /* 11303877 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130387a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130387c call 0x113052a0 */
  push32(0x11303881u); f_113052a0();
L_11303881:;
  /* 11303881 mov esi, esp */
  ESI = (ESP);
  /* 11303883 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11303885 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x1130388bu);
  /* 1130388b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130388e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303890 call 0x113052a0 */
  push32(0x11303895u); f_113052a0();
  /* 11303895 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130389a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130389c je 0x113038e7 */
  if (C.zf) goto L_113038e7;
  /* 1130389e mov esi, esp */
  ESI = (ESP);
  /* 113038a0 push 0x113324c8 */
  push32((uint32_t)(0x113324c8u));
  /* 113038a5 call dword ptr [0x113354b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354b4))), 0x113038abu);
  /* 113038ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113038ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113038b0 call 0x113052a0 */
  push32(0x113038b5u); f_113052a0();
  /* 113038b5 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113038b8 jge 0x113038e7 */
  if ((C.sf==C.of)) goto L_113038e7;
  /* 113038ba mov esi, esp */
  ESI = (ESP);
  /* 113038bc push 0 */
  push32((uint32_t)(0x0u));
  /* 113038be push 0x12 */
  push32((uint32_t)(0x12u));
  /* 113038c0 call dword ptr [0x11335460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335460))), 0x113038c6u);
  /* 113038c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113038c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113038cb call 0x113052a0 */
  push32(0x113038d0u); f_113052a0();
  /* 113038d0 mov esi, esp */
  ESI = (ESP);
  /* 113038d2 push 0x1132d3f4 */
  push32((uint32_t)(0x1132d3f4u));
  /* 113038d7 call dword ptr [0x11335498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335498))), 0x113038ddu);
  /* 113038dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113038e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113038e2 call 0x113052a0 */
  push32(0x113038e7u); f_113052a0();
L_113038e7:;
  /* 113038e7 mov esi, esp */
  ESI = (ESP);
  /* 113038e9 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 113038eb call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x113038f1u);
  /* 113038f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113038f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113038f6 call 0x113052a0 */
  push32(0x113038fbu); f_113052a0();
  /* 113038fb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11303900 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11303902 jne 0x11303a42 */
  if (!C.zf) goto L_11303a42;
  /* 11303908 mov esi, esp */
  ESI = (ESP);
  /* 1130390a push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1130390c call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x11303912u);
  /* 11303912 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303915 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303917 call 0x113052a0 */
  push32(0x1130391cu); f_113052a0();
  /* 1130391c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11303921 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11303923 je 0x11303a42 */
  if (C.zf) goto L_11303a42;
  /* 11303929 mov esi, esp */
  ESI = (ESP);
  /* 1130392b push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1130392d call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x11303933u);
  /* 11303933 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303936 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303938 call 0x113052a0 */
  push32(0x1130393du); f_113052a0();
  /* 1130393d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11303942 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11303944 je 0x11303a42 */
  if (C.zf) goto L_11303a42;
  /* 1130394a mov esi, esp */
  ESI = (ESP);
  /* 1130394c push 0x113324c8 */
  push32((uint32_t)(0x113324c8u));
  /* 11303951 push 0x113324e0 */
  push32((uint32_t)(0x113324e0u));
  /* 11303956 call dword ptr [0x113354a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354a4))), 0x1130395cu);
  /* 1130395c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130395f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303961 call 0x113052a0 */
  push32(0x11303966u); f_113052a0();
  /* 11303966 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303969 jne 0x11303a42 */
  if (!C.zf) goto L_11303a42;
  /* 1130396f mov esi, esp */
  ESI = (ESP);
  /* 11303971 push 0 */
  push32((uint32_t)(0x0u));
  /* 11303973 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11303975 call dword ptr [0x11335460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335460))), 0x1130397bu);
  /* 1130397b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130397e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303980 call 0x113052a0 */
  push32(0x11303985u); f_113052a0();
  /* 11303985 mov esi, esp */
  ESI = (ESP);
  /* 11303987 push 0x1132d3e8 */
  push32((uint32_t)(0x1132d3e8u));
  /* 1130398c call dword ptr [0x11335498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335498))), 0x11303992u);
  /* 11303992 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303995 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303997 call 0x113052a0 */
  push32(0x1130399cu); f_113052a0();
  /* 1130399c mov esi, esp */
  ESI = (ESP);
  /* 1130399e push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 113039a0 call dword ptr [0x1133545c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133545c))), 0x113039a6u);
  /* 113039a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113039a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113039ab call 0x113052a0 */
  push32(0x113039b0u); f_113052a0();
  /* 113039b0 mov esi, esp */
  ESI = (ESP);
  /* 113039b2 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 113039b4 call dword ptr [0x11335464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335464))), 0x113039bau);
  /* 113039ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113039bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113039bf call 0x113052a0 */
  push32(0x113039c4u); f_113052a0();
  /* 113039c4 mov esi, esp */
  ESI = (ESP);
  /* 113039c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 113039c8 push 0x113324c8 */
  push32((uint32_t)(0x113324c8u));
  /* 113039cd call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x113039d3u);
  /* 113039d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113039d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113039d8 call 0x113052a0 */
  push32(0x113039ddu); f_113052a0();
  /* 113039dd mov esi, esp */
  ESI = (ESP);
  /* 113039df push 1 */
  push32((uint32_t)(0x1u));
  /* 113039e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 113039e3 call dword ptr [0x113354dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354dc))), 0x113039e9u);
  /* 113039e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113039ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113039ee call 0x113052a0 */
  push32(0x113039f3u); f_113052a0();
  /* 113039f3 mov esi, esp */
  ESI = (ESP);
  /* 113039f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113039f7 push 0x113324c8 */
  push32((uint32_t)(0x113324c8u));
  /* 113039fc call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x11303a02u);
  /* 11303a02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303a05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303a07 call 0x113052a0 */
  push32(0x11303a0cu); f_113052a0();
  /* 11303a0c mov esi, esp */
  ESI = (ESP);
  /* 11303a0e push 0 */
  push32((uint32_t)(0x0u));
  /* 11303a10 push 0 */
  push32((uint32_t)(0x0u));
  /* 11303a12 push 0x113323e8 */
  push32((uint32_t)(0x113323e8u));
  /* 11303a17 push 1 */
  push32((uint32_t)(0x1u));
  /* 11303a19 call dword ptr [0x113354b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354b8))), 0x11303a1fu);
  /* 11303a1f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303a22 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303a24 call 0x113052a0 */
  push32(0x11303a29u); f_113052a0();
  /* 11303a29 mov esi, esp */
  ESI = (ESP);
  /* 11303a2b push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11303a30 push 7 */
  push32((uint32_t)(0x7u));
  /* 11303a32 call dword ptr [0x11335484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335484))), 0x11303a38u);
  /* 11303a38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303a3b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303a3d call 0x113052a0 */
  push32(0x11303a42u); f_113052a0();
L_11303a42:;
  /* 11303a42 mov esi, esp */
  ESI = (ESP);
  /* 11303a44 push 7 */
  push32((uint32_t)(0x7u));
  /* 11303a46 call dword ptr [0x113354a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354a0))), 0x11303a4cu);
  /* 11303a4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303a4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303a51 call 0x113052a0 */
  push32(0x11303a56u); f_113052a0();
  /* 11303a56 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11303a5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11303a5d je 0x11303bad */
  if (C.zf) goto L_11303bad;
  /* 11303a63 mov esi, esp */
  ESI = (ESP);
  /* 11303a65 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11303a67 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x11303a6du);
  /* 11303a6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303a70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303a72 call 0x113052a0 */
  push32(0x11303a77u); f_113052a0();
  /* 11303a77 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11303a7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11303a7e je 0x11303bad */
  if (C.zf) goto L_11303bad;
  /* 11303a84 mov esi, esp */
  ESI = (ESP);
  /* 11303a86 push 0 */
  push32((uint32_t)(0x0u));
  /* 11303a88 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11303a8a call dword ptr [0x11335460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335460))), 0x11303a90u);
  /* 11303a90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303a93 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303a95 call 0x113052a0 */
  push32(0x11303a9au); f_113052a0();
  /* 11303a9a mov esi, esp */
  ESI = (ESP);
  /* 11303a9c push 0x1132d3dc */
  push32((uint32_t)(0x1132d3dcu));
  /* 11303aa1 call dword ptr [0x11335498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335498))), 0x11303aa7u);
  /* 11303aa7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303aaa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303aac call 0x113052a0 */
  push32(0x11303ab1u); f_113052a0();
  /* 11303ab1 mov esi, esp */
  ESI = (ESP);
  /* 11303ab3 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11303ab8 push 0x11332640 */
  push32((uint32_t)(0x11332640u));
  /* 11303abd push 1 */
  push32((uint32_t)(0x1u));
  /* 11303abf push 0x11332538 */
  push32((uint32_t)(0x11332538u));
  /* 11303ac4 push 0x113323f8 */
  push32((uint32_t)(0x113323f8u));
  /* 11303ac9 push 0x11332438 */
  push32((uint32_t)(0x11332438u));
  /* 11303ace call dword ptr [0x113354d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354d8))), 0x11303ad4u);
  /* 11303ad4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303ad7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303ad9 call 0x113052a0 */
  push32(0x11303adeu); f_113052a0();
  /* 11303ade mov esi, esp */
  ESI = (ESP);
  /* 11303ae0 push 0xaa */
  push32((uint32_t)(0xaau));
  /* 11303ae5 push 0x11332648 */
  push32((uint32_t)(0x11332648u));
  /* 11303aea push 1 */
  push32((uint32_t)(0x1u));
  /* 11303aec push 0x11332538 */
  push32((uint32_t)(0x11332538u));
  /* 11303af1 push 0x113323f8 */
  push32((uint32_t)(0x113323f8u));
  /* 11303af6 push 0x11332430 */
  push32((uint32_t)(0x11332430u));
  /* 11303afb call dword ptr [0x113354d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354d8))), 0x11303b01u);
  /* 11303b01 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303b04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303b06 call 0x113052a0 */
  push32(0x11303b0bu); f_113052a0();
  /* 11303b0b mov esi, esp */
  ESI = (ESP);
  /* 11303b0d push 5 */
  push32((uint32_t)(0x5u));
  /* 11303b0f push 0xa */
  push32((uint32_t)(0xau));
  /* 11303b11 push 0x11332590 */
  push32((uint32_t)(0x11332590u));
  /* 11303b16 call dword ptr [0x113354a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354a8))), 0x11303b1cu);
  /* 11303b1c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303b1f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303b21 call 0x113052a0 */
  push32(0x11303b26u); f_113052a0();
  /* 11303b26 mov esi, esp */
  ESI = (ESP);
  /* 11303b28 push 6 */
  push32((uint32_t)(0x6u));
  /* 11303b2a push 0xa */
  push32((uint32_t)(0xau));
  /* 11303b2c push 0x11332598 */
  push32((uint32_t)(0x11332598u));
  /* 11303b31 call dword ptr [0x113354a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354a8))), 0x11303b37u);
  /* 11303b37 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303b3a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303b3c call 0x113052a0 */
  push32(0x11303b41u); f_113052a0();
  /* 11303b41 mov esi, esp */
  ESI = (ESP);
  /* 11303b43 push 7 */
  push32((uint32_t)(0x7u));
  /* 11303b45 push 0xa */
  push32((uint32_t)(0xau));
  /* 11303b47 push 0x113325b8 */
  push32((uint32_t)(0x113325b8u));
  /* 11303b4c call dword ptr [0x113354a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354a8))), 0x11303b52u);
  /* 11303b52 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303b55 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303b57 call 0x113052a0 */
  push32(0x11303b5cu); f_113052a0();
  /* 11303b5c mov esi, esp */
  ESI = (ESP);
  /* 11303b5e push 8 */
  push32((uint32_t)(0x8u));
  /* 11303b60 push 0xa */
  push32((uint32_t)(0xau));
  /* 11303b62 push 0x113325c0 */
  push32((uint32_t)(0x113325c0u));
  /* 11303b67 call dword ptr [0x113354a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354a8))), 0x11303b6du);
  /* 11303b6d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303b70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303b72 call 0x113052a0 */
  push32(0x11303b77u); f_113052a0();
  /* 11303b77 mov esi, esp */
  ESI = (ESP);
  /* 11303b79 push 9 */
  push32((uint32_t)(0x9u));
  /* 11303b7b push 0xa */
  push32((uint32_t)(0xau));
  /* 11303b7d push 0x113325c8 */
  push32((uint32_t)(0x113325c8u));
  /* 11303b82 call dword ptr [0x113354a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354a8))), 0x11303b88u);
  /* 11303b88 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303b8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303b8d call 0x113052a0 */
  push32(0x11303b92u); f_113052a0();
  /* 11303b92 mov esi, esp */
  ESI = (ESP);
  /* 11303b94 push 0xa */
  push32((uint32_t)(0xau));
  /* 11303b96 push 0xa */
  push32((uint32_t)(0xau));
  /* 11303b98 push 0x113325d0 */
  push32((uint32_t)(0x113325d0u));
  /* 11303b9d call dword ptr [0x113354a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354a8))), 0x11303ba3u);
  /* 11303ba3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303ba6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303ba8 call 0x113052a0 */
  push32(0x11303badu); f_113052a0();
L_11303bad:;
  /* 11303bad mov esi, esp */
  ESI = (ESP);
  /* 11303baf push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11303bb1 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x11303bb7u);
  /* 11303bb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303bba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303bbc call 0x113052a0 */
  push32(0x11303bc1u); f_113052a0();
  /* 11303bc1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11303bc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11303bc8 jne 0x11303c2b */
  if (!C.zf) goto L_11303c2b;
  /* 11303bca mov esi, esp */
  ESI = (ESP);
  /* 11303bcc push 0x113326c0 */
  push32((uint32_t)(0x113326c0u));
  /* 11303bd1 call dword ptr [0x113354b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354b4))), 0x11303bd7u);
  /* 11303bd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303bda cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303bdc call 0x113052a0 */
  push32(0x11303be1u); f_113052a0();
  /* 11303be1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11303be3 jle 0x11303c2b */
  if ((C.zf||C.sf!=C.of)) goto L_11303c2b;
  /* 11303be5 mov esi, esp */
  ESI = (ESP);
  /* 11303be7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11303be9 push 0x11332438 */
  push32((uint32_t)(0x11332438u));
  /* 11303bee call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x11303bf4u);
  /* 11303bf4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303bf7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303bf9 call 0x113052a0 */
  push32(0x11303bfeu); f_113052a0();
  /* 11303bfe mov esi, esp */
  ESI = (ESP);
  /* 11303c00 push 0x113326c0 */
  push32((uint32_t)(0x113326c0u));
  /* 11303c05 push 1 */
  push32((uint32_t)(0x1u));
  /* 11303c07 call dword ptr [0x113354f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354f4))), 0x11303c0du);
  /* 11303c0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303c10 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303c12 call 0x113052a0 */
  push32(0x11303c17u); f_113052a0();
  /* 11303c17 mov esi, esp */
  ESI = (ESP);
  /* 11303c19 push 1 */
  push32((uint32_t)(0x1u));
  /* 11303c1b call dword ptr [0x1133549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133549c))), 0x11303c21u);
  /* 11303c21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303c24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303c26 call 0x113052a0 */
  push32(0x11303c2bu); f_113052a0();
L_11303c2b:;
  /* 11303c2b mov esi, esp */
  ESI = (ESP);
  /* 11303c2d push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11303c2f call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x11303c35u);
  /* 11303c35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303c38 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303c3a call 0x113052a0 */
  push32(0x11303c3fu); f_113052a0();
  /* 11303c3f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11303c44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11303c46 jne 0x11303ce7 */
  if (!C.zf) goto L_11303ce7;
  /* 11303c4c mov esi, esp */
  ESI = (ESP);
  /* 11303c4e push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11303c50 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x11303c56u);
  /* 11303c56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303c59 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303c5b call 0x113052a0 */
  push32(0x11303c60u); f_113052a0();
  /* 11303c60 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11303c65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11303c67 je 0x11303ce7 */
  if (C.zf) goto L_11303ce7;
  /* 11303c69 mov esi, esp */
  ESI = (ESP);
  /* 11303c6b push 0x113326c0 */
  push32((uint32_t)(0x113326c0u));
  /* 11303c70 call dword ptr [0x113354b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354b4))), 0x11303c76u);
  /* 11303c76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303c79 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303c7b call 0x113052a0 */
  push32(0x11303c80u); f_113052a0();
  /* 11303c80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11303c82 jne 0x11303ce7 */
  if (!C.zf) goto L_11303ce7;
  /* 11303c84 mov esi, esp */
  ESI = (ESP);
  /* 11303c86 push 0 */
  push32((uint32_t)(0x0u));
  /* 11303c88 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11303c8a call dword ptr [0x11335460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335460))), 0x11303c90u);
  /* 11303c90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303c93 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303c95 call 0x113052a0 */
  push32(0x11303c9au); f_113052a0();
  /* 11303c9a mov esi, esp */
  ESI = (ESP);
  /* 11303c9c push 0 */
  push32((uint32_t)(0x0u));
  /* 11303c9e push 0x11332438 */
  push32((uint32_t)(0x11332438u));
  /* 11303ca3 call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x11303ca9u);
  /* 11303ca9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303cac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303cae call 0x113052a0 */
  push32(0x11303cb3u); f_113052a0();
  /* 11303cb3 mov esi, esp */
  ESI = (ESP);
  /* 11303cb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11303cb7 push 0xc3 */
  push32((uint32_t)(0xc3u));
  /* 11303cbc push 0x11332590 */
  push32((uint32_t)(0x11332590u));
  /* 11303cc1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11303cc3 call dword ptr [0x113354d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354d4))), 0x11303cc9u);
  /* 11303cc9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303ccc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303cce call 0x113052a0 */
  push32(0x11303cd3u); f_113052a0();
  /* 11303cd3 mov esi, esp */
  ESI = (ESP);
  /* 11303cd5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11303cd7 call dword ptr [0x1133549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133549c))), 0x11303cddu);
  /* 11303cdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303ce0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303ce2 call 0x113052a0 */
  push32(0x11303ce7u); f_113052a0();
L_11303ce7:;
  /* 11303ce7 mov esi, esp */
  ESI = (ESP);
  /* 11303ce9 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11303ceb call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x11303cf1u);
  /* 11303cf1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303cf4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303cf6 call 0x113052a0 */
  push32(0x11303cfbu); f_113052a0();
  /* 11303cfb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11303d00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11303d02 jne 0x11303d65 */
  if (!C.zf) goto L_11303d65;
  /* 11303d04 mov esi, esp */
  ESI = (ESP);
  /* 11303d06 push 0x113323f0 */
  push32((uint32_t)(0x113323f0u));
  /* 11303d0b call dword ptr [0x113354b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354b4))), 0x11303d11u);
  /* 11303d11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303d14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303d16 call 0x113052a0 */
  push32(0x11303d1bu); f_113052a0();
  /* 11303d1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11303d1d jle 0x11303d65 */
  if ((C.zf||C.sf!=C.of)) goto L_11303d65;
  /* 11303d1f mov esi, esp */
  ESI = (ESP);
  /* 11303d21 push 0 */
  push32((uint32_t)(0x0u));
  /* 11303d23 push 0x11332430 */
  push32((uint32_t)(0x11332430u));
  /* 11303d28 call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x11303d2eu);
  /* 11303d2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303d31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303d33 call 0x113052a0 */
  push32(0x11303d38u); f_113052a0();
  /* 11303d38 mov esi, esp */
  ESI = (ESP);
  /* 11303d3a push 0x113323f0 */
  push32((uint32_t)(0x113323f0u));
  /* 11303d3f push 1 */
  push32((uint32_t)(0x1u));
  /* 11303d41 call dword ptr [0x113354f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354f4))), 0x11303d47u);
  /* 11303d47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303d4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303d4c call 0x113052a0 */
  push32(0x11303d51u); f_113052a0();
  /* 11303d51 mov esi, esp */
  ESI = (ESP);
  /* 11303d53 push 1 */
  push32((uint32_t)(0x1u));
  /* 11303d55 call dword ptr [0x1133549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133549c))), 0x11303d5bu);
  /* 11303d5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303d5e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303d60 call 0x113052a0 */
  push32(0x11303d65u); f_113052a0();
L_11303d65:;
  /* 11303d65 mov esi, esp */
  ESI = (ESP);
  /* 11303d67 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11303d69 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x11303d6fu);
  /* 11303d6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303d72 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303d74 call 0x113052a0 */
  push32(0x11303d79u); f_113052a0();
  /* 11303d79 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11303d7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11303d80 jne 0x11303e21 */
  if (!C.zf) goto L_11303e21;
  /* 11303d86 mov esi, esp */
  ESI = (ESP);
  /* 11303d88 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11303d8a call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x11303d90u);
  /* 11303d90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303d93 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303d95 call 0x113052a0 */
  push32(0x11303d9au); f_113052a0();
  /* 11303d9a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11303d9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11303da1 je 0x11303e21 */
  if (C.zf) goto L_11303e21;
  /* 11303da3 mov esi, esp */
  ESI = (ESP);
  /* 11303da5 push 0x113323f0 */
  push32((uint32_t)(0x113323f0u));
  /* 11303daa call dword ptr [0x113354b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354b4))), 0x11303db0u);
  /* 11303db0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303db3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303db5 call 0x113052a0 */
  push32(0x11303dbau); f_113052a0();
  /* 11303dba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11303dbc jne 0x11303e21 */
  if (!C.zf) goto L_11303e21;
  /* 11303dbe mov esi, esp */
  ESI = (ESP);
  /* 11303dc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11303dc2 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11303dc4 call dword ptr [0x11335460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335460))), 0x11303dcau);
  /* 11303dca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303dcd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303dcf call 0x113052a0 */
  push32(0x11303dd4u); f_113052a0();
  /* 11303dd4 mov esi, esp */
  ESI = (ESP);
  /* 11303dd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11303dd8 push 0x11332430 */
  push32((uint32_t)(0x11332430u));
  /* 11303ddd call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x11303de3u);
  /* 11303de3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303de6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303de8 call 0x113052a0 */
  push32(0x11303dedu); f_113052a0();
  /* 11303ded mov esi, esp */
  ESI = (ESP);
  /* 11303def push 0 */
  push32((uint32_t)(0x0u));
  /* 11303df1 push 0xc3 */
  push32((uint32_t)(0xc3u));
  /* 11303df6 push 0x11332598 */
  push32((uint32_t)(0x11332598u));
  /* 11303dfb push 1 */
  push32((uint32_t)(0x1u));
  /* 11303dfd call dword ptr [0x113354d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354d4))), 0x11303e03u);
  /* 11303e03 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303e06 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303e08 call 0x113052a0 */
  push32(0x11303e0du); f_113052a0();
  /* 11303e0d mov esi, esp */
  ESI = (ESP);
  /* 11303e0f push 1 */
  push32((uint32_t)(0x1u));
  /* 11303e11 call dword ptr [0x1133549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133549c))), 0x11303e17u);
  /* 11303e17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303e1a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303e1c call 0x113052a0 */
  push32(0x11303e21u); f_113052a0();
L_11303e21:;
  /* 11303e21 mov esi, esp */
  ESI = (ESP);
  /* 11303e23 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11303e25 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x11303e2bu);
  /* 11303e2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303e2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303e30 call 0x113052a0 */
  push32(0x11303e35u); f_113052a0();
  /* 11303e35 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11303e3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11303e3c jne 0x11303f1e */
  if (!C.zf) goto L_11303f1e;
  /* 11303e42 mov esi, esp */
  ESI = (ESP);
  /* 11303e44 push 0x59 */
  push32((uint32_t)(0x59u));
  /* 11303e46 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x11303e4cu);
  /* 11303e4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303e4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303e51 call 0x113052a0 */
  push32(0x11303e56u); f_113052a0();
  /* 11303e56 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11303e5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11303e5d je 0x11303f1e */
  if (C.zf) goto L_11303f1e;
  /* 11303e63 mov esi, esp */
  ESI = (ESP);
  /* 11303e65 push 0x11332698 */
  push32((uint32_t)(0x11332698u));
  /* 11303e6a call dword ptr [0x113354b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354b4))), 0x11303e70u);
  /* 11303e70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303e73 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303e75 call 0x113052a0 */
  push32(0x11303e7au); f_113052a0();
  /* 11303e7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11303e7c jne 0x11303f1e */
  if (!C.zf) goto L_11303f1e;
  /* 11303e82 mov esi, esp */
  ESI = (ESP);
  /* 11303e84 push 0 */
  push32((uint32_t)(0x0u));
  /* 11303e86 push 0x59 */
  push32((uint32_t)(0x59u));
  /* 11303e88 call dword ptr [0x11335460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335460))), 0x11303e8eu);
  /* 11303e8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303e91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303e93 call 0x113052a0 */
  push32(0x11303e98u); f_113052a0();
  /* 11303e98 mov esi, esp */
  ESI = (ESP);
  /* 11303e9a push 0 */
  push32((uint32_t)(0x0u));
  /* 11303e9c push 0x11332438 */
  push32((uint32_t)(0x11332438u));
  /* 11303ea1 call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x11303ea7u);
  /* 11303ea7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303eaa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303eac call 0x113052a0 */
  push32(0x11303eb1u); f_113052a0();
  /* 11303eb1 mov esi, esp */
  ESI = (ESP);
  /* 11303eb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11303eb5 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11303eba push 0x11332640 */
  push32((uint32_t)(0x11332640u));
  /* 11303ebf push 1 */
  push32((uint32_t)(0x1u));
  /* 11303ec1 call dword ptr [0x113354b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354b8))), 0x11303ec7u);
  /* 11303ec7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303eca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303ecc call 0x113052a0 */
  push32(0x11303ed1u); f_113052a0();
  /* 11303ed1 mov esi, esp */
  ESI = (ESP);
  /* 11303ed3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11303ed5 push 0x11332430 */
  push32((uint32_t)(0x11332430u));
  /* 11303eda call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x11303ee0u);
  /* 11303ee0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303ee3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303ee5 call 0x113052a0 */
  push32(0x11303eeau); f_113052a0();
  /* 11303eea mov esi, esp */
  ESI = (ESP);
  /* 11303eec push 0 */
  push32((uint32_t)(0x0u));
  /* 11303eee push 0xaa */
  push32((uint32_t)(0xaau));
  /* 11303ef3 push 0x11332648 */
  push32((uint32_t)(0x11332648u));
  /* 11303ef8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11303efa call dword ptr [0x113354b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354b8))), 0x11303f00u);
  /* 11303f00 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303f03 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303f05 call 0x113052a0 */
  push32(0x11303f0au); f_113052a0();
  /* 11303f0a mov esi, esp */
  ESI = (ESP);
  /* 11303f0c push 1 */
  push32((uint32_t)(0x1u));
  /* 11303f0e call dword ptr [0x1133549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133549c))), 0x11303f14u);
  /* 11303f14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303f17 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303f19 call 0x113052a0 */
  push32(0x11303f1eu); f_113052a0();
L_11303f1e:;
  /* 11303f1e mov esi, esp */
  ESI = (ESP);
  /* 11303f20 push 6 */
  push32((uint32_t)(0x6u));
  /* 11303f22 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x11303f28u);
  /* 11303f28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303f2b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303f2d call 0x113052a0 */
  push32(0x11303f32u); f_113052a0();
  /* 11303f32 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11303f37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11303f39 jne 0x11304031 */
  if (!C.zf) goto L_11304031;
  /* 11303f3f mov esi, esp */
  ESI = (ESP);
  /* 11303f41 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11303f43 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x11303f49u);
  /* 11303f49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303f4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303f4e call 0x113052a0 */
  push32(0x11303f53u); f_113052a0();
  /* 11303f53 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11303f58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11303f5a je 0x11304031 */
  if (C.zf) goto L_11304031;
  /* 11303f60 mov esi, esp */
  ESI = (ESP);
  /* 11303f62 push 0x11332420 */
  push32((uint32_t)(0x11332420u));
  /* 11303f67 call dword ptr [0x113354b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354b4))), 0x11303f6du);
  /* 11303f6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303f70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303f72 call 0x113052a0 */
  push32(0x11303f77u); f_113052a0();
  /* 11303f77 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303f7a jge 0x11304031 */
  if ((C.sf==C.of)) goto L_11304031;
  /* 11303f80 mov esi, esp */
  ESI = (ESP);
  /* 11303f82 push 0xaa */
  push32((uint32_t)(0xaau));
  /* 11303f87 push 0x11332648 */
  push32((uint32_t)(0x11332648u));
  /* 11303f8c push 1 */
  push32((uint32_t)(0x1u));
  /* 11303f8e push 0x11332408 */
  push32((uint32_t)(0x11332408u));
  /* 11303f93 push 0x113324b8 */
  push32((uint32_t)(0x113324b8u));
  /* 11303f98 push 0x11332528 */
  push32((uint32_t)(0x11332528u));
  /* 11303f9d call dword ptr [0x113354d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354d8))), 0x11303fa3u);
  /* 11303fa3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303fa6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303fa8 call 0x113052a0 */
  push32(0x11303fadu); f_113052a0();
  /* 11303fad mov esi, esp */
  ESI = (ESP);
  /* 11303faf push 0 */
  push32((uint32_t)(0x0u));
  /* 11303fb1 push 0x11332528 */
  push32((uint32_t)(0x11332528u));
  /* 11303fb6 call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x11303fbcu);
  /* 11303fbc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303fbf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303fc1 call 0x113052a0 */
  push32(0x11303fc6u); f_113052a0();
  /* 11303fc6 mov esi, esp */
  ESI = (ESP);
  /* 11303fc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11303fca push 0xaa */
  push32((uint32_t)(0xaau));
  /* 11303fcf push 0x11332628 */
  push32((uint32_t)(0x11332628u));
  /* 11303fd4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11303fd6 call dword ptr [0x113354d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354d4))), 0x11303fdcu);
  /* 11303fdc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303fdf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303fe1 call 0x113052a0 */
  push32(0x11303fe6u); f_113052a0();
  /* 11303fe6 mov esi, esp */
  ESI = (ESP);
  /* 11303fe8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11303fea push 0x11332528 */
  push32((uint32_t)(0x11332528u));
  /* 11303fef call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x11303ff5u);
  /* 11303ff5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11303ff8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11303ffa call 0x113052a0 */
  push32(0x11303fffu); f_113052a0();
  /* 11303fff mov esi, esp */
  ESI = (ESP);
  /* 11304001 push 0 */
  push32((uint32_t)(0x0u));
  /* 11304003 push 1 */
  push32((uint32_t)(0x1u));
  /* 11304005 call dword ptr [0x113354dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354dc))), 0x1130400bu);
  /* 1130400b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130400e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11304010 call 0x113052a0 */
  push32(0x11304015u); f_113052a0();
  /* 11304015 mov esi, esp */
  ESI = (ESP);
  /* 11304017 push 0x11332420 */
  push32((uint32_t)(0x11332420u));
  /* 1130401c push 0x11332528 */
  push32((uint32_t)(0x11332528u));
  /* 11304021 call dword ptr [0x113354e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354e4))), 0x11304027u);
  /* 11304027 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130402a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130402c call 0x113052a0 */
  push32(0x11304031u); f_113052a0();
L_11304031:;
  /* 11304031 mov esi, esp */
  ESI = (ESP);
  /* 11304033 push 6 */
  push32((uint32_t)(0x6u));
  /* 11304035 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x1130403bu);
  /* 1130403b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130403e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11304040 call 0x113052a0 */
  push32(0x11304045u); f_113052a0();
  /* 11304045 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130404a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130404c jne 0x11304294 */
  if (!C.zf) goto L_11304294;
  /* 11304052 mov esi, esp */
  ESI = (ESP);
  /* 11304054 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11304056 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x1130405cu);
  /* 1130405c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130405f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11304061 call 0x113052a0 */
  push32(0x11304066u); f_113052a0();
  /* 11304066 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130406b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130406d je 0x11304294 */
  if (C.zf) goto L_11304294;
  /* 11304073 mov esi, esp */
  ESI = (ESP);
  /* 11304075 push 7 */
  push32((uint32_t)(0x7u));
  /* 11304077 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x1130407du);
  /* 1130407d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11304080 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11304082 call 0x113052a0 */
  push32(0x11304087u); f_113052a0();
  /* 11304087 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130408c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130408e je 0x11304294 */
  if (C.zf) goto L_11304294;
  /* 11304094 mov esi, esp */
  ESI = (ESP);
  /* 11304096 push 0 */
  push32((uint32_t)(0x0u));
  /* 11304098 push 7 */
  push32((uint32_t)(0x7u));
  /* 1130409a call dword ptr [0x11335460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335460))), 0x113040a0u);
  /* 113040a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113040a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113040a5 call 0x113052a0 */
  push32(0x113040aau); f_113052a0();
  /* 113040aa mov esi, esp */
  ESI = (ESP);
  /* 113040ac push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 113040b1 push 4 */
  push32((uint32_t)(0x4u));
  /* 113040b3 call dword ptr [0x11335484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335484))), 0x113040b9u);
  /* 113040b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113040bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113040be call 0x113052a0 */
  push32(0x113040c3u); f_113052a0();
  /* 113040c3 mov esi, esp */
  ESI = (ESP);
  /* 113040c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113040c7 call dword ptr [0x11335488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335488))), 0x113040cdu);
  /* 113040cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113040d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113040d2 call 0x113052a0 */
  push32(0x113040d7u); f_113052a0();
  /* 113040d7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113040da cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113040de ja 0x1130424a */
  if ((!C.cf&&!C.zf)) goto L_1130424a;
  /* 113040e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113040e7 jmp dword ptr [ecx*4 + 0x11304751] */
  switch (ECX) {
    case 0: goto L_113040ee;
    case 1: goto L_11304147;
    case 2: goto L_113041a0;
    case 3: goto L_113041f6;
    default: x86_unimpl("switch@0x113040e7 out of table"); return;
  }
L_113040ee:;
  /* 113040ee mov esi, esp */
  ESI = (ESP);
  /* 113040f0 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 113040f2 push 0x11332638 */
  push32((uint32_t)(0x11332638u));
  /* 113040f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 113040f9 push 0x113326c8 */
  push32((uint32_t)(0x113326c8u));
  /* 113040fe push 0x113324b8 */
  push32((uint32_t)(0x113324b8u));
  /* 11304103 push 0x11332460 */
  push32((uint32_t)(0x11332460u));
  /* 11304108 call dword ptr [0x113354d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354d8))), 0x1130410eu);
  /* 1130410e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11304111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11304113 call 0x113052a0 */
  push32(0x11304118u); f_113052a0();
  /* 11304118 mov esi, esp */
  ESI = (ESP);
  /* 1130411a push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1130411c push 0x11332638 */
  push32((uint32_t)(0x11332638u));
  /* 11304121 push 2 */
  push32((uint32_t)(0x2u));
  /* 11304123 push 0x11332488 */
  push32((uint32_t)(0x11332488u));
  /* 11304128 push 0x113324b8 */
  push32((uint32_t)(0x113324b8u));
  /* 1130412d push 0x11332458 */
  push32((uint32_t)(0x11332458u));
  /* 11304132 call dword ptr [0x113354d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354d8))), 0x11304138u);
  /* 11304138 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130413b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130413d call 0x113052a0 */
  push32(0x11304142u); f_113052a0();
  /* 11304142 jmp 0x1130424a */
  goto L_1130424a;
L_11304147:;
  /* 11304147 mov esi, esp */
  ESI = (ESP);
  /* 11304149 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1130414b push 0x11332638 */
  push32((uint32_t)(0x11332638u));
  /* 11304150 push 2 */
  push32((uint32_t)(0x2u));
  /* 11304152 push 0x113326c8 */
  push32((uint32_t)(0x113326c8u));
  /* 11304157 push 0x113323f8 */
  push32((uint32_t)(0x113323f8u));
  /* 1130415c push 0x11332460 */
  push32((uint32_t)(0x11332460u));
  /* 11304161 call dword ptr [0x113354d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354d8))), 0x11304167u);
  /* 11304167 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130416a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130416c call 0x113052a0 */
  push32(0x11304171u); f_113052a0();
  /* 11304171 mov esi, esp */
  ESI = (ESP);
  /* 11304173 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11304175 push 0x11332638 */
  push32((uint32_t)(0x11332638u));
  /* 1130417a push 2 */
  push32((uint32_t)(0x2u));
  /* 1130417c push 0x11332488 */
  push32((uint32_t)(0x11332488u));
  /* 11304181 push 0x113324b8 */
  push32((uint32_t)(0x113324b8u));
  /* 11304186 push 0x11332458 */
  push32((uint32_t)(0x11332458u));
  /* 1130418b call dword ptr [0x113354d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354d8))), 0x11304191u);
  /* 11304191 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11304194 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11304196 call 0x113052a0 */
  push32(0x1130419bu); f_113052a0();
  /* 1130419b jmp 0x1130424a */
  goto L_1130424a;
L_113041a0:;
  /* 113041a0 mov esi, esp */
  ESI = (ESP);
  /* 113041a2 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 113041a4 push 0x11332638 */
  push32((uint32_t)(0x11332638u));
  /* 113041a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 113041ab push 0x113326c8 */
  push32((uint32_t)(0x113326c8u));
  /* 113041b0 push 0x113323f8 */
  push32((uint32_t)(0x113323f8u));
  /* 113041b5 push 0x11332460 */
  push32((uint32_t)(0x11332460u));
  /* 113041ba call dword ptr [0x113354d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354d8))), 0x113041c0u);
  /* 113041c0 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113041c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113041c5 call 0x113052a0 */
  push32(0x113041cau); f_113052a0();
  /* 113041ca mov esi, esp */
  ESI = (ESP);
  /* 113041cc push 0x41 */
  push32((uint32_t)(0x41u));
  /* 113041ce push 0x11332638 */
  push32((uint32_t)(0x11332638u));
  /* 113041d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 113041d5 push 0x11332488 */
  push32((uint32_t)(0x11332488u));
  /* 113041da push 0x113323f8 */
  push32((uint32_t)(0x113323f8u));
  /* 113041df push 0x11332458 */
  push32((uint32_t)(0x11332458u));
  /* 113041e4 call dword ptr [0x113354d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354d8))), 0x113041eau);
  /* 113041ea add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113041ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113041ef call 0x113052a0 */
  push32(0x113041f4u); f_113052a0();
  /* 113041f4 jmp 0x1130424a */
  goto L_1130424a;
L_113041f6:;
  /* 113041f6 mov esi, esp */
  ESI = (ESP);
  /* 113041f8 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 113041fa push 0x11332638 */
  push32((uint32_t)(0x11332638u));
  /* 113041ff push 2 */
  push32((uint32_t)(0x2u));
  /* 11304201 push 0x113326c8 */
  push32((uint32_t)(0x113326c8u));
  /* 11304206 push 0x113323f8 */
  push32((uint32_t)(0x113323f8u));
  /* 1130420b push 0x11332460 */
  push32((uint32_t)(0x11332460u));
  /* 11304210 call dword ptr [0x113354d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354d8))), 0x11304216u);
  /* 11304216 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11304219 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130421b call 0x113052a0 */
  push32(0x11304220u); f_113052a0();
  /* 11304220 mov esi, esp */
  ESI = (ESP);
  /* 11304222 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11304224 push 0x11332638 */
  push32((uint32_t)(0x11332638u));
  /* 11304229 push 2 */
  push32((uint32_t)(0x2u));
  /* 1130422b push 0x11332488 */
  push32((uint32_t)(0x11332488u));
  /* 11304230 push 0x11332400 */
  push32((uint32_t)(0x11332400u));
  /* 11304235 push 0x11332458 */
  push32((uint32_t)(0x11332458u));
  /* 1130423a call dword ptr [0x113354d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354d8))), 0x11304240u);
  /* 11304240 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11304243 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11304245 call 0x113052a0 */
  push32(0x1130424au); f_113052a0();
L_1130424a:;
  /* 1130424a mov esi, esp */
  ESI = (ESP);
  /* 1130424c push 0 */
  push32((uint32_t)(0x0u));
  /* 1130424e push 0x11332460 */
  push32((uint32_t)(0x11332460u));
  /* 11304253 call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x11304259u);
  /* 11304259 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130425c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130425e call 0x113052a0 */
  push32(0x11304263u); f_113052a0();
  /* 11304263 mov esi, esp */
  ESI = (ESP);
  /* 11304265 push 0 */
  push32((uint32_t)(0x0u));
  /* 11304267 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11304269 push 0x11332628 */
  push32((uint32_t)(0x11332628u));
  /* 1130426e push 2 */
  push32((uint32_t)(0x2u));
  /* 11304270 call dword ptr [0x113354d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354d4))), 0x11304276u);
  /* 11304276 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11304279 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130427b call 0x113052a0 */
  push32(0x11304280u); f_113052a0();
  /* 11304280 mov esi, esp */
  ESI = (ESP);
  /* 11304282 push 2 */
  push32((uint32_t)(0x2u));
  /* 11304284 call dword ptr [0x1133549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133549c))), 0x1130428au);
  /* 1130428a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130428d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130428f call 0x113052a0 */
  push32(0x11304294u); f_113052a0();
L_11304294:;
  /* 11304294 mov esi, esp */
  ESI = (ESP);
  /* 11304296 push 6 */
  push32((uint32_t)(0x6u));
  /* 11304298 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x1130429eu);
  /* 1130429e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113042a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113042a3 call 0x113052a0 */
  push32(0x113042a8u); f_113052a0();
  /* 113042a8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113042ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113042af jne 0x11304314 */
  if (!C.zf) goto L_11304314;
  /* 113042b1 mov esi, esp */
  ESI = (ESP);
  /* 113042b3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 113042b5 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x113042bbu);
  /* 113042bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113042be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113042c0 call 0x113052a0 */
  push32(0x113042c5u); f_113052a0();
  /* 113042c5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113042ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113042cc je 0x11304314 */
  if (C.zf) goto L_11304314;
  /* 113042ce mov esi, esp */
  ESI = (ESP);
  /* 113042d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 113042d2 push 0x11332458 */
  push32((uint32_t)(0x11332458u));
  /* 113042d7 call dword ptr [0x11335478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335478))), 0x113042ddu);
  /* 113042dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113042e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113042e2 call 0x113052a0 */
  push32(0x113042e7u); f_113052a0();
  /* 113042e7 mov esi, esp */
  ESI = (ESP);
  /* 113042e9 push 0x11332490 */
  push32((uint32_t)(0x11332490u));
  /* 113042ee push 2 */
  push32((uint32_t)(0x2u));
  /* 113042f0 call dword ptr [0x113354f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354f4))), 0x113042f6u);
  /* 113042f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113042f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113042fb call 0x113052a0 */
  push32(0x11304300u); f_113052a0();
  /* 11304300 mov esi, esp */
  ESI = (ESP);
  /* 11304302 push 2 */
  push32((uint32_t)(0x2u));
  /* 11304304 call dword ptr [0x1133549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133549c))), 0x1130430au);
  /* 1130430a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130430d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130430f call 0x113052a0 */
  push32(0x11304314u); f_113052a0();
L_11304314:;
  /* 11304314 mov esi, esp */
  ESI = (ESP);
  /* 11304316 push 6 */
  push32((uint32_t)(0x6u));
  /* 11304318 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x1130431eu);
  /* 1130431e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11304321 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11304323 call 0x113052a0 */
  push32(0x11304328u); f_113052a0();
  /* 11304328 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130432d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130432f jne 0x113043be */
  if (!C.zf) goto L_113043be;
  /* 11304335 mov esi, esp */
  ESI = (ESP);
  /* 11304337 push 5 */
  push32((uint32_t)(0x5u));
  /* 11304339 call dword ptr [0x113354e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354e8))), 0x1130433fu);
  /* 1130433f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11304342 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11304344 call 0x113052a0 */
  push32(0x11304349u); f_113052a0();
  /* 11304349 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130434e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11304350 je 0x113043be */
  if (C.zf) goto L_113043be;
  /* 11304352 mov esi, esp */
  ESI = (ESP);
  /* 11304354 push 0x11332460 */
  push32((uint32_t)(0x11332460u));
  /* 11304359 call dword ptr [0x113354b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354b4))), 0x1130435fu);
  /* 1130435f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11304362 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11304364 call 0x113052a0 */
  push32(0x11304369u); f_113052a0();
  /* 11304369 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130436b jne 0x11304388 */
  if (!C.zf) goto L_11304388;
  /* 1130436d mov esi, esp */
  ESI = (ESP);
  /* 1130436f push 0x11332458 */
  push32((uint32_t)(0x11332458u));
  /* 11304374 call dword ptr [0x113354b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354b4))), 0x1130437au);
  /* 1130437a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130437d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130437f call 0x113052a0 */
  push32(0x11304384u); f_113052a0();
  /* 11304384 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11304386 je 0x113043a5 */
  if (C.zf) goto L_113043a5;
L_11304388:;
  /* 11304388 mov esi, esp */
  ESI = (ESP);
  /* 1130438a push 4 */
  push32((uint32_t)(0x4u));
  /* 1130438c call dword ptr [0x113354a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354a0))), 0x11304392u);
  /* 11304392 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11304395 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11304397 call 0x113052a0 */
  push32(0x1130439cu); f_113052a0();
  /* 1130439c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113043a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113043a3 je 0x113043be */
  if (C.zf) goto L_113043be;
L_113043a5:;
  /* 113043a5 mov esi, esp */
  ESI = (ESP);
  /* 113043a7 push 0x320 */
  push32((uint32_t)(0x320u));
  /* 113043ac push 5 */
  push32((uint32_t)(0x5u));
  /* 113043ae call dword ptr [0x11335484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335484))), 0x113043b4u);
  /* 113043b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113043b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113043b9 call 0x113052a0 */
  push32(0x113043beu); f_113052a0();
L_113043be:;
  /* 113043be mov esi, esp */
  ESI = (ESP);
  /* 113043c0 push 5 */
  push32((uint32_t)(0x5u));
  /* 113043c2 call dword ptr [0x113354e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354e0))), 0x113043c8u);
  /* 113043c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113043cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113043cd call 0x113052a0 */
  push32(0x113043d2u); f_113052a0();
  /* 113043d2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113043d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113043d9 je 0x11304419 */
  if (C.zf) goto L_11304419;
  /* 113043db mov esi, esp */
  ESI = (ESP);
  /* 113043dd push 5 */
  push32((uint32_t)(0x5u));
  /* 113043df call dword ptr [0x113354f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354f0))), 0x113043e5u);
  /* 113043e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113043e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113043ea call 0x113052a0 */
  push32(0x113043efu); f_113052a0();
  /* 113043ef mov esi, esp */
  ESI = (ESP);
  /* 113043f1 push 4 */
  push32((uint32_t)(0x4u));
  /* 113043f3 call dword ptr [0x113354f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354f0))), 0x113043f9u);
  /* 113043f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113043fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113043fe call 0x113052a0 */
  push32(0x11304403u); f_113052a0();
  /* 11304403 mov esi, esp */
  ESI = (ESP);
  /* 11304405 push 1 */
  push32((uint32_t)(0x1u));
  /* 11304407 push 7 */
  push32((uint32_t)(0x7u));
  /* 11304409 call dword ptr [0x11335460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335460))), 0x1130440fu);
  /* 1130440f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11304412 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11304414 call 0x113052a0 */
  push32(0x11304419u); f_113052a0();
L_11304419:;
  /* 11304419 mov esi, esp */
  ESI = (ESP);
  /* 1130441b push 0xb */
  push32((uint32_t)(0xbu));
  /* 1130441d call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x11304423u);
  /* 11304423 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11304426 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11304428 call 0x113052a0 */
  push32(0x1130442du); f_113052a0();
  /* 1130442d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11304432 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11304434 je 0x1130447e */
  if (C.zf) goto L_1130447e;
  /* 11304436 mov esi, esp */
  ESI = (ESP);
  /* 11304438 push 0x113323f0 */
  push32((uint32_t)(0x113323f0u));
  /* 1130443d call dword ptr [0x113354b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354b4))), 0x11304443u);
  /* 11304443 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11304446 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11304448 call 0x113052a0 */
  push32(0x1130444du); f_113052a0();
  /* 1130444d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130444f jne 0x1130447e */
  if (!C.zf) goto L_1130447e;
  /* 11304451 mov esi, esp */
  ESI = (ESP);
  /* 11304453 push 0 */
  push32((uint32_t)(0x0u));
  /* 11304455 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11304457 call dword ptr [0x11335460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335460))), 0x1130445du);
  /* 1130445d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11304460 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11304462 call 0x113052a0 */
  push32(0x11304467u); f_113052a0();
  /* 11304467 mov esi, esp */
  ESI = (ESP);
  /* 11304469 push 0x1132d3d0 */
  push32((uint32_t)(0x1132d3d0u));
  /* 1130446e call dword ptr [0x11335498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335498))), 0x11304474u);
  /* 11304474 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11304477 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11304479 call 0x113052a0 */
  push32(0x1130447eu); f_113052a0();
L_1130447e:;
  /* 1130447e mov esi, esp */
  ESI = (ESP);
  /* 11304480 push 8 */
  push32((uint32_t)(0x8u));
  /* 11304482 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x11304488u);
  /* 11304488 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130448b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130448d call 0x113052a0 */
  push32(0x11304492u); f_113052a0();
  /* 11304492 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11304497 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11304499 jne 0x1130452e */
  if (!C.zf) goto L_1130452e;
  /* 1130449f mov esi, esp */
  ESI = (ESP);
  /* 113044a1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 113044a3 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x113044a9u);
  /* 113044a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113044ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113044ae call 0x113052a0 */
  push32(0x113044b3u); f_113052a0();
  /* 113044b3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113044b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113044ba jne 0x1130452e */
  if (!C.zf) goto L_1130452e;
  /* 113044bc mov esi, esp */
  ESI = (ESP);
  /* 113044be push 0xc */
  push32((uint32_t)(0xcu));
  /* 113044c0 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x113044c6u);
  /* 113044c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113044c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113044cb call 0x113052a0 */
  push32(0x113044d0u); f_113052a0();
  /* 113044d0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113044d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113044d7 je 0x1130452e */
  if (C.zf) goto L_1130452e;
  /* 113044d9 mov esi, esp */
  ESI = (ESP);
  /* 113044db push 0 */
  push32((uint32_t)(0x0u));
  /* 113044dd push 0xc */
  push32((uint32_t)(0xcu));
  /* 113044df call dword ptr [0x11335460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335460))), 0x113044e5u);
  /* 113044e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113044e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113044ea call 0x113052a0 */
  push32(0x113044efu); f_113052a0();
  /* 113044ef mov esi, esp */
  ESI = (ESP);
  /* 113044f1 push 0x1132d3c8 */
  push32((uint32_t)(0x1132d3c8u));
  /* 113044f6 call dword ptr [0x11335498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335498))), 0x113044fcu);
  /* 113044fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113044ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11304501 call 0x113052a0 */
  push32(0x11304506u); f_113052a0();
  /* 11304506 mov esi, esp */
  ESI = (ESP);
  /* 11304508 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1130450a call dword ptr [0x1133545c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133545c))), 0x11304510u);
  /* 11304510 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11304513 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11304515 call 0x113052a0 */
  push32(0x1130451au); f_113052a0();
  /* 1130451a mov esi, esp */
  ESI = (ESP);
  /* 1130451c push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1130451e call dword ptr [0x11335464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335464))), 0x11304524u);
  /* 11304524 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11304527 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11304529 call 0x113052a0 */
  push32(0x1130452eu); f_113052a0();
L_1130452e:;
  /* 1130452e mov esi, esp */
  ESI = (ESP);
  /* 11304530 push 9 */
  push32((uint32_t)(0x9u));
  /* 11304532 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x11304538u);
  /* 11304538 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130453b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130453d call 0x113052a0 */
  push32(0x11304542u); f_113052a0();
  /* 11304542 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11304547 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11304549 je 0x113045a2 */
  if (C.zf) goto L_113045a2;
  /* 1130454b mov esi, esp */
  ESI = (ESP);
  /* 1130454d push 0x11332490 */
  push32((uint32_t)(0x11332490u));
  /* 11304552 call dword ptr [0x113354b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354b4))), 0x11304558u);
  /* 11304558 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130455b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130455d call 0x113052a0 */
  push32(0x11304562u); f_113052a0();
  /* 11304562 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11304564 jne 0x113045a2 */
  if (!C.zf) goto L_113045a2;
  /* 11304566 mov esi, esp */
  ESI = (ESP);
  /* 11304568 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130456a push 9 */
  push32((uint32_t)(0x9u));
  /* 1130456c call dword ptr [0x11335460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335460))), 0x11304572u);
  /* 11304572 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11304575 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11304577 call 0x113052a0 */
  push32(0x1130457cu); f_113052a0();
  /* 1130457c mov esi, esp */
  ESI = (ESP);
  /* 1130457e push 0x1132d3bc */
  push32((uint32_t)(0x1132d3bcu));
  /* 11304583 call dword ptr [0x11335498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335498))), 0x11304589u);
  /* 11304589 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130458c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130458e call 0x113052a0 */
  push32(0x11304593u); f_113052a0();
  /* 11304593 mov esi, esp */
  ESI = (ESP);
  /* 11304595 call dword ptr [0x113354bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354bc))), 0x1130459bu);
  /* 1130459b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130459d call 0x113052a0 */
  push32(0x113045a2u); f_113052a0();
L_113045a2:;
  /* 113045a2 mov esi, esp */
  ESI = (ESP);
  /* 113045a4 push 0xd */
  push32((uint32_t)(0xdu));
  /* 113045a6 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x113045acu);
  /* 113045ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113045af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113045b1 call 0x113052a0 */
  push32(0x113045b6u); f_113052a0();
  /* 113045b6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113045bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113045bd je 0x11304609 */
  if (C.zf) goto L_11304609;
  /* 113045bf mov esi, esp */
  ESI = (ESP);
  /* 113045c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 113045c3 call dword ptr [0x113354ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354ec))), 0x113045c9u);
  /* 113045c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113045cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113045ce call 0x113052a0 */
  push32(0x113045d3u); f_113052a0();
  /* 113045d3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113045d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113045da je 0x11304609 */
  if (C.zf) goto L_11304609;
  /* 113045dc mov esi, esp */
  ESI = (ESP);
  /* 113045de push 0 */
  push32((uint32_t)(0x0u));
  /* 113045e0 push 0xd */
  push32((uint32_t)(0xdu));
  /* 113045e2 call dword ptr [0x11335460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335460))), 0x113045e8u);
  /* 113045e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113045eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113045ed call 0x113052a0 */
  push32(0x113045f2u); f_113052a0();
  /* 113045f2 mov esi, esp */
  ESI = (ESP);
  /* 113045f4 push 0x1132d3b0 */
  push32((uint32_t)(0x1132d3b0u));
  /* 113045f9 call dword ptr [0x11335498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335498))), 0x113045ffu);
  /* 113045ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11304602 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11304604 call 0x113052a0 */
  push32(0x11304609u); f_113052a0();
L_11304609:;
  /* 11304609 mov esi, esp */
  ESI = (ESP);
  /* 1130460b push 0xe */
  push32((uint32_t)(0xeu));
  /* 1130460d call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x11304613u);
  /* 11304613 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11304616 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11304618 call 0x113052a0 */
  push32(0x1130461du); f_113052a0();
  /* 1130461d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11304622 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11304624 je 0x11304670 */
  if (C.zf) goto L_11304670;
  /* 11304626 mov esi, esp */
  ESI = (ESP);
  /* 11304628 push 3 */
  push32((uint32_t)(0x3u));
  /* 1130462a call dword ptr [0x113354ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x113354ec))), 0x11304630u);
  /* 11304630 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11304633 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11304635 call 0x113052a0 */
  push32(0x1130463au); f_113052a0();
  /* 1130463a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130463f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11304641 je 0x11304670 */
  if (C.zf) goto L_11304670;
  /* 11304643 mov esi, esp */
  ESI = (ESP);
  /* 11304645 push 0 */
  push32((uint32_t)(0x0u));
  /* 11304647 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11304649 call dword ptr [0x11335460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335460))), 0x1130464fu);
  /* 1130464f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11304652 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11304654 call 0x113052a0 */
  push32(0x11304659u); f_113052a0();
  /* 11304659 mov esi, esp */
  ESI = (ESP);
  /* 1130465b push 0x1132d3a4 */
  push32((uint32_t)(0x1132d3a4u));
  /* 11304660 call dword ptr [0x11335498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335498))), 0x11304666u);
  /* 11304666 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11304669 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130466b call 0x113052a0 */
  push32(0x11304670u); f_113052a0();
L_11304670:;
  /* 11304670 mov esi, esp */
  ESI = (ESP);
  /* 11304672 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11304674 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x1130467au);
  /* 1130467a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130467d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130467f call 0x113052a0 */
  push32(0x11304684u); f_113052a0();
  /* 11304684 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11304689 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130468b jne 0x11304720 */
  if (!C.zf) goto L_11304720;
  /* 11304691 mov esi, esp */
  ESI = (ESP);
  /* 11304693 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11304695 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x1130469bu);
  /* 1130469b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130469e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113046a0 call 0x113052a0 */
  push32(0x113046a5u); f_113052a0();
  /* 113046a5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113046aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113046ac jne 0x11304720 */
  if (!C.zf) goto L_11304720;
  /* 113046ae mov esi, esp */
  ESI = (ESP);
  /* 113046b0 push 0xf */
  push32((uint32_t)(0xfu));
  /* 113046b2 call dword ptr [0x11335458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335458))), 0x113046b8u);
  /* 113046b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113046bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113046bd call 0x113052a0 */
  push32(0x113046c2u); f_113052a0();
  /* 113046c2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113046c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113046c9 je 0x11304720 */
  if (C.zf) goto L_11304720;
  /* 113046cb mov esi, esp */
  ESI = (ESP);
  /* 113046cd push 0 */
  push32((uint32_t)(0x0u));
  /* 113046cf push 0xf */
  push32((uint32_t)(0xfu));
  /* 113046d1 call dword ptr [0x11335460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335460))), 0x113046d7u);
  /* 113046d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113046da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113046dc call 0x113052a0 */
  push32(0x113046e1u); f_113052a0();
  /* 113046e1 mov esi, esp */
  ESI = (ESP);
  /* 113046e3 push 0x1132d39c */
  push32((uint32_t)(0x1132d39cu));
  /* 113046e8 call dword ptr [0x11335498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335498))), 0x113046eeu);
  /* 113046ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113046f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113046f3 call 0x113052a0 */
  push32(0x113046f8u); f_113052a0();
  /* 113046f8 mov esi, esp */
  ESI = (ESP);
  /* 113046fa push 0x42 */
  push32((uint32_t)(0x42u));
  /* 113046fc call dword ptr [0x1133545c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133545c))), 0x11304702u);
  /* 11304702 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11304705 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11304707 call 0x113052a0 */
  push32(0x1130470cu); f_113052a0();
  /* 1130470c mov esi, esp */
  ESI = (ESP);
  /* 1130470e push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11304710 call dword ptr [0x11335464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335464))), 0x11304716u);
  /* 11304716 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11304719 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130471b call 0x113052a0 */
  push32(0x11304720u); f_113052a0();
L_11304720:;
  /* 11304720 pop edi */
  EDI = (pop32());
  /* 11304721 pop esi */
  ESI = (pop32());
  /* 11304722 pop ebx */
  EBX = (pop32());
  /* 11304723 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11304726 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11304728 call 0x113052a0 */
  push32(0x1130472du); f_113052a0();
  /* 1130472d mov esp, ebp */
  ESP = (EBP);
  /* 1130472f pop ebp */
  EBP = (pop32());
  /* 11304730 ret  */
  ESPCHK(0x11301f10u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x113052a0 (56 bytes, 28 insns) */
void f_113052a0(void) {
  FTRACE(0x113052a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113052a0 jne 0x113052a3 */
  if (!C.zf) goto L_113052a3;
  /* 113052a2 ret  */
  ESPCHK(0x113052a0u, _esp0);
  ESP += 4; return;
L_113052a3:;
  /* 113052a3 push ebp */
  push32((uint32_t)(EBP));
  /* 113052a4 mov ebp, esp */
  EBP = (ESP);
  /* 113052a6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113052a9 push eax */
  push32((uint32_t)(EAX));
  /* 113052aa push edx */
  push32((uint32_t)(EDX));
  /* 113052ab push ebx */
  push32((uint32_t)(EBX));
  /* 113052ac push esi */
  push32((uint32_t)(ESI));
  /* 113052ad push edi */
  push32((uint32_t)(EDI));
  /* 113052ae push 0x1132d520 */
  push32((uint32_t)(0x1132d520u));
  /* 113052b3 push 0x1132d51c */
  push32((uint32_t)(0x1132d51cu));
  /* 113052b8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 113052ba push 0x1132d50c */
  push32((uint32_t)(0x1132d50cu));
  /* 113052bf push 1 */
  push32((uint32_t)(0x1u));
  /* 113052c1 call 0x11305670 */
  push32(0x113052c6u); f_11305670();
  /* 113052c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113052c9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113052cc jne 0x113052cf */
  if (!C.zf) goto L_113052cf;
  /* 113052ce int3  */
  x86_unimpl("int3 @ 0x113052ce");
L_113052cf:;
  /* 113052cf pop edi */
  EDI = (pop32());
  /* 113052d0 pop esi */
  ESI = (pop32());
  /* 113052d1 pop ebx */
  EBX = (pop32());
  /* 113052d2 pop edx */
  EDX = (pop32());
  /* 113052d3 pop eax */
  EAX = (pop32());
  /* 113052d4 mov esp, ebp */
  ESP = (EBP);
  /* 113052d6 pop ebp */
  EBP = (pop32());
  /* 113052d7 ret  */
  ESPCHK(0x113052a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100052e0 @ 0x113052e0 (313 bytes, 78 insns) */
void f_113052e0(void) {
  FTRACE(0x113052e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113052e0 push ebp */
  push32((uint32_t)(EBP));
  /* 113052e1 mov ebp, esp */
  EBP = (ESP);
  /* 113052e3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113052e7 jne 0x113053a7 */
  if (!C.zf) goto L_113053a7;
  /* 113052ed call dword ptr [0x1133539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133539c))), 0x113052f3u);
  /* 113052f3 mov dword ptr [0x11332788], eax */
  w32((uint32_t)(0x11332788), (EAX));
  /* 113052f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 113052fa call 0x11308da0 */
  push32(0x113052ffu); f_11308da0();
  /* 113052ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11305302 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11305304 jne 0x1130530d */
  if (!C.zf) goto L_1130530d;
  /* 11305306 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11305308 jmp 0x11305415 */
  goto L_11305415;
L_1130530d:;
  /* 1130530d mov eax, dword ptr [0x11332788] */
  EAX = (r32((uint32_t)(0x11332788)));
  /* 11305312 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11305315 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130531a mov dword ptr [0x11332794], eax */
  w32((uint32_t)(0x11332794), (EAX));
  /* 1130531f mov ecx, dword ptr [0x11332788] */
  ECX = (r32((uint32_t)(0x11332788)));
  /* 11305325 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1130532b mov dword ptr [0x11332790], ecx */
  w32((uint32_t)(0x11332790), (ECX));
  /* 11305331 mov edx, dword ptr [0x11332790] */
  EDX = (r32((uint32_t)(0x11332790)));
  /* 11305337 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 1130533a add edx, dword ptr [0x11332794] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11332794))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11305340 mov dword ptr [0x1133278c], edx */
  w32((uint32_t)(0x1133278c), (EDX));
  /* 11305346 mov eax, dword ptr [0x11332788] */
  EAX = (r32((uint32_t)(0x11332788)));
  /* 1130534b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1130534e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11305353 mov dword ptr [0x11332788], eax */
  w32((uint32_t)(0x11332788), (EAX));
  /* 11305358 call 0x11305f10 */
  push32(0x1130535du); f_11305f10();
  /* 1130535d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130535f jne 0x1130536d */
  if (!C.zf) goto L_1130536d;
  /* 11305361 call 0x11308df0 */
  push32(0x11305366u); f_11308df0();
  /* 11305366 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11305368 jmp 0x11305415 */
  goto L_11305415;
L_1130536d:;
  /* 1130536d call dword ptr [0x11335398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335398))), 0x11305373u);
  /* 11305373 mov dword ptr [0x113342cc], eax */
  w32((uint32_t)(0x113342cc), (EAX));
  /* 11305378 call 0x11308b80 */
  push32(0x1130537du); f_11308b80();
  /* 1130537d mov dword ptr [0x11332770], eax */
  w32((uint32_t)(0x11332770), (EAX));
  /* 11305382 call 0x113061c0 */
  push32(0x11305387u); f_113061c0();
  /* 11305387 call 0x11308670 */
  push32(0x1130538cu); f_11308670();
  /* 1130538c call 0x11308520 */
  push32(0x11305391u); f_11308520();
  /* 11305391 call 0x11305d10 */
  push32(0x11305396u); f_11305d10();
  /* 11305396 mov ecx, dword ptr [0x1133276c] */
  ECX = (r32((uint32_t)(0x1133276c)));
  /* 1130539c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130539f mov dword ptr [0x1133276c], ecx */
  w32((uint32_t)(0x1133276c), (ECX));
  /* 113053a5 jmp 0x11305410 */
  goto L_11305410;
L_113053a7:;
  /* 113053a7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113053ab jne 0x11305400 */
  if (!C.zf) goto L_11305400;
  /* 113053ad cmp dword ptr [0x1133276c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1133276c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113053b4 jle 0x113053fa */
  if ((C.zf||C.sf!=C.of)) goto L_113053fa;
  /* 113053b6 mov edx, dword ptr [0x1133276c] */
  EDX = (r32((uint32_t)(0x1133276c)));
  /* 113053bc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113053bf mov dword ptr [0x1133276c], edx */
  w32((uint32_t)(0x1133276c), (EDX));
  /* 113053c5 cmp dword ptr [0x113327c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113327c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113053cc jne 0x113053d3 */
  if (!C.zf) goto L_113053d3;
  /* 113053ce call 0x11305d90 */
  push32(0x113053d3u); f_11305d90();
L_113053d3:;
  /* 113053d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 113053d5 call 0x11307ac0 */
  push32(0x113053dau); f_11307ac0();
  /* 113053da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113053dd and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 113053e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113053e2 je 0x113053e9 */
  if (C.zf) goto L_113053e9;
  /* 113053e4 call 0x113083d0 */
  push32(0x113053e9u); f_113083d0();
L_113053e9:;
  /* 113053e9 call 0x113064f0 */
  push32(0x113053eeu); f_113064f0();
  /* 113053ee call 0x11305fa0 */
  push32(0x113053f3u); f_11305fa0();
  /* 113053f3 call 0x11308df0 */
  push32(0x113053f8u); f_11308df0();
  /* 113053f8 jmp 0x113053fe */
  goto L_113053fe;
L_113053fa:;
  /* 113053fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113053fc jmp 0x11305415 */
  goto L_11305415;
L_113053fe:;
  /* 113053fe jmp 0x11305410 */
  goto L_11305410;
L_11305400:;
  /* 11305400 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305404 jne 0x11305410 */
  if (!C.zf) goto L_11305410;
  /* 11305406 push 0 */
  push32((uint32_t)(0x0u));
  /* 11305408 call 0x11306090 */
  push32(0x1130540du); f_11306090();
  /* 1130540d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11305410:;
  /* 11305410 mov eax, 1 */
  EAX = (0x1u);
L_11305415:;
  /* 11305415 pop ebp */
  EBP = (pop32());
  /* 11305416 ret 0xc */
  ESPCHK(0x113052e0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11305420 (243 bytes, 86 insns) */
void f_11305420(void) {
  FTRACE(0x11305420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11305420 push ebp */
  push32((uint32_t)(EBP));
  /* 11305421 mov ebp, esp */
  EBP = (ESP);
  /* 11305423 push ecx */
  push32((uint32_t)(ECX));
  /* 11305424 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1130542b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130542f jne 0x11305441 */
  if (!C.zf) goto L_11305441;
  /* 11305431 cmp dword ptr [0x1133276c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1133276c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305438 jne 0x11305441 */
  if (!C.zf) goto L_11305441;
  /* 1130543a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130543c jmp 0x1130550d */
  goto L_1130550d;
L_11305441:;
  /* 11305441 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305445 je 0x1130544d */
  if (C.zf) goto L_1130544d;
  /* 11305447 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130544b jne 0x1130548f */
  if (!C.zf) goto L_1130548f;
L_1130544d:;
  /* 1130544d cmp dword ptr [0x113342dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113342dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305454 je 0x1130546b */
  if (C.zf) goto L_1130546b;
  /* 11305456 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11305459 push eax */
  push32((uint32_t)(EAX));
  /* 1130545a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130545d push ecx */
  push32((uint32_t)(ECX));
  /* 1130545e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11305461 push edx */
  push32((uint32_t)(EDX));
  /* 11305462 call dword ptr [0x113342dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113342dc))), 0x11305468u);
  /* 11305468 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1130546b:;
  /* 1130546b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130546f je 0x11305485 */
  if (C.zf) goto L_11305485;
  /* 11305471 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11305474 push eax */
  push32((uint32_t)(EAX));
  /* 11305475 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11305478 push ecx */
  push32((uint32_t)(ECX));
  /* 11305479 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130547c push edx */
  push32((uint32_t)(EDX));
  /* 1130547d call 0x113052e0 */
  push32(0x11305482u); f_113052e0();
  /* 11305482 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11305485:;
  /* 11305485 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305489 jne 0x1130548f */
  if (!C.zf) goto L_1130548f;
  /* 1130548b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130548d jmp 0x1130550d */
  goto L_1130550d;
L_1130548f:;
  /* 1130548f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11305492 push eax */
  push32((uint32_t)(EAX));
  /* 11305493 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11305496 push ecx */
  push32((uint32_t)(ECX));
  /* 11305497 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130549a push edx */
  push32((uint32_t)(EDX));
  /* 1130549b call 0x1130100a */
  push32(0x113054a0u); f_1130100a();
  /* 113054a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113054a3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113054a7 jne 0x113054be */
  if (!C.zf) goto L_113054be;
  /* 113054a9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113054ad jne 0x113054be */
  if (!C.zf) goto L_113054be;
  /* 113054af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113054b2 push eax */
  push32((uint32_t)(EAX));
  /* 113054b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113054b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113054b8 push ecx */
  push32((uint32_t)(ECX));
  /* 113054b9 call 0x113052e0 */
  push32(0x113054beu); f_113052e0();
L_113054be:;
  /* 113054be cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113054c2 je 0x113054ca */
  if (C.zf) goto L_113054ca;
  /* 113054c4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113054c8 jne 0x1130550a */
  if (!C.zf) goto L_1130550a;
L_113054ca:;
  /* 113054ca mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113054cd push edx */
  push32((uint32_t)(EDX));
  /* 113054ce mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113054d1 push eax */
  push32((uint32_t)(EAX));
  /* 113054d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113054d5 push ecx */
  push32((uint32_t)(ECX));
  /* 113054d6 call 0x113052e0 */
  push32(0x113054dbu); f_113052e0();
  /* 113054db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113054dd jne 0x113054e6 */
  if (!C.zf) goto L_113054e6;
  /* 113054df mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_113054e6:;
  /* 113054e6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113054ea je 0x1130550a */
  if (C.zf) goto L_1130550a;
  /* 113054ec cmp dword ptr [0x113342dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113342dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113054f3 je 0x1130550a */
  if (C.zf) goto L_1130550a;
  /* 113054f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113054f8 push edx */
  push32((uint32_t)(EDX));
  /* 113054f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113054fc push eax */
  push32((uint32_t)(EAX));
  /* 113054fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11305500 push ecx */
  push32((uint32_t)(ECX));
  /* 11305501 call dword ptr [0x113342dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113342dc))), 0x11305507u);
  /* 11305507 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1130550a:;
  /* 1130550a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1130550d:;
  /* 1130550d mov esp, ebp */
  ESP = (EBP);
  /* 1130550f pop ebp */
  EBP = (pop32());
  /* 11305510 ret 0xc */
  ESPCHK(0x11305420u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11305520 (58 bytes, 18 insns) */
void f_11305520(void) {
  FTRACE(0x11305520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11305520 push ebp */
  push32((uint32_t)(EBP));
  /* 11305521 mov ebp, esp */
  EBP = (ESP);
  /* 11305523 cmp dword ptr [0x11332778], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11332778))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130552a je 0x1130553e */
  if (C.zf) goto L_1130553e;
  /* 1130552c cmp dword ptr [0x11332778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305533 jne 0x11305543 */
  if (!C.zf) goto L_11305543;
  /* 11305535 cmp dword ptr [0x1133277c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1133277c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130553c jne 0x11305543 */
  if (!C.zf) goto L_11305543;
L_1130553e:;
  /* 1130553e call 0x11308e90 */
  push32(0x11305543u); f_11308e90();
L_11305543:;
  /* 11305543 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11305546 push eax */
  push32((uint32_t)(EAX));
  /* 11305547 call 0x11308ee0 */
  push32(0x1130554cu); f_11308ee0();
  /* 1130554c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130554f push 0xff */
  push32((uint32_t)(0xffu));
  /* 11305554 call dword ptr [0x11330a30] */
  call_ind((uint32_t)(r32((uint32_t)(0x11330a30))), 0x1130555au);
  /* 1130555a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130555d pop ebp */
  EBP = (pop32());
  /* 1130555e ret  */
  ESPCHK(0x11305520u, _esp0);
  ESP += 4; return;
}

/* FUN_10005560 @ 0x11305560 (11 bytes, 5 insns) */
void f_11305560(void) {
  FTRACE(0x11305560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11305560 push ebp */
  push32((uint32_t)(EBP));
  /* 11305561 mov ebp, esp */
  EBP = (ESP);
  /* 11305563 call dword ptr [0x113353a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353a0))), 0x11305569u);
  /* 11305569 pop ebp */
  EBP = (pop32());
  /* 1130556a ret  */
  ESPCHK(0x11305560u, _esp0);
  ESP += 4; return;
}

/* FUN_10005570 @ 0x11305570 (87 bytes, 30 insns) */
void f_11305570(void) {
  FTRACE(0x11305570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11305570 push ebp */
  push32((uint32_t)(EBP));
  /* 11305571 mov ebp, esp */
  EBP = (ESP);
  /* 11305573 push ecx */
  push32((uint32_t)(ECX));
  /* 11305574 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305578 jl 0x11305580 */
  if ((C.sf!=C.of)) goto L_11305580;
  /* 1130557a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130557e jl 0x11305585 */
  if ((C.sf!=C.of)) goto L_11305585;
L_11305580:;
  /* 11305580 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11305583 jmp 0x113055c3 */
  goto L_113055c3;
L_11305585:;
  /* 11305585 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305589 jne 0x11305597 */
  if (!C.zf) goto L_11305597;
  /* 1130558b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130558e mov eax, dword ptr [eax*4 + 0x11330a38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11330a38)));
  /* 11305595 jmp 0x113055c3 */
  goto L_113055c3;
L_11305597:;
  /* 11305597 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130559a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 1130559d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130559f je 0x113055a6 */
  if (C.zf) goto L_113055a6;
  /* 113055a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113055a4 jmp 0x113055c3 */
  goto L_113055c3;
L_113055a6:;
  /* 113055a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113055a9 mov eax, dword ptr [edx*4 + 0x11330a38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11330a38)));
  /* 113055b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113055b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113055b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113055b9 mov dword ptr [ecx*4 + 0x11330a38], edx */
  w32((uint32_t)(ECX*4 + 0x11330a38), (EDX));
  /* 113055c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_113055c3:;
  /* 113055c3 mov esp, ebp */
  ESP = (EBP);
  /* 113055c5 pop ebp */
  EBP = (pop32());
  /* 113055c6 ret  */
  ESPCHK(0x11305570u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x113055d0 (126 bytes, 38 insns) */
void f_113055d0(void) {
  FTRACE(0x113055d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113055d0 push ebp */
  push32((uint32_t)(EBP));
  /* 113055d1 mov ebp, esp */
  EBP = (ESP);
  /* 113055d3 push ecx */
  push32((uint32_t)(ECX));
  /* 113055d4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113055d8 jl 0x113055e0 */
  if ((C.sf!=C.of)) goto L_113055e0;
  /* 113055da cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113055de jl 0x113055e7 */
  if ((C.sf!=C.of)) goto L_113055e7;
L_113055e0:;
  /* 113055e0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 113055e5 jmp 0x1130564a */
  goto L_1130564a;
L_113055e7:;
  /* 113055e7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113055eb jne 0x113055f9 */
  if (!C.zf) goto L_113055f9;
  /* 113055ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113055f0 mov eax, dword ptr [eax*4 + 0x11330a44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11330a44)));
  /* 113055f7 jmp 0x1130564a */
  goto L_1130564a;
L_113055f9:;
  /* 113055f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113055fc mov edx, dword ptr [ecx*4 + 0x11330a44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11330a44)));
  /* 11305603 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11305606 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130560a jne 0x11305620 */
  if (!C.zf) goto L_11305620;
  /* 1130560c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1130560e call dword ptr [0x113353a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353a4))), 0x11305614u);
  /* 11305614 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11305617 mov dword ptr [ecx*4 + 0x11330a44], eax */
  w32((uint32_t)(ECX*4 + 0x11330a44), (EAX));
  /* 1130561e jmp 0x11305647 */
  goto L_11305647;
L_11305620:;
  /* 11305620 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305624 jne 0x1130563a */
  if (!C.zf) goto L_1130563a;
  /* 11305626 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11305628 call dword ptr [0x113353a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353a4))), 0x1130562eu);
  /* 1130562e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11305631 mov dword ptr [edx*4 + 0x11330a44], eax */
  w32((uint32_t)(EDX*4 + 0x11330a44), (EAX));
  /* 11305638 jmp 0x11305647 */
  goto L_11305647;
L_1130563a:;
  /* 1130563a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130563d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11305640 mov dword ptr [eax*4 + 0x11330a44], ecx */
  w32((uint32_t)(EAX*4 + 0x11330a44), (ECX));
L_11305647:;
  /* 11305647 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1130564a:;
  /* 1130564a mov esp, ebp */
  ESP = (EBP);
  /* 1130564c pop ebp */
  EBP = (pop32());
  /* 1130564d ret  */
  ESPCHK(0x113055d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005650 @ 0x11305650 (28 bytes, 11 insns) */
void f_11305650(void) {
  FTRACE(0x11305650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11305650 push ebp */
  push32((uint32_t)(EBP));
  /* 11305651 mov ebp, esp */
  EBP = (ESP);
  /* 11305653 push ecx */
  push32((uint32_t)(ECX));
  /* 11305654 mov eax, dword ptr [0x113342c0] */
  EAX = (r32((uint32_t)(0x113342c0)));
  /* 11305659 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1130565c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130565f mov dword ptr [0x113342c0], ecx */
  w32((uint32_t)(0x113342c0), (ECX));
  /* 11305665 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11305668 mov esp, ebp */
  ESP = (EBP);
  /* 1130566a pop ebp */
  EBP = (pop32());
  /* 1130566b ret  */
  ESPCHK(0x11305650u, _esp0);
  ESP += 4; return;
}

/* FUN_10005670 @ 0x11305670 (912 bytes, 248 insns) */
void f_11305670(void) {
  FTRACE(0x11305670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11305670 push ebp */
  push32((uint32_t)(EBP));
  /* 11305671 mov ebp, esp */
  EBP = (ESP);
  /* 11305673 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 11305678 call 0x11309750 */
  push32(0x1130567du); f_11309750();
  /* 1130567d push edi */
  push32((uint32_t)(EDI));
  /* 1130567e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 11305685 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1130568a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130568c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 11305692 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11305694 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11305696 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11305697 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 1130569e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 113056a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113056a5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 113056ab rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 113056ad stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 113056af stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 113056b0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 113056b7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 113056bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113056be lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 113056c4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 113056c6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 113056c8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 113056c9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 113056cc mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 113056d2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113056d6 jl 0x113056de */
  if ((C.sf!=C.of)) goto L_113056de;
  /* 113056d8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113056dc jl 0x113056e6 */
  if ((C.sf!=C.of)) goto L_113056e6;
L_113056de:;
  /* 113056de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113056e1 jmp 0x113059fb */
  goto L_113059fb;
L_113056e6:;
  /* 113056e6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113056ea jne 0x11305790 */
  if (!C.zf) goto L_11305790;
  /* 113056f0 push 0x11330a34 */
  push32((uint32_t)(0x11330a34u));
  /* 113056f5 call dword ptr [0x113353bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353bc))), 0x113056fbu);
  /* 113056fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113056fd jle 0x11305790 */
  if ((C.zf||C.sf!=C.of)) goto L_11305790;
  /* 11305703 cmp dword ptr [0x11332780], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332780))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130570a jne 0x1130574e */
  if (!C.zf) goto L_1130574e;
  /* 1130570c push 0x1132d6c8 */
  push32((uint32_t)(0x1132d6c8u));
  /* 11305711 call dword ptr [0x113353b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353b8))), 0x11305717u);
  /* 11305717 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 1130571d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305724 je 0x11305746 */
  if (C.zf) goto L_11305746;
  /* 11305726 push 0x1132d6bc */
  push32((uint32_t)(0x1132d6bcu));
  /* 1130572b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 11305731 push ecx */
  push32((uint32_t)(ECX));
  /* 11305732 call dword ptr [0x113353b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353b4))), 0x11305738u);
  /* 11305738 mov dword ptr [0x11332780], eax */
  w32((uint32_t)(0x11332780), (EAX));
  /* 1130573d cmp dword ptr [0x11332780], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332780))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305744 jne 0x1130574e */
  if (!C.zf) goto L_1130574e;
L_11305746:;
  /* 11305746 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11305749 jmp 0x113059fb */
  goto L_113059fb;
L_1130574e:;
  /* 1130574e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11305751 push edx */
  push32((uint32_t)(EDX));
  /* 11305752 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11305755 push eax */
  push32((uint32_t)(EAX));
  /* 11305756 push 0x1132d688 */
  push32((uint32_t)(0x1132d688u));
  /* 1130575b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11305761 push ecx */
  push32((uint32_t)(ECX));
  /* 11305762 call dword ptr [0x11332780] */
  call_ind((uint32_t)(r32((uint32_t)(0x11332780))), 0x11305768u);
  /* 11305768 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130576b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11305771 push edx */
  push32((uint32_t)(EDX));
  /* 11305772 call dword ptr [0x113353b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353b0))), 0x11305778u);
  /* 11305778 push 0x11330a34 */
  push32((uint32_t)(0x11330a34u));
  /* 1130577d call dword ptr [0x113353ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353ac))), 0x11305783u);
  /* 11305783 call 0x11305560 */
  push32(0x11305788u); f_11305560();
  /* 11305788 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130578b jmp 0x113059fb */
  goto L_113059fb;
L_11305790:;
  /* 11305790 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305794 je 0x113057cd */
  if (C.zf) goto L_113057cd;
  /* 11305796 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 1130579c push eax */
  push32((uint32_t)(EAX));
  /* 1130579d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113057a0 push ecx */
  push32((uint32_t)(ECX));
  /* 113057a1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 113057a6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 113057ac push edx */
  push32((uint32_t)(EDX));
  /* 113057ad call 0x11309650 */
  push32(0x113057b2u); f_11309650();
  /* 113057b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113057b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113057b7 jge 0x113057cd */
  if ((C.sf==C.of)) goto L_113057cd;
  /* 113057b9 push 0x1132d65c */
  push32((uint32_t)(0x1132d65cu));
  /* 113057be lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 113057c4 push eax */
  push32((uint32_t)(EAX));
  /* 113057c5 call 0x11309560 */
  push32(0x113057cau); f_11309560();
  /* 113057ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113057cd:;
  /* 113057cd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113057d1 jne 0x11305805 */
  if (!C.zf) goto L_11305805;
  /* 113057d3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113057d7 je 0x113057e5 */
  if (C.zf) goto L_113057e5;
  /* 113057d9 mov dword ptr [ebp - 0x3028], 0x1132d648 */
  w32((uint32_t)(EBP + -0x3028), (0x1132d648u));
  /* 113057e3 jmp 0x113057ef */
  goto L_113057ef;
L_113057e5:;
  /* 113057e5 mov dword ptr [ebp - 0x3028], 0x1132d634 */
  w32((uint32_t)(EBP + -0x3028), (0x1132d634u));
L_113057ef:;
  /* 113057ef mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 113057f5 push ecx */
  push32((uint32_t)(ECX));
  /* 113057f6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 113057fc push edx */
  push32((uint32_t)(EDX));
  /* 113057fd call 0x11309560 */
  push32(0x11305802u); f_11309560();
  /* 11305802 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11305805:;
  /* 11305805 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 1130580b push eax */
  push32((uint32_t)(EAX));
  /* 1130580c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 11305812 push ecx */
  push32((uint32_t)(ECX));
  /* 11305813 call 0x11309570 */
  push32(0x11305818u); f_11309570();
  /* 11305818 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130581b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130581f jne 0x1130585a */
  if (!C.zf) goto L_1130585a;
  /* 11305821 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11305824 mov eax, dword ptr [edx*4 + 0x11330a38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11330a38)));
  /* 1130582b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1130582e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11305830 je 0x11305846 */
  if (C.zf) goto L_11305846;
  /* 11305832 push 0x1132d630 */
  push32((uint32_t)(0x1132d630u));
  /* 11305837 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 1130583d push ecx */
  push32((uint32_t)(ECX));
  /* 1130583e call 0x11309570 */
  push32(0x11305843u); f_11309570();
  /* 11305843 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11305846:;
  /* 11305846 push 0x1132d62c */
  push32((uint32_t)(0x1132d62cu));
  /* 1130584b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11305851 push edx */
  push32((uint32_t)(EDX));
  /* 11305852 call 0x11309570 */
  push32(0x11305857u); f_11309570();
  /* 11305857 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1130585a:;
  /* 1130585a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130585e je 0x113058a2 */
  if (C.zf) goto L_113058a2;
  /* 11305860 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 11305866 push eax */
  push32((uint32_t)(EAX));
  /* 11305867 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1130586a push ecx */
  push32((uint32_t)(ECX));
  /* 1130586b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130586e push edx */
  push32((uint32_t)(EDX));
  /* 1130586f push 0x1132d620 */
  push32((uint32_t)(0x1132d620u));
  /* 11305874 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11305879 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1130587f push eax */
  push32((uint32_t)(EAX));
  /* 11305880 call 0x11309460 */
  push32(0x11305885u); f_11309460();
  /* 11305885 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11305888 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130588a jge 0x113058a0 */
  if ((C.sf==C.of)) goto L_113058a0;
  /* 1130588c push 0x1132d65c */
  push32((uint32_t)(0x1132d65cu));
  /* 11305891 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11305897 push ecx */
  push32((uint32_t)(ECX));
  /* 11305898 call 0x11309560 */
  push32(0x1130589du); f_11309560();
  /* 1130589d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113058a0:;
  /* 113058a0 jmp 0x113058b8 */
  goto L_113058b8;
L_113058a2:;
  /* 113058a2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 113058a8 push edx */
  push32((uint32_t)(EDX));
  /* 113058a9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 113058af push eax */
  push32((uint32_t)(EAX));
  /* 113058b0 call 0x11309560 */
  push32(0x113058b5u); f_11309560();
  /* 113058b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113058b8:;
  /* 113058b8 cmp dword ptr [0x113342c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113342c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113058bf je 0x113058fc */
  if (C.zf) goto L_113058fc;
  /* 113058c1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 113058c7 push ecx */
  push32((uint32_t)(ECX));
  /* 113058c8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 113058ce push edx */
  push32((uint32_t)(EDX));
  /* 113058cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113058d2 push eax */
  push32((uint32_t)(EAX));
  /* 113058d3 call dword ptr [0x113342c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113342c0))), 0x113058d9u);
  /* 113058d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113058dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113058de je 0x113058fc */
  if (C.zf) goto L_113058fc;
  /* 113058e0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113058e4 jne 0x113058f1 */
  if (!C.zf) goto L_113058f1;
  /* 113058e6 push 0x11330a34 */
  push32((uint32_t)(0x11330a34u));
  /* 113058eb call dword ptr [0x113353ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353ac))), 0x113058f1u);
L_113058f1:;
  /* 113058f1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 113058f7 jmp 0x113059fb */
  goto L_113059fb;
L_113058fc:;
  /* 113058fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113058ff mov edx, dword ptr [ecx*4 + 0x11330a38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11330a38)));
  /* 11305906 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11305909 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130590b je 0x1130594b */
  if (C.zf) goto L_1130594b;
  /* 1130590d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11305910 cmp dword ptr [eax*4 + 0x11330a44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11330a44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305918 je 0x1130594b */
  if (C.zf) goto L_1130594b;
  /* 1130591a push 0 */
  push32((uint32_t)(0x0u));
  /* 1130591c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 11305922 push ecx */
  push32((uint32_t)(ECX));
  /* 11305923 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11305929 push edx */
  push32((uint32_t)(EDX));
  /* 1130592a call 0x113093e0 */
  push32(0x1130592fu); f_113093e0();
  /* 1130592f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11305932 push eax */
  push32((uint32_t)(EAX));
  /* 11305933 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11305939 push eax */
  push32((uint32_t)(EAX));
  /* 1130593a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130593d mov edx, dword ptr [ecx*4 + 0x11330a44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11330a44)));
  /* 11305944 push edx */
  push32((uint32_t)(EDX));
  /* 11305945 call dword ptr [0x113353a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353a8))), 0x1130594bu);
L_1130594b:;
  /* 1130594b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130594e mov ecx, dword ptr [eax*4 + 0x11330a38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11330a38)));
  /* 11305955 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11305958 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130595a je 0x11305969 */
  if (C.zf) goto L_11305969;
  /* 1130595c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11305962 push edx */
  push32((uint32_t)(EDX));
  /* 11305963 call dword ptr [0x113353b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353b0))), 0x11305969u);
L_11305969:;
  /* 11305969 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130596c mov ecx, dword ptr [eax*4 + 0x11330a38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11330a38)));
  /* 11305973 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11305976 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11305978 je 0x113059e8 */
  if (C.zf) goto L_113059e8;
  /* 1130597a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130597e je 0x1130599d */
  if (C.zf) goto L_1130599d;
  /* 11305980 push 0xa */
  push32((uint32_t)(0xau));
  /* 11305982 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 11305988 push edx */
  push32((uint32_t)(EDX));
  /* 11305989 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1130598c push eax */
  push32((uint32_t)(EAX));
  /* 1130598d call 0x113090f0 */
  push32(0x11305992u); f_113090f0();
  /* 11305992 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11305995 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 1130599b jmp 0x113059a7 */
  goto L_113059a7;
L_1130599d:;
  /* 1130599d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_113059a7:;
  /* 113059a7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 113059ad push ecx */
  push32((uint32_t)(ECX));
  /* 113059ae mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113059b1 push edx */
  push32((uint32_t)(EDX));
  /* 113059b2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 113059b8 push eax */
  push32((uint32_t)(EAX));
  /* 113059b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113059bc push ecx */
  push32((uint32_t)(ECX));
  /* 113059bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113059c0 push edx */
  push32((uint32_t)(EDX));
  /* 113059c1 call 0x11305a00 */
  push32(0x113059c6u); f_11305a00();
  /* 113059c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113059c9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 113059cf cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113059d3 jne 0x113059e0 */
  if (!C.zf) goto L_113059e0;
  /* 113059d5 push 0x11330a34 */
  push32((uint32_t)(0x11330a34u));
  /* 113059da call dword ptr [0x113353ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353ac))), 0x113059e0u);
L_113059e0:;
  /* 113059e0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 113059e6 jmp 0x113059fb */
  goto L_113059fb;
L_113059e8:;
  /* 113059e8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113059ec jne 0x113059f9 */
  if (!C.zf) goto L_113059f9;
  /* 113059ee push 0x11330a34 */
  push32((uint32_t)(0x11330a34u));
  /* 113059f3 call dword ptr [0x113353ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353ac))), 0x113059f9u);
L_113059f9:;
  /* 113059f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113059fb:;
  /* 113059fb pop edi */
  EDI = (pop32());
  /* 113059fc mov esp, ebp */
  ESP = (EBP);
  /* 113059fe pop ebp */
  EBP = (pop32());
  /* 113059ff ret  */
  ESPCHK(0x11305670u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a00 @ 0x11305a00 (780 bytes, 197 insns) */
void f_11305a00(void) {
  FTRACE(0x11305a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11305a00 push ebp */
  push32((uint32_t)(EBP));
  /* 11305a01 mov ebp, esp */
  EBP = (ESP);
  /* 11305a03 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 11305a08 call 0x11309750 */
  push32(0x11305a0du); f_11309750();
L_11305a0d:;
  /* 11305a0d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305a11 jne 0x11305a38 */
  if (!C.zf) goto L_11305a38;
  /* 11305a13 push 0x1132d818 */
  push32((uint32_t)(0x1132d818u));
  /* 11305a18 push 0 */
  push32((uint32_t)(0x0u));
  /* 11305a1a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 11305a1f push 0x1132d80c */
  push32((uint32_t)(0x1132d80cu));
  /* 11305a24 push 2 */
  push32((uint32_t)(0x2u));
  /* 11305a26 call 0x11305670 */
  push32(0x11305a2bu); f_11305670();
  /* 11305a2b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11305a2e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305a31 jne 0x11305a38 */
  if (!C.zf) goto L_11305a38;
  /* 11305a33 call 0x11305560 */
  push32(0x11305a38u); f_11305560();
L_11305a38:;
  /* 11305a38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11305a3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11305a3c jne 0x11305a0d */
  if (!C.zf) goto L_11305a0d;
  /* 11305a3e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11305a43 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 11305a49 push ecx */
  push32((uint32_t)(ECX));
  /* 11305a4a push 0 */
  push32((uint32_t)(0x0u));
  /* 11305a4c call dword ptr [0x113353c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353c0))), 0x11305a52u);
  /* 11305a52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11305a54 jne 0x11305a6a */
  if (!C.zf) goto L_11305a6a;
  /* 11305a56 push 0x1132d7f4 */
  push32((uint32_t)(0x1132d7f4u));
  /* 11305a5b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 11305a61 push edx */
  push32((uint32_t)(EDX));
  /* 11305a62 call 0x11309560 */
  push32(0x11305a67u); f_11309560();
  /* 11305a67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11305a6a:;
  /* 11305a6a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 11305a70 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11305a73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11305a76 push ecx */
  push32((uint32_t)(ECX));
  /* 11305a77 call 0x113093e0 */
  push32(0x11305a7cu); f_113093e0();
  /* 11305a7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11305a7f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305a82 jbe 0x11305aad */
  if ((C.cf||C.zf)) goto L_11305aad;
  /* 11305a84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11305a87 push edx */
  push32((uint32_t)(EDX));
  /* 11305a88 call 0x113093e0 */
  push32(0x11305a8du); f_113093e0();
  /* 11305a8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11305a90 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11305a93 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11305a97 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11305a9a push 3 */
  push32((uint32_t)(0x3u));
  /* 11305a9c push 0x1132d7f0 */
  push32((uint32_t)(0x1132d7f0u));
  /* 11305aa1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11305aa4 push eax */
  push32((uint32_t)(EAX));
  /* 11305aa5 call 0x11309dd0 */
  push32(0x11305aaau); f_11309dd0();
  /* 11305aaa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11305aad:;
  /* 11305aad mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11305ab0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 11305ab6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305abd je 0x11305b08 */
  if (C.zf) goto L_11305b08;
  /* 11305abf mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11305ac5 push edx */
  push32((uint32_t)(EDX));
  /* 11305ac6 call 0x113093e0 */
  push32(0x11305acbu); f_113093e0();
  /* 11305acb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11305ace cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305ad1 jbe 0x11305b08 */
  if ((C.cf||C.zf)) goto L_11305b08;
  /* 11305ad3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11305ad9 push eax */
  push32((uint32_t)(EAX));
  /* 11305ada call 0x113093e0 */
  push32(0x11305adfu); f_113093e0();
  /* 11305adf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11305ae2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11305ae8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11305aec mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 11305af2 push 3 */
  push32((uint32_t)(0x3u));
  /* 11305af4 push 0x1132d7f0 */
  push32((uint32_t)(0x1132d7f0u));
  /* 11305af9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11305aff push eax */
  push32((uint32_t)(EAX));
  /* 11305b00 call 0x11309dd0 */
  push32(0x11305b05u); f_11309dd0();
  /* 11305b05 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11305b08:;
  /* 11305b08 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305b0c jne 0x11305b1a */
  if (!C.zf) goto L_11305b1a;
  /* 11305b0e mov dword ptr [ebp - 0x1114], 0x1132d77c */
  w32((uint32_t)(EBP + -0x1114), (0x1132d77cu));
  /* 11305b18 jmp 0x11305b24 */
  goto L_11305b24;
L_11305b1a:;
  /* 11305b1a mov dword ptr [ebp - 0x1114], 0x1132d51c */
  w32((uint32_t)(EBP + -0x1114), (0x1132d51cu));
L_11305b24:;
  /* 11305b24 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11305b27 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11305b2a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11305b2c je 0x11305b39 */
  if (C.zf) goto L_11305b39;
  /* 11305b2e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11305b31 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 11305b37 jmp 0x11305b43 */
  goto L_11305b43;
L_11305b39:;
  /* 11305b39 mov dword ptr [ebp - 0x1118], 0x1132d51c */
  w32((uint32_t)(EBP + -0x1118), (0x1132d51cu));
L_11305b43:;
  /* 11305b43 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11305b46 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11305b49 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11305b4b je 0x11305b5f */
  if (C.zf) goto L_11305b5f;
  /* 11305b4d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305b51 jne 0x11305b5f */
  if (!C.zf) goto L_11305b5f;
  /* 11305b53 mov dword ptr [ebp - 0x111c], 0x1132d76c */
  w32((uint32_t)(EBP + -0x111c), (0x1132d76cu));
  /* 11305b5d jmp 0x11305b69 */
  goto L_11305b69;
L_11305b5f:;
  /* 11305b5f mov dword ptr [ebp - 0x111c], 0x1132d51c */
  w32((uint32_t)(EBP + -0x111c), (0x1132d51cu));
L_11305b69:;
  /* 11305b69 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11305b6c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11305b6f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11305b71 je 0x11305b7f */
  if (C.zf) goto L_11305b7f;
  /* 11305b73 mov dword ptr [ebp - 0x1120], 0x1132d768 */
  w32((uint32_t)(EBP + -0x1120), (0x1132d768u));
  /* 11305b7d jmp 0x11305b89 */
  goto L_11305b89;
L_11305b7f:;
  /* 11305b7f mov dword ptr [ebp - 0x1120], 0x1132d51c */
  w32((uint32_t)(EBP + -0x1120), (0x1132d51cu));
L_11305b89:;
  /* 11305b89 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305b8d je 0x11305b9a */
  if (C.zf) goto L_11305b9a;
  /* 11305b8f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11305b92 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 11305b98 jmp 0x11305ba4 */
  goto L_11305ba4;
L_11305b9a:;
  /* 11305b9a mov dword ptr [ebp - 0x1124], 0x1132d51c */
  w32((uint32_t)(EBP + -0x1124), (0x1132d51cu));
L_11305ba4:;
  /* 11305ba4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305ba8 je 0x11305bb6 */
  if (C.zf) goto L_11305bb6;
  /* 11305baa mov dword ptr [ebp - 0x1128], 0x1132d760 */
  w32((uint32_t)(EBP + -0x1128), (0x1132d760u));
  /* 11305bb4 jmp 0x11305bc0 */
  goto L_11305bc0;
L_11305bb6:;
  /* 11305bb6 mov dword ptr [ebp - 0x1128], 0x1132d51c */
  w32((uint32_t)(EBP + -0x1128), (0x1132d51cu));
L_11305bc0:;
  /* 11305bc0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305bc4 je 0x11305bd1 */
  if (C.zf) goto L_11305bd1;
  /* 11305bc6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11305bc9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 11305bcf jmp 0x11305bdb */
  goto L_11305bdb;
L_11305bd1:;
  /* 11305bd1 mov dword ptr [ebp - 0x112c], 0x1132d51c */
  w32((uint32_t)(EBP + -0x112c), (0x1132d51cu));
L_11305bdb:;
  /* 11305bdb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305bdf je 0x11305bed */
  if (C.zf) goto L_11305bed;
  /* 11305be1 mov dword ptr [ebp - 0x1130], 0x1132d758 */
  w32((uint32_t)(EBP + -0x1130), (0x1132d758u));
  /* 11305beb jmp 0x11305bf7 */
  goto L_11305bf7;
L_11305bed:;
  /* 11305bed mov dword ptr [ebp - 0x1130], 0x1132d51c */
  w32((uint32_t)(EBP + -0x1130), (0x1132d51cu));
L_11305bf7:;
  /* 11305bf7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305bfe je 0x11305c0e */
  if (C.zf) goto L_11305c0e;
  /* 11305c00 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11305c06 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 11305c0c jmp 0x11305c18 */
  goto L_11305c18;
L_11305c0e:;
  /* 11305c0e mov dword ptr [ebp - 0x1134], 0x1132d51c */
  w32((uint32_t)(EBP + -0x1134), (0x1132d51cu));
L_11305c18:;
  /* 11305c18 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305c1f je 0x11305c2d */
  if (C.zf) goto L_11305c2d;
  /* 11305c21 mov dword ptr [ebp - 0x1138], 0x1132d74c */
  w32((uint32_t)(EBP + -0x1138), (0x1132d74cu));
  /* 11305c2b jmp 0x11305c37 */
  goto L_11305c37;
L_11305c2d:;
  /* 11305c2d mov dword ptr [ebp - 0x1138], 0x1132d51c */
  w32((uint32_t)(EBP + -0x1138), (0x1132d51cu));
L_11305c37:;
  /* 11305c37 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 11305c3d push edx */
  push32((uint32_t)(EDX));
  /* 11305c3e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 11305c44 push eax */
  push32((uint32_t)(EAX));
  /* 11305c45 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 11305c4b push ecx */
  push32((uint32_t)(ECX));
  /* 11305c4c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 11305c52 push edx */
  push32((uint32_t)(EDX));
  /* 11305c53 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 11305c59 push eax */
  push32((uint32_t)(EAX));
  /* 11305c5a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 11305c60 push ecx */
  push32((uint32_t)(ECX));
  /* 11305c61 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 11305c67 push edx */
  push32((uint32_t)(EDX));
  /* 11305c68 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 11305c6e push eax */
  push32((uint32_t)(EAX));
  /* 11305c6f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 11305c75 push ecx */
  push32((uint32_t)(ECX));
  /* 11305c76 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 11305c7c push edx */
  push32((uint32_t)(EDX));
  /* 11305c7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11305c80 push eax */
  push32((uint32_t)(EAX));
  /* 11305c81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11305c84 mov edx, dword ptr [ecx*4 + 0x11330a50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11330a50)));
  /* 11305c8b push edx */
  push32((uint32_t)(EDX));
  /* 11305c8c push 0x1132d6f8 */
  push32((uint32_t)(0x1132d6f8u));
  /* 11305c91 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11305c96 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 11305c9c push eax */
  push32((uint32_t)(EAX));
  /* 11305c9d call 0x11309460 */
  push32(0x11305ca2u); f_11309460();
  /* 11305ca2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11305ca5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11305ca7 jge 0x11305cbd */
  if ((C.sf==C.of)) goto L_11305cbd;
  /* 11305ca9 push 0x1132d65c */
  push32((uint32_t)(0x1132d65cu));
  /* 11305cae lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 11305cb4 push ecx */
  push32((uint32_t)(ECX));
  /* 11305cb5 call 0x11309560 */
  push32(0x11305cbau); f_11309560();
  /* 11305cba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11305cbd:;
  /* 11305cbd push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 11305cc2 push 0x1132d6d4 */
  push32((uint32_t)(0x1132d6d4u));
  /* 11305cc7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 11305ccd push edx */
  push32((uint32_t)(EDX));
  /* 11305cce call 0x11309d10 */
  push32(0x11305cd3u); f_11309d10();
  /* 11305cd3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11305cd6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 11305cdc cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305ce3 jne 0x11305cf6 */
  if (!C.zf) goto L_11305cf6;
  /* 11305ce5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11305ce7 call 0x11309a50 */
  push32(0x11305cecu); f_11309a50();
  /* 11305cec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11305cef push 3 */
  push32((uint32_t)(0x3u));
  /* 11305cf1 call 0x11305d70 */
  push32(0x11305cf6u); f_11305d70();
L_11305cf6:;
  /* 11305cf6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305cfd jne 0x11305d06 */
  if (!C.zf) goto L_11305d06;
  /* 11305cff mov eax, 1 */
  EAX = (0x1u);
  /* 11305d04 jmp 0x11305d08 */
  goto L_11305d08;
L_11305d06:;
  /* 11305d06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11305d08:;
  /* 11305d08 mov esp, ebp */
  ESP = (EBP);
  /* 11305d0a pop ebp */
  EBP = (pop32());
  /* 11305d0b ret  */
  ESPCHK(0x11305a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d10 @ 0x11305d10 (56 bytes, 15 insns) */
void f_11305d10(void) {
  FTRACE(0x11305d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11305d10 push ebp */
  push32((uint32_t)(EBP));
  /* 11305d11 mov ebp, esp */
  EBP = (ESP);
  /* 11305d13 cmp dword ptr [0x113342bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113342bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305d1a je 0x11305d22 */
  if (C.zf) goto L_11305d22;
  /* 11305d1c call dword ptr [0x113342bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113342bc))), 0x11305d22u);
L_11305d22:;
  /* 11305d22 push 0x11330418 */
  push32((uint32_t)(0x11330418u));
  /* 11305d27 push 0x11330208 */
  push32((uint32_t)(0x11330208u));
  /* 11305d2c call 0x11305ee0 */
  push32(0x11305d31u); f_11305ee0();
  /* 11305d31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11305d34 push 0x11330104 */
  push32((uint32_t)(0x11330104u));
  /* 11305d39 push 0x11330000 */
  push32((uint32_t)(0x11330000u));
  /* 11305d3e call 0x11305ee0 */
  push32(0x11305d43u); f_11305ee0();
  /* 11305d43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11305d46 pop ebp */
  EBP = (pop32());
  /* 11305d47 ret  */
  ESPCHK(0x11305d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d50 @ 0x11305d50 (21 bytes, 10 insns) */
void f_11305d50(void) {
  FTRACE(0x11305d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11305d50 push ebp */
  push32((uint32_t)(EBP));
  /* 11305d51 mov ebp, esp */
  EBP = (ESP);
  /* 11305d53 push 0 */
  push32((uint32_t)(0x0u));
  /* 11305d55 push 0 */
  push32((uint32_t)(0x0u));
  /* 11305d57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11305d5a push eax */
  push32((uint32_t)(EAX));
  /* 11305d5b call 0x11305dd0 */
  push32(0x11305d60u); f_11305dd0();
  /* 11305d60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11305d63 pop ebp */
  EBP = (pop32());
  /* 11305d64 ret  */
  ESPCHK(0x11305d50u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11305d70 (21 bytes, 10 insns) */
void f_11305d70(void) {
  FTRACE(0x11305d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11305d70 push ebp */
  push32((uint32_t)(EBP));
  /* 11305d71 mov ebp, esp */
  EBP = (ESP);
  /* 11305d73 push 0 */
  push32((uint32_t)(0x0u));
  /* 11305d75 push 1 */
  push32((uint32_t)(0x1u));
  /* 11305d77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11305d7a push eax */
  push32((uint32_t)(EAX));
  /* 11305d7b call 0x11305dd0 */
  push32(0x11305d80u); f_11305dd0();
  /* 11305d80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11305d83 pop ebp */
  EBP = (pop32());
  /* 11305d84 ret  */
  ESPCHK(0x11305d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d90 @ 0x11305d90 (19 bytes, 9 insns) */
void f_11305d90(void) {
  FTRACE(0x11305d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11305d90 push ebp */
  push32((uint32_t)(EBP));
  /* 11305d91 mov ebp, esp */
  EBP = (ESP);
  /* 11305d93 push 1 */
  push32((uint32_t)(0x1u));
  /* 11305d95 push 0 */
  push32((uint32_t)(0x0u));
  /* 11305d97 push 0 */
  push32((uint32_t)(0x0u));
  /* 11305d99 call 0x11305dd0 */
  push32(0x11305d9eu); f_11305dd0();
  /* 11305d9e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11305da1 pop ebp */
  EBP = (pop32());
  /* 11305da2 ret  */
  ESPCHK(0x11305d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005db0 @ 0x11305db0 (19 bytes, 9 insns) */
void f_11305db0(void) {
  FTRACE(0x11305db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11305db0 push ebp */
  push32((uint32_t)(EBP));
  /* 11305db1 mov ebp, esp */
  EBP = (ESP);
  /* 11305db3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11305db5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11305db7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11305db9 call 0x11305dd0 */
  push32(0x11305dbeu); f_11305dd0();
  /* 11305dbe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11305dc1 pop ebp */
  EBP = (pop32());
  /* 11305dc2 ret  */
  ESPCHK(0x11305db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005dd0 @ 0x11305dd0 (227 bytes, 61 insns) */
void f_11305dd0(void) {
  FTRACE(0x11305dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11305dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11305dd1 mov ebp, esp */
  EBP = (ESP);
  /* 11305dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11305dd4 call 0x11305ec0 */
  push32(0x11305dd9u); f_11305ec0();
  /* 11305dd9 cmp dword ptr [0x113327c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113327c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305de0 jne 0x11305df3 */
  if (!C.zf) goto L_11305df3;
  /* 11305de2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11305de5 push eax */
  push32((uint32_t)(EAX));
  /* 11305de6 call dword ptr [0x113353cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353cc))), 0x11305decu);
  /* 11305dec push eax */
  push32((uint32_t)(EAX));
  /* 11305ded call dword ptr [0x113352d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113352d8))), 0x11305df3u);
L_11305df3:;
  /* 11305df3 mov dword ptr [0x113327c0], 1 */
  w32((uint32_t)(0x113327c0), (0x1u));
  /* 11305dfd mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 11305e00 mov byte ptr [0x113327bc], cl */
  w8((uint32_t)(0x113327bc), (CL));
  /* 11305e06 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305e0a jne 0x11305e53 */
  if (!C.zf) goto L_11305e53;
  /* 11305e0c cmp dword ptr [0x113342b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113342b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305e13 je 0x11305e41 */
  if (C.zf) goto L_11305e41;
  /* 11305e15 mov edx, dword ptr [0x113342b4] */
  EDX = (r32((uint32_t)(0x113342b4)));
  /* 11305e1b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11305e1e:;
  /* 11305e1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11305e21 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11305e24 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11305e27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11305e2a cmp ecx, dword ptr [0x113342b8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x113342b8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305e30 jb 0x11305e41 */
  if (C.cf) goto L_11305e41;
  /* 11305e32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11305e35 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305e38 je 0x11305e3f */
  if (C.zf) goto L_11305e3f;
  /* 11305e3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11305e3d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x11305e3fu);
L_11305e3f:;
  /* 11305e3f jmp 0x11305e1e */
  goto L_11305e1e;
L_11305e41:;
  /* 11305e41 push 0x11330724 */
  push32((uint32_t)(0x11330724u));
  /* 11305e46 push 0x1133051c */
  push32((uint32_t)(0x1133051cu));
  /* 11305e4b call 0x11305ee0 */
  push32(0x11305e50u); f_11305ee0();
  /* 11305e50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11305e53:;
  /* 11305e53 push 0x1133092c */
  push32((uint32_t)(0x1133092cu));
  /* 11305e58 push 0x11330828 */
  push32((uint32_t)(0x11330828u));
  /* 11305e5d call 0x11305ee0 */
  push32(0x11305e62u); f_11305ee0();
  /* 11305e62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11305e65 cmp dword ptr [0x113327c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113327c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305e6c jne 0x11305e8e */
  if (!C.zf) goto L_11305e8e;
  /* 11305e6e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11305e70 call 0x11307ac0 */
  push32(0x11305e75u); f_11307ac0();
  /* 11305e75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11305e78 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11305e7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11305e7d je 0x11305e8e */
  if (C.zf) goto L_11305e8e;
  /* 11305e7f mov dword ptr [0x113327c8], 1 */
  w32((uint32_t)(0x113327c8), (0x1u));
  /* 11305e89 call 0x113083d0 */
  push32(0x11305e8eu); f_113083d0();
L_11305e8e:;
  /* 11305e8e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305e92 je 0x11305e9b */
  if (C.zf) goto L_11305e9b;
  /* 11305e94 call 0x11305ed0 */
  push32(0x11305e99u); f_11305ed0();
  /* 11305e99 jmp 0x11305eaf */
  goto L_11305eaf;
L_11305e9b:;
  /* 11305e9b mov dword ptr [0x113327c4], 1 */
  w32((uint32_t)(0x113327c4), (0x1u));
  /* 11305ea5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11305ea8 push ecx */
  push32((uint32_t)(ECX));
  /* 11305ea9 call dword ptr [0x113352d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113352d4))), 0x11305eafu);
L_11305eaf:;
  /* 11305eaf mov esp, ebp */
  ESP = (EBP);
  /* 11305eb1 pop ebp */
  EBP = (pop32());
  /* 11305eb2 ret  */
  ESPCHK(0x11305dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ec0 @ 0x11305ec0 (15 bytes, 7 insns) */
void f_11305ec0(void) {
  FTRACE(0x11305ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11305ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11305ec1 mov ebp, esp */
  EBP = (ESP);
  /* 11305ec3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11305ec5 call 0x11309fb0 */
  push32(0x11305ecau); f_11309fb0();
  /* 11305eca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11305ecd pop ebp */
  EBP = (pop32());
  /* 11305ece ret  */
  ESPCHK(0x11305ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ed0 @ 0x11305ed0 (15 bytes, 7 insns) */
void f_11305ed0(void) {
  FTRACE(0x11305ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11305ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 11305ed1 mov ebp, esp */
  EBP = (ESP);
  /* 11305ed3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11305ed5 call 0x1130a050 */
  push32(0x11305edau); f_1130a050();
  /* 11305eda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11305edd pop ebp */
  EBP = (pop32());
  /* 11305ede ret  */
  ESPCHK(0x11305ed0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x11305ee0 (37 bytes, 16 insns) */
void f_11305ee0(void) {
  FTRACE(0x11305ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11305ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 11305ee1 mov ebp, esp */
  EBP = (ESP);
L_11305ee3:;
  /* 11305ee3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11305ee6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305ee9 jae 0x11305f03 */
  if (!C.cf) goto L_11305f03;
  /* 11305eeb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11305eee cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305ef1 je 0x11305ef8 */
  if (C.zf) goto L_11305ef8;
  /* 11305ef3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11305ef6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x11305ef8u);
L_11305ef8:;
  /* 11305ef8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11305efb add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11305efe mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11305f01 jmp 0x11305ee3 */
  goto L_11305ee3;
L_11305f03:;
  /* 11305f03 pop ebp */
  EBP = (pop32());
  /* 11305f04 ret  */
  ESPCHK(0x11305ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f10 @ 0x11305f10 (130 bytes, 42 insns) */
void f_11305f10(void) {
  FTRACE(0x11305f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11305f10 push ebp */
  push32((uint32_t)(EBP));
  /* 11305f11 mov ebp, esp */
  EBP = (ESP);
  /* 11305f13 push ecx */
  push32((uint32_t)(ECX));
  /* 11305f14 call 0x11309ed0 */
  push32(0x11305f19u); f_11309ed0();
  /* 11305f19 call dword ptr [0x113353d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353d8))), 0x11305f1fu);
  /* 11305f1f mov dword ptr [0x11330a5c], eax */
  w32((uint32_t)(0x11330a5c), (EAX));
  /* 11305f24 cmp dword ptr [0x11330a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11330a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305f2b jne 0x11305f31 */
  if (!C.zf) goto L_11305f31;
  /* 11305f2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11305f2f jmp 0x11305f8e */
  goto L_11305f8e;
L_11305f31:;
  /* 11305f31 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11305f33 push 0x1132d830 */
  push32((uint32_t)(0x1132d830u));
  /* 11305f38 push 2 */
  push32((uint32_t)(0x2u));
  /* 11305f3a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11305f3c push 1 */
  push32((uint32_t)(0x1u));
  /* 11305f3e call 0x113069c0 */
  push32(0x11305f43u); f_113069c0();
  /* 11305f43 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11305f46 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11305f49 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305f4d je 0x11305f64 */
  if (C.zf) goto L_11305f64;
  /* 11305f4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11305f52 push eax */
  push32((uint32_t)(EAX));
  /* 11305f53 mov ecx, dword ptr [0x11330a5c] */
  ECX = (r32((uint32_t)(0x11330a5c)));
  /* 11305f59 push ecx */
  push32((uint32_t)(ECX));
  /* 11305f5a call dword ptr [0x113353d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353d4))), 0x11305f60u);
  /* 11305f60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11305f62 jne 0x11305f68 */
  if (!C.zf) goto L_11305f68;
L_11305f64:;
  /* 11305f64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11305f66 jmp 0x11305f8e */
  goto L_11305f8e;
L_11305f68:;
  /* 11305f68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11305f6b push edx */
  push32((uint32_t)(EDX));
  /* 11305f6c call 0x11305fd0 */
  push32(0x11305f71u); f_11305fd0();
  /* 11305f71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11305f74 call dword ptr [0x113353d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353d0))), 0x11305f7au);
  /* 11305f7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11305f7d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11305f7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11305f82 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11305f89 mov eax, 1 */
  EAX = (0x1u);
L_11305f8e:;
  /* 11305f8e mov esp, ebp */
  ESP = (EBP);
  /* 11305f90 pop ebp */
  EBP = (pop32());
  /* 11305f91 ret  */
  ESPCHK(0x11305f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fa0 @ 0x11305fa0 (41 bytes, 11 insns) */
void f_11305fa0(void) {
  FTRACE(0x11305fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11305fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11305fa1 mov ebp, esp */
  EBP = (ESP);
  /* 11305fa3 call 0x11309f10 */
  push32(0x11305fa8u); f_11309f10();
  /* 11305fa8 cmp dword ptr [0x11330a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11330a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11305faf je 0x11305fc7 */
  if (C.zf) goto L_11305fc7;
  /* 11305fb1 mov eax, dword ptr [0x11330a5c] */
  EAX = (r32((uint32_t)(0x11330a5c)));
  /* 11305fb6 push eax */
  push32((uint32_t)(EAX));
  /* 11305fb7 call dword ptr [0x113353c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353c8))), 0x11305fbdu);
  /* 11305fbd mov dword ptr [0x11330a5c], 0xffffffff */
  w32((uint32_t)(0x11330a5c), (0xffffffffu));
L_11305fc7:;
  /* 11305fc7 pop ebp */
  EBP = (pop32());
  /* 11305fc8 ret  */
  ESPCHK(0x11305fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fd0 @ 0x11305fd0 (25 bytes, 8 insns) */
void f_11305fd0(void) {
  FTRACE(0x11305fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11305fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11305fd1 mov ebp, esp */
  EBP = (ESP);
  /* 11305fd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11305fd6 mov dword ptr [eax + 0x50], 0x11330c00 */
  w32((uint32_t)(EAX + 0x50), (0x11330c00u));
  /* 11305fdd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11305fe0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 11305fe7 pop ebp */
  EBP = (pop32());
  /* 11305fe8 ret  */
  ESPCHK(0x11305fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ff0 @ 0x11305ff0 (152 bytes, 48 insns) */
void f_11305ff0(void) {
  FTRACE(0x11305ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11305ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 11305ff1 mov ebp, esp */
  EBP = (ESP);
  /* 11305ff3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11305ff6 call dword ptr [0x113353e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353e8))), 0x11305ffcu);
  /* 11305ffc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11305fff mov eax, dword ptr [0x11330a5c] */
  EAX = (r32((uint32_t)(0x11330a5c)));
  /* 11306004 push eax */
  push32((uint32_t)(EAX));
  /* 11306005 call dword ptr [0x113353e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353e4))), 0x1130600bu);
  /* 1130600b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1130600e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306012 jne 0x11306077 */
  if (!C.zf) goto L_11306077;
  /* 11306014 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 11306019 push 0x1132d830 */
  push32((uint32_t)(0x1132d830u));
  /* 1130601e push 2 */
  push32((uint32_t)(0x2u));
  /* 11306020 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11306022 push 1 */
  push32((uint32_t)(0x1u));
  /* 11306024 call 0x113069c0 */
  push32(0x11306029u); f_113069c0();
  /* 11306029 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130602c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1130602f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306033 je 0x1130606d */
  if (C.zf) goto L_1130606d;
  /* 11306035 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11306038 push ecx */
  push32((uint32_t)(ECX));
  /* 11306039 mov edx, dword ptr [0x11330a5c] */
  EDX = (r32((uint32_t)(0x11330a5c)));
  /* 1130603f push edx */
  push32((uint32_t)(EDX));
  /* 11306040 call dword ptr [0x113353d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353d4))), 0x11306046u);
  /* 11306046 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11306048 je 0x1130606d */
  if (C.zf) goto L_1130606d;
  /* 1130604a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130604d push eax */
  push32((uint32_t)(EAX));
  /* 1130604e call 0x11305fd0 */
  push32(0x11306053u); f_11305fd0();
  /* 11306053 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306056 call dword ptr [0x113353d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353d0))), 0x1130605cu);
  /* 1130605c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130605f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11306061 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11306064 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 1130606b jmp 0x11306077 */
  goto L_11306077;
L_1130606d:;
  /* 1130606d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1130606f call 0x11305520 */
  push32(0x11306074u); f_11305520();
  /* 11306074 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11306077:;
  /* 11306077 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130607a push eax */
  push32((uint32_t)(EAX));
  /* 1130607b call dword ptr [0x113353c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353c4))), 0x11306081u);
  /* 11306081 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11306084 mov esp, ebp */
  ESP = (EBP);
  /* 11306086 pop ebp */
  EBP = (pop32());
  /* 11306087 ret  */
  ESPCHK(0x11305ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006090 @ 0x11306090 (263 bytes, 86 insns) */
void f_11306090(void) {
  FTRACE(0x11306090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11306090 push ebp */
  push32((uint32_t)(EBP));
  /* 11306091 mov ebp, esp */
  EBP = (ESP);
  /* 11306093 cmp dword ptr [0x11330a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11330a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130609a je 0x11306195 */
  if (C.zf) goto L_11306195;
  /* 113060a0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113060a4 jne 0x113060b5 */
  if (!C.zf) goto L_113060b5;
  /* 113060a6 mov eax, dword ptr [0x11330a5c] */
  EAX = (r32((uint32_t)(0x11330a5c)));
  /* 113060ab push eax */
  push32((uint32_t)(EAX));
  /* 113060ac call dword ptr [0x113353e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353e4))), 0x113060b2u);
  /* 113060b2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_113060b5:;
  /* 113060b5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113060b9 je 0x11306186 */
  if (C.zf) goto L_11306186;
  /* 113060bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113060c2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113060c6 je 0x113060d9 */
  if (C.zf) goto L_113060d9;
  /* 113060c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 113060ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113060cd mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 113060d0 push eax */
  push32((uint32_t)(EAX));
  /* 113060d1 call 0x11307040 */
  push32(0x113060d6u); f_11307040();
  /* 113060d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113060d9:;
  /* 113060d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113060dc cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113060e0 je 0x113060f3 */
  if (C.zf) goto L_113060f3;
  /* 113060e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 113060e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113060e7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 113060ea push eax */
  push32((uint32_t)(EAX));
  /* 113060eb call 0x11307040 */
  push32(0x113060f0u); f_11307040();
  /* 113060f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113060f3:;
  /* 113060f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113060f6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113060fa je 0x1130610d */
  if (C.zf) goto L_1130610d;
  /* 113060fc push 2 */
  push32((uint32_t)(0x2u));
  /* 113060fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11306101 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 11306104 push eax */
  push32((uint32_t)(EAX));
  /* 11306105 call 0x11307040 */
  push32(0x1130610au); f_11307040();
  /* 1130610a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1130610d:;
  /* 1130610d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11306110 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306114 je 0x11306127 */
  if (C.zf) goto L_11306127;
  /* 11306116 push 2 */
  push32((uint32_t)(0x2u));
  /* 11306118 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130611b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 1130611e push eax */
  push32((uint32_t)(EAX));
  /* 1130611f call 0x11307040 */
  push32(0x11306124u); f_11307040();
  /* 11306124 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11306127:;
  /* 11306127 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130612a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130612e je 0x11306141 */
  if (C.zf) goto L_11306141;
  /* 11306130 push 2 */
  push32((uint32_t)(0x2u));
  /* 11306132 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11306135 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11306138 push eax */
  push32((uint32_t)(EAX));
  /* 11306139 call 0x11307040 */
  push32(0x1130613eu); f_11307040();
  /* 1130613e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11306141:;
  /* 11306141 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11306144 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306148 je 0x1130615b */
  if (C.zf) goto L_1130615b;
  /* 1130614a push 2 */
  push32((uint32_t)(0x2u));
  /* 1130614c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130614f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 11306152 push eax */
  push32((uint32_t)(EAX));
  /* 11306153 call 0x11307040 */
  push32(0x11306158u); f_11307040();
  /* 11306158 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1130615b:;
  /* 1130615b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130615e cmp dword ptr [ecx + 0x50], 0x11330c00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x11330c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306165 je 0x11306178 */
  if (C.zf) goto L_11306178;
  /* 11306167 push 2 */
  push32((uint32_t)(0x2u));
  /* 11306169 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130616c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 1130616f push eax */
  push32((uint32_t)(EAX));
  /* 11306170 call 0x11307040 */
  push32(0x11306175u); f_11307040();
  /* 11306175 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11306178:;
  /* 11306178 push 2 */
  push32((uint32_t)(0x2u));
  /* 1130617a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130617d push ecx */
  push32((uint32_t)(ECX));
  /* 1130617e call 0x11307040 */
  push32(0x11306183u); f_11307040();
  /* 11306183 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11306186:;
  /* 11306186 push 0 */
  push32((uint32_t)(0x0u));
  /* 11306188 mov edx, dword ptr [0x11330a5c] */
  EDX = (r32((uint32_t)(0x11330a5c)));
  /* 1130618e push edx */
  push32((uint32_t)(EDX));
  /* 1130618f call dword ptr [0x113353d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353d4))), 0x11306195u);
L_11306195:;
  /* 11306195 pop ebp */
  EBP = (pop32());
  /* 11306196 ret  */
  ESPCHK(0x11306090u, _esp0);
  ESP += 4; return;
}

/* FUN_100061a0 @ 0x113061a0 (11 bytes, 5 insns) */
void f_113061a0(void) {
  FTRACE(0x113061a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113061a0 push ebp */
  push32((uint32_t)(EBP));
  /* 113061a1 mov ebp, esp */
  EBP = (ESP);
  /* 113061a3 call dword ptr [0x113353d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353d0))), 0x113061a9u);
  /* 113061a9 pop ebp */
  EBP = (pop32());
  /* 113061aa ret  */
  ESPCHK(0x113061a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100061b0 @ 0x113061b0 (11 bytes, 5 insns) */
void f_113061b0(void) {
  FTRACE(0x113061b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113061b0 push ebp */
  push32((uint32_t)(EBP));
  /* 113061b1 mov ebp, esp */
  EBP = (ESP);
  /* 113061b3 call dword ptr [0x113353ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353ec))), 0x113061b9u);
  /* 113061b9 pop ebp */
  EBP = (pop32());
  /* 113061ba ret  */
  ESPCHK(0x113061b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100061c0 @ 0x113061c0 (804 bytes, 236 insns) */
void f_113061c0(void) {
  FTRACE(0x113061c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113061c0 push ebp */
  push32((uint32_t)(EBP));
  /* 113061c1 mov ebp, esp */
  EBP = (ESP);
  /* 113061c3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113061c6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 113061cb push 0x1132d83c */
  push32((uint32_t)(0x1132d83cu));
  /* 113061d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 113061d2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 113061d7 call 0x113065b0 */
  push32(0x113061dcu); f_113065b0();
  /* 113061dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113061df mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 113061e2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113061e6 jne 0x113061f2 */
  if (!C.zf) goto L_113061f2;
  /* 113061e8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 113061ea call 0x11305520 */
  push32(0x113061efu); f_11305520();
  /* 113061ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113061f2:;
  /* 113061f2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 113061f5 mov dword ptr [0x11334160], eax */
  w32((uint32_t)(0x11334160), (EAX));
  /* 113061fa mov dword ptr [0x1133429c], 0x20 */
  w32((uint32_t)(0x1133429c), (0x20u));
  /* 11306204 jmp 0x1130620f */
  goto L_1130620f;
L_11306206:;
  /* 11306206 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11306209 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130620c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_1130620f:;
  /* 1130620f mov edx, dword ptr [0x11334160] */
  EDX = (r32((uint32_t)(0x11334160)));
  /* 11306215 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130621b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130621e jae 0x11306243 */
  if (!C.cf) goto L_11306243;
  /* 11306220 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11306223 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11306227 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1130622a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11306230 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11306233 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11306237 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1130623a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11306241 jmp 0x11306206 */
  goto L_11306206;
L_11306243:;
  /* 11306243 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11306246 push ecx */
  push32((uint32_t)(ECX));
  /* 11306247 call dword ptr [0x113353e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353e0))), 0x1130624du);
  /* 1130624d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 11306250 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11306256 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11306258 je 0x113063e5 */
  if (C.zf) goto L_113063e5;
  /* 1130625e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306262 je 0x113063e5 */
  if (C.zf) goto L_113063e5;
  /* 11306268 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130626b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1130626d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 11306270 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11306273 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11306276 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11306279 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130627c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130627f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 11306282 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306289 jge 0x11306293 */
  if ((C.sf==C.of)) goto L_11306293;
  /* 1130628b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 1130628e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11306291 jmp 0x1130629a */
  goto L_1130629a;
L_11306293:;
  /* 11306293 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_1130629a:;
  /* 1130629a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 1130629d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 113062a0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 113062a7 jmp 0x113062b2 */
  goto L_113062b2;
L_113062a9:;
  /* 113062a9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 113062ac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113062af mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_113062b2:;
  /* 113062b2 mov ecx, dword ptr [0x1133429c] */
  ECX = (r32((uint32_t)(0x1133429c)));
  /* 113062b8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113062bb jge 0x11306352 */
  if ((C.sf==C.of)) goto L_11306352;
  /* 113062c1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 113062c6 push 0x1132d83c */
  push32((uint32_t)(0x1132d83cu));
  /* 113062cb push 2 */
  push32((uint32_t)(0x2u));
  /* 113062cd push 0x480 */
  push32((uint32_t)(0x480u));
  /* 113062d2 call 0x113065b0 */
  push32(0x113062d7u); f_113065b0();
  /* 113062d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113062da mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 113062dd cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113062e1 jne 0x113062ee */
  if (!C.zf) goto L_113062ee;
  /* 113062e3 mov edx, dword ptr [0x1133429c] */
  EDX = (r32((uint32_t)(0x1133429c)));
  /* 113062e9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 113062ec jmp 0x11306352 */
  goto L_11306352;
L_113062ee:;
  /* 113062ee mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 113062f1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 113062f4 mov dword ptr [eax*4 + 0x11334160], ecx */
  w32((uint32_t)(EAX*4 + 0x11334160), (ECX));
  /* 113062fb mov edx, dword ptr [0x1133429c] */
  EDX = (r32((uint32_t)(0x1133429c)));
  /* 11306301 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11306304 mov dword ptr [0x1133429c], edx */
  w32((uint32_t)(0x1133429c), (EDX));
  /* 1130630a jmp 0x11306315 */
  goto L_11306315;
L_1130630c:;
  /* 1130630c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1130630f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11306312 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_11306315:;
  /* 11306315 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11306318 mov edx, dword ptr [ecx*4 + 0x11334160] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11334160)));
  /* 1130631f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11306325 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306328 jae 0x1130634d */
  if (!C.cf) goto L_1130634d;
  /* 1130632a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1130632d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11306331 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11306334 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1130633a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1130633d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11306341 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11306344 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1130634b jmp 0x1130630c */
  goto L_1130630c;
L_1130634d:;
  /* 1130634d jmp 0x113062a9 */
  goto L_113062a9;
L_11306352:;
  /* 11306352 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11306359 jmp 0x11306376 */
  goto L_11306376;
L_1130635b:;
  /* 1130635b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 1130635e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11306361 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 11306364 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11306367 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130636a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1130636d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 11306370 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11306373 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_11306376:;
  /* 11306376 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11306379 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130637c jge 0x113063e5 */
  if ((C.sf==C.of)) goto L_113063e5;
  /* 1130637e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 11306381 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306384 je 0x113063e0 */
  if (C.zf) goto L_113063e0;
  /* 11306386 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11306389 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1130638c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1130638f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11306391 je 0x113063e0 */
  if (C.zf) goto L_113063e0;
  /* 11306393 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11306396 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11306399 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1130639c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130639e jne 0x113063b0 */
  if (!C.zf) goto L_113063b0;
  /* 113063a0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 113063a3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113063a5 push edx */
  push32((uint32_t)(EDX));
  /* 113063a6 call dword ptr [0x113353dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353dc))), 0x113063acu);
  /* 113063ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113063ae je 0x113063e0 */
  if (C.zf) goto L_113063e0;
L_113063b0:;
  /* 113063b0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 113063b3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 113063b6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 113063b9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 113063bc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113063bf mov edx, dword ptr [eax*4 + 0x11334160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11334160)));
  /* 113063c6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113063c8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 113063cb mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 113063ce mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 113063d1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113063d3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113063d5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 113063d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113063db mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113063dd mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_113063e0:;
  /* 113063e0 jmp 0x1130635b */
  goto L_1130635b;
L_113063e5:;
  /* 113063e5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 113063ec jmp 0x113063f7 */
  goto L_113063f7;
L_113063ee:;
  /* 113063ee mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 113063f1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113063f4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_113063f7:;
  /* 113063f7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113063fb jge 0x113064d4 */
  if ((C.sf==C.of)) goto L_113064d4;
  /* 11306401 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11306404 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11306407 mov edx, dword ptr [0x11334160] */
  EDX = (r32((uint32_t)(0x11334160)));
  /* 1130640d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130640f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 11306412 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11306415 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306418 jne 0x113064c0 */
  if (!C.zf) goto L_113064c0;
  /* 1130641e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11306421 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 11306425 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306429 jne 0x11306434 */
  if (!C.zf) goto L_11306434;
  /* 1130642b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 11306432 jmp 0x11306444 */
  goto L_11306444;
L_11306434:;
  /* 11306434 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 11306437 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130643a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1130643c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130643e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11306441 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_11306444:;
  /* 11306444 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11306447 push eax */
  push32((uint32_t)(EAX));
  /* 11306448 call dword ptr [0x113353a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353a4))), 0x1130644eu);
  /* 1130644e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 11306451 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306455 je 0x113064af */
  if (C.zf) goto L_113064af;
  /* 11306457 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1130645a push ecx */
  push32((uint32_t)(ECX));
  /* 1130645b call dword ptr [0x113353dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353dc))), 0x11306461u);
  /* 11306461 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11306464 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306468 je 0x113064af */
  if (C.zf) goto L_113064af;
  /* 1130646a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1130646d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11306470 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11306472 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 11306475 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1130647b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130647e jne 0x11306490 */
  if (!C.zf) goto L_11306490;
  /* 11306480 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11306483 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11306486 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 11306488 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1130648b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 1130648e jmp 0x113064ad */
  goto L_113064ad;
L_11306490:;
  /* 11306490 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 11306493 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11306499 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130649c jne 0x113064ad */
  if (!C.zf) goto L_113064ad;
  /* 1130649e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 113064a1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 113064a4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 113064a7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 113064aa mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_113064ad:;
  /* 113064ad jmp 0x113064be */
  goto L_113064be;
L_113064af:;
  /* 113064af mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 113064b2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 113064b5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 113064b8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 113064bb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_113064be:;
  /* 113064be jmp 0x113064cf */
  goto L_113064cf;
L_113064c0:;
  /* 113064c0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 113064c3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 113064c6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 113064c9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 113064cc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_113064cf:;
  /* 113064cf jmp 0x113063ee */
  goto L_113063ee;
L_113064d4:;
  /* 113064d4 mov eax, dword ptr [0x1133429c] */
  EAX = (r32((uint32_t)(0x1133429c)));
  /* 113064d9 push eax */
  push32((uint32_t)(EAX));
  /* 113064da call dword ptr [0x113353f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353f0))), 0x113064e0u);
  /* 113064e0 mov esp, ebp */
  ESP = (EBP);
  /* 113064e2 pop ebp */
  EBP = (pop32());
  /* 113064e3 ret  */
  ESPCHK(0x113061c0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x113064f0 (155 bytes, 45 insns) */
void f_113064f0(void) {
  FTRACE(0x113064f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113064f0 push ebp */
  push32((uint32_t)(EBP));
  /* 113064f1 mov ebp, esp */
  EBP = (ESP);
  /* 113064f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113064f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 113064fd jmp 0x11306508 */
  goto L_11306508;
L_113064ff:;
  /* 113064ff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11306502 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11306505 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11306508:;
  /* 11306508 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130650c jge 0x11306587 */
  if ((C.sf==C.of)) goto L_11306587;
  /* 1130650e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11306511 cmp dword ptr [ecx*4 + 0x11334160], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11334160))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306519 je 0x11306582 */
  if (C.zf) goto L_11306582;
  /* 1130651b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130651e mov eax, dword ptr [edx*4 + 0x11334160] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11334160)));
  /* 11306525 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11306528 jmp 0x11306533 */
  goto L_11306533;
L_1130652a:;
  /* 1130652a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130652d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11306530 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11306533:;
  /* 11306533 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11306536 mov eax, dword ptr [edx*4 + 0x11334160] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11334160)));
  /* 1130653d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11306542 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306545 jae 0x1130655f */
  if (!C.cf) goto L_1130655f;
  /* 11306547 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130654a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130654e je 0x1130655d */
  if (C.zf) goto L_1130655d;
  /* 11306550 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11306553 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11306556 push edx */
  push32((uint32_t)(EDX));
  /* 11306557 call dword ptr [0x11335390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335390))), 0x1130655du);
L_1130655d:;
  /* 1130655d jmp 0x1130652a */
  goto L_1130652a;
L_1130655f:;
  /* 1130655f push 2 */
  push32((uint32_t)(0x2u));
  /* 11306561 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11306564 mov ecx, dword ptr [eax*4 + 0x11334160] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11334160)));
  /* 1130656b push ecx */
  push32((uint32_t)(ECX));
  /* 1130656c call 0x11307040 */
  push32(0x11306571u); f_11307040();
  /* 11306571 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306574 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11306577 mov dword ptr [edx*4 + 0x11334160], 0 */
  w32((uint32_t)(EDX*4 + 0x11334160), (0x0u));
L_11306582:;
  /* 11306582 jmp 0x113064ff */
  goto L_113064ff;
L_11306587:;
  /* 11306587 mov esp, ebp */
  ESP = (EBP);
  /* 11306589 pop ebp */
  EBP = (pop32());
  /* 1130658a ret  */
  ESPCHK(0x113064f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006590 @ 0x11306590 (29 bytes, 13 insns) */
void f_11306590(void) {
  FTRACE(0x11306590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11306590 push ebp */
  push32((uint32_t)(EBP));
  /* 11306591 mov ebp, esp */
  EBP = (ESP);
  /* 11306593 push 0 */
  push32((uint32_t)(0x0u));
  /* 11306595 push 0 */
  push32((uint32_t)(0x0u));
  /* 11306597 push 1 */
  push32((uint32_t)(0x1u));
  /* 11306599 mov eax, dword ptr [0x11332970] */
  EAX = (r32((uint32_t)(0x11332970)));
  /* 1130659e push eax */
  push32((uint32_t)(EAX));
  /* 1130659f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113065a2 push ecx */
  push32((uint32_t)(ECX));
  /* 113065a3 call 0x11306600 */
  push32(0x113065a8u); f_11306600();
  /* 113065a8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113065ab pop ebp */
  EBP = (pop32());
  /* 113065ac ret  */
  ESPCHK(0x11306590u, _esp0);
  ESP += 4; return;
}

/* FUN_100065b0 @ 0x113065b0 (35 bytes, 16 insns) */
void f_113065b0(void) {
  FTRACE(0x113065b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113065b0 push ebp */
  push32((uint32_t)(EBP));
  /* 113065b1 mov ebp, esp */
  EBP = (ESP);
  /* 113065b3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113065b6 push eax */
  push32((uint32_t)(EAX));
  /* 113065b7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113065ba push ecx */
  push32((uint32_t)(ECX));
  /* 113065bb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113065be push edx */
  push32((uint32_t)(EDX));
  /* 113065bf mov eax, dword ptr [0x11332970] */
  EAX = (r32((uint32_t)(0x11332970)));
  /* 113065c4 push eax */
  push32((uint32_t)(EAX));
  /* 113065c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113065c8 push ecx */
  push32((uint32_t)(ECX));
  /* 113065c9 call 0x11306600 */
  push32(0x113065ceu); f_11306600();
  /* 113065ce add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113065d1 pop ebp */
  EBP = (pop32());
  /* 113065d2 ret  */
  ESPCHK(0x113065b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100065e0 @ 0x113065e0 (27 bytes, 13 insns) */
void f_113065e0(void) {
  FTRACE(0x113065e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113065e0 push ebp */
  push32((uint32_t)(EBP));
  /* 113065e1 mov ebp, esp */
  EBP = (ESP);
  /* 113065e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113065e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113065e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 113065e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113065ec push eax */
  push32((uint32_t)(EAX));
  /* 113065ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113065f0 push ecx */
  push32((uint32_t)(ECX));
  /* 113065f1 call 0x11306600 */
  push32(0x113065f6u); f_11306600();
  /* 113065f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113065f9 pop ebp */
  EBP = (pop32());
  /* 113065fa ret  */
  ESPCHK(0x113065e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006600 @ 0x11306600 (94 bytes, 38 insns) */
void f_11306600(void) {
  FTRACE(0x11306600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11306600 push ebp */
  push32((uint32_t)(EBP));
  /* 11306601 mov ebp, esp */
  EBP = (ESP);
  /* 11306603 push ecx */
  push32((uint32_t)(ECX));
L_11306604:;
  /* 11306604 push 9 */
  push32((uint32_t)(0x9u));
  /* 11306606 call 0x11309fb0 */
  push32(0x1130660bu); f_11309fb0();
  /* 1130660b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130660e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11306611 push eax */
  push32((uint32_t)(EAX));
  /* 11306612 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11306615 push ecx */
  push32((uint32_t)(ECX));
  /* 11306616 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11306619 push edx */
  push32((uint32_t)(EDX));
  /* 1130661a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130661d push eax */
  push32((uint32_t)(EAX));
  /* 1130661e call 0x11306680 */
  push32(0x11306623u); f_11306680();
  /* 11306623 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306626 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11306629 push 9 */
  push32((uint32_t)(0x9u));
  /* 1130662b call 0x1130a050 */
  push32(0x11306630u); f_1130a050();
  /* 11306630 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306633 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306637 jne 0x1130663f */
  if (!C.zf) goto L_1130663f;
  /* 11306639 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130663d jne 0x11306644 */
  if (!C.zf) goto L_11306644;
L_1130663f:;
  /* 1130663f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11306642 jmp 0x1130665a */
  goto L_1130665a;
L_11306644:;
  /* 11306644 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11306647 push ecx */
  push32((uint32_t)(ECX));
  /* 11306648 call 0x1130a2f0 */
  push32(0x1130664du); f_1130a2f0();
  /* 1130664d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306650 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11306652 jne 0x11306658 */
  if (!C.zf) goto L_11306658;
  /* 11306654 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11306656 jmp 0x1130665a */
  goto L_1130665a;
L_11306658:;
  /* 11306658 jmp 0x11306604 */
  goto L_11306604;
L_1130665a:;
  /* 1130665a mov esp, ebp */
  ESP = (EBP);
  /* 1130665c pop ebp */
  EBP = (pop32());
  /* 1130665d ret  */
  ESPCHK(0x11306600u, _esp0);
  ESP += 4; return;
}

/* FUN_10006660 @ 0x11306660 (23 bytes, 11 insns) */
void f_11306660(void) {
  FTRACE(0x11306660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11306660 push ebp */
  push32((uint32_t)(EBP));
  /* 11306661 mov ebp, esp */
  EBP = (ESP);
  /* 11306663 push 0 */
  push32((uint32_t)(0x0u));
  /* 11306665 push 0 */
  push32((uint32_t)(0x0u));
  /* 11306667 push 1 */
  push32((uint32_t)(0x1u));
  /* 11306669 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130666c push eax */
  push32((uint32_t)(EAX));
  /* 1130666d call 0x11306680 */
  push32(0x11306672u); f_11306680();
  /* 11306672 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306675 pop ebp */
  EBP = (pop32());
  /* 11306676 ret  */
  ESPCHK(0x11306660u, _esp0);
  ESP += 4; return;
}

/* FUN_10006680 @ 0x11306680 (787 bytes, 254 insns) */
void f_11306680(void) {
  FTRACE(0x11306680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11306680 push ebp */
  push32((uint32_t)(EBP));
  /* 11306681 mov ebp, esp */
  EBP = (ESP);
  /* 11306683 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11306686 push ebx */
  push32((uint32_t)(EBX));
  /* 11306687 push esi */
  push32((uint32_t)(ESI));
  /* 11306688 push edi */
  push32((uint32_t)(EDI));
  /* 11306689 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11306690 mov eax, dword ptr [0x11330a84] */
  EAX = (r32((uint32_t)(0x11330a84)));
  /* 11306695 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11306698 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130669a je 0x113066cc */
  if (C.zf) goto L_113066cc;
L_1130669c:;
  /* 1130669c call 0x11307750 */
  push32(0x113066a1u); f_11307750();
  /* 113066a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113066a3 jne 0x113066c6 */
  if (!C.zf) goto L_113066c6;
  /* 113066a5 push 0x1132d930 */
  push32((uint32_t)(0x1132d930u));
  /* 113066aa push 0 */
  push32((uint32_t)(0x0u));
  /* 113066ac push 0x141 */
  push32((uint32_t)(0x141u));
  /* 113066b1 push 0x1132d924 */
  push32((uint32_t)(0x1132d924u));
  /* 113066b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 113066b8 call 0x11305670 */
  push32(0x113066bdu); f_11305670();
  /* 113066bd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113066c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113066c3 jne 0x113066c6 */
  if (!C.zf) goto L_113066c6;
  /* 113066c5 int3  */
  x86_unimpl("int3 @ 0x113066c5");
L_113066c6:;
  /* 113066c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113066c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113066ca jne 0x1130669c */
  if (!C.zf) goto L_1130669c;
L_113066cc:;
  /* 113066cc mov edx, dword ptr [0x11330a88] */
  EDX = (r32((uint32_t)(0x11330a88)));
  /* 113066d2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 113066d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113066d8 cmp eax, dword ptr [0x11330a8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11330a8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113066de jne 0x113066e1 */
  if (!C.zf) goto L_113066e1;
  /* 113066e0 int3  */
  x86_unimpl("int3 @ 0x113066e0");
L_113066e1:;
  /* 113066e1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113066e4 push ecx */
  push32((uint32_t)(ECX));
  /* 113066e5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113066e8 push edx */
  push32((uint32_t)(EDX));
  /* 113066e9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113066ec push eax */
  push32((uint32_t)(EAX));
  /* 113066ed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113066f0 push ecx */
  push32((uint32_t)(ECX));
  /* 113066f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113066f4 push edx */
  push32((uint32_t)(EDX));
  /* 113066f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113066f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 113066f9 call dword ptr [0x11330c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x11330c90))), 0x113066ffu);
  /* 113066ff add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306702 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11306704 jne 0x11306764 */
  if (!C.zf) goto L_11306764;
  /* 11306706 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130670a je 0x11306737 */
  if (C.zf) goto L_11306737;
L_1130670c:;
  /* 1130670c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1130670f push eax */
  push32((uint32_t)(EAX));
  /* 11306710 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11306713 push ecx */
  push32((uint32_t)(ECX));
  /* 11306714 push 0x1132d8ec */
  push32((uint32_t)(0x1132d8ecu));
  /* 11306719 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130671b push 0 */
  push32((uint32_t)(0x0u));
  /* 1130671d push 0 */
  push32((uint32_t)(0x0u));
  /* 1130671f push 0 */
  push32((uint32_t)(0x0u));
  /* 11306721 call 0x11305670 */
  push32(0x11306726u); f_11305670();
  /* 11306726 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306729 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130672c jne 0x1130672f */
  if (!C.zf) goto L_1130672f;
  /* 1130672e int3  */
  x86_unimpl("int3 @ 0x1130672e");
L_1130672f:;
  /* 1130672f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11306731 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11306733 jne 0x1130670c */
  if (!C.zf) goto L_1130670c;
  /* 11306735 jmp 0x1130675d */
  goto L_1130675d;
L_11306737:;
  /* 11306737 push 0x1132d8c8 */
  push32((uint32_t)(0x1132d8c8u));
  /* 1130673c push 0x1132d8c4 */
  push32((uint32_t)(0x1132d8c4u));
  /* 11306741 push 0 */
  push32((uint32_t)(0x0u));
  /* 11306743 push 0 */
  push32((uint32_t)(0x0u));
  /* 11306745 push 0 */
  push32((uint32_t)(0x0u));
  /* 11306747 push 0 */
  push32((uint32_t)(0x0u));
  /* 11306749 call 0x11305670 */
  push32(0x1130674eu); f_11305670();
  /* 1130674e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306751 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306754 jne 0x11306757 */
  if (!C.zf) goto L_11306757;
  /* 11306756 int3  */
  x86_unimpl("int3 @ 0x11306756");
L_11306757:;
  /* 11306757 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11306759 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130675b jne 0x11306737 */
  if (!C.zf) goto L_11306737;
L_1130675d:;
  /* 1130675d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130675f jmp 0x1130698c */
  goto L_1130698c;
L_11306764:;
  /* 11306764 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11306767 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1130676d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306770 je 0x11306786 */
  if (C.zf) goto L_11306786;
  /* 11306772 mov edx, dword ptr [0x11330a84] */
  EDX = (r32((uint32_t)(0x11330a84)));
  /* 11306778 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1130677b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130677d jne 0x11306786 */
  if (!C.zf) goto L_11306786;
  /* 1130677f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_11306786:;
  /* 11306786 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130678a ja 0x11306797 */
  if ((!C.cf&&!C.zf)) goto L_11306797;
  /* 1130678c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130678f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11306792 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306795 jbe 0x113067c3 */
  if ((C.cf||C.zf)) goto L_113067c3;
L_11306797:;
  /* 11306797 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130679a push ecx */
  push32((uint32_t)(ECX));
  /* 1130679b push 0x1132d8a0 */
  push32((uint32_t)(0x1132d8a0u));
  /* 113067a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 113067a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113067a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113067a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 113067a8 call 0x11305670 */
  push32(0x113067adu); f_11305670();
  /* 113067ad add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113067b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113067b3 jne 0x113067b6 */
  if (!C.zf) goto L_113067b6;
  /* 113067b5 int3  */
  x86_unimpl("int3 @ 0x113067b5");
L_113067b6:;
  /* 113067b6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113067b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113067ba jne 0x11306797 */
  if (!C.zf) goto L_11306797;
  /* 113067bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113067be jmp 0x1130698c */
  goto L_1130698c;
L_113067c3:;
  /* 113067c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113067c6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113067cb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113067ce je 0x11306810 */
  if (C.zf) goto L_11306810;
  /* 113067d0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113067d4 je 0x11306810 */
  if (C.zf) goto L_11306810;
  /* 113067d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113067d9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 113067df cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113067e2 je 0x11306810 */
  if (C.zf) goto L_11306810;
  /* 113067e4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113067e8 je 0x11306810 */
  if (C.zf) goto L_11306810;
L_113067ea:;
  /* 113067ea push 0x1132d86c */
  push32((uint32_t)(0x1132d86cu));
  /* 113067ef push 0x1132d8c4 */
  push32((uint32_t)(0x1132d8c4u));
  /* 113067f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113067f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 113067f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 113067fa push 1 */
  push32((uint32_t)(0x1u));
  /* 113067fc call 0x11305670 */
  push32(0x11306801u); f_11305670();
  /* 11306801 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306804 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306807 jne 0x1130680a */
  if (!C.zf) goto L_1130680a;
  /* 11306809 int3  */
  x86_unimpl("int3 @ 0x11306809");
L_1130680a:;
  /* 1130680a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1130680c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130680e jne 0x113067ea */
  if (!C.zf) goto L_113067ea;
L_11306810:;
  /* 11306810 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11306813 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11306816 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11306819 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130681c push ecx */
  push32((uint32_t)(ECX));
  /* 1130681d call 0x1130a400 */
  push32(0x11306822u); f_1130a400();
  /* 11306822 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306825 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11306828 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130682c jne 0x11306835 */
  if (!C.zf) goto L_11306835;
  /* 1130682e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11306830 jmp 0x1130698c */
  goto L_1130698c;
L_11306835:;
  /* 11306835 mov edx, dword ptr [0x11330a88] */
  EDX = (r32((uint32_t)(0x11330a88)));
  /* 1130683b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130683e mov dword ptr [0x11330a88], edx */
  w32((uint32_t)(0x11330a88), (EDX));
  /* 11306844 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306848 je 0x11306893 */
  if (C.zf) goto L_11306893;
  /* 1130684a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130684d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11306853 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11306856 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1130685d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11306860 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11306867 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130686a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 11306871 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11306874 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11306877 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 1130687a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130687d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 11306884 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11306887 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 1130688e jmp 0x11306933 */
  goto L_11306933;
L_11306893:;
  /* 11306893 mov edx, dword ptr [0x113327d0] */
  EDX = (r32((uint32_t)(0x113327d0)));
  /* 11306899 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130689c mov dword ptr [0x113327d0], edx */
  w32((uint32_t)(0x113327d0), (EDX));
  /* 113068a2 mov eax, dword ptr [0x113327d8] */
  EAX = (r32((uint32_t)(0x113327d8)));
  /* 113068a7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113068aa mov dword ptr [0x113327d8], eax */
  w32((uint32_t)(0x113327d8), (EAX));
  /* 113068af mov ecx, dword ptr [0x113327d8] */
  ECX = (r32((uint32_t)(0x113327d8)));
  /* 113068b5 cmp ecx, dword ptr [0x113327dc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x113327dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113068bb jbe 0x113068c9 */
  if ((C.cf||C.zf)) goto L_113068c9;
  /* 113068bd mov edx, dword ptr [0x113327d8] */
  EDX = (r32((uint32_t)(0x113327d8)));
  /* 113068c3 mov dword ptr [0x113327dc], edx */
  w32((uint32_t)(0x113327dc), (EDX));
L_113068c9:;
  /* 113068c9 cmp dword ptr [0x113327d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113327d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113068d0 je 0x113068df */
  if (C.zf) goto L_113068df;
  /* 113068d2 mov eax, dword ptr [0x113327d4] */
  EAX = (r32((uint32_t)(0x113327d4)));
  /* 113068d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113068da mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 113068dd jmp 0x113068e8 */
  goto L_113068e8;
L_113068df:;
  /* 113068df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113068e2 mov dword ptr [0x113327cc], edx */
  w32((uint32_t)(0x113327cc), (EDX));
L_113068e8:;
  /* 113068e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113068eb mov ecx, dword ptr [0x113327d4] */
  ECX = (r32((uint32_t)(0x113327d4)));
  /* 113068f1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 113068f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113068f6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 113068fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11306900 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11306903 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11306906 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11306909 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1130690c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 1130690f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11306912 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11306915 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11306918 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130691b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130691e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11306921 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11306924 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11306927 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 1130692a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130692d mov dword ptr [0x113327d4], ecx */
  w32((uint32_t)(0x113327d4), (ECX));
L_11306933:;
  /* 11306933 push 4 */
  push32((uint32_t)(0x4u));
  /* 11306935 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11306937 mov dl, byte ptr [0x11330a90] */
  DL = (r8((uint32_t)(0x11330a90)));
  /* 1130693d push edx */
  push32((uint32_t)(EDX));
  /* 1130693e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11306941 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11306944 push eax */
  push32((uint32_t)(EAX));
  /* 11306945 call 0x1130a320 */
  push32(0x1130694au); f_1130a320();
  /* 1130694a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130694d push 4 */
  push32((uint32_t)(0x4u));
  /* 1130694f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11306951 mov cl, byte ptr [0x11330a90] */
  CL = (r8((uint32_t)(0x11330a90)));
  /* 11306957 push ecx */
  push32((uint32_t)(ECX));
  /* 11306958 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130695b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130695e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 11306962 push ecx */
  push32((uint32_t)(ECX));
  /* 11306963 call 0x1130a320 */
  push32(0x11306968u); f_1130a320();
  /* 11306968 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130696b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130696e push edx */
  push32((uint32_t)(EDX));
  /* 1130696f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11306971 mov al, byte ptr [0x11330a92] */
  AL = (r8((uint32_t)(0x11330a92)));
  /* 11306976 push eax */
  push32((uint32_t)(EAX));
  /* 11306977 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130697a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130697d push ecx */
  push32((uint32_t)(ECX));
  /* 1130697e call 0x1130a320 */
  push32(0x11306983u); f_1130a320();
  /* 11306983 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306986 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11306989 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1130698c:;
  /* 1130698c pop edi */
  EDI = (pop32());
  /* 1130698d pop esi */
  ESI = (pop32());
  /* 1130698e pop ebx */
  EBX = (pop32());
  /* 1130698f mov esp, ebp */
  ESP = (EBP);
  /* 11306991 pop ebp */
  EBP = (pop32());
  /* 11306992 ret  */
  ESPCHK(0x11306680u, _esp0);
  ESP += 4; return;
}

/* FUN_100069a0 @ 0x113069a0 (27 bytes, 13 insns) */
void f_113069a0(void) {
  FTRACE(0x113069a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113069a0 push ebp */
  push32((uint32_t)(EBP));
  /* 113069a1 mov ebp, esp */
  EBP = (ESP);
  /* 113069a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113069a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113069a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 113069a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113069ac push eax */
  push32((uint32_t)(EAX));
  /* 113069ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113069b0 push ecx */
  push32((uint32_t)(ECX));
  /* 113069b1 call 0x113069c0 */
  push32(0x113069b6u); f_113069c0();
  /* 113069b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113069b9 pop ebp */
  EBP = (pop32());
  /* 113069ba ret  */
  ESPCHK(0x113069a0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x113069c0 (96 bytes, 37 insns) */
void f_113069c0(void) {
  FTRACE(0x113069c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113069c0 push ebp */
  push32((uint32_t)(EBP));
  /* 113069c1 mov ebp, esp */
  EBP = (ESP);
  /* 113069c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113069c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113069c9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113069cd mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 113069d0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113069d3 push ecx */
  push32((uint32_t)(ECX));
  /* 113069d4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113069d7 push edx */
  push32((uint32_t)(EDX));
  /* 113069d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113069db push eax */
  push32((uint32_t)(EAX));
  /* 113069dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113069df push ecx */
  push32((uint32_t)(ECX));
  /* 113069e0 call 0x113065b0 */
  push32(0x113069e5u); f_113065b0();
  /* 113069e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113069e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113069eb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113069ef je 0x11306a19 */
  if (C.zf) goto L_11306a19;
  /* 113069f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113069f4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 113069f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113069fa add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113069fd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11306a00:;
  /* 11306a00 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11306a03 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306a06 jae 0x11306a19 */
  if (!C.cf) goto L_11306a19;
  /* 11306a08 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11306a0b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11306a0e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11306a11 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11306a14 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11306a17 jmp 0x11306a00 */
  goto L_11306a00;
L_11306a19:;
  /* 11306a19 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11306a1c mov esp, ebp */
  ESP = (EBP);
  /* 11306a1e pop ebp */
  EBP = (pop32());
  /* 11306a1f ret  */
  ESPCHK(0x113069c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a20 @ 0x11306a20 (27 bytes, 13 insns) */
void f_11306a20(void) {
  FTRACE(0x11306a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11306a20 push ebp */
  push32((uint32_t)(EBP));
  /* 11306a21 mov ebp, esp */
  EBP = (ESP);
  /* 11306a23 push 0 */
  push32((uint32_t)(0x0u));
  /* 11306a25 push 0 */
  push32((uint32_t)(0x0u));
  /* 11306a27 push 1 */
  push32((uint32_t)(0x1u));
  /* 11306a29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11306a2c push eax */
  push32((uint32_t)(EAX));
  /* 11306a2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11306a30 push ecx */
  push32((uint32_t)(ECX));
  /* 11306a31 call 0x11306a40 */
  push32(0x11306a36u); f_11306a40();
  /* 11306a36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306a39 pop ebp */
  EBP = (pop32());
  /* 11306a3a ret  */
  ESPCHK(0x11306a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a40 @ 0x11306a40 (64 bytes, 27 insns) */
void f_11306a40(void) {
  FTRACE(0x11306a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11306a40 push ebp */
  push32((uint32_t)(EBP));
  /* 11306a41 mov ebp, esp */
  EBP = (ESP);
  /* 11306a43 push ecx */
  push32((uint32_t)(ECX));
  /* 11306a44 push 9 */
  push32((uint32_t)(0x9u));
  /* 11306a46 call 0x11309fb0 */
  push32(0x11306a4bu); f_11309fb0();
  /* 11306a4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306a4e push 1 */
  push32((uint32_t)(0x1u));
  /* 11306a50 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11306a53 push eax */
  push32((uint32_t)(EAX));
  /* 11306a54 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11306a57 push ecx */
  push32((uint32_t)(ECX));
  /* 11306a58 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11306a5b push edx */
  push32((uint32_t)(EDX));
  /* 11306a5c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11306a5f push eax */
  push32((uint32_t)(EAX));
  /* 11306a60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11306a63 push ecx */
  push32((uint32_t)(ECX));
  /* 11306a64 call 0x11306a80 */
  push32(0x11306a69u); f_11306a80();
  /* 11306a69 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306a6c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11306a6f push 9 */
  push32((uint32_t)(0x9u));
  /* 11306a71 call 0x1130a050 */
  push32(0x11306a76u); f_1130a050();
  /* 11306a76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306a79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11306a7c mov esp, ebp */
  ESP = (EBP);
  /* 11306a7e pop ebp */
  EBP = (pop32());
  /* 11306a7f ret  */
  ESPCHK(0x11306a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a80 @ 0x11306a80 (1297 bytes, 431 insns) */
void f_11306a80(void) {
  FTRACE(0x11306a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11306a80 push ebp */
  push32((uint32_t)(EBP));
  /* 11306a81 mov ebp, esp */
  EBP = (ESP);
  /* 11306a83 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11306a86 push ebx */
  push32((uint32_t)(EBX));
  /* 11306a87 push esi */
  push32((uint32_t)(ESI));
  /* 11306a88 push edi */
  push32((uint32_t)(EDI));
  /* 11306a89 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11306a90 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306a94 jne 0x11306ab3 */
  if (!C.zf) goto L_11306ab3;
  /* 11306a96 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11306a99 push eax */
  push32((uint32_t)(EAX));
  /* 11306a9a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11306a9d push ecx */
  push32((uint32_t)(ECX));
  /* 11306a9e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11306aa1 push edx */
  push32((uint32_t)(EDX));
  /* 11306aa2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11306aa5 push eax */
  push32((uint32_t)(EAX));
  /* 11306aa6 call 0x113065b0 */
  push32(0x11306aabu); f_113065b0();
  /* 11306aab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306aae jmp 0x11306f8a */
  goto L_11306f8a;
L_11306ab3:;
  /* 11306ab3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306ab7 je 0x11306ad6 */
  if (C.zf) goto L_11306ad6;
  /* 11306ab9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306abd jne 0x11306ad6 */
  if (!C.zf) goto L_11306ad6;
  /* 11306abf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11306ac2 push ecx */
  push32((uint32_t)(ECX));
  /* 11306ac3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11306ac6 push edx */
  push32((uint32_t)(EDX));
  /* 11306ac7 call 0x11307040 */
  push32(0x11306accu); f_11307040();
  /* 11306acc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306acf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11306ad1 jmp 0x11306f8a */
  goto L_11306f8a;
L_11306ad6:;
  /* 11306ad6 mov eax, dword ptr [0x11330a84] */
  EAX = (r32((uint32_t)(0x11330a84)));
  /* 11306adb and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11306ade test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11306ae0 je 0x11306b12 */
  if (C.zf) goto L_11306b12;
L_11306ae2:;
  /* 11306ae2 call 0x11307750 */
  push32(0x11306ae7u); f_11307750();
  /* 11306ae7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11306ae9 jne 0x11306b0c */
  if (!C.zf) goto L_11306b0c;
  /* 11306aeb push 0x1132d930 */
  push32((uint32_t)(0x1132d930u));
  /* 11306af0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11306af2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 11306af7 push 0x1132d924 */
  push32((uint32_t)(0x1132d924u));
  /* 11306afc push 2 */
  push32((uint32_t)(0x2u));
  /* 11306afe call 0x11305670 */
  push32(0x11306b03u); f_11305670();
  /* 11306b03 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306b06 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306b09 jne 0x11306b0c */
  if (!C.zf) goto L_11306b0c;
  /* 11306b0b int3  */
  x86_unimpl("int3 @ 0x11306b0b");
L_11306b0c:;
  /* 11306b0c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11306b0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11306b10 jne 0x11306ae2 */
  if (!C.zf) goto L_11306ae2;
L_11306b12:;
  /* 11306b12 mov edx, dword ptr [0x11330a88] */
  EDX = (r32((uint32_t)(0x11330a88)));
  /* 11306b18 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11306b1b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11306b1e cmp eax, dword ptr [0x11330a8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11330a8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306b24 jne 0x11306b27 */
  if (!C.zf) goto L_11306b27;
  /* 11306b26 int3  */
  x86_unimpl("int3 @ 0x11306b26");
L_11306b27:;
  /* 11306b27 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11306b2a push ecx */
  push32((uint32_t)(ECX));
  /* 11306b2b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11306b2e push edx */
  push32((uint32_t)(EDX));
  /* 11306b2f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11306b32 push eax */
  push32((uint32_t)(EAX));
  /* 11306b33 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11306b36 push ecx */
  push32((uint32_t)(ECX));
  /* 11306b37 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11306b3a push edx */
  push32((uint32_t)(EDX));
  /* 11306b3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11306b3e push eax */
  push32((uint32_t)(EAX));
  /* 11306b3f push 2 */
  push32((uint32_t)(0x2u));
  /* 11306b41 call dword ptr [0x11330c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x11330c90))), 0x11306b47u);
  /* 11306b47 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306b4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11306b4c jne 0x11306bac */
  if (!C.zf) goto L_11306bac;
  /* 11306b4e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306b52 je 0x11306b7f */
  if (C.zf) goto L_11306b7f;
L_11306b54:;
  /* 11306b54 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11306b57 push ecx */
  push32((uint32_t)(ECX));
  /* 11306b58 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11306b5b push edx */
  push32((uint32_t)(EDX));
  /* 11306b5c push 0x1132daac */
  push32((uint32_t)(0x1132daacu));
  /* 11306b61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11306b63 push 0 */
  push32((uint32_t)(0x0u));
  /* 11306b65 push 0 */
  push32((uint32_t)(0x0u));
  /* 11306b67 push 0 */
  push32((uint32_t)(0x0u));
  /* 11306b69 call 0x11305670 */
  push32(0x11306b6eu); f_11305670();
  /* 11306b6e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306b71 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306b74 jne 0x11306b77 */
  if (!C.zf) goto L_11306b77;
  /* 11306b76 int3  */
  x86_unimpl("int3 @ 0x11306b76");
L_11306b77:;
  /* 11306b77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11306b79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11306b7b jne 0x11306b54 */
  if (!C.zf) goto L_11306b54;
  /* 11306b7d jmp 0x11306ba5 */
  goto L_11306ba5;
L_11306b7f:;
  /* 11306b7f push 0x1132da88 */
  push32((uint32_t)(0x1132da88u));
  /* 11306b84 push 0x1132d8c4 */
  push32((uint32_t)(0x1132d8c4u));
  /* 11306b89 push 0 */
  push32((uint32_t)(0x0u));
  /* 11306b8b push 0 */
  push32((uint32_t)(0x0u));
  /* 11306b8d push 0 */
  push32((uint32_t)(0x0u));
  /* 11306b8f push 0 */
  push32((uint32_t)(0x0u));
  /* 11306b91 call 0x11305670 */
  push32(0x11306b96u); f_11305670();
  /* 11306b96 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306b99 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306b9c jne 0x11306b9f */
  if (!C.zf) goto L_11306b9f;
  /* 11306b9e int3  */
  x86_unimpl("int3 @ 0x11306b9e");
L_11306b9f:;
  /* 11306b9f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11306ba1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11306ba3 jne 0x11306b7f */
  if (!C.zf) goto L_11306b7f;
L_11306ba5:;
  /* 11306ba5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11306ba7 jmp 0x11306f8a */
  goto L_11306f8a;
L_11306bac:;
  /* 11306bac cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306bb0 jbe 0x11306bde */
  if ((C.cf||C.zf)) goto L_11306bde;
L_11306bb2:;
  /* 11306bb2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11306bb5 push edx */
  push32((uint32_t)(EDX));
  /* 11306bb6 push 0x1132da58 */
  push32((uint32_t)(0x1132da58u));
  /* 11306bbb push 0 */
  push32((uint32_t)(0x0u));
  /* 11306bbd push 0 */
  push32((uint32_t)(0x0u));
  /* 11306bbf push 0 */
  push32((uint32_t)(0x0u));
  /* 11306bc1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11306bc3 call 0x11305670 */
  push32(0x11306bc8u); f_11305670();
  /* 11306bc8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306bcb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306bce jne 0x11306bd1 */
  if (!C.zf) goto L_11306bd1;
  /* 11306bd0 int3  */
  x86_unimpl("int3 @ 0x11306bd0");
L_11306bd1:;
  /* 11306bd1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11306bd3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11306bd5 jne 0x11306bb2 */
  if (!C.zf) goto L_11306bb2;
  /* 11306bd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11306bd9 jmp 0x11306f8a */
  goto L_11306f8a;
L_11306bde:;
  /* 11306bde cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306be2 je 0x11306c26 */
  if (C.zf) goto L_11306c26;
  /* 11306be4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11306be7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11306bed cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306bf0 je 0x11306c26 */
  if (C.zf) goto L_11306c26;
  /* 11306bf2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11306bf5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11306bfb cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306bfe je 0x11306c26 */
  if (C.zf) goto L_11306c26;
L_11306c00:;
  /* 11306c00 push 0x1132d86c */
  push32((uint32_t)(0x1132d86cu));
  /* 11306c05 push 0x1132d8c4 */
  push32((uint32_t)(0x1132d8c4u));
  /* 11306c0a push 0 */
  push32((uint32_t)(0x0u));
  /* 11306c0c push 0 */
  push32((uint32_t)(0x0u));
  /* 11306c0e push 0 */
  push32((uint32_t)(0x0u));
  /* 11306c10 push 1 */
  push32((uint32_t)(0x1u));
  /* 11306c12 call 0x11305670 */
  push32(0x11306c17u); f_11305670();
  /* 11306c17 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306c1a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306c1d jne 0x11306c20 */
  if (!C.zf) goto L_11306c20;
  /* 11306c1f int3  */
  x86_unimpl("int3 @ 0x11306c1f");
L_11306c20:;
  /* 11306c20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11306c22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11306c24 jne 0x11306c00 */
  if (!C.zf) goto L_11306c00;
L_11306c26:;
  /* 11306c26 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11306c29 push ecx */
  push32((uint32_t)(ECX));
  /* 11306c2a call 0x11307bb0 */
  push32(0x11306c2fu); f_11307bb0();
  /* 11306c2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306c32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11306c34 jne 0x11306c57 */
  if (!C.zf) goto L_11306c57;
  /* 11306c36 push 0x1132da34 */
  push32((uint32_t)(0x1132da34u));
  /* 11306c3b push 0 */
  push32((uint32_t)(0x0u));
  /* 11306c3d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 11306c42 push 0x1132d924 */
  push32((uint32_t)(0x1132d924u));
  /* 11306c47 push 2 */
  push32((uint32_t)(0x2u));
  /* 11306c49 call 0x11305670 */
  push32(0x11306c4eu); f_11305670();
  /* 11306c4e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306c51 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306c54 jne 0x11306c57 */
  if (!C.zf) goto L_11306c57;
  /* 11306c56 int3  */
  x86_unimpl("int3 @ 0x11306c56");
L_11306c57:;
  /* 11306c57 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11306c59 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11306c5b jne 0x11306c26 */
  if (!C.zf) goto L_11306c26;
  /* 11306c5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11306c60 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11306c63 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11306c66 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11306c69 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306c6d jne 0x11306c76 */
  if (!C.zf) goto L_11306c76;
  /* 11306c6f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11306c76:;
  /* 11306c76 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306c7a je 0x11306cba */
  if (C.zf) goto L_11306cba;
L_11306c7c:;
  /* 11306c7c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11306c7f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306c86 jne 0x11306c91 */
  if (!C.zf) goto L_11306c91;
  /* 11306c88 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11306c8b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306c8f je 0x11306cb2 */
  if (C.zf) goto L_11306cb2;
L_11306c91:;
  /* 11306c91 push 0x1132d9ec */
  push32((uint32_t)(0x1132d9ecu));
  /* 11306c96 push 0 */
  push32((uint32_t)(0x0u));
  /* 11306c98 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 11306c9d push 0x1132d924 */
  push32((uint32_t)(0x1132d924u));
  /* 11306ca2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11306ca4 call 0x11305670 */
  push32(0x11306ca9u); f_11305670();
  /* 11306ca9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306cac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306caf jne 0x11306cb2 */
  if (!C.zf) goto L_11306cb2;
  /* 11306cb1 int3  */
  x86_unimpl("int3 @ 0x11306cb1");
L_11306cb2:;
  /* 11306cb2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11306cb4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11306cb6 jne 0x11306c7c */
  if (!C.zf) goto L_11306c7c;
  /* 11306cb8 jmp 0x11306d1e */
  goto L_11306d1e;
L_11306cba:;
  /* 11306cba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11306cbd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11306cc0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11306cc5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306cc8 jne 0x11306cdf */
  if (!C.zf) goto L_11306cdf;
  /* 11306cca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11306ccd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11306cd3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306cd6 jne 0x11306cdf */
  if (!C.zf) goto L_11306cdf;
  /* 11306cd8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_11306cdf:;
  /* 11306cdf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11306ce2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11306ce5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11306cea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11306ced and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11306cf3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306cf5 je 0x11306d18 */
  if (C.zf) goto L_11306d18;
  /* 11306cf7 push 0x1132d9b0 */
  push32((uint32_t)(0x1132d9b0u));
  /* 11306cfc push 0 */
  push32((uint32_t)(0x0u));
  /* 11306cfe push 0x272 */
  push32((uint32_t)(0x272u));
  /* 11306d03 push 0x1132d924 */
  push32((uint32_t)(0x1132d924u));
  /* 11306d08 push 2 */
  push32((uint32_t)(0x2u));
  /* 11306d0a call 0x11305670 */
  push32(0x11306d0fu); f_11305670();
  /* 11306d0f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306d12 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306d15 jne 0x11306d18 */
  if (!C.zf) goto L_11306d18;
  /* 11306d17 int3  */
  x86_unimpl("int3 @ 0x11306d17");
L_11306d18:;
  /* 11306d18 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11306d1a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11306d1c jne 0x11306cdf */
  if (!C.zf) goto L_11306cdf;
L_11306d1e:;
  /* 11306d1e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306d22 je 0x11306d49 */
  if (C.zf) goto L_11306d49;
  /* 11306d24 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11306d27 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11306d2a push eax */
  push32((uint32_t)(EAX));
  /* 11306d2b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11306d2e push ecx */
  push32((uint32_t)(ECX));
  /* 11306d2f call 0x1130a530 */
  push32(0x11306d34u); f_1130a530();
  /* 11306d34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306d37 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11306d3a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306d3e jne 0x11306d47 */
  if (!C.zf) goto L_11306d47;
  /* 11306d40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11306d42 jmp 0x11306f8a */
  goto L_11306f8a;
L_11306d47:;
  /* 11306d47 jmp 0x11306d6c */
  goto L_11306d6c;
L_11306d49:;
  /* 11306d49 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11306d4c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11306d4f push edx */
  push32((uint32_t)(EDX));
  /* 11306d50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11306d53 push eax */
  push32((uint32_t)(EAX));
  /* 11306d54 call 0x1130a480 */
  push32(0x11306d59u); f_1130a480();
  /* 11306d59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306d5c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11306d5f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306d63 jne 0x11306d6c */
  if (!C.zf) goto L_11306d6c;
  /* 11306d65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11306d67 jmp 0x11306f8a */
  goto L_11306f8a;
L_11306d6c:;
  /* 11306d6c mov ecx, dword ptr [0x11330a88] */
  ECX = (r32((uint32_t)(0x11330a88)));
  /* 11306d72 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11306d75 mov dword ptr [0x11330a88], ecx */
  w32((uint32_t)(0x11330a88), (ECX));
  /* 11306d7b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306d7f jne 0x11306dd7 */
  if (!C.zf) goto L_11306dd7;
  /* 11306d81 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11306d84 mov eax, dword ptr [0x113327d0] */
  EAX = (r32((uint32_t)(0x113327d0)));
  /* 11306d89 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11306d8c mov dword ptr [0x113327d0], eax */
  w32((uint32_t)(0x113327d0), (EAX));
  /* 11306d91 mov ecx, dword ptr [0x113327d0] */
  ECX = (r32((uint32_t)(0x113327d0)));
  /* 11306d97 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11306d9a mov dword ptr [0x113327d0], ecx */
  w32((uint32_t)(0x113327d0), (ECX));
  /* 11306da0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11306da3 mov eax, dword ptr [0x113327d8] */
  EAX = (r32((uint32_t)(0x113327d8)));
  /* 11306da8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11306dab mov dword ptr [0x113327d8], eax */
  w32((uint32_t)(0x113327d8), (EAX));
  /* 11306db0 mov ecx, dword ptr [0x113327d8] */
  ECX = (r32((uint32_t)(0x113327d8)));
  /* 11306db6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11306db9 mov dword ptr [0x113327d8], ecx */
  w32((uint32_t)(0x113327d8), (ECX));
  /* 11306dbf mov edx, dword ptr [0x113327d8] */
  EDX = (r32((uint32_t)(0x113327d8)));
  /* 11306dc5 cmp edx, dword ptr [0x113327dc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x113327dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306dcb jbe 0x11306dd7 */
  if ((C.cf||C.zf)) goto L_11306dd7;
  /* 11306dcd mov eax, dword ptr [0x113327d8] */
  EAX = (r32((uint32_t)(0x113327d8)));
  /* 11306dd2 mov dword ptr [0x113327dc], eax */
  w32((uint32_t)(0x113327dc), (EAX));
L_11306dd7:;
  /* 11306dd7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11306dda add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11306ddd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11306de0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11306de3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11306de6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306de9 jbe 0x11306e0f */
  if ((C.cf||C.zf)) goto L_11306e0f;
  /* 11306deb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11306dee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11306df1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11306df4 push edx */
  push32((uint32_t)(EDX));
  /* 11306df5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11306df7 mov al, byte ptr [0x11330a92] */
  AL = (r8((uint32_t)(0x11330a92)));
  /* 11306dfc push eax */
  push32((uint32_t)(EAX));
  /* 11306dfd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11306e00 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11306e03 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11306e06 push edx */
  push32((uint32_t)(EDX));
  /* 11306e07 call 0x1130a320 */
  push32(0x11306e0cu); f_1130a320();
  /* 11306e0c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11306e0f:;
  /* 11306e0f push 4 */
  push32((uint32_t)(0x4u));
  /* 11306e11 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11306e13 mov al, byte ptr [0x11330a90] */
  AL = (r8((uint32_t)(0x11330a90)));
  /* 11306e18 push eax */
  push32((uint32_t)(EAX));
  /* 11306e19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11306e1c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11306e1f push ecx */
  push32((uint32_t)(ECX));
  /* 11306e20 call 0x1130a320 */
  push32(0x11306e25u); f_1130a320();
  /* 11306e25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306e28 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306e2c jne 0x11306e49 */
  if (!C.zf) goto L_11306e49;
  /* 11306e2e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11306e31 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11306e34 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11306e37 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11306e3a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11306e3d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 11306e40 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11306e43 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11306e46 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_11306e49:;
  /* 11306e49 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11306e4c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11306e4f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_11306e52:;
  /* 11306e52 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306e56 jne 0x11306e87 */
  if (!C.zf) goto L_11306e87;
  /* 11306e58 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306e5c jne 0x11306e66 */
  if (!C.zf) goto L_11306e66;
  /* 11306e5e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11306e61 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306e64 je 0x11306e87 */
  if (C.zf) goto L_11306e87;
L_11306e66:;
  /* 11306e66 push 0x1132d97c */
  push32((uint32_t)(0x1132d97cu));
  /* 11306e6b push 0 */
  push32((uint32_t)(0x0u));
  /* 11306e6d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 11306e72 push 0x1132d924 */
  push32((uint32_t)(0x1132d924u));
  /* 11306e77 push 2 */
  push32((uint32_t)(0x2u));
  /* 11306e79 call 0x11305670 */
  push32(0x11306e7eu); f_11305670();
  /* 11306e7e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306e81 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306e84 jne 0x11306e87 */
  if (!C.zf) goto L_11306e87;
  /* 11306e86 int3  */
  x86_unimpl("int3 @ 0x11306e86");
L_11306e87:;
  /* 11306e87 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11306e89 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11306e8b jne 0x11306e52 */
  if (!C.zf) goto L_11306e52;
  /* 11306e8d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11306e90 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306e93 je 0x11306e9b */
  if (C.zf) goto L_11306e9b;
  /* 11306e95 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306e99 je 0x11306ea3 */
  if (C.zf) goto L_11306ea3;
L_11306e9b:;
  /* 11306e9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11306e9e jmp 0x11306f8a */
  goto L_11306f8a;
L_11306ea3:;
  /* 11306ea3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11306ea6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306ea9 je 0x11306ebb */
  if (C.zf) goto L_11306ebb;
  /* 11306eab mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11306eae mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11306eb0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11306eb3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11306eb6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11306eb9 jmp 0x11306ef7 */
  goto L_11306ef7;
L_11306ebb:;
  /* 11306ebb mov eax, dword ptr [0x113327cc] */
  EAX = (r32((uint32_t)(0x113327cc)));
  /* 11306ec0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306ec3 je 0x11306ee6 */
  if (C.zf) goto L_11306ee6;
  /* 11306ec5 push 0x1132d960 */
  push32((uint32_t)(0x1132d960u));
  /* 11306eca push 0 */
  push32((uint32_t)(0x0u));
  /* 11306ecc push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 11306ed1 push 0x1132d924 */
  push32((uint32_t)(0x1132d924u));
  /* 11306ed6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11306ed8 call 0x11305670 */
  push32(0x11306eddu); f_11305670();
  /* 11306edd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306ee0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306ee3 jne 0x11306ee6 */
  if (!C.zf) goto L_11306ee6;
  /* 11306ee5 int3  */
  x86_unimpl("int3 @ 0x11306ee5");
L_11306ee6:;
  /* 11306ee6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11306ee8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11306eea jne 0x11306ebb */
  if (!C.zf) goto L_11306ebb;
  /* 11306eec mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11306eef mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11306ef2 mov dword ptr [0x113327cc], eax */
  w32((uint32_t)(0x113327cc), (EAX));
L_11306ef7:;
  /* 11306ef7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11306efa cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306efe je 0x11306f0f */
  if (C.zf) goto L_11306f0f;
  /* 11306f00 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11306f03 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11306f06 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11306f09 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11306f0b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11306f0d jmp 0x11306f4a */
  goto L_11306f4a;
L_11306f0f:;
  /* 11306f0f mov eax, dword ptr [0x113327d4] */
  EAX = (r32((uint32_t)(0x113327d4)));
  /* 11306f14 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306f17 je 0x11306f3a */
  if (C.zf) goto L_11306f3a;
  /* 11306f19 push 0x1132d944 */
  push32((uint32_t)(0x1132d944u));
  /* 11306f1e push 0 */
  push32((uint32_t)(0x0u));
  /* 11306f20 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 11306f25 push 0x1132d924 */
  push32((uint32_t)(0x1132d924u));
  /* 11306f2a push 2 */
  push32((uint32_t)(0x2u));
  /* 11306f2c call 0x11305670 */
  push32(0x11306f31u); f_11305670();
  /* 11306f31 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306f34 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306f37 jne 0x11306f3a */
  if (!C.zf) goto L_11306f3a;
  /* 11306f39 int3  */
  x86_unimpl("int3 @ 0x11306f39");
L_11306f3a:;
  /* 11306f3a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11306f3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11306f3e jne 0x11306f0f */
  if (!C.zf) goto L_11306f0f;
  /* 11306f40 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11306f43 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11306f45 mov dword ptr [0x113327d4], eax */
  w32((uint32_t)(0x113327d4), (EAX));
L_11306f4a:;
  /* 11306f4a cmp dword ptr [0x113327d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113327d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11306f51 je 0x11306f61 */
  if (C.zf) goto L_11306f61;
  /* 11306f53 mov ecx, dword ptr [0x113327d4] */
  ECX = (r32((uint32_t)(0x113327d4)));
  /* 11306f59 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11306f5c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11306f5f jmp 0x11306f69 */
  goto L_11306f69;
L_11306f61:;
  /* 11306f61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11306f64 mov dword ptr [0x113327cc], eax */
  w32((uint32_t)(0x113327cc), (EAX));
L_11306f69:;
  /* 11306f69 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11306f6c mov edx, dword ptr [0x113327d4] */
  EDX = (r32((uint32_t)(0x113327d4)));
  /* 11306f72 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11306f74 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11306f77 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11306f7e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11306f81 mov dword ptr [0x113327d4], ecx */
  w32((uint32_t)(0x113327d4), (ECX));
  /* 11306f87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11306f8a:;
  /* 11306f8a pop edi */
  EDI = (pop32());
  /* 11306f8b pop esi */
  ESI = (pop32());
  /* 11306f8c pop ebx */
  EBX = (pop32());
  /* 11306f8d mov esp, ebp */
  ESP = (EBP);
  /* 11306f8f pop ebp */
  EBP = (pop32());
  /* 11306f90 ret  */
  ESPCHK(0x11306a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fa0 @ 0x11306fa0 (27 bytes, 13 insns) */
void f_11306fa0(void) {
  FTRACE(0x11306fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11306fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11306fa1 mov ebp, esp */
  EBP = (ESP);
  /* 11306fa3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11306fa5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11306fa7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11306fa9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11306fac push eax */
  push32((uint32_t)(EAX));
  /* 11306fad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11306fb0 push ecx */
  push32((uint32_t)(ECX));
  /* 11306fb1 call 0x11306fc0 */
  push32(0x11306fb6u); f_11306fc0();
  /* 11306fb6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306fb9 pop ebp */
  EBP = (pop32());
  /* 11306fba ret  */
  ESPCHK(0x11306fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fc0 @ 0x11306fc0 (64 bytes, 27 insns) */
void f_11306fc0(void) {
  FTRACE(0x11306fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11306fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11306fc1 mov ebp, esp */
  EBP = (ESP);
  /* 11306fc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11306fc4 push 9 */
  push32((uint32_t)(0x9u));
  /* 11306fc6 call 0x11309fb0 */
  push32(0x11306fcbu); f_11309fb0();
  /* 11306fcb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306fce push 0 */
  push32((uint32_t)(0x0u));
  /* 11306fd0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11306fd3 push eax */
  push32((uint32_t)(EAX));
  /* 11306fd4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11306fd7 push ecx */
  push32((uint32_t)(ECX));
  /* 11306fd8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11306fdb push edx */
  push32((uint32_t)(EDX));
  /* 11306fdc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11306fdf push eax */
  push32((uint32_t)(EAX));
  /* 11306fe0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11306fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 11306fe4 call 0x11306a80 */
  push32(0x11306fe9u); f_11306a80();
  /* 11306fe9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306fec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11306fef push 9 */
  push32((uint32_t)(0x9u));
  /* 11306ff1 call 0x1130a050 */
  push32(0x11306ff6u); f_1130a050();
  /* 11306ff6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11306ff9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11306ffc mov esp, ebp */
  ESP = (EBP);
  /* 11306ffe pop ebp */
  EBP = (pop32());
  /* 11306fff ret  */
  ESPCHK(0x11306fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007000 @ 0x11307000 (19 bytes, 9 insns) */
void f_11307000(void) {
  FTRACE(0x11307000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11307000 push ebp */
  push32((uint32_t)(EBP));
  /* 11307001 mov ebp, esp */
  EBP = (ESP);
  /* 11307003 push 1 */
  push32((uint32_t)(0x1u));
  /* 11307005 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11307008 push eax */
  push32((uint32_t)(EAX));
  /* 11307009 call 0x11307040 */
  push32(0x1130700eu); f_11307040();
  /* 1130700e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307011 pop ebp */
  EBP = (pop32());
  /* 11307012 ret  */
  ESPCHK(0x11307000u, _esp0);
  ESP += 4; return;
}

/* FUN_10007020 @ 0x11307020 (19 bytes, 9 insns) */
void f_11307020(void) {
  FTRACE(0x11307020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11307020 push ebp */
  push32((uint32_t)(EBP));
  /* 11307021 mov ebp, esp */
  EBP = (ESP);
  /* 11307023 push 1 */
  push32((uint32_t)(0x1u));
  /* 11307025 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11307028 push eax */
  push32((uint32_t)(EAX));
  /* 11307029 call 0x11307070 */
  push32(0x1130702eu); f_11307070();
  /* 1130702e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307031 pop ebp */
  EBP = (pop32());
  /* 11307032 ret  */
  ESPCHK(0x11307020u, _esp0);
  ESP += 4; return;
}

/* FUN_10007040 @ 0x11307040 (41 bytes, 16 insns) */
void f_11307040(void) {
  FTRACE(0x11307040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11307040 push ebp */
  push32((uint32_t)(EBP));
  /* 11307041 mov ebp, esp */
  EBP = (ESP);
  /* 11307043 push 9 */
  push32((uint32_t)(0x9u));
  /* 11307045 call 0x11309fb0 */
  push32(0x1130704au); f_11309fb0();
  /* 1130704a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130704d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11307050 push eax */
  push32((uint32_t)(EAX));
  /* 11307051 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11307054 push ecx */
  push32((uint32_t)(ECX));
  /* 11307055 call 0x11307070 */
  push32(0x1130705au); f_11307070();
  /* 1130705a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130705d push 9 */
  push32((uint32_t)(0x9u));
  /* 1130705f call 0x1130a050 */
  push32(0x11307064u); f_1130a050();
  /* 11307064 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307067 pop ebp */
  EBP = (pop32());
  /* 11307068 ret  */
  ESPCHK(0x11307040u, _esp0);
  ESP += 4; return;
}

/* FUN_10007070 @ 0x11307070 (1004 bytes, 342 insns) */
void f_11307070(void) {
  FTRACE(0x11307070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11307070 push ebp */
  push32((uint32_t)(EBP));
  /* 11307071 mov ebp, esp */
  EBP = (ESP);
  /* 11307073 push ecx */
  push32((uint32_t)(ECX));
  /* 11307074 push ebx */
  push32((uint32_t)(EBX));
  /* 11307075 push esi */
  push32((uint32_t)(ESI));
  /* 11307076 push edi */
  push32((uint32_t)(EDI));
  /* 11307077 mov eax, dword ptr [0x11330a84] */
  EAX = (r32((uint32_t)(0x11330a84)));
  /* 1130707c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1130707f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11307081 je 0x113070b3 */
  if (C.zf) goto L_113070b3;
L_11307083:;
  /* 11307083 call 0x11307750 */
  push32(0x11307088u); f_11307750();
  /* 11307088 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130708a jne 0x113070ad */
  if (!C.zf) goto L_113070ad;
  /* 1130708c push 0x1132d930 */
  push32((uint32_t)(0x1132d930u));
  /* 11307091 push 0 */
  push32((uint32_t)(0x0u));
  /* 11307093 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 11307098 push 0x1132d924 */
  push32((uint32_t)(0x1132d924u));
  /* 1130709d push 2 */
  push32((uint32_t)(0x2u));
  /* 1130709f call 0x11305670 */
  push32(0x113070a4u); f_11305670();
  /* 113070a4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113070a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113070aa jne 0x113070ad */
  if (!C.zf) goto L_113070ad;
  /* 113070ac int3  */
  x86_unimpl("int3 @ 0x113070ac");
L_113070ad:;
  /* 113070ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113070af test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113070b1 jne 0x11307083 */
  if (!C.zf) goto L_11307083;
L_113070b3:;
  /* 113070b3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113070b7 jne 0x113070be */
  if (!C.zf) goto L_113070be;
  /* 113070b9 jmp 0x11307455 */
  goto L_11307455;
L_113070be:;
  /* 113070be push 0 */
  push32((uint32_t)(0x0u));
  /* 113070c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 113070c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113070c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113070c7 push edx */
  push32((uint32_t)(EDX));
  /* 113070c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 113070ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113070cd push eax */
  push32((uint32_t)(EAX));
  /* 113070ce push 3 */
  push32((uint32_t)(0x3u));
  /* 113070d0 call dword ptr [0x11330c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x11330c90))), 0x113070d6u);
  /* 113070d6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113070d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113070db jne 0x11307108 */
  if (!C.zf) goto L_11307108;
L_113070dd:;
  /* 113070dd push 0x1132dbf4 */
  push32((uint32_t)(0x1132dbf4u));
  /* 113070e2 push 0x1132d8c4 */
  push32((uint32_t)(0x1132d8c4u));
  /* 113070e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 113070e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 113070eb push 0 */
  push32((uint32_t)(0x0u));
  /* 113070ed push 0 */
  push32((uint32_t)(0x0u));
  /* 113070ef call 0x11305670 */
  push32(0x113070f4u); f_11305670();
  /* 113070f4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113070f7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113070fa jne 0x113070fd */
  if (!C.zf) goto L_113070fd;
  /* 113070fc int3  */
  x86_unimpl("int3 @ 0x113070fc");
L_113070fd:;
  /* 113070fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113070ff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11307101 jne 0x113070dd */
  if (!C.zf) goto L_113070dd;
  /* 11307103 jmp 0x11307455 */
  goto L_11307455;
L_11307108:;
  /* 11307108 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130710b push edx */
  push32((uint32_t)(EDX));
  /* 1130710c call 0x11307bb0 */
  push32(0x11307111u); f_11307bb0();
  /* 11307111 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307114 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11307116 jne 0x11307139 */
  if (!C.zf) goto L_11307139;
  /* 11307118 push 0x1132da34 */
  push32((uint32_t)(0x1132da34u));
  /* 1130711d push 0 */
  push32((uint32_t)(0x0u));
  /* 1130711f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 11307124 push 0x1132d924 */
  push32((uint32_t)(0x1132d924u));
  /* 11307129 push 2 */
  push32((uint32_t)(0x2u));
  /* 1130712b call 0x11305670 */
  push32(0x11307130u); f_11305670();
  /* 11307130 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307133 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307136 jne 0x11307139 */
  if (!C.zf) goto L_11307139;
  /* 11307138 int3  */
  x86_unimpl("int3 @ 0x11307138");
L_11307139:;
  /* 11307139 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130713b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130713d jne 0x11307108 */
  if (!C.zf) goto L_11307108;
  /* 1130713f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11307142 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11307145 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11307148:;
  /* 11307148 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130714b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1130714e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11307153 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307156 je 0x1130719b */
  if (C.zf) goto L_1130719b;
  /* 11307158 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130715b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130715f je 0x1130719b */
  if (C.zf) goto L_1130719b;
  /* 11307161 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307164 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11307167 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130716c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130716f je 0x1130719b */
  if (C.zf) goto L_1130719b;
  /* 11307171 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307174 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307178 je 0x1130719b */
  if (C.zf) goto L_1130719b;
  /* 1130717a push 0x1132dbcc */
  push32((uint32_t)(0x1132dbccu));
  /* 1130717f push 0 */
  push32((uint32_t)(0x0u));
  /* 11307181 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 11307186 push 0x1132d924 */
  push32((uint32_t)(0x1132d924u));
  /* 1130718b push 2 */
  push32((uint32_t)(0x2u));
  /* 1130718d call 0x11305670 */
  push32(0x11307192u); f_11305670();
  /* 11307192 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307195 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307198 jne 0x1130719b */
  if (!C.zf) goto L_1130719b;
  /* 1130719a int3  */
  x86_unimpl("int3 @ 0x1130719a");
L_1130719b:;
  /* 1130719b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1130719d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130719f jne 0x11307148 */
  if (!C.zf) goto L_11307148;
  /* 113071a1 mov eax, dword ptr [0x11330a84] */
  EAX = (r32((uint32_t)(0x11330a84)));
  /* 113071a6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 113071a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113071ab jne 0x11307276 */
  if (!C.zf) goto L_11307276;
  /* 113071b1 push 4 */
  push32((uint32_t)(0x4u));
  /* 113071b3 mov cl, byte ptr [0x11330a90] */
  CL = (r8((uint32_t)(0x11330a90)));
  /* 113071b9 push ecx */
  push32((uint32_t)(ECX));
  /* 113071ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113071bd add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113071c0 push edx */
  push32((uint32_t)(EDX));
  /* 113071c1 call 0x113076c0 */
  push32(0x113071c6u); f_113076c0();
  /* 113071c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113071c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113071cb jne 0x11307210 */
  if (!C.zf) goto L_11307210;
L_113071cd:;
  /* 113071cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113071d0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113071d3 push eax */
  push32((uint32_t)(EAX));
  /* 113071d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113071d7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 113071da push edx */
  push32((uint32_t)(EDX));
  /* 113071db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113071de mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 113071e1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 113071e7 mov edx, dword ptr [ecx*4 + 0x11330a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11330a94)));
  /* 113071ee push edx */
  push32((uint32_t)(EDX));
  /* 113071ef push 0x1132dba0 */
  push32((uint32_t)(0x1132dba0u));
  /* 113071f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113071f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 113071f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 113071fa push 1 */
  push32((uint32_t)(0x1u));
  /* 113071fc call 0x11305670 */
  push32(0x11307201u); f_11305670();
  /* 11307201 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307204 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307207 jne 0x1130720a */
  if (!C.zf) goto L_1130720a;
  /* 11307209 int3  */
  x86_unimpl("int3 @ 0x11307209");
L_1130720a:;
  /* 1130720a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130720c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130720e jne 0x113071cd */
  if (!C.zf) goto L_113071cd;
L_11307210:;
  /* 11307210 push 4 */
  push32((uint32_t)(0x4u));
  /* 11307212 mov cl, byte ptr [0x11330a90] */
  CL = (r8((uint32_t)(0x11330a90)));
  /* 11307218 push ecx */
  push32((uint32_t)(ECX));
  /* 11307219 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130721c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1130721f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307222 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11307226 push edx */
  push32((uint32_t)(EDX));
  /* 11307227 call 0x113076c0 */
  push32(0x1130722cu); f_113076c0();
  /* 1130722c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130722f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11307231 jne 0x11307276 */
  if (!C.zf) goto L_11307276;
L_11307233:;
  /* 11307233 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307236 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11307239 push eax */
  push32((uint32_t)(EAX));
  /* 1130723a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130723d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11307240 push edx */
  push32((uint32_t)(EDX));
  /* 11307241 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307244 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11307247 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1130724d mov edx, dword ptr [ecx*4 + 0x11330a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11330a94)));
  /* 11307254 push edx */
  push32((uint32_t)(EDX));
  /* 11307255 push 0x1132db74 */
  push32((uint32_t)(0x1132db74u));
  /* 1130725a push 0 */
  push32((uint32_t)(0x0u));
  /* 1130725c push 0 */
  push32((uint32_t)(0x0u));
  /* 1130725e push 0 */
  push32((uint32_t)(0x0u));
  /* 11307260 push 1 */
  push32((uint32_t)(0x1u));
  /* 11307262 call 0x11305670 */
  push32(0x11307267u); f_11305670();
  /* 11307267 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130726a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130726d jne 0x11307270 */
  if (!C.zf) goto L_11307270;
  /* 1130726f int3  */
  x86_unimpl("int3 @ 0x1130726f");
L_11307270:;
  /* 11307270 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11307272 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11307274 jne 0x11307233 */
  if (!C.zf) goto L_11307233;
L_11307276:;
  /* 11307276 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307279 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130727d jne 0x113072eb */
  if (!C.zf) goto L_113072eb;
L_1130727f:;
  /* 1130727f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307282 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307289 jne 0x11307294 */
  if (!C.zf) goto L_11307294;
  /* 1130728b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130728e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307292 je 0x113072b5 */
  if (C.zf) goto L_113072b5;
L_11307294:;
  /* 11307294 push 0x1132db34 */
  push32((uint32_t)(0x1132db34u));
  /* 11307299 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130729b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 113072a0 push 0x1132d924 */
  push32((uint32_t)(0x1132d924u));
  /* 113072a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 113072a7 call 0x11305670 */
  push32(0x113072acu); f_11305670();
  /* 113072ac add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113072af cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113072b2 jne 0x113072b5 */
  if (!C.zf) goto L_113072b5;
  /* 113072b4 int3  */
  x86_unimpl("int3 @ 0x113072b4");
L_113072b5:;
  /* 113072b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113072b7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113072b9 jne 0x1130727f */
  if (!C.zf) goto L_1130727f;
  /* 113072bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113072be mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 113072c1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113072c4 push eax */
  push32((uint32_t)(EAX));
  /* 113072c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113072c7 mov cl, byte ptr [0x11330a91] */
  CL = (r8((uint32_t)(0x11330a91)));
  /* 113072cd push ecx */
  push32((uint32_t)(ECX));
  /* 113072ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113072d1 push edx */
  push32((uint32_t)(EDX));
  /* 113072d2 call 0x1130a320 */
  push32(0x113072d7u); f_1130a320();
  /* 113072d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113072da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113072dd push eax */
  push32((uint32_t)(EAX));
  /* 113072de call 0x1130a720 */
  push32(0x113072e3u); f_1130a720();
  /* 113072e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113072e6 jmp 0x11307455 */
  goto L_11307455;
L_113072eb:;
  /* 113072eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113072ee cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113072f2 jne 0x11307301 */
  if (!C.zf) goto L_11307301;
  /* 113072f4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113072f8 jne 0x11307301 */
  if (!C.zf) goto L_11307301;
  /* 113072fa mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_11307301:;
  /* 11307301 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307304 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11307307 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130730a je 0x1130732d */
  if (C.zf) goto L_1130732d;
  /* 1130730c push 0x1132db14 */
  push32((uint32_t)(0x1132db14u));
  /* 11307311 push 0 */
  push32((uint32_t)(0x0u));
  /* 11307313 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 11307318 push 0x1132d924 */
  push32((uint32_t)(0x1132d924u));
  /* 1130731d push 2 */
  push32((uint32_t)(0x2u));
  /* 1130731f call 0x11305670 */
  push32(0x11307324u); f_11305670();
  /* 11307324 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307327 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130732a jne 0x1130732d */
  if (!C.zf) goto L_1130732d;
  /* 1130732c int3  */
  x86_unimpl("int3 @ 0x1130732c");
L_1130732d:;
  /* 1130732d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1130732f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11307331 jne 0x11307301 */
  if (!C.zf) goto L_11307301;
  /* 11307333 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307336 mov eax, dword ptr [0x113327d8] */
  EAX = (r32((uint32_t)(0x113327d8)));
  /* 1130733b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130733e mov dword ptr [0x113327d8], eax */
  w32((uint32_t)(0x113327d8), (EAX));
  /* 11307343 mov ecx, dword ptr [0x11330a84] */
  ECX = (r32((uint32_t)(0x11330a84)));
  /* 11307349 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1130734c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130734e jne 0x1130742c */
  if (!C.zf) goto L_1130742c;
  /* 11307354 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307357 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130735a je 0x1130736c */
  if (C.zf) goto L_1130736c;
  /* 1130735c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130735f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11307361 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307364 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11307367 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1130736a jmp 0x113073aa */
  goto L_113073aa;
L_1130736c:;
  /* 1130736c mov ecx, dword ptr [0x113327cc] */
  ECX = (r32((uint32_t)(0x113327cc)));
  /* 11307372 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307375 je 0x11307398 */
  if (C.zf) goto L_11307398;
  /* 11307377 push 0x1132dafc */
  push32((uint32_t)(0x1132dafcu));
  /* 1130737c push 0 */
  push32((uint32_t)(0x0u));
  /* 1130737e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 11307383 push 0x1132d924 */
  push32((uint32_t)(0x1132d924u));
  /* 11307388 push 2 */
  push32((uint32_t)(0x2u));
  /* 1130738a call 0x11305670 */
  push32(0x1130738fu); f_11305670();
  /* 1130738f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307392 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307395 jne 0x11307398 */
  if (!C.zf) goto L_11307398;
  /* 11307397 int3  */
  x86_unimpl("int3 @ 0x11307397");
L_11307398:;
  /* 11307398 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1130739a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130739c jne 0x1130736c */
  if (!C.zf) goto L_1130736c;
  /* 1130739e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113073a1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 113073a4 mov dword ptr [0x113327cc], ecx */
  w32((uint32_t)(0x113327cc), (ECX));
L_113073aa:;
  /* 113073aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113073ad cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113073b1 je 0x113073c2 */
  if (C.zf) goto L_113073c2;
  /* 113073b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113073b6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 113073b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113073bc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113073be mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 113073c0 jmp 0x113073ff */
  goto L_113073ff;
L_113073c2:;
  /* 113073c2 mov ecx, dword ptr [0x113327d4] */
  ECX = (r32((uint32_t)(0x113327d4)));
  /* 113073c8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113073cb je 0x113073ee */
  if (C.zf) goto L_113073ee;
  /* 113073cd push 0x1132dae4 */
  push32((uint32_t)(0x1132dae4u));
  /* 113073d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113073d4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 113073d9 push 0x1132d924 */
  push32((uint32_t)(0x1132d924u));
  /* 113073de push 2 */
  push32((uint32_t)(0x2u));
  /* 113073e0 call 0x11305670 */
  push32(0x113073e5u); f_11305670();
  /* 113073e5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113073e8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113073eb jne 0x113073ee */
  if (!C.zf) goto L_113073ee;
  /* 113073ed int3  */
  x86_unimpl("int3 @ 0x113073ed");
L_113073ee:;
  /* 113073ee xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113073f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113073f2 jne 0x113073c2 */
  if (!C.zf) goto L_113073c2;
  /* 113073f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113073f7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113073f9 mov dword ptr [0x113327d4], ecx */
  w32((uint32_t)(0x113327d4), (ECX));
L_113073ff:;
  /* 113073ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307402 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11307405 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11307408 push eax */
  push32((uint32_t)(EAX));
  /* 11307409 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1130740b mov cl, byte ptr [0x11330a91] */
  CL = (r8((uint32_t)(0x11330a91)));
  /* 11307411 push ecx */
  push32((uint32_t)(ECX));
  /* 11307412 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307415 push edx */
  push32((uint32_t)(EDX));
  /* 11307416 call 0x1130a320 */
  push32(0x1130741bu); f_1130a320();
  /* 1130741b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130741e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307421 push eax */
  push32((uint32_t)(EAX));
  /* 11307422 call 0x1130a720 */
  push32(0x11307427u); f_1130a720();
  /* 11307427 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130742a jmp 0x11307455 */
  goto L_11307455;
L_1130742c:;
  /* 1130742c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130742f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 11307436 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307439 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1130743c push eax */
  push32((uint32_t)(EAX));
  /* 1130743d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1130743f mov cl, byte ptr [0x11330a91] */
  CL = (r8((uint32_t)(0x11330a91)));
  /* 11307445 push ecx */
  push32((uint32_t)(ECX));
  /* 11307446 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307449 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130744c push edx */
  push32((uint32_t)(EDX));
  /* 1130744d call 0x1130a320 */
  push32(0x11307452u); f_1130a320();
  /* 11307452 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11307455:;
  /* 11307455 pop edi */
  EDI = (pop32());
  /* 11307456 pop esi */
  ESI = (pop32());
  /* 11307457 pop ebx */
  EBX = (pop32());
  /* 11307458 mov esp, ebp */
  ESP = (EBP);
  /* 1130745a pop ebp */
  EBP = (pop32());
  /* 1130745b ret  */
  ESPCHK(0x11307070u, _esp0);
  ESP += 4; return;
}

/* FUN_10007460 @ 0x11307460 (19 bytes, 9 insns) */
void f_11307460(void) {
  FTRACE(0x11307460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11307460 push ebp */
  push32((uint32_t)(EBP));
  /* 11307461 mov ebp, esp */
  EBP = (ESP);
  /* 11307463 push 1 */
  push32((uint32_t)(0x1u));
  /* 11307465 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11307468 push eax */
  push32((uint32_t)(EAX));
  /* 11307469 call 0x11307480 */
  push32(0x1130746eu); f_11307480();
  /* 1130746e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307471 pop ebp */
  EBP = (pop32());
  /* 11307472 ret  */
  ESPCHK(0x11307460u, _esp0);
  ESP += 4; return;
}

/* FUN_10007480 @ 0x11307480 (342 bytes, 119 insns) */
void f_11307480(void) {
  FTRACE(0x11307480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11307480 push ebp */
  push32((uint32_t)(EBP));
  /* 11307481 mov ebp, esp */
  EBP = (ESP);
  /* 11307483 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11307486 push ebx */
  push32((uint32_t)(EBX));
  /* 11307487 push esi */
  push32((uint32_t)(ESI));
  /* 11307488 push edi */
  push32((uint32_t)(EDI));
  /* 11307489 mov eax, dword ptr [0x11330a84] */
  EAX = (r32((uint32_t)(0x11330a84)));
  /* 1130748e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11307491 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11307493 je 0x113074c5 */
  if (C.zf) goto L_113074c5;
L_11307495:;
  /* 11307495 call 0x11307750 */
  push32(0x1130749au); f_11307750();
  /* 1130749a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130749c jne 0x113074bf */
  if (!C.zf) goto L_113074bf;
  /* 1130749e push 0x1132d930 */
  push32((uint32_t)(0x1132d930u));
  /* 113074a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113074a5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 113074aa push 0x1132d924 */
  push32((uint32_t)(0x1132d924u));
  /* 113074af push 2 */
  push32((uint32_t)(0x2u));
  /* 113074b1 call 0x11305670 */
  push32(0x113074b6u); f_11305670();
  /* 113074b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113074b9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113074bc jne 0x113074bf */
  if (!C.zf) goto L_113074bf;
  /* 113074be int3  */
  x86_unimpl("int3 @ 0x113074be");
L_113074bf:;
  /* 113074bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113074c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113074c3 jne 0x11307495 */
  if (!C.zf) goto L_11307495;
L_113074c5:;
  /* 113074c5 push 9 */
  push32((uint32_t)(0x9u));
  /* 113074c7 call 0x11309fb0 */
  push32(0x113074ccu); f_11309fb0();
  /* 113074cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113074cf:;
  /* 113074cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113074d2 push edx */
  push32((uint32_t)(EDX));
  /* 113074d3 call 0x11307bb0 */
  push32(0x113074d8u); f_11307bb0();
  /* 113074d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113074db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113074dd jne 0x11307500 */
  if (!C.zf) goto L_11307500;
  /* 113074df push 0x1132da34 */
  push32((uint32_t)(0x1132da34u));
  /* 113074e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113074e6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 113074eb push 0x1132d924 */
  push32((uint32_t)(0x1132d924u));
  /* 113074f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 113074f2 call 0x11305670 */
  push32(0x113074f7u); f_11305670();
  /* 113074f7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113074fa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113074fd jne 0x11307500 */
  if (!C.zf) goto L_11307500;
  /* 113074ff int3  */
  x86_unimpl("int3 @ 0x113074ff");
L_11307500:;
  /* 11307500 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11307502 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11307504 jne 0x113074cf */
  if (!C.zf) goto L_113074cf;
  /* 11307506 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11307509 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130750c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1130750f:;
  /* 1130750f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11307512 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11307515 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130751a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130751d je 0x11307562 */
  if (C.zf) goto L_11307562;
  /* 1130751f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11307522 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307526 je 0x11307562 */
  if (C.zf) goto L_11307562;
  /* 11307528 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130752b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1130752e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11307533 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307536 je 0x11307562 */
  if (C.zf) goto L_11307562;
  /* 11307538 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130753b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130753f je 0x11307562 */
  if (C.zf) goto L_11307562;
  /* 11307541 push 0x1132dbcc */
  push32((uint32_t)(0x1132dbccu));
  /* 11307546 push 0 */
  push32((uint32_t)(0x0u));
  /* 11307548 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 1130754d push 0x1132d924 */
  push32((uint32_t)(0x1132d924u));
  /* 11307552 push 2 */
  push32((uint32_t)(0x2u));
  /* 11307554 call 0x11305670 */
  push32(0x11307559u); f_11305670();
  /* 11307559 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130755c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130755f jne 0x11307562 */
  if (!C.zf) goto L_11307562;
  /* 11307561 int3  */
  x86_unimpl("int3 @ 0x11307561");
L_11307562:;
  /* 11307562 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11307564 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11307566 jne 0x1130750f */
  if (!C.zf) goto L_1130750f;
  /* 11307568 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130756b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130756f jne 0x1130757e */
  if (!C.zf) goto L_1130757e;
  /* 11307571 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307575 jne 0x1130757e */
  if (!C.zf) goto L_1130757e;
  /* 11307577 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_1130757e:;
  /* 1130757e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11307581 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307585 je 0x113075b9 */
  if (C.zf) goto L_113075b9;
L_11307587:;
  /* 11307587 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130758a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1130758d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307590 je 0x113075b3 */
  if (C.zf) goto L_113075b3;
  /* 11307592 push 0x1132db14 */
  push32((uint32_t)(0x1132db14u));
  /* 11307597 push 0 */
  push32((uint32_t)(0x0u));
  /* 11307599 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 1130759e push 0x1132d924 */
  push32((uint32_t)(0x1132d924u));
  /* 113075a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 113075a5 call 0x11305670 */
  push32(0x113075aau); f_11305670();
  /* 113075aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113075ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113075b0 jne 0x113075b3 */
  if (!C.zf) goto L_113075b3;
  /* 113075b2 int3  */
  x86_unimpl("int3 @ 0x113075b2");
L_113075b3:;
  /* 113075b3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113075b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113075b7 jne 0x11307587 */
  if (!C.zf) goto L_11307587;
L_113075b9:;
  /* 113075b9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113075bc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 113075bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113075c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 113075c4 call 0x1130a050 */
  push32(0x113075c9u); f_1130a050();
  /* 113075c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113075cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113075cf pop edi */
  EDI = (pop32());
  /* 113075d0 pop esi */
  ESI = (pop32());
  /* 113075d1 pop ebx */
  EBX = (pop32());
  /* 113075d2 mov esp, ebp */
  ESP = (EBP);
  /* 113075d4 pop ebp */
  EBP = (pop32());
  /* 113075d5 ret  */
  ESPCHK(0x11307480u, _esp0);
  ESP += 4; return;
}

/* FUN_100075e0 @ 0x113075e0 (28 bytes, 11 insns) */
void f_113075e0(void) {
  FTRACE(0x113075e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113075e0 push ebp */
  push32((uint32_t)(EBP));
  /* 113075e1 mov ebp, esp */
  EBP = (ESP);
  /* 113075e3 push ecx */
  push32((uint32_t)(ECX));
  /* 113075e4 mov eax, dword ptr [0x11330a8c] */
  EAX = (r32((uint32_t)(0x11330a8c)));
  /* 113075e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113075ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113075ef mov dword ptr [0x11330a8c], ecx */
  w32((uint32_t)(0x11330a8c), (ECX));
  /* 113075f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113075f8 mov esp, ebp */
  ESP = (EBP);
  /* 113075fa pop ebp */
  EBP = (pop32());
  /* 113075fb ret  */
  ESPCHK(0x113075e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007600 @ 0x11307600 (157 bytes, 59 insns) */
void f_11307600(void) {
  FTRACE(0x11307600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11307600 push ebp */
  push32((uint32_t)(EBP));
  /* 11307601 mov ebp, esp */
  EBP = (ESP);
  /* 11307603 push ecx */
  push32((uint32_t)(ECX));
  /* 11307604 push ebx */
  push32((uint32_t)(EBX));
  /* 11307605 push esi */
  push32((uint32_t)(ESI));
  /* 11307606 push edi */
  push32((uint32_t)(EDI));
  /* 11307607 push 9 */
  push32((uint32_t)(0x9u));
  /* 11307609 call 0x11309fb0 */
  push32(0x1130760eu); f_11309fb0();
  /* 1130760e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307611 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11307614 push eax */
  push32((uint32_t)(EAX));
  /* 11307615 call 0x11307bb0 */
  push32(0x1130761au); f_11307bb0();
  /* 1130761a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130761d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130761f je 0x1130768c */
  if (C.zf) goto L_1130768c;
  /* 11307621 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11307624 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11307627 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1130762a:;
  /* 1130762a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130762d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11307630 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11307635 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307638 je 0x1130767d */
  if (C.zf) goto L_1130767d;
  /* 1130763a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130763d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307641 je 0x1130767d */
  if (C.zf) goto L_1130767d;
  /* 11307643 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307646 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11307649 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130764e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307651 je 0x1130767d */
  if (C.zf) goto L_1130767d;
  /* 11307653 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307656 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130765a je 0x1130767d */
  if (C.zf) goto L_1130767d;
  /* 1130765c push 0x1132dbcc */
  push32((uint32_t)(0x1132dbccu));
  /* 11307661 push 0 */
  push32((uint32_t)(0x0u));
  /* 11307663 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 11307668 push 0x1132d924 */
  push32((uint32_t)(0x1132d924u));
  /* 1130766d push 2 */
  push32((uint32_t)(0x2u));
  /* 1130766f call 0x11305670 */
  push32(0x11307674u); f_11305670();
  /* 11307674 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307677 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130767a jne 0x1130767d */
  if (!C.zf) goto L_1130767d;
  /* 1130767c int3  */
  x86_unimpl("int3 @ 0x1130767c");
L_1130767d:;
  /* 1130767d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1130767f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11307681 jne 0x1130762a */
  if (!C.zf) goto L_1130762a;
  /* 11307683 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307686 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11307689 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_1130768c:;
  /* 1130768c push 9 */
  push32((uint32_t)(0x9u));
  /* 1130768e call 0x1130a050 */
  push32(0x11307693u); f_1130a050();
  /* 11307693 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307696 pop edi */
  EDI = (pop32());
  /* 11307697 pop esi */
  ESI = (pop32());
  /* 11307698 pop ebx */
  EBX = (pop32());
  /* 11307699 mov esp, ebp */
  ESP = (EBP);
  /* 1130769b pop ebp */
  EBP = (pop32());
  /* 1130769c ret  */
  ESPCHK(0x11307600u, _esp0);
  ESP += 4; return;
}

/* FUN_100076a0 @ 0x113076a0 (28 bytes, 11 insns) */
void f_113076a0(void) {
  FTRACE(0x113076a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113076a0 push ebp */
  push32((uint32_t)(EBP));
  /* 113076a1 mov ebp, esp */
  EBP = (ESP);
  /* 113076a3 push ecx */
  push32((uint32_t)(ECX));
  /* 113076a4 mov eax, dword ptr [0x11330c90] */
  EAX = (r32((uint32_t)(0x11330c90)));
  /* 113076a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113076ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113076af mov dword ptr [0x11330c90], ecx */
  w32((uint32_t)(0x11330c90), (ECX));
  /* 113076b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113076b8 mov esp, ebp */
  ESP = (EBP);
  /* 113076ba pop ebp */
  EBP = (pop32());
  /* 113076bb ret  */
  ESPCHK(0x113076a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100076c0 @ 0x113076c0 (136 bytes, 55 insns) */
void f_113076c0(void) {
  FTRACE(0x113076c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113076c0 push ebp */
  push32((uint32_t)(EBP));
  /* 113076c1 mov ebp, esp */
  EBP = (ESP);
  /* 113076c3 push ecx */
  push32((uint32_t)(ECX));
  /* 113076c4 push ebx */
  push32((uint32_t)(EBX));
  /* 113076c5 push esi */
  push32((uint32_t)(ESI));
  /* 113076c6 push edi */
  push32((uint32_t)(EDI));
  /* 113076c7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_113076ce:;
  /* 113076ce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113076d1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113076d4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113076d7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 113076da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113076dc je 0x1130773e */
  if (C.zf) goto L_1130773e;
  /* 113076de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113076e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113076e3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113076e5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113076e8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 113076ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113076f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113076f4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 113076f7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113076f9 je 0x1130773c */
  if (C.zf) goto L_1130773c;
L_113076fb:;
  /* 113076fb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113076fe and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11307703 push eax */
  push32((uint32_t)(EAX));
  /* 11307704 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11307707 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11307709 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 1130770c push edx */
  push32((uint32_t)(EDX));
  /* 1130770d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11307710 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11307713 push eax */
  push32((uint32_t)(EAX));
  /* 11307714 push 0x1132dc10 */
  push32((uint32_t)(0x1132dc10u));
  /* 11307719 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130771b push 0 */
  push32((uint32_t)(0x0u));
  /* 1130771d push 0 */
  push32((uint32_t)(0x0u));
  /* 1130771f push 0 */
  push32((uint32_t)(0x0u));
  /* 11307721 call 0x11305670 */
  push32(0x11307726u); f_11305670();
  /* 11307726 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307729 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130772c jne 0x1130772f */
  if (!C.zf) goto L_1130772f;
  /* 1130772e int3  */
  x86_unimpl("int3 @ 0x1130772e");
L_1130772f:;
  /* 1130772f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11307731 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11307733 jne 0x113076fb */
  if (!C.zf) goto L_113076fb;
  /* 11307735 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1130773c:;
  /* 1130773c jmp 0x113076ce */
  goto L_113076ce;
L_1130773e:;
  /* 1130773e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307741 pop edi */
  EDI = (pop32());
  /* 11307742 pop esi */
  ESI = (pop32());
  /* 11307743 pop ebx */
  EBX = (pop32());
  /* 11307744 mov esp, ebp */
  ESP = (EBP);
  /* 11307746 pop ebp */
  EBP = (pop32());
  /* 11307747 ret  */
  ESPCHK(0x113076c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007750 @ 0x11307750 (863 bytes, 299 insns) [1 switch table(s)] */
void f_11307750(void) {
  FTRACE(0x11307750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11307750 push ebp */
  push32((uint32_t)(EBP));
  /* 11307751 mov ebp, esp */
  EBP = (ESP);
  /* 11307753 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11307756 push ebx */
  push32((uint32_t)(EBX));
  /* 11307757 push esi */
  push32((uint32_t)(ESI));
  /* 11307758 push edi */
  push32((uint32_t)(EDI));
  /* 11307759 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11307760 mov eax, dword ptr [0x11330a84] */
  EAX = (r32((uint32_t)(0x11330a84)));
  /* 11307765 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11307768 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130776a jne 0x11307776 */
  if (!C.zf) goto L_11307776;
  /* 1130776c mov eax, 1 */
  EAX = (0x1u);
  /* 11307771 jmp 0x11307aa8 */
  goto L_11307aa8;
L_11307776:;
  /* 11307776 push 9 */
  push32((uint32_t)(0x9u));
  /* 11307778 call 0x11309fb0 */
  push32(0x1130777du); f_11309fb0();
  /* 1130777d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307780 call 0x1130a790 */
  push32(0x11307785u); f_1130a790();
  /* 11307785 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11307788 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130778c je 0x11307899 */
  if (C.zf) goto L_11307899;
  /* 11307792 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307796 je 0x11307899 */
  if (C.zf) goto L_11307899;
  /* 1130779c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130779f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 113077a2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 113077a5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113077a8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 113077ab cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113077af ja 0x11307862 */
  if ((!C.cf&&!C.zf)) goto L_11307862;
  /* 113077b5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113077b8 jmp dword ptr [eax*4 + 0x11307aaf] */
  switch (EAX) {
    case 0: goto L_1130783a;
    case 1: goto L_11307812;
    case 2: goto L_113077ea;
    case 3: goto L_113077bf;
    default: x86_unimpl("switch@0x113077b8 out of table"); return;
  }
L_113077bf:;
  /* 113077bf push 0x1132dd64 */
  push32((uint32_t)(0x1132dd64u));
  /* 113077c4 push 0x1132d8c4 */
  push32((uint32_t)(0x1132d8c4u));
  /* 113077c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 113077cb push 0 */
  push32((uint32_t)(0x0u));
  /* 113077cd push 0 */
  push32((uint32_t)(0x0u));
  /* 113077cf push 0 */
  push32((uint32_t)(0x0u));
  /* 113077d1 call 0x11305670 */
  push32(0x113077d6u); f_11305670();
  /* 113077d6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113077d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113077dc jne 0x113077df */
  if (!C.zf) goto L_113077df;
  /* 113077de int3  */
  x86_unimpl("int3 @ 0x113077de");
L_113077df:;
  /* 113077df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113077e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113077e3 jne 0x113077bf */
  if (!C.zf) goto L_113077bf;
  /* 113077e5 jmp 0x11307888 */
  goto L_11307888;
L_113077ea:;
  /* 113077ea push 0x1132dd40 */
  push32((uint32_t)(0x1132dd40u));
  /* 113077ef push 0x1132d8c4 */
  push32((uint32_t)(0x1132d8c4u));
  /* 113077f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113077f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 113077f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 113077fa push 0 */
  push32((uint32_t)(0x0u));
  /* 113077fc call 0x11305670 */
  push32(0x11307801u); f_11305670();
  /* 11307801 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307804 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307807 jne 0x1130780a */
  if (!C.zf) goto L_1130780a;
  /* 11307809 int3  */
  x86_unimpl("int3 @ 0x11307809");
L_1130780a:;
  /* 1130780a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1130780c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130780e jne 0x113077ea */
  if (!C.zf) goto L_113077ea;
  /* 11307810 jmp 0x11307888 */
  goto L_11307888;
L_11307812:;
  /* 11307812 push 0x1132dd1c */
  push32((uint32_t)(0x1132dd1cu));
  /* 11307817 push 0x1132d8c4 */
  push32((uint32_t)(0x1132d8c4u));
  /* 1130781c push 0 */
  push32((uint32_t)(0x0u));
  /* 1130781e push 0 */
  push32((uint32_t)(0x0u));
  /* 11307820 push 0 */
  push32((uint32_t)(0x0u));
  /* 11307822 push 0 */
  push32((uint32_t)(0x0u));
  /* 11307824 call 0x11305670 */
  push32(0x11307829u); f_11305670();
  /* 11307829 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130782c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130782f jne 0x11307832 */
  if (!C.zf) goto L_11307832;
  /* 11307831 int3  */
  x86_unimpl("int3 @ 0x11307831");
L_11307832:;
  /* 11307832 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11307834 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11307836 jne 0x11307812 */
  if (!C.zf) goto L_11307812;
  /* 11307838 jmp 0x11307888 */
  goto L_11307888;
L_1130783a:;
  /* 1130783a push 0x1132dcf8 */
  push32((uint32_t)(0x1132dcf8u));
  /* 1130783f push 0x1132d8c4 */
  push32((uint32_t)(0x1132d8c4u));
  /* 11307844 push 0 */
  push32((uint32_t)(0x0u));
  /* 11307846 push 0 */
  push32((uint32_t)(0x0u));
  /* 11307848 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130784a push 0 */
  push32((uint32_t)(0x0u));
  /* 1130784c call 0x11305670 */
  push32(0x11307851u); f_11305670();
  /* 11307851 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307854 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307857 jne 0x1130785a */
  if (!C.zf) goto L_1130785a;
  /* 11307859 int3  */
  x86_unimpl("int3 @ 0x11307859");
L_1130785a:;
  /* 1130785a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1130785c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130785e jne 0x1130783a */
  if (!C.zf) goto L_1130783a;
  /* 11307860 jmp 0x11307888 */
  goto L_11307888;
L_11307862:;
  /* 11307862 push 0x1132dccc */
  push32((uint32_t)(0x1132dcccu));
  /* 11307867 push 0x1132d8c4 */
  push32((uint32_t)(0x1132d8c4u));
  /* 1130786c push 0 */
  push32((uint32_t)(0x0u));
  /* 1130786e push 0 */
  push32((uint32_t)(0x0u));
  /* 11307870 push 0 */
  push32((uint32_t)(0x0u));
  /* 11307872 push 0 */
  push32((uint32_t)(0x0u));
  /* 11307874 call 0x11305670 */
  push32(0x11307879u); f_11305670();
  /* 11307879 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130787c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130787f jne 0x11307882 */
  if (!C.zf) goto L_11307882;
  /* 11307881 int3  */
  x86_unimpl("int3 @ 0x11307881");
L_11307882:;
  /* 11307882 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11307884 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11307886 jne 0x11307862 */
  if (!C.zf) goto L_11307862;
L_11307888:;
  /* 11307888 push 9 */
  push32((uint32_t)(0x9u));
  /* 1130788a call 0x1130a050 */
  push32(0x1130788fu); f_1130a050();
  /* 1130788f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307892 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11307894 jmp 0x11307aa8 */
  goto L_11307aa8;
L_11307899:;
  /* 11307899 mov eax, dword ptr [0x113327d4] */
  EAX = (r32((uint32_t)(0x113327d4)));
  /* 1130789e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113078a1 jmp 0x113078ab */
  goto L_113078ab;
L_113078a3:;
  /* 113078a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113078a6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113078a8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_113078ab:;
  /* 113078ab cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113078af je 0x11307a9b */
  if (C.zf) goto L_11307a9b;
  /* 113078b5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 113078bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113078bf mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 113078c2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 113078c8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113078cb je 0x113078f0 */
  if (C.zf) goto L_113078f0;
  /* 113078cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113078d0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113078d4 je 0x113078f0 */
  if (C.zf) goto L_113078f0;
  /* 113078d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113078d9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 113078dc and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 113078e2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113078e5 je 0x113078f0 */
  if (C.zf) goto L_113078f0;
  /* 113078e7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113078ea cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113078ee jne 0x11307908 */
  if (!C.zf) goto L_11307908;
L_113078f0:;
  /* 113078f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113078f3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 113078f6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 113078fc mov edx, dword ptr [ecx*4 + 0x11330a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11330a94)));
  /* 11307903 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11307906 jmp 0x1130790f */
  goto L_1130790f;
L_11307908:;
  /* 11307908 mov dword ptr [ebp - 0x14], 0x1132dcc4 */
  w32((uint32_t)(EBP + -0x14), (0x1132dcc4u));
L_1130790f:;
  /* 1130790f push 4 */
  push32((uint32_t)(0x4u));
  /* 11307911 mov al, byte ptr [0x11330a90] */
  AL = (r8((uint32_t)(0x11330a90)));
  /* 11307916 push eax */
  push32((uint32_t)(EAX));
  /* 11307917 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130791a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130791d push ecx */
  push32((uint32_t)(ECX));
  /* 1130791e call 0x113076c0 */
  push32(0x11307923u); f_113076c0();
  /* 11307923 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307926 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11307928 jne 0x11307964 */
  if (!C.zf) goto L_11307964;
L_1130792a:;
  /* 1130792a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130792d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11307930 push edx */
  push32((uint32_t)(EDX));
  /* 11307931 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11307934 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11307937 push ecx */
  push32((uint32_t)(ECX));
  /* 11307938 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130793b push edx */
  push32((uint32_t)(EDX));
  /* 1130793c push 0x1132dba0 */
  push32((uint32_t)(0x1132dba0u));
  /* 11307941 push 0 */
  push32((uint32_t)(0x0u));
  /* 11307943 push 0 */
  push32((uint32_t)(0x0u));
  /* 11307945 push 0 */
  push32((uint32_t)(0x0u));
  /* 11307947 push 0 */
  push32((uint32_t)(0x0u));
  /* 11307949 call 0x11305670 */
  push32(0x1130794eu); f_11305670();
  /* 1130794e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307951 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307954 jne 0x11307957 */
  if (!C.zf) goto L_11307957;
  /* 11307956 int3  */
  x86_unimpl("int3 @ 0x11307956");
L_11307957:;
  /* 11307957 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11307959 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130795b jne 0x1130792a */
  if (!C.zf) goto L_1130792a;
  /* 1130795d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11307964:;
  /* 11307964 push 4 */
  push32((uint32_t)(0x4u));
  /* 11307966 mov cl, byte ptr [0x11330a90] */
  CL = (r8((uint32_t)(0x11330a90)));
  /* 1130796c push ecx */
  push32((uint32_t)(ECX));
  /* 1130796d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11307970 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11307973 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11307976 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 1130797a push edx */
  push32((uint32_t)(EDX));
  /* 1130797b call 0x113076c0 */
  push32(0x11307980u); f_113076c0();
  /* 11307980 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307983 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11307985 jne 0x113079c1 */
  if (!C.zf) goto L_113079c1;
L_11307987:;
  /* 11307987 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130798a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130798d push eax */
  push32((uint32_t)(EAX));
  /* 1130798e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11307991 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11307994 push edx */
  push32((uint32_t)(EDX));
  /* 11307995 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11307998 push eax */
  push32((uint32_t)(EAX));
  /* 11307999 push 0x1132db74 */
  push32((uint32_t)(0x1132db74u));
  /* 1130799e push 0 */
  push32((uint32_t)(0x0u));
  /* 113079a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 113079a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113079a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113079a6 call 0x11305670 */
  push32(0x113079abu); f_11305670();
  /* 113079ab add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113079ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113079b1 jne 0x113079b4 */
  if (!C.zf) goto L_113079b4;
  /* 113079b3 int3  */
  x86_unimpl("int3 @ 0x113079b3");
L_113079b4:;
  /* 113079b4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113079b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113079b8 jne 0x11307987 */
  if (!C.zf) goto L_11307987;
  /* 113079ba mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_113079c1:;
  /* 113079c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113079c4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113079c8 jne 0x11307a1a */
  if (!C.zf) goto L_11307a1a;
  /* 113079ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113079cd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 113079d0 push ecx */
  push32((uint32_t)(ECX));
  /* 113079d1 mov dl, byte ptr [0x11330a91] */
  DL = (r8((uint32_t)(0x11330a91)));
  /* 113079d7 push edx */
  push32((uint32_t)(EDX));
  /* 113079d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113079db add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113079de push eax */
  push32((uint32_t)(EAX));
  /* 113079df call 0x113076c0 */
  push32(0x113079e4u); f_113076c0();
  /* 113079e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113079e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113079e9 jne 0x11307a1a */
  if (!C.zf) goto L_11307a1a;
L_113079eb:;
  /* 113079eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113079ee add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113079f1 push ecx */
  push32((uint32_t)(ECX));
  /* 113079f2 push 0x1132dc98 */
  push32((uint32_t)(0x1132dc98u));
  /* 113079f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 113079f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 113079fb push 0 */
  push32((uint32_t)(0x0u));
  /* 113079fd push 0 */
  push32((uint32_t)(0x0u));
  /* 113079ff call 0x11305670 */
  push32(0x11307a04u); f_11305670();
  /* 11307a04 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307a07 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307a0a jne 0x11307a0d */
  if (!C.zf) goto L_11307a0d;
  /* 11307a0c int3  */
  x86_unimpl("int3 @ 0x11307a0c");
L_11307a0d:;
  /* 11307a0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11307a0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11307a11 jne 0x113079eb */
  if (!C.zf) goto L_113079eb;
  /* 11307a13 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11307a1a:;
  /* 11307a1a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307a1e jne 0x11307a96 */
  if (!C.zf) goto L_11307a96;
  /* 11307a20 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11307a23 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307a27 je 0x11307a5c */
  if (C.zf) goto L_11307a5c;
L_11307a29:;
  /* 11307a29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11307a2c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11307a2f push edx */
  push32((uint32_t)(EDX));
  /* 11307a30 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11307a33 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11307a36 push ecx */
  push32((uint32_t)(ECX));
  /* 11307a37 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11307a3a push edx */
  push32((uint32_t)(EDX));
  /* 11307a3b push 0x1132dc78 */
  push32((uint32_t)(0x1132dc78u));
  /* 11307a40 push 0 */
  push32((uint32_t)(0x0u));
  /* 11307a42 push 0 */
  push32((uint32_t)(0x0u));
  /* 11307a44 push 0 */
  push32((uint32_t)(0x0u));
  /* 11307a46 push 0 */
  push32((uint32_t)(0x0u));
  /* 11307a48 call 0x11305670 */
  push32(0x11307a4du); f_11305670();
  /* 11307a4d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307a50 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307a53 jne 0x11307a56 */
  if (!C.zf) goto L_11307a56;
  /* 11307a55 int3  */
  x86_unimpl("int3 @ 0x11307a55");
L_11307a56:;
  /* 11307a56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11307a58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11307a5a jne 0x11307a29 */
  if (!C.zf) goto L_11307a29;
L_11307a5c:;
  /* 11307a5c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11307a5f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11307a62 push edx */
  push32((uint32_t)(EDX));
  /* 11307a63 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11307a66 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11307a69 push eax */
  push32((uint32_t)(EAX));
  /* 11307a6a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11307a6d push ecx */
  push32((uint32_t)(ECX));
  /* 11307a6e push 0x1132dc4c */
  push32((uint32_t)(0x1132dc4cu));
  /* 11307a73 push 0 */
  push32((uint32_t)(0x0u));
  /* 11307a75 push 0 */
  push32((uint32_t)(0x0u));
  /* 11307a77 push 0 */
  push32((uint32_t)(0x0u));
  /* 11307a79 push 0 */
  push32((uint32_t)(0x0u));
  /* 11307a7b call 0x11305670 */
  push32(0x11307a80u); f_11305670();
  /* 11307a80 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307a83 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307a86 jne 0x11307a89 */
  if (!C.zf) goto L_11307a89;
  /* 11307a88 int3  */
  x86_unimpl("int3 @ 0x11307a88");
L_11307a89:;
  /* 11307a89 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11307a8b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11307a8d jne 0x11307a5c */
  if (!C.zf) goto L_11307a5c;
  /* 11307a8f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11307a96:;
  /* 11307a96 jmp 0x113078a3 */
  goto L_113078a3;
L_11307a9b:;
  /* 11307a9b push 9 */
  push32((uint32_t)(0x9u));
  /* 11307a9d call 0x1130a050 */
  push32(0x11307aa2u); f_1130a050();
  /* 11307aa2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307aa5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11307aa8:;
  /* 11307aa8 pop edi */
  EDI = (pop32());
  /* 11307aa9 pop esi */
  ESI = (pop32());
  /* 11307aaa pop ebx */
  EBX = (pop32());
  /* 11307aab mov esp, ebp */
  ESP = (EBP);
  /* 11307aad pop ebp */
  EBP = (pop32());
  /* 11307aae ret  */
  ESPCHK(0x11307750u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ac0 @ 0x11307ac0 (34 bytes, 13 insns) */
void f_11307ac0(void) {
  FTRACE(0x11307ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11307ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 11307ac1 mov ebp, esp */
  EBP = (ESP);
  /* 11307ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 11307ac4 mov eax, dword ptr [0x11330a84] */
  EAX = (r32((uint32_t)(0x11330a84)));
  /* 11307ac9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11307acc cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307ad0 je 0x11307adb */
  if (C.zf) goto L_11307adb;
  /* 11307ad2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11307ad5 mov dword ptr [0x11330a84], ecx */
  w32((uint32_t)(0x11330a84), (ECX));
L_11307adb:;
  /* 11307adb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307ade mov esp, ebp */
  ESP = (EBP);
  /* 11307ae0 pop ebp */
  EBP = (pop32());
  /* 11307ae1 ret  */
  ESPCHK(0x11307ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007af0 @ 0x11307af0 (103 bytes, 38 insns) */
void f_11307af0(void) {
  FTRACE(0x11307af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11307af0 push ebp */
  push32((uint32_t)(EBP));
  /* 11307af1 mov ebp, esp */
  EBP = (ESP);
  /* 11307af3 push ecx */
  push32((uint32_t)(ECX));
  /* 11307af4 mov eax, dword ptr [0x11330a84] */
  EAX = (r32((uint32_t)(0x11330a84)));
  /* 11307af9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11307afc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11307afe jne 0x11307b02 */
  if (!C.zf) goto L_11307b02;
  /* 11307b00 jmp 0x11307b53 */
  goto L_11307b53;
L_11307b02:;
  /* 11307b02 push 9 */
  push32((uint32_t)(0x9u));
  /* 11307b04 call 0x11309fb0 */
  push32(0x11307b09u); f_11309fb0();
  /* 11307b09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307b0c mov ecx, dword ptr [0x113327d4] */
  ECX = (r32((uint32_t)(0x113327d4)));
  /* 11307b12 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11307b15 jmp 0x11307b1f */
  goto L_11307b1f;
L_11307b17:;
  /* 11307b17 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307b1a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11307b1c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11307b1f:;
  /* 11307b1f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307b23 je 0x11307b49 */
  if (C.zf) goto L_11307b49;
  /* 11307b25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307b28 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11307b2b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11307b31 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307b34 jne 0x11307b47 */
  if (!C.zf) goto L_11307b47;
  /* 11307b36 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11307b39 push eax */
  push32((uint32_t)(EAX));
  /* 11307b3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307b3d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11307b40 push ecx */
  push32((uint32_t)(ECX));
  /* 11307b41 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x11307b44u);
  /* 11307b44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11307b47:;
  /* 11307b47 jmp 0x11307b17 */
  goto L_11307b17;
L_11307b49:;
  /* 11307b49 push 9 */
  push32((uint32_t)(0x9u));
  /* 11307b4b call 0x1130a050 */
  push32(0x11307b50u); f_1130a050();
  /* 11307b50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11307b53:;
  /* 11307b53 mov esp, ebp */
  ESP = (EBP);
  /* 11307b55 pop ebp */
  EBP = (pop32());
  /* 11307b56 ret  */
  ESPCHK(0x11307af0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x11307b60 (75 bytes, 28 insns) */
void f_11307b60(void) {
  FTRACE(0x11307b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11307b60 push ebp */
  push32((uint32_t)(EBP));
  /* 11307b61 mov ebp, esp */
  EBP = (ESP);
  /* 11307b63 push ecx */
  push32((uint32_t)(ECX));
  /* 11307b64 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307b68 je 0x11307b9d */
  if (C.zf) goto L_11307b9d;
  /* 11307b6a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11307b6d push eax */
  push32((uint32_t)(EAX));
  /* 11307b6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11307b71 push ecx */
  push32((uint32_t)(ECX));
  /* 11307b72 call dword ptr [0x11335394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335394))), 0x11307b78u);
  /* 11307b78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11307b7a jne 0x11307b9d */
  if (!C.zf) goto L_11307b9d;
  /* 11307b7c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307b80 je 0x11307b94 */
  if (C.zf) goto L_11307b94;
  /* 11307b82 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11307b85 push edx */
  push32((uint32_t)(EDX));
  /* 11307b86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11307b89 push eax */
  push32((uint32_t)(EAX));
  /* 11307b8a call dword ptr [0x1133538c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133538c))), 0x11307b90u);
  /* 11307b90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11307b92 jne 0x11307b9d */
  if (!C.zf) goto L_11307b9d;
L_11307b94:;
  /* 11307b94 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11307b9b jmp 0x11307ba4 */
  goto L_11307ba4;
L_11307b9d:;
  /* 11307b9d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11307ba4:;
  /* 11307ba4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307ba7 mov esp, ebp */
  ESP = (EBP);
  /* 11307ba9 pop ebp */
  EBP = (pop32());
  /* 11307baa ret  */
  ESPCHK(0x11307b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007bb0 @ 0x11307bb0 (134 bytes, 50 insns) */
void f_11307bb0(void) {
  FTRACE(0x11307bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11307bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11307bb1 mov ebp, esp */
  EBP = (ESP);
  /* 11307bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11307bb4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307bb8 jne 0x11307bbe */
  if (!C.zf) goto L_11307bbe;
  /* 11307bba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11307bbc jmp 0x11307c32 */
  goto L_11307c32;
L_11307bbe:;
  /* 11307bbe push 1 */
  push32((uint32_t)(0x1u));
  /* 11307bc0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11307bc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11307bc5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11307bc8 push eax */
  push32((uint32_t)(EAX));
  /* 11307bc9 call 0x11307b60 */
  push32(0x11307bceu); f_11307b60();
  /* 11307bce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307bd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11307bd3 jne 0x11307bd9 */
  if (!C.zf) goto L_11307bd9;
  /* 11307bd5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11307bd7 jmp 0x11307c32 */
  goto L_11307c32;
L_11307bd9:;
  /* 11307bd9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11307bdc sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11307bdf push ecx */
  push32((uint32_t)(ECX));
  /* 11307be0 call 0x1130a8b0 */
  push32(0x11307be5u); f_1130a8b0();
  /* 11307be5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307be8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11307beb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307bef je 0x11307c06 */
  if (C.zf) goto L_11307c06;
  /* 11307bf1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11307bf4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11307bf7 push edx */
  push32((uint32_t)(EDX));
  /* 11307bf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307bfb push eax */
  push32((uint32_t)(EAX));
  /* 11307bfc call 0x1130a910 */
  push32(0x11307c01u); f_1130a910();
  /* 11307c01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307c04 jmp 0x11307c32 */
  goto L_11307c32;
L_11307c06:;
  /* 11307c06 mov ecx, dword ptr [0x11332788] */
  ECX = (r32((uint32_t)(0x11332788)));
  /* 11307c0c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11307c12 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11307c14 je 0x11307c1d */
  if (C.zf) goto L_11307c1d;
  /* 11307c16 mov eax, 1 */
  EAX = (0x1u);
  /* 11307c1b jmp 0x11307c32 */
  goto L_11307c32;
L_11307c1d:;
  /* 11307c1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11307c20 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11307c23 push edx */
  push32((uint32_t)(EDX));
  /* 11307c24 push 0 */
  push32((uint32_t)(0x0u));
  /* 11307c26 mov eax, dword ptr [0x1133412c] */
  EAX = (r32((uint32_t)(0x1133412c)));
  /* 11307c2b push eax */
  push32((uint32_t)(EAX));
  /* 11307c2c call dword ptr [0x11335384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335384))), 0x11307c32u);
L_11307c32:;
  /* 11307c32 mov esp, ebp */
  ESP = (EBP);
  /* 11307c34 pop ebp */
  EBP = (pop32());
  /* 11307c35 ret  */
  ESPCHK(0x11307bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c40 @ 0x11307c40 (227 bytes, 80 insns) */
void f_11307c40(void) {
  FTRACE(0x11307c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11307c40 push ebp */
  push32((uint32_t)(EBP));
  /* 11307c41 mov ebp, esp */
  EBP = (ESP);
  /* 11307c43 push ecx */
  push32((uint32_t)(ECX));
  /* 11307c44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11307c47 push eax */
  push32((uint32_t)(EAX));
  /* 11307c48 call 0x11307bb0 */
  push32(0x11307c4du); f_11307bb0();
  /* 11307c4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307c50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11307c52 jne 0x11307c5b */
  if (!C.zf) goto L_11307c5b;
  /* 11307c54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11307c56 jmp 0x11307d1f */
  goto L_11307d1f;
L_11307c5b:;
  /* 11307c5b push 9 */
  push32((uint32_t)(0x9u));
  /* 11307c5d call 0x11309fb0 */
  push32(0x11307c62u); f_11309fb0();
  /* 11307c62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307c65 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11307c68 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11307c6b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11307c6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307c71 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11307c74 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11307c79 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307c7c je 0x11307ca0 */
  if (C.zf) goto L_11307ca0;
  /* 11307c7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307c81 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307c85 je 0x11307ca0 */
  if (C.zf) goto L_11307ca0;
  /* 11307c87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307c8a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11307c8d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11307c92 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307c95 je 0x11307ca0 */
  if (C.zf) goto L_11307ca0;
  /* 11307c97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307c9a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307c9e jne 0x11307d13 */
  if (!C.zf) goto L_11307d13;
L_11307ca0:;
  /* 11307ca0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11307ca2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11307ca5 push edx */
  push32((uint32_t)(EDX));
  /* 11307ca6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11307ca9 push eax */
  push32((uint32_t)(EAX));
  /* 11307caa call 0x11307b60 */
  push32(0x11307cafu); f_11307b60();
  /* 11307caf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307cb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11307cb4 je 0x11307d13 */
  if (C.zf) goto L_11307d13;
  /* 11307cb6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307cb9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11307cbc cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307cbf jne 0x11307d13 */
  if (!C.zf) goto L_11307d13;
  /* 11307cc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307cc4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11307cc7 cmp ecx, dword ptr [0x11330a88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11330a88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307ccd jg 0x11307d13 */
  if ((!C.zf&&C.sf==C.of)) goto L_11307d13;
  /* 11307ccf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307cd3 je 0x11307ce0 */
  if (C.zf) goto L_11307ce0;
  /* 11307cd5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11307cd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307cdb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11307cde mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11307ce0:;
  /* 11307ce0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307ce4 je 0x11307cf1 */
  if (C.zf) goto L_11307cf1;
  /* 11307ce6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11307ce9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307cec mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11307cef mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11307cf1:;
  /* 11307cf1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307cf5 je 0x11307d02 */
  if (C.zf) goto L_11307d02;
  /* 11307cf7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11307cfa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307cfd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11307d00 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11307d02:;
  /* 11307d02 push 9 */
  push32((uint32_t)(0x9u));
  /* 11307d04 call 0x1130a050 */
  push32(0x11307d09u); f_1130a050();
  /* 11307d09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307d0c mov eax, 1 */
  EAX = (0x1u);
  /* 11307d11 jmp 0x11307d1f */
  goto L_11307d1f;
L_11307d13:;
  /* 11307d13 push 9 */
  push32((uint32_t)(0x9u));
  /* 11307d15 call 0x1130a050 */
  push32(0x11307d1au); f_1130a050();
  /* 11307d1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307d1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11307d1f:;
  /* 11307d1f mov esp, ebp */
  ESP = (EBP);
  /* 11307d21 pop ebp */
  EBP = (pop32());
  /* 11307d22 ret  */
  ESPCHK(0x11307c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d30 @ 0x11307d30 (28 bytes, 11 insns) */
void f_11307d30(void) {
  FTRACE(0x11307d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11307d30 push ebp */
  push32((uint32_t)(EBP));
  /* 11307d31 mov ebp, esp */
  EBP = (ESP);
  /* 11307d33 push ecx */
  push32((uint32_t)(ECX));
  /* 11307d34 mov eax, dword ptr [0x11334138] */
  EAX = (r32((uint32_t)(0x11334138)));
  /* 11307d39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11307d3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11307d3f mov dword ptr [0x11334138], ecx */
  w32((uint32_t)(0x11334138), (ECX));
  /* 11307d45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307d48 mov esp, ebp */
  ESP = (EBP);
  /* 11307d4a pop ebp */
  EBP = (pop32());
  /* 11307d4b ret  */
  ESPCHK(0x11307d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d50 @ 0x11307d50 (362 bytes, 116 insns) */
void f_11307d50(void) {
  FTRACE(0x11307d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11307d50 push ebp */
  push32((uint32_t)(EBP));
  /* 11307d51 mov ebp, esp */
  EBP = (ESP);
  /* 11307d53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11307d56 push ebx */
  push32((uint32_t)(EBX));
  /* 11307d57 push esi */
  push32((uint32_t)(ESI));
  /* 11307d58 push edi */
  push32((uint32_t)(EDI));
  /* 11307d59 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307d5d jne 0x11307d8a */
  if (!C.zf) goto L_11307d8a;
L_11307d5f:;
  /* 11307d5f push 0x1132ddac */
  push32((uint32_t)(0x1132ddacu));
  /* 11307d64 push 0x1132d8c4 */
  push32((uint32_t)(0x1132d8c4u));
  /* 11307d69 push 0 */
  push32((uint32_t)(0x0u));
  /* 11307d6b push 0 */
  push32((uint32_t)(0x0u));
  /* 11307d6d push 0 */
  push32((uint32_t)(0x0u));
  /* 11307d6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11307d71 call 0x11305670 */
  push32(0x11307d76u); f_11305670();
  /* 11307d76 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307d79 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307d7c jne 0x11307d7f */
  if (!C.zf) goto L_11307d7f;
  /* 11307d7e int3  */
  x86_unimpl("int3 @ 0x11307d7e");
L_11307d7f:;
  /* 11307d7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11307d81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11307d83 jne 0x11307d5f */
  if (!C.zf) goto L_11307d5f;
  /* 11307d85 jmp 0x11307eb3 */
  goto L_11307eb3;
L_11307d8a:;
  /* 11307d8a push 9 */
  push32((uint32_t)(0x9u));
  /* 11307d8c call 0x11309fb0 */
  push32(0x11307d91u); f_11309fb0();
  /* 11307d91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307d94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11307d97 mov edx, dword ptr [0x113327d4] */
  EDX = (r32((uint32_t)(0x113327d4)));
  /* 11307d9d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11307d9f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11307da6 jmp 0x11307db1 */
  goto L_11307db1;
L_11307da8:;
  /* 11307da8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307dab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11307dae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11307db1:;
  /* 11307db1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307db5 jge 0x11307dd5 */
  if ((C.sf==C.of)) goto L_11307dd5;
  /* 11307db7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307dba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11307dbd mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 11307dc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307dc8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11307dcb mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 11307dd3 jmp 0x11307da8 */
  goto L_11307da8;
L_11307dd5:;
  /* 11307dd5 mov edx, dword ptr [0x113327d4] */
  EDX = (r32((uint32_t)(0x113327d4)));
  /* 11307ddb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11307dde jmp 0x11307de8 */
  goto L_11307de8;
L_11307de0:;
  /* 11307de0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11307de3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11307de5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11307de8:;
  /* 11307de8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307dec je 0x11307e91 */
  if (C.zf) goto L_11307e91;
  /* 11307df2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11307df5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11307df8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11307dfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11307dff jl 0x11307e67 */
  if ((C.sf!=C.of)) goto L_11307e67;
  /* 11307e01 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11307e04 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11307e07 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11307e0d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307e10 jge 0x11307e67 */
  if ((C.sf==C.of)) goto L_11307e67;
  /* 11307e12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11307e15 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11307e18 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11307e1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11307e21 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 11307e25 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11307e28 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11307e2b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11307e2e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11307e34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11307e37 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 11307e3b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11307e3e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11307e41 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11307e46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11307e49 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 11307e4d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11307e50 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11307e53 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11307e56 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11307e59 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11307e5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11307e61 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11307e65 jmp 0x11307e8c */
  goto L_11307e8c;
L_11307e67:;
  /* 11307e67 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11307e6a push edx */
  push32((uint32_t)(EDX));
  /* 11307e6b push 0x1132dd88 */
  push32((uint32_t)(0x1132dd88u));
  /* 11307e70 push 0 */
  push32((uint32_t)(0x0u));
  /* 11307e72 push 0 */
  push32((uint32_t)(0x0u));
  /* 11307e74 push 0 */
  push32((uint32_t)(0x0u));
  /* 11307e76 push 0 */
  push32((uint32_t)(0x0u));
  /* 11307e78 call 0x11305670 */
  push32(0x11307e7du); f_11305670();
  /* 11307e7d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307e80 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307e83 jne 0x11307e86 */
  if (!C.zf) goto L_11307e86;
  /* 11307e85 int3  */
  x86_unimpl("int3 @ 0x11307e85");
L_11307e86:;
  /* 11307e86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11307e88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11307e8a jne 0x11307e67 */
  if (!C.zf) goto L_11307e67;
L_11307e8c:;
  /* 11307e8c jmp 0x11307de0 */
  goto L_11307de0;
L_11307e91:;
  /* 11307e91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11307e94 mov edx, dword ptr [0x113327dc] */
  EDX = (r32((uint32_t)(0x113327dc)));
  /* 11307e9a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 11307e9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11307ea0 mov ecx, dword ptr [0x113327d0] */
  ECX = (r32((uint32_t)(0x113327d0)));
  /* 11307ea6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 11307ea9 push 9 */
  push32((uint32_t)(0x9u));
  /* 11307eab call 0x1130a050 */
  push32(0x11307eb0u); f_1130a050();
  /* 11307eb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11307eb3:;
  /* 11307eb3 pop edi */
  EDI = (pop32());
  /* 11307eb4 pop esi */
  ESI = (pop32());
  /* 11307eb5 pop ebx */
  EBX = (pop32());
  /* 11307eb6 mov esp, ebp */
  ESP = (EBP);
  /* 11307eb8 pop ebp */
  EBP = (pop32());
  /* 11307eb9 ret  */
  ESPCHK(0x11307d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ec0 @ 0x11307ec0 (291 bytes, 95 insns) */
void f_11307ec0(void) {
  FTRACE(0x11307ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11307ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11307ec1 mov ebp, esp */
  EBP = (ESP);
  /* 11307ec3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11307ec6 push ebx */
  push32((uint32_t)(EBX));
  /* 11307ec7 push esi */
  push32((uint32_t)(ESI));
  /* 11307ec8 push edi */
  push32((uint32_t)(EDI));
  /* 11307ec9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11307ed0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307ed4 je 0x11307ee2 */
  if (C.zf) goto L_11307ee2;
  /* 11307ed6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307eda je 0x11307ee2 */
  if (C.zf) goto L_11307ee2;
  /* 11307edc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307ee0 jne 0x11307f10 */
  if (!C.zf) goto L_11307f10;
L_11307ee2:;
  /* 11307ee2 push 0x1132ddd4 */
  push32((uint32_t)(0x1132ddd4u));
  /* 11307ee7 push 0x1132d8c4 */
  push32((uint32_t)(0x1132d8c4u));
  /* 11307eec push 0 */
  push32((uint32_t)(0x0u));
  /* 11307eee push 0 */
  push32((uint32_t)(0x0u));
  /* 11307ef0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11307ef2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11307ef4 call 0x11305670 */
  push32(0x11307ef9u); f_11305670();
  /* 11307ef9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11307efc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307eff jne 0x11307f02 */
  if (!C.zf) goto L_11307f02;
  /* 11307f01 int3  */
  x86_unimpl("int3 @ 0x11307f01");
L_11307f02:;
  /* 11307f02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11307f04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11307f06 jne 0x11307ee2 */
  if (!C.zf) goto L_11307ee2;
  /* 11307f08 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11307f0b jmp 0x11307fdc */
  goto L_11307fdc;
L_11307f10:;
  /* 11307f10 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11307f17 jmp 0x11307f22 */
  goto L_11307f22;
L_11307f19:;
  /* 11307f19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307f1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11307f1f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11307f22:;
  /* 11307f22 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307f26 jge 0x11307fac */
  if ((C.sf==C.of)) goto L_11307fac;
  /* 11307f2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307f2f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11307f32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307f35 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11307f38 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 11307f3c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11307f40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307f43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11307f46 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11307f4a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307f4d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11307f50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307f53 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11307f56 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 11307f5a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11307f5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307f61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11307f64 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 11307f68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307f6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11307f6e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307f73 jne 0x11307f82 */
  if (!C.zf) goto L_11307f82;
  /* 11307f75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11307f78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11307f7b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307f80 je 0x11307fa7 */
  if (C.zf) goto L_11307fa7;
L_11307f82:;
  /* 11307f82 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307f86 je 0x11307fa7 */
  if (C.zf) goto L_11307fa7;
  /* 11307f88 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307f8c jne 0x11307fa0 */
  if (!C.zf) goto L_11307fa0;
  /* 11307f8e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11307f92 jne 0x11307fa7 */
  if (!C.zf) goto L_11307fa7;
  /* 11307f94 mov eax, dword ptr [0x11330a84] */
  EAX = (r32((uint32_t)(0x11330a84)));
  /* 11307f99 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11307f9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11307f9e je 0x11307fa7 */
  if (C.zf) goto L_11307fa7;
L_11307fa0:;
  /* 11307fa0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11307fa7:;
  /* 11307fa7 jmp 0x11307f19 */
  goto L_11307f19;
L_11307fac:;
  /* 11307fac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11307faf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11307fb2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11307fb5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11307fb8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11307fbb mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 11307fbe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11307fc1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11307fc4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 11307fc7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11307fca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11307fcd mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 11307fd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11307fd3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11307fd9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11307fdc:;
  /* 11307fdc pop edi */
  EDI = (pop32());
  /* 11307fdd pop esi */
  ESI = (pop32());
  /* 11307fde pop ebx */
  EBX = (pop32());
  /* 11307fdf mov esp, ebp */
  ESP = (EBP);
  /* 11307fe1 pop ebp */
  EBP = (pop32());
  /* 11307fe2 ret  */
  ESPCHK(0x11307ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ff0 @ 0x11307ff0 (697 bytes, 253 insns) */
void f_11307ff0(void) {
  FTRACE(0x11307ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11307ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 11307ff1 mov ebp, esp */
  EBP = (ESP);
  /* 11307ff3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11307ff6 push ebx */
  push32((uint32_t)(EBX));
  /* 11307ff7 push esi */
  push32((uint32_t)(ESI));
  /* 11307ff8 push edi */
  push32((uint32_t)(EDI));
  /* 11307ff9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11308000 push 9 */
  push32((uint32_t)(0x9u));
  /* 11308002 call 0x11309fb0 */
  push32(0x11308007u); f_11309fb0();
  /* 11308007 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1130800a:;
  /* 1130800a push 0x1132decc */
  push32((uint32_t)(0x1132deccu));
  /* 1130800f push 0x1132d8c4 */
  push32((uint32_t)(0x1132d8c4u));
  /* 11308014 push 0 */
  push32((uint32_t)(0x0u));
  /* 11308016 push 0 */
  push32((uint32_t)(0x0u));
  /* 11308018 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130801a push 0 */
  push32((uint32_t)(0x0u));
  /* 1130801c call 0x11305670 */
  push32(0x11308021u); f_11305670();
  /* 11308021 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11308024 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308027 jne 0x1130802a */
  if (!C.zf) goto L_1130802a;
  /* 11308029 int3  */
  x86_unimpl("int3 @ 0x11308029");
L_1130802a:;
  /* 1130802a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130802c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130802e jne 0x1130800a */
  if (!C.zf) goto L_1130800a;
  /* 11308030 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308034 je 0x1130803e */
  if (C.zf) goto L_1130803e;
  /* 11308036 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11308039 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1130803b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1130803e:;
  /* 1130803e mov eax, dword ptr [0x113327d4] */
  EAX = (r32((uint32_t)(0x113327d4)));
  /* 11308043 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11308046 jmp 0x11308050 */
  goto L_11308050;
L_11308048:;
  /* 11308048 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130804b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1130804d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11308050:;
  /* 11308050 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308054 je 0x11308272 */
  if (C.zf) goto L_11308272;
  /* 1130805a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130805d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308060 je 0x11308272 */
  if (C.zf) goto L_11308272;
  /* 11308066 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308069 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1130806c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11308072 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308075 je 0x113080a4 */
  if (C.zf) goto L_113080a4;
  /* 11308077 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130807a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1130807d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11308083 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11308085 je 0x113080a4 */
  if (C.zf) goto L_113080a4;
  /* 11308087 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130808a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1130808d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11308092 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308095 jne 0x113080a9 */
  if (!C.zf) goto L_113080a9;
  /* 11308097 mov ecx, dword ptr [0x11330a84] */
  ECX = (r32((uint32_t)(0x11330a84)));
  /* 1130809d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 113080a0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113080a2 jne 0x113080a9 */
  if (!C.zf) goto L_113080a9;
L_113080a4:;
  /* 113080a4 jmp 0x1130826d */
  goto L_1130826d;
L_113080a9:;
  /* 113080a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113080ac cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113080b0 je 0x11308122 */
  if (C.zf) goto L_11308122;
  /* 113080b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113080b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 113080b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113080b9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 113080bc push ecx */
  push32((uint32_t)(ECX));
  /* 113080bd call 0x11307b60 */
  push32(0x113080c2u); f_11307b60();
  /* 113080c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113080c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113080c7 jne 0x113080f3 */
  if (!C.zf) goto L_113080f3;
L_113080c9:;
  /* 113080c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113080cc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 113080cf push eax */
  push32((uint32_t)(EAX));
  /* 113080d0 push 0x1132deb8 */
  push32((uint32_t)(0x1132deb8u));
  /* 113080d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113080d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 113080d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 113080db push 0 */
  push32((uint32_t)(0x0u));
  /* 113080dd call 0x11305670 */
  push32(0x113080e2u); f_11305670();
  /* 113080e2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113080e5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113080e8 jne 0x113080eb */
  if (!C.zf) goto L_113080eb;
  /* 113080ea int3  */
  x86_unimpl("int3 @ 0x113080ea");
L_113080eb:;
  /* 113080eb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113080ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113080ef jne 0x113080c9 */
  if (!C.zf) goto L_113080c9;
  /* 113080f1 jmp 0x11308122 */
  goto L_11308122;
L_113080f3:;
  /* 113080f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113080f6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 113080f9 push eax */
  push32((uint32_t)(EAX));
  /* 113080fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113080fd mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11308100 push edx */
  push32((uint32_t)(EDX));
  /* 11308101 push 0x1132deac */
  push32((uint32_t)(0x1132deacu));
  /* 11308106 push 0 */
  push32((uint32_t)(0x0u));
  /* 11308108 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130810a push 0 */
  push32((uint32_t)(0x0u));
  /* 1130810c push 0 */
  push32((uint32_t)(0x0u));
  /* 1130810e call 0x11305670 */
  push32(0x11308113u); f_11305670();
  /* 11308113 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11308116 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308119 jne 0x1130811c */
  if (!C.zf) goto L_1130811c;
  /* 1130811b int3  */
  x86_unimpl("int3 @ 0x1130811b");
L_1130811c:;
  /* 1130811c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130811e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11308120 jne 0x113080f3 */
  if (!C.zf) goto L_113080f3;
L_11308122:;
  /* 11308122 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308125 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11308128 push edx */
  push32((uint32_t)(EDX));
  /* 11308129 push 0x1132dea4 */
  push32((uint32_t)(0x1132dea4u));
  /* 1130812e push 0 */
  push32((uint32_t)(0x0u));
  /* 11308130 push 0 */
  push32((uint32_t)(0x0u));
  /* 11308132 push 0 */
  push32((uint32_t)(0x0u));
  /* 11308134 push 0 */
  push32((uint32_t)(0x0u));
  /* 11308136 call 0x11305670 */
  push32(0x1130813bu); f_11305670();
  /* 1130813b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130813e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308141 jne 0x11308144 */
  if (!C.zf) goto L_11308144;
  /* 11308143 int3  */
  x86_unimpl("int3 @ 0x11308143");
L_11308144:;
  /* 11308144 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11308146 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11308148 jne 0x11308122 */
  if (!C.zf) goto L_11308122;
  /* 1130814a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130814d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11308150 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11308156 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308159 jne 0x113081cc */
  if (!C.zf) goto L_113081cc;
L_1130815b:;
  /* 1130815b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130815e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11308161 push ecx */
  push32((uint32_t)(ECX));
  /* 11308162 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308165 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11308168 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1130816b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11308170 push eax */
  push32((uint32_t)(EAX));
  /* 11308171 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308174 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11308177 push ecx */
  push32((uint32_t)(ECX));
  /* 11308178 push 0x1132de70 */
  push32((uint32_t)(0x1132de70u));
  /* 1130817d push 0 */
  push32((uint32_t)(0x0u));
  /* 1130817f push 0 */
  push32((uint32_t)(0x0u));
  /* 11308181 push 0 */
  push32((uint32_t)(0x0u));
  /* 11308183 push 0 */
  push32((uint32_t)(0x0u));
  /* 11308185 call 0x11305670 */
  push32(0x1130818au); f_11305670();
  /* 1130818a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130818d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308190 jne 0x11308193 */
  if (!C.zf) goto L_11308193;
  /* 11308192 int3  */
  x86_unimpl("int3 @ 0x11308192");
L_11308193:;
  /* 11308193 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11308195 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11308197 jne 0x1130815b */
  if (!C.zf) goto L_1130815b;
  /* 11308199 cmp dword ptr [0x11334138], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11334138))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113081a0 je 0x113081bb */
  if (C.zf) goto L_113081bb;
  /* 113081a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113081a5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 113081a8 push ecx */
  push32((uint32_t)(ECX));
  /* 113081a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113081ac add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113081af push edx */
  push32((uint32_t)(EDX));
  /* 113081b0 call dword ptr [0x11334138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11334138))), 0x113081b6u);
  /* 113081b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113081b9 jmp 0x113081c7 */
  goto L_113081c7;
L_113081bb:;
  /* 113081bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113081be push eax */
  push32((uint32_t)(EAX));
  /* 113081bf call 0x113082b0 */
  push32(0x113081c4u); f_113082b0();
  /* 113081c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113081c7:;
  /* 113081c7 jmp 0x1130826d */
  goto L_1130826d;
L_113081cc:;
  /* 113081cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113081cf cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113081d3 jne 0x11308212 */
  if (!C.zf) goto L_11308212;
L_113081d5:;
  /* 113081d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113081d8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 113081db push eax */
  push32((uint32_t)(EAX));
  /* 113081dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113081df add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113081e2 push ecx */
  push32((uint32_t)(ECX));
  /* 113081e3 push 0x1132de48 */
  push32((uint32_t)(0x1132de48u));
  /* 113081e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 113081ea push 0 */
  push32((uint32_t)(0x0u));
  /* 113081ec push 0 */
  push32((uint32_t)(0x0u));
  /* 113081ee push 0 */
  push32((uint32_t)(0x0u));
  /* 113081f0 call 0x11305670 */
  push32(0x113081f5u); f_11305670();
  /* 113081f5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113081f8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113081fb jne 0x113081fe */
  if (!C.zf) goto L_113081fe;
  /* 113081fd int3  */
  x86_unimpl("int3 @ 0x113081fd");
L_113081fe:;
  /* 113081fe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11308200 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11308202 jne 0x113081d5 */
  if (!C.zf) goto L_113081d5;
  /* 11308204 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308207 push eax */
  push32((uint32_t)(EAX));
  /* 11308208 call 0x113082b0 */
  push32(0x1130820du); f_113082b0();
  /* 1130820d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11308210 jmp 0x1130826d */
  goto L_1130826d;
L_11308212:;
  /* 11308212 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308215 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11308218 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1130821e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308221 jne 0x1130826d */
  if (!C.zf) goto L_1130826d;
L_11308223:;
  /* 11308223 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308226 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11308229 push ecx */
  push32((uint32_t)(ECX));
  /* 1130822a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130822d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11308230 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11308233 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11308238 push eax */
  push32((uint32_t)(EAX));
  /* 11308239 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130823c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130823f push ecx */
  push32((uint32_t)(ECX));
  /* 11308240 push 0x1132de14 */
  push32((uint32_t)(0x1132de14u));
  /* 11308245 push 0 */
  push32((uint32_t)(0x0u));
  /* 11308247 push 0 */
  push32((uint32_t)(0x0u));
  /* 11308249 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130824b push 0 */
  push32((uint32_t)(0x0u));
  /* 1130824d call 0x11305670 */
  push32(0x11308252u); f_11305670();
  /* 11308252 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11308255 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308258 jne 0x1130825b */
  if (!C.zf) goto L_1130825b;
  /* 1130825a int3  */
  x86_unimpl("int3 @ 0x1130825a");
L_1130825b:;
  /* 1130825b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1130825d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130825f jne 0x11308223 */
  if (!C.zf) goto L_11308223;
  /* 11308261 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308264 push eax */
  push32((uint32_t)(EAX));
  /* 11308265 call 0x113082b0 */
  push32(0x1130826au); f_113082b0();
  /* 1130826a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1130826d:;
  /* 1130826d jmp 0x11308048 */
  goto L_11308048;
L_11308272:;
  /* 11308272 push 9 */
  push32((uint32_t)(0x9u));
  /* 11308274 call 0x1130a050 */
  push32(0x11308279u); f_1130a050();
  /* 11308279 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1130827c:;
  /* 1130827c push 0x1132ddfc */
  push32((uint32_t)(0x1132ddfcu));
  /* 11308281 push 0x1132d8c4 */
  push32((uint32_t)(0x1132d8c4u));
  /* 11308286 push 0 */
  push32((uint32_t)(0x0u));
  /* 11308288 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130828a push 0 */
  push32((uint32_t)(0x0u));
  /* 1130828c push 0 */
  push32((uint32_t)(0x0u));
  /* 1130828e call 0x11305670 */
  push32(0x11308293u); f_11305670();
  /* 11308293 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11308296 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308299 jne 0x1130829c */
  if (!C.zf) goto L_1130829c;
  /* 1130829b int3  */
  x86_unimpl("int3 @ 0x1130829b");
L_1130829c:;
  /* 1130829c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1130829e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113082a0 jne 0x1130827c */
  if (!C.zf) goto L_1130827c;
  /* 113082a2 pop edi */
  EDI = (pop32());
  /* 113082a3 pop esi */
  ESI = (pop32());
  /* 113082a4 pop ebx */
  EBX = (pop32());
  /* 113082a5 mov esp, ebp */
  ESP = (EBP);
  /* 113082a7 pop ebp */
  EBP = (pop32());
  /* 113082a8 ret  */
  ESPCHK(0x11307ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_100082b0 @ 0x113082b0 (276 bytes, 89 insns) */
void f_113082b0(void) {
  FTRACE(0x113082b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113082b0 push ebp */
  push32((uint32_t)(EBP));
  /* 113082b1 mov ebp, esp */
  EBP = (ESP);
  /* 113082b3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113082b6 push ebx */
  push32((uint32_t)(EBX));
  /* 113082b7 push esi */
  push32((uint32_t)(ESI));
  /* 113082b8 push edi */
  push32((uint32_t)(EDI));
  /* 113082b9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 113082c0 jmp 0x113082cb */
  goto L_113082cb;
L_113082c2:;
  /* 113082c2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 113082c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113082c8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_113082cb:;
  /* 113082cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113082ce cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113082d2 jge 0x113082df */
  if ((C.sf==C.of)) goto L_113082df;
  /* 113082d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113082d7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 113082da mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 113082dd jmp 0x113082e6 */
  goto L_113082e6;
L_113082df:;
  /* 113082df mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_113082e6:;
  /* 113082e6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 113082e9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113082ec jge 0x1130838c */
  if ((C.sf==C.of)) goto L_1130838c;
  /* 113082f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113082f5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113082f8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 113082fb mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 113082fe cmp dword ptr [0x11330ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11330ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308305 jle 0x11308323 */
  if ((C.zf||C.sf!=C.of)) goto L_11308323;
  /* 11308307 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 1130830c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1130830f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11308315 push ecx */
  push32((uint32_t)(ECX));
  /* 11308316 call 0x1130c5c0 */
  push32(0x1130831bu); f_1130c5c0();
  /* 1130831b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130831e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 11308321 jmp 0x11308340 */
  goto L_11308340;
L_11308323:;
  /* 11308323 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11308326 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1130832c mov eax, dword ptr [0x11330c98] */
  EAX = (r32((uint32_t)(0x11330c98)));
  /* 11308331 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11308333 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11308337 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 1130833d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_11308340:;
  /* 11308340 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308344 je 0x11308354 */
  if (C.zf) goto L_11308354;
  /* 11308346 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11308349 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1130834f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 11308352 jmp 0x1130835b */
  goto L_1130835b;
L_11308354:;
  /* 11308354 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_1130835b:;
  /* 1130835b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1130835e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 11308361 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 11308365 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11308368 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1130836e push edx */
  push32((uint32_t)(EDX));
  /* 1130836f push 0x1132def0 */
  push32((uint32_t)(0x1132def0u));
  /* 11308374 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11308377 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130837a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 1130837e push ecx */
  push32((uint32_t)(ECX));
  /* 1130837f call 0x1130c4c0 */
  push32(0x11308384u); f_1130c4c0();
  /* 11308384 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11308387 jmp 0x113082c2 */
  goto L_113082c2;
L_1130838c:;
  /* 1130838c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1130838f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_11308394:;
  /* 11308394 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11308397 push eax */
  push32((uint32_t)(EAX));
  /* 11308398 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 1130839b push ecx */
  push32((uint32_t)(ECX));
  /* 1130839c push 0x1132dee0 */
  push32((uint32_t)(0x1132dee0u));
  /* 113083a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 113083a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113083a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113083a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 113083a9 call 0x11305670 */
  push32(0x113083aeu); f_11305670();
  /* 113083ae add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113083b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113083b4 jne 0x113083b7 */
  if (!C.zf) goto L_113083b7;
  /* 113083b6 int3  */
  x86_unimpl("int3 @ 0x113083b6");
L_113083b7:;
  /* 113083b7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113083b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113083bb jne 0x11308394 */
  if (!C.zf) goto L_11308394;
  /* 113083bd pop edi */
  EDI = (pop32());
  /* 113083be pop esi */
  ESI = (pop32());
  /* 113083bf pop ebx */
  EBX = (pop32());
  /* 113083c0 mov esp, ebp */
  ESP = (EBP);
  /* 113083c2 pop ebp */
  EBP = (pop32());
  /* 113083c3 ret  */
  ESPCHK(0x113082b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100083d0 @ 0x113083d0 (116 bytes, 46 insns) */
void f_113083d0(void) {
  FTRACE(0x113083d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113083d0 push ebp */
  push32((uint32_t)(EBP));
  /* 113083d1 mov ebp, esp */
  EBP = (ESP);
  /* 113083d3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113083d6 push ebx */
  push32((uint32_t)(EBX));
  /* 113083d7 push esi */
  push32((uint32_t)(ESI));
  /* 113083d8 push edi */
  push32((uint32_t)(EDI));
  /* 113083d9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 113083dc push eax */
  push32((uint32_t)(EAX));
  /* 113083dd call 0x11307d50 */
  push32(0x113083e2u); f_11307d50();
  /* 113083e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113083e5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113083e9 jne 0x11308404 */
  if (!C.zf) goto L_11308404;
  /* 113083eb cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113083ef jne 0x11308404 */
  if (!C.zf) goto L_11308404;
  /* 113083f1 mov ecx, dword ptr [0x11330a84] */
  ECX = (r32((uint32_t)(0x11330a84)));
  /* 113083f7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 113083fa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113083fc je 0x1130843b */
  if (C.zf) goto L_1130843b;
  /* 113083fe cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308402 je 0x1130843b */
  if (C.zf) goto L_1130843b;
L_11308404:;
  /* 11308404 push 0x1132def8 */
  push32((uint32_t)(0x1132def8u));
  /* 11308409 push 0x1132d8c4 */
  push32((uint32_t)(0x1132d8c4u));
  /* 1130840e push 0 */
  push32((uint32_t)(0x0u));
  /* 11308410 push 0 */
  push32((uint32_t)(0x0u));
  /* 11308412 push 0 */
  push32((uint32_t)(0x0u));
  /* 11308414 push 0 */
  push32((uint32_t)(0x0u));
  /* 11308416 call 0x11305670 */
  push32(0x1130841bu); f_11305670();
  /* 1130841b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130841e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308421 jne 0x11308424 */
  if (!C.zf) goto L_11308424;
  /* 11308423 int3  */
  x86_unimpl("int3 @ 0x11308423");
L_11308424:;
  /* 11308424 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11308426 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11308428 jne 0x11308404 */
  if (!C.zf) goto L_11308404;
  /* 1130842a push 0 */
  push32((uint32_t)(0x0u));
  /* 1130842c call 0x11307ff0 */
  push32(0x11308431u); f_11307ff0();
  /* 11308431 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11308434 mov eax, 1 */
  EAX = (0x1u);
  /* 11308439 jmp 0x1130843d */
  goto L_1130843d;
L_1130843b:;
  /* 1130843b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1130843d:;
  /* 1130843d pop edi */
  EDI = (pop32());
  /* 1130843e pop esi */
  ESI = (pop32());
  /* 1130843f pop ebx */
  EBX = (pop32());
  /* 11308440 mov esp, ebp */
  ESP = (EBP);
  /* 11308442 pop ebp */
  EBP = (pop32());
  /* 11308443 ret  */
  ESPCHK(0x113083d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008450 @ 0x11308450 (197 bytes, 79 insns) */
void f_11308450(void) {
  FTRACE(0x11308450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11308450 push ebp */
  push32((uint32_t)(EBP));
  /* 11308451 mov ebp, esp */
  EBP = (ESP);
  /* 11308453 push ecx */
  push32((uint32_t)(ECX));
  /* 11308454 push ebx */
  push32((uint32_t)(EBX));
  /* 11308455 push esi */
  push32((uint32_t)(ESI));
  /* 11308456 push edi */
  push32((uint32_t)(EDI));
  /* 11308457 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130845b jne 0x11308462 */
  if (!C.zf) goto L_11308462;
  /* 1130845d jmp 0x1130850e */
  goto L_1130850e;
L_11308462:;
  /* 11308462 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11308469 jmp 0x11308474 */
  goto L_11308474;
L_1130846b:;
  /* 1130846b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130846e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11308471 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11308474:;
  /* 11308474 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308478 jge 0x113084be */
  if ((C.sf==C.of)) goto L_113084be;
L_1130847a:;
  /* 1130847a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130847d mov edx, dword ptr [ecx*4 + 0x11330a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11330a94)));
  /* 11308484 push edx */
  push32((uint32_t)(EDX));
  /* 11308485 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308488 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130848b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 1130848f push edx */
  push32((uint32_t)(EDX));
  /* 11308490 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308493 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11308496 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1130849a push edx */
  push32((uint32_t)(EDX));
  /* 1130849b push 0x1132df54 */
  push32((uint32_t)(0x1132df54u));
  /* 113084a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 113084a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113084a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113084a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 113084a8 call 0x11305670 */
  push32(0x113084adu); f_11305670();
  /* 113084ad add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113084b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113084b3 jne 0x113084b6 */
  if (!C.zf) goto L_113084b6;
  /* 113084b5 int3  */
  x86_unimpl("int3 @ 0x113084b5");
L_113084b6:;
  /* 113084b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113084b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113084ba jne 0x1130847a */
  if (!C.zf) goto L_1130847a;
  /* 113084bc jmp 0x1130846b */
  goto L_1130846b;
L_113084be:;
  /* 113084be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113084c1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 113084c4 push edx */
  push32((uint32_t)(EDX));
  /* 113084c5 push 0x1132df30 */
  push32((uint32_t)(0x1132df30u));
  /* 113084ca push 0 */
  push32((uint32_t)(0x0u));
  /* 113084cc push 0 */
  push32((uint32_t)(0x0u));
  /* 113084ce push 0 */
  push32((uint32_t)(0x0u));
  /* 113084d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 113084d2 call 0x11305670 */
  push32(0x113084d7u); f_11305670();
  /* 113084d7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113084da cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113084dd jne 0x113084e0 */
  if (!C.zf) goto L_113084e0;
  /* 113084df int3  */
  x86_unimpl("int3 @ 0x113084df");
L_113084e0:;
  /* 113084e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113084e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113084e4 jne 0x113084be */
  if (!C.zf) goto L_113084be;
L_113084e6:;
  /* 113084e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113084e9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 113084ec push edx */
  push32((uint32_t)(EDX));
  /* 113084ed push 0x1132df10 */
  push32((uint32_t)(0x1132df10u));
  /* 113084f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113084f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113084f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 113084f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 113084fa call 0x11305670 */
  push32(0x113084ffu); f_11305670();
  /* 113084ff add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11308502 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308505 jne 0x11308508 */
  if (!C.zf) goto L_11308508;
  /* 11308507 int3  */
  x86_unimpl("int3 @ 0x11308507");
L_11308508:;
  /* 11308508 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130850a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130850c jne 0x113084e6 */
  if (!C.zf) goto L_113084e6;
L_1130850e:;
  /* 1130850e pop edi */
  EDI = (pop32());
  /* 1130850f pop esi */
  ESI = (pop32());
  /* 11308510 pop ebx */
  EBX = (pop32());
  /* 11308511 mov esp, ebp */
  ESP = (EBP);
  /* 11308513 pop ebp */
  EBP = (pop32());
  /* 11308514 ret  */
  ESPCHK(0x11308450u, _esp0);
  ESP += 4; return;
}

/* FUN_10008520 @ 0x11308520 (329 bytes, 102 insns) */
void f_11308520(void) {
  FTRACE(0x11308520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11308520 push ebp */
  push32((uint32_t)(EBP));
  /* 11308521 mov ebp, esp */
  EBP = (ESP);
  /* 11308523 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11308526 cmp dword ptr [0x113342b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113342b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130852d jne 0x11308534 */
  if (!C.zf) goto L_11308534;
  /* 1130852f call 0x1130ce60 */
  push32(0x11308534u); f_1130ce60();
L_11308534:;
  /* 11308534 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1130853b mov eax, dword ptr [0x11332770] */
  EAX = (r32((uint32_t)(0x11332770)));
  /* 11308540 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11308543:;
  /* 11308543 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308546 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11308549 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130854b je 0x11308579 */
  if (C.zf) goto L_11308579;
  /* 1130854d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308550 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11308553 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308556 je 0x11308561 */
  if (C.zf) goto L_11308561;
  /* 11308558 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130855b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130855e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11308561:;
  /* 11308561 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308564 push eax */
  push32((uint32_t)(EAX));
  /* 11308565 call 0x113093e0 */
  push32(0x1130856au); f_113093e0();
  /* 1130856a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130856d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308570 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11308574 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11308577 jmp 0x11308543 */
  goto L_11308543;
L_11308579:;
  /* 11308579 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 1130857b push 0x1132df74 */
  push32((uint32_t)(0x1132df74u));
  /* 11308580 push 2 */
  push32((uint32_t)(0x2u));
  /* 11308582 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11308585 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 1130858c push ecx */
  push32((uint32_t)(ECX));
  /* 1130858d call 0x113065b0 */
  push32(0x11308592u); f_113065b0();
  /* 11308592 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11308595 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11308598 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130859b mov dword ptr [0x113327a4], edx */
  w32((uint32_t)(0x113327a4), (EDX));
  /* 113085a1 cmp dword ptr [0x113327a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113327a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113085a8 jne 0x113085b4 */
  if (!C.zf) goto L_113085b4;
  /* 113085aa push 9 */
  push32((uint32_t)(0x9u));
  /* 113085ac call 0x11305520 */
  push32(0x113085b1u); f_11305520();
  /* 113085b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113085b4:;
  /* 113085b4 mov eax, dword ptr [0x11332770] */
  EAX = (r32((uint32_t)(0x11332770)));
  /* 113085b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113085bc jmp 0x113085c7 */
  goto L_113085c7;
L_113085be:;
  /* 113085be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113085c1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113085c4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_113085c7:;
  /* 113085c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113085ca movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113085cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113085cf je 0x11308637 */
  if (C.zf) goto L_11308637;
  /* 113085d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113085d4 push ecx */
  push32((uint32_t)(ECX));
  /* 113085d5 call 0x113093e0 */
  push32(0x113085dau); f_113093e0();
  /* 113085da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113085dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113085e0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 113085e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113085e6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113085e9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113085ec je 0x11308635 */
  if (C.zf) goto L_11308635;
  /* 113085ee push 0x79 */
  push32((uint32_t)(0x79u));
  /* 113085f0 push 0x1132df74 */
  push32((uint32_t)(0x1132df74u));
  /* 113085f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 113085f7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113085fa push ecx */
  push32((uint32_t)(ECX));
  /* 113085fb call 0x113065b0 */
  push32(0x11308600u); f_113065b0();
  /* 11308600 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11308603 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11308606 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11308608 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130860b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130860e jne 0x1130861a */
  if (!C.zf) goto L_1130861a;
  /* 11308610 push 9 */
  push32((uint32_t)(0x9u));
  /* 11308612 call 0x11305520 */
  push32(0x11308617u); f_11305520();
  /* 11308617 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1130861a:;
  /* 1130861a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130861d push ecx */
  push32((uint32_t)(ECX));
  /* 1130861e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11308621 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11308623 push eax */
  push32((uint32_t)(EAX));
  /* 11308624 call 0x11309560 */
  push32(0x11308629u); f_11309560();
  /* 11308629 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130862c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130862f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11308632 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11308635:;
  /* 11308635 jmp 0x113085be */
  goto L_113085be;
L_11308637:;
  /* 11308637 push 2 */
  push32((uint32_t)(0x2u));
  /* 11308639 mov edx, dword ptr [0x11332770] */
  EDX = (r32((uint32_t)(0x11332770)));
  /* 1130863f push edx */
  push32((uint32_t)(EDX));
  /* 11308640 call 0x11307040 */
  push32(0x11308645u); f_11307040();
  /* 11308645 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11308648 mov dword ptr [0x11332770], 0 */
  w32((uint32_t)(0x11332770), (0x0u));
  /* 11308652 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11308655 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1130865b mov dword ptr [0x113342a0], 1 */
  w32((uint32_t)(0x113342a0), (0x1u));
  /* 11308665 mov esp, ebp */
  ESP = (EBP);
  /* 11308667 pop ebp */
  EBP = (pop32());
  /* 11308668 ret  */
  ESPCHK(0x11308520u, _esp0);
  ESP += 4; return;
}

/* FUN_10008670 @ 0x11308670 (216 bytes, 69 insns) */
void f_11308670(void) {
  FTRACE(0x11308670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11308670 push ebp */
  push32((uint32_t)(EBP));
  /* 11308671 mov ebp, esp */
  EBP = (ESP);
  /* 11308673 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11308676 cmp dword ptr [0x113342b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113342b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130867d jne 0x11308684 */
  if (!C.zf) goto L_11308684;
  /* 1130867f call 0x1130ce60 */
  push32(0x11308684u); f_1130ce60();
L_11308684:;
  /* 11308684 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11308689 push 0x113327e0 */
  push32((uint32_t)(0x113327e0u));
  /* 1130868e push 0 */
  push32((uint32_t)(0x0u));
  /* 11308690 call dword ptr [0x113353c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353c0))), 0x11308696u);
  /* 11308696 mov dword ptr [0x113327b4], 0x113327e0 */
  w32((uint32_t)(0x113327b4), (0x113327e0u));
  /* 113086a0 mov eax, dword ptr [0x113342cc] */
  EAX = (r32((uint32_t)(0x113342cc)));
  /* 113086a5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113086a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113086aa jne 0x113086b7 */
  if (!C.zf) goto L_113086b7;
  /* 113086ac mov edx, dword ptr [0x113327b4] */
  EDX = (r32((uint32_t)(0x113327b4)));
  /* 113086b2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 113086b5 jmp 0x113086bf */
  goto L_113086bf;
L_113086b7:;
  /* 113086b7 mov eax, dword ptr [0x113342cc] */
  EAX = (r32((uint32_t)(0x113342cc)));
  /* 113086bc mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_113086bf:;
  /* 113086bf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113086c2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 113086c5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 113086c8 push edx */
  push32((uint32_t)(EDX));
  /* 113086c9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 113086cc push eax */
  push32((uint32_t)(EAX));
  /* 113086cd push 0 */
  push32((uint32_t)(0x0u));
  /* 113086cf push 0 */
  push32((uint32_t)(0x0u));
  /* 113086d1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113086d4 push ecx */
  push32((uint32_t)(ECX));
  /* 113086d5 call 0x11308750 */
  push32(0x113086dau); f_11308750();
  /* 113086da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113086dd push 0x80 */
  push32((uint32_t)(0x80u));
  /* 113086e2 push 0x1132df80 */
  push32((uint32_t)(0x1132df80u));
  /* 113086e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 113086e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113086ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113086ef lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 113086f2 push ecx */
  push32((uint32_t)(ECX));
  /* 113086f3 call 0x113065b0 */
  push32(0x113086f8u); f_113065b0();
  /* 113086f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113086fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113086fe cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308702 jne 0x1130870e */
  if (!C.zf) goto L_1130870e;
  /* 11308704 push 8 */
  push32((uint32_t)(0x8u));
  /* 11308706 call 0x11305520 */
  push32(0x1130870bu); f_11305520();
  /* 1130870b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1130870e:;
  /* 1130870e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11308711 push edx */
  push32((uint32_t)(EDX));
  /* 11308712 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11308715 push eax */
  push32((uint32_t)(EAX));
  /* 11308716 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11308719 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130871c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 1130871f push eax */
  push32((uint32_t)(EAX));
  /* 11308720 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11308723 push ecx */
  push32((uint32_t)(ECX));
  /* 11308724 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11308727 push edx */
  push32((uint32_t)(EDX));
  /* 11308728 call 0x11308750 */
  push32(0x1130872du); f_11308750();
  /* 1130872d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11308730 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11308733 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11308736 mov dword ptr [0x11332798], eax */
  w32((uint32_t)(0x11332798), (EAX));
  /* 1130873b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130873e mov dword ptr [0x1133279c], ecx */
  w32((uint32_t)(0x1133279c), (ECX));
  /* 11308744 mov esp, ebp */
  ESP = (EBP);
  /* 11308746 pop ebp */
  EBP = (pop32());
  /* 11308747 ret  */
  ESPCHK(0x11308670u, _esp0);
  ESP += 4; return;
}

/* FUN_10008750 @ 0x11308750 (1060 bytes, 360 insns) */
void f_11308750(void) {
  FTRACE(0x11308750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11308750 push ebp */
  push32((uint32_t)(EBP));
  /* 11308751 mov ebp, esp */
  EBP = (ESP);
  /* 11308753 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11308756 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11308759 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1130875f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11308762 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 11308768 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130876b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1130876e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308772 je 0x11308785 */
  if (C.zf) goto L_11308785;
  /* 11308774 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11308777 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1130877a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1130877c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130877f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11308782 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_11308785:;
  /* 11308785 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308788 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1130878b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130878e jne 0x1130885d */
  if (!C.zf) goto L_1130885d;
L_11308794:;
  /* 11308794 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308797 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130879a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1130879d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113087a0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113087a3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113087a6 je 0x11308822 */
  if (C.zf) goto L_11308822;
  /* 113087a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113087ab movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113087ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113087b0 je 0x11308822 */
  if (C.zf) goto L_11308822;
  /* 113087b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113087b5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113087b7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113087b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113087bb mov al, byte ptr [edx + 0x11334001] */
  AL = (r8((uint32_t)(EDX + 0x11334001)));
  /* 113087c1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 113087c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113087c6 je 0x113087f7 */
  if (C.zf) goto L_113087f7;
  /* 113087c8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113087cb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113087cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113087d0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113087d3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113087d5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113087d9 je 0x113087f7 */
  if (C.zf) goto L_113087f7;
  /* 113087db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113087de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113087e1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113087e3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 113087e5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113087e8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113087eb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 113087ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113087f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113087f4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_113087f7:;
  /* 113087f7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113087fa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113087fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113087ff mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11308802 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11308804 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308808 je 0x1130881d */
  if (C.zf) goto L_1130881d;
  /* 1130880a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1130880d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308810 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11308812 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11308814 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11308817 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130881a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1130881d:;
  /* 1130881d jmp 0x11308794 */
  goto L_11308794;
L_11308822:;
  /* 11308822 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11308825 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11308827 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130882a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1130882d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1130882f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308833 je 0x11308844 */
  if (C.zf) goto L_11308844;
  /* 11308835 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11308838 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1130883b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1130883e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11308841 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11308844:;
  /* 11308844 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308847 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1130884a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130884d jne 0x11308858 */
  if (!C.zf) goto L_11308858;
  /* 1130884f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308852 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11308855 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11308858:;
  /* 11308858 jmp 0x1130892c */
  goto L_1130892c;
L_1130885d:;
  /* 1130885d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11308860 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11308862 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11308865 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11308868 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1130886a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130886e je 0x11308883 */
  if (C.zf) goto L_11308883;
  /* 11308870 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11308873 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308876 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11308878 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1130887a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1130887d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11308880 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11308883:;
  /* 11308883 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308886 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11308888 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1130888b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130888e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11308891 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11308894 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11308897 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1130889d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1130889f mov dl, byte ptr [ecx + 0x11334001] */
  DL = (r8((uint32_t)(ECX + 0x11334001)));
  /* 113088a5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 113088a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113088aa je 0x113088db */
  if (C.zf) goto L_113088db;
  /* 113088ac mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113088af mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113088b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113088b4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113088b7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 113088b9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113088bd je 0x113088d2 */
  if (C.zf) goto L_113088d2;
  /* 113088bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113088c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113088c5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113088c7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 113088c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113088cc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113088cf mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_113088d2:;
  /* 113088d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113088d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113088d8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_113088db:;
  /* 113088db mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113088de and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 113088e4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113088e7 je 0x11308907 */
  if (C.zf) goto L_11308907;
  /* 113088e9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113088ec and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113088f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113088f3 je 0x11308907 */
  if (C.zf) goto L_11308907;
  /* 113088f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113088f8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 113088fe cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308901 jne 0x1130885d */
  if (!C.zf) goto L_1130885d;
L_11308907:;
  /* 11308907 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130890a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11308910 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11308912 jne 0x1130891f */
  if (!C.zf) goto L_1130891f;
  /* 11308914 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308917 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130891a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1130891d jmp 0x1130892c */
  goto L_1130892c;
L_1130891f:;
  /* 1130891f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308923 je 0x1130892c */
  if (C.zf) goto L_1130892c;
  /* 11308925 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11308928 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_1130892c:;
  /* 1130892c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11308933:;
  /* 11308933 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308936 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11308939 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130893b je 0x1130895e */
  if (C.zf) goto L_1130895e;
L_1130893d:;
  /* 1130893d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308940 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11308943 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308946 je 0x11308953 */
  if (C.zf) goto L_11308953;
  /* 11308948 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130894b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1130894e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308951 jne 0x1130895e */
  if (!C.zf) goto L_1130895e;
L_11308953:;
  /* 11308953 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308956 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11308959 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1130895c jmp 0x1130893d */
  goto L_1130893d;
L_1130895e:;
  /* 1130895e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308961 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11308964 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11308966 jne 0x1130896d */
  if (!C.zf) goto L_1130896d;
  /* 11308968 jmp 0x11308b4b */
  goto L_11308b4b;
L_1130896d:;
  /* 1130896d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308971 je 0x11308984 */
  if (C.zf) goto L_11308984;
  /* 11308973 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11308976 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11308979 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1130897b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130897e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11308981 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11308984:;
  /* 11308984 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11308987 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11308989 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130898c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1130898f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11308991:;
  /* 11308991 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11308998 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1130899f:;
  /* 1130899f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113089a2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113089a5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113089a8 jne 0x113089be */
  if (!C.zf) goto L_113089be;
  /* 113089aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113089ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113089b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113089b3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113089b6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113089b9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 113089bc jmp 0x1130899f */
  goto L_1130899f;
L_113089be:;
  /* 113089be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113089c1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113089c4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113089c7 jne 0x11308a1a */
  if (!C.zf) goto L_11308a1a;
  /* 113089c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113089cc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113089ce mov ecx, 2 */
  ECX = (0x2u);
  /* 113089d3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113089d5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113089d7 jne 0x11308a12 */
  if (!C.zf) goto L_11308a12;
  /* 113089d9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113089dd je 0x113089ff */
  if (C.zf) goto L_113089ff;
  /* 113089df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113089e2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 113089e6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113089e9 jne 0x113089f6 */
  if (!C.zf) goto L_113089f6;
  /* 113089eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113089ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113089f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113089f4 jmp 0x113089fd */
  goto L_113089fd;
L_113089f6:;
  /* 113089f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_113089fd:;
  /* 113089fd jmp 0x11308a06 */
  goto L_11308a06;
L_113089ff:;
  /* 113089ff mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11308a06:;
  /* 11308a06 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11308a08 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308a0c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11308a0f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11308a12:;
  /* 11308a12 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11308a15 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11308a17 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11308a1a:;
  /* 11308a1a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11308a1d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11308a20 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11308a23 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11308a26 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11308a28 je 0x11308a4e */
  if (C.zf) goto L_11308a4e;
  /* 11308a2a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308a2e je 0x11308a3f */
  if (C.zf) goto L_11308a3f;
  /* 11308a30 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11308a33 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 11308a36 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11308a39 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11308a3c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_11308a3f:;
  /* 11308a3f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11308a42 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11308a44 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11308a47 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11308a4a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11308a4c jmp 0x11308a1a */
  goto L_11308a1a;
L_11308a4e:;
  /* 11308a4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308a51 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11308a54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11308a56 je 0x11308a74 */
  if (C.zf) goto L_11308a74;
  /* 11308a58 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308a5c jne 0x11308a79 */
  if (!C.zf) goto L_11308a79;
  /* 11308a5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308a61 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11308a64 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308a67 je 0x11308a74 */
  if (C.zf) goto L_11308a74;
  /* 11308a69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308a6c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11308a6f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308a72 jne 0x11308a79 */
  if (!C.zf) goto L_11308a79;
L_11308a74:;
  /* 11308a74 jmp 0x11308b24 */
  goto L_11308b24;
L_11308a79:;
  /* 11308a79 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308a7d je 0x11308b16 */
  if (C.zf) goto L_11308b16;
  /* 11308a83 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308a87 je 0x11308add */
  if (C.zf) goto L_11308add;
  /* 11308a89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308a8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11308a8e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11308a90 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11308a92 mov cl, byte ptr [eax + 0x11334001] */
  CL = (r8((uint32_t)(EAX + 0x11334001)));
  /* 11308a98 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11308a9b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11308a9d je 0x11308ac8 */
  if (C.zf) goto L_11308ac8;
  /* 11308a9f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11308aa2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308aa5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11308aa7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11308aa9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11308aac add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11308aaf mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 11308ab2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308ab5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11308ab8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11308abb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11308abe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11308ac0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11308ac3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11308ac6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11308ac8:;
  /* 11308ac8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11308acb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308ace mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11308ad0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11308ad2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11308ad5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11308ad8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11308adb jmp 0x11308b09 */
  goto L_11308b09;
L_11308add:;
  /* 11308add mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308ae0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11308ae2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11308ae4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11308ae6 mov cl, byte ptr [eax + 0x11334001] */
  CL = (r8((uint32_t)(EAX + 0x11334001)));
  /* 11308aec and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11308aef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11308af1 je 0x11308b09 */
  if (C.zf) goto L_11308b09;
  /* 11308af3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308af6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11308af9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11308afc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11308aff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11308b01 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11308b04 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11308b07 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11308b09:;
  /* 11308b09 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11308b0c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11308b0e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11308b11 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11308b14 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11308b16:;
  /* 11308b16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308b19 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11308b1c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11308b1f jmp 0x11308991 */
  goto L_11308991;
L_11308b24:;
  /* 11308b24 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308b28 je 0x11308b39 */
  if (C.zf) goto L_11308b39;
  /* 11308b2a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11308b2d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11308b30 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11308b33 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11308b36 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11308b39:;
  /* 11308b39 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11308b3c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11308b3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11308b41 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11308b44 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11308b46 jmp 0x11308933 */
  goto L_11308933;
L_11308b4b:;
  /* 11308b4b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308b4f je 0x11308b63 */
  if (C.zf) goto L_11308b63;
  /* 11308b51 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11308b54 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11308b5a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11308b5d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11308b60 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11308b63:;
  /* 11308b63 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11308b66 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11308b68 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11308b6b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11308b6e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11308b70 mov esp, ebp */
  ESP = (EBP);
  /* 11308b72 pop ebp */
  EBP = (pop32());
  /* 11308b73 ret  */
  ESPCHK(0x11308750u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b80 @ 0x11308b80 (537 bytes, 173 insns) */
void f_11308b80(void) {
  FTRACE(0x11308b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11308b80 push ebp */
  push32((uint32_t)(EBP));
  /* 11308b81 mov ebp, esp */
  EBP = (ESP);
  /* 11308b83 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11308b86 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11308b8d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11308b94 cmp dword ptr [0x113328e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113328e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308b9b jne 0x11308bda */
  if (!C.zf) goto L_11308bda;
  /* 11308b9d call dword ptr [0x1133537c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133537c))), 0x11308ba3u);
  /* 11308ba3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11308ba6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308baa je 0x11308bb8 */
  if (C.zf) goto L_11308bb8;
  /* 11308bac mov dword ptr [0x113328e4], 1 */
  w32((uint32_t)(0x113328e4), (0x1u));
  /* 11308bb6 jmp 0x11308bda */
  goto L_11308bda;
L_11308bb8:;
  /* 11308bb8 call dword ptr [0x11335374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335374))), 0x11308bbeu);
  /* 11308bbe mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11308bc1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308bc5 je 0x11308bd3 */
  if (C.zf) goto L_11308bd3;
  /* 11308bc7 mov dword ptr [0x113328e4], 2 */
  w32((uint32_t)(0x113328e4), (0x2u));
  /* 11308bd1 jmp 0x11308bda */
  goto L_11308bda;
L_11308bd3:;
  /* 11308bd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11308bd5 jmp 0x11308d95 */
  goto L_11308d95;
L_11308bda:;
  /* 11308bda cmp dword ptr [0x113328e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113328e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308be1 jne 0x11308cde */
  if (!C.zf) goto L_11308cde;
  /* 11308be7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308beb jne 0x11308c03 */
  if (!C.zf) goto L_11308c03;
  /* 11308bed call dword ptr [0x1133537c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133537c))), 0x11308bf3u);
  /* 11308bf3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11308bf6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308bfa jne 0x11308c03 */
  if (!C.zf) goto L_11308c03;
  /* 11308bfc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11308bfe jmp 0x11308d95 */
  goto L_11308d95;
L_11308c03:;
  /* 11308c03 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11308c06 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11308c09:;
  /* 11308c09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11308c0c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11308c0e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11308c11 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11308c13 je 0x11308c35 */
  if (C.zf) goto L_11308c35;
  /* 11308c15 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11308c18 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11308c1b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11308c1e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11308c21 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11308c23 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11308c26 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11308c28 jne 0x11308c33 */
  if (!C.zf) goto L_11308c33;
  /* 11308c2a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11308c2d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11308c30 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11308c33:;
  /* 11308c33 jmp 0x11308c09 */
  goto L_11308c09;
L_11308c35:;
  /* 11308c35 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11308c38 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11308c3b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11308c3d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11308c40 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11308c43 push 0 */
  push32((uint32_t)(0x0u));
  /* 11308c45 push 0 */
  push32((uint32_t)(0x0u));
  /* 11308c47 push 0 */
  push32((uint32_t)(0x0u));
  /* 11308c49 push 0 */
  push32((uint32_t)(0x0u));
  /* 11308c4b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308c4e push edx */
  push32((uint32_t)(EDX));
  /* 11308c4f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11308c52 push eax */
  push32((uint32_t)(EAX));
  /* 11308c53 push 0 */
  push32((uint32_t)(0x0u));
  /* 11308c55 push 0 */
  push32((uint32_t)(0x0u));
  /* 11308c57 call dword ptr [0x11335378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335378))), 0x11308c5du);
  /* 11308c5d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11308c60 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308c64 je 0x11308c84 */
  if (C.zf) goto L_11308c84;
  /* 11308c66 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11308c68 push 0x1132df8c */
  push32((uint32_t)(0x1132df8cu));
  /* 11308c6d push 2 */
  push32((uint32_t)(0x2u));
  /* 11308c6f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11308c72 push ecx */
  push32((uint32_t)(ECX));
  /* 11308c73 call 0x113065b0 */
  push32(0x11308c78u); f_113065b0();
  /* 11308c78 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11308c7b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11308c7e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308c82 jne 0x11308c95 */
  if (!C.zf) goto L_11308c95;
L_11308c84:;
  /* 11308c84 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11308c87 push edx */
  push32((uint32_t)(EDX));
  /* 11308c88 call dword ptr [0x11335388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335388))), 0x11308c8eu);
  /* 11308c8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11308c90 jmp 0x11308d95 */
  goto L_11308d95;
L_11308c95:;
  /* 11308c95 push 0 */
  push32((uint32_t)(0x0u));
  /* 11308c97 push 0 */
  push32((uint32_t)(0x0u));
  /* 11308c99 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11308c9c push eax */
  push32((uint32_t)(EAX));
  /* 11308c9d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11308ca0 push ecx */
  push32((uint32_t)(ECX));
  /* 11308ca1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308ca4 push edx */
  push32((uint32_t)(EDX));
  /* 11308ca5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11308ca8 push eax */
  push32((uint32_t)(EAX));
  /* 11308ca9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11308cab push 0 */
  push32((uint32_t)(0x0u));
  /* 11308cad call dword ptr [0x11335378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335378))), 0x11308cb3u);
  /* 11308cb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11308cb5 jne 0x11308ccc */
  if (!C.zf) goto L_11308ccc;
  /* 11308cb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11308cb9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11308cbc push ecx */
  push32((uint32_t)(ECX));
  /* 11308cbd call 0x11307040 */
  push32(0x11308cc2u); f_11307040();
  /* 11308cc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11308cc5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_11308ccc:;
  /* 11308ccc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11308ccf push edx */
  push32((uint32_t)(EDX));
  /* 11308cd0 call dword ptr [0x11335388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335388))), 0x11308cd6u);
  /* 11308cd6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11308cd9 jmp 0x11308d95 */
  goto L_11308d95;
L_11308cde:;
  /* 11308cde cmp dword ptr [0x113328e4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x113328e4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308ce5 jne 0x11308d93 */
  if (!C.zf) goto L_11308d93;
  /* 11308ceb cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308cef jne 0x11308d07 */
  if (!C.zf) goto L_11308d07;
  /* 11308cf1 call dword ptr [0x11335374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335374))), 0x11308cf7u);
  /* 11308cf7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11308cfa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308cfe jne 0x11308d07 */
  if (!C.zf) goto L_11308d07;
  /* 11308d00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11308d02 jmp 0x11308d95 */
  goto L_11308d95;
L_11308d07:;
  /* 11308d07 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11308d0a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11308d0d:;
  /* 11308d0d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11308d10 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11308d13 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11308d15 je 0x11308d35 */
  if (C.zf) goto L_11308d35;
  /* 11308d17 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11308d1a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11308d1d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11308d20 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11308d23 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11308d26 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11308d28 jne 0x11308d33 */
  if (!C.zf) goto L_11308d33;
  /* 11308d2a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11308d2d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11308d30 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11308d33:;
  /* 11308d33 jmp 0x11308d0d */
  goto L_11308d0d;
L_11308d35:;
  /* 11308d35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11308d38 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11308d3b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11308d3e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11308d41 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 11308d46 push 0x1132df8c */
  push32((uint32_t)(0x1132df8cu));
  /* 11308d4b push 2 */
  push32((uint32_t)(0x2u));
  /* 11308d4d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11308d50 push edx */
  push32((uint32_t)(EDX));
  /* 11308d51 call 0x113065b0 */
  push32(0x11308d56u); f_113065b0();
  /* 11308d56 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11308d59 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11308d5c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308d60 jne 0x11308d70 */
  if (!C.zf) goto L_11308d70;
  /* 11308d62 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11308d65 push eax */
  push32((uint32_t)(EAX));
  /* 11308d66 call dword ptr [0x11335380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335380))), 0x11308d6cu);
  /* 11308d6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11308d6e jmp 0x11308d95 */
  goto L_11308d95;
L_11308d70:;
  /* 11308d70 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11308d73 push ecx */
  push32((uint32_t)(ECX));
  /* 11308d74 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11308d77 push edx */
  push32((uint32_t)(EDX));
  /* 11308d78 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11308d7b push eax */
  push32((uint32_t)(EAX));
  /* 11308d7c call 0x1130ce90 */
  push32(0x11308d81u); f_1130ce90();
  /* 11308d81 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11308d84 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11308d87 push ecx */
  push32((uint32_t)(ECX));
  /* 11308d88 call dword ptr [0x11335380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335380))), 0x11308d8eu);
  /* 11308d8e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11308d91 jmp 0x11308d95 */
  goto L_11308d95;
L_11308d93:;
  /* 11308d93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11308d95:;
  /* 11308d95 mov esp, ebp */
  ESP = (EBP);
  /* 11308d97 pop ebp */
  EBP = (pop32());
  /* 11308d98 ret  */
  ESPCHK(0x11308b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10008da0 @ 0x11308da0 (77 bytes, 25 insns) */
void f_11308da0(void) {
  FTRACE(0x11308da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11308da0 push ebp */
  push32((uint32_t)(EBP));
  /* 11308da1 mov ebp, esp */
  EBP = (ESP);
  /* 11308da3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11308da5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11308daa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11308dac cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308db0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11308db3 push eax */
  push32((uint32_t)(EAX));
  /* 11308db4 call dword ptr [0x11335368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335368))), 0x11308dbau);
  /* 11308dba mov dword ptr [0x1133412c], eax */
  w32((uint32_t)(0x1133412c), (EAX));
  /* 11308dbf cmp dword ptr [0x1133412c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1133412c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308dc6 jne 0x11308dcc */
  if (!C.zf) goto L_11308dcc;
  /* 11308dc8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11308dca jmp 0x11308deb */
  goto L_11308deb;
L_11308dcc:;
  /* 11308dcc call 0x1130a850 */
  push32(0x11308dd1u); f_1130a850();
  /* 11308dd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11308dd3 jne 0x11308de6 */
  if (!C.zf) goto L_11308de6;
  /* 11308dd5 mov ecx, dword ptr [0x1133412c] */
  ECX = (r32((uint32_t)(0x1133412c)));
  /* 11308ddb push ecx */
  push32((uint32_t)(ECX));
  /* 11308ddc call dword ptr [0x1133536c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133536c))), 0x11308de2u);
  /* 11308de2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11308de4 jmp 0x11308deb */
  goto L_11308deb;
L_11308de6:;
  /* 11308de6 mov eax, 1 */
  EAX = (0x1u);
L_11308deb:;
  /* 11308deb pop ebp */
  EBP = (pop32());
  /* 11308dec ret  */
  ESPCHK(0x11308da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008df0 @ 0x11308df0 (156 bytes, 48 insns) */
void f_11308df0(void) {
  FTRACE(0x11308df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11308df0 push ebp */
  push32((uint32_t)(EBP));
  /* 11308df1 mov ebp, esp */
  EBP = (ESP);
  /* 11308df3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11308df6 mov eax, dword ptr [0x11334128] */
  EAX = (r32((uint32_t)(0x11334128)));
  /* 11308dfb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11308dfe mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11308e05 jmp 0x11308e10 */
  goto L_11308e10;
L_11308e07:;
  /* 11308e07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308e0a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11308e0d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11308e10:;
  /* 11308e10 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11308e13 cmp edx, dword ptr [0x11334124] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11334124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308e19 jge 0x11308e66 */
  if ((C.sf==C.of)) goto L_11308e66;
  /* 11308e1b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11308e20 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11308e25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11308e28 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11308e2b push ecx */
  push32((uint32_t)(ECX));
  /* 11308e2c call dword ptr [0x11335360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335360))), 0x11308e32u);
  /* 11308e32 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11308e37 push 0 */
  push32((uint32_t)(0x0u));
  /* 11308e39 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11308e3c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11308e3f push eax */
  push32((uint32_t)(EAX));
  /* 11308e40 call dword ptr [0x11335360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335360))), 0x11308e46u);
  /* 11308e46 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11308e49 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11308e4c push edx */
  push32((uint32_t)(EDX));
  /* 11308e4d push 0 */
  push32((uint32_t)(0x0u));
  /* 11308e4f mov eax, dword ptr [0x1133412c] */
  EAX = (r32((uint32_t)(0x1133412c)));
  /* 11308e54 push eax */
  push32((uint32_t)(EAX));
  /* 11308e55 call dword ptr [0x11335370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335370))), 0x11308e5bu);
  /* 11308e5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11308e5e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11308e61 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11308e64 jmp 0x11308e07 */
  goto L_11308e07;
L_11308e66:;
  /* 11308e66 mov edx, dword ptr [0x11334128] */
  EDX = (r32((uint32_t)(0x11334128)));
  /* 11308e6c push edx */
  push32((uint32_t)(EDX));
  /* 11308e6d push 0 */
  push32((uint32_t)(0x0u));
  /* 11308e6f mov eax, dword ptr [0x1133412c] */
  EAX = (r32((uint32_t)(0x1133412c)));
  /* 11308e74 push eax */
  push32((uint32_t)(EAX));
  /* 11308e75 call dword ptr [0x11335370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335370))), 0x11308e7bu);
  /* 11308e7b mov ecx, dword ptr [0x1133412c] */
  ECX = (r32((uint32_t)(0x1133412c)));
  /* 11308e81 push ecx */
  push32((uint32_t)(ECX));
  /* 11308e82 call dword ptr [0x1133536c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133536c))), 0x11308e88u);
  /* 11308e88 mov esp, ebp */
  ESP = (EBP);
  /* 11308e8a pop ebp */
  EBP = (pop32());
  /* 11308e8b ret  */
  ESPCHK(0x11308df0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x11308e90 (73 bytes, 19 insns) */
void f_11308e90(void) {
  FTRACE(0x11308e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11308e90 push ebp */
  push32((uint32_t)(EBP));
  /* 11308e91 mov ebp, esp */
  EBP = (ESP);
  /* 11308e93 cmp dword ptr [0x11332778], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11332778))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308e9a je 0x11308eae */
  if (C.zf) goto L_11308eae;
  /* 11308e9c cmp dword ptr [0x11332778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308ea3 jne 0x11308ed7 */
  if (!C.zf) goto L_11308ed7;
  /* 11308ea5 cmp dword ptr [0x1133277c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1133277c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308eac jne 0x11308ed7 */
  if (!C.zf) goto L_11308ed7;
L_11308eae:;
  /* 11308eae push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11308eb3 call 0x11308ee0 */
  push32(0x11308eb8u); f_11308ee0();
  /* 11308eb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11308ebb cmp dword ptr [0x113328e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113328e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308ec2 je 0x11308eca */
  if (C.zf) goto L_11308eca;
  /* 11308ec4 call dword ptr [0x113328e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113328e8))), 0x11308ecau);
L_11308eca:;
  /* 11308eca push 0xff */
  push32((uint32_t)(0xffu));
  /* 11308ecf call 0x11308ee0 */
  push32(0x11308ed4u); f_11308ee0();
  /* 11308ed4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11308ed7:;
  /* 11308ed7 pop ebp */
  EBP = (pop32());
  /* 11308ed8 ret  */
  ESPCHK(0x11308e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ee0 @ 0x11308ee0 (447 bytes, 131 insns) */
void f_11308ee0(void) {
  FTRACE(0x11308ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11308ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 11308ee1 mov ebp, esp */
  EBP = (ESP);
  /* 11308ee3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11308ee9 push ebx */
  push32((uint32_t)(EBX));
  /* 11308eea push esi */
  push32((uint32_t)(ESI));
  /* 11308eeb push edi */
  push32((uint32_t)(EDI));
  /* 11308eec mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11308ef3 jmp 0x11308efe */
  goto L_11308efe;
L_11308ef5:;
  /* 11308ef5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11308ef8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11308efb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11308efe:;
  /* 11308efe cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308f02 jae 0x11308f17 */
  if (!C.cf) goto L_11308f17;
  /* 11308f04 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11308f07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11308f0a cmp edx, dword ptr [ecx*8 + 0x11330ab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x11330ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308f11 jne 0x11308f15 */
  if (!C.zf) goto L_11308f15;
  /* 11308f13 jmp 0x11308f17 */
  goto L_11308f17;
L_11308f15:;
  /* 11308f15 jmp 0x11308ef5 */
  goto L_11308ef5;
L_11308f17:;
  /* 11308f17 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11308f1a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11308f1d cmp ecx, dword ptr [eax*8 + 0x11330ab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11330ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308f24 jne 0x11309098 */
  if (!C.zf) goto L_11309098;
  /* 11308f2a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308f31 je 0x11308f54 */
  if (C.zf) goto L_11308f54;
  /* 11308f33 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11308f36 mov eax, dword ptr [edx*8 + 0x11330ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11330ab4)));
  /* 11308f3d push eax */
  push32((uint32_t)(EAX));
  /* 11308f3e push 0 */
  push32((uint32_t)(0x0u));
  /* 11308f40 push 0 */
  push32((uint32_t)(0x0u));
  /* 11308f42 push 0 */
  push32((uint32_t)(0x0u));
  /* 11308f44 push 1 */
  push32((uint32_t)(0x1u));
  /* 11308f46 call 0x11305670 */
  push32(0x11308f4bu); f_11305670();
  /* 11308f4b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11308f4e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308f51 jne 0x11308f54 */
  if (!C.zf) goto L_11308f54;
  /* 11308f53 int3  */
  x86_unimpl("int3 @ 0x11308f53");
L_11308f54:;
  /* 11308f54 cmp dword ptr [0x11332778], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11332778))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308f5b je 0x11308f6f */
  if (C.zf) goto L_11308f6f;
  /* 11308f5d cmp dword ptr [0x11332778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308f64 jne 0x11308fa8 */
  if (!C.zf) goto L_11308fa8;
  /* 11308f66 cmp dword ptr [0x1133277c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1133277c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308f6d jne 0x11308fa8 */
  if (!C.zf) goto L_11308fa8;
L_11308f6f:;
  /* 11308f6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11308f71 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11308f74 push ecx */
  push32((uint32_t)(ECX));
  /* 11308f75 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11308f78 mov eax, dword ptr [edx*8 + 0x11330ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11330ab4)));
  /* 11308f7f push eax */
  push32((uint32_t)(EAX));
  /* 11308f80 call 0x113093e0 */
  push32(0x11308f85u); f_113093e0();
  /* 11308f85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11308f88 push eax */
  push32((uint32_t)(EAX));
  /* 11308f89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11308f8c mov edx, dword ptr [ecx*8 + 0x11330ab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x11330ab4)));
  /* 11308f93 push edx */
  push32((uint32_t)(EDX));
  /* 11308f94 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11308f96 call dword ptr [0x113353a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353a4))), 0x11308f9cu);
  /* 11308f9c push eax */
  push32((uint32_t)(EAX));
  /* 11308f9d call dword ptr [0x113353a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353a8))), 0x11308fa3u);
  /* 11308fa3 jmp 0x11309098 */
  goto L_11309098;
L_11308fa8:;
  /* 11308fa8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308faf je 0x11309098 */
  if (C.zf) goto L_11309098;
  /* 11308fb5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11308fba lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 11308fc0 push eax */
  push32((uint32_t)(EAX));
  /* 11308fc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11308fc3 call dword ptr [0x113353c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353c0))), 0x11308fc9u);
  /* 11308fc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11308fcb jne 0x11308fe1 */
  if (!C.zf) goto L_11308fe1;
  /* 11308fcd push 0x1132d7f4 */
  push32((uint32_t)(0x1132d7f4u));
  /* 11308fd2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11308fd8 push ecx */
  push32((uint32_t)(ECX));
  /* 11308fd9 call 0x11309560 */
  push32(0x11308fdeu); f_11309560();
  /* 11308fde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11308fe1:;
  /* 11308fe1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 11308fe7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11308fea mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11308fed push eax */
  push32((uint32_t)(EAX));
  /* 11308fee call 0x113093e0 */
  push32(0x11308ff3u); f_113093e0();
  /* 11308ff3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11308ff6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11308ff9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11308ffc jbe 0x1130902a */
  if ((C.cf||C.zf)) goto L_1130902a;
  /* 11308ffe lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11309004 push ecx */
  push32((uint32_t)(ECX));
  /* 11309005 call 0x113093e0 */
  push32(0x1130900au); f_113093e0();
  /* 1130900a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130900d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11309010 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 11309014 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11309017 push 3 */
  push32((uint32_t)(0x3u));
  /* 11309019 push 0x1132d7f0 */
  push32((uint32_t)(0x1132d7f0u));
  /* 1130901e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11309021 push ecx */
  push32((uint32_t)(ECX));
  /* 11309022 call 0x11309dd0 */
  push32(0x11309027u); f_11309dd0();
  /* 11309027 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1130902a:;
  /* 1130902a push 0x1132e248 */
  push32((uint32_t)(0x1132e248u));
  /* 1130902f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11309035 push edx */
  push32((uint32_t)(EDX));
  /* 11309036 call 0x11309560 */
  push32(0x1130903bu); f_11309560();
  /* 1130903b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130903e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11309041 push eax */
  push32((uint32_t)(EAX));
  /* 11309042 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 11309048 push ecx */
  push32((uint32_t)(ECX));
  /* 11309049 call 0x11309570 */
  push32(0x1130904eu); f_11309570();
  /* 1130904e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11309051 push 0x1132d768 */
  push32((uint32_t)(0x1132d768u));
  /* 11309056 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1130905c push edx */
  push32((uint32_t)(EDX));
  /* 1130905d call 0x11309570 */
  push32(0x11309062u); f_11309570();
  /* 11309062 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11309065 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11309068 mov ecx, dword ptr [eax*8 + 0x11330ab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x11330ab4)));
  /* 1130906f push ecx */
  push32((uint32_t)(ECX));
  /* 11309070 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11309076 push edx */
  push32((uint32_t)(EDX));
  /* 11309077 call 0x11309570 */
  push32(0x1130907cu); f_11309570();
  /* 1130907c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130907f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11309084 push 0x1132e220 */
  push32((uint32_t)(0x1132e220u));
  /* 11309089 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 1130908f push eax */
  push32((uint32_t)(EAX));
  /* 11309090 call 0x11309d10 */
  push32(0x11309095u); f_11309d10();
  /* 11309095 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11309098:;
  /* 11309098 pop edi */
  EDI = (pop32());
  /* 11309099 pop esi */
  ESI = (pop32());
  /* 1130909a pop ebx */
  EBX = (pop32());
  /* 1130909b mov esp, ebp */
  ESP = (EBP);
  /* 1130909d pop ebp */
  EBP = (pop32());
  /* 1130909e ret  */
  ESPCHK(0x11308ee0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x113090a0 (80 bytes, 27 insns) */
void f_113090a0(void) {
  FTRACE(0x113090a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113090a0 push ebp */
  push32((uint32_t)(EBP));
  /* 113090a1 mov ebp, esp */
  EBP = (ESP);
  /* 113090a3 push ecx */
  push32((uint32_t)(ECX));
  /* 113090a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113090ab jmp 0x113090b6 */
  goto L_113090b6;
L_113090ad:;
  /* 113090ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113090b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113090b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113090b6:;
  /* 113090b6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113090ba jae 0x113090cf */
  if (!C.cf) goto L_113090cf;
  /* 113090bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113090bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113090c2 cmp edx, dword ptr [ecx*8 + 0x11330ab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x11330ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113090c9 jne 0x113090cd */
  if (!C.zf) goto L_113090cd;
  /* 113090cb jmp 0x113090cf */
  goto L_113090cf;
L_113090cd:;
  /* 113090cd jmp 0x113090ad */
  goto L_113090ad;
L_113090cf:;
  /* 113090cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113090d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113090d5 cmp ecx, dword ptr [eax*8 + 0x11330ab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11330ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113090dc jne 0x113090ea */
  if (!C.zf) goto L_113090ea;
  /* 113090de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113090e1 mov eax, dword ptr [edx*8 + 0x11330ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11330ab4)));
  /* 113090e8 jmp 0x113090ec */
  goto L_113090ec;
L_113090ea:;
  /* 113090ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113090ec:;
  /* 113090ec mov esp, ebp */
  ESP = (EBP);
  /* 113090ee pop ebp */
  EBP = (pop32());
  /* 113090ef ret  */
  ESPCHK(0x113090a0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x113090f0 (66 bytes, 28 insns) */
void f_113090f0(void) {
  FTRACE(0x113090f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113090f0 push ebp */
  push32((uint32_t)(EBP));
  /* 113090f1 mov ebp, esp */
  EBP = (ESP);
  /* 113090f3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113090f7 jne 0x11309117 */
  if (!C.zf) goto L_11309117;
  /* 113090f9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113090fd jge 0x11309117 */
  if ((C.sf==C.of)) goto L_11309117;
  /* 113090ff push 1 */
  push32((uint32_t)(0x1u));
  /* 11309101 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11309104 push eax */
  push32((uint32_t)(EAX));
  /* 11309105 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11309108 push ecx */
  push32((uint32_t)(ECX));
  /* 11309109 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130910c push edx */
  push32((uint32_t)(EDX));
  /* 1130910d call 0x11309140 */
  push32(0x11309112u); f_11309140();
  /* 11309112 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11309115 jmp 0x1130912d */
  goto L_1130912d;
L_11309117:;
  /* 11309117 push 0 */
  push32((uint32_t)(0x0u));
  /* 11309119 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1130911c push eax */
  push32((uint32_t)(EAX));
  /* 1130911d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11309120 push ecx */
  push32((uint32_t)(ECX));
  /* 11309121 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11309124 push edx */
  push32((uint32_t)(EDX));
  /* 11309125 call 0x11309140 */
  push32(0x1130912au); f_11309140();
  /* 1130912a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1130912d:;
  /* 1130912d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11309130 pop ebp */
  EBP = (pop32());
  /* 11309131 ret  */
  ESPCHK(0x113090f0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x11309140 (194 bytes, 71 insns) */
void f_11309140(void) {
  FTRACE(0x11309140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11309140 push ebp */
  push32((uint32_t)(EBP));
  /* 11309141 mov ebp, esp */
  EBP = (ESP);
  /* 11309143 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11309146 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11309149 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1130914c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309150 je 0x11309169 */
  if (C.zf) goto L_11309169;
  /* 11309152 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11309155 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11309158 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130915b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130915e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11309161 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11309164 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11309166 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11309169:;
  /* 11309169 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130916c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1130916f:;
  /* 1130916f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11309172 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11309174 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11309177 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1130917a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130917d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1130917f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11309182 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11309185 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309189 jbe 0x113091a1 */
  if ((C.cf||C.zf)) goto L_113091a1;
  /* 1130918b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130918e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11309191 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11309194 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11309196 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11309199 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130919c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1130919f jmp 0x113091b5 */
  goto L_113091b5;
L_113091a1:;
  /* 113091a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113091a4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113091a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113091aa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 113091ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113091af add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113091b2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_113091b5:;
  /* 113091b5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113091b9 ja 0x1130916f */
  if ((!C.cf&&!C.zf)) goto L_1130916f;
  /* 113091bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113091be mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 113091c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113091c4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113091c7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113091ca:;
  /* 113091ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113091cd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113091cf mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 113091d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113091d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113091d8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113091da mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 113091dc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113091df mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 113091e2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 113091e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113091e7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113091ea mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113091ed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113091f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113091f3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113091f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113091f9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113091fc jb 0x113091ca */
  if (C.cf) goto L_113091ca;
  /* 113091fe mov esp, ebp */
  ESP = (EBP);
  /* 11309200 pop ebp */
  EBP = (pop32());
  /* 11309201 ret  */
  ESPCHK(0x11309140u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x11309210 (63 bytes, 24 insns) */
void f_11309210(void) {
  FTRACE(0x11309210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11309210 push ebp */
  push32((uint32_t)(EBP));
  /* 11309211 mov ebp, esp */
  EBP = (ESP);
  /* 11309213 push ecx */
  push32((uint32_t)(ECX));
  /* 11309214 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309218 jne 0x11309229 */
  if (!C.zf) goto L_11309229;
  /* 1130921a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130921e jge 0x11309229 */
  if ((C.sf==C.of)) goto L_11309229;
  /* 11309220 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11309227 jmp 0x11309230 */
  goto L_11309230;
L_11309229:;
  /* 11309229 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11309230:;
  /* 11309230 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11309233 push eax */
  push32((uint32_t)(EAX));
  /* 11309234 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11309237 push ecx */
  push32((uint32_t)(ECX));
  /* 11309238 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130923b push edx */
  push32((uint32_t)(EDX));
  /* 1130923c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130923f push eax */
  push32((uint32_t)(EAX));
  /* 11309240 call 0x11309140 */
  push32(0x11309245u); f_11309140();
  /* 11309245 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11309248 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130924b mov esp, ebp */
  ESP = (EBP);
  /* 1130924d pop ebp */
  EBP = (pop32());
  /* 1130924e ret  */
  ESPCHK(0x11309210u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x11309250 (30 bytes, 14 insns) */
void f_11309250(void) {
  FTRACE(0x11309250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11309250 push ebp */
  push32((uint32_t)(EBP));
  /* 11309251 mov ebp, esp */
  EBP = (ESP);
  /* 11309253 push 0 */
  push32((uint32_t)(0x0u));
  /* 11309255 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11309258 push eax */
  push32((uint32_t)(EAX));
  /* 11309259 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130925c push ecx */
  push32((uint32_t)(ECX));
  /* 1130925d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11309260 push edx */
  push32((uint32_t)(EDX));
  /* 11309261 call 0x11309140 */
  push32(0x11309266u); f_11309140();
  /* 11309266 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11309269 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130926c pop ebp */
  EBP = (pop32());
  /* 1130926d ret  */
  ESPCHK(0x11309250u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x11309270 (72 bytes, 28 insns) */
void f_11309270(void) {
  FTRACE(0x11309270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11309270 push ebp */
  push32((uint32_t)(EBP));
  /* 11309271 mov ebp, esp */
  EBP = (ESP);
  /* 11309273 push ecx */
  push32((uint32_t)(ECX));
  /* 11309274 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309278 jne 0x11309291 */
  if (!C.zf) goto L_11309291;
  /* 1130927a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130927e jg 0x11309291 */
  if ((!C.zf&&C.sf==C.of)) goto L_11309291;
  /* 11309280 jl 0x11309288 */
  if ((C.sf!=C.of)) goto L_11309288;
  /* 11309282 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309286 jae 0x11309291 */
  if (!C.cf) goto L_11309291;
L_11309288:;
  /* 11309288 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1130928f jmp 0x11309298 */
  goto L_11309298;
L_11309291:;
  /* 11309291 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11309298:;
  /* 11309298 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130929b push eax */
  push32((uint32_t)(EAX));
  /* 1130929c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1130929f push ecx */
  push32((uint32_t)(ECX));
  /* 113092a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113092a3 push edx */
  push32((uint32_t)(EDX));
  /* 113092a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113092a7 push eax */
  push32((uint32_t)(EAX));
  /* 113092a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113092ab push ecx */
  push32((uint32_t)(ECX));
  /* 113092ac call 0x113092c0 */
  push32(0x113092b1u); f_113092c0();
  /* 113092b1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113092b4 mov esp, ebp */
  ESP = (EBP);
  /* 113092b6 pop ebp */
  EBP = (pop32());
  /* 113092b7 ret  */
  ESPCHK(0x11309270u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x113092c0 (242 bytes, 91 insns) */
void f_113092c0(void) {
  FTRACE(0x113092c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113092c0 push ebp */
  push32((uint32_t)(EBP));
  /* 113092c1 mov ebp, esp */
  EBP = (ESP);
  /* 113092c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113092c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113092c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113092cc cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113092d0 je 0x113092f4 */
  if (C.zf) goto L_113092f4;
  /* 113092d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113092d5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 113092d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113092db add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113092de mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113092e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113092e4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 113092e6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113092e9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113092ec neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 113092ee mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113092f1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_113092f4:;
  /* 113092f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113092f7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_113092fa:;
  /* 113092fa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113092fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113092ff push ecx */
  push32((uint32_t)(ECX));
  /* 11309300 push eax */
  push32((uint32_t)(EAX));
  /* 11309301 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11309304 push edx */
  push32((uint32_t)(EDX));
  /* 11309305 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11309308 push eax */
  push32((uint32_t)(EAX));
  /* 11309309 call 0x1130d240 */
  push32(0x1130930eu); f_1130d240();
  /* 1130930e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11309311 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11309314 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11309316 push edx */
  push32((uint32_t)(EDX));
  /* 11309317 push ecx */
  push32((uint32_t)(ECX));
  /* 11309318 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130931b push eax */
  push32((uint32_t)(EAX));
  /* 1130931c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130931f push ecx */
  push32((uint32_t)(ECX));
  /* 11309320 call 0x1130d1d0 */
  push32(0x11309325u); f_1130d1d0();
  /* 11309325 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11309328 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1130932b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130932f jbe 0x11309347 */
  if ((C.cf||C.zf)) goto L_11309347;
  /* 11309331 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11309334 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11309337 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130933a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1130933c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130933f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11309342 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11309345 jmp 0x1130935b */
  goto L_1130935b;
L_11309347:;
  /* 11309347 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130934a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130934d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11309350 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11309352 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11309355 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11309358 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1130935b:;
  /* 1130935b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130935f ja 0x113092fa */
  if ((!C.cf&&!C.zf)) goto L_113092fa;
  /* 11309361 jb 0x11309369 */
  if (C.cf) goto L_11309369;
  /* 11309363 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309367 ja 0x113092fa */
  if ((!C.cf&&!C.zf)) goto L_113092fa;
L_11309369:;
  /* 11309369 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130936c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1130936f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11309372 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11309375 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11309378:;
  /* 11309378 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130937b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1130937d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11309380 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11309383 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11309386 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11309388 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1130938a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130938d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11309390 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11309392 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11309395 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11309398 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1130939b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130939e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113093a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113093a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113093a7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113093aa jb 0x11309378 */
  if (C.cf) goto L_11309378;
  /* 113093ac mov esp, ebp */
  ESP = (EBP);
  /* 113093ae pop ebp */
  EBP = (pop32());
  /* 113093af ret 0x14 */
  ESPCHK(0x113092c0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x113093c0 (31 bytes, 15 insns) */
void f_113093c0(void) {
  FTRACE(0x113093c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113093c0 push ebp */
  push32((uint32_t)(EBP));
  /* 113093c1 mov ebp, esp */
  EBP = (ESP);
  /* 113093c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113093c5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113093c8 push eax */
  push32((uint32_t)(EAX));
  /* 113093c9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113093cc push ecx */
  push32((uint32_t)(ECX));
  /* 113093cd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113093d0 push edx */
  push32((uint32_t)(EDX));
  /* 113093d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113093d4 push eax */
  push32((uint32_t)(EAX));
  /* 113093d5 call 0x113092c0 */
  push32(0x113093dau); f_113092c0();
  /* 113093da mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113093dd pop ebp */
  EBP = (pop32());
  /* 113093de ret  */
  ESPCHK(0x113093c0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x113093e0 (123 bytes, 44 insns) */
void f_113093e0(void) {
  FTRACE(0x113093e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113093e0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 113093e4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 113093ea je 0x11309400 */
  if (C.zf) goto L_11309400;
L_113093ec:;
  /* 113093ec mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 113093ee inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 113093ef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 113093f1 je 0x11309433 */
  if (C.zf) goto L_11309433;
  /* 113093f3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 113093f9 jne 0x113093ec */
  if (!C.zf) goto L_113093ec;
  /* 113093fb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11309400:;
  /* 11309400 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11309402 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11309407 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11309409 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130940c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1130940e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11309411 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11309416 je 0x11309400 */
  if (C.zf) goto L_11309400;
  /* 11309418 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1130941b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1130941d je 0x11309451 */
  if (C.zf) goto L_11309451;
  /* 1130941f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11309421 je 0x11309447 */
  if (C.zf) goto L_11309447;
  /* 11309423 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11309428 je 0x1130943d */
  if (C.zf) goto L_1130943d;
  /* 1130942a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1130942f je 0x11309433 */
  if (C.zf) goto L_11309433;
  /* 11309431 jmp 0x11309400 */
  goto L_11309400;
L_11309433:;
  /* 11309433 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11309436 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1130943a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130943c ret  */
  ESPCHK(0x113093e0u, _esp0);
  ESP += 4; return;
L_1130943d:;
  /* 1130943d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11309440 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11309444 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11309446 ret  */
  ESPCHK(0x113093e0u, _esp0);
  ESP += 4; return;
L_11309447:;
  /* 11309447 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1130944a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1130944e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11309450 ret  */
  ESPCHK(0x113093e0u, _esp0);
  ESP += 4; return;
L_11309451:;
  /* 11309451 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11309454 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11309458 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130945a ret  */
  ESPCHK(0x113093e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009460 @ 0x11309460 (249 bytes, 93 insns) */
void f_11309460(void) {
  FTRACE(0x11309460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11309460 push ebp */
  push32((uint32_t)(EBP));
  /* 11309461 mov ebp, esp */
  EBP = (ESP);
  /* 11309463 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11309466 push ebx */
  push32((uint32_t)(EBX));
  /* 11309467 push esi */
  push32((uint32_t)(ESI));
  /* 11309468 push edi */
  push32((uint32_t)(EDI));
  /* 11309469 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1130946c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1130946f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 11309472 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11309475:;
  /* 11309475 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309479 jne 0x11309499 */
  if (!C.zf) goto L_11309499;
  /* 1130947b push 0x1132e280 */
  push32((uint32_t)(0x1132e280u));
  /* 11309480 push 0 */
  push32((uint32_t)(0x0u));
  /* 11309482 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11309484 push 0x1132e274 */
  push32((uint32_t)(0x1132e274u));
  /* 11309489 push 2 */
  push32((uint32_t)(0x2u));
  /* 1130948b call 0x11305670 */
  push32(0x11309490u); f_11305670();
  /* 11309490 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11309493 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309496 jne 0x11309499 */
  if (!C.zf) goto L_11309499;
  /* 11309498 int3  */
  x86_unimpl("int3 @ 0x11309498");
L_11309499:;
  /* 11309499 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1130949b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130949d jne 0x11309475 */
  if (!C.zf) goto L_11309475;
L_1130949f:;
  /* 1130949f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113094a3 jne 0x113094c3 */
  if (!C.zf) goto L_113094c3;
  /* 113094a5 push 0x1132e264 */
  push32((uint32_t)(0x1132e264u));
  /* 113094aa push 0 */
  push32((uint32_t)(0x0u));
  /* 113094ac push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 113094ae push 0x1132e274 */
  push32((uint32_t)(0x1132e274u));
  /* 113094b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 113094b5 call 0x11305670 */
  push32(0x113094bau); f_11305670();
  /* 113094ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113094bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113094c0 jne 0x113094c3 */
  if (!C.zf) goto L_113094c3;
  /* 113094c2 int3  */
  x86_unimpl("int3 @ 0x113094c2");
L_113094c3:;
  /* 113094c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113094c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113094c7 jne 0x1130949f */
  if (!C.zf) goto L_1130949f;
  /* 113094c9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113094cc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 113094d3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 113094d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113094d9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 113094dc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113094df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113094e2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 113094e4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113094e7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113094ea mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 113094ed mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113094f0 push edx */
  push32((uint32_t)(EDX));
  /* 113094f1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113094f4 push eax */
  push32((uint32_t)(EAX));
  /* 113094f5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113094f8 push ecx */
  push32((uint32_t)(ECX));
  /* 113094f9 call 0x1130d540 */
  push32(0x113094feu); f_1130d540();
  /* 113094fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11309501 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11309504 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11309507 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1130950a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130950d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11309510 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11309513 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11309516 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130951a jl 0x1130953e */
  if ((C.sf!=C.of)) goto L_1130953e;
  /* 1130951c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130951f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11309521 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11309524 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11309526 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1130952c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1130952f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11309532 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11309534 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11309537 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130953a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1130953c jmp 0x1130954f */
  goto L_1130954f;
L_1130953e:;
  /* 1130953e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11309541 push eax */
  push32((uint32_t)(EAX));
  /* 11309542 push 0 */
  push32((uint32_t)(0x0u));
  /* 11309544 call 0x1130d2c0 */
  push32(0x11309549u); f_1130d2c0();
  /* 11309549 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130954c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1130954f:;
  /* 1130954f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11309552 pop edi */
  EDI = (pop32());
  /* 11309553 pop esi */
  ESI = (pop32());
  /* 11309554 pop ebx */
  EBX = (pop32());
  /* 11309555 mov esp, ebp */
  ESP = (EBP);
  /* 11309557 pop ebp */
  EBP = (pop32());
  /* 11309558 ret  */
  ESPCHK(0x11309460u, _esp0);
  ESP += 4; return;
}

/* FUN_10009560 @ 0x11309560 (7 bytes, 3 insns) */
void f_11309560(void) {
  FTRACE(0x11309560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11309560 push edi */
  push32((uint32_t)(EDI));
  /* 11309561 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11309565 jmp 0x113095d1 */
  jmp_ind(0x113095d1u); return;
}

/* FUN_10009570 @ 0x11309570 (224 bytes, 84 insns) */
void f_11309570(void) {
  FTRACE(0x11309570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11309570 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11309574 push edi */
  push32((uint32_t)(EDI));
  /* 11309575 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1130957b je 0x1130958c */
  if (C.zf) goto L_1130958c;
L_1130957d:;
  /* 1130957d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1130957f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11309580 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11309582 je 0x113095bf */
  if (C.zf) goto L_113095bf;
  /* 11309584 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1130958a jne 0x1130957d */
  if (!C.zf) goto L_1130957d;
L_1130958c:;
  /* 1130958c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1130958e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11309593 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11309595 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11309598 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1130959a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130959d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 113095a2 je 0x1130958c */
  if (C.zf) goto L_1130958c;
  /* 113095a4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 113095a7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 113095a9 je 0x113095ce */
  if (C.zf) goto L_113095ce;
  /* 113095ab test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 113095ad je 0x113095c9 */
  if (C.zf) goto L_113095c9;
  /* 113095af test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 113095b4 je 0x113095c4 */
  if (C.zf) goto L_113095c4;
  /* 113095b6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 113095bb je 0x113095bf */
  if (C.zf) goto L_113095bf;
  /* 113095bd jmp 0x1130958c */
  goto L_1130958c;
L_113095bf:;
  /* 113095bf lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 113095c2 jmp 0x113095d1 */
  goto L_113095d1;
L_113095c4:;
  /* 113095c4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 113095c7 jmp 0x113095d1 */
  goto L_113095d1;
L_113095c9:;
  /* 113095c9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 113095cc jmp 0x113095d1 */
  goto L_113095d1;
L_113095ce:;
  /* 113095ce lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_113095d1:;
  /* 113095d1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 113095d5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 113095db je 0x113095f6 */
  if (C.zf) goto L_113095f6;
L_113095dd:;
  /* 113095dd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113095df inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 113095e0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 113095e2 je 0x11309648 */
  if (C.zf) goto L_11309648;
  /* 113095e4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 113095e6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 113095e7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 113095ed jne 0x113095dd */
  if (!C.zf) goto L_113095dd;
  /* 113095ef jmp 0x113095f6 */
  goto L_113095f6;
L_113095f1:;
  /* 113095f1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 113095f3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_113095f6:;
  /* 113095f6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 113095fb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 113095fd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113095ff xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11309602 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11309604 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11309606 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11309609 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1130960e je 0x113095f1 */
  if (C.zf) goto L_113095f1;
  /* 11309610 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11309612 je 0x11309648 */
  if (C.zf) goto L_11309648;
  /* 11309614 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11309616 je 0x1130963f */
  if (C.zf) goto L_1130963f;
  /* 11309618 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1130961e je 0x11309632 */
  if (C.zf) goto L_11309632;
  /* 11309620 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11309626 je 0x1130962a */
  if (C.zf) goto L_1130962a;
  /* 11309628 jmp 0x113095f1 */
  goto L_113095f1;
L_1130962a:;
  /* 1130962a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1130962c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11309630 pop edi */
  EDI = (pop32());
  /* 11309631 ret  */
  ESPCHK(0x11309570u, _esp0);
  ESP += 4; return;
L_11309632:;
  /* 11309632 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11309635 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11309639 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1130963d pop edi */
  EDI = (pop32());
  /* 1130963e ret  */
  ESPCHK(0x11309570u, _esp0);
  ESP += 4; return;
L_1130963f:;
  /* 1130963f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11309642 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11309646 pop edi */
  EDI = (pop32());
  /* 11309647 ret  */
  ESPCHK(0x11309570u, _esp0);
  ESP += 4; return;
L_11309648:;
  /* 11309648 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1130964a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1130964e pop edi */
  EDI = (pop32());
  /* 1130964f ret  */
  ESPCHK(0x11309570u, _esp0);
  ESP += 4; return;
}

/* FUN_10009650 @ 0x11309650 (243 bytes, 91 insns) */
void f_11309650(void) {
  FTRACE(0x11309650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11309650 push ebp */
  push32((uint32_t)(EBP));
  /* 11309651 mov ebp, esp */
  EBP = (ESP);
  /* 11309653 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11309656 push ebx */
  push32((uint32_t)(EBX));
  /* 11309657 push esi */
  push32((uint32_t)(ESI));
  /* 11309658 push edi */
  push32((uint32_t)(EDI));
  /* 11309659 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1130965c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1130965f:;
  /* 1130965f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309663 jne 0x11309683 */
  if (!C.zf) goto L_11309683;
  /* 11309665 push 0x1132e280 */
  push32((uint32_t)(0x1132e280u));
  /* 1130966a push 0 */
  push32((uint32_t)(0x0u));
  /* 1130966c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1130966e push 0x1132e290 */
  push32((uint32_t)(0x1132e290u));
  /* 11309673 push 2 */
  push32((uint32_t)(0x2u));
  /* 11309675 call 0x11305670 */
  push32(0x1130967au); f_11305670();
  /* 1130967a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130967d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309680 jne 0x11309683 */
  if (!C.zf) goto L_11309683;
  /* 11309682 int3  */
  x86_unimpl("int3 @ 0x11309682");
L_11309683:;
  /* 11309683 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11309685 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11309687 jne 0x1130965f */
  if (!C.zf) goto L_1130965f;
L_11309689:;
  /* 11309689 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130968d jne 0x113096ad */
  if (!C.zf) goto L_113096ad;
  /* 1130968f push 0x1132e264 */
  push32((uint32_t)(0x1132e264u));
  /* 11309694 push 0 */
  push32((uint32_t)(0x0u));
  /* 11309696 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11309698 push 0x1132e290 */
  push32((uint32_t)(0x1132e290u));
  /* 1130969d push 2 */
  push32((uint32_t)(0x2u));
  /* 1130969f call 0x11305670 */
  push32(0x113096a4u); f_11305670();
  /* 113096a4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113096a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113096aa jne 0x113096ad */
  if (!C.zf) goto L_113096ad;
  /* 113096ac int3  */
  x86_unimpl("int3 @ 0x113096ac");
L_113096ad:;
  /* 113096ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113096af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113096b1 jne 0x11309689 */
  if (!C.zf) goto L_11309689;
  /* 113096b3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113096b6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 113096bd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113096c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113096c3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 113096c6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113096c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113096cc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 113096ce mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 113096d1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113096d4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 113096d7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113096da push ecx */
  push32((uint32_t)(ECX));
  /* 113096db mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113096de push edx */
  push32((uint32_t)(EDX));
  /* 113096df mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113096e2 push eax */
  push32((uint32_t)(EAX));
  /* 113096e3 call 0x1130d540 */
  push32(0x113096e8u); f_1130d540();
  /* 113096e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113096eb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 113096ee mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113096f1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 113096f4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113096f7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113096fa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 113096fd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11309700 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309704 jl 0x11309728 */
  if ((C.sf!=C.of)) goto L_11309728;
  /* 11309706 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11309709 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1130970b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1130970e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11309710 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11309716 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11309719 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130971c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1130971e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11309721 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11309724 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11309726 jmp 0x11309739 */
  goto L_11309739;
L_11309728:;
  /* 11309728 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130972b push edx */
  push32((uint32_t)(EDX));
  /* 1130972c push 0 */
  push32((uint32_t)(0x0u));
  /* 1130972e call 0x1130d2c0 */
  push32(0x11309733u); f_1130d2c0();
  /* 11309733 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11309736 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_11309739:;
  /* 11309739 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1130973c pop edi */
  EDI = (pop32());
  /* 1130973d pop esi */
  ESI = (pop32());
  /* 1130973e pop ebx */
  EBX = (pop32());
  /* 1130973f mov esp, ebp */
  ESP = (EBP);
  /* 11309741 pop ebp */
  EBP = (pop32());
  /* 11309742 ret  */
  ESPCHK(0x11309650u, _esp0);
  ESP += 4; return;
}

/* FUN_10009750 @ 0x11309750 (47 bytes, 17 insns) */
void f_11309750(void) {
  FTRACE(0x11309750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11309750 push ecx */
  push32((uint32_t)(ECX));
  /* 11309751 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309756 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1130975a jb 0x11309770 */
  if (C.cf) goto L_11309770;
L_1130975c:;
  /* 1130975c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11309762 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11309767 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11309769 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130976e jae 0x1130975c */
  if (!C.cf) goto L_1130975c;
L_11309770:;
  /* 11309770 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11309772 mov eax, esp */
  EAX = (ESP);
  /* 11309774 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11309776 mov esp, ecx */
  ESP = (ECX);
  /* 11309778 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1130977a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1130977d push eax */
  push32((uint32_t)(EAX));
  /* 1130977e ret  */
  ESPCHK(0x11309750u, _esp0);
  ESP += 4; return;
}

/* FUN_10009780 @ 0x11309780 (507 bytes, 151 insns) [1 switch table(s)] */
void f_11309780(void) {
  FTRACE(0x11309780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11309780 push ebp */
  push32((uint32_t)(EBP));
  /* 11309781 mov ebp, esp */
  EBP = (ESP);
  /* 11309783 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11309786 push esi */
  push32((uint32_t)(ESI));
  /* 11309787 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130978b je 0x11309793 */
  if (C.zf) goto L_11309793;
  /* 1130978d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309791 jne 0x11309798 */
  if (!C.zf) goto L_11309798;
L_11309793:;
  /* 11309793 jmp 0x11309968 */
  goto L_11309968;
L_11309798:;
  /* 11309798 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130979c je 0x113097b4 */
  if (C.zf) goto L_113097b4;
  /* 1130979e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113097a2 je 0x113097b4 */
  if (C.zf) goto L_113097b4;
  /* 113097a4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113097a8 je 0x113097b4 */
  if (C.zf) goto L_113097b4;
  /* 113097aa cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113097ae jne 0x11309891 */
  if (!C.zf) goto L_11309891;
L_113097b4:;
  /* 113097b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 113097b6 call 0x11309fb0 */
  push32(0x113097bbu); f_11309fb0();
  /* 113097bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113097be cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113097c2 je 0x113097ca */
  if (C.zf) goto L_113097ca;
  /* 113097c4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113097c8 jne 0x1130980f */
  if (!C.zf) goto L_1130980f;
L_113097ca:;
  /* 113097ca cmp dword ptr [0x113328fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113328fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113097d1 jne 0x1130980f */
  if (!C.zf) goto L_1130980f;
  /* 113097d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 113097d5 push 0x113099b0 */
  push32((uint32_t)(0x113099b0u));
  /* 113097da call dword ptr [0x1133535c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133535c))), 0x113097e0u);
  /* 113097e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113097e3 jne 0x113097f1 */
  if (!C.zf) goto L_113097f1;
  /* 113097e5 mov dword ptr [0x113328fc], 1 */
  w32((uint32_t)(0x113328fc), (0x1u));
  /* 113097ef jmp 0x1130980f */
  goto L_1130980f;
L_113097f1:;
  /* 113097f1 call dword ptr [0x113353e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353e8))), 0x113097f7u);
  /* 113097f7 mov esi, eax */
  ESI = (EAX);
  /* 113097f9 call 0x1130e490 */
  push32(0x113097feu); f_1130e490();
  /* 113097fe mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11309800 push 1 */
  push32((uint32_t)(0x1u));
  /* 11309802 call 0x1130a050 */
  push32(0x11309807u); f_1130a050();
  /* 11309807 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130980a jmp 0x11309968 */
  goto L_11309968;
L_1130980f:;
  /* 1130980f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11309812 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11309815 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11309818 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130981b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1130981e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309822 ja 0x11309882 */
  if ((!C.cf&&!C.zf)) goto L_11309882;
  /* 11309824 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11309827 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11309829 mov dl, byte ptr [eax + 0x1130998f] */
  DL = (r8((uint32_t)(EAX + 0x1130998f)));
  /* 1130982f jmp dword ptr [edx*4 + 0x1130997b] */
  switch (EDX) {
    case 0: goto L_11309836;
    case 1: goto L_11309870;
    case 2: goto L_1130984a;
    case 3: goto L_1130985d;
    case 4: goto L_11309882;
    default: x86_unimpl("switch@0x1130982f out of table"); return;
  }
L_11309836:;
  /* 11309836 mov ecx, dword ptr [0x113328ec] */
  ECX = (r32((uint32_t)(0x113328ec)));
  /* 1130983c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1130983f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11309842 mov dword ptr [0x113328ec], edx */
  w32((uint32_t)(0x113328ec), (EDX));
  /* 11309848 jmp 0x11309882 */
  goto L_11309882;
L_1130984a:;
  /* 1130984a mov eax, dword ptr [0x113328f0] */
  EAX = (r32((uint32_t)(0x113328f0)));
  /* 1130984f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11309852 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11309855 mov dword ptr [0x113328f0], ecx */
  w32((uint32_t)(0x113328f0), (ECX));
  /* 1130985b jmp 0x11309882 */
  goto L_11309882;
L_1130985d:;
  /* 1130985d mov edx, dword ptr [0x113328f4] */
  EDX = (r32((uint32_t)(0x113328f4)));
  /* 11309863 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11309866 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11309869 mov dword ptr [0x113328f4], eax */
  w32((uint32_t)(0x113328f4), (EAX));
  /* 1130986e jmp 0x11309882 */
  goto L_11309882;
L_11309870:;
  /* 11309870 mov ecx, dword ptr [0x113328f8] */
  ECX = (r32((uint32_t)(0x113328f8)));
  /* 11309876 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11309879 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130987c mov dword ptr [0x113328f8], edx */
  w32((uint32_t)(0x113328f8), (EDX));
L_11309882:;
  /* 11309882 push 1 */
  push32((uint32_t)(0x1u));
  /* 11309884 call 0x1130a050 */
  push32(0x11309889u); f_1130a050();
  /* 11309889 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130988c jmp 0x11309963 */
  goto L_11309963;
L_11309891:;
  /* 11309891 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309895 je 0x113098a8 */
  if (C.zf) goto L_113098a8;
  /* 11309897 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130989b je 0x113098a8 */
  if (C.zf) goto L_113098a8;
  /* 1130989d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113098a1 je 0x113098a8 */
  if (C.zf) goto L_113098a8;
  /* 113098a3 jmp 0x11309968 */
  goto L_11309968;
L_113098a8:;
  /* 113098a8 call 0x11305ff0 */
  push32(0x113098adu); f_11305ff0();
  /* 113098ad mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113098b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113098b3 cmp dword ptr [eax + 0x50], 0x11330c00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x11330c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113098ba jne 0x11309905 */
  if (!C.zf) goto L_11309905;
  /* 113098bc push 0x133 */
  push32((uint32_t)(0x133u));
  /* 113098c1 push 0x1132e29c */
  push32((uint32_t)(0x1132e29cu));
  /* 113098c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 113098c8 mov ecx, dword ptr [0x11330c80] */
  ECX = (r32((uint32_t)(0x11330c80)));
  /* 113098ce push ecx */
  push32((uint32_t)(ECX));
  /* 113098cf call 0x113065b0 */
  push32(0x113098d4u); f_113065b0();
  /* 113098d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113098d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113098da mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 113098dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113098e0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113098e4 je 0x11309903 */
  if (C.zf) goto L_11309903;
  /* 113098e6 mov ecx, dword ptr [0x11330c80] */
  ECX = (r32((uint32_t)(0x11330c80)));
  /* 113098ec push ecx */
  push32((uint32_t)(ECX));
  /* 113098ed push 0x11330c00 */
  push32((uint32_t)(0x11330c00u));
  /* 113098f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113098f5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 113098f8 push eax */
  push32((uint32_t)(EAX));
  /* 113098f9 call 0x1130ce90 */
  push32(0x113098feu); f_1130ce90();
  /* 113098fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11309901 jmp 0x11309905 */
  goto L_11309905;
L_11309903:;
  /* 11309903 jmp 0x11309968 */
  goto L_11309968;
L_11309905:;
  /* 11309905 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11309908 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1130990b push edx */
  push32((uint32_t)(EDX));
  /* 1130990c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130990f push eax */
  push32((uint32_t)(EAX));
  /* 11309910 call 0x11309c90 */
  push32(0x11309915u); f_11309c90();
  /* 11309915 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11309918 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1130991b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130991f jne 0x11309923 */
  if (!C.zf) goto L_11309923;
  /* 11309921 jmp 0x11309968 */
  goto L_11309968;
L_11309923:;
  /* 11309923 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11309926 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11309929 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1130992c:;
  /* 1130992c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130992f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11309932 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309935 jne 0x11309963 */
  if (!C.zf) goto L_11309963;
  /* 11309937 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130993a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130993d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11309940 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11309943 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11309946 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11309949 mov edx, dword ptr [0x11330c84] */
  EDX = (r32((uint32_t)(0x11330c84)));
  /* 1130994f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11309952 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11309955 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11309958 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130995a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130995d jb 0x11309961 */
  if (C.cf) goto L_11309961;
  /* 1130995f jmp 0x11309963 */
  goto L_11309963;
L_11309961:;
  /* 11309961 jmp 0x1130992c */
  goto L_1130992c;
L_11309963:;
  /* 11309963 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11309966 jmp 0x11309976 */
  goto L_11309976;
L_11309968:;
  /* 11309968 call 0x1130e480 */
  push32(0x1130996du); f_1130e480();
  /* 1130996d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11309973 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11309976:;
  /* 11309976 pop esi */
  ESI = (pop32());
  /* 11309977 mov esp, ebp */
  ESP = (EBP);
  /* 11309979 pop ebp */
  EBP = (pop32());
  /* 1130997a ret  */
  ESPCHK(0x11309780u, _esp0);
  ESP += 4; return;
}

/* FUN_100099b0 @ 0x113099b0 (146 bytes, 45 insns) */
void f_113099b0(void) {
  FTRACE(0x113099b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113099b0 push ebp */
  push32((uint32_t)(EBP));
  /* 113099b1 mov ebp, esp */
  EBP = (ESP);
  /* 113099b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113099b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 113099b8 call 0x11309fb0 */
  push32(0x113099bdu); f_11309fb0();
  /* 113099bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113099c0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113099c4 jne 0x113099de */
  if (!C.zf) goto L_113099de;
  /* 113099c6 mov dword ptr [ebp - 8], 0x113328ec */
  w32((uint32_t)(EBP + -0x8), (0x113328ecu));
  /* 113099cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113099d0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113099d2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113099d5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 113099dc jmp 0x113099f4 */
  goto L_113099f4;
L_113099de:;
  /* 113099de mov dword ptr [ebp - 8], 0x113328f0 */
  w32((uint32_t)(EBP + -0x8), (0x113328f0u));
  /* 113099e5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113099e8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113099ea mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113099ed mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_113099f4:;
  /* 113099f4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113099f8 jne 0x11309a08 */
  if (!C.zf) goto L_11309a08;
  /* 113099fa push 1 */
  push32((uint32_t)(0x1u));
  /* 113099fc call 0x1130a050 */
  push32(0x11309a01u); f_1130a050();
  /* 11309a01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11309a04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11309a06 jmp 0x11309a3c */
  goto L_11309a3c;
L_11309a08:;
  /* 11309a08 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309a0c je 0x11309a2d */
  if (C.zf) goto L_11309a2d;
  /* 11309a0e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11309a11 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11309a17 push 1 */
  push32((uint32_t)(0x1u));
  /* 11309a19 call 0x1130a050 */
  push32(0x11309a1eu); f_1130a050();
  /* 11309a1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11309a21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11309a24 push edx */
  push32((uint32_t)(EDX));
  /* 11309a25 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x11309a28u);
  /* 11309a28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11309a2b jmp 0x11309a37 */
  goto L_11309a37;
L_11309a2d:;
  /* 11309a2d push 1 */
  push32((uint32_t)(0x1u));
  /* 11309a2f call 0x1130a050 */
  push32(0x11309a34u); f_1130a050();
  /* 11309a34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11309a37:;
  /* 11309a37 mov eax, 1 */
  EAX = (0x1u);
L_11309a3c:;
  /* 11309a3c mov esp, ebp */
  ESP = (EBP);
  /* 11309a3e pop ebp */
  EBP = (pop32());
  /* 11309a3f ret 4 */
  ESPCHK(0x113099b0u, _esp0);
  ESP += 8; return;
}

/* FUN_10009a50 @ 0x11309a50 (522 bytes, 162 insns) [1 switch table(s)] */
void f_11309a50(void) {
  FTRACE(0x11309a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11309a50 push ebp */
  push32((uint32_t)(EBP));
  /* 11309a51 mov ebp, esp */
  EBP = (ESP);
  /* 11309a53 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11309a56 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11309a5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11309a60 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11309a63 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11309a66 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11309a69 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11309a6c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309a70 ja 0x11309b1e */
  if ((!C.cf&&!C.zf)) goto L_11309b1e;
  /* 11309a76 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11309a79 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11309a7b mov dl, byte ptr [eax + 0x11309c72] */
  DL = (r8((uint32_t)(EAX + 0x11309c72)));
  /* 11309a81 jmp dword ptr [edx*4 + 0x11309c5a] */
  switch (EDX) {
    case 0: goto L_11309a88;
    case 1: goto L_11309af3;
    case 2: goto L_11309ad9;
    case 3: goto L_11309aa5;
    case 4: goto L_11309abf;
    case 5: goto L_11309b1e;
    default: x86_unimpl("switch@0x11309a81 out of table"); return;
  }
L_11309a88:;
  /* 11309a88 mov dword ptr [ebp - 0x18], 0x113328ec */
  w32((uint32_t)(EBP + -0x18), (0x113328ecu));
  /* 11309a8f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11309a92 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11309a94 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11309a97 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11309a9a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11309a9d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11309aa0 jmp 0x11309b26 */
  goto L_11309b26;
L_11309aa5:;
  /* 11309aa5 mov dword ptr [ebp - 0x18], 0x113328f0 */
  w32((uint32_t)(EBP + -0x18), (0x113328f0u));
  /* 11309aac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11309aaf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11309ab1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11309ab4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11309ab7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11309aba mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11309abd jmp 0x11309b26 */
  goto L_11309b26;
L_11309abf:;
  /* 11309abf mov dword ptr [ebp - 0x18], 0x113328f4 */
  w32((uint32_t)(EBP + -0x18), (0x113328f4u));
  /* 11309ac6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11309ac9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11309acb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11309ace mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11309ad1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11309ad4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11309ad7 jmp 0x11309b26 */
  goto L_11309b26;
L_11309ad9:;
  /* 11309ad9 mov dword ptr [ebp - 0x18], 0x113328f8 */
  w32((uint32_t)(EBP + -0x18), (0x113328f8u));
  /* 11309ae0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11309ae3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11309ae5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11309ae8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11309aeb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11309aee mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11309af1 jmp 0x11309b26 */
  goto L_11309b26;
L_11309af3:;
  /* 11309af3 call 0x11305ff0 */
  push32(0x11309af8u); f_11305ff0();
  /* 11309af8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11309afb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11309afe mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11309b01 push edx */
  push32((uint32_t)(EDX));
  /* 11309b02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11309b05 push eax */
  push32((uint32_t)(EAX));
  /* 11309b06 call 0x11309c90 */
  push32(0x11309b0bu); f_11309c90();
  /* 11309b0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11309b0e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11309b11 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11309b14 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11309b17 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11309b19 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11309b1c jmp 0x11309b26 */
  goto L_11309b26;
L_11309b1e:;
  /* 11309b1e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11309b21 jmp 0x11309c56 */
  goto L_11309c56;
L_11309b26:;
  /* 11309b26 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309b2a je 0x11309b36 */
  if (C.zf) goto L_11309b36;
  /* 11309b2c push 1 */
  push32((uint32_t)(0x1u));
  /* 11309b2e call 0x11309fb0 */
  push32(0x11309b33u); f_11309fb0();
  /* 11309b33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11309b36:;
  /* 11309b36 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309b3a jne 0x11309b53 */
  if (!C.zf) goto L_11309b53;
  /* 11309b3c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309b40 je 0x11309b4c */
  if (C.zf) goto L_11309b4c;
  /* 11309b42 push 1 */
  push32((uint32_t)(0x1u));
  /* 11309b44 call 0x1130a050 */
  push32(0x11309b49u); f_1130a050();
  /* 11309b49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11309b4c:;
  /* 11309b4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11309b4e jmp 0x11309c56 */
  goto L_11309c56;
L_11309b53:;
  /* 11309b53 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309b57 jne 0x11309b70 */
  if (!C.zf) goto L_11309b70;
  /* 11309b59 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309b5d je 0x11309b69 */
  if (C.zf) goto L_11309b69;
  /* 11309b5f push 1 */
  push32((uint32_t)(0x1u));
  /* 11309b61 call 0x1130a050 */
  push32(0x11309b66u); f_1130a050();
  /* 11309b66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11309b69:;
  /* 11309b69 push 3 */
  push32((uint32_t)(0x3u));
  /* 11309b6b call 0x11305d70 */
  push32(0x11309b70u); f_11305d70();
L_11309b70:;
  /* 11309b70 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309b74 je 0x11309b82 */
  if (C.zf) goto L_11309b82;
  /* 11309b76 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309b7a je 0x11309b82 */
  if (C.zf) goto L_11309b82;
  /* 11309b7c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309b80 jne 0x11309bae */
  if (!C.zf) goto L_11309bae;
L_11309b82:;
  /* 11309b82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11309b85 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11309b88 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11309b8b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11309b8e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 11309b95 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309b99 jne 0x11309bae */
  if (!C.zf) goto L_11309bae;
  /* 11309b9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11309b9e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11309ba1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11309ba4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11309ba7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_11309bae:;
  /* 11309bae cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309bb2 jne 0x11309bf0 */
  if (!C.zf) goto L_11309bf0;
  /* 11309bb4 mov eax, dword ptr [0x11330c78] */
  EAX = (r32((uint32_t)(0x11330c78)));
  /* 11309bb9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11309bbc jmp 0x11309bc7 */
  goto L_11309bc7;
L_11309bbe:;
  /* 11309bbe mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11309bc1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11309bc4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11309bc7:;
  /* 11309bc7 mov edx, dword ptr [0x11330c78] */
  EDX = (r32((uint32_t)(0x11330c78)));
  /* 11309bcd add edx, dword ptr [0x11330c7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11330c7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11309bd3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309bd6 jge 0x11309bee */
  if ((C.sf==C.of)) goto L_11309bee;
  /* 11309bd8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11309bdb imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11309bde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11309be1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11309be4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11309bec jmp 0x11309bbe */
  goto L_11309bbe;
L_11309bee:;
  /* 11309bee jmp 0x11309bf9 */
  goto L_11309bf9;
L_11309bf0:;
  /* 11309bf0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11309bf3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11309bf9:;
  /* 11309bf9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309bfd je 0x11309c09 */
  if (C.zf) goto L_11309c09;
  /* 11309bff push 1 */
  push32((uint32_t)(0x1u));
  /* 11309c01 call 0x1130a050 */
  push32(0x11309c06u); f_1130a050();
  /* 11309c06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11309c09:;
  /* 11309c09 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309c0d jne 0x11309c20 */
  if (!C.zf) goto L_11309c20;
  /* 11309c0f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11309c12 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11309c15 push edx */
  push32((uint32_t)(EDX));
  /* 11309c16 push 8 */
  push32((uint32_t)(0x8u));
  /* 11309c18 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11309c1bu);
  /* 11309c1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11309c1e jmp 0x11309c2a */
  goto L_11309c2a;
L_11309c20:;
  /* 11309c20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11309c23 push eax */
  push32((uint32_t)(EAX));
  /* 11309c24 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11309c27u);
  /* 11309c27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11309c2a:;
  /* 11309c2a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309c2e je 0x11309c3c */
  if (C.zf) goto L_11309c3c;
  /* 11309c30 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309c34 je 0x11309c3c */
  if (C.zf) goto L_11309c3c;
  /* 11309c36 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309c3a jne 0x11309c54 */
  if (!C.zf) goto L_11309c54;
L_11309c3c:;
  /* 11309c3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11309c3f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11309c42 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 11309c45 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309c49 jne 0x11309c54 */
  if (!C.zf) goto L_11309c54;
  /* 11309c4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11309c4e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11309c51 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_11309c54:;
  /* 11309c54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11309c56:;
  /* 11309c56 mov esp, ebp */
  ESP = (EBP);
  /* 11309c58 pop ebp */
  EBP = (pop32());
  /* 11309c59 ret  */
  ESPCHK(0x11309a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c90 @ 0x11309c90 (91 bytes, 35 insns) */
void f_11309c90(void) {
  FTRACE(0x11309c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11309c90 push ebp */
  push32((uint32_t)(EBP));
  /* 11309c91 mov ebp, esp */
  EBP = (ESP);
  /* 11309c93 push ecx */
  push32((uint32_t)(ECX));
  /* 11309c94 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11309c97 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11309c9a:;
  /* 11309c9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11309c9d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11309ca0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309ca3 je 0x11309cc3 */
  if (C.zf) goto L_11309cc3;
  /* 11309ca5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11309ca8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11309cab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11309cae mov ecx, dword ptr [0x11330c84] */
  ECX = (r32((uint32_t)(0x11330c84)));
  /* 11309cb4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11309cb7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11309cba add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11309cbc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309cbf jae 0x11309cc3 */
  if (!C.cf) goto L_11309cc3;
  /* 11309cc1 jmp 0x11309c9a */
  goto L_11309c9a;
L_11309cc3:;
  /* 11309cc3 mov eax, dword ptr [0x11330c84] */
  EAX = (r32((uint32_t)(0x11330c84)));
  /* 11309cc8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11309ccb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11309cce add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11309cd0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309cd3 jae 0x11309ce5 */
  if (!C.cf) goto L_11309ce5;
  /* 11309cd5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11309cd8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11309cdb cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309cde jne 0x11309ce5 */
  if (!C.zf) goto L_11309ce5;
  /* 11309ce0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11309ce3 jmp 0x11309ce7 */
  goto L_11309ce7;
L_11309ce5:;
  /* 11309ce5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11309ce7:;
  /* 11309ce7 mov esp, ebp */
  ESP = (EBP);
  /* 11309ce9 pop ebp */
  EBP = (pop32());
  /* 11309cea ret  */
  ESPCHK(0x11309c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10009cf0 @ 0x11309cf0 (13 bytes, 6 insns) */
void f_11309cf0(void) {
  FTRACE(0x11309cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11309cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11309cf1 mov ebp, esp */
  EBP = (ESP);
  /* 11309cf3 call 0x11305ff0 */
  push32(0x11309cf8u); f_11305ff0();
  /* 11309cf8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11309cfb pop ebp */
  EBP = (pop32());
  /* 11309cfc ret  */
  ESPCHK(0x11309cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d00 @ 0x11309d00 (13 bytes, 6 insns) */
void f_11309d00(void) {
  FTRACE(0x11309d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11309d00 push ebp */
  push32((uint32_t)(EBP));
  /* 11309d01 mov ebp, esp */
  EBP = (ESP);
  /* 11309d03 call 0x11305ff0 */
  push32(0x11309d08u); f_11305ff0();
  /* 11309d08 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11309d0b pop ebp */
  EBP = (pop32());
  /* 11309d0c ret  */
  ESPCHK(0x11309d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d10 @ 0x11309d10 (187 bytes, 54 insns) */
void f_11309d10(void) {
  FTRACE(0x11309d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11309d10 push ebp */
  push32((uint32_t)(EBP));
  /* 11309d11 mov ebp, esp */
  EBP = (ESP);
  /* 11309d13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11309d16 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11309d1d cmp dword ptr [0x11332900], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332900))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309d24 jne 0x11309d83 */
  if (!C.zf) goto L_11309d83;
  /* 11309d26 push 0x1132d6c8 */
  push32((uint32_t)(0x1132d6c8u));
  /* 11309d2b call dword ptr [0x113353b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353b8))), 0x11309d31u);
  /* 11309d31 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11309d34 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309d38 je 0x11309d57 */
  if (C.zf) goto L_11309d57;
  /* 11309d3a push 0x1132e2cc */
  push32((uint32_t)(0x1132e2ccu));
  /* 11309d3f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11309d42 push eax */
  push32((uint32_t)(EAX));
  /* 11309d43 call dword ptr [0x113353b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353b4))), 0x11309d49u);
  /* 11309d49 mov dword ptr [0x11332900], eax */
  w32((uint32_t)(0x11332900), (EAX));
  /* 11309d4e cmp dword ptr [0x11332900], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332900))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309d55 jne 0x11309d5b */
  if (!C.zf) goto L_11309d5b;
L_11309d57:;
  /* 11309d57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11309d59 jmp 0x11309dc7 */
  goto L_11309dc7;
L_11309d5b:;
  /* 11309d5b push 0x1132e2bc */
  push32((uint32_t)(0x1132e2bcu));
  /* 11309d60 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11309d63 push ecx */
  push32((uint32_t)(ECX));
  /* 11309d64 call dword ptr [0x113353b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353b4))), 0x11309d6au);
  /* 11309d6a mov dword ptr [0x11332904], eax */
  w32((uint32_t)(0x11332904), (EAX));
  /* 11309d6f push 0x1132e2a8 */
  push32((uint32_t)(0x1132e2a8u));
  /* 11309d74 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11309d77 push edx */
  push32((uint32_t)(EDX));
  /* 11309d78 call dword ptr [0x113353b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353b4))), 0x11309d7eu);
  /* 11309d7e mov dword ptr [0x11332908], eax */
  w32((uint32_t)(0x11332908), (EAX));
L_11309d83:;
  /* 11309d83 cmp dword ptr [0x11332904], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332904))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309d8a je 0x11309d95 */
  if (C.zf) goto L_11309d95;
  /* 11309d8c call dword ptr [0x11332904] */
  call_ind((uint32_t)(r32((uint32_t)(0x11332904))), 0x11309d92u);
  /* 11309d92 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11309d95:;
  /* 11309d95 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309d99 je 0x11309db1 */
  if (C.zf) goto L_11309db1;
  /* 11309d9b cmp dword ptr [0x11332908], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332908))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309da2 je 0x11309db1 */
  if (C.zf) goto L_11309db1;
  /* 11309da4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11309da7 push eax */
  push32((uint32_t)(EAX));
  /* 11309da8 call dword ptr [0x11332908] */
  call_ind((uint32_t)(r32((uint32_t)(0x11332908))), 0x11309daeu);
  /* 11309dae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11309db1:;
  /* 11309db1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11309db4 push ecx */
  push32((uint32_t)(ECX));
  /* 11309db5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11309db8 push edx */
  push32((uint32_t)(EDX));
  /* 11309db9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11309dbc push eax */
  push32((uint32_t)(EAX));
  /* 11309dbd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11309dc0 push ecx */
  push32((uint32_t)(ECX));
  /* 11309dc1 call dword ptr [0x11332900] */
  call_ind((uint32_t)(r32((uint32_t)(0x11332900))), 0x11309dc7u);
L_11309dc7:;
  /* 11309dc7 mov esp, ebp */
  ESP = (EBP);
  /* 11309dc9 pop ebp */
  EBP = (pop32());
  /* 11309dca ret  */
  ESPCHK(0x11309d10u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x11309dd0 (254 bytes, 109 insns) */
void f_11309dd0(void) {
  FTRACE(0x11309dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11309dd0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11309dd4 push edi */
  push32((uint32_t)(EDI));
  /* 11309dd5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11309dd7 je 0x11309e53 */
  if (C.zf) goto L_11309e53;
  /* 11309dd9 push esi */
  push32((uint32_t)(ESI));
  /* 11309dda push ebx */
  push32((uint32_t)(EBX));
  /* 11309ddb mov ebx, ecx */
  EBX = (ECX);
  /* 11309ddd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11309de1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11309de7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11309deb jne 0x11309df4 */
  if (!C.zf) goto L_11309df4;
  /* 11309ded shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11309df0 jne 0x11309e61 */
  if (!C.zf) goto L_11309e61;
  /* 11309df2 jmp 0x11309e15 */
  goto L_11309e15;
L_11309df4:;
  /* 11309df4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11309df6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11309df7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11309df9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11309dfa dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11309dfb je 0x11309e22 */
  if (C.zf) goto L_11309e22;
  /* 11309dfd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11309dff je 0x11309e2a */
  if (C.zf) goto L_11309e2a;
  /* 11309e01 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11309e07 jne 0x11309df4 */
  if (!C.zf) goto L_11309df4;
  /* 11309e09 mov ebx, ecx */
  EBX = (ECX);
  /* 11309e0b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11309e0e jne 0x11309e61 */
  if (!C.zf) goto L_11309e61;
L_11309e10:;
  /* 11309e10 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11309e13 je 0x11309e22 */
  if (C.zf) goto L_11309e22;
L_11309e15:;
  /* 11309e15 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11309e17 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11309e18 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11309e1a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11309e1b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11309e1d je 0x11309e4e */
  if (C.zf) goto L_11309e4e;
  /* 11309e1f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11309e20 jne 0x11309e15 */
  if (!C.zf) goto L_11309e15;
L_11309e22:;
  /* 11309e22 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11309e26 pop ebx */
  EBX = (pop32());
  /* 11309e27 pop esi */
  ESI = (pop32());
  /* 11309e28 pop edi */
  EDI = (pop32());
  /* 11309e29 ret  */
  ESPCHK(0x11309dd0u, _esp0);
  ESP += 4; return;
L_11309e2a:;
  /* 11309e2a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11309e30 je 0x11309e44 */
  if (C.zf) goto L_11309e44;
L_11309e32:;
  /* 11309e32 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11309e34 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11309e35 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11309e36 je 0x11309ec6 */
  if (C.zf) goto L_11309ec6;
  /* 11309e3c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11309e42 jne 0x11309e32 */
  if (!C.zf) goto L_11309e32;
L_11309e44:;
  /* 11309e44 mov ebx, ecx */
  EBX = (ECX);
  /* 11309e46 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11309e49 jne 0x11309eb7 */
  if (!C.zf) goto L_11309eb7;
L_11309e4b:;
  /* 11309e4b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11309e4d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11309e4e:;
  /* 11309e4e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11309e4f jne 0x11309e4b */
  if (!C.zf) goto L_11309e4b;
  /* 11309e51 pop ebx */
  EBX = (pop32());
  /* 11309e52 pop esi */
  ESI = (pop32());
L_11309e53:;
  /* 11309e53 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11309e57 pop edi */
  EDI = (pop32());
  /* 11309e58 ret  */
  ESPCHK(0x11309dd0u, _esp0);
  ESP += 4; return;
L_11309e59:;
  /* 11309e59 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11309e5b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11309e5e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11309e5f je 0x11309e10 */
  if (C.zf) goto L_11309e10;
L_11309e61:;
  /* 11309e61 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11309e66 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11309e68 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11309e6a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11309e6d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11309e6f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11309e71 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11309e74 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11309e79 je 0x11309e59 */
  if (C.zf) goto L_11309e59;
  /* 11309e7b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11309e7d je 0x11309eab */
  if (C.zf) goto L_11309eab;
  /* 11309e7f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11309e81 je 0x11309ea1 */
  if (C.zf) goto L_11309ea1;
  /* 11309e83 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11309e89 je 0x11309e97 */
  if (C.zf) goto L_11309e97;
  /* 11309e8b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11309e91 jne 0x11309e59 */
  if (!C.zf) goto L_11309e59;
  /* 11309e93 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11309e95 jmp 0x11309eaf */
  goto L_11309eaf;
L_11309e97:;
  /* 11309e97 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11309e9d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11309e9f jmp 0x11309eaf */
  goto L_11309eaf;
L_11309ea1:;
  /* 11309ea1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11309ea7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11309ea9 jmp 0x11309eaf */
  goto L_11309eaf;
L_11309eab:;
  /* 11309eab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11309ead mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11309eaf:;
  /* 11309eaf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11309eb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11309eb4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11309eb5 je 0x11309ec1 */
  if (C.zf) goto L_11309ec1;
L_11309eb7:;
  /* 11309eb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11309eb9:;
  /* 11309eb9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11309ebb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11309ebe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11309ebf jne 0x11309eb9 */
  if (!C.zf) goto L_11309eb9;
L_11309ec1:;
  /* 11309ec1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11309ec4 jne 0x11309e4b */
  if (!C.zf) goto L_11309e4b;
L_11309ec6:;
  /* 11309ec6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11309eca pop ebx */
  EBX = (pop32());
  /* 11309ecb pop esi */
  ESI = (pop32());
  /* 11309ecc pop edi */
  EDI = (pop32());
  /* 11309ecd ret  */
  ESPCHK(0x11309dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ed0 @ 0x11309ed0 (55 bytes, 16 insns) */
void f_11309ed0(void) {
  FTRACE(0x11309ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11309ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 11309ed1 mov ebp, esp */
  EBP = (ESP);
  /* 11309ed3 mov eax, dword ptr [0x11330b84] */
  EAX = (r32((uint32_t)(0x11330b84)));
  /* 11309ed8 push eax */
  push32((uint32_t)(EAX));
  /* 11309ed9 call dword ptr [0x11335364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335364))), 0x11309edfu);
  /* 11309edf mov ecx, dword ptr [0x11330b74] */
  ECX = (r32((uint32_t)(0x11330b74)));
  /* 11309ee5 push ecx */
  push32((uint32_t)(ECX));
  /* 11309ee6 call dword ptr [0x11335364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335364))), 0x11309eecu);
  /* 11309eec mov edx, dword ptr [0x11330b64] */
  EDX = (r32((uint32_t)(0x11330b64)));
  /* 11309ef2 push edx */
  push32((uint32_t)(EDX));
  /* 11309ef3 call dword ptr [0x11335364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335364))), 0x11309ef9u);
  /* 11309ef9 mov eax, dword ptr [0x11330b44] */
  EAX = (r32((uint32_t)(0x11330b44)));
  /* 11309efe push eax */
  push32((uint32_t)(EAX));
  /* 11309eff call dword ptr [0x11335364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335364))), 0x11309f05u);
  /* 11309f05 pop ebp */
  EBP = (pop32());
  /* 11309f06 ret  */
  ESPCHK(0x11309ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f10 @ 0x11309f10 (159 bytes, 47 insns) */
void f_11309f10(void) {
  FTRACE(0x11309f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11309f10 push ebp */
  push32((uint32_t)(EBP));
  /* 11309f11 mov ebp, esp */
  EBP = (ESP);
  /* 11309f13 push ecx */
  push32((uint32_t)(ECX));
  /* 11309f14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11309f1b jmp 0x11309f26 */
  goto L_11309f26;
L_11309f1d:;
  /* 11309f1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11309f20 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11309f23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11309f26:;
  /* 11309f26 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309f2a jge 0x11309f79 */
  if ((C.sf==C.of)) goto L_11309f79;
  /* 11309f2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11309f2f cmp dword ptr [ecx*4 + 0x11330b40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11330b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309f37 je 0x11309f77 */
  if (C.zf) goto L_11309f77;
  /* 11309f39 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309f3d je 0x11309f77 */
  if (C.zf) goto L_11309f77;
  /* 11309f3f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309f43 je 0x11309f77 */
  if (C.zf) goto L_11309f77;
  /* 11309f45 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309f49 je 0x11309f77 */
  if (C.zf) goto L_11309f77;
  /* 11309f4b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309f4f je 0x11309f77 */
  if (C.zf) goto L_11309f77;
  /* 11309f51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11309f54 mov eax, dword ptr [edx*4 + 0x11330b40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11330b40)));
  /* 11309f5b push eax */
  push32((uint32_t)(EAX));
  /* 11309f5c call dword ptr [0x11335390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335390))), 0x11309f62u);
  /* 11309f62 push 2 */
  push32((uint32_t)(0x2u));
  /* 11309f64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11309f67 mov edx, dword ptr [ecx*4 + 0x11330b40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11330b40)));
  /* 11309f6e push edx */
  push32((uint32_t)(EDX));
  /* 11309f6f call 0x11307040 */
  push32(0x11309f74u); f_11307040();
  /* 11309f74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11309f77:;
  /* 11309f77 jmp 0x11309f1d */
  goto L_11309f1d;
L_11309f79:;
  /* 11309f79 mov eax, dword ptr [0x11330b64] */
  EAX = (r32((uint32_t)(0x11330b64)));
  /* 11309f7e push eax */
  push32((uint32_t)(EAX));
  /* 11309f7f call dword ptr [0x11335390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335390))), 0x11309f85u);
  /* 11309f85 mov ecx, dword ptr [0x11330b74] */
  ECX = (r32((uint32_t)(0x11330b74)));
  /* 11309f8b push ecx */
  push32((uint32_t)(ECX));
  /* 11309f8c call dword ptr [0x11335390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335390))), 0x11309f92u);
  /* 11309f92 mov edx, dword ptr [0x11330b84] */
  EDX = (r32((uint32_t)(0x11330b84)));
  /* 11309f98 push edx */
  push32((uint32_t)(EDX));
  /* 11309f99 call dword ptr [0x11335390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335390))), 0x11309f9fu);
  /* 11309f9f mov eax, dword ptr [0x11330b44] */
  EAX = (r32((uint32_t)(0x11330b44)));
  /* 11309fa4 push eax */
  push32((uint32_t)(EAX));
  /* 11309fa5 call dword ptr [0x11335390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335390))), 0x11309fabu);
  /* 11309fab mov esp, ebp */
  ESP = (EBP);
  /* 11309fad pop ebp */
  EBP = (pop32());
  /* 11309fae ret  */
  ESPCHK(0x11309f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10009fb0 @ 0x11309fb0 (151 bytes, 46 insns) */
void f_11309fb0(void) {
  FTRACE(0x11309fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11309fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11309fb1 mov ebp, esp */
  EBP = (ESP);
  /* 11309fb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11309fb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11309fb7 cmp dword ptr [eax*4 + 0x11330b40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11330b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309fbf jne 0x1130a032 */
  if (!C.zf) goto L_1130a032;
  /* 11309fc1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 11309fc6 push 0x1132e2d8 */
  push32((uint32_t)(0x1132e2d8u));
  /* 11309fcb push 2 */
  push32((uint32_t)(0x2u));
  /* 11309fcd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11309fcf call 0x113065b0 */
  push32(0x11309fd4u); f_113065b0();
  /* 11309fd4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11309fd7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11309fda cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309fde jne 0x11309fea */
  if (!C.zf) goto L_11309fea;
  /* 11309fe0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11309fe2 call 0x11305520 */
  push32(0x11309fe7u); f_11305520();
  /* 11309fe7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11309fea:;
  /* 11309fea push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11309fec call 0x11309fb0 */
  push32(0x11309ff1u); f_11309fb0();
  /* 11309ff1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11309ff4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11309ff7 cmp dword ptr [ecx*4 + 0x11330b40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11330b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11309fff jne 0x1130a01a */
  if (!C.zf) goto L_1130a01a;
  /* 1130a001 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130a004 push edx */
  push32((uint32_t)(EDX));
  /* 1130a005 call dword ptr [0x11335364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335364))), 0x1130a00bu);
  /* 1130a00b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a00e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130a011 mov dword ptr [eax*4 + 0x11330b40], ecx */
  w32((uint32_t)(EAX*4 + 0x11330b40), (ECX));
  /* 1130a018 jmp 0x1130a028 */
  goto L_1130a028;
L_1130a01a:;
  /* 1130a01a push 2 */
  push32((uint32_t)(0x2u));
  /* 1130a01c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130a01f push edx */
  push32((uint32_t)(EDX));
  /* 1130a020 call 0x11307040 */
  push32(0x1130a025u); f_11307040();
  /* 1130a025 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1130a028:;
  /* 1130a028 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1130a02a call 0x1130a050 */
  push32(0x1130a02fu); f_1130a050();
  /* 1130a02f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1130a032:;
  /* 1130a032 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a035 mov ecx, dword ptr [eax*4 + 0x11330b40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11330b40)));
  /* 1130a03c push ecx */
  push32((uint32_t)(ECX));
  /* 1130a03d call dword ptr [0x11335354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335354))), 0x1130a043u);
  /* 1130a043 mov esp, ebp */
  ESP = (EBP);
  /* 1130a045 pop ebp */
  EBP = (pop32());
  /* 1130a046 ret  */
  ESPCHK(0x11309fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a050 @ 0x1130a050 (22 bytes, 8 insns) */
void f_1130a050(void) {
  FTRACE(0x1130a050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130a050 push ebp */
  push32((uint32_t)(EBP));
  /* 1130a051 mov ebp, esp */
  EBP = (ESP);
  /* 1130a053 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a056 mov ecx, dword ptr [eax*4 + 0x11330b40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11330b40)));
  /* 1130a05d push ecx */
  push32((uint32_t)(ECX));
  /* 1130a05e call dword ptr [0x11335350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335350))), 0x1130a064u);
  /* 1130a064 pop ebp */
  EBP = (pop32());
  /* 1130a065 ret  */
  ESPCHK(0x1130a050u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a070 @ 0x1130a070 (26 bytes, 10 insns) */
void f_1130a070(void) {
  FTRACE(0x1130a070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130a070 push ebp */
  push32((uint32_t)(EBP));
  /* 1130a071 mov ebp, esp */
  EBP = (ESP);
  /* 1130a073 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a076 push eax */
  push32((uint32_t)(EAX));
  /* 1130a077 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130a079 call dword ptr [0x11335358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335358))), 0x1130a07fu);
  /* 1130a07f push 0xff */
  push32((uint32_t)(0xffu));
  /* 1130a084 call dword ptr [0x113352d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113352d4))), 0x1130a08au);
  /* 1130a08a pop ebp */
  EBP = (pop32());
  /* 1130a08b ret  */
  ESPCHK(0x1130a070u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x1130a090 (446 bytes, 130 insns) */
void f_1130a090(void) {
  FTRACE(0x1130a090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130a090 push ebp */
  push32((uint32_t)(EBP));
  /* 1130a091 mov ebp, esp */
  EBP = (ESP);
  /* 1130a093 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130a096 call 0x11305ff0 */
  push32(0x1130a09bu); f_11305ff0();
  /* 1130a09b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1130a09e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130a0a1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 1130a0a4 push ecx */
  push32((uint32_t)(ECX));
  /* 1130a0a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a0a8 push edx */
  push32((uint32_t)(EDX));
  /* 1130a0a9 call 0x1130a250 */
  push32(0x1130a0aeu); f_1130a250();
  /* 1130a0ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a0b1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1130a0b4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a0b8 je 0x1130a0c3 */
  if (C.zf) goto L_1130a0c3;
  /* 1130a0ba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130a0bd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a0c1 jne 0x1130a0d2 */
  if (!C.zf) goto L_1130a0d2;
L_1130a0c3:;
  /* 1130a0c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130a0c6 push ecx */
  push32((uint32_t)(ECX));
  /* 1130a0c7 call dword ptr [0x11335348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335348))), 0x1130a0cdu);
  /* 1130a0cd jmp 0x1130a24a */
  goto L_1130a24a;
L_1130a0d2:;
  /* 1130a0d2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130a0d5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a0d9 jne 0x1130a0ef */
  if (!C.zf) goto L_1130a0ef;
  /* 1130a0db mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130a0de mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1130a0e5 mov eax, 1 */
  EAX = (0x1u);
  /* 1130a0ea jmp 0x1130a24a */
  goto L_1130a24a;
L_1130a0ef:;
  /* 1130a0ef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130a0f2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a0f6 jne 0x1130a100 */
  if (!C.zf) goto L_1130a100;
  /* 1130a0f8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130a0fb jmp 0x1130a24a */
  goto L_1130a24a;
L_1130a100:;
  /* 1130a100 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130a103 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1130a106 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1130a109 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130a10c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 1130a10f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1130a112 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130a115 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130a118 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 1130a11b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130a11e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a122 jne 0x1130a227 */
  if (!C.zf) goto L_1130a227;
  /* 1130a128 mov eax, dword ptr [0x11330c78] */
  EAX = (r32((uint32_t)(0x11330c78)));
  /* 1130a12d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1130a130 jmp 0x1130a13b */
  goto L_1130a13b;
L_1130a132:;
  /* 1130a132 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130a135 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a138 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1130a13b:;
  /* 1130a13b mov edx, dword ptr [0x11330c78] */
  EDX = (r32((uint32_t)(0x11330c78)));
  /* 1130a141 add edx, dword ptr [0x11330c7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11330c7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a147 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a14a jge 0x1130a162 */
  if ((C.sf==C.of)) goto L_1130a162;
  /* 1130a14c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130a14f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130a152 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130a155 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1130a158 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1130a160 jmp 0x1130a132 */
  goto L_1130a132;
L_1130a162:;
  /* 1130a162 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130a165 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 1130a168 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1130a16b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130a16e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a174 jne 0x1130a185 */
  if (!C.zf) goto L_1130a185;
  /* 1130a176 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130a179 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 1130a180 jmp 0x1130a20d */
  goto L_1130a20d;
L_1130a185:;
  /* 1130a185 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130a188 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a18e jne 0x1130a19c */
  if (!C.zf) goto L_1130a19c;
  /* 1130a190 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130a193 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 1130a19a jmp 0x1130a20d */
  goto L_1130a20d;
L_1130a19c:;
  /* 1130a19c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130a19f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a1a5 jne 0x1130a1b3 */
  if (!C.zf) goto L_1130a1b3;
  /* 1130a1a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130a1aa mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 1130a1b1 jmp 0x1130a20d */
  goto L_1130a20d;
L_1130a1b3:;
  /* 1130a1b3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130a1b6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a1bc jne 0x1130a1ca */
  if (!C.zf) goto L_1130a1ca;
  /* 1130a1be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130a1c1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 1130a1c8 jmp 0x1130a20d */
  goto L_1130a20d;
L_1130a1ca:;
  /* 1130a1ca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130a1cd cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a1d3 jne 0x1130a1e1 */
  if (!C.zf) goto L_1130a1e1;
  /* 1130a1d5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130a1d8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 1130a1df jmp 0x1130a20d */
  goto L_1130a20d;
L_1130a1e1:;
  /* 1130a1e1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130a1e4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a1ea jne 0x1130a1f8 */
  if (!C.zf) goto L_1130a1f8;
  /* 1130a1ec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130a1ef mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 1130a1f6 jmp 0x1130a20d */
  goto L_1130a20d;
L_1130a1f8:;
  /* 1130a1f8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130a1fb cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a201 jne 0x1130a20d */
  if (!C.zf) goto L_1130a20d;
  /* 1130a203 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130a206 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1130a20d:;
  /* 1130a20d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130a210 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 1130a213 push edx */
  push32((uint32_t)(EDX));
  /* 1130a214 push 8 */
  push32((uint32_t)(0x8u));
  /* 1130a216 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1130a219u);
  /* 1130a219 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a21c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130a21f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130a222 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 1130a225 jmp 0x1130a23e */
  goto L_1130a23e;
L_1130a227:;
  /* 1130a227 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130a22a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 1130a231 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130a234 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1130a237 push ecx */
  push32((uint32_t)(ECX));
  /* 1130a238 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1130a23bu);
  /* 1130a23b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1130a23e:;
  /* 1130a23e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130a241 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130a244 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 1130a247 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1130a24a:;
  /* 1130a24a mov esp, ebp */
  ESP = (EBP);
  /* 1130a24c pop ebp */
  EBP = (pop32());
  /* 1130a24d ret  */
  ESPCHK(0x1130a090u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a250 @ 0x1130a250 (89 bytes, 35 insns) */
void f_1130a250(void) {
  FTRACE(0x1130a250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130a250 push ebp */
  push32((uint32_t)(EBP));
  /* 1130a251 mov ebp, esp */
  EBP = (ESP);
  /* 1130a253 push ecx */
  push32((uint32_t)(ECX));
  /* 1130a254 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130a257 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1130a25a:;
  /* 1130a25a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130a25d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1130a25f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a262 je 0x1130a282 */
  if (C.zf) goto L_1130a282;
  /* 1130a264 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130a267 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a26a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1130a26d mov ecx, dword ptr [0x11330c84] */
  ECX = (r32((uint32_t)(0x11330c84)));
  /* 1130a273 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130a276 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130a279 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a27b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a27e jae 0x1130a282 */
  if (!C.cf) goto L_1130a282;
  /* 1130a280 jmp 0x1130a25a */
  goto L_1130a25a;
L_1130a282:;
  /* 1130a282 mov eax, dword ptr [0x11330c84] */
  EAX = (r32((uint32_t)(0x11330c84)));
  /* 1130a287 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130a28a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130a28d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a28f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a292 jae 0x1130a29e */
  if (!C.cf) goto L_1130a29e;
  /* 1130a294 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130a297 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1130a299 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a29c je 0x1130a2a2 */
  if (C.zf) goto L_1130a2a2;
L_1130a29e:;
  /* 1130a29e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130a2a0 jmp 0x1130a2a5 */
  goto L_1130a2a5;
L_1130a2a2:;
  /* 1130a2a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1130a2a5:;
  /* 1130a2a5 mov esp, ebp */
  ESP = (EBP);
  /* 1130a2a7 pop ebp */
  EBP = (pop32());
  /* 1130a2a8 ret  */
  ESPCHK(0x1130a250u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x1130a2b0 (48 bytes, 17 insns) */
void f_1130a2b0(void) {
  FTRACE(0x1130a2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130a2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1130a2b1 mov ebp, esp */
  EBP = (ESP);
  /* 1130a2b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1130a2b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 1130a2b6 call 0x11309fb0 */
  push32(0x1130a2bbu); f_11309fb0();
  /* 1130a2bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a2be mov eax, dword ptr [0x11332974] */
  EAX = (r32((uint32_t)(0x11332974)));
  /* 1130a2c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1130a2c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a2c9 mov dword ptr [0x11332974], ecx */
  w32((uint32_t)(0x11332974), (ECX));
  /* 1130a2cf push 9 */
  push32((uint32_t)(0x9u));
  /* 1130a2d1 call 0x1130a050 */
  push32(0x1130a2d6u); f_1130a050();
  /* 1130a2d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a2d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130a2dc mov esp, ebp */
  ESP = (EBP);
  /* 1130a2de pop ebp */
  EBP = (pop32());
  /* 1130a2df ret  */
  ESPCHK(0x1130a2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2e0 @ 0x1130a2e0 (10 bytes, 5 insns) */
void f_1130a2e0(void) {
  FTRACE(0x1130a2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130a2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1130a2e1 mov ebp, esp */
  EBP = (ESP);
  /* 1130a2e3 mov eax, dword ptr [0x11332974] */
  EAX = (r32((uint32_t)(0x11332974)));
  /* 1130a2e8 pop ebp */
  EBP = (pop32());
  /* 1130a2e9 ret  */
  ESPCHK(0x1130a2e0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x1130a2f0 (45 bytes, 19 insns) */
void f_1130a2f0(void) {
  FTRACE(0x1130a2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130a2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1130a2f1 mov ebp, esp */
  EBP = (ESP);
  /* 1130a2f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1130a2f4 mov eax, dword ptr [0x11332974] */
  EAX = (r32((uint32_t)(0x11332974)));
  /* 1130a2f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1130a2fc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a300 je 0x1130a310 */
  if (C.zf) goto L_1130a310;
  /* 1130a302 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a305 push ecx */
  push32((uint32_t)(ECX));
  /* 1130a306 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1130a309u);
  /* 1130a309 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a30c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130a30e jne 0x1130a314 */
  if (!C.zf) goto L_1130a314;
L_1130a310:;
  /* 1130a310 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130a312 jmp 0x1130a319 */
  goto L_1130a319;
L_1130a314:;
  /* 1130a314 mov eax, 1 */
  EAX = (0x1u);
L_1130a319:;
  /* 1130a319 mov esp, ebp */
  ESP = (EBP);
  /* 1130a31b pop ebp */
  EBP = (pop32());
  /* 1130a31c ret  */
  ESPCHK(0x1130a2f0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x1130a320 (88 bytes, 40 insns) */
void f_1130a320(void) {
  FTRACE(0x1130a320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130a320 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1130a324 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1130a328 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130a32a je 0x1130a373 */
  if (C.zf) goto L_1130a373;
  /* 1130a32c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130a32e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 1130a332 push edi */
  push32((uint32_t)(EDI));
  /* 1130a333 mov edi, ecx */
  EDI = (ECX);
  /* 1130a335 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a338 jb 0x1130a367 */
  if (C.cf) goto L_1130a367;
  /* 1130a33a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1130a33c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1130a33f je 0x1130a349 */
  if (C.zf) goto L_1130a349;
  /* 1130a341 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1130a343:;
  /* 1130a343 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1130a345 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1130a346 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1130a347 jne 0x1130a343 */
  if (!C.zf) goto L_1130a343;
L_1130a349:;
  /* 1130a349 mov ecx, eax */
  ECX = (EAX);
  /* 1130a34b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1130a34e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a350 mov ecx, eax */
  ECX = (EAX);
  /* 1130a352 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1130a355 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a357 mov ecx, edx */
  ECX = (EDX);
  /* 1130a359 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1130a35c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1130a35f je 0x1130a367 */
  if (C.zf) goto L_1130a367;
  /* 1130a361 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1130a363 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130a365 je 0x1130a36d */
  if (C.zf) goto L_1130a36d;
L_1130a367:;
  /* 1130a367 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1130a369 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1130a36a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1130a36b jne 0x1130a367 */
  if (!C.zf) goto L_1130a367;
L_1130a36d:;
  /* 1130a36d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1130a371 pop edi */
  EDI = (pop32());
  /* 1130a372 ret  */
  ESPCHK(0x1130a320u, _esp0);
  ESP += 4; return;
L_1130a373:;
  /* 1130a373 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1130a377 ret  */
  ESPCHK(0x1130a320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a380 @ 0x1130a380 (23 bytes, 10 insns) */
void f_1130a380(void) {
  FTRACE(0x1130a380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130a380 push ebp */
  push32((uint32_t)(EBP));
  /* 1130a381 mov ebp, esp */
  EBP = (ESP);
  /* 1130a383 mov eax, dword ptr [0x11332970] */
  EAX = (r32((uint32_t)(0x11332970)));
  /* 1130a388 push eax */
  push32((uint32_t)(EAX));
  /* 1130a389 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a38c push ecx */
  push32((uint32_t)(ECX));
  /* 1130a38d call 0x1130a3a0 */
  push32(0x1130a392u); f_1130a3a0();
  /* 1130a392 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a395 pop ebp */
  EBP = (pop32());
  /* 1130a396 ret  */
  ESPCHK(0x1130a380u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x1130a3a0 (87 bytes, 34 insns) */
void f_1130a3a0(void) {
  FTRACE(0x1130a3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130a3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1130a3a1 mov ebp, esp */
  EBP = (ESP);
  /* 1130a3a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1130a3a4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a3a8 jbe 0x1130a3ae */
  if ((C.cf||C.zf)) goto L_1130a3ae;
  /* 1130a3aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130a3ac jmp 0x1130a3f3 */
  goto L_1130a3f3;
L_1130a3ae:;
  /* 1130a3ae cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a3b2 ja 0x1130a3c5 */
  if ((!C.cf&&!C.zf)) goto L_1130a3c5;
  /* 1130a3b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a3b7 push eax */
  push32((uint32_t)(EAX));
  /* 1130a3b8 call 0x1130a400 */
  push32(0x1130a3bdu); f_1130a400();
  /* 1130a3bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a3c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1130a3c3 jmp 0x1130a3cc */
  goto L_1130a3cc;
L_1130a3c5:;
  /* 1130a3c5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1130a3cc:;
  /* 1130a3cc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a3d0 jne 0x1130a3d8 */
  if (!C.zf) goto L_1130a3d8;
  /* 1130a3d2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a3d6 jne 0x1130a3dd */
  if (!C.zf) goto L_1130a3dd;
L_1130a3d8:;
  /* 1130a3d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130a3db jmp 0x1130a3f3 */
  goto L_1130a3f3;
L_1130a3dd:;
  /* 1130a3dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a3e0 push ecx */
  push32((uint32_t)(ECX));
  /* 1130a3e1 call 0x1130a2f0 */
  push32(0x1130a3e6u); f_1130a2f0();
  /* 1130a3e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a3e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130a3eb jne 0x1130a3f1 */
  if (!C.zf) goto L_1130a3f1;
  /* 1130a3ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130a3ef jmp 0x1130a3f3 */
  goto L_1130a3f3;
L_1130a3f1:;
  /* 1130a3f1 jmp 0x1130a3ae */
  goto L_1130a3ae;
L_1130a3f3:;
  /* 1130a3f3 mov esp, ebp */
  ESP = (EBP);
  /* 1130a3f5 pop ebp */
  EBP = (pop32());
  /* 1130a3f6 ret  */
  ESPCHK(0x1130a3a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a400 @ 0x1130a400 (109 bytes, 37 insns) */
void f_1130a400(void) {
  FTRACE(0x1130a400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130a400 push ebp */
  push32((uint32_t)(EBP));
  /* 1130a401 mov ebp, esp */
  EBP = (ESP);
  /* 1130a403 push ecx */
  push32((uint32_t)(ECX));
  /* 1130a404 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a407 cmp eax, dword ptr [0x11330c94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11330c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a40d ja 0x1130a43d */
  if ((!C.cf&&!C.zf)) goto L_1130a43d;
  /* 1130a40f push 9 */
  push32((uint32_t)(0x9u));
  /* 1130a411 call 0x11309fb0 */
  push32(0x1130a416u); f_11309fb0();
  /* 1130a416 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a419 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a41c push ecx */
  push32((uint32_t)(ECX));
  /* 1130a41d call 0x1130af40 */
  push32(0x1130a422u); f_1130af40();
  /* 1130a422 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a425 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1130a428 push 9 */
  push32((uint32_t)(0x9u));
  /* 1130a42a call 0x1130a050 */
  push32(0x1130a42fu); f_1130a050();
  /* 1130a42f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a432 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a436 je 0x1130a43d */
  if (C.zf) goto L_1130a43d;
  /* 1130a438 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130a43b jmp 0x1130a469 */
  goto L_1130a469;
L_1130a43d:;
  /* 1130a43d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a441 jne 0x1130a44a */
  if (!C.zf) goto L_1130a44a;
  /* 1130a443 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_1130a44a:;
  /* 1130a44a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a44d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a450 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1130a453 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1130a456 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a459 push eax */
  push32((uint32_t)(EAX));
  /* 1130a45a push 0 */
  push32((uint32_t)(0x0u));
  /* 1130a45c mov ecx, dword ptr [0x1133412c] */
  ECX = (r32((uint32_t)(0x1133412c)));
  /* 1130a462 push ecx */
  push32((uint32_t)(ECX));
  /* 1130a463 call dword ptr [0x11335344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335344))), 0x1130a469u);
L_1130a469:;
  /* 1130a469 mov esp, ebp */
  ESP = (EBP);
  /* 1130a46b pop ebp */
  EBP = (pop32());
  /* 1130a46c ret  */
  ESPCHK(0x1130a400u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a470 @ 0x1130a470 (10 bytes, 5 insns) */
void f_1130a470(void) {
  FTRACE(0x1130a470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130a470 push ebp */
  push32((uint32_t)(EBP));
  /* 1130a471 mov ebp, esp */
  EBP = (ESP);
  /* 1130a473 mov eax, 1 */
  EAX = (0x1u);
  /* 1130a478 pop ebp */
  EBP = (pop32());
  /* 1130a479 ret  */
  ESPCHK(0x1130a470u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a480 @ 0x1130a480 (173 bytes, 59 insns) */
void f_1130a480(void) {
  FTRACE(0x1130a480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130a480 push ebp */
  push32((uint32_t)(EBP));
  /* 1130a481 mov ebp, esp */
  EBP = (ESP);
  /* 1130a483 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130a486 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a48a jbe 0x1130a493 */
  if ((C.cf||C.zf)) goto L_1130a493;
  /* 1130a48c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130a48e jmp 0x1130a529 */
  goto L_1130a529;
L_1130a493:;
  /* 1130a493 push 9 */
  push32((uint32_t)(0x9u));
  /* 1130a495 call 0x11309fb0 */
  push32(0x1130a49au); f_11309fb0();
  /* 1130a49a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a49d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a4a0 push eax */
  push32((uint32_t)(EAX));
  /* 1130a4a1 call 0x1130a8b0 */
  push32(0x1130a4a6u); f_1130a8b0();
  /* 1130a4a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a4a9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1130a4ac cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a4b0 je 0x1130a4f1 */
  if (C.zf) goto L_1130a4f1;
  /* 1130a4b2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1130a4b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130a4bc cmp ecx, dword ptr [0x11330c94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11330c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a4c2 ja 0x1130a4e2 */
  if ((!C.cf&&!C.zf)) goto L_1130a4e2;
  /* 1130a4c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130a4c7 push edx */
  push32((uint32_t)(EDX));
  /* 1130a4c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a4cb push eax */
  push32((uint32_t)(EAX));
  /* 1130a4cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130a4cf push ecx */
  push32((uint32_t)(ECX));
  /* 1130a4d0 call 0x1130b780 */
  push32(0x1130a4d5u); f_1130b780();
  /* 1130a4d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a4d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130a4da je 0x1130a4e2 */
  if (C.zf) goto L_1130a4e2;
  /* 1130a4dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a4df mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1130a4e2:;
  /* 1130a4e2 push 9 */
  push32((uint32_t)(0x9u));
  /* 1130a4e4 call 0x1130a050 */
  push32(0x1130a4e9u); f_1130a050();
  /* 1130a4e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a4ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130a4ef jmp 0x1130a529 */
  goto L_1130a529;
L_1130a4f1:;
  /* 1130a4f1 push 9 */
  push32((uint32_t)(0x9u));
  /* 1130a4f3 call 0x1130a050 */
  push32(0x1130a4f8u); f_1130a050();
  /* 1130a4f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a4fb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a4ff jne 0x1130a508 */
  if (!C.zf) goto L_1130a508;
  /* 1130a501 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1130a508:;
  /* 1130a508 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130a50b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a50e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1130a510 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1130a513 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130a516 push ecx */
  push32((uint32_t)(ECX));
  /* 1130a517 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a51a push edx */
  push32((uint32_t)(EDX));
  /* 1130a51b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1130a51d mov eax, dword ptr [0x1133412c] */
  EAX = (r32((uint32_t)(0x1133412c)));
  /* 1130a522 push eax */
  push32((uint32_t)(EAX));
  /* 1130a523 call dword ptr [0x1133534c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133534c))), 0x1130a529u);
L_1130a529:;
  /* 1130a529 mov esp, ebp */
  ESP = (EBP);
  /* 1130a52b pop ebp */
  EBP = (pop32());
  /* 1130a52c ret  */
  ESPCHK(0x1130a480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a530 @ 0x1130a530 (490 bytes, 165 insns) */
void f_1130a530(void) {
  FTRACE(0x1130a530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130a530 push ebp */
  push32((uint32_t)(EBP));
  /* 1130a531 mov ebp, esp */
  EBP = (ESP);
  /* 1130a533 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130a536 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a53a jne 0x1130a54d */
  if (!C.zf) goto L_1130a54d;
  /* 1130a53c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130a53f push eax */
  push32((uint32_t)(EAX));
  /* 1130a540 call 0x1130a380 */
  push32(0x1130a545u); f_1130a380();
  /* 1130a545 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a548 jmp 0x1130a716 */
  goto L_1130a716;
L_1130a54d:;
  /* 1130a54d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a551 jne 0x1130a566 */
  if (!C.zf) goto L_1130a566;
  /* 1130a553 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a556 push ecx */
  push32((uint32_t)(ECX));
  /* 1130a557 call 0x1130a720 */
  push32(0x1130a55cu); f_1130a720();
  /* 1130a55c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a55f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130a561 jmp 0x1130a716 */
  goto L_1130a716;
L_1130a566:;
  /* 1130a566 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1130a56d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a571 ja 0x1130a6e9 */
  if ((!C.cf&&!C.zf)) goto L_1130a6e9;
  /* 1130a577 push 9 */
  push32((uint32_t)(0x9u));
  /* 1130a579 call 0x11309fb0 */
  push32(0x1130a57eu); f_11309fb0();
  /* 1130a57e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a581 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a584 push edx */
  push32((uint32_t)(EDX));
  /* 1130a585 call 0x1130a8b0 */
  push32(0x1130a58au); f_1130a8b0();
  /* 1130a58a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a58d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1130a590 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a594 je 0x1130a6ac */
  if (C.zf) goto L_1130a6ac;
  /* 1130a59a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130a59d cmp eax, dword ptr [0x11330c94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11330c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a5a3 ja 0x1130a620 */
  if ((!C.cf&&!C.zf)) goto L_1130a620;
  /* 1130a5a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130a5a8 push ecx */
  push32((uint32_t)(ECX));
  /* 1130a5a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a5ac push edx */
  push32((uint32_t)(EDX));
  /* 1130a5ad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130a5b0 push eax */
  push32((uint32_t)(EAX));
  /* 1130a5b1 call 0x1130b780 */
  push32(0x1130a5b6u); f_1130b780();
  /* 1130a5b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a5b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130a5bb je 0x1130a5c5 */
  if (C.zf) goto L_1130a5c5;
  /* 1130a5bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a5c0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1130a5c3 jmp 0x1130a620 */
  goto L_1130a620;
L_1130a5c5:;
  /* 1130a5c5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130a5c8 push edx */
  push32((uint32_t)(EDX));
  /* 1130a5c9 call 0x1130af40 */
  push32(0x1130a5ceu); f_1130af40();
  /* 1130a5ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a5d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1130a5d4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a5d8 je 0x1130a620 */
  if (C.zf) goto L_1130a620;
  /* 1130a5da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a5dd mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 1130a5e0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130a5e3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1130a5e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130a5e9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a5ec jae 0x1130a5f6 */
  if (!C.cf) goto L_1130a5f6;
  /* 1130a5ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130a5f1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1130a5f4 jmp 0x1130a5fc */
  goto L_1130a5fc;
L_1130a5f6:;
  /* 1130a5f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130a5f9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1130a5fc:;
  /* 1130a5fc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130a5ff push edx */
  push32((uint32_t)(EDX));
  /* 1130a600 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a603 push eax */
  push32((uint32_t)(EAX));
  /* 1130a604 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130a607 push ecx */
  push32((uint32_t)(ECX));
  /* 1130a608 call 0x1130ce90 */
  push32(0x1130a60du); f_1130ce90();
  /* 1130a60d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a610 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a613 push edx */
  push32((uint32_t)(EDX));
  /* 1130a614 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130a617 push eax */
  push32((uint32_t)(EAX));
  /* 1130a618 call 0x1130a970 */
  push32(0x1130a61du); f_1130a970();
  /* 1130a61d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1130a620:;
  /* 1130a620 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a624 jne 0x1130a6a0 */
  if (!C.zf) goto L_1130a6a0;
  /* 1130a626 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a62a jne 0x1130a633 */
  if (!C.zf) goto L_1130a633;
  /* 1130a62c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1130a633:;
  /* 1130a633 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130a636 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a639 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1130a63c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1130a63f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130a642 push edx */
  push32((uint32_t)(EDX));
  /* 1130a643 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130a645 mov eax, dword ptr [0x1133412c] */
  EAX = (r32((uint32_t)(0x1133412c)));
  /* 1130a64a push eax */
  push32((uint32_t)(EAX));
  /* 1130a64b call dword ptr [0x11335344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335344))), 0x1130a651u);
  /* 1130a651 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1130a654 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a658 je 0x1130a6a0 */
  if (C.zf) goto L_1130a6a0;
  /* 1130a65a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a65d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1130a660 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130a663 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1130a666 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130a669 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a66c jae 0x1130a676 */
  if (!C.cf) goto L_1130a676;
  /* 1130a66e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130a671 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1130a674 jmp 0x1130a67c */
  goto L_1130a67c;
L_1130a676:;
  /* 1130a676 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130a679 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1130a67c:;
  /* 1130a67c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130a67f push eax */
  push32((uint32_t)(EAX));
  /* 1130a680 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a683 push ecx */
  push32((uint32_t)(ECX));
  /* 1130a684 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130a687 push edx */
  push32((uint32_t)(EDX));
  /* 1130a688 call 0x1130ce90 */
  push32(0x1130a68du); f_1130ce90();
  /* 1130a68d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a690 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a693 push eax */
  push32((uint32_t)(EAX));
  /* 1130a694 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130a697 push ecx */
  push32((uint32_t)(ECX));
  /* 1130a698 call 0x1130a970 */
  push32(0x1130a69du); f_1130a970();
  /* 1130a69d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1130a6a0:;
  /* 1130a6a0 push 9 */
  push32((uint32_t)(0x9u));
  /* 1130a6a2 call 0x1130a050 */
  push32(0x1130a6a7u); f_1130a050();
  /* 1130a6a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a6aa jmp 0x1130a6e9 */
  goto L_1130a6e9;
L_1130a6ac:;
  /* 1130a6ac push 9 */
  push32((uint32_t)(0x9u));
  /* 1130a6ae call 0x1130a050 */
  push32(0x1130a6b3u); f_1130a050();
  /* 1130a6b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a6b6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a6ba jne 0x1130a6c3 */
  if (!C.zf) goto L_1130a6c3;
  /* 1130a6bc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1130a6c3:;
  /* 1130a6c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130a6c6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a6c9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1130a6cc mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1130a6cf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130a6d2 push eax */
  push32((uint32_t)(EAX));
  /* 1130a6d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a6d6 push ecx */
  push32((uint32_t)(ECX));
  /* 1130a6d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130a6d9 mov edx, dword ptr [0x1133412c] */
  EDX = (r32((uint32_t)(0x1133412c)));
  /* 1130a6df push edx */
  push32((uint32_t)(EDX));
  /* 1130a6e0 call dword ptr [0x1133534c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133534c))), 0x1130a6e6u);
  /* 1130a6e6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1130a6e9:;
  /* 1130a6e9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a6ed jne 0x1130a6f8 */
  if (!C.zf) goto L_1130a6f8;
  /* 1130a6ef cmp dword ptr [0x11332970], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332970))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a6f6 jne 0x1130a6fd */
  if (!C.zf) goto L_1130a6fd;
L_1130a6f8:;
  /* 1130a6f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130a6fb jmp 0x1130a716 */
  goto L_1130a716;
L_1130a6fd:;
  /* 1130a6fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130a700 push eax */
  push32((uint32_t)(EAX));
  /* 1130a701 call 0x1130a2f0 */
  push32(0x1130a706u); f_1130a2f0();
  /* 1130a706 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a709 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130a70b jne 0x1130a711 */
  if (!C.zf) goto L_1130a711;
  /* 1130a70d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130a70f jmp 0x1130a716 */
  goto L_1130a716;
L_1130a711:;
  /* 1130a711 jmp 0x1130a566 */
  goto L_1130a566;
L_1130a716:;
  /* 1130a716 mov esp, ebp */
  ESP = (EBP);
  /* 1130a718 pop ebp */
  EBP = (pop32());
  /* 1130a719 ret  */
  ESPCHK(0x1130a530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a720 @ 0x1130a720 (104 bytes, 38 insns) */
void f_1130a720(void) {
  FTRACE(0x1130a720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130a720 push ebp */
  push32((uint32_t)(EBP));
  /* 1130a721 mov ebp, esp */
  EBP = (ESP);
  /* 1130a723 push ecx */
  push32((uint32_t)(ECX));
  /* 1130a724 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a728 jne 0x1130a72c */
  if (!C.zf) goto L_1130a72c;
  /* 1130a72a jmp 0x1130a784 */
  goto L_1130a784;
L_1130a72c:;
  /* 1130a72c push 9 */
  push32((uint32_t)(0x9u));
  /* 1130a72e call 0x11309fb0 */
  push32(0x1130a733u); f_11309fb0();
  /* 1130a733 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a736 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a739 push eax */
  push32((uint32_t)(EAX));
  /* 1130a73a call 0x1130a8b0 */
  push32(0x1130a73fu); f_1130a8b0();
  /* 1130a73f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a742 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1130a745 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a749 je 0x1130a767 */
  if (C.zf) goto L_1130a767;
  /* 1130a74b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a74e push ecx */
  push32((uint32_t)(ECX));
  /* 1130a74f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130a752 push edx */
  push32((uint32_t)(EDX));
  /* 1130a753 call 0x1130a970 */
  push32(0x1130a758u); f_1130a970();
  /* 1130a758 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a75b push 9 */
  push32((uint32_t)(0x9u));
  /* 1130a75d call 0x1130a050 */
  push32(0x1130a762u); f_1130a050();
  /* 1130a762 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a765 jmp 0x1130a784 */
  goto L_1130a784;
L_1130a767:;
  /* 1130a767 push 9 */
  push32((uint32_t)(0x9u));
  /* 1130a769 call 0x1130a050 */
  push32(0x1130a76eu); f_1130a050();
  /* 1130a76e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a771 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a774 push eax */
  push32((uint32_t)(EAX));
  /* 1130a775 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130a777 mov ecx, dword ptr [0x1133412c] */
  ECX = (r32((uint32_t)(0x1133412c)));
  /* 1130a77d push ecx */
  push32((uint32_t)(ECX));
  /* 1130a77e call dword ptr [0x11335370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335370))), 0x1130a784u);
L_1130a784:;
  /* 1130a784 mov esp, ebp */
  ESP = (EBP);
  /* 1130a786 pop ebp */
  EBP = (pop32());
  /* 1130a787 ret  */
  ESPCHK(0x1130a720u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a790 @ 0x1130a790 (116 bytes, 34 insns) */
void f_1130a790(void) {
  FTRACE(0x1130a790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130a790 push ebp */
  push32((uint32_t)(EBP));
  /* 1130a791 mov ebp, esp */
  EBP = (ESP);
  /* 1130a793 push ecx */
  push32((uint32_t)(ECX));
  /* 1130a794 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 1130a79b push 9 */
  push32((uint32_t)(0x9u));
  /* 1130a79d call 0x11309fb0 */
  push32(0x1130a7a2u); f_11309fb0();
  /* 1130a7a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a7a5 call 0x1130bea0 */
  push32(0x1130a7aau); f_1130bea0();
  /* 1130a7aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130a7ac jge 0x1130a7b5 */
  if ((C.sf==C.of)) goto L_1130a7b5;
  /* 1130a7ae mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1130a7b5:;
  /* 1130a7b5 push 9 */
  push32((uint32_t)(0x9u));
  /* 1130a7b7 call 0x1130a050 */
  push32(0x1130a7bcu); f_1130a050();
  /* 1130a7bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a7bf push 0 */
  push32((uint32_t)(0x0u));
  /* 1130a7c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130a7c3 mov eax, dword ptr [0x1133412c] */
  EAX = (r32((uint32_t)(0x1133412c)));
  /* 1130a7c8 push eax */
  push32((uint32_t)(EAX));
  /* 1130a7c9 call dword ptr [0x11335384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335384))), 0x1130a7cfu);
  /* 1130a7cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130a7d1 jne 0x1130a7fd */
  if (!C.zf) goto L_1130a7fd;
  /* 1130a7d3 call dword ptr [0x113353e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353e8))), 0x1130a7d9u);
  /* 1130a7d9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a7dc jne 0x1130a7f6 */
  if (!C.zf) goto L_1130a7f6;
  /* 1130a7de call 0x1130e490 */
  push32(0x1130a7e3u); f_1130e490();
  /* 1130a7e3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 1130a7e9 call 0x1130e480 */
  push32(0x1130a7eeu); f_1130e480();
  /* 1130a7ee mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 1130a7f4 jmp 0x1130a7fd */
  goto L_1130a7fd;
L_1130a7f6:;
  /* 1130a7f6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1130a7fd:;
  /* 1130a7fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130a800 mov esp, ebp */
  ESP = (EBP);
  /* 1130a802 pop ebp */
  EBP = (pop32());
  /* 1130a803 ret  */
  ESPCHK(0x1130a790u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a810 @ 0x1130a810 (10 bytes, 5 insns) */
void f_1130a810(void) {
  FTRACE(0x1130a810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130a810 push ebp */
  push32((uint32_t)(EBP));
  /* 1130a811 mov ebp, esp */
  EBP = (ESP);
  /* 1130a813 call 0x1130a790 */
  push32(0x1130a818u); f_1130a790();
  /* 1130a818 pop ebp */
  EBP = (pop32());
  /* 1130a819 ret  */
  ESPCHK(0x1130a810u, _esp0);
  ESP += 4; return;
}

