#include "recomp.h"

/* FUN_10001000 @ 0x11191000 (18 bytes, 7 insns) */
void f_11191000(void) {
  FTRACE(0x11191000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11191000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11191004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11191005 jne 0x1119100c */
  if (!C.zf) goto L_1119100c;
  /* 11191007 call 0x11191012 */
  push32(0x1119100cu); f_11191012();
L_1119100c:;
  /* 1119100c push 1 */
  push32((uint32_t)(0x1u));
  /* 1119100e pop eax */
  EAX = (pop32());
  /* 1119100f ret 0xc */
  ESPCHK(0x11191000u, _esp0);
  ESP += 16; return;
}

/* OnInit @ 0x11191012 (914 bytes, 254 insns) */
void f_11191012(void) {
  FTRACE(0x11191012u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11191012 push ebx */
  push32((uint32_t)(EBX));
  /* 11191013 push ebp */
  push32((uint32_t)(EBP));
  /* 11191014 push esi */
  push32((uint32_t)(ESI));
  /* 11191015 mov esi, dword ptr [0x11195134] */
  ESI = (r32((uint32_t)(0x11195134)));
  /* 1119101b push edi */
  push32((uint32_t)(EDI));
  /* 1119101c push 0x11196198 */
  push32((uint32_t)(0x11196198u));
  /* 11191021 push 1 */
  push32((uint32_t)(0x1u));
  /* 11191023 call esi */
  call_ind((uint32_t)(ESI), 0x11191025u);
  /* 11191025 push 0x11196190 */
  push32((uint32_t)(0x11196190u));
  /* 1119102a push 2 */
  push32((uint32_t)(0x2u));
  /* 1119102c call esi */
  call_ind((uint32_t)(ESI), 0x1119102eu);
  /* 1119102e push 0x11196184 */
  push32((uint32_t)(0x11196184u));
  /* 11191033 push 4 */
  push32((uint32_t)(0x4u));
  /* 11191035 pop ebp */
  EBP = (pop32());
  /* 11191036 push ebp */
  push32((uint32_t)(EBP));
  /* 11191037 call esi */
  call_ind((uint32_t)(ESI), 0x11191039u);
  /* 11191039 push 0x1119617c */
  push32((uint32_t)(0x1119617cu));
  /* 1119103e push 5 */
  push32((uint32_t)(0x5u));
  /* 11191040 call esi */
  call_ind((uint32_t)(ESI), 0x11191042u);
  /* 11191042 mov esi, dword ptr [0x1119512c] */
  ESI = (r32((uint32_t)(0x1119512c)));
  /* 11191048 mov edi, 0xfe */
  EDI = (0xfeu);
  /* 1119104d push edi */
  push32((uint32_t)(EDI));
  /* 1119104e push 1 */
  push32((uint32_t)(0x1u));
  /* 11191050 call esi */
  call_ind((uint32_t)(ESI), 0x11191052u);
  /* 11191052 push edi */
  push32((uint32_t)(EDI));
  /* 11191053 push 2 */
  push32((uint32_t)(0x2u));
  /* 11191055 call esi */
  call_ind((uint32_t)(ESI), 0x11191057u);
  /* 11191057 push 0xff */
  push32((uint32_t)(0xffu));
  /* 1119105c push ebp */
  push32((uint32_t)(EBP));
  /* 1119105d call esi */
  call_ind((uint32_t)(ESI), 0x1119105fu);
  /* 1119105f mov ebx, dword ptr [0x1119513c] */
  EBX = (r32((uint32_t)(0x1119513c)));
  /* 11191065 push ebp */
  push32((uint32_t)(EBP));
  /* 11191066 push 0x11196598 */
  push32((uint32_t)(0x11196598u));
  /* 1119106b call ebx */
  call_ind((uint32_t)(EBX), 0x1119106du);
  /* 1119106d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11191070 push ebp */
  push32((uint32_t)(EBP));
  /* 11191071 push 0x11196748 */
  push32((uint32_t)(0x11196748u));
  /* 11191076 call ebx */
  call_ind((uint32_t)(EBX), 0x11191078u);
  /* 11191078 push ebp */
  push32((uint32_t)(EBP));
  /* 11191079 push 0x11196618 */
  push32((uint32_t)(0x11196618u));
  /* 1119107e call ebx */
  call_ind((uint32_t)(EBX), 0x11191080u);
  /* 11191080 push ebp */
  push32((uint32_t)(EBP));
  /* 11191081 push 0x1119661c */
  push32((uint32_t)(0x1119661cu));
  /* 11191086 call ebx */
  call_ind((uint32_t)(EBX), 0x11191088u);
  /* 11191088 mov esi, dword ptr [0x11195140] */
  ESI = (r32((uint32_t)(0x11195140)));
  /* 1119108e push 0x11196178 */
  push32((uint32_t)(0x11196178u));
  /* 11191093 push 0x11196608 */
  push32((uint32_t)(0x11196608u));
  /* 11191098 call esi */
  call_ind((uint32_t)(ESI), 0x1119109au);
  /* 1119109a push 0x11196174 */
  push32((uint32_t)(0x11196174u));
  /* 1119109f push 0x111966a8 */
  push32((uint32_t)(0x111966a8u));
  /* 111910a4 call esi */
  call_ind((uint32_t)(ESI), 0x111910a6u);
  /* 111910a6 push 0x11196170 */
  push32((uint32_t)(0x11196170u));
  /* 111910ab push 0x111966b0 */
  push32((uint32_t)(0x111966b0u));
  /* 111910b0 call esi */
  call_ind((uint32_t)(ESI), 0x111910b2u);
  /* 111910b2 push 0x1119616c */
  push32((uint32_t)(0x1119616cu));
  /* 111910b7 push 0x111966b8 */
  push32((uint32_t)(0x111966b8u));
  /* 111910bc call esi */
  call_ind((uint32_t)(ESI), 0x111910beu);
  /* 111910be push 0x11196168 */
  push32((uint32_t)(0x11196168u));
  /* 111910c3 push 0x111966c8 */
  push32((uint32_t)(0x111966c8u));
  /* 111910c8 call esi */
  call_ind((uint32_t)(ESI), 0x111910cau);
  /* 111910ca add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111910cd push 0x11196164 */
  push32((uint32_t)(0x11196164u));
  /* 111910d2 push 0x111966e0 */
  push32((uint32_t)(0x111966e0u));
  /* 111910d7 call esi */
  call_ind((uint32_t)(ESI), 0x111910d9u);
  /* 111910d9 push 0x11196160 */
  push32((uint32_t)(0x11196160u));
  /* 111910de push 0x111966f0 */
  push32((uint32_t)(0x111966f0u));
  /* 111910e3 call esi */
  call_ind((uint32_t)(ESI), 0x111910e5u);
  /* 111910e5 push 0x1119615c */
  push32((uint32_t)(0x1119615cu));
  /* 111910ea push 0x111966f8 */
  push32((uint32_t)(0x111966f8u));
  /* 111910ef call esi */
  call_ind((uint32_t)(ESI), 0x111910f1u);
  /* 111910f1 push 0x11196158 */
  push32((uint32_t)(0x11196158u));
  /* 111910f6 push 0x11196708 */
  push32((uint32_t)(0x11196708u));
  /* 111910fb call esi */
  call_ind((uint32_t)(ESI), 0x111910fdu);
  /* 111910fd push 0x11196154 */
  push32((uint32_t)(0x11196154u));
  /* 11191102 push 0x11196710 */
  push32((uint32_t)(0x11196710u));
  /* 11191107 call esi */
  call_ind((uint32_t)(ESI), 0x11191109u);
  /* 11191109 push 0x11196150 */
  push32((uint32_t)(0x11196150u));
  /* 1119110e push 0x11196718 */
  push32((uint32_t)(0x11196718u));
  /* 11191113 call esi */
  call_ind((uint32_t)(ESI), 0x11191115u);
  /* 11191115 push 0x1119614c */
  push32((uint32_t)(0x1119614cu));
  /* 1119111a push 0x11196610 */
  push32((uint32_t)(0x11196610u));
  /* 1119111f call esi */
  call_ind((uint32_t)(ESI), 0x11191121u);
  /* 11191121 push 0x11196148 */
  push32((uint32_t)(0x11196148u));
  /* 11191126 push 0x111966d8 */
  push32((uint32_t)(0x111966d8u));
  /* 1119112b call esi */
  call_ind((uint32_t)(ESI), 0x1119112du);
  /* 1119112d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11191130 push 0x11196140 */
  push32((uint32_t)(0x11196140u));
  /* 11191135 push 0x11196770 */
  push32((uint32_t)(0x11196770u));
  /* 1119113a call esi */
  call_ind((uint32_t)(ESI), 0x1119113cu);
  /* 1119113c push 0x1119613c */
  push32((uint32_t)(0x1119613cu));
  /* 11191141 push 0x11196628 */
  push32((uint32_t)(0x11196628u));
  /* 11191146 call esi */
  call_ind((uint32_t)(ESI), 0x11191148u);
  /* 11191148 push 0x11196138 */
  push32((uint32_t)(0x11196138u));
  /* 1119114d push 0x11196630 */
  push32((uint32_t)(0x11196630u));
  /* 11191152 call esi */
  call_ind((uint32_t)(ESI), 0x11191154u);
  /* 11191154 push 0x11196134 */
  push32((uint32_t)(0x11196134u));
  /* 11191159 push 0x11196638 */
  push32((uint32_t)(0x11196638u));
  /* 1119115e call esi */
  call_ind((uint32_t)(ESI), 0x11191160u);
  /* 11191160 push 0x11196130 */
  push32((uint32_t)(0x11196130u));
  /* 11191165 push 0x11196648 */
  push32((uint32_t)(0x11196648u));
  /* 1119116a call esi */
  call_ind((uint32_t)(ESI), 0x1119116cu);
  /* 1119116c push 0x11196128 */
  push32((uint32_t)(0x11196128u));
  /* 11191171 push 0x11196760 */
  push32((uint32_t)(0x11196760u));
  /* 11191176 call esi */
  call_ind((uint32_t)(ESI), 0x11191178u);
  /* 11191178 push 0x11196120 */
  push32((uint32_t)(0x11196120u));
  /* 1119117d push 0x11196768 */
  push32((uint32_t)(0x11196768u));
  /* 11191182 call esi */
  call_ind((uint32_t)(ESI), 0x11191184u);
  /* 11191184 push 0x1119611c */
  push32((uint32_t)(0x1119611cu));
  /* 11191189 push 0x11196650 */
  push32((uint32_t)(0x11196650u));
  /* 1119118e call esi */
  call_ind((uint32_t)(ESI), 0x11191190u);
  /* 11191190 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11191193 push 0x11196118 */
  push32((uint32_t)(0x11196118u));
  /* 11191198 push 0x11196658 */
  push32((uint32_t)(0x11196658u));
  /* 1119119d call esi */
  call_ind((uint32_t)(ESI), 0x1119119fu);
  /* 1119119f push 0x11196114 */
  push32((uint32_t)(0x11196114u));
  /* 111911a4 push 0x11196670 */
  push32((uint32_t)(0x11196670u));
  /* 111911a9 call esi */
  call_ind((uint32_t)(ESI), 0x111911abu);
  /* 111911ab push 0x11196110 */
  push32((uint32_t)(0x11196110u));
  /* 111911b0 push 0x11196680 */
  push32((uint32_t)(0x11196680u));
  /* 111911b5 call esi */
  call_ind((uint32_t)(ESI), 0x111911b7u);
  /* 111911b7 push 0x1119610c */
  push32((uint32_t)(0x1119610cu));
  /* 111911bc push 0x11196690 */
  push32((uint32_t)(0x11196690u));
  /* 111911c1 call esi */
  call_ind((uint32_t)(ESI), 0x111911c3u);
  /* 111911c3 push 0x11196108 */
  push32((uint32_t)(0x11196108u));
  /* 111911c8 push 0x11196698 */
  push32((uint32_t)(0x11196698u));
  /* 111911cd call esi */
  call_ind((uint32_t)(ESI), 0x111911cfu);
  /* 111911cf push 0x11196104 */
  push32((uint32_t)(0x11196104u));
  /* 111911d4 push 0x11196750 */
  push32((uint32_t)(0x11196750u));
  /* 111911d9 call esi */
  call_ind((uint32_t)(ESI), 0x111911dbu);
  /* 111911db push 0x11196100 */
  push32((uint32_t)(0x11196100u));
  /* 111911e0 push 0x11196758 */
  push32((uint32_t)(0x11196758u));
  /* 111911e5 call esi */
  call_ind((uint32_t)(ESI), 0x111911e7u);
  /* 111911e7 push 0x111960fc */
  push32((uint32_t)(0x111960fcu));
  /* 111911ec push 0x11196668 */
  push32((uint32_t)(0x11196668u));
  /* 111911f1 call esi */
  call_ind((uint32_t)(ESI), 0x111911f3u);
  /* 111911f3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111911f6 push 0x111960f8 */
  push32((uint32_t)(0x111960f8u));
  /* 111911fb push 0x11196678 */
  push32((uint32_t)(0x11196678u));
  /* 11191200 call esi */
  call_ind((uint32_t)(ESI), 0x11191202u);
  /* 11191202 push 0x111960f4 */
  push32((uint32_t)(0x111960f4u));
  /* 11191207 push 0x11196688 */
  push32((uint32_t)(0x11196688u));
  /* 1119120c call esi */
  call_ind((uint32_t)(ESI), 0x1119120eu);
  /* 1119120e push 0x111960ec */
  push32((uint32_t)(0x111960ecu));
  /* 11191213 push 0x11196590 */
  push32((uint32_t)(0x11196590u));
  /* 11191218 call esi */
  call_ind((uint32_t)(ESI), 0x1119121au);
  /* 1119121a push 0x111960e4 */
  push32((uint32_t)(0x111960e4u));
  /* 1119121f push 0x11196778 */
  push32((uint32_t)(0x11196778u));
  /* 11191224 call esi */
  call_ind((uint32_t)(ESI), 0x11191226u);
  /* 11191226 push 0x111960dc */
  push32((uint32_t)(0x111960dcu));
  /* 1119122b push 0x11196780 */
  push32((uint32_t)(0x11196780u));
  /* 11191230 call esi */
  call_ind((uint32_t)(ESI), 0x11191232u);
  /* 11191232 push 0x111960d4 */
  push32((uint32_t)(0x111960d4u));
  /* 11191237 push 0x11196788 */
  push32((uint32_t)(0x11196788u));
  /* 1119123c call esi */
  call_ind((uint32_t)(ESI), 0x1119123eu);
  /* 1119123e mov edi, dword ptr [0x11195138] */
  EDI = (r32((uint32_t)(0x11195138)));
  /* 11191244 push 0x111960d0 */
  push32((uint32_t)(0x111960d0u));
  /* 11191249 push 0x111965a0 */
  push32((uint32_t)(0x111965a0u));
  /* 1119124e call edi */
  call_ind((uint32_t)(EDI), 0x11191250u);
  /* 11191250 push 0x111960cc */
  push32((uint32_t)(0x111960ccu));
  /* 11191255 push 0x111965a8 */
  push32((uint32_t)(0x111965a8u));
  /* 1119125a call edi */
  call_ind((uint32_t)(EDI), 0x1119125cu);
  /* 1119125c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1119125f push 0x111960c8 */
  push32((uint32_t)(0x111960c8u));
  /* 11191264 push 0x111965f0 */
  push32((uint32_t)(0x111965f0u));
  /* 11191269 call edi */
  call_ind((uint32_t)(EDI), 0x1119126bu);
  /* 1119126b push 0x111960c0 */
  push32((uint32_t)(0x111960c0u));
  /* 11191270 push 0x111966c0 */
  push32((uint32_t)(0x111966c0u));
  /* 11191275 call edi */
  call_ind((uint32_t)(EDI), 0x11191277u);
  /* 11191277 push 0x111960b8 */
  push32((uint32_t)(0x111960b8u));
  /* 1119127c push 0x111966e8 */
  push32((uint32_t)(0x111966e8u));
  /* 11191281 call edi */
  call_ind((uint32_t)(EDI), 0x11191283u);
  /* 11191283 push 0x111960b4 */
  push32((uint32_t)(0x111960b4u));
  /* 11191288 push 0x111965c8 */
  push32((uint32_t)(0x111965c8u));
  /* 1119128d call edi */
  call_ind((uint32_t)(EDI), 0x1119128fu);
  /* 1119128f push 0x111960b0 */
  push32((uint32_t)(0x111960b0u));
  /* 11191294 push 0x111965d0 */
  push32((uint32_t)(0x111965d0u));
  /* 11191299 call edi */
  call_ind((uint32_t)(EDI), 0x1119129bu);
  /* 1119129b push 0x111960ac */
  push32((uint32_t)(0x111960acu));
  /* 111912a0 push 0x111965d8 */
  push32((uint32_t)(0x111965d8u));
  /* 111912a5 call edi */
  call_ind((uint32_t)(EDI), 0x111912a7u);
  /* 111912a7 push 0x111960a4 */
  push32((uint32_t)(0x111960a4u));
  /* 111912ac push 0x11196620 */
  push32((uint32_t)(0x11196620u));
  /* 111912b1 call edi */
  call_ind((uint32_t)(EDI), 0x111912b3u);
  /* 111912b3 push 0x1119609c */
  push32((uint32_t)(0x1119609cu));
  /* 111912b8 push 0x11196640 */
  push32((uint32_t)(0x11196640u));
  /* 111912bd call edi */
  call_ind((uint32_t)(EDI), 0x111912bfu);
  /* 111912bf add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111912c2 push 0x11196094 */
  push32((uint32_t)(0x11196094u));
  /* 111912c7 push 0x11196660 */
  push32((uint32_t)(0x11196660u));
  /* 111912cc call edi */
  call_ind((uint32_t)(EDI), 0x111912ceu);
  /* 111912ce push 0x11196090 */
  push32((uint32_t)(0x11196090u));
  /* 111912d3 push 0x11196600 */
  push32((uint32_t)(0x11196600u));
  /* 111912d8 call esi */
  call_ind((uint32_t)(ESI), 0x111912dau);
  /* 111912da push 0x11196088 */
  push32((uint32_t)(0x11196088u));
  /* 111912df push 0x11196700 */
  push32((uint32_t)(0x11196700u));
  /* 111912e4 call edi */
  call_ind((uint32_t)(EDI), 0x111912e6u);
  /* 111912e6 push 0x11196080 */
  push32((uint32_t)(0x11196080u));
  /* 111912eb push 0x11196720 */
  push32((uint32_t)(0x11196720u));
  /* 111912f0 call edi */
  call_ind((uint32_t)(EDI), 0x111912f2u);
  /* 111912f2 push 0x11196078 */
  push32((uint32_t)(0x11196078u));
  /* 111912f7 push 0x11196728 */
  push32((uint32_t)(0x11196728u));
  /* 111912fc call edi */
  call_ind((uint32_t)(EDI), 0x111912feu);
  /* 111912fe push 0x11196070 */
  push32((uint32_t)(0x11196070u));
  /* 11191303 push 0x11196738 */
  push32((uint32_t)(0x11196738u));
  /* 11191308 call edi */
  call_ind((uint32_t)(EDI), 0x1119130au);
  /* 1119130a mov esi, dword ptr [0x11195148] */
  ESI = (r32((uint32_t)(0x11195148)));
  /* 11191310 push 0x111965b0 */
  push32((uint32_t)(0x111965b0u));
  /* 11191315 call esi */
  call_ind((uint32_t)(ESI), 0x11191317u);
  /* 11191317 push 0x11196064 */
  push32((uint32_t)(0x11196064u));
  /* 1119131c push 0x111965b8 */
  push32((uint32_t)(0x111965b8u));
  /* 11191321 call dword ptr [0x1119514c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119514c))), 0x11191327u);
  /* 11191327 mov edi, dword ptr [0x11195144] */
  EDI = (r32((uint32_t)(0x11195144)));
  /* 1119132d push 0x11196054 */
  push32((uint32_t)(0x11196054u));
  /* 11191332 push 0x111965c0 */
  push32((uint32_t)(0x111965c0u));
  /* 11191337 call edi */
  call_ind((uint32_t)(EDI), 0x11191339u);
  /* 11191339 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1119133c push 0x111965e0 */
  push32((uint32_t)(0x111965e0u));
  /* 11191341 call esi */
  call_ind((uint32_t)(ESI), 0x11191343u);
  /* 11191343 mov dword ptr [esp], 0x111966a0 */
  w32((uint32_t)(ESP), (0x111966a0u));
  /* 1119134a call esi */
  call_ind((uint32_t)(ESI), 0x1119134cu);
  /* 1119134c mov dword ptr [esp], 0x1119603c */
  w32((uint32_t)(ESP), (0x1119603cu));
  /* 11191353 push 0x11196730 */
  push32((uint32_t)(0x11196730u));
  /* 11191358 call edi */
  call_ind((uint32_t)(EDI), 0x1119135au);
  /* 1119135a push 0x111965e8 */
  push32((uint32_t)(0x111965e8u));
  /* 1119135f call esi */
  call_ind((uint32_t)(ESI), 0x11191361u);
  /* 11191361 mov ebp, 0x111965f8 */
  EBP = (0x111965f8u);
  /* 11191366 push ebp */
  push32((uint32_t)(EBP));
  /* 11191367 call esi */
  call_ind((uint32_t)(ESI), 0x11191369u);
  /* 11191369 push 0x11196030 */
  push32((uint32_t)(0x11196030u));
  /* 1119136e push 0x11196740 */
  push32((uint32_t)(0x11196740u));
  /* 11191373 call edi */
  call_ind((uint32_t)(EDI), 0x11191375u);
  /* 11191375 push 8 */
  push32((uint32_t)(0x8u));
  /* 11191377 pop esi */
  ESI = (pop32());
  /* 11191378 push esi */
  push32((uint32_t)(ESI));
  /* 11191379 push 0x111966d0 */
  push32((uint32_t)(0x111966d0u));
  /* 1119137e call ebx */
  call_ind((uint32_t)(EBX), 0x11191380u);
  /* 11191380 push esi */
  push32((uint32_t)(ESI));
  /* 11191381 push 0x111965e0 */
  push32((uint32_t)(0x111965e0u));
  /* 11191386 call ebx */
  call_ind((uint32_t)(EBX), 0x11191388u);
  /* 11191388 push esi */
  push32((uint32_t)(ESI));
  /* 11191389 push 0x111966a0 */
  push32((uint32_t)(0x111966a0u));
  /* 1119138e call ebx */
  call_ind((uint32_t)(EBX), 0x11191390u);
  /* 11191390 push esi */
  push32((uint32_t)(ESI));
  /* 11191391 push 0x111965e8 */
  push32((uint32_t)(0x111965e8u));
  /* 11191396 call ebx */
  call_ind((uint32_t)(EBX), 0x11191398u);
  /* 11191398 push esi */
  push32((uint32_t)(ESI));
  /* 11191399 push ebp */
  push32((uint32_t)(EBP));
  /* 1119139a call ebx */
  call_ind((uint32_t)(EBX), 0x1119139cu);
  /* 1119139c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1119139f pop edi */
  EDI = (pop32());
  /* 111913a0 pop esi */
  ESI = (pop32());
  /* 111913a1 pop ebp */
  EBP = (pop32());
  /* 111913a2 pop ebx */
  EBX = (pop32());
  /* 111913a3 ret  */
  ESPCHK(0x11191012u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x111913a4 (4036 bytes, 1383 insns) */
void f_111913a4(void) {
  FTRACE(0x111913a4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111913a4 push ecx */
  push32((uint32_t)(ECX));
  /* 111913a5 push ebx */
  push32((uint32_t)(EBX));
  /* 111913a6 push ebp */
  push32((uint32_t)(EBP));
  /* 111913a7 push esi */
  push32((uint32_t)(ESI));
  /* 111913a8 push edi */
  push32((uint32_t)(EDI));
  /* 111913a9 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 111913ab call dword ptr [0x111950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950b0))), 0x111913b1u);
  /* 111913b1 mov esi, dword ptr [0x111950b8] */
  ESI = (r32((uint32_t)(0x111950b8)));
  /* 111913b7 mov ebp, dword ptr [0x111950bc] */
  EBP = (r32((uint32_t)(0x111950bc)));
  /* 111913bd mov edi, dword ptr [0x111950b4] */
  EDI = (r32((uint32_t)(0x111950b4)));
  /* 111913c3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 111913c5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111913c7 pop ecx */
  ECX = (pop32());
  /* 111913c8 je 0x111916c9 */
  if (C.zf) goto L_111916c9;
  /* 111913ce push ebx */
  push32((uint32_t)(EBX));
  /* 111913cf call dword ptr [0x111950c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950c4))), 0x111913d5u);
  /* 111913d5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111913d8 pop ecx */
  ECX = (pop32());
  /* 111913d9 mov dword ptr [0x11196598], eax */
  w32((uint32_t)(0x11196598), (EAX));
  /* 111913de jne 0x111913e7 */
  if (!C.zf) goto L_111913e7;
  /* 111913e0 push 0x11196254 */
  push32((uint32_t)(0x11196254u));
  /* 111913e5 jmp 0x11191404 */
  goto L_11191404;
L_111913e7:;
  /* 111913e7 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111913ea jne 0x111913f3 */
  if (!C.zf) goto L_111913f3;
  /* 111913ec push 0x1119624c */
  push32((uint32_t)(0x1119624cu));
  /* 111913f1 jmp 0x11191404 */
  goto L_11191404;
L_111913f3:;
  /* 111913f3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111913f6 jne 0x111913ff */
  if (!C.zf) goto L_111913ff;
  /* 111913f8 push 0x11196240 */
  push32((uint32_t)(0x11196240u));
  /* 111913fd jmp 0x11191404 */
  goto L_11191404;
L_111913ff:;
  /* 111913ff push 0x11196238 */
  push32((uint32_t)(0x11196238u));
L_11191404:;
  /* 11191404 push 0x111966d0 */
  push32((uint32_t)(0x111966d0u));
  /* 11191409 call dword ptr [0x1119514c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119514c))), 0x1119140fu);
  /* 1119140f pop ecx */
  ECX = (pop32());
  /* 11191410 pop ecx */
  ECX = (pop32());
  /* 11191411 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11191416 push 1 */
  push32((uint32_t)(0x1u));
  /* 11191418 call dword ptr [0x111950c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950c8))), 0x1119141eu);
  /* 1119141e push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11191423 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11191425 call dword ptr [0x111950c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950c8))), 0x1119142bu);
  /* 1119142b push ebx */
  push32((uint32_t)(EBX));
  /* 1119142c push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1119142e call esi */
  call_ind((uint32_t)(ESI), 0x11191430u);
  /* 11191430 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11191432 mov dword ptr [0x11196748], 3 */
  w32((uint32_t)(0x11196748), (0x3u));
  /* 1119143c mov dword ptr [0x11196618], 5 */
  w32((uint32_t)(0x11196618), (0x5u));
  /* 11191446 mov dword ptr [0x1119661c], 4 */
  w32((uint32_t)(0x1119661c), (0x4u));
  /* 11191450 call dword ptr [0x111950c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950c0))), 0x11191456u);
  /* 11191456 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11191458 call ebp */
  call_ind((uint32_t)(EBP), 0x1119145au);
  /* 1119145a push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1119145c call ebp */
  call_ind((uint32_t)(EBP), 0x1119145eu);
  /* 1119145e push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11191460 call ebp */
  call_ind((uint32_t)(EBP), 0x11191462u);
  /* 11191462 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11191464 call ebp */
  call_ind((uint32_t)(EBP), 0x11191466u);
  /* 11191466 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11191468 call ebp */
  call_ind((uint32_t)(EBP), 0x1119146au);
  /* 1119146a mov ebp, 0xc8 */
  EBP = (0xc8u);
  /* 1119146f push 1 */
  push32((uint32_t)(0x1u));
  /* 11191471 push ebp */
  push32((uint32_t)(EBP));
  /* 11191472 push 0x11196680 */
  push32((uint32_t)(0x11196680u));
  /* 11191477 call dword ptr [0x111950d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950d0))), 0x1119147du);
  /* 1119147d push 2 */
  push32((uint32_t)(0x2u));
  /* 1119147f push ebp */
  push32((uint32_t)(EBP));
  /* 11191480 push 0x11196690 */
  push32((uint32_t)(0x11196690u));
  /* 11191485 call dword ptr [0x111950d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950d0))), 0x1119148bu);
  /* 1119148b mov ebp, dword ptr [0x111950d4] */
  EBP = (r32((uint32_t)(0x111950d4)));
  /* 11191491 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11191494 push 0x111965f0 */
  push32((uint32_t)(0x111965f0u));
  /* 11191499 call ebp */
  call_ind((uint32_t)(EBP), 0x1119149bu);
  /* 1119149b mov dword ptr [esp], 0x111966c0 */
  w32((uint32_t)(ESP), (0x111966c0u));
  /* 111914a2 call ebp */
  call_ind((uint32_t)(EBP), 0x111914a4u);
  /* 111914a4 mov ebp, dword ptr [0x111950cc] */
  EBP = (r32((uint32_t)(0x111950cc)));
  /* 111914aa mov dword ptr [esp], 0x11196230 */
  w32((uint32_t)(ESP), (0x11196230u));
  /* 111914b1 push 0x111960c8 */
  push32((uint32_t)(0x111960c8u));
  /* 111914b6 call ebp */
  call_ind((uint32_t)(EBP), 0x111914b8u);
  /* 111914b8 push 0x11196228 */
  push32((uint32_t)(0x11196228u));
  /* 111914bd push 0x111960c8 */
  push32((uint32_t)(0x111960c8u));
  /* 111914c2 call ebp */
  call_ind((uint32_t)(EBP), 0x111914c4u);
  /* 111914c4 push 0x11196220 */
  push32((uint32_t)(0x11196220u));
  /* 111914c9 push 0x111960c8 */
  push32((uint32_t)(0x111960c8u));
  /* 111914ce call ebp */
  call_ind((uint32_t)(EBP), 0x111914d0u);
  /* 111914d0 push 0x11196218 */
  push32((uint32_t)(0x11196218u));
  /* 111914d5 push 0x111960c8 */
  push32((uint32_t)(0x111960c8u));
  /* 111914da call ebp */
  call_ind((uint32_t)(EBP), 0x111914dcu);
  /* 111914dc mov ecx, dword ptr [0x11196598] */
  ECX = (r32((uint32_t)(0x11196598)));
  /* 111914e2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111914e5 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111914e8 jge 0x11191536 */
  if ((C.sf==C.of)) goto L_11191536;
  /* 111914ea push ebx */
  push32((uint32_t)(EBX));
  /* 111914eb push 0x11196620 */
  push32((uint32_t)(0x11196620u));
  /* 111914f0 call edi */
  call_ind((uint32_t)(EDI), 0x111914f2u);
  /* 111914f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 111914f4 pop ebp */
  EBP = (pop32());
  /* 111914f5 push ebp */
  push32((uint32_t)(EBP));
  /* 111914f6 push 0x11196640 */
  push32((uint32_t)(0x11196640u));
  /* 111914fb call edi */
  call_ind((uint32_t)(EDI), 0x111914fdu);
  /* 111914fd push ebp */
  push32((uint32_t)(EBP));
  /* 111914fe push 0x11196660 */
  push32((uint32_t)(0x11196660u));
  /* 11191503 call edi */
  call_ind((uint32_t)(EDI), 0x11191505u);
  /* 11191505 push ebp */
  push32((uint32_t)(EBP));
  /* 11191506 push 0x11196700 */
  push32((uint32_t)(0x11196700u));
  /* 1119150b call edi */
  call_ind((uint32_t)(EDI), 0x1119150du);
  /* 1119150d push ebp */
  push32((uint32_t)(EBP));
  /* 1119150e push 0x11196720 */
  push32((uint32_t)(0x11196720u));
  /* 11191513 call edi */
  call_ind((uint32_t)(EDI), 0x11191515u);
  /* 11191515 push ebp */
  push32((uint32_t)(EBP));
  /* 11191516 push 0x11196728 */
  push32((uint32_t)(0x11196728u));
  /* 1119151b call edi */
  call_ind((uint32_t)(EDI), 0x1119151du);
  /* 1119151d push ebp */
  push32((uint32_t)(EBP));
  /* 1119151e push 0x11196738 */
  push32((uint32_t)(0x11196738u));
  /* 11191523 call edi */
  call_ind((uint32_t)(EDI), 0x11191525u);
  /* 11191525 push 5 */
  push32((uint32_t)(0x5u));
  /* 11191527 call dword ptr [0x111950dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950dc))), 0x1119152du);
  /* 1119152d mov ecx, dword ptr [0x11196598] */
  ECX = (r32((uint32_t)(0x11196598)));
  /* 11191533 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11191536:;
  /* 11191536 mov eax, ecx */
  EAX = (ECX);
  /* 11191538 push 3 */
  push32((uint32_t)(0x3u));
  /* 1119153a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1119153b imul ecx, ecx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xbb8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11191541 pop ebp */
  EBP = (pop32());
  /* 11191542 idiv ebp */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(EBP); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11191544 mov ebp, dword ptr [0x111950e0] */
  EBP = (r32((uint32_t)(0x111950e0)));
  /* 1119154a add eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1119154d imul eax, eax, 0x7d0 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7d0u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11191553 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11191555 push eax */
  push32((uint32_t)(EAX));
  /* 11191556 push ebx */
  push32((uint32_t)(EBX));
  /* 11191557 push ebx */
  push32((uint32_t)(EBX));
  /* 11191558 call ebp */
  call_ind((uint32_t)(EBP), 0x1119155au);
  /* 1119155a push ebx */
  push32((uint32_t)(EBX));
  /* 1119155b push ebx */
  push32((uint32_t)(EBX));
  /* 1119155c call dword ptr [0x111950d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950d8))), 0x11191562u);
  /* 11191562 push eax */
  push32((uint32_t)(EAX));
  /* 11191563 push 3 */
  push32((uint32_t)(0x3u));
  /* 11191565 push ebx */
  push32((uint32_t)(EBX));
  /* 11191566 call ebp */
  call_ind((uint32_t)(EBP), 0x11191568u);
  /* 11191568 push ebx */
  push32((uint32_t)(EBX));
  /* 11191569 push ebx */
  push32((uint32_t)(EBX));
  /* 1119156a call dword ptr [0x111950d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950d8))), 0x11191570u);
  /* 11191570 push eax */
  push32((uint32_t)(EAX));
  /* 11191571 push 2 */
  push32((uint32_t)(0x2u));
  /* 11191573 push ebx */
  push32((uint32_t)(EBX));
  /* 11191574 call ebp */
  call_ind((uint32_t)(EBP), 0x11191576u);
  /* 11191576 push ebx */
  push32((uint32_t)(EBX));
  /* 11191577 push ebx */
  push32((uint32_t)(EBX));
  /* 11191578 call dword ptr [0x111950d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950d8))), 0x1119157eu);
  /* 1119157e push eax */
  push32((uint32_t)(EAX));
  /* 1119157f push 1 */
  push32((uint32_t)(0x1u));
  /* 11191581 push ebx */
  push32((uint32_t)(EBX));
  /* 11191582 call ebp */
  call_ind((uint32_t)(EBP), 0x11191584u);
  /* 11191584 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11191587 push ebx */
  push32((uint32_t)(EBX));
  /* 11191588 push ebx */
  push32((uint32_t)(EBX));
  /* 11191589 call dword ptr [0x111950d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950d8))), 0x1119158fu);
  /* 1119158f push eax */
  push32((uint32_t)(EAX));
  /* 11191590 push 4 */
  push32((uint32_t)(0x4u));
  /* 11191592 push ebx */
  push32((uint32_t)(EBX));
  /* 11191593 call ebp */
  call_ind((uint32_t)(EBP), 0x11191595u);
  /* 11191595 push ebx */
  push32((uint32_t)(EBX));
  /* 11191596 push ebx */
  push32((uint32_t)(EBX));
  /* 11191597 call dword ptr [0x111950d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950d8))), 0x1119159du);
  /* 1119159d push eax */
  push32((uint32_t)(EAX));
  /* 1119159e push 5 */
  push32((uint32_t)(0x5u));
  /* 111915a0 push ebx */
  push32((uint32_t)(EBX));
  /* 111915a1 call ebp */
  call_ind((uint32_t)(EBP), 0x111915a3u);
  /* 111915a3 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111915a6 cmp dword ptr [0x11196598], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11196598))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111915ac push 3 */
  push32((uint32_t)(0x3u));
  /* 111915ae push ebx */
  push32((uint32_t)(EBX));
  /* 111915af jne 0x111915be */
  if (!C.zf) goto L_111915be;
  /* 111915b1 call dword ptr [0x111950d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950d8))), 0x111915b7u);
  /* 111915b7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 111915b8 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111915ba sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 111915bc jmp 0x111915c6 */
  goto L_111915c6;
L_111915be:;
  /* 111915be call dword ptr [0x111950d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950d8))), 0x111915c4u);
  /* 111915c4 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
L_111915c6:;
  /* 111915c6 push eax */
  push32((uint32_t)(EAX));
  /* 111915c7 push ebx */
  push32((uint32_t)(EBX));
  /* 111915c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 111915ca call ebp */
  call_ind((uint32_t)(EBP), 0x111915ccu);
  /* 111915cc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111915cf push ebx */
  push32((uint32_t)(EBX));
  /* 111915d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 111915d2 call dword ptr [0x111950d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950d8))), 0x111915d8u);
  /* 111915d8 push eax */
  push32((uint32_t)(EAX));
  /* 111915d9 push 3 */
  push32((uint32_t)(0x3u));
  /* 111915db push 1 */
  push32((uint32_t)(0x1u));
  /* 111915dd call ebp */
  call_ind((uint32_t)(EBP), 0x111915dfu);
  /* 111915df push ebx */
  push32((uint32_t)(EBX));
  /* 111915e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 111915e2 call dword ptr [0x111950d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950d8))), 0x111915e8u);
  /* 111915e8 push eax */
  push32((uint32_t)(EAX));
  /* 111915e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 111915eb push 1 */
  push32((uint32_t)(0x1u));
  /* 111915ed call ebp */
  call_ind((uint32_t)(EBP), 0x111915efu);
  /* 111915ef push ebx */
  push32((uint32_t)(EBX));
  /* 111915f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 111915f2 call dword ptr [0x111950d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950d8))), 0x111915f8u);
  /* 111915f8 push eax */
  push32((uint32_t)(EAX));
  /* 111915f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 111915fb push 1 */
  push32((uint32_t)(0x1u));
  /* 111915fd call ebp */
  call_ind((uint32_t)(EBP), 0x111915ffu);
  /* 111915ff push ebx */
  push32((uint32_t)(EBX));
  /* 11191600 push 1 */
  push32((uint32_t)(0x1u));
  /* 11191602 call dword ptr [0x111950d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950d8))), 0x11191608u);
  /* 11191608 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1119160b push eax */
  push32((uint32_t)(EAX));
  /* 1119160c push 4 */
  push32((uint32_t)(0x4u));
  /* 1119160e push 1 */
  push32((uint32_t)(0x1u));
  /* 11191610 call ebp */
  call_ind((uint32_t)(EBP), 0x11191612u);
  /* 11191612 push ebx */
  push32((uint32_t)(EBX));
  /* 11191613 push 1 */
  push32((uint32_t)(0x1u));
  /* 11191615 call dword ptr [0x111950d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950d8))), 0x1119161bu);
  /* 1119161b push eax */
  push32((uint32_t)(EAX));
  /* 1119161c push 5 */
  push32((uint32_t)(0x5u));
  /* 1119161e push 1 */
  push32((uint32_t)(0x1u));
  /* 11191620 call ebp */
  call_ind((uint32_t)(EBP), 0x11191622u);
  /* 11191622 push 3 */
  push32((uint32_t)(0x3u));
  /* 11191624 push 1 */
  push32((uint32_t)(0x1u));
  /* 11191626 call dword ptr [0x111950d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950d8))), 0x1119162cu);
  /* 1119162c push eax */
  push32((uint32_t)(EAX));
  /* 1119162d push ebx */
  push32((uint32_t)(EBX));
  /* 1119162e push 2 */
  push32((uint32_t)(0x2u));
  /* 11191630 call ebp */
  call_ind((uint32_t)(EBP), 0x11191632u);
  /* 11191632 push ebx */
  push32((uint32_t)(EBX));
  /* 11191633 push 2 */
  push32((uint32_t)(0x2u));
  /* 11191635 call dword ptr [0x111950d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950d8))), 0x1119163bu);
  /* 1119163b push eax */
  push32((uint32_t)(EAX));
  /* 1119163c push 3 */
  push32((uint32_t)(0x3u));
  /* 1119163e push 2 */
  push32((uint32_t)(0x2u));
  /* 11191640 call ebp */
  call_ind((uint32_t)(EBP), 0x11191642u);
  /* 11191642 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11191645 push ebx */
  push32((uint32_t)(EBX));
  /* 11191646 push 2 */
  push32((uint32_t)(0x2u));
  /* 11191648 call dword ptr [0x111950d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950d8))), 0x1119164eu);
  /* 1119164e push eax */
  push32((uint32_t)(EAX));
  /* 1119164f push 2 */
  push32((uint32_t)(0x2u));
  /* 11191651 push 2 */
  push32((uint32_t)(0x2u));
  /* 11191653 call ebp */
  call_ind((uint32_t)(EBP), 0x11191655u);
  /* 11191655 push ebx */
  push32((uint32_t)(EBX));
  /* 11191656 push 2 */
  push32((uint32_t)(0x2u));
  /* 11191658 call dword ptr [0x111950d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950d8))), 0x1119165eu);
  /* 1119165e push eax */
  push32((uint32_t)(EAX));
  /* 1119165f push 1 */
  push32((uint32_t)(0x1u));
  /* 11191661 push 2 */
  push32((uint32_t)(0x2u));
  /* 11191663 call ebp */
  call_ind((uint32_t)(EBP), 0x11191665u);
  /* 11191665 push ebx */
  push32((uint32_t)(EBX));
  /* 11191666 push 2 */
  push32((uint32_t)(0x2u));
  /* 11191668 call dword ptr [0x111950d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950d8))), 0x1119166eu);
  /* 1119166e push eax */
  push32((uint32_t)(EAX));
  /* 1119166f push 4 */
  push32((uint32_t)(0x4u));
  /* 11191671 push 2 */
  push32((uint32_t)(0x2u));
  /* 11191673 call ebp */
  call_ind((uint32_t)(EBP), 0x11191675u);
  /* 11191675 push ebx */
  push32((uint32_t)(EBX));
  /* 11191676 push 2 */
  push32((uint32_t)(0x2u));
  /* 11191678 call dword ptr [0x111950d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950d8))), 0x1119167eu);
  /* 1119167e add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11191681 push eax */
  push32((uint32_t)(EAX));
  /* 11191682 push 5 */
  push32((uint32_t)(0x5u));
  /* 11191684 push 2 */
  push32((uint32_t)(0x2u));
  /* 11191686 call ebp */
  call_ind((uint32_t)(EBP), 0x11191688u);
  /* 11191688 push dword ptr [0x11196598] */
  push32((uint32_t)(r32((uint32_t)(0x11196598))));
  /* 1119168e mov ebp, dword ptr [0x111950e8] */
  EBP = (r32((uint32_t)(0x111950e8)));
  /* 11191694 push 1 */
  push32((uint32_t)(0x1u));
  /* 11191696 push ebx */
  push32((uint32_t)(EBX));
  /* 11191697 push ebx */
  push32((uint32_t)(EBX));
  /* 11191698 push 0x1119620c */
  push32((uint32_t)(0x1119620cu));
  /* 1119169d push 1 */
  push32((uint32_t)(0x1u));
  /* 1119169f call ebp */
  call_ind((uint32_t)(EBP), 0x111916a1u);
  /* 111916a1 push dword ptr [0x11196598] */
  push32((uint32_t)(r32((uint32_t)(0x11196598))));
  /* 111916a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 111916a9 push ebx */
  push32((uint32_t)(EBX));
  /* 111916aa push ebx */
  push32((uint32_t)(EBX));
  /* 111916ab push 0x11196200 */
  push32((uint32_t)(0x11196200u));
  /* 111916b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 111916b2 call ebp */
  call_ind((uint32_t)(EBP), 0x111916b4u);
  /* 111916b4 push 0x111961f8 */
  push32((uint32_t)(0x111961f8u));
  /* 111916b9 call dword ptr [0x111950ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950ec))), 0x111916bfu);
  /* 111916bf add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111916c2 push ebx */
  push32((uint32_t)(EBX));
  /* 111916c3 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 111916c5 call esi */
  call_ind((uint32_t)(ESI), 0x111916c7u);
  /* 111916c7 pop ecx */
  ECX = (pop32());
  /* 111916c8 pop ecx */
  ECX = (pop32());
L_111916c9:;
  /* 111916c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 111916cb call dword ptr [0x111950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950b0))), 0x111916d1u);
  /* 111916d1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111916d3 pop ecx */
  ECX = (pop32());
  /* 111916d4 mov ebp, 0x80 */
  EBP = (0x80u);
  /* 111916d9 je 0x11191710 */
  if (C.zf) goto L_11191710;
  /* 111916db push 1 */
  push32((uint32_t)(0x1u));
  /* 111916dd call dword ptr [0x111950e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950e4))), 0x111916e3u);
  /* 111916e3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111916e5 pop ecx */
  ECX = (pop32());
  /* 111916e6 je 0x11191710 */
  if (C.zf) goto L_11191710;
  /* 111916e8 push ebx */
  push32((uint32_t)(EBX));
  /* 111916e9 push 0x111965a0 */
  push32((uint32_t)(0x111965a0u));
  /* 111916ee call edi */
  call_ind((uint32_t)(EDI), 0x111916f0u);
  /* 111916f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 111916f2 push 0x111965a8 */
  push32((uint32_t)(0x111965a8u));
  /* 111916f7 call edi */
  call_ind((uint32_t)(EDI), 0x111916f9u);
  /* 111916f9 push ebx */
  push32((uint32_t)(EBX));
  /* 111916fa push ebp */
  push32((uint32_t)(EBP));
  /* 111916fb push 0x11196718 */
  push32((uint32_t)(0x11196718u));
  /* 11191700 push 4 */
  push32((uint32_t)(0x4u));
  /* 11191702 call dword ptr [0x111950f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950f4))), 0x11191708u);
  /* 11191708 push ebx */
  push32((uint32_t)(EBX));
  /* 11191709 push 1 */
  push32((uint32_t)(0x1u));
  /* 1119170b call esi */
  call_ind((uint32_t)(ESI), 0x1119170du);
  /* 1119170d add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11191710:;
  /* 11191710 push 2 */
  push32((uint32_t)(0x2u));
  /* 11191712 call dword ptr [0x111950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950b0))), 0x11191718u);
  /* 11191718 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1119171a pop ecx */
  ECX = (pop32());
  /* 1119171b je 0x111917a4 */
  if (C.zf) goto L_111917a4;
  /* 11191721 push 1 */
  push32((uint32_t)(0x1u));
  /* 11191723 call dword ptr [0x111950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950b0))), 0x11191729u);
  /* 11191729 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1119172b pop ecx */
  ECX = (pop32());
  /* 1119172c jne 0x111917a4 */
  if (!C.zf) goto L_111917a4;
  /* 1119172e push 4 */
  push32((uint32_t)(0x4u));
  /* 11191730 push 0x11196718 */
  push32((uint32_t)(0x11196718u));
  /* 11191735 call dword ptr [0x111950f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950f8))), 0x1119173bu);
  /* 1119173b pop ecx */
  ECX = (pop32());
  /* 1119173c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1119173e pop ecx */
  ECX = (pop32());
  /* 1119173f jle 0x111917a4 */
  if ((C.zf||C.sf!=C.of)) goto L_111917a4;
  /* 11191741 push 0x111961f0 */
  push32((uint32_t)(0x111961f0u));
  /* 11191746 call dword ptr [0x111950ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950ec))), 0x1119174cu);
  /* 1119174c push 4 */
  push32((uint32_t)(0x4u));
  /* 1119174e push 0x258 */
  push32((uint32_t)(0x258u));
  /* 11191753 push 0x11196610 */
  push32((uint32_t)(0x11196610u));
  /* 11191758 call dword ptr [0x111950d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950d0))), 0x1119175eu);
  /* 1119175e push 0x11196718 */
  push32((uint32_t)(0x11196718u));
  /* 11191763 call dword ptr [0x111950f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950f0))), 0x11191769u);
  /* 11191769 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1119176b call dword ptr [0x111950c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950c0))), 0x11191771u);
  /* 11191771 push ebx */
  push32((uint32_t)(EBX));
  /* 11191772 push 0x111965a0 */
  push32((uint32_t)(0x111965a0u));
  /* 11191777 call edi */
  call_ind((uint32_t)(EDI), 0x11191779u);
  /* 11191779 push 1 */
  push32((uint32_t)(0x1u));
  /* 1119177b push 0x111965a8 */
  push32((uint32_t)(0x111965a8u));
  /* 11191780 call edi */
  call_ind((uint32_t)(EDI), 0x11191782u);
  /* 11191782 push ebx */
  push32((uint32_t)(EBX));
  /* 11191783 push ebp */
  push32((uint32_t)(EBP));
  /* 11191784 push 0x11196608 */
  push32((uint32_t)(0x11196608u));
  /* 11191789 push 4 */
  push32((uint32_t)(0x4u));
  /* 1119178b call dword ptr [0x111950f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950f4))), 0x11191791u);
  /* 11191791 push ebx */
  push32((uint32_t)(EBX));
  /* 11191792 push 4 */
  push32((uint32_t)(0x4u));
  /* 11191794 call dword ptr [0x11195100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195100))), 0x1119179au);
  /* 1119179a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1119179d push ebx */
  push32((uint32_t)(EBX));
  /* 1119179e push 2 */
  push32((uint32_t)(0x2u));
  /* 111917a0 call esi */
  call_ind((uint32_t)(ESI), 0x111917a2u);
  /* 111917a2 pop ecx */
  ECX = (pop32());
  /* 111917a3 pop ecx */
  ECX = (pop32());
L_111917a4:;
  /* 111917a4 push 3 */
  push32((uint32_t)(0x3u));
  /* 111917a6 call dword ptr [0x111950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950b0))), 0x111917acu);
  /* 111917ac test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111917ae pop ecx */
  ECX = (pop32());
  /* 111917af je 0x11191897 */
  if (C.zf) goto L_11191897;
  /* 111917b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 111917b7 call dword ptr [0x111950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950b0))), 0x111917bdu);
  /* 111917bd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111917bf pop ecx */
  ECX = (pop32());
  /* 111917c0 jne 0x11191897 */
  if (!C.zf) goto L_11191897;
  /* 111917c6 push 0x111965c8 */
  push32((uint32_t)(0x111965c8u));
  /* 111917cb call dword ptr [0x11195104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195104))), 0x111917d1u);
  /* 111917d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111917d3 pop ecx */
  ECX = (pop32());
  /* 111917d4 jne 0x11191897 */
  if (!C.zf) goto L_11191897;
  /* 111917da push 0x111965d0 */
  push32((uint32_t)(0x111965d0u));
  /* 111917df call dword ptr [0x11195104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195104))), 0x111917e5u);
  /* 111917e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111917e7 pop ecx */
  ECX = (pop32());
  /* 111917e8 jne 0x11191897 */
  if (!C.zf) goto L_11191897;
  /* 111917ee push 0x111965d8 */
  push32((uint32_t)(0x111965d8u));
  /* 111917f3 call dword ptr [0x11195104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195104))), 0x111917f9u);
  /* 111917f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111917fb pop ecx */
  ECX = (pop32());
  /* 111917fc jne 0x11191897 */
  if (!C.zf) goto L_11191897;
  /* 11191802 push ebx */
  push32((uint32_t)(EBX));
  /* 11191803 push 0x111965a0 */
  push32((uint32_t)(0x111965a0u));
  /* 11191808 call edi */
  call_ind((uint32_t)(EDI), 0x1119180au);
  /* 1119180a push ebx */
  push32((uint32_t)(EBX));
  /* 1119180b push ebp */
  push32((uint32_t)(EBP));
  /* 1119180c push 0x11196610 */
  push32((uint32_t)(0x11196610u));
  /* 11191811 push 4 */
  push32((uint32_t)(0x4u));
  /* 11191813 call dword ptr [0x111950f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950f4))), 0x11191819u);
  /* 11191819 push ebx */
  push32((uint32_t)(EBX));
  /* 1119181a push 0x111965a8 */
  push32((uint32_t)(0x111965a8u));
  /* 1119181f call edi */
  call_ind((uint32_t)(EDI), 0x11191821u);
  /* 11191821 push ebx */
  push32((uint32_t)(EBX));
  /* 11191822 push ebp */
  push32((uint32_t)(EBP));
  /* 11191823 push 0x111966d8 */
  push32((uint32_t)(0x111966d8u));
  /* 11191828 push 4 */
  push32((uint32_t)(0x4u));
  /* 1119182a call dword ptr [0x111950f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950f4))), 0x11191830u);
  /* 11191830 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11191832 call dword ptr [0x111950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950b0))), 0x11191838u);
  /* 11191838 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1119183b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1119183d je 0x11191897 */
  if (C.zf) goto L_11191897;
  /* 1119183f push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11191841 call dword ptr [0x111950bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950bc))), 0x11191847u);
  /* 11191847 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11191849 call dword ptr [0x111950c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950c0))), 0x1119184fu);
  /* 1119184f push ebx */
  push32((uint32_t)(EBX));
  /* 11191850 push 0x111966e8 */
  push32((uint32_t)(0x111966e8u));
  /* 11191855 call edi */
  call_ind((uint32_t)(EDI), 0x11191857u);
  /* 11191857 push ebx */
  push32((uint32_t)(EBX));
  /* 11191858 push 0x8c */
  push32((uint32_t)(0x8cu));
  /* 1119185d push 0x11196770 */
  push32((uint32_t)(0x11196770u));
  /* 11191862 push 4 */
  push32((uint32_t)(0x4u));
  /* 11191864 call dword ptr [0x111950f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950f4))), 0x1119186au);
  /* 1119186a push ebx */
  push32((uint32_t)(EBX));
  /* 1119186b push 0x111965a0 */
  push32((uint32_t)(0x111965a0u));
  /* 11191870 call edi */
  call_ind((uint32_t)(EDI), 0x11191872u);
  /* 11191872 push 1 */
  push32((uint32_t)(0x1u));
  /* 11191874 push 0x111965a8 */
  push32((uint32_t)(0x111965a8u));
  /* 11191879 call edi */
  call_ind((uint32_t)(EDI), 0x1119187bu);
  /* 1119187b push 4 */
  push32((uint32_t)(0x4u));
  /* 1119187d push ebx */
  push32((uint32_t)(EBX));
  /* 1119187e call dword ptr [0x11195100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195100))), 0x11191884u);
  /* 11191884 push 0x111961e8 */
  push32((uint32_t)(0x111961e8u));
  /* 11191889 call dword ptr [0x111950ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950ec))), 0x1119188fu);
  /* 1119188f push ebx */
  push32((uint32_t)(EBX));
  /* 11191890 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11191892 call esi */
  call_ind((uint32_t)(ESI), 0x11191894u);
  /* 11191894 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11191897:;
  /* 11191897 push 5 */
  push32((uint32_t)(0x5u));
  /* 11191899 call dword ptr [0x111950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950b0))), 0x1119189fu);
  /* 1119189f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111918a1 pop ecx */
  ECX = (pop32());
  /* 111918a2 je 0x11191907 */
  if (C.zf) goto L_11191907;
  /* 111918a4 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 111918a6 call dword ptr [0x111950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950b0))), 0x111918acu);
  /* 111918ac test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111918ae pop ecx */
  ECX = (pop32());
  /* 111918af jne 0x11191907 */
  if (!C.zf) goto L_11191907;
  /* 111918b1 push 0x111965a0 */
  push32((uint32_t)(0x111965a0u));
  /* 111918b6 push 0x11196610 */
  push32((uint32_t)(0x11196610u));
  /* 111918bb call dword ptr [0x111950fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950fc))), 0x111918c1u);
  /* 111918c1 pop ecx */
  ECX = (pop32());
  /* 111918c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111918c4 pop ecx */
  ECX = (pop32());
  /* 111918c5 jle 0x11191907 */
  if ((C.zf||C.sf!=C.of)) goto L_11191907;
  /* 111918c7 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 111918c9 call dword ptr [0x111950bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950bc))), 0x111918cfu);
  /* 111918cf push 0x45 */
  push32((uint32_t)(0x45u));
  /* 111918d1 call dword ptr [0x111950c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950c0))), 0x111918d7u);
  /* 111918d7 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 111918d9 call dword ptr [0x111950c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950c0))), 0x111918dfu);
  /* 111918df push 0x111961e0 */
  push32((uint32_t)(0x111961e0u));
  /* 111918e4 call dword ptr [0x111950ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950ec))), 0x111918eau);
  /* 111918ea push ebx */
  push32((uint32_t)(EBX));
  /* 111918eb push 0x37 */
  push32((uint32_t)(0x37u));
  /* 111918ed call esi */
  call_ind((uint32_t)(ESI), 0x111918efu);
  /* 111918ef push 1 */
  push32((uint32_t)(0x1u));
  /* 111918f1 push 0x38 */
  push32((uint32_t)(0x38u));
  /* 111918f3 call esi */
  call_ind((uint32_t)(ESI), 0x111918f5u);
  /* 111918f5 push ebx */
  push32((uint32_t)(EBX));
  /* 111918f6 push 3 */
  push32((uint32_t)(0x3u));
  /* 111918f8 call esi */
  call_ind((uint32_t)(ESI), 0x111918fau);
  /* 111918fa push ebx */
  push32((uint32_t)(EBX));
  /* 111918fb push 4 */
  push32((uint32_t)(0x4u));
  /* 111918fd call esi */
  call_ind((uint32_t)(ESI), 0x111918ffu);
  /* 111918ff push ebx */
  push32((uint32_t)(EBX));
  /* 11191900 push 5 */
  push32((uint32_t)(0x5u));
  /* 11191902 call esi */
  call_ind((uint32_t)(ESI), 0x11191904u);
  /* 11191904 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11191907:;
  /* 11191907 push 0x38 */
  push32((uint32_t)(0x38u));
  /* 11191909 call dword ptr [0x111950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950b0))), 0x1119190fu);
  /* 1119190f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11191911 pop ecx */
  ECX = (pop32());
  /* 11191912 je 0x111919d4 */
  if (C.zf) goto L_111919d4;
  /* 11191918 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1119191a call dword ptr [0x111950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950b0))), 0x11191920u);
  /* 11191920 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11191922 pop ecx */
  ECX = (pop32());
  /* 11191923 jne 0x111919d4 */
  if (!C.zf) goto L_111919d4;
  /* 11191929 push ebx */
  push32((uint32_t)(EBX));
  /* 1119192a push 0x11196610 */
  push32((uint32_t)(0x11196610u));
  /* 1119192f call dword ptr [0x111950f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950f8))), 0x11191935u);
  /* 11191935 pop ecx */
  ECX = (pop32());
  /* 11191936 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11191938 pop ecx */
  ECX = (pop32());
  /* 11191939 jle 0x111919d4 */
  if ((C.zf||C.sf!=C.of)) goto L_111919d4;
  /* 1119193f push 0x111961d8 */
  push32((uint32_t)(0x111961d8u));
  /* 11191944 call dword ptr [0x1119510c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119510c))), 0x1119194au);
  /* 1119194a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1119194c pop ecx */
  ECX = (pop32());
  /* 1119194d je 0x111919c1 */
  if (C.zf) goto L_111919c1;
  /* 1119194f push 1 */
  push32((uint32_t)(0x1u));
  /* 11191951 push ebx */
  push32((uint32_t)(EBX));
  /* 11191952 call dword ptr [0x111950d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950d8))), 0x11191958u);
  /* 11191958 pop ecx */
  ECX = (pop32());
  /* 11191959 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1119195e pop ecx */
  ECX = (pop32());
  /* 1119195f jl 0x111919c1 */
  if ((C.sf!=C.of)) goto L_111919c1;
  /* 11191961 push ebx */
  push32((uint32_t)(EBX));
  /* 11191962 push 0x111966e8 */
  push32((uint32_t)(0x111966e8u));
  /* 11191967 call edi */
  call_ind((uint32_t)(EDI), 0x11191969u);
  /* 11191969 push 4 */
  push32((uint32_t)(0x4u));
  /* 1119196b call dword ptr [0x111950dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950dc))), 0x11191971u);
  /* 11191971 push 0x8c */
  push32((uint32_t)(0x8cu));
  /* 11191976 push 0x11196770 */
  push32((uint32_t)(0x11196770u));
  /* 1119197b push ebx */
  push32((uint32_t)(EBX));
  /* 1119197c push 0x111965c0 */
  push32((uint32_t)(0x111965c0u));
  /* 11191981 push 0x111965b8 */
  push32((uint32_t)(0x111965b8u));
  /* 11191986 push 0x111965b0 */
  push32((uint32_t)(0x111965b0u));
  /* 1119198b call dword ptr [0x11195110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195110))), 0x11191991u);
  /* 11191991 push 0xfffffc18 */
  push32((uint32_t)(0xfffffc18u));
  /* 11191996 push 1 */
  push32((uint32_t)(0x1u));
  /* 11191998 push ebx */
  push32((uint32_t)(EBX));
  /* 11191999 call dword ptr [0x11195108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195108))), 0x1119199fu);
  /* 1119199f push 0x46 */
  push32((uint32_t)(0x46u));
  /* 111919a1 call dword ptr [0x111950bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950bc))), 0x111919a7u);
  /* 111919a7 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 111919a9 call dword ptr [0x111950c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950c0))), 0x111919afu);
  /* 111919af push 1 */
  push32((uint32_t)(0x1u));
  /* 111919b1 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 111919b3 call esi */
  call_ind((uint32_t)(ESI), 0x111919b5u);
  /* 111919b5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111919b8 push ebx */
  push32((uint32_t)(EBX));
  /* 111919b9 push 0x38 */
  push32((uint32_t)(0x38u));
  /* 111919bb call esi */
  call_ind((uint32_t)(ESI), 0x111919bdu);
  /* 111919bd pop ecx */
  ECX = (pop32());
  /* 111919be pop ecx */
  ECX = (pop32());
  /* 111919bf jmp 0x111919d4 */
  goto L_111919d4;
L_111919c1:;
  /* 111919c1 push ebx */
  push32((uint32_t)(EBX));
  /* 111919c2 push 0x38 */
  push32((uint32_t)(0x38u));
  /* 111919c4 call esi */
  call_ind((uint32_t)(ESI), 0x111919c6u);
  /* 111919c6 push 0x111961d0 */
  push32((uint32_t)(0x111961d0u));
  /* 111919cb call dword ptr [0x111950ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950ec))), 0x111919d1u);
  /* 111919d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111919d4:;
  /* 111919d4 push 0x38 */
  push32((uint32_t)(0x38u));
  /* 111919d6 call dword ptr [0x111950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950b0))), 0x111919dcu);
  /* 111919dc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111919de pop ecx */
  ECX = (pop32());
  /* 111919df jne 0x11191a08 */
  if (!C.zf) goto L_11191a08;
  /* 111919e1 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 111919e3 call dword ptr [0x111950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950b0))), 0x111919e9u);
  /* 111919e9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111919eb pop ecx */
  ECX = (pop32());
  /* 111919ec jne 0x11191a08 */
  if (!C.zf) goto L_11191a08;
  /* 111919ee push ebx */
  push32((uint32_t)(EBX));
  /* 111919ef push 0x11196610 */
  push32((uint32_t)(0x11196610u));
  /* 111919f4 call dword ptr [0x111950f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950f8))), 0x111919fau);
  /* 111919fa pop ecx */
  ECX = (pop32());
  /* 111919fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111919fd pop ecx */
  ECX = (pop32());
  /* 111919fe jne 0x11191a08 */
  if (!C.zf) goto L_11191a08;
  /* 11191a00 push 1 */
  push32((uint32_t)(0x1u));
  /* 11191a02 push 0x38 */
  push32((uint32_t)(0x38u));
  /* 11191a04 call esi */
  call_ind((uint32_t)(ESI), 0x11191a06u);
  /* 11191a06 pop ecx */
  ECX = (pop32());
  /* 11191a07 pop ecx */
  ECX = (pop32());
L_11191a08:;
  /* 11191a08 push 5 */
  push32((uint32_t)(0x5u));
  /* 11191a0a call dword ptr [0x111950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950b0))), 0x11191a10u);
  /* 11191a10 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11191a12 pop ecx */
  ECX = (pop32());
  /* 11191a13 je 0x11191af6 */
  if (C.zf) goto L_11191af6;
  /* 11191a19 push 2 */
  push32((uint32_t)(0x2u));
  /* 11191a1b call dword ptr [0x111950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950b0))), 0x11191a21u);
  /* 11191a21 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11191a23 pop ecx */
  ECX = (pop32());
  /* 11191a24 jne 0x11191af6 */
  if (!C.zf) goto L_11191af6;
  /* 11191a2a push 0x111965a0 */
  push32((uint32_t)(0x111965a0u));
  /* 11191a2f call dword ptr [0x11195104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195104))), 0x11191a35u);
  /* 11191a35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11191a37 pop ecx */
  ECX = (pop32());
  /* 11191a38 je 0x11191a4e */
  if (C.zf) goto L_11191a4e;
  /* 11191a3a push 0x111965a8 */
  push32((uint32_t)(0x111965a8u));
  /* 11191a3f call dword ptr [0x11195104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195104))), 0x11191a45u);
  /* 11191a45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11191a47 pop ecx */
  ECX = (pop32());
  /* 11191a48 jne 0x11191af6 */
  if (!C.zf) goto L_11191af6;
L_11191a4e:;
  /* 11191a4e push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11191a50 call dword ptr [0x111950bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950bc))), 0x11191a56u);
  /* 11191a56 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11191a58 call dword ptr [0x111950c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950c0))), 0x11191a5eu);
  /* 11191a5e push 0x111965a0 */
  push32((uint32_t)(0x111965a0u));
  /* 11191a63 call dword ptr [0x11195104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195104))), 0x11191a69u);
  /* 11191a69 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11191a6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11191a6e jne 0x11191a7e */
  if (!C.zf) goto L_11191a7e;
  /* 11191a70 push 0x111961c8 */
  push32((uint32_t)(0x111961c8u));
  /* 11191a75 call dword ptr [0x111950ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950ec))), 0x11191a7bu);
  /* 11191a7b pop ecx */
  ECX = (pop32());
  /* 11191a7c jmp 0x11191ab4 */
  goto L_11191ab4;
L_11191a7e:;
  /* 11191a7e push ebx */
  push32((uint32_t)(EBX));
  /* 11191a7f push 0x111965a0 */
  push32((uint32_t)(0x111965a0u));
  /* 11191a84 call edi */
  call_ind((uint32_t)(EDI), 0x11191a86u);
  /* 11191a86 push 4 */
  push32((uint32_t)(0x4u));
  /* 11191a88 push ebx */
  push32((uint32_t)(EBX));
  /* 11191a89 call dword ptr [0x11195100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195100))), 0x11191a8fu);
  /* 11191a8f push ebx */
  push32((uint32_t)(EBX));
  /* 11191a90 push 0x111965a0 */
  push32((uint32_t)(0x111965a0u));
  /* 11191a95 call edi */
  call_ind((uint32_t)(EDI), 0x11191a97u);
  /* 11191a97 push ebx */
  push32((uint32_t)(EBX));
  /* 11191a98 push ebp */
  push32((uint32_t)(EBP));
  /* 11191a99 push 0x11196610 */
  push32((uint32_t)(0x11196610u));
  /* 11191a9e push 4 */
  push32((uint32_t)(0x4u));
  /* 11191aa0 call dword ptr [0x111950f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950f4))), 0x11191aa6u);
  /* 11191aa6 push 0x111961c0 */
  push32((uint32_t)(0x111961c0u));
  /* 11191aab call dword ptr [0x111950ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950ec))), 0x11191ab1u);
  /* 11191ab1 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11191ab4:;
  /* 11191ab4 push ebx */
  push32((uint32_t)(EBX));
  /* 11191ab5 push 0x111965c8 */
  push32((uint32_t)(0x111965c8u));
  /* 11191aba call edi */
  call_ind((uint32_t)(EDI), 0x11191abcu);
  /* 11191abc push 1 */
  push32((uint32_t)(0x1u));
  /* 11191abe push 0x111965d0 */
  push32((uint32_t)(0x111965d0u));
  /* 11191ac3 call edi */
  call_ind((uint32_t)(EDI), 0x11191ac5u);
  /* 11191ac5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11191ac7 push 0x111965d8 */
  push32((uint32_t)(0x111965d8u));
  /* 11191acc call edi */
  call_ind((uint32_t)(EDI), 0x11191aceu);
  /* 11191ace push ebx */
  push32((uint32_t)(EBX));
  /* 11191acf push ebp */
  push32((uint32_t)(EBP));
  /* 11191ad0 push 0x11196648 */
  push32((uint32_t)(0x11196648u));
  /* 11191ad5 push 5 */
  push32((uint32_t)(0x5u));
  /* 11191ad7 call dword ptr [0x111950f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950f4))), 0x11191addu);
  /* 11191add push ebx */
  push32((uint32_t)(EBX));
  /* 11191ade push 3 */
  push32((uint32_t)(0x3u));
  /* 11191ae0 call esi */
  call_ind((uint32_t)(ESI), 0x11191ae2u);
  /* 11191ae2 push ebx */
  push32((uint32_t)(EBX));
  /* 11191ae3 push 4 */
  push32((uint32_t)(0x4u));
  /* 11191ae5 call esi */
  call_ind((uint32_t)(ESI), 0x11191ae7u);
  /* 11191ae7 push ebx */
  push32((uint32_t)(EBX));
  /* 11191ae8 push 5 */
  push32((uint32_t)(0x5u));
  /* 11191aea call esi */
  call_ind((uint32_t)(ESI), 0x11191aecu);
  /* 11191aec add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11191aef push ebx */
  push32((uint32_t)(EBX));
  /* 11191af0 push 7 */
  push32((uint32_t)(0x7u));
  /* 11191af2 call esi */
  call_ind((uint32_t)(ESI), 0x11191af4u);
  /* 11191af4 pop ecx */
  ECX = (pop32());
  /* 11191af5 pop ecx */
  ECX = (pop32());
L_11191af6:;
  /* 11191af6 push 4 */
  push32((uint32_t)(0x4u));
  /* 11191af8 call dword ptr [0x111950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950b0))), 0x11191afeu);
  /* 11191afe test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11191b00 pop ecx */
  ECX = (pop32());
  /* 11191b01 je 0x11191c4a */
  if (C.zf) goto L_11191c4a;
  /* 11191b07 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11191b09 call dword ptr [0x111950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950b0))), 0x11191b0fu);
  /* 11191b0f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11191b11 pop ecx */
  ECX = (pop32());
  /* 11191b12 je 0x11191c4a */
  if (C.zf) goto L_11191c4a;
  /* 11191b18 mov ebp, dword ptr [0x111950f8] */
  EBP = (r32((uint32_t)(0x111950f8)));
  /* 11191b1e push ebx */
  push32((uint32_t)(EBX));
  /* 11191b1f push 0x11196638 */
  push32((uint32_t)(0x11196638u));
  /* 11191b24 call ebp */
  call_ind((uint32_t)(EBP), 0x11191b26u);
  /* 11191b26 mov edx, eax */
  EDX = (EAX);
  /* 11191b28 push ebx */
  push32((uint32_t)(EBX));
  /* 11191b29 push 0x11196630 */
  push32((uint32_t)(0x11196630u));
  /* 11191b2e mov dword ptr [esp + 0x20], edx */
  w32((uint32_t)(ESP + 0x20), (EDX));
  /* 11191b32 call ebp */
  call_ind((uint32_t)(EBP), 0x11191b34u);
  /* 11191b34 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 11191b38 push ebx */
  push32((uint32_t)(EBX));
  /* 11191b39 push 0x11196628 */
  push32((uint32_t)(0x11196628u));
  /* 11191b3e add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11191b40 call dword ptr [0x111950f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950f8))), 0x11191b46u);
  /* 11191b46 add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11191b48 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11191b4b test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 11191b4d jle 0x11191c45 */
  if ((C.zf||C.sf!=C.of)) goto L_11191c45;
  /* 11191b53 mov ebp, 0x111965c8 */
  EBP = (0x111965c8u);
  /* 11191b58 push ebx */
  push32((uint32_t)(EBX));
  /* 11191b59 push ebp */
  push32((uint32_t)(EBP));
  /* 11191b5a call edi */
  call_ind((uint32_t)(EDI), 0x11191b5cu);
  /* 11191b5c push 1 */
  push32((uint32_t)(0x1u));
  /* 11191b5e push 0x111965d0 */
  push32((uint32_t)(0x111965d0u));
  /* 11191b63 call edi */
  call_ind((uint32_t)(EDI), 0x11191b65u);
  /* 11191b65 push 1 */
  push32((uint32_t)(0x1u));
  /* 11191b67 push 0x111965d8 */
  push32((uint32_t)(0x111965d8u));
  /* 11191b6c call edi */
  call_ind((uint32_t)(EDI), 0x11191b6eu);
  /* 11191b6e push 1 */
  push32((uint32_t)(0x1u));
  /* 11191b70 push 5 */
  push32((uint32_t)(0x5u));
  /* 11191b72 call dword ptr [0x11195118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195118))), 0x11191b78u);
  /* 11191b78 push ebx */
  push32((uint32_t)(EBX));
  /* 11191b79 push 0x11196638 */
  push32((uint32_t)(0x11196638u));
  /* 11191b7e call dword ptr [0x111950f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950f8))), 0x11191b84u);
  /* 11191b84 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11191b87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11191b89 push ebx */
  push32((uint32_t)(EBX));
  /* 11191b8a jne 0x11191ba4 */
  if (!C.zf) goto L_11191ba4;
  /* 11191b8c mov ebp, 0x80 */
  EBP = (0x80u);
  /* 11191b91 push ebp */
  push32((uint32_t)(EBP));
  /* 11191b92 push 0x11196630 */
  push32((uint32_t)(0x11196630u));
L_11191b97:;
  /* 11191b97 push 5 */
  push32((uint32_t)(0x5u));
  /* 11191b99 call dword ptr [0x1119511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119511c))), 0x11191b9fu);
  /* 11191b9f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11191ba2 jmp 0x11191c10 */
  goto L_11191c10;
L_11191ba4:;
  /* 11191ba4 push 0x11196628 */
  push32((uint32_t)(0x11196628u));
  /* 11191ba9 call dword ptr [0x111950f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950f8))), 0x11191bafu);
  /* 11191baf pop ecx */
  ECX = (pop32());
  /* 11191bb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11191bb2 pop ecx */
  ECX = (pop32());
  /* 11191bb3 jne 0x11191bd5 */
  if (!C.zf) goto L_11191bd5;
  /* 11191bb5 push ebx */
  push32((uint32_t)(EBX));
  /* 11191bb6 push 0x11196630 */
  push32((uint32_t)(0x11196630u));
  /* 11191bbb call dword ptr [0x111950f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950f8))), 0x11191bc1u);
  /* 11191bc1 pop ecx */
  ECX = (pop32());
  /* 11191bc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11191bc4 pop ecx */
  ECX = (pop32());
  /* 11191bc5 jne 0x11191bd5 */
  if (!C.zf) goto L_11191bd5;
  /* 11191bc7 mov ebp, 0x80 */
  EBP = (0x80u);
  /* 11191bcc push ebx */
  push32((uint32_t)(EBX));
  /* 11191bcd push ebp */
  push32((uint32_t)(EBP));
  /* 11191bce push 0x11196638 */
  push32((uint32_t)(0x11196638u));
  /* 11191bd3 jmp 0x11191b97 */
  goto L_11191b97;
L_11191bd5:;
  /* 11191bd5 push ebx */
  push32((uint32_t)(EBX));
  /* 11191bd6 push ebp */
  push32((uint32_t)(EBP));
  /* 11191bd7 call edi */
  call_ind((uint32_t)(EDI), 0x11191bd9u);
  /* 11191bd9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11191bdb push 0x111965d0 */
  push32((uint32_t)(0x111965d0u));
  /* 11191be0 call edi */
  call_ind((uint32_t)(EDI), 0x11191be2u);
  /* 11191be2 mov ebp, 0x80 */
  EBP = (0x80u);
  /* 11191be7 push ebx */
  push32((uint32_t)(EBX));
  /* 11191be8 push ebp */
  push32((uint32_t)(EBP));
  /* 11191be9 push 0x11196630 */
  push32((uint32_t)(0x11196630u));
  /* 11191bee push 5 */
  push32((uint32_t)(0x5u));
  /* 11191bf0 call dword ptr [0x1119511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119511c))), 0x11191bf6u);
  /* 11191bf6 push ebx */
  push32((uint32_t)(EBX));
  /* 11191bf7 push 0x111965d8 */
  push32((uint32_t)(0x111965d8u));
  /* 11191bfc call edi */
  call_ind((uint32_t)(EDI), 0x11191bfeu);
  /* 11191bfe push ebx */
  push32((uint32_t)(EBX));
  /* 11191bff push ebp */
  push32((uint32_t)(EBP));
  /* 11191c00 push 0x11196638 */
  push32((uint32_t)(0x11196638u));
  /* 11191c05 push 5 */
  push32((uint32_t)(0x5u));
  /* 11191c07 call dword ptr [0x1119511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119511c))), 0x11191c0du);
  /* 11191c0d add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11191c10:;
  /* 11191c10 push ebx */
  push32((uint32_t)(EBX));
  /* 11191c11 push 0x11196628 */
  push32((uint32_t)(0x11196628u));
  /* 11191c16 call dword ptr [0x111950f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950f8))), 0x11191c1cu);
  /* 11191c1c pop ecx */
  ECX = (pop32());
  /* 11191c1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11191c1f pop ecx */
  ECX = (pop32());
  /* 11191c20 jle 0x11191c3c */
  if ((C.zf||C.sf!=C.of)) goto L_11191c3c;
  /* 11191c22 push ebx */
  push32((uint32_t)(EBX));
  /* 11191c23 push 0x111965d0 */
  push32((uint32_t)(0x111965d0u));
  /* 11191c28 call edi */
  call_ind((uint32_t)(EDI), 0x11191c2au);
  /* 11191c2a push ebx */
  push32((uint32_t)(EBX));
  /* 11191c2b push ebp */
  push32((uint32_t)(EBP));
  /* 11191c2c push 0x11196628 */
  push32((uint32_t)(0x11196628u));
  /* 11191c31 push 5 */
  push32((uint32_t)(0x5u));
  /* 11191c33 call dword ptr [0x1119511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119511c))), 0x11191c39u);
  /* 11191c39 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11191c3c:;
  /* 11191c3c push ebx */
  push32((uint32_t)(EBX));
  /* 11191c3d push 4 */
  push32((uint32_t)(0x4u));
  /* 11191c3f call esi */
  call_ind((uint32_t)(ESI), 0x11191c41u);
  /* 11191c41 pop ecx */
  ECX = (pop32());
  /* 11191c42 pop ecx */
  ECX = (pop32());
  /* 11191c43 jmp 0x11191c4a */
  goto L_11191c4a;
L_11191c45:;
  /* 11191c45 mov ebp, 0x80 */
  EBP = (0x80u);
L_11191c4a:;
  /* 11191c4a push 7 */
  push32((uint32_t)(0x7u));
  /* 11191c4c call dword ptr [0x111950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950b0))), 0x11191c52u);
  /* 11191c52 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11191c54 pop ecx */
  ECX = (pop32());
  /* 11191c55 je 0x11191ce7 */
  if (C.zf) goto L_11191ce7;
  /* 11191c5b push 4 */
  push32((uint32_t)(0x4u));
  /* 11191c5d call dword ptr [0x111950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950b0))), 0x11191c63u);
  /* 11191c63 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11191c65 pop ecx */
  ECX = (pop32());
  /* 11191c66 jne 0x11191ce7 */
  if (!C.zf) goto L_11191ce7;
  /* 11191c68 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11191c6a call dword ptr [0x111950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950b0))), 0x11191c70u);
  /* 11191c70 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11191c72 pop ecx */
  ECX = (pop32());
  /* 11191c73 je 0x11191ce7 */
  if (C.zf) goto L_11191ce7;
  /* 11191c75 mov ebp, dword ptr [0x111950f8] */
  EBP = (r32((uint32_t)(0x111950f8)));
  /* 11191c7b push ebx */
  push32((uint32_t)(EBX));
  /* 11191c7c push 0x11196638 */
  push32((uint32_t)(0x11196638u));
  /* 11191c81 call ebp */
  call_ind((uint32_t)(EBP), 0x11191c83u);
  /* 11191c83 mov edx, eax */
  EDX = (EAX);
  /* 11191c85 push ebx */
  push32((uint32_t)(EBX));
  /* 11191c86 push 0x11196630 */
  push32((uint32_t)(0x11196630u));
  /* 11191c8b mov dword ptr [esp + 0x20], edx */
  w32((uint32_t)(ESP + 0x20), (EDX));
  /* 11191c8f call ebp */
  call_ind((uint32_t)(EBP), 0x11191c91u);
  /* 11191c91 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 11191c95 push ebx */
  push32((uint32_t)(EBX));
  /* 11191c96 push 0x11196628 */
  push32((uint32_t)(0x11196628u));
  /* 11191c9b add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11191c9d call dword ptr [0x111950f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950f8))), 0x11191ca3u);
  /* 11191ca3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11191ca6 add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11191ca8 jne 0x11191ce2 */
  if (!C.zf) goto L_11191ce2;
  /* 11191caa push ebx */
  push32((uint32_t)(EBX));
  /* 11191cab push 0x111965c8 */
  push32((uint32_t)(0x111965c8u));
  /* 11191cb0 call edi */
  call_ind((uint32_t)(EDI), 0x11191cb2u);
  /* 11191cb2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11191cb4 push 0x111965d0 */
  push32((uint32_t)(0x111965d0u));
  /* 11191cb9 call edi */
  call_ind((uint32_t)(EDI), 0x11191cbbu);
  /* 11191cbb push 1 */
  push32((uint32_t)(0x1u));
  /* 11191cbd push 0x111965d8 */
  push32((uint32_t)(0x111965d8u));
  /* 11191cc2 call edi */
  call_ind((uint32_t)(EDI), 0x11191cc4u);
  /* 11191cc4 mov ebp, 0x80 */
  EBP = (0x80u);
  /* 11191cc9 push ebx */
  push32((uint32_t)(EBX));
  /* 11191cca push ebp */
  push32((uint32_t)(EBP));
  /* 11191ccb push 0x11196630 */
  push32((uint32_t)(0x11196630u));
  /* 11191cd0 push 5 */
  push32((uint32_t)(0x5u));
  /* 11191cd2 call dword ptr [0x1119511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119511c))), 0x11191cd8u);
  /* 11191cd8 push ebx */
  push32((uint32_t)(EBX));
  /* 11191cd9 push 7 */
  push32((uint32_t)(0x7u));
  /* 11191cdb call esi */
  call_ind((uint32_t)(ESI), 0x11191cddu);
  /* 11191cdd add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11191ce0 jmp 0x11191ce7 */
  goto L_11191ce7;
L_11191ce2:;
  /* 11191ce2 mov ebp, 0x80 */
  EBP = (0x80u);
L_11191ce7:;
  /* 11191ce7 push 8 */
  push32((uint32_t)(0x8u));
  /* 11191ce9 call dword ptr [0x111950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950b0))), 0x11191cefu);
  /* 11191cef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11191cf1 pop ecx */
  ECX = (pop32());
  /* 11191cf2 je 0x11191d68 */
  if (C.zf) goto L_11191d68;
  /* 11191cf4 mov ebp, dword ptr [0x11195104] */
  EBP = (r32((uint32_t)(0x11195104)));
  /* 11191cfa push 0x111965d8 */
  push32((uint32_t)(0x111965d8u));
  /* 11191cff call ebp */
  call_ind((uint32_t)(EBP), 0x11191d01u);
  /* 11191d01 mov edx, eax */
  EDX = (EAX);
  /* 11191d03 mov dword ptr [esp], 0x111965d0 */
  w32((uint32_t)(ESP), (0x111965d0u));
  /* 11191d0a mov dword ptr [esp + 0x14], edx */
  w32((uint32_t)(ESP + 0x14), (EDX));
  /* 11191d0e call ebp */
  call_ind((uint32_t)(EBP), 0x11191d10u);
  /* 11191d10 mov ebp, dword ptr [esp + 0x14] */
  EBP = (r32((uint32_t)(ESP + 0x14)));
  /* 11191d14 mov dword ptr [esp], 0x111965c8 */
  w32((uint32_t)(ESP), (0x111965c8u));
  /* 11191d1b add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11191d1d call dword ptr [0x11195104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195104))), 0x11191d23u);
  /* 11191d23 add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11191d25 pop ecx */
  ECX = (pop32());
  /* 11191d26 cmp ebp, 0x1e */
  { uint32_t _a=(EBP),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11191d29 jge 0x11191d63 */
  if ((C.sf==C.of)) goto L_11191d63;
  /* 11191d2b push ebx */
  push32((uint32_t)(EBX));
  /* 11191d2c push 0x111965c8 */
  push32((uint32_t)(0x111965c8u));
  /* 11191d31 call edi */
  call_ind((uint32_t)(EDI), 0x11191d33u);
  /* 11191d33 push 1 */
  push32((uint32_t)(0x1u));
  /* 11191d35 push 0x111965d0 */
  push32((uint32_t)(0x111965d0u));
  /* 11191d3a call edi */
  call_ind((uint32_t)(EDI), 0x11191d3cu);
  /* 11191d3c push 1 */
  push32((uint32_t)(0x1u));
  /* 11191d3e push 0x111965d8 */
  push32((uint32_t)(0x111965d8u));
  /* 11191d43 call edi */
  call_ind((uint32_t)(EDI), 0x11191d45u);
  /* 11191d45 mov ebp, 0x80 */
  EBP = (0x80u);
  /* 11191d4a push ebx */
  push32((uint32_t)(EBX));
  /* 11191d4b push ebp */
  push32((uint32_t)(EBP));
  /* 11191d4c push 0x11196610 */
  push32((uint32_t)(0x11196610u));
  /* 11191d51 push 5 */
  push32((uint32_t)(0x5u));
  /* 11191d53 call dword ptr [0x1119511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119511c))), 0x11191d59u);
  /* 11191d59 push ebx */
  push32((uint32_t)(EBX));
  /* 11191d5a push 8 */
  push32((uint32_t)(0x8u));
  /* 11191d5c call esi */
  call_ind((uint32_t)(ESI), 0x11191d5eu);
  /* 11191d5e add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11191d61 jmp 0x11191d68 */
  goto L_11191d68;
L_11191d63:;
  /* 11191d63 mov ebp, 0x80 */
  EBP = (0x80u);
L_11191d68:;
  /* 11191d68 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 11191d6a call dword ptr [0x111950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950b0))), 0x11191d70u);
  /* 11191d70 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11191d72 pop ecx */
  ECX = (pop32());
  /* 11191d73 je 0x111922da */
  if (C.zf) goto L_111922da;
  /* 11191d79 push 0x24 */
  push32((uint32_t)(0x24u));
  /* 11191d7b call dword ptr [0x111950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950b0))), 0x11191d81u);
  /* 11191d81 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11191d83 pop ecx */
  ECX = (pop32());
  /* 11191d84 je 0x11191dbd */
  if (C.zf) goto L_11191dbd;
  /* 11191d86 push ebx */
  push32((uint32_t)(EBX));
  /* 11191d87 push 0x11196670 */
  push32((uint32_t)(0x11196670u));
  /* 11191d8c call dword ptr [0x111950f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950f8))), 0x11191d92u);
  /* 11191d92 pop ecx */
  ECX = (pop32());
  /* 11191d93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11191d95 pop ecx */
  ECX = (pop32());
  /* 11191d96 jle 0x11191dbd */
  if ((C.zf||C.sf!=C.of)) goto L_11191dbd;
  /* 11191d98 push ebx */
  push32((uint32_t)(EBX));
  /* 11191d99 push 5 */
  push32((uint32_t)(0x5u));
  /* 11191d9b push 0x11196698 */
  push32((uint32_t)(0x11196698u));
  /* 11191da0 call dword ptr [0x11195114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195114))), 0x11191da6u);
  /* 11191da6 push ebx */
  push32((uint32_t)(EBX));
  /* 11191da7 push ebp */
  push32((uint32_t)(EBP));
  /* 11191da8 push 0x11196670 */
  push32((uint32_t)(0x11196670u));
  /* 11191dad push 5 */
  push32((uint32_t)(0x5u));
  /* 11191daf call dword ptr [0x1119511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119511c))), 0x11191db5u);
  /* 11191db5 push ebx */
  push32((uint32_t)(EBX));
  /* 11191db6 push 0x24 */
  push32((uint32_t)(0x24u));
  /* 11191db8 call esi */
  call_ind((uint32_t)(ESI), 0x11191dbau);
  /* 11191dba add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11191dbd:;
  /* 11191dbd push ebx */
  push32((uint32_t)(EBX));
  /* 11191dbe push 0x11196670 */
  push32((uint32_t)(0x11196670u));
  /* 11191dc3 call dword ptr [0x111950f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950f8))), 0x11191dc9u);
  /* 11191dc9 pop ecx */
  ECX = (pop32());
  /* 11191dca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11191dcc pop ecx */
  ECX = (pop32());
  /* 11191dcd jne 0x11191fc4 */
  if (!C.zf) goto L_11191fc4;
  /* 11191dd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11191dd5 push 0x24 */
  push32((uint32_t)(0x24u));
  /* 11191dd7 call esi */
  call_ind((uint32_t)(ESI), 0x11191dd9u);
  /* 11191dd9 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11191ddb call dword ptr [0x111950e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950e4))), 0x11191de1u);
  /* 11191de1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11191de4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11191de6 je 0x11191f09 */
  if (C.zf) goto L_11191f09;
  /* 11191dec push ebp */
  push32((uint32_t)(EBP));
  /* 11191ded push 0x11196750 */
  push32((uint32_t)(0x11196750u));
  /* 11191df2 push 5 */
  push32((uint32_t)(0x5u));
  /* 11191df4 push 0x11196730 */
  push32((uint32_t)(0x11196730u));
  /* 11191df9 push 0x111966d0 */
  push32((uint32_t)(0x111966d0u));
  /* 11191dfe push 0x111965e0 */
  push32((uint32_t)(0x111965e0u));
  /* 11191e03 call dword ptr [0x11195110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195110))), 0x11191e09u);
  /* 11191e09 push ebx */
  push32((uint32_t)(EBX));
  /* 11191e0a push 0x111965e0 */
  push32((uint32_t)(0x111965e0u));
  /* 11191e0f call edi */
  call_ind((uint32_t)(EDI), 0x11191e11u);
  /* 11191e11 push 1 */
  push32((uint32_t)(0x1u));
  /* 11191e13 push 0x111966a0 */
  push32((uint32_t)(0x111966a0u));
  /* 11191e18 call edi */
  call_ind((uint32_t)(EDI), 0x11191e1au);
  /* 11191e1a push ebx */
  push32((uint32_t)(EBX));
  /* 11191e1b push 5 */
  push32((uint32_t)(0x5u));
  /* 11191e1d call dword ptr [0x11195118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195118))), 0x11191e23u);
  /* 11191e23 push ebx */
  push32((uint32_t)(EBX));
  /* 11191e24 push ebp */
  push32((uint32_t)(EBP));
  /* 11191e25 push 0x11196710 */
  push32((uint32_t)(0x11196710u));
  /* 11191e2a push 5 */
  push32((uint32_t)(0x5u));
  /* 11191e2c call dword ptr [0x111950f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950f4))), 0x11191e32u);
  /* 11191e32 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11191e35 push 0x25 */
  push32((uint32_t)(0x25u));
  /* 11191e37 call dword ptr [0x111950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950b0))), 0x11191e3du);
  /* 11191e3d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11191e3f pop ecx */
  ECX = (pop32());
  /* 11191e40 je 0x11191eb7 */
  if (C.zf) goto L_11191eb7;
  /* 11191e42 push ebp */
  push32((uint32_t)(EBP));
  /* 11191e43 push 0x11196750 */
  push32((uint32_t)(0x11196750u));
  /* 11191e48 push 5 */
  push32((uint32_t)(0x5u));
  /* 11191e4a push 0x11196730 */
  push32((uint32_t)(0x11196730u));
  /* 11191e4f push 0x111966d0 */
  push32((uint32_t)(0x111966d0u));
  /* 11191e54 push 0x111965e8 */
  push32((uint32_t)(0x111965e8u));
  /* 11191e59 call dword ptr [0x11195110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195110))), 0x11191e5fu);
  /* 11191e5f push ebx */
  push32((uint32_t)(EBX));
  /* 11191e60 push 0x111965e8 */
  push32((uint32_t)(0x111965e8u));
  /* 11191e65 call edi */
  call_ind((uint32_t)(EDI), 0x11191e67u);
  /* 11191e67 push ebx */
  push32((uint32_t)(EBX));
  /* 11191e68 push ebp */
  push32((uint32_t)(EBP));
  /* 11191e69 push 0x11196650 */
  push32((uint32_t)(0x11196650u));
  /* 11191e6e push 5 */
  push32((uint32_t)(0x5u));
  /* 11191e70 call dword ptr [0x1119511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119511c))), 0x11191e76u);
  /* 11191e76 push ebp */
  push32((uint32_t)(EBP));
  /* 11191e77 push 0x11196758 */
  push32((uint32_t)(0x11196758u));
  /* 11191e7c push 5 */
  push32((uint32_t)(0x5u));
  /* 11191e7e push 0x11196730 */
  push32((uint32_t)(0x11196730u));
  /* 11191e83 push 0x111966d0 */
  push32((uint32_t)(0x111966d0u));
  /* 11191e88 push 0x111965f8 */
  push32((uint32_t)(0x111965f8u));
  /* 11191e8d call dword ptr [0x11195110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195110))), 0x11191e93u);
  /* 11191e93 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11191e96 push ebx */
  push32((uint32_t)(EBX));
  /* 11191e97 push 0x111965f8 */
  push32((uint32_t)(0x111965f8u));
  /* 11191e9c call edi */
  call_ind((uint32_t)(EDI), 0x11191e9eu);
  /* 11191e9e push ebx */
  push32((uint32_t)(EBX));
  /* 11191e9f push ebp */
  push32((uint32_t)(EBP));
  /* 11191ea0 push 0x11196658 */
  push32((uint32_t)(0x11196658u));
  /* 11191ea5 push 5 */
  push32((uint32_t)(0x5u));
  /* 11191ea7 call dword ptr [0x1119511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119511c))), 0x11191eadu);
  /* 11191ead push ebx */
  push32((uint32_t)(EBX));
  /* 11191eae push 0x25 */
  push32((uint32_t)(0x25u));
  /* 11191eb0 call esi */
  call_ind((uint32_t)(ESI), 0x11191eb2u);
  /* 11191eb2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11191eb5 jmp 0x11191ebf */
  goto L_11191ebf;
L_11191eb7:;
  /* 11191eb7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11191eb9 push 0x25 */
  push32((uint32_t)(0x25u));
  /* 11191ebb call esi */
  call_ind((uint32_t)(ESI), 0x11191ebdu);
  /* 11191ebd pop ecx */
  ECX = (pop32());
  /* 11191ebe pop ecx */
  ECX = (pop32());
L_11191ebf:;
  /* 11191ebf push ebx */
  push32((uint32_t)(EBX));
  /* 11191ec0 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 11191ec2 call esi */
  call_ind((uint32_t)(ESI), 0x11191ec4u);
  /* 11191ec4 push ebx */
  push32((uint32_t)(EBX));
  /* 11191ec5 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11191ec7 call esi */
  call_ind((uint32_t)(ESI), 0x11191ec9u);
  /* 11191ec9 push ebx */
  push32((uint32_t)(EBX));
  /* 11191eca push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11191ecc call esi */
  call_ind((uint32_t)(ESI), 0x11191eceu);
  /* 11191ece push ebx */
  push32((uint32_t)(EBX));
  /* 11191ecf push 0x21 */
  push32((uint32_t)(0x21u));
  /* 11191ed1 call esi */
  call_ind((uint32_t)(ESI), 0x11191ed3u);
  /* 11191ed3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11191ed5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11191ed7 call esi */
  call_ind((uint32_t)(ESI), 0x11191ed9u);
  /* 11191ed9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11191edb push 0x29 */
  push32((uint32_t)(0x29u));
  /* 11191edd call esi */
  call_ind((uint32_t)(ESI), 0x11191edfu);
  /* 11191edf push 1 */
  push32((uint32_t)(0x1u));
  /* 11191ee1 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11191ee3 call esi */
  call_ind((uint32_t)(ESI), 0x11191ee5u);
  /* 11191ee5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11191ee7 push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 11191ee9 call esi */
  call_ind((uint32_t)(ESI), 0x11191eebu);
  /* 11191eeb add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11191eee push 1 */
  push32((uint32_t)(0x1u));
  /* 11191ef0 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11191ef2 call esi */
  call_ind((uint32_t)(ESI), 0x11191ef4u);
  /* 11191ef4 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11191ef9 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11191efb call dword ptr [0x111950c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950c8))), 0x11191f01u);
  /* 11191f01 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11191f04 jmp 0x11191fc4 */
  goto L_11191fc4;
L_11191f09:;
  /* 11191f09 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11191f0b call dword ptr [0x111950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950b0))), 0x11191f11u);
  /* 11191f11 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11191f13 pop ecx */
  ECX = (pop32());
  /* 11191f14 je 0x11191fc4 */
  if (C.zf) goto L_11191fc4;
  /* 11191f1a push ebx */
  push32((uint32_t)(EBX));
  /* 11191f1b push 0x11196670 */
  push32((uint32_t)(0x11196670u));
  /* 11191f20 call dword ptr [0x111950f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950f8))), 0x11191f26u);
  /* 11191f26 pop ecx */
  ECX = (pop32());
  /* 11191f27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11191f29 pop ecx */
  ECX = (pop32());
  /* 11191f2a jne 0x11191fc4 */
  if (!C.zf) goto L_11191fc4;
  /* 11191f30 push 0x111965e0 */
  push32((uint32_t)(0x111965e0u));
  /* 11191f35 call dword ptr [0x11195104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195104))), 0x11191f3bu);
  /* 11191f3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11191f3d pop ecx */
  ECX = (pop32());
  /* 11191f3e jne 0x11191fc4 */
  if (!C.zf) goto L_11191fc4;
  /* 11191f44 push 0x111966a0 */
  push32((uint32_t)(0x111966a0u));
  /* 11191f49 call dword ptr [0x11195104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195104))), 0x11191f4fu);
  /* 11191f4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11191f51 pop ecx */
  ECX = (pop32());
  /* 11191f52 jne 0x11191fc4 */
  if (!C.zf) goto L_11191fc4;
  /* 11191f54 push ebp */
  push32((uint32_t)(EBP));
  /* 11191f55 push 0x11196750 */
  push32((uint32_t)(0x11196750u));
  /* 11191f5a push 5 */
  push32((uint32_t)(0x5u));
  /* 11191f5c push 0x11196730 */
  push32((uint32_t)(0x11196730u));
  /* 11191f61 push 0x111966d0 */
  push32((uint32_t)(0x111966d0u));
  /* 11191f66 push 0x111966a0 */
  push32((uint32_t)(0x111966a0u));
  /* 11191f6b call dword ptr [0x11195110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195110))), 0x11191f71u);
  /* 11191f71 push ebx */
  push32((uint32_t)(EBX));
  /* 11191f72 push 0x111966a0 */
  push32((uint32_t)(0x111966a0u));
  /* 11191f77 call edi */
  call_ind((uint32_t)(EDI), 0x11191f79u);
  /* 11191f79 push 1 */
  push32((uint32_t)(0x1u));
  /* 11191f7b push 5 */
  push32((uint32_t)(0x5u));
  /* 11191f7d call dword ptr [0x11195118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195118))), 0x11191f83u);
  /* 11191f83 push ebx */
  push32((uint32_t)(EBX));
  /* 11191f84 push ebp */
  push32((uint32_t)(EBP));
  /* 11191f85 push 0x11196710 */
  push32((uint32_t)(0x11196710u));
  /* 11191f8a push 5 */
  push32((uint32_t)(0x5u));
  /* 11191f8c call dword ptr [0x1119511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119511c))), 0x11191f92u);
  /* 11191f92 push 1 */
  push32((uint32_t)(0x1u));
  /* 11191f94 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 11191f96 call esi */
  call_ind((uint32_t)(ESI), 0x11191f98u);
  /* 11191f98 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11191f9b push 1 */
  push32((uint32_t)(0x1u));
  /* 11191f9d push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11191f9f call esi */
  call_ind((uint32_t)(ESI), 0x11191fa1u);
  /* 11191fa1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11191fa3 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11191fa5 call esi */
  call_ind((uint32_t)(ESI), 0x11191fa7u);
  /* 11191fa7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11191fa9 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 11191fab call esi */
  call_ind((uint32_t)(ESI), 0x11191fadu);
  /* 11191fad push ebx */
  push32((uint32_t)(EBX));
  /* 11191fae push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11191fb0 call esi */
  call_ind((uint32_t)(ESI), 0x11191fb2u);
  /* 11191fb2 push ebx */
  push32((uint32_t)(EBX));
  /* 11191fb3 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 11191fb5 call esi */
  call_ind((uint32_t)(ESI), 0x11191fb7u);
  /* 11191fb7 push ebx */
  push32((uint32_t)(EBX));
  /* 11191fb8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11191fba call esi */
  call_ind((uint32_t)(ESI), 0x11191fbcu);
  /* 11191fbc push ebx */
  push32((uint32_t)(EBX));
  /* 11191fbd push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 11191fbf call esi */
  call_ind((uint32_t)(ESI), 0x11191fc1u);
  /* 11191fc1 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11191fc4:;
  /* 11191fc4 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 11191fc6 call dword ptr [0x111950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950b0))), 0x11191fccu);
  /* 11191fcc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11191fce pop ecx */
  ECX = (pop32());
  /* 11191fcf jne 0x11192011 */
  if (!C.zf) goto L_11192011;
  /* 11191fd1 push 0x111965e0 */
  push32((uint32_t)(0x111965e0u));
  /* 11191fd6 push 0x11196590 */
  push32((uint32_t)(0x11196590u));
  /* 11191fdb call dword ptr [0x111950fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950fc))), 0x11191fe1u);
  /* 11191fe1 pop ecx */
  ECX = (pop32());
  /* 11191fe2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11191fe4 pop ecx */
  ECX = (pop32());
  /* 11191fe5 jle 0x11192011 */
  if ((C.zf||C.sf!=C.of)) goto L_11192011;
  /* 11191fe7 push ebx */
  push32((uint32_t)(EBX));
  /* 11191fe8 push 0x111965e0 */
  push32((uint32_t)(0x111965e0u));
  /* 11191fed call edi */
  call_ind((uint32_t)(EDI), 0x11191fefu);
  /* 11191fef push 1 */
  push32((uint32_t)(0x1u));
  /* 11191ff1 push 0x111966a0 */
  push32((uint32_t)(0x111966a0u));
  /* 11191ff6 call edi */
  call_ind((uint32_t)(EDI), 0x11191ff8u);
  /* 11191ff8 push ebx */
  push32((uint32_t)(EBX));
  /* 11191ff9 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 11191ffb push 0x11196668 */
  push32((uint32_t)(0x11196668u));
  /* 11192000 push 5 */
  push32((uint32_t)(0x5u));
  /* 11192002 call dword ptr [0x1119511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119511c))), 0x11192008u);
  /* 11192008 push 1 */
  push32((uint32_t)(0x1u));
  /* 1119200a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1119200c call esi */
  call_ind((uint32_t)(ESI), 0x1119200eu);
  /* 1119200e add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11192011:;
  /* 11192011 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11192013 call dword ptr [0x111950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950b0))), 0x11192019u);
  /* 11192019 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1119201b pop ecx */
  ECX = (pop32());
  /* 1119201c jne 0x11192064 */
  if (!C.zf) goto L_11192064;
  /* 1119201e push 0x111965e0 */
  push32((uint32_t)(0x111965e0u));
  /* 11192023 push 0x11196778 */
  push32((uint32_t)(0x11196778u));
  /* 11192028 call dword ptr [0x111950fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950fc))), 0x1119202eu);
  /* 1119202e pop ecx */
  ECX = (pop32());
  /* 1119202f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11192031 pop ecx */
  ECX = (pop32());
  /* 11192032 jle 0x11192064 */
  if ((C.zf||C.sf!=C.of)) goto L_11192064;
  /* 11192034 inc dword ptr [0x11196618] */
  { uint32_t _r=(r32((uint32_t)(0x11196618)))+1; w32((uint32_t)(0x11196618), (_r)); fl_inc(_r,32); }
  /* 1119203a push ebx */
  push32((uint32_t)(EBX));
  /* 1119203b push 0x111965e0 */
  push32((uint32_t)(0x111965e0u));
  /* 11192040 call edi */
  call_ind((uint32_t)(EDI), 0x11192042u);
  /* 11192042 push 1 */
  push32((uint32_t)(0x1u));
  /* 11192044 push 0x111966a0 */
  push32((uint32_t)(0x111966a0u));
  /* 11192049 call edi */
  call_ind((uint32_t)(EDI), 0x1119204bu);
  /* 1119204b push ebx */
  push32((uint32_t)(EBX));
  /* 1119204c push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1119204e push 0x11196678 */
  push32((uint32_t)(0x11196678u));
  /* 11192053 push 5 */
  push32((uint32_t)(0x5u));
  /* 11192055 call dword ptr [0x1119511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119511c))), 0x1119205bu);
  /* 1119205b push 1 */
  push32((uint32_t)(0x1u));
  /* 1119205d push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1119205f call esi */
  call_ind((uint32_t)(ESI), 0x11192061u);
  /* 11192061 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11192064:;
  /* 11192064 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11192066 call dword ptr [0x111950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950b0))), 0x1119206cu);
  /* 1119206c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1119206e pop ecx */
  ECX = (pop32());
  /* 1119206f jne 0x111920ba */
  if (!C.zf) goto L_111920ba;
  /* 11192071 push 0x111965e0 */
  push32((uint32_t)(0x111965e0u));
  /* 11192076 push 0x11196780 */
  push32((uint32_t)(0x11196780u));
  /* 1119207b call dword ptr [0x111950fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950fc))), 0x11192081u);
  /* 11192081 pop ecx */
  ECX = (pop32());
  /* 11192082 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11192084 pop ecx */
  ECX = (pop32());
  /* 11192085 jle 0x111920ba */
  if ((C.zf||C.sf!=C.of)) goto L_111920ba;
  /* 11192087 inc dword ptr [0x11196748] */
  { uint32_t _r=(r32((uint32_t)(0x11196748)))+1; w32((uint32_t)(0x11196748), (_r)); fl_inc(_r,32); }
  /* 1119208d push ebx */
  push32((uint32_t)(EBX));
  /* 1119208e push 0x111965e0 */
  push32((uint32_t)(0x111965e0u));
  /* 11192093 call edi */
  call_ind((uint32_t)(EDI), 0x11192095u);
  /* 11192095 push 1 */
  push32((uint32_t)(0x1u));
  /* 11192097 push 0x111966a0 */
  push32((uint32_t)(0x111966a0u));
  /* 1119209c call edi */
  call_ind((uint32_t)(EDI), 0x1119209eu);
  /* 1119209e push ebx */
  push32((uint32_t)(EBX));
  /* 1119209f push 0xdc */
  push32((uint32_t)(0xdcu));
  /* 111920a4 push 0x11196688 */
  push32((uint32_t)(0x11196688u));
  /* 111920a9 push 5 */
  push32((uint32_t)(0x5u));
  /* 111920ab call dword ptr [0x1119511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119511c))), 0x111920b1u);
  /* 111920b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 111920b3 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 111920b5 call esi */
  call_ind((uint32_t)(ESI), 0x111920b7u);
  /* 111920b7 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111920ba:;
  /* 111920ba push 0x21 */
  push32((uint32_t)(0x21u));
  /* 111920bc call dword ptr [0x111950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950b0))), 0x111920c2u);
  /* 111920c2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111920c4 pop ecx */
  ECX = (pop32());
  /* 111920c5 jne 0x1119210c */
  if (!C.zf) goto L_1119210c;
  /* 111920c7 push 0x111965e0 */
  push32((uint32_t)(0x111965e0u));
  /* 111920cc push 0x11196788 */
  push32((uint32_t)(0x11196788u));
  /* 111920d1 call dword ptr [0x111950fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950fc))), 0x111920d7u);
  /* 111920d7 pop ecx */
  ECX = (pop32());
  /* 111920d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111920da pop ecx */
  ECX = (pop32());
  /* 111920db jle 0x1119210c */
  if ((C.zf||C.sf!=C.of)) goto L_1119210c;
  /* 111920dd inc dword ptr [0x1119661c] */
  { uint32_t _r=(r32((uint32_t)(0x1119661c)))+1; w32((uint32_t)(0x1119661c), (_r)); fl_inc(_r,32); }
  /* 111920e3 push ebx */
  push32((uint32_t)(EBX));
  /* 111920e4 push 0x111965e0 */
  push32((uint32_t)(0x111965e0u));
  /* 111920e9 call edi */
  call_ind((uint32_t)(EDI), 0x111920ebu);
  /* 111920eb push 1 */
  push32((uint32_t)(0x1u));
  /* 111920ed push 0x111966a0 */
  push32((uint32_t)(0x111966a0u));
  /* 111920f2 call edi */
  call_ind((uint32_t)(EDI), 0x111920f4u);
  /* 111920f4 push ebx */
  push32((uint32_t)(EBX));
  /* 111920f5 push ebp */
  push32((uint32_t)(EBP));
  /* 111920f6 push 0x11196648 */
  push32((uint32_t)(0x11196648u));
  /* 111920fb push 5 */
  push32((uint32_t)(0x5u));
  /* 111920fd call dword ptr [0x1119511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119511c))), 0x11192103u);
  /* 11192103 push 1 */
  push32((uint32_t)(0x1u));
  /* 11192105 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 11192107 call esi */
  call_ind((uint32_t)(ESI), 0x11192109u);
  /* 11192109 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1119210c:;
  /* 1119210c push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1119210e call dword ptr [0x111950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950b0))), 0x11192114u);
  /* 11192114 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11192116 pop ecx */
  ECX = (pop32());
  /* 11192117 jne 0x11192150 */
  if (!C.zf) goto L_11192150;
  /* 11192119 push 0x111966a0 */
  push32((uint32_t)(0x111966a0u));
  /* 1119211e push 0x11196590 */
  push32((uint32_t)(0x11196590u));
  /* 11192123 call dword ptr [0x111950fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950fc))), 0x11192129u);
  /* 11192129 pop ecx */
  ECX = (pop32());
  /* 1119212a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1119212c pop ecx */
  ECX = (pop32());
  /* 1119212d jle 0x11192150 */
  if ((C.zf||C.sf!=C.of)) goto L_11192150;
  /* 1119212f push ebx */
  push32((uint32_t)(EBX));
  /* 11192130 push 0x111966a0 */
  push32((uint32_t)(0x111966a0u));
  /* 11192135 call edi */
  call_ind((uint32_t)(EDI), 0x11192137u);
  /* 11192137 push ebx */
  push32((uint32_t)(EBX));
  /* 11192138 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 1119213a push 0x11196668 */
  push32((uint32_t)(0x11196668u));
  /* 1119213f push 5 */
  push32((uint32_t)(0x5u));
  /* 11192141 call dword ptr [0x1119511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119511c))), 0x11192147u);
  /* 11192147 push 1 */
  push32((uint32_t)(0x1u));
  /* 11192149 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1119214b call esi */
  call_ind((uint32_t)(ESI), 0x1119214du);
  /* 1119214d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11192150:;
  /* 11192150 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 11192152 call dword ptr [0x111950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950b0))), 0x11192158u);
  /* 11192158 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1119215a pop ecx */
  ECX = (pop32());
  /* 1119215b jne 0x1119219a */
  if (!C.zf) goto L_1119219a;
  /* 1119215d push 0x111966a0 */
  push32((uint32_t)(0x111966a0u));
  /* 11192162 push 0x11196778 */
  push32((uint32_t)(0x11196778u));
  /* 11192167 call dword ptr [0x111950fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950fc))), 0x1119216du);
  /* 1119216d pop ecx */
  ECX = (pop32());
  /* 1119216e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11192170 pop ecx */
  ECX = (pop32());
  /* 11192171 jle 0x1119219a */
  if ((C.zf||C.sf!=C.of)) goto L_1119219a;
  /* 11192173 inc dword ptr [0x11196618] */
  { uint32_t _r=(r32((uint32_t)(0x11196618)))+1; w32((uint32_t)(0x11196618), (_r)); fl_inc(_r,32); }
  /* 11192179 push ebx */
  push32((uint32_t)(EBX));
  /* 1119217a push 0x111966a0 */
  push32((uint32_t)(0x111966a0u));
  /* 1119217f call edi */
  call_ind((uint32_t)(EDI), 0x11192181u);
  /* 11192181 push ebx */
  push32((uint32_t)(EBX));
  /* 11192182 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11192184 push 0x11196678 */
  push32((uint32_t)(0x11196678u));
  /* 11192189 push 5 */
  push32((uint32_t)(0x5u));
  /* 1119218b call dword ptr [0x1119511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119511c))), 0x11192191u);
  /* 11192191 push 1 */
  push32((uint32_t)(0x1u));
  /* 11192193 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 11192195 call esi */
  call_ind((uint32_t)(ESI), 0x11192197u);
  /* 11192197 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1119219a:;
  /* 1119219a push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1119219c call dword ptr [0x111950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950b0))), 0x111921a2u);
  /* 111921a2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111921a4 pop ecx */
  ECX = (pop32());
  /* 111921a5 jne 0x111921e7 */
  if (!C.zf) goto L_111921e7;
  /* 111921a7 push 0x111966a0 */
  push32((uint32_t)(0x111966a0u));
  /* 111921ac push 0x11196780 */
  push32((uint32_t)(0x11196780u));
  /* 111921b1 call dword ptr [0x111950fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950fc))), 0x111921b7u);
  /* 111921b7 pop ecx */
  ECX = (pop32());
  /* 111921b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111921ba pop ecx */
  ECX = (pop32());
  /* 111921bb jle 0x111921e7 */
  if ((C.zf||C.sf!=C.of)) goto L_111921e7;
  /* 111921bd inc dword ptr [0x11196748] */
  { uint32_t _r=(r32((uint32_t)(0x11196748)))+1; w32((uint32_t)(0x11196748), (_r)); fl_inc(_r,32); }
  /* 111921c3 push ebx */
  push32((uint32_t)(EBX));
  /* 111921c4 push 0x111966a0 */
  push32((uint32_t)(0x111966a0u));
  /* 111921c9 call edi */
  call_ind((uint32_t)(EDI), 0x111921cbu);
  /* 111921cb push ebx */
  push32((uint32_t)(EBX));
  /* 111921cc push 0xdc */
  push32((uint32_t)(0xdcu));
  /* 111921d1 push 0x11196688 */
  push32((uint32_t)(0x11196688u));
  /* 111921d6 push 5 */
  push32((uint32_t)(0x5u));
  /* 111921d8 call dword ptr [0x1119511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119511c))), 0x111921deu);
  /* 111921de push 1 */
  push32((uint32_t)(0x1u));
  /* 111921e0 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 111921e2 call esi */
  call_ind((uint32_t)(ESI), 0x111921e4u);
  /* 111921e4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111921e7:;
  /* 111921e7 push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 111921e9 call dword ptr [0x111950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950b0))), 0x111921efu);
  /* 111921ef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111921f1 pop ecx */
  ECX = (pop32());
  /* 111921f2 jne 0x11192230 */
  if (!C.zf) goto L_11192230;
  /* 111921f4 push 0x111966a0 */
  push32((uint32_t)(0x111966a0u));
  /* 111921f9 push 0x11196788 */
  push32((uint32_t)(0x11196788u));
  /* 111921fe call dword ptr [0x111950fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950fc))), 0x11192204u);
  /* 11192204 pop ecx */
  ECX = (pop32());
  /* 11192205 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11192207 pop ecx */
  ECX = (pop32());
  /* 11192208 jle 0x11192230 */
  if ((C.zf||C.sf!=C.of)) goto L_11192230;
  /* 1119220a inc dword ptr [0x1119661c] */
  { uint32_t _r=(r32((uint32_t)(0x1119661c)))+1; w32((uint32_t)(0x1119661c), (_r)); fl_inc(_r,32); }
  /* 11192210 push ebx */
  push32((uint32_t)(EBX));
  /* 11192211 push 0x111966a0 */
  push32((uint32_t)(0x111966a0u));
  /* 11192216 call edi */
  call_ind((uint32_t)(EDI), 0x11192218u);
  /* 11192218 push ebx */
  push32((uint32_t)(EBX));
  /* 11192219 push ebp */
  push32((uint32_t)(EBP));
  /* 1119221a push 0x11196648 */
  push32((uint32_t)(0x11196648u));
  /* 1119221f push 5 */
  push32((uint32_t)(0x5u));
  /* 11192221 call dword ptr [0x1119511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119511c))), 0x11192227u);
  /* 11192227 push 1 */
  push32((uint32_t)(0x1u));
  /* 11192229 push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1119222b call esi */
  call_ind((uint32_t)(ESI), 0x1119222du);
  /* 1119222d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11192230:;
  /* 11192230 mov ebp, dword ptr [0x11195124] */
  EBP = (r32((uint32_t)(0x11195124)));
  /* 11192236 push 5 */
  push32((uint32_t)(0x5u));
  /* 11192238 call ebp */
  call_ind((uint32_t)(EBP), 0x1119223au);
  /* 1119223a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1119223c pop ecx */
  ECX = (pop32());
  /* 1119223d jne 0x11192257 */
  if (!C.zf) goto L_11192257;
  /* 1119223f push 5 */
  push32((uint32_t)(0x5u));
  /* 11192241 push 0x11196698 */
  push32((uint32_t)(0x11196698u));
  /* 11192246 call dword ptr [0x111950f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950f8))), 0x1119224cu);
  /* 1119224c pop ecx */
  ECX = (pop32());
  /* 1119224d cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192250 pop ecx */
  ECX = (pop32());
  /* 11192251 jge 0x111922e0 */
  if ((C.sf==C.of)) goto L_111922e0;
L_11192257:;
  /* 11192257 mov edx, dword ptr [0x1119661c] */
  EDX = (r32((uint32_t)(0x1119661c)));
  /* 1119225d mov ecx, dword ptr [0x11196618] */
  ECX = (r32((uint32_t)(0x11196618)));
  /* 11192263 mov eax, dword ptr [0x11196748] */
  EAX = (r32((uint32_t)(0x11196748)));
  /* 11192268 imul edx, edx, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x1f4u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1119226e imul ecx, ecx, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1f4u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11192274 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1119227a push edx */
  push32((uint32_t)(EDX));
  /* 1119227b push ecx */
  push32((uint32_t)(ECX));
  /* 1119227c push eax */
  push32((uint32_t)(EAX));
  /* 1119227d push 0x111961b8 */
  push32((uint32_t)(0x111961b8u));
  /* 11192282 mov dword ptr [0x11196748], eax */
  w32((uint32_t)(0x11196748), (EAX));
  /* 11192287 mov dword ptr [0x11196618], ecx */
  w32((uint32_t)(0x11196618), (ECX));
  /* 1119228d mov dword ptr [0x1119661c], edx */
  w32((uint32_t)(0x1119661c), (EDX));
  /* 11192293 call dword ptr [0x11195128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195128))), 0x11192299u);
  /* 11192299 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1119229b call dword ptr [0x111950bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950bc))), 0x111922a1u);
  /* 111922a1 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 111922a3 call dword ptr [0x111950c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950c0))), 0x111922a9u);
  /* 111922a9 push dword ptr [0x11196748] */
  push32((uint32_t)(r32((uint32_t)(0x11196748))));
  /* 111922af mov edi, dword ptr [0x11195108] */
  EDI = (r32((uint32_t)(0x11195108)));
  /* 111922b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 111922b7 push ebx */
  push32((uint32_t)(EBX));
  /* 111922b8 call edi */
  call_ind((uint32_t)(EDI), 0x111922bau);
  /* 111922ba push dword ptr [0x11196618] */
  push32((uint32_t)(r32((uint32_t)(0x11196618))));
  /* 111922c0 push 4 */
  push32((uint32_t)(0x4u));
  /* 111922c2 push ebx */
  push32((uint32_t)(EBX));
  /* 111922c3 call edi */
  call_ind((uint32_t)(EDI), 0x111922c5u);
  /* 111922c5 push dword ptr [0x1119661c] */
  push32((uint32_t)(r32((uint32_t)(0x1119661c))));
  /* 111922cb push 5 */
  push32((uint32_t)(0x5u));
  /* 111922cd push ebx */
  push32((uint32_t)(EBX));
  /* 111922ce call edi */
  call_ind((uint32_t)(EDI), 0x111922d0u);
  /* 111922d0 push ebx */
  push32((uint32_t)(EBX));
  /* 111922d1 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 111922d3 call esi */
  call_ind((uint32_t)(ESI), 0x111922d5u);
  /* 111922d5 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111922d8 jmp 0x111922e0 */
  goto L_111922e0;
L_111922da:;
  /* 111922da mov ebp, dword ptr [0x11195124] */
  EBP = (r32((uint32_t)(0x11195124)));
L_111922e0:;
  /* 111922e0 mov edi, dword ptr [0x111950b0] */
  EDI = (r32((uint32_t)(0x111950b0)));
  /* 111922e6 push 0x26 */
  push32((uint32_t)(0x26u));
  /* 111922e8 call edi */
  call_ind((uint32_t)(EDI), 0x111922eau);
  /* 111922ea test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111922ec pop ecx */
  ECX = (pop32());
  /* 111922ed je 0x1119230b */
  if (C.zf) goto L_1119230b;
  /* 111922ef push 1 */
  push32((uint32_t)(0x1u));
  /* 111922f1 call ebp */
  call_ind((uint32_t)(EBP), 0x111922f3u);
  /* 111922f3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111922f5 pop ecx */
  ECX = (pop32());
  /* 111922f6 je 0x1119230b */
  if (C.zf) goto L_1119230b;
  /* 111922f8 push 0x111961b0 */
  push32((uint32_t)(0x111961b0u));
  /* 111922fd call dword ptr [0x111950ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950ec))), 0x11192303u);
  /* 11192303 push ebx */
  push32((uint32_t)(EBX));
  /* 11192304 push 0x26 */
  push32((uint32_t)(0x26u));
  /* 11192306 call esi */
  call_ind((uint32_t)(ESI), 0x11192308u);
  /* 11192308 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1119230b:;
  /* 1119230b push 0x27 */
  push32((uint32_t)(0x27u));
  /* 1119230d call edi */
  call_ind((uint32_t)(EDI), 0x1119230fu);
  /* 1119230f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11192311 pop ecx */
  ECX = (pop32());
  /* 11192312 je 0x11192330 */
  if (C.zf) goto L_11192330;
  /* 11192314 push 2 */
  push32((uint32_t)(0x2u));
  /* 11192316 call ebp */
  call_ind((uint32_t)(EBP), 0x11192318u);
  /* 11192318 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1119231a pop ecx */
  ECX = (pop32());
  /* 1119231b je 0x11192330 */
  if (C.zf) goto L_11192330;
  /* 1119231d push 0x111961a8 */
  push32((uint32_t)(0x111961a8u));
  /* 11192322 call dword ptr [0x111950ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950ec))), 0x11192328u);
  /* 11192328 push ebx */
  push32((uint32_t)(EBX));
  /* 11192329 push 0x27 */
  push32((uint32_t)(0x27u));
  /* 1119232b call esi */
  call_ind((uint32_t)(ESI), 0x1119232du);
  /* 1119232d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11192330:;
  /* 11192330 push 1 */
  push32((uint32_t)(0x1u));
  /* 11192332 call ebp */
  call_ind((uint32_t)(EBP), 0x11192334u);
  /* 11192334 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11192336 pop ecx */
  ECX = (pop32());
  /* 11192337 je 0x11192354 */
  if (C.zf) goto L_11192354;
  /* 11192339 push 2 */
  push32((uint32_t)(0x2u));
  /* 1119233b call ebp */
  call_ind((uint32_t)(EBP), 0x1119233du);
  /* 1119233d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1119233f pop ecx */
  ECX = (pop32());
  /* 11192340 je 0x11192354 */
  if (C.zf) goto L_11192354;
  /* 11192342 push 0x111961a0 */
  push32((uint32_t)(0x111961a0u));
  /* 11192347 call dword ptr [0x111950ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950ec))), 0x1119234du);
  /* 1119234d pop ecx */
  ECX = (pop32());
  /* 1119234e call dword ptr [0x11195120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195120))), 0x11192354u);
L_11192354:;
  /* 11192354 push ebx */
  push32((uint32_t)(EBX));
  /* 11192355 call ebp */
  call_ind((uint32_t)(EBP), 0x11192357u);
  /* 11192357 pop ecx */
  ECX = (pop32());
  /* 11192358 pop edi */
  EDI = (pop32());
  /* 11192359 pop esi */
  ESI = (pop32());
  /* 1119235a pop ebp */
  EBP = (pop32());
  /* 1119235b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1119235d pop ebx */
  EBX = (pop32());
  /* 1119235e je 0x11192366 */
  if (C.zf) goto L_11192366;
  /* 11192360 call dword ptr [0x11195130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195130))), 0x11192366u);
L_11192366:;
  /* 11192366 pop ecx */
  ECX = (pop32());
  /* 11192367 ret  */
  ESPCHK(0x111913a4u, _esp0);
  ESP += 4; return;
}

/* FUN_10002368 @ 0x11192368 (217 bytes, 57 insns) */
void f_11192368(void) {
  FTRACE(0x11192368u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11192368 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1119236c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1119236f jne 0x111923fd */
  if (!C.zf) goto L_111923fd;
  /* 11192375 call dword ptr [0x11195090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195090))), 0x1119237bu);
  /* 1119237b push 1 */
  push32((uint32_t)(0x1u));
  /* 1119237d mov dword ptr [0x111967ac], eax */
  w32((uint32_t)(0x111967ac), (EAX));
  /* 11192382 call 0x11192d9c */
  push32(0x11192387u); f_11192d9c();
  /* 11192387 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11192389 pop ecx */
  ECX = (pop32());
  /* 1119238a je 0x111923c8 */
  if (C.zf) goto L_111923c8;
  /* 1119238c mov eax, dword ptr [0x111967ac] */
  EAX = (r32((uint32_t)(0x111967ac)));
  /* 11192391 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11192393 mov cl, byte ptr [0x111967ad] */
  CL = (r8((uint32_t)(0x111967ad)));
  /* 11192399 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1119239e shr dword ptr [0x111967ac], 0x10 */
  w32((uint32_t)(0x111967ac), (sh_shr((uint32_t)(r32((uint32_t)(0x111967ac))), (0x10u)&0x1f, 32)));
  /* 111923a5 mov dword ptr [0x111967b4], eax */
  w32((uint32_t)(0x111967b4), (EAX));
  /* 111923aa mov dword ptr [0x111967b8], ecx */
  w32((uint32_t)(0x111967b8), (ECX));
  /* 111923b0 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 111923b3 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111923b5 mov dword ptr [0x111967b0], eax */
  w32((uint32_t)(0x111967b0), (EAX));
  /* 111923ba call 0x1119262f */
  push32(0x111923bfu); f_1119262f();
  /* 111923bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111923c1 jne 0x111923cc */
  if (!C.zf) goto L_111923cc;
  /* 111923c3 call 0x11192dd8 */
  push32(0x111923c8u); f_11192dd8();
L_111923c8:;
  /* 111923c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111923ca jmp 0x1119243e */
  goto L_1119243e;
L_111923cc:;
  /* 111923cc call dword ptr [0x1119508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119508c))), 0x111923d2u);
  /* 111923d2 mov dword ptr [0x11196d18], eax */
  w32((uint32_t)(0x11196d18), (EAX));
  /* 111923d7 call 0x11192c6a */
  push32(0x111923dcu); f_11192c6a();
  /* 111923dc mov dword ptr [0x11196798], eax */
  w32((uint32_t)(0x11196798), (EAX));
  /* 111923e1 call 0x11192754 */
  push32(0x111923e6u); f_11192754();
  /* 111923e6 call 0x11192a1d */
  push32(0x111923ebu); f_11192a1d();
  /* 111923eb call 0x11192964 */
  push32(0x111923f0u); f_11192964();
  /* 111923f0 call 0x11192511 */
  push32(0x111923f5u); f_11192511();
  /* 111923f5 inc dword ptr [0x11196794] */
  { uint32_t _r=(r32((uint32_t)(0x11196794)))+1; w32((uint32_t)(0x11196794), (_r)); fl_inc(_r,32); }
  /* 111923fb jmp 0x1119243b */
  goto L_1119243b;
L_111923fd:;
  /* 111923fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111923ff cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192401 jne 0x1119242f */
  if (!C.zf) goto L_1119242f;
  /* 11192403 cmp dword ptr [0x11196794], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11196794))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192409 jle 0x111923c8 */
  if ((C.zf||C.sf!=C.of)) goto L_111923c8;
  /* 1119240b dec dword ptr [0x11196794] */
  { uint32_t _r=(r32((uint32_t)(0x11196794)))-1; w32((uint32_t)(0x11196794), (_r)); fl_dec(_r,32); }
  /* 11192411 cmp dword ptr [0x111967e4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x111967e4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192417 jne 0x1119241e */
  if (!C.zf) goto L_1119241e;
  /* 11192419 call 0x1119254f */
  push32(0x1119241eu); f_1119254f();
L_1119241e:;
  /* 1119241e call 0x11192910 */
  push32(0x11192423u); f_11192910();
  /* 11192423 call 0x11192683 */
  push32(0x11192428u); f_11192683();
  /* 11192428 call 0x11192dd8 */
  push32(0x1119242du); f_11192dd8();
  /* 1119242d jmp 0x1119243b */
  goto L_1119243b;
L_1119242f:;
  /* 1119242f cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192432 jne 0x1119243b */
  if (!C.zf) goto L_1119243b;
  /* 11192434 push ecx */
  push32((uint32_t)(ECX));
  /* 11192435 call 0x111926b4 */
  push32(0x1119243au); f_111926b4();
  /* 1119243a pop ecx */
  ECX = (pop32());
L_1119243b:;
  /* 1119243b push 1 */
  push32((uint32_t)(0x1u));
  /* 1119243d pop eax */
  EAX = (pop32());
L_1119243e:;
  /* 1119243e ret 0xc */
  ESPCHK(0x11192368u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11192441 (157 bytes, 73 insns) */
void f_11192441(void) {
  FTRACE(0x11192441u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11192441 push ebp */
  push32((uint32_t)(EBP));
  /* 11192442 mov ebp, esp */
  EBP = (ESP);
  /* 11192444 push ebx */
  push32((uint32_t)(EBX));
  /* 11192445 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11192448 push esi */
  push32((uint32_t)(ESI));
  /* 11192449 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1119244c push edi */
  push32((uint32_t)(EDI));
  /* 1119244d mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11192450 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11192452 jne 0x1119245d */
  if (!C.zf) goto L_1119245d;
  /* 11192454 cmp dword ptr [0x11196794], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11196794))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1119245b jmp 0x11192483 */
  goto L_11192483;
L_1119245d:;
  /* 1119245d cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192460 je 0x11192467 */
  if (C.zf) goto L_11192467;
  /* 11192462 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192465 jne 0x11192489 */
  if (!C.zf) goto L_11192489;
L_11192467:;
  /* 11192467 mov eax, dword ptr [0x11196d1c] */
  EAX = (r32((uint32_t)(0x11196d1c)));
  /* 1119246c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1119246e je 0x11192479 */
  if (C.zf) goto L_11192479;
  /* 11192470 push edi */
  push32((uint32_t)(EDI));
  /* 11192471 push esi */
  push32((uint32_t)(ESI));
  /* 11192472 push ebx */
  push32((uint32_t)(EBX));
  /* 11192473 call eax */
  call_ind((uint32_t)(EAX), 0x11192475u);
  /* 11192475 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11192477 je 0x11192485 */
  if (C.zf) goto L_11192485;
L_11192479:;
  /* 11192479 push edi */
  push32((uint32_t)(EDI));
  /* 1119247a push esi */
  push32((uint32_t)(ESI));
  /* 1119247b push ebx */
  push32((uint32_t)(EBX));
  /* 1119247c call 0x11192368 */
  push32(0x11192481u); f_11192368();
  /* 11192481 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_11192483:;
  /* 11192483 jne 0x11192489 */
  if (!C.zf) goto L_11192489;
L_11192485:;
  /* 11192485 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11192487 jmp 0x111924d7 */
  goto L_111924d7;
L_11192489:;
  /* 11192489 push edi */
  push32((uint32_t)(EDI));
  /* 1119248a push esi */
  push32((uint32_t)(ESI));
  /* 1119248b push ebx */
  push32((uint32_t)(EBX));
  /* 1119248c call 0x11191000 */
  push32(0x11192491u); f_11191000();
  /* 11192491 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192494 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11192497 jne 0x111924a5 */
  if (!C.zf) goto L_111924a5;
  /* 11192499 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1119249b jne 0x111924d4 */
  if (!C.zf) goto L_111924d4;
  /* 1119249d push edi */
  push32((uint32_t)(EDI));
  /* 1119249e push eax */
  push32((uint32_t)(EAX));
  /* 1119249f push ebx */
  push32((uint32_t)(EBX));
  /* 111924a0 call 0x11192368 */
  push32(0x111924a5u); f_11192368();
L_111924a5:;
  /* 111924a5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 111924a7 je 0x111924ae */
  if (C.zf) goto L_111924ae;
  /* 111924a9 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111924ac jne 0x111924d4 */
  if (!C.zf) goto L_111924d4;
L_111924ae:;
  /* 111924ae push edi */
  push32((uint32_t)(EDI));
  /* 111924af push esi */
  push32((uint32_t)(ESI));
  /* 111924b0 push ebx */
  push32((uint32_t)(EBX));
  /* 111924b1 call 0x11192368 */
  push32(0x111924b6u); f_11192368();
  /* 111924b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111924b8 jne 0x111924bd */
  if (!C.zf) goto L_111924bd;
  /* 111924ba and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_111924bd:;
  /* 111924bd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111924c1 je 0x111924d4 */
  if (C.zf) goto L_111924d4;
  /* 111924c3 mov eax, dword ptr [0x11196d1c] */
  EAX = (r32((uint32_t)(0x11196d1c)));
  /* 111924c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111924ca je 0x111924d4 */
  if (C.zf) goto L_111924d4;
  /* 111924cc push edi */
  push32((uint32_t)(EDI));
  /* 111924cd push esi */
  push32((uint32_t)(ESI));
  /* 111924ce push ebx */
  push32((uint32_t)(EBX));
  /* 111924cf call eax */
  call_ind((uint32_t)(EAX), 0x111924d1u);
  /* 111924d1 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_111924d4:;
  /* 111924d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_111924d7:;
  /* 111924d7 pop edi */
  EDI = (pop32());
  /* 111924d8 pop esi */
  ESI = (pop32());
  /* 111924d9 pop ebx */
  EBX = (pop32());
  /* 111924da pop ebp */
  EBP = (pop32());
  /* 111924db ret 0xc */
  ESPCHK(0x11192441u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x111924de (48 bytes, 15 insns) */
void f_111924de(void) {
  FTRACE(0x111924deu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111924de mov eax, dword ptr [0x111967a0] */
  EAX = (r32((uint32_t)(0x111967a0)));
  /* 111924e3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111924e6 je 0x111924f5 */
  if (C.zf) goto L_111924f5;
  /* 111924e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111924ea jne 0x111924fa */
  if (!C.zf) goto L_111924fa;
  /* 111924ec cmp dword ptr [0x111967a4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111967a4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111924f3 jne 0x111924fa */
  if (!C.zf) goto L_111924fa;
L_111924f5:;
  /* 111924f5 call 0x11192e4d */
  push32(0x111924fau); f_11192e4d();
L_111924fa:;
  /* 111924fa push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 111924fe call 0x11192e86 */
  push32(0x11192503u); f_11192e86();
  /* 11192503 push 0xff */
  push32((uint32_t)(0xffu));
  /* 11192508 call dword ptr [0x1119625c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119625c))), 0x1119250eu);
  /* 1119250e pop ecx */
  ECX = (pop32());
  /* 1119250f pop ecx */
  ECX = (pop32());
  /* 11192510 ret  */
  ESPCHK(0x111924deu, _esp0);
  ESP += 4; return;
}

/* FUN_10002511 @ 0x11192511 (45 bytes, 12 insns) */
void f_11192511(void) {
  FTRACE(0x11192511u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11192511 mov eax, dword ptr [0x11196d14] */
  EAX = (r32((uint32_t)(0x11196d14)));
  /* 11192516 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11192518 je 0x1119251c */
  if (C.zf) goto L_1119251c;
  /* 1119251a call eax */
  call_ind((uint32_t)(EAX), 0x1119251cu);
L_1119251c:;
  /* 1119251c push 0x11196010 */
  push32((uint32_t)(0x11196010u));
  /* 11192521 push 0x11196008 */
  push32((uint32_t)(0x11196008u));
  /* 11192526 call 0x11192615 */
  push32(0x1119252bu); f_11192615();
  /* 1119252b push 0x11196004 */
  push32((uint32_t)(0x11196004u));
  /* 11192530 push 0x11196000 */
  push32((uint32_t)(0x11196000u));
  /* 11192535 call 0x11192615 */
  push32(0x1119253au); f_11192615();
  /* 1119253a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1119253d ret  */
  ESPCHK(0x11192511u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x1119253e (17 bytes, 6 insns) */
void f_1119253e(void) {
  FTRACE(0x1119253eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1119253e push 0 */
  push32((uint32_t)(0x0u));
  /* 11192540 push 1 */
  push32((uint32_t)(0x1u));
  /* 11192542 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11192546 call 0x1119255e */
  push32(0x1119254bu); f_1119255e();
  /* 1119254b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1119254e ret  */
  ESPCHK(0x1119253eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000254f @ 0x1119254f (15 bytes, 6 insns) */
void f_1119254f(void) {
  FTRACE(0x1119254fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1119254f push 1 */
  push32((uint32_t)(0x1u));
  /* 11192551 push 0 */
  push32((uint32_t)(0x0u));
  /* 11192553 push 0 */
  push32((uint32_t)(0x0u));
  /* 11192555 call 0x1119255e */
  push32(0x1119255au); f_1119255e();
  /* 1119255a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1119255d ret  */
  ESPCHK(0x1119254fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000255e @ 0x1119255e (163 bytes, 53 insns) */
void f_1119255e(void) {
  FTRACE(0x1119255eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1119255e push edi */
  push32((uint32_t)(EDI));
  /* 1119255f call 0x11192603 */
  push32(0x11192564u); f_11192603();
  /* 11192564 push 1 */
  push32((uint32_t)(0x1u));
  /* 11192566 pop edi */
  EDI = (pop32());
  /* 11192567 cmp dword ptr [0x111967e8], edi */
  { uint32_t _a=(r32((uint32_t)(0x111967e8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1119256d jne 0x11192580 */
  if (!C.zf) goto L_11192580;
  /* 1119256f push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11192573 call dword ptr [0x11195000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195000))), 0x11192579u);
  /* 11192579 push eax */
  push32((uint32_t)(EAX));
  /* 1119257a call dword ptr [0x11195098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195098))), 0x11192580u);
L_11192580:;
  /* 11192580 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192585 push ebx */
  push32((uint32_t)(EBX));
  /* 11192586 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1119258a mov dword ptr [0x111967e4], edi */
  w32((uint32_t)(0x111967e4), (EDI));
  /* 11192590 mov byte ptr [0x111967e0], bl */
  w8((uint32_t)(0x111967e0), (BL));
  /* 11192596 jne 0x111925d4 */
  if (!C.zf) goto L_111925d4;
  /* 11192598 mov eax, dword ptr [0x11196d10] */
  EAX = (r32((uint32_t)(0x11196d10)));
  /* 1119259d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1119259f je 0x111925c3 */
  if (C.zf) goto L_111925c3;
  /* 111925a1 mov ecx, dword ptr [0x11196d0c] */
  ECX = (r32((uint32_t)(0x11196d0c)));
  /* 111925a7 push esi */
  push32((uint32_t)(ESI));
  /* 111925a8 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 111925ab cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111925ad jb 0x111925c2 */
  if (C.cf) goto L_111925c2;
L_111925af:;
  /* 111925af mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 111925b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111925b3 je 0x111925b7 */
  if (C.zf) goto L_111925b7;
  /* 111925b5 call eax */
  call_ind((uint32_t)(EAX), 0x111925b7u);
L_111925b7:;
  /* 111925b7 sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111925ba cmp esi, dword ptr [0x11196d10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11196d10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111925c0 jae 0x111925af */
  if (!C.cf) goto L_111925af;
L_111925c2:;
  /* 111925c2 pop esi */
  ESI = (pop32());
L_111925c3:;
  /* 111925c3 push 0x11196018 */
  push32((uint32_t)(0x11196018u));
  /* 111925c8 push 0x11196014 */
  push32((uint32_t)(0x11196014u));
  /* 111925cd call 0x11192615 */
  push32(0x111925d2u); f_11192615();
  /* 111925d2 pop ecx */
  ECX = (pop32());
  /* 111925d3 pop ecx */
  ECX = (pop32());
L_111925d4:;
  /* 111925d4 push 0x11196020 */
  push32((uint32_t)(0x11196020u));
  /* 111925d9 push 0x1119601c */
  push32((uint32_t)(0x1119601cu));
  /* 111925de call 0x11192615 */
  push32(0x111925e3u); f_11192615();
  /* 111925e3 pop ecx */
  ECX = (pop32());
  /* 111925e4 pop ecx */
  ECX = (pop32());
  /* 111925e5 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 111925e7 pop ebx */
  EBX = (pop32());
  /* 111925e8 je 0x111925f1 */
  if (C.zf) goto L_111925f1;
  /* 111925ea call 0x1119260c */
  push32(0x111925efu); f_1119260c();
  /* 111925ef pop edi */
  EDI = (pop32());
  /* 111925f0 ret  */
  ESPCHK(0x1119255eu, _esp0);
  ESP += 4; return;
L_111925f1:;
  /* 111925f1 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 111925f5 mov dword ptr [0x111967e8], edi */
  w32((uint32_t)(0x111967e8), (EDI));
  /* 111925fb call dword ptr [0x11195094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195094))), 0x11192601u);
  /* 11192601 pop edi */
  EDI = (pop32());
  /* 11192602 ret  */
  ESPCHK(0x1119255eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002603 @ 0x11192603 (9 bytes, 4 insns) */
void f_11192603(void) {
  FTRACE(0x11192603u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11192603 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11192605 call 0x1119306e */
  push32(0x1119260au); f_1119306e();
  /* 1119260a pop ecx */
  ECX = (pop32());
  /* 1119260b ret  */
  ESPCHK(0x11192603u, _esp0);
  ESP += 4; return;
}

/* FUN_1000260c @ 0x1119260c (9 bytes, 4 insns) */
void f_1119260c(void) {
  FTRACE(0x1119260cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1119260c push 0xd */
  push32((uint32_t)(0xdu));
  /* 1119260e call 0x111930cf */
  push32(0x11192613u); f_111930cf();
  /* 11192613 pop ecx */
  ECX = (pop32());
  /* 11192614 ret  */
  ESPCHK(0x1119260cu, _esp0);
  ESP += 4; return;
}

/* FUN_10002615 @ 0x11192615 (26 bytes, 12 insns) */
void f_11192615(void) {
  FTRACE(0x11192615u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11192615 push esi */
  push32((uint32_t)(ESI));
  /* 11192616 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_1119261a:;
  /* 1119261a cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1119261e jae 0x1119262d */
  if (!C.cf) goto L_1119262d;
  /* 11192620 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11192622 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11192624 je 0x11192628 */
  if (C.zf) goto L_11192628;
  /* 11192626 call eax */
  call_ind((uint32_t)(EAX), 0x11192628u);
L_11192628:;
  /* 11192628 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1119262b jmp 0x1119261a */
  goto L_1119261a;
L_1119262d:;
  /* 1119262d pop esi */
  ESI = (pop32());
  /* 1119262e ret  */
  ESPCHK(0x11192615u, _esp0);
  ESP += 4; return;
}

/* FUN_1000262f @ 0x1119262f (84 bytes, 32 insns) */
void f_1119262f(void) {
  FTRACE(0x1119262fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1119262f push esi */
  push32((uint32_t)(ESI));
  /* 11192630 call 0x11192fd9 */
  push32(0x11192635u); f_11192fd9();
  /* 11192635 call dword ptr [0x111950a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950a0))), 0x1119263bu);
  /* 1119263b cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1119263e mov dword ptr [0x11196260], eax */
  w32((uint32_t)(0x11196260), (EAX));
  /* 11192643 je 0x1119267f */
  if (C.zf) goto L_1119267f;
  /* 11192645 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11192647 push 1 */
  push32((uint32_t)(0x1u));
  /* 11192649 call 0x111930e4 */
  push32(0x1119264eu); f_111930e4();
  /* 1119264e mov esi, eax */
  ESI = (EAX);
  /* 11192650 pop ecx */
  ECX = (pop32());
  /* 11192651 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11192653 pop ecx */
  ECX = (pop32());
  /* 11192654 je 0x1119267f */
  if (C.zf) goto L_1119267f;
  /* 11192656 push esi */
  push32((uint32_t)(ESI));
  /* 11192657 push dword ptr [0x11196260] */
  push32((uint32_t)(r32((uint32_t)(0x11196260))));
  /* 1119265d call dword ptr [0x1119509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119509c))), 0x11192663u);
  /* 11192663 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11192665 je 0x1119267f */
  if (C.zf) goto L_1119267f;
  /* 11192667 push esi */
  push32((uint32_t)(ESI));
  /* 11192668 call 0x111926a1 */
  push32(0x1119266du); f_111926a1();
  /* 1119266d pop ecx */
  ECX = (pop32());
  /* 1119266e call dword ptr [0x11195004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195004))), 0x11192674u);
  /* 11192674 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11192678 push 1 */
  push32((uint32_t)(0x1u));
  /* 1119267a mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1119267c pop eax */
  EAX = (pop32());
  /* 1119267d pop esi */
  ESI = (pop32());
  /* 1119267e ret  */
  ESPCHK(0x1119262fu, _esp0);
  ESP += 4; return;
L_1119267f:;
  /* 1119267f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11192681 pop esi */
  ESI = (pop32());
  /* 11192682 ret  */
  ESPCHK(0x1119262fu, _esp0);
  ESP += 4; return;
}

/* FUN_10002683 @ 0x11192683 (30 bytes, 8 insns) */
void f_11192683(void) {
  FTRACE(0x11192683u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11192683 call 0x11193002 */
  push32(0x11192688u); f_11193002();
  /* 11192688 mov eax, dword ptr [0x11196260] */
  EAX = (r32((uint32_t)(0x11196260)));
  /* 1119268d cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192690 je 0x111926a0 */
  if (C.zf) goto L_111926a0;
  /* 11192692 push eax */
  push32((uint32_t)(EAX));
  /* 11192693 call dword ptr [0x111950a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950a4))), 0x11192699u);
  /* 11192699 or dword ptr [0x11196260], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11196260)))|(0xffffffffu); w32((uint32_t)(0x11196260), (_r)); fl_logic(_r,32); }
L_111926a0:;
  /* 111926a0 ret  */
  ESPCHK(0x11192683u, _esp0);
  ESP += 4; return;
}

/* FUN_100026a1 @ 0x111926a1 (19 bytes, 4 insns) */
void f_111926a1(void) {
  FTRACE(0x111926a1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111926a1 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 111926a5 mov dword ptr [eax + 0x50], 0x111963e0 */
  w32((uint32_t)(EAX + 0x50), (0x111963e0u));
  /* 111926ac mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 111926b3 ret  */
  ESPCHK(0x111926a1u, _esp0);
  ESP += 4; return;
}

/* FUN_100026b4 @ 0x111926b4 (160 bytes, 62 insns) */
void f_111926b4(void) {
  FTRACE(0x111926b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111926b4 mov eax, dword ptr [0x11196260] */
  EAX = (r32((uint32_t)(0x11196260)));
  /* 111926b9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111926bc je 0x11192753 */
  if (C.zf) goto L_11192753;
  /* 111926c2 push esi */
  push32((uint32_t)(ESI));
  /* 111926c3 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 111926c7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 111926c9 jne 0x111926d8 */
  if (!C.zf) goto L_111926d8;
  /* 111926cb push eax */
  push32((uint32_t)(EAX));
  /* 111926cc call dword ptr [0x111950a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111950a8))), 0x111926d2u);
  /* 111926d2 mov esi, eax */
  ESI = (EAX);
  /* 111926d4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 111926d6 je 0x11192744 */
  if (C.zf) goto L_11192744;
L_111926d8:;
  /* 111926d8 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 111926db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111926dd je 0x111926e6 */
  if (C.zf) goto L_111926e6;
  /* 111926df push eax */
  push32((uint32_t)(EAX));
  /* 111926e0 call 0x11193171 */
  push32(0x111926e5u); f_11193171();
  /* 111926e5 pop ecx */
  ECX = (pop32());
L_111926e6:;
  /* 111926e6 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 111926e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111926eb je 0x111926f4 */
  if (C.zf) goto L_111926f4;
  /* 111926ed push eax */
  push32((uint32_t)(EAX));
  /* 111926ee call 0x11193171 */
  push32(0x111926f3u); f_11193171();
  /* 111926f3 pop ecx */
  ECX = (pop32());
L_111926f4:;
  /* 111926f4 mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 111926f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111926f9 je 0x11192702 */
  if (C.zf) goto L_11192702;
  /* 111926fb push eax */
  push32((uint32_t)(EAX));
  /* 111926fc call 0x11193171 */
  push32(0x11192701u); f_11193171();
  /* 11192701 pop ecx */
  ECX = (pop32());
L_11192702:;
  /* 11192702 mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 11192705 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11192707 je 0x11192710 */
  if (C.zf) goto L_11192710;
  /* 11192709 push eax */
  push32((uint32_t)(EAX));
  /* 1119270a call 0x11193171 */
  push32(0x1119270fu); f_11193171();
  /* 1119270f pop ecx */
  ECX = (pop32());
L_11192710:;
  /* 11192710 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 11192713 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11192715 je 0x1119271e */
  if (C.zf) goto L_1119271e;
  /* 11192717 push eax */
  push32((uint32_t)(EAX));
  /* 11192718 call 0x11193171 */
  push32(0x1119271du); f_11193171();
  /* 1119271d pop ecx */
  ECX = (pop32());
L_1119271e:;
  /* 1119271e mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11192721 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11192723 je 0x1119272c */
  if (C.zf) goto L_1119272c;
  /* 11192725 push eax */
  push32((uint32_t)(EAX));
  /* 11192726 call 0x11193171 */
  push32(0x1119272bu); f_11193171();
  /* 1119272b pop ecx */
  ECX = (pop32());
L_1119272c:;
  /* 1119272c mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 1119272f cmp eax, 0x111963e0 */
  { uint32_t _a=(EAX),_b=(0x111963e0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192734 je 0x1119273d */
  if (C.zf) goto L_1119273d;
  /* 11192736 push eax */
  push32((uint32_t)(EAX));
  /* 11192737 call 0x11193171 */
  push32(0x1119273cu); f_11193171();
  /* 1119273c pop ecx */
  ECX = (pop32());
L_1119273d:;
  /* 1119273d push esi */
  push32((uint32_t)(ESI));
  /* 1119273e call 0x11193171 */
  push32(0x11192743u); f_11193171();
  /* 11192743 pop ecx */
  ECX = (pop32());
L_11192744:;
  /* 11192744 push 0 */
  push32((uint32_t)(0x0u));
  /* 11192746 push dword ptr [0x11196260] */
  push32((uint32_t)(r32((uint32_t)(0x11196260))));
  /* 1119274c call dword ptr [0x1119509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119509c))), 0x11192752u);
  /* 11192752 pop esi */
  ESI = (pop32());
L_11192753:;
  /* 11192753 ret  */
  ESPCHK(0x111926b4u, _esp0);
  ESP += 4; return;
}

/* FUN_10002754 @ 0x11192754 (444 bytes, 150 insns) */
void f_11192754(void) {
  FTRACE(0x11192754u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11192754 push ebp */
  push32((uint32_t)(EBP));
  /* 11192755 mov ebp, esp */
  EBP = (ESP);
  /* 11192757 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1119275a push ebx */
  push32((uint32_t)(EBX));
  /* 1119275b push esi */
  push32((uint32_t)(ESI));
  /* 1119275c push edi */
  push32((uint32_t)(EDI));
  /* 1119275d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11192762 call 0x111931b9 */
  push32(0x11192767u); f_111931b9();
  /* 11192767 mov esi, eax */
  ESI = (EAX);
  /* 11192769 pop ecx */
  ECX = (pop32());
  /* 1119276a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1119276c jne 0x11192776 */
  if (!C.zf) goto L_11192776;
  /* 1119276e push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11192770 call 0x111924de */
  push32(0x11192775u); f_111924de();
  /* 11192775 pop ecx */
  ECX = (pop32());
L_11192776:;
  /* 11192776 mov dword ptr [0x11196c00], esi */
  w32((uint32_t)(0x11196c00), (ESI));
  /* 1119277c mov dword ptr [0x11196d00], 0x20 */
  w32((uint32_t)(0x11196d00), (0x20u));
  /* 11192786 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_1119278c:;
  /* 1119278c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1119278e jae 0x111927ae */
  if (!C.cf) goto L_111927ae;
  /* 11192790 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11192794 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11192797 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 1119279b mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 1119279f mov eax, dword ptr [0x11196c00] */
  EAX = (r32((uint32_t)(0x11196c00)));
  /* 111927a4 add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111927a7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111927ac jmp 0x1119278c */
  goto L_1119278c;
L_111927ae:;
  /* 111927ae lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 111927b1 push eax */
  push32((uint32_t)(EAX));
  /* 111927b2 call dword ptr [0x11195084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195084))), 0x111927b8u);
  /* 111927b8 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 111927bd je 0x11192894 */
  if (C.zf) goto L_11192894;
  /* 111927c3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 111927c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111927c8 je 0x11192894 */
  if (C.zf) goto L_11192894;
  /* 111927ce mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 111927d0 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 111927d3 lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 111927d6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111927d9 mov eax, 0x800 */
  EAX = (0x800u);
  /* 111927de cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111927e0 jl 0x111927e4 */
  if ((C.sf!=C.of)) goto L_111927e4;
  /* 111927e2 mov edi, eax */
  EDI = (EAX);
L_111927e4:;
  /* 111927e4 cmp dword ptr [0x11196d00], edi */
  { uint32_t _a=(r32((uint32_t)(0x11196d00))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111927ea jge 0x11192842 */
  if ((C.sf==C.of)) goto L_11192842;
  /* 111927ec mov esi, 0x11196c04 */
  ESI = (0x11196c04u);
L_111927f1:;
  /* 111927f1 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 111927f6 call 0x111931b9 */
  push32(0x111927fbu); f_111931b9();
  /* 111927fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111927fd pop ecx */
  ECX = (pop32());
  /* 111927fe je 0x1119283c */
  if (C.zf) goto L_1119283c;
  /* 11192800 add dword ptr [0x11196d00], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11196d00))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x11196d00), (_r)); fl_add(_a,_b,_r,32); }
  /* 11192807 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11192809 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_1119280f:;
  /* 1119280f cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192811 jae 0x1119282f */
  if (!C.cf) goto L_1119282f;
  /* 11192813 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 11192817 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1119281a and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 1119281e mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11192822 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11192824 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11192827 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1119282d jmp 0x1119280f */
  goto L_1119280f;
L_1119282f:;
  /* 1119282f add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11192832 cmp dword ptr [0x11196d00], edi */
  { uint32_t _a=(r32((uint32_t)(0x11196d00))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192838 jl 0x111927f1 */
  if ((C.sf!=C.of)) goto L_111927f1;
  /* 1119283a jmp 0x11192842 */
  goto L_11192842;
L_1119283c:;
  /* 1119283c mov edi, dword ptr [0x11196d00] */
  EDI = (r32((uint32_t)(0x11196d00)));
L_11192842:;
  /* 11192842 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11192844 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11192846 jle 0x11192894 */
  if ((C.zf||C.sf!=C.of)) goto L_11192894;
L_11192848:;
  /* 11192848 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1119284b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1119284d cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192850 je 0x1119288a */
  if (C.zf) goto L_1119288a;
  /* 11192852 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 11192854 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11192856 je 0x1119288a */
  if (C.zf) goto L_1119288a;
  /* 11192858 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 1119285a jne 0x11192867 */
  if (!C.zf) goto L_11192867;
  /* 1119285c push ecx */
  push32((uint32_t)(ECX));
  /* 1119285d call dword ptr [0x1119507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119507c))), 0x11192863u);
  /* 11192863 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11192865 je 0x1119288a */
  if (C.zf) goto L_1119288a;
L_11192867:;
  /* 11192867 mov ecx, esi */
  ECX = (ESI);
  /* 11192869 mov eax, esi */
  EAX = (ESI);
  /* 1119286b sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1119286e and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11192871 mov ecx, dword ptr [ecx*4 + 0x11196c00] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11196c00)));
  /* 11192878 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1119287b lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 1119287e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11192881 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11192883 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11192885 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 11192887 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_1119288a:;
  /* 1119288a add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1119288e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1119288f inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11192890 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192892 jl 0x11192848 */
  if ((C.sf!=C.of)) goto L_11192848;
L_11192894:;
  /* 11192894 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11192896:;
  /* 11192896 mov ecx, dword ptr [0x11196c00] */
  ECX = (r32((uint32_t)(0x11196c00)));
  /* 1119289c lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 1119289f cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111928a3 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 111928a6 jne 0x111928f5 */
  if (!C.zf) goto L_111928f5;
  /* 111928a8 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 111928aa mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 111928ae jne 0x111928b5 */
  if (!C.zf) goto L_111928b5;
  /* 111928b0 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 111928b2 pop eax */
  EAX = (pop32());
  /* 111928b3 jmp 0x111928bf */
  goto L_111928bf;
L_111928b5:;
  /* 111928b5 mov eax, ebx */
  EAX = (EBX);
  /* 111928b7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 111928b8 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 111928ba sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111928bc add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_111928bf:;
  /* 111928bf push eax */
  push32((uint32_t)(EAX));
  /* 111928c0 call dword ptr [0x11195080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195080))), 0x111928c6u);
  /* 111928c6 mov edi, eax */
  EDI = (EAX);
  /* 111928c8 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111928cb je 0x111928e4 */
  if (C.zf) goto L_111928e4;
  /* 111928cd push edi */
  push32((uint32_t)(EDI));
  /* 111928ce call dword ptr [0x1119507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119507c))), 0x111928d4u);
  /* 111928d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111928d6 je 0x111928e4 */
  if (C.zf) goto L_111928e4;
  /* 111928d8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111928dd mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 111928df cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111928e2 jne 0x111928ea */
  if (!C.zf) goto L_111928ea;
L_111928e4:;
  /* 111928e4 or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 111928e8 jmp 0x111928f9 */
  goto L_111928f9;
L_111928ea:;
  /* 111928ea cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111928ed jne 0x111928f9 */
  if (!C.zf) goto L_111928f9;
  /* 111928ef or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 111928f3 jmp 0x111928f9 */
  goto L_111928f9;
L_111928f5:;
  /* 111928f5 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_111928f9:;
  /* 111928f9 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 111928fa cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111928fd jl 0x11192896 */
  if ((C.sf!=C.of)) goto L_11192896;
  /* 111928ff push dword ptr [0x11196d00] */
  push32((uint32_t)(r32((uint32_t)(0x11196d00))));
  /* 11192905 call dword ptr [0x11195088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195088))), 0x1119290bu);
  /* 1119290b pop edi */
  EDI = (pop32());
  /* 1119290c pop esi */
  ESI = (pop32());
  /* 1119290d pop ebx */
  EBX = (pop32());
  /* 1119290e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1119290f ret  */
  ESPCHK(0x11192754u, _esp0);
  ESP += 4; return;
}

/* FUN_10002910 @ 0x11192910 (84 bytes, 33 insns) */
void f_11192910(void) {
  FTRACE(0x11192910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11192910 push ebx */
  push32((uint32_t)(EBX));
  /* 11192911 push esi */
  push32((uint32_t)(ESI));
  /* 11192912 push edi */
  push32((uint32_t)(EDI));
  /* 11192913 mov esi, 0x11196c00 */
  ESI = (0x11196c00u);
L_11192918:;
  /* 11192918 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1119291a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1119291c je 0x11192955 */
  if (C.zf) goto L_11192955;
  /* 1119291e mov edi, eax */
  EDI = (EAX);
  /* 11192920 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11192925 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192927 jae 0x1119294a */
  if (!C.cf) goto L_1119294a;
  /* 11192929 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_1119292c:;
  /* 1119292c cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192930 je 0x11192939 */
  if (C.zf) goto L_11192939;
  /* 11192932 push ebx */
  push32((uint32_t)(EBX));
  /* 11192933 call dword ptr [0x11195074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195074))), 0x11192939u);
L_11192939:;
  /* 11192939 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1119293b add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1119293e add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11192943 add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11192946 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192948 jb 0x1119292c */
  if (C.cf) goto L_1119292c;
L_1119294a:;
  /* 1119294a push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1119294c call 0x11193171 */
  push32(0x11192951u); f_11193171();
  /* 11192951 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11192954 pop ecx */
  ECX = (pop32());
L_11192955:;
  /* 11192955 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11192958 cmp esi, 0x11196d00 */
  { uint32_t _a=(ESI),_b=(0x11196d00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1119295e jl 0x11192918 */
  if ((C.sf!=C.of)) goto L_11192918;
  /* 11192960 pop edi */
  EDI = (pop32());
  /* 11192961 pop esi */
  ESI = (pop32());
  /* 11192962 pop ebx */
  EBX = (pop32());
  /* 11192963 ret  */
  ESPCHK(0x11192910u, _esp0);
  ESP += 4; return;
}

/* FUN_10002964 @ 0x11192964 (185 bytes, 71 insns) */
void f_11192964(void) {
  FTRACE(0x11192964u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11192964 push ebx */
  push32((uint32_t)(EBX));
  /* 11192965 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11192967 cmp dword ptr [0x11196d08], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11196d08))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1119296d push esi */
  push32((uint32_t)(ESI));
  /* 1119296e push edi */
  push32((uint32_t)(EDI));
  /* 1119296f jne 0x11192976 */
  if (!C.zf) goto L_11192976;
  /* 11192971 call 0x11193793 */
  push32(0x11192976u); f_11193793();
L_11192976:;
  /* 11192976 mov esi, dword ptr [0x11196798] */
  ESI = (r32((uint32_t)(0x11196798)));
  /* 1119297c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_1119297e:;
  /* 1119297e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11192980 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11192982 je 0x11192996 */
  if (C.zf) goto L_11192996;
  /* 11192984 cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11192986 je 0x11192989 */
  if (C.zf) goto L_11192989;
  /* 11192988 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11192989:;
  /* 11192989 push esi */
  push32((uint32_t)(ESI));
  /* 1119298a call 0x11193340 */
  push32(0x1119298fu); f_11193340();
  /* 1119298f pop ecx */
  ECX = (pop32());
  /* 11192990 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 11192994 jmp 0x1119297e */
  goto L_1119297e;
L_11192996:;
  /* 11192996 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 1119299d push eax */
  push32((uint32_t)(EAX));
  /* 1119299e call 0x111931b9 */
  push32(0x111929a3u); f_111931b9();
  /* 111929a3 mov esi, eax */
  ESI = (EAX);
  /* 111929a5 pop ecx */
  ECX = (pop32());
  /* 111929a6 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111929a8 mov dword ptr [0x111967c8], esi */
  w32((uint32_t)(0x111967c8), (ESI));
  /* 111929ae jne 0x111929b8 */
  if (!C.zf) goto L_111929b8;
  /* 111929b0 push 9 */
  push32((uint32_t)(0x9u));
  /* 111929b2 call 0x111924de */
  push32(0x111929b7u); f_111924de();
  /* 111929b7 pop ecx */
  ECX = (pop32());
L_111929b8:;
  /* 111929b8 mov edi, dword ptr [0x11196798] */
  EDI = (r32((uint32_t)(0x11196798)));
  /* 111929be cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111929c0 je 0x111929fb */
  if (C.zf) goto L_111929fb;
  /* 111929c2 push ebp */
  push32((uint32_t)(EBP));
L_111929c3:;
  /* 111929c3 push edi */
  push32((uint32_t)(EDI));
  /* 111929c4 call 0x11193340 */
  push32(0x111929c9u); f_11193340();
  /* 111929c9 mov ebp, eax */
  EBP = (EAX);
  /* 111929cb pop ecx */
  ECX = (pop32());
  /* 111929cc inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 111929cd cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111929d0 je 0x111929f4 */
  if (C.zf) goto L_111929f4;
  /* 111929d2 push ebp */
  push32((uint32_t)(EBP));
  /* 111929d3 call 0x111931b9 */
  push32(0x111929d8u); f_111931b9();
  /* 111929d8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111929da pop ecx */
  ECX = (pop32());
  /* 111929db mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 111929dd jne 0x111929e7 */
  if (!C.zf) goto L_111929e7;
  /* 111929df push 9 */
  push32((uint32_t)(0x9u));
  /* 111929e1 call 0x111924de */
  push32(0x111929e6u); f_111924de();
  /* 111929e6 pop ecx */
  ECX = (pop32());
L_111929e7:;
  /* 111929e7 push edi */
  push32((uint32_t)(EDI));
  /* 111929e8 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 111929ea call 0x11193250 */
  push32(0x111929efu); f_11193250();
  /* 111929ef pop ecx */
  ECX = (pop32());
  /* 111929f0 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111929f3 pop ecx */
  ECX = (pop32());
L_111929f4:;
  /* 111929f4 add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 111929f6 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111929f8 jne 0x111929c3 */
  if (!C.zf) goto L_111929c3;
  /* 111929fa pop ebp */
  EBP = (pop32());
L_111929fb:;
  /* 111929fb push dword ptr [0x11196798] */
  push32((uint32_t)(r32((uint32_t)(0x11196798))));
  /* 11192a01 call 0x11193171 */
  push32(0x11192a06u); f_11193171();
  /* 11192a06 pop ecx */
  ECX = (pop32());
  /* 11192a07 mov dword ptr [0x11196798], ebx */
  w32((uint32_t)(0x11196798), (EBX));
  /* 11192a0d mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 11192a0f pop edi */
  EDI = (pop32());
  /* 11192a10 pop esi */
  ESI = (pop32());
  /* 11192a11 mov dword ptr [0x11196d04], 1 */
  w32((uint32_t)(0x11196d04), (0x1u));
  /* 11192a1b pop ebx */
  EBX = (pop32());
  /* 11192a1c ret  */
  ESPCHK(0x11192964u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a1d @ 0x11192a1d (153 bytes, 62 insns) */
void f_11192a1d(void) {
  FTRACE(0x11192a1du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11192a1d push ebp */
  push32((uint32_t)(EBP));
  /* 11192a1e mov ebp, esp */
  EBP = (ESP);
  /* 11192a20 push ecx */
  push32((uint32_t)(ECX));
  /* 11192a21 push ecx */
  push32((uint32_t)(ECX));
  /* 11192a22 push ebx */
  push32((uint32_t)(EBX));
  /* 11192a23 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11192a25 cmp dword ptr [0x11196d08], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11196d08))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192a2b push esi */
  push32((uint32_t)(ESI));
  /* 11192a2c push edi */
  push32((uint32_t)(EDI));
  /* 11192a2d jne 0x11192a34 */
  if (!C.zf) goto L_11192a34;
  /* 11192a2f call 0x11193793 */
  push32(0x11192a34u); f_11193793();
L_11192a34:;
  /* 11192a34 mov esi, 0x111967ec */
  ESI = (0x111967ecu);
  /* 11192a39 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11192a3e push esi */
  push32((uint32_t)(ESI));
  /* 11192a3f push ebx */
  push32((uint32_t)(EBX));
  /* 11192a40 call dword ptr [0x11195070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195070))), 0x11192a46u);
  /* 11192a46 mov eax, dword ptr [0x11196d18] */
  EAX = (r32((uint32_t)(0x11196d18)));
  /* 11192a4b mov dword ptr [0x111967d8], esi */
  w32((uint32_t)(0x111967d8), (ESI));
  /* 11192a51 mov edi, esi */
  EDI = (ESI);
  /* 11192a53 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11192a55 je 0x11192a59 */
  if (C.zf) goto L_11192a59;
  /* 11192a57 mov edi, eax */
  EDI = (EAX);
L_11192a59:;
  /* 11192a59 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11192a5c push eax */
  push32((uint32_t)(EAX));
  /* 11192a5d lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11192a60 push eax */
  push32((uint32_t)(EAX));
  /* 11192a61 push ebx */
  push32((uint32_t)(EBX));
  /* 11192a62 push ebx */
  push32((uint32_t)(EBX));
  /* 11192a63 push edi */
  push32((uint32_t)(EDI));
  /* 11192a64 call 0x11192ab6 */
  push32(0x11192a69u); f_11192ab6();
  /* 11192a69 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11192a6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11192a6f lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11192a72 push eax */
  push32((uint32_t)(EAX));
  /* 11192a73 call 0x111931b9 */
  push32(0x11192a78u); f_111931b9();
  /* 11192a78 mov esi, eax */
  ESI = (EAX);
  /* 11192a7a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11192a7d cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192a7f jne 0x11192a89 */
  if (!C.zf) goto L_11192a89;
  /* 11192a81 push 8 */
  push32((uint32_t)(0x8u));
  /* 11192a83 call 0x111924de */
  push32(0x11192a88u); f_111924de();
  /* 11192a88 pop ecx */
  ECX = (pop32());
L_11192a89:;
  /* 11192a89 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11192a8c push eax */
  push32((uint32_t)(EAX));
  /* 11192a8d lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11192a90 push eax */
  push32((uint32_t)(EAX));
  /* 11192a91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11192a94 lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 11192a97 push eax */
  push32((uint32_t)(EAX));
  /* 11192a98 push esi */
  push32((uint32_t)(ESI));
  /* 11192a99 push edi */
  push32((uint32_t)(EDI));
  /* 11192a9a call 0x11192ab6 */
  push32(0x11192a9fu); f_11192ab6();
  /* 11192a9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11192aa2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11192aa5 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11192aa6 mov dword ptr [0x111967c0], esi */
  w32((uint32_t)(0x111967c0), (ESI));
  /* 11192aac pop edi */
  EDI = (pop32());
  /* 11192aad pop esi */
  ESI = (pop32());
  /* 11192aae mov dword ptr [0x111967bc], eax */
  w32((uint32_t)(0x111967bc), (EAX));
  /* 11192ab3 pop ebx */
  EBX = (pop32());
  /* 11192ab4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11192ab5 ret  */
  ESPCHK(0x11192a1du, _esp0);
  ESP += 4; return;
}

/* FUN_10002ab6 @ 0x11192ab6 (436 bytes, 187 insns) */
void f_11192ab6(void) {
  FTRACE(0x11192ab6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11192ab6 push ebp */
  push32((uint32_t)(EBP));
  /* 11192ab7 mov ebp, esp */
  EBP = (ESP);
  /* 11192ab9 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11192abc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11192abf push ebx */
  push32((uint32_t)(EBX));
  /* 11192ac0 push esi */
  push32((uint32_t)(ESI));
  /* 11192ac1 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11192ac4 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11192ac7 push edi */
  push32((uint32_t)(EDI));
  /* 11192ac8 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11192acb mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11192ad1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11192ad4 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11192ad6 je 0x11192ae0 */
  if (C.zf) goto L_11192ae0;
  /* 11192ad8 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11192ada add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11192add mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11192ae0:;
  /* 11192ae0 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11192ae3 jne 0x11192b29 */
  if (!C.zf) goto L_11192b29;
L_11192ae5:;
  /* 11192ae5 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11192ae8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11192ae9 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11192aec je 0x11192b17 */
  if (C.zf) goto L_11192b17;
  /* 11192aee test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11192af0 je 0x11192b17 */
  if (C.zf) goto L_11192b17;
  /* 11192af2 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11192af5 test byte ptr [edx + 0x11196ae1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11196ae1)))&(0x4u); fl_logic(_r,8); }
  /* 11192afc je 0x11192b0a */
  if (C.zf) goto L_11192b0a;
  /* 11192afe inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11192b00 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11192b02 je 0x11192b0a */
  if (C.zf) goto L_11192b0a;
  /* 11192b04 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11192b06 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11192b08 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11192b09 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11192b0a:;
  /* 11192b0a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11192b0c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11192b0e je 0x11192ae5 */
  if (C.zf) goto L_11192ae5;
  /* 11192b10 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11192b12 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11192b14 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11192b15 jmp 0x11192ae5 */
  goto L_11192ae5;
L_11192b17:;
  /* 11192b17 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11192b19 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11192b1b je 0x11192b21 */
  if (C.zf) goto L_11192b21;
  /* 11192b1d and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11192b20 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11192b21:;
  /* 11192b21 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11192b24 jne 0x11192b6c */
  if (!C.zf) goto L_11192b6c;
  /* 11192b26 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11192b27 jmp 0x11192b6c */
  goto L_11192b6c;
L_11192b29:;
  /* 11192b29 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11192b2b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11192b2d je 0x11192b34 */
  if (C.zf) goto L_11192b34;
  /* 11192b2f mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11192b31 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11192b33 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11192b34:;
  /* 11192b34 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11192b36 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11192b37 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11192b3a test byte ptr [ebx + 0x11196ae1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11196ae1)))&(0x4u); fl_logic(_r,8); }
  /* 11192b41 je 0x11192b4f */
  if (C.zf) goto L_11192b4f;
  /* 11192b43 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11192b45 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11192b47 je 0x11192b4e */
  if (C.zf) goto L_11192b4e;
  /* 11192b49 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11192b4b mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 11192b4d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11192b4e:;
  /* 11192b4e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11192b4f:;
  /* 11192b4f cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11192b52 je 0x11192b5d */
  if (C.zf) goto L_11192b5d;
  /* 11192b54 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11192b56 je 0x11192b61 */
  if (C.zf) goto L_11192b61;
  /* 11192b58 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11192b5b jne 0x11192b29 */
  if (!C.zf) goto L_11192b29;
L_11192b5d:;
  /* 11192b5d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11192b5f jne 0x11192b64 */
  if (!C.zf) goto L_11192b64;
L_11192b61:;
  /* 11192b61 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11192b62 jmp 0x11192b6c */
  goto L_11192b6c;
L_11192b64:;
  /* 11192b64 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11192b66 je 0x11192b6c */
  if (C.zf) goto L_11192b6c;
  /* 11192b68 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_11192b6c:;
  /* 11192b6c and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_11192b70:;
  /* 11192b70 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11192b73 je 0x11192c59 */
  if (C.zf) goto L_11192c59;
L_11192b79:;
  /* 11192b79 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11192b7b cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11192b7e je 0x11192b85 */
  if (C.zf) goto L_11192b85;
  /* 11192b80 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11192b83 jne 0x11192b88 */
  if (!C.zf) goto L_11192b88;
L_11192b85:;
  /* 11192b85 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11192b86 jmp 0x11192b79 */
  goto L_11192b79;
L_11192b88:;
  /* 11192b88 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11192b8b je 0x11192c59 */
  if (C.zf) goto L_11192c59;
  /* 11192b91 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11192b93 je 0x11192b9d */
  if (C.zf) goto L_11192b9d;
  /* 11192b95 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11192b97 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11192b9a mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11192b9d:;
  /* 11192b9d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11192ba0 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_11192ba2:;
  /* 11192ba2 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 11192ba9 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11192bab:;
  /* 11192bab cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11192bae jne 0x11192bb4 */
  if (!C.zf) goto L_11192bb4;
  /* 11192bb0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11192bb1 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11192bb2 jmp 0x11192bab */
  goto L_11192bab;
L_11192bb4:;
  /* 11192bb4 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11192bb7 jne 0x11192be5 */
  if (!C.zf) goto L_11192be5;
  /* 11192bb9 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11192bbc jne 0x11192be3 */
  if (!C.zf) goto L_11192be3;
  /* 11192bbe xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11192bc0 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192bc3 je 0x11192bd2 */
  if (C.zf) goto L_11192bd2;
  /* 11192bc5 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11192bc9 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 11192bcc jne 0x11192bd2 */
  if (!C.zf) goto L_11192bd2;
  /* 11192bce mov eax, edx */
  EAX = (EDX);
  /* 11192bd0 jmp 0x11192bd5 */
  goto L_11192bd5;
L_11192bd2:;
  /* 11192bd2 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_11192bd5:;
  /* 11192bd5 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11192bd8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11192bda cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192bdd sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11192be0 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11192be3:;
  /* 11192be3 shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_11192be5:;
  /* 11192be5 mov edx, ebx */
  EDX = (EBX);
  /* 11192be7 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11192be8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11192bea je 0x11192bfa */
  if (C.zf) goto L_11192bfa;
  /* 11192bec inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11192bed:;
  /* 11192bed test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11192bef je 0x11192bf5 */
  if (C.zf) goto L_11192bf5;
  /* 11192bf1 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 11192bf4 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11192bf5:;
  /* 11192bf5 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11192bf7 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11192bf8 jne 0x11192bed */
  if (!C.zf) goto L_11192bed;
L_11192bfa:;
  /* 11192bfa mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11192bfc test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11192bfe je 0x11192c4a */
  if (C.zf) goto L_11192c4a;
  /* 11192c00 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192c04 jne 0x11192c10 */
  if (!C.zf) goto L_11192c10;
  /* 11192c06 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11192c09 je 0x11192c4a */
  if (C.zf) goto L_11192c4a;
  /* 11192c0b cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11192c0e je 0x11192c4a */
  if (C.zf) goto L_11192c4a;
L_11192c10:;
  /* 11192c10 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192c14 je 0x11192c44 */
  if (C.zf) goto L_11192c44;
  /* 11192c16 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11192c18 je 0x11192c33 */
  if (C.zf) goto L_11192c33;
  /* 11192c1a movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11192c1d test byte ptr [ebx + 0x11196ae1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11196ae1)))&(0x4u); fl_logic(_r,8); }
  /* 11192c24 je 0x11192c2c */
  if (C.zf) goto L_11192c2c;
  /* 11192c26 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11192c28 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11192c29 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11192c2a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11192c2c:;
  /* 11192c2c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11192c2e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11192c30 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11192c31 jmp 0x11192c42 */
  goto L_11192c42;
L_11192c33:;
  /* 11192c33 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11192c36 test byte ptr [edx + 0x11196ae1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11196ae1)))&(0x4u); fl_logic(_r,8); }
  /* 11192c3d je 0x11192c42 */
  if (C.zf) goto L_11192c42;
  /* 11192c3f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11192c40 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11192c42:;
  /* 11192c42 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11192c44:;
  /* 11192c44 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11192c45 jmp 0x11192ba2 */
  goto L_11192ba2;
L_11192c4a:;
  /* 11192c4a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11192c4c je 0x11192c52 */
  if (C.zf) goto L_11192c52;
  /* 11192c4e and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11192c51 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11192c52:;
  /* 11192c52 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11192c54 jmp 0x11192b70 */
  goto L_11192b70;
L_11192c59:;
  /* 11192c59 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11192c5b je 0x11192c60 */
  if (C.zf) goto L_11192c60;
  /* 11192c5d and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11192c60:;
  /* 11192c60 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11192c63 pop edi */
  EDI = (pop32());
  /* 11192c64 pop esi */
  ESI = (pop32());
  /* 11192c65 pop ebx */
  EBX = (pop32());
  /* 11192c66 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 11192c68 pop ebp */
  EBP = (pop32());
  /* 11192c69 ret  */
  ESPCHK(0x11192ab6u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c6a @ 0x11192c6a (306 bytes, 132 insns) */
void f_11192c6a(void) {
  FTRACE(0x11192c6au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11192c6a push ecx */
  push32((uint32_t)(ECX));
  /* 11192c6b push ecx */
  push32((uint32_t)(ECX));
  /* 11192c6c mov eax, dword ptr [0x111968f0] */
  EAX = (r32((uint32_t)(0x111968f0)));
  /* 11192c71 push ebx */
  push32((uint32_t)(EBX));
  /* 11192c72 push ebp */
  push32((uint32_t)(EBP));
  /* 11192c73 mov ebp, dword ptr [0x1119505c] */
  EBP = (r32((uint32_t)(0x1119505c)));
  /* 11192c79 push esi */
  push32((uint32_t)(ESI));
  /* 11192c7a push edi */
  push32((uint32_t)(EDI));
  /* 11192c7b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11192c7d xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11192c7f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11192c81 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192c83 jne 0x11192cb8 */
  if (!C.zf) goto L_11192cb8;
  /* 11192c85 call ebp */
  call_ind((uint32_t)(EBP), 0x11192c87u);
  /* 11192c87 mov esi, eax */
  ESI = (EAX);
  /* 11192c89 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192c8b je 0x11192c99 */
  if (C.zf) goto L_11192c99;
  /* 11192c8d mov dword ptr [0x111968f0], 1 */
  w32((uint32_t)(0x111968f0), (0x1u));
  /* 11192c97 jmp 0x11192cc1 */
  goto L_11192cc1;
L_11192c99:;
  /* 11192c99 call dword ptr [0x1119506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119506c))), 0x11192c9fu);
  /* 11192c9f mov edi, eax */
  EDI = (EAX);
  /* 11192ca1 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192ca3 je 0x11192d93 */
  if (C.zf) goto L_11192d93;
  /* 11192ca9 mov dword ptr [0x111968f0], 2 */
  w32((uint32_t)(0x111968f0), (0x2u));
  /* 11192cb3 jmp 0x11192d47 */
  goto L_11192d47;
L_11192cb8:;
  /* 11192cb8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192cbb jne 0x11192d42 */
  if (!C.zf) goto L_11192d42;
L_11192cc1:;
  /* 11192cc1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192cc3 jne 0x11192cd1 */
  if (!C.zf) goto L_11192cd1;
  /* 11192cc5 call ebp */
  call_ind((uint32_t)(EBP), 0x11192cc7u);
  /* 11192cc7 mov esi, eax */
  ESI = (EAX);
  /* 11192cc9 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192ccb je 0x11192d93 */
  if (C.zf) goto L_11192d93;
L_11192cd1:;
  /* 11192cd1 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11192cd4 mov eax, esi */
  EAX = (ESI);
  /* 11192cd6 je 0x11192ce6 */
  if (C.zf) goto L_11192ce6;
L_11192cd8:;
  /* 11192cd8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11192cd9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11192cda cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11192cdd jne 0x11192cd8 */
  if (!C.zf) goto L_11192cd8;
  /* 11192cdf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11192ce0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11192ce1 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11192ce4 jne 0x11192cd8 */
  if (!C.zf) goto L_11192cd8;
L_11192ce6:;
  /* 11192ce6 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11192ce8 mov edi, dword ptr [0x11195064] */
  EDI = (r32((uint32_t)(0x11195064)));
  /* 11192cee sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11192cf0 push ebx */
  push32((uint32_t)(EBX));
  /* 11192cf1 push ebx */
  push32((uint32_t)(EBX));
  /* 11192cf2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11192cf3 push ebx */
  push32((uint32_t)(EBX));
  /* 11192cf4 push ebx */
  push32((uint32_t)(EBX));
  /* 11192cf5 push eax */
  push32((uint32_t)(EAX));
  /* 11192cf6 push esi */
  push32((uint32_t)(ESI));
  /* 11192cf7 push ebx */
  push32((uint32_t)(EBX));
  /* 11192cf8 push ebx */
  push32((uint32_t)(EBX));
  /* 11192cf9 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 11192cfd call edi */
  call_ind((uint32_t)(EDI), 0x11192cffu);
  /* 11192cff mov ebp, eax */
  EBP = (EAX);
  /* 11192d01 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192d03 je 0x11192d37 */
  if (C.zf) goto L_11192d37;
  /* 11192d05 push ebp */
  push32((uint32_t)(EBP));
  /* 11192d06 call 0x111931b9 */
  push32(0x11192d0bu); f_111931b9();
  /* 11192d0b cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192d0d pop ecx */
  ECX = (pop32());
  /* 11192d0e mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11192d12 je 0x11192d37 */
  if (C.zf) goto L_11192d37;
  /* 11192d14 push ebx */
  push32((uint32_t)(EBX));
  /* 11192d15 push ebx */
  push32((uint32_t)(EBX));
  /* 11192d16 push ebp */
  push32((uint32_t)(EBP));
  /* 11192d17 push eax */
  push32((uint32_t)(EAX));
  /* 11192d18 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11192d1c push esi */
  push32((uint32_t)(ESI));
  /* 11192d1d push ebx */
  push32((uint32_t)(EBX));
  /* 11192d1e push ebx */
  push32((uint32_t)(EBX));
  /* 11192d1f call edi */
  call_ind((uint32_t)(EDI), 0x11192d21u);
  /* 11192d21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11192d23 jne 0x11192d33 */
  if (!C.zf) goto L_11192d33;
  /* 11192d25 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11192d29 call 0x11193171 */
  push32(0x11192d2eu); f_11193171();
  /* 11192d2e pop ecx */
  ECX = (pop32());
  /* 11192d2f mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_11192d33:;
  /* 11192d33 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11192d37:;
  /* 11192d37 push esi */
  push32((uint32_t)(ESI));
  /* 11192d38 call dword ptr [0x11195068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195068))), 0x11192d3eu);
  /* 11192d3e mov eax, ebx */
  EAX = (EBX);
  /* 11192d40 jmp 0x11192d95 */
  goto L_11192d95;
L_11192d42:;
  /* 11192d42 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192d45 jne 0x11192d93 */
  if (!C.zf) goto L_11192d93;
L_11192d47:;
  /* 11192d47 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192d49 jne 0x11192d57 */
  if (!C.zf) goto L_11192d57;
  /* 11192d4b call dword ptr [0x1119506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119506c))), 0x11192d51u);
  /* 11192d51 mov edi, eax */
  EDI = (EAX);
  /* 11192d53 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192d55 je 0x11192d93 */
  if (C.zf) goto L_11192d93;
L_11192d57:;
  /* 11192d57 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11192d59 mov eax, edi */
  EAX = (EDI);
  /* 11192d5b je 0x11192d67 */
  if (C.zf) goto L_11192d67;
L_11192d5d:;
  /* 11192d5d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11192d5e cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11192d60 jne 0x11192d5d */
  if (!C.zf) goto L_11192d5d;
  /* 11192d62 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11192d63 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11192d65 jne 0x11192d5d */
  if (!C.zf) goto L_11192d5d;
L_11192d67:;
  /* 11192d67 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11192d69 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11192d6a mov ebp, eax */
  EBP = (EAX);
  /* 11192d6c push ebp */
  push32((uint32_t)(EBP));
  /* 11192d6d call 0x111931b9 */
  push32(0x11192d72u); f_111931b9();
  /* 11192d72 mov esi, eax */
  ESI = (EAX);
  /* 11192d74 pop ecx */
  ECX = (pop32());
  /* 11192d75 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192d77 jne 0x11192d7d */
  if (!C.zf) goto L_11192d7d;
  /* 11192d79 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11192d7b jmp 0x11192d88 */
  goto L_11192d88;
L_11192d7d:;
  /* 11192d7d push ebp */
  push32((uint32_t)(EBP));
  /* 11192d7e push edi */
  push32((uint32_t)(EDI));
  /* 11192d7f push esi */
  push32((uint32_t)(ESI));
  /* 11192d80 call 0x111937b0 */
  push32(0x11192d85u); f_111937b0();
  /* 11192d85 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11192d88:;
  /* 11192d88 push edi */
  push32((uint32_t)(EDI));
  /* 11192d89 call dword ptr [0x11195078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195078))), 0x11192d8fu);
  /* 11192d8f mov eax, esi */
  EAX = (ESI);
  /* 11192d91 jmp 0x11192d95 */
  goto L_11192d95;
L_11192d93:;
  /* 11192d93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11192d95:;
  /* 11192d95 pop edi */
  EDI = (pop32());
  /* 11192d96 pop esi */
  ESI = (pop32());
  /* 11192d97 pop ebp */
  EBP = (pop32());
  /* 11192d98 pop ebx */
  EBX = (pop32());
  /* 11192d99 pop ecx */
  ECX = (pop32());
  /* 11192d9a pop ecx */
  ECX = (pop32());
  /* 11192d9b ret  */
  ESPCHK(0x11192c6au, _esp0);
  ESP += 4; return;
}

/* FUN_10002d9c @ 0x11192d9c (60 bytes, 20 insns) */
void f_11192d9c(void) {
  FTRACE(0x11192d9cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11192d9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11192d9e push 0 */
  push32((uint32_t)(0x0u));
  /* 11192da0 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192da4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11192da9 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11192dac push eax */
  push32((uint32_t)(EAX));
  /* 11192dad call dword ptr [0x11195060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195060))), 0x11192db3u);
  /* 11192db3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11192db5 mov dword ptr [0x11196be8], eax */
  w32((uint32_t)(0x11196be8), (EAX));
  /* 11192dba je 0x11192dd1 */
  if (C.zf) goto L_11192dd1;
  /* 11192dbc call 0x11193ae5 */
  push32(0x11192dc1u); f_11193ae5();
  /* 11192dc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11192dc3 jne 0x11192dd4 */
  if (!C.zf) goto L_11192dd4;
  /* 11192dc5 push dword ptr [0x11196be8] */
  push32((uint32_t)(r32((uint32_t)(0x11196be8))));
  /* 11192dcb call dword ptr [0x11195058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195058))), 0x11192dd1u);
L_11192dd1:;
  /* 11192dd1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11192dd3 ret  */
  ESPCHK(0x11192d9cu, _esp0);
  ESP += 4; return;
L_11192dd4:;
  /* 11192dd4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11192dd6 pop eax */
  EAX = (pop32());
  /* 11192dd7 ret  */
  ESPCHK(0x11192d9cu, _esp0);
  ESP += 4; return;
}

/* FUN_10002dd8 @ 0x11192dd8 (117 bytes, 38 insns) */
void f_11192dd8(void) {
  FTRACE(0x11192dd8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11192dd8 push ebx */
  push32((uint32_t)(EBX));
  /* 11192dd9 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11192ddb cmp dword ptr [0x111969a8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x111969a8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192de1 push ebp */
  push32((uint32_t)(EBP));
  /* 11192de2 mov ebp, dword ptr [0x1119504c] */
  EBP = (r32((uint32_t)(0x1119504c)));
  /* 11192de8 jle 0x11192e2e */
  if ((C.zf||C.sf!=C.of)) goto L_11192e2e;
  /* 11192dea mov eax, dword ptr [0x111969ac] */
  EAX = (r32((uint32_t)(0x111969ac)));
  /* 11192def push esi */
  push32((uint32_t)(ESI));
  /* 11192df0 push edi */
  push32((uint32_t)(EDI));
  /* 11192df1 mov edi, dword ptr [0x11195050] */
  EDI = (r32((uint32_t)(0x11195050)));
  /* 11192df7 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_11192dfa:;
  /* 11192dfa push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11192dff push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11192e04 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11192e06 call edi */
  call_ind((uint32_t)(EDI), 0x11192e08u);
  /* 11192e08 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11192e0d push 0 */
  push32((uint32_t)(0x0u));
  /* 11192e0f push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11192e11 call edi */
  call_ind((uint32_t)(EDI), 0x11192e13u);
  /* 11192e13 push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 11192e16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11192e18 push dword ptr [0x11196be8] */
  push32((uint32_t)(r32((uint32_t)(0x11196be8))));
  /* 11192e1e call ebp */
  call_ind((uint32_t)(EBP), 0x11192e20u);
  /* 11192e20 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11192e23 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11192e24 cmp ebx, dword ptr [0x111969a8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x111969a8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192e2a jl 0x11192dfa */
  if ((C.sf!=C.of)) goto L_11192dfa;
  /* 11192e2c pop edi */
  EDI = (pop32());
  /* 11192e2d pop esi */
  ESI = (pop32());
L_11192e2e:;
  /* 11192e2e push dword ptr [0x111969ac] */
  push32((uint32_t)(r32((uint32_t)(0x111969ac))));
  /* 11192e34 push 0 */
  push32((uint32_t)(0x0u));
  /* 11192e36 push dword ptr [0x11196be8] */
  push32((uint32_t)(r32((uint32_t)(0x11196be8))));
  /* 11192e3c call ebp */
  call_ind((uint32_t)(EBP), 0x11192e3eu);
  /* 11192e3e push dword ptr [0x11196be8] */
  push32((uint32_t)(r32((uint32_t)(0x11196be8))));
  /* 11192e44 call dword ptr [0x11195058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195058))), 0x11192e4au);
  /* 11192e4a pop ebp */
  EBP = (pop32());
  /* 11192e4b pop ebx */
  EBX = (pop32());
  /* 11192e4c ret  */
  ESPCHK(0x11192dd8u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e4d @ 0x11192e4d (57 bytes, 18 insns) */
void f_11192e4d(void) {
  FTRACE(0x11192e4du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11192e4d mov eax, dword ptr [0x111967a0] */
  EAX = (r32((uint32_t)(0x111967a0)));
  /* 11192e52 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192e55 je 0x11192e64 */
  if (C.zf) goto L_11192e64;
  /* 11192e57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11192e59 jne 0x11192e85 */
  if (!C.zf) goto L_11192e85;
  /* 11192e5b cmp dword ptr [0x111967a4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111967a4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192e62 jne 0x11192e85 */
  if (!C.zf) goto L_11192e85;
L_11192e64:;
  /* 11192e64 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11192e69 call 0x11192e86 */
  push32(0x11192e6eu); f_11192e86();
  /* 11192e6e mov eax, dword ptr [0x111968f4] */
  EAX = (r32((uint32_t)(0x111968f4)));
  /* 11192e73 pop ecx */
  ECX = (pop32());
  /* 11192e74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11192e76 je 0x11192e7a */
  if (C.zf) goto L_11192e7a;
  /* 11192e78 call eax */
  call_ind((uint32_t)(EAX), 0x11192e7au);
L_11192e7a:;
  /* 11192e7a push 0xff */
  push32((uint32_t)(0xffu));
  /* 11192e7f call 0x11192e86 */
  push32(0x11192e84u); f_11192e86();
  /* 11192e84 pop ecx */
  ECX = (pop32());
L_11192e85:;
  /* 11192e85 ret  */
  ESPCHK(0x11192e4du, _esp0);
  ESP += 4; return;
}

/* FUN_10002e86 @ 0x11192e86 (339 bytes, 100 insns) */
void f_11192e86(void) {
  FTRACE(0x11192e86u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11192e86 push ebp */
  push32((uint32_t)(EBP));
  /* 11192e87 mov ebp, esp */
  EBP = (ESP);
  /* 11192e89 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11192e8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11192e92 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11192e94 mov eax, 0x11196290 */
  EAX = (0x11196290u);
L_11192e99:;
  /* 11192e99 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192e9b je 0x11192ea8 */
  if (C.zf) goto L_11192ea8;
  /* 11192e9d add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11192ea0 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11192ea1 cmp eax, 0x11196320 */
  { uint32_t _a=(EAX),_b=(0x11196320u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192ea6 jl 0x11192e99 */
  if ((C.sf!=C.of)) goto L_11192e99;
L_11192ea8:;
  /* 11192ea8 push esi */
  push32((uint32_t)(ESI));
  /* 11192ea9 mov esi, ecx */
  ESI = (ECX);
  /* 11192eab shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11192eae cmp edx, dword ptr [esi + 0x11196290] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x11196290))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192eb4 jne 0x11192fd6 */
  if (!C.zf) goto L_11192fd6;
  /* 11192eba mov eax, dword ptr [0x111967a0] */
  EAX = (r32((uint32_t)(0x111967a0)));
  /* 11192ebf cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192ec2 je 0x11192fb0 */
  if (C.zf) goto L_11192fb0;
  /* 11192ec8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11192eca jne 0x11192ed9 */
  if (!C.zf) goto L_11192ed9;
  /* 11192ecc cmp dword ptr [0x111967a4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111967a4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192ed3 je 0x11192fb0 */
  if (C.zf) goto L_11192fb0;
L_11192ed9:;
  /* 11192ed9 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192edf je 0x11192fd6 */
  if (C.zf) goto L_11192fd6;
  /* 11192ee5 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11192eeb push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11192ef0 push eax */
  push32((uint32_t)(EAX));
  /* 11192ef1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11192ef3 call dword ptr [0x11195070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195070))), 0x11192ef9u);
  /* 11192ef9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11192efb jne 0x11192f10 */
  if (!C.zf) goto L_11192f10;
  /* 11192efd lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11192f03 push 0x11195430 */
  push32((uint32_t)(0x11195430u));
  /* 11192f08 push eax */
  push32((uint32_t)(EAX));
  /* 11192f09 call 0x11193250 */
  push32(0x11192f0eu); f_11193250();
  /* 11192f0e pop ecx */
  ECX = (pop32());
  /* 11192f0f pop ecx */
  ECX = (pop32());
L_11192f10:;
  /* 11192f10 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11192f16 push edi */
  push32((uint32_t)(EDI));
  /* 11192f17 push eax */
  push32((uint32_t)(EAX));
  /* 11192f18 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 11192f1e call 0x11193340 */
  push32(0x11192f23u); f_11193340();
  /* 11192f23 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11192f24 pop ecx */
  ECX = (pop32());
  /* 11192f25 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11192f28 jbe 0x11192f53 */
  if ((C.cf||C.zf)) goto L_11192f53;
  /* 11192f2a lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11192f30 push eax */
  push32((uint32_t)(EAX));
  /* 11192f31 call 0x11193340 */
  push32(0x11192f36u); f_11193340();
  /* 11192f36 mov edi, eax */
  EDI = (EAX);
  /* 11192f38 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11192f3e sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11192f41 push 3 */
  push32((uint32_t)(0x3u));
  /* 11192f43 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11192f45 push 0x1119542c */
  push32((uint32_t)(0x1119542cu));
  /* 11192f4a push edi */
  push32((uint32_t)(EDI));
  /* 11192f4b call 0x111943c0 */
  push32(0x11192f50u); f_111943c0();
  /* 11192f50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11192f53:;
  /* 11192f53 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11192f59 push 0x11195410 */
  push32((uint32_t)(0x11195410u));
  /* 11192f5e push eax */
  push32((uint32_t)(EAX));
  /* 11192f5f call 0x11193250 */
  push32(0x11192f64u); f_11193250();
  /* 11192f64 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11192f6a push edi */
  push32((uint32_t)(EDI));
  /* 11192f6b push eax */
  push32((uint32_t)(EAX));
  /* 11192f6c call 0x11193260 */
  push32(0x11192f71u); f_11193260();
  /* 11192f71 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11192f77 push 0x1119540c */
  push32((uint32_t)(0x1119540cu));
  /* 11192f7c push eax */
  push32((uint32_t)(EAX));
  /* 11192f7d call 0x11193260 */
  push32(0x11192f82u); f_11193260();
  /* 11192f82 push dword ptr [esi + 0x11196294] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x11196294))));
  /* 11192f88 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11192f8e push eax */
  push32((uint32_t)(EAX));
  /* 11192f8f call 0x11193260 */
  push32(0x11192f94u); f_11193260();
  /* 11192f94 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11192f99 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11192f9f push 0x111953e4 */
  push32((uint32_t)(0x111953e4u));
  /* 11192fa4 push eax */
  push32((uint32_t)(EAX));
  /* 11192fa5 call 0x1119432e */
  push32(0x11192faau); f_1119432e();
  /* 11192faa add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11192fad pop edi */
  EDI = (pop32());
  /* 11192fae jmp 0x11192fd6 */
  goto L_11192fd6;
L_11192fb0:;
  /* 11192fb0 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11192fb3 lea esi, [esi + 0x11196294] */
  ESI = ((uint32_t)(ESI + 0x11196294));
  /* 11192fb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11192fbb push eax */
  push32((uint32_t)(EAX));
  /* 11192fbc push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11192fbe call 0x11193340 */
  push32(0x11192fc3u); f_11193340();
  /* 11192fc3 pop ecx */
  ECX = (pop32());
  /* 11192fc4 push eax */
  push32((uint32_t)(EAX));
  /* 11192fc5 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11192fc7 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11192fc9 call dword ptr [0x11195080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195080))), 0x11192fcfu);
  /* 11192fcf push eax */
  push32((uint32_t)(EAX));
  /* 11192fd0 call dword ptr [0x11195054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195054))), 0x11192fd6u);
L_11192fd6:;
  /* 11192fd6 pop esi */
  ESI = (pop32());
  /* 11192fd7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11192fd8 ret  */
  ESPCHK(0x11192e86u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fd9 @ 0x11192fd9 (41 bytes, 12 insns) */
void f_11192fd9(void) {
  FTRACE(0x11192fd9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11192fd9 push esi */
  push32((uint32_t)(ESI));
  /* 11192fda mov esi, dword ptr [0x11195044] */
  ESI = (r32((uint32_t)(0x11195044)));
  /* 11192fe0 push dword ptr [0x11196364] */
  push32((uint32_t)(r32((uint32_t)(0x11196364))));
  /* 11192fe6 call esi */
  call_ind((uint32_t)(ESI), 0x11192fe8u);
  /* 11192fe8 push dword ptr [0x11196354] */
  push32((uint32_t)(r32((uint32_t)(0x11196354))));
  /* 11192fee call esi */
  call_ind((uint32_t)(ESI), 0x11192ff0u);
  /* 11192ff0 push dword ptr [0x11196344] */
  push32((uint32_t)(r32((uint32_t)(0x11196344))));
  /* 11192ff6 call esi */
  call_ind((uint32_t)(ESI), 0x11192ff8u);
  /* 11192ff8 push dword ptr [0x11196324] */
  push32((uint32_t)(r32((uint32_t)(0x11196324))));
  /* 11192ffe call esi */
  call_ind((uint32_t)(ESI), 0x11193000u);
  /* 11193000 pop esi */
  ESI = (pop32());
  /* 11193001 ret  */
  ESPCHK(0x11192fd9u, _esp0);
  ESP += 4; return;
}

/* FUN_10003002 @ 0x11193002 (108 bytes, 34 insns) */
void f_11193002(void) {
  FTRACE(0x11193002u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11193002 push esi */
  push32((uint32_t)(ESI));
  /* 11193003 push edi */
  push32((uint32_t)(EDI));
  /* 11193004 mov edi, dword ptr [0x11195074] */
  EDI = (r32((uint32_t)(0x11195074)));
  /* 1119300a mov esi, 0x11196320 */
  ESI = (0x11196320u);
L_1119300f:;
  /* 1119300f mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11193011 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11193013 je 0x11193040 */
  if (C.zf) goto L_11193040;
  /* 11193015 cmp esi, 0x11196364 */
  { uint32_t _a=(ESI),_b=(0x11196364u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1119301b je 0x11193040 */
  if (C.zf) goto L_11193040;
  /* 1119301d cmp esi, 0x11196354 */
  { uint32_t _a=(ESI),_b=(0x11196354u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193023 je 0x11193040 */
  if (C.zf) goto L_11193040;
  /* 11193025 cmp esi, 0x11196344 */
  { uint32_t _a=(ESI),_b=(0x11196344u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1119302b je 0x11193040 */
  if (C.zf) goto L_11193040;
  /* 1119302d cmp esi, 0x11196324 */
  { uint32_t _a=(ESI),_b=(0x11196324u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193033 je 0x11193040 */
  if (C.zf) goto L_11193040;
  /* 11193035 push eax */
  push32((uint32_t)(EAX));
  /* 11193036 call edi */
  call_ind((uint32_t)(EDI), 0x11193038u);
  /* 11193038 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1119303a call 0x11193171 */
  push32(0x1119303fu); f_11193171();
  /* 1119303f pop ecx */
  ECX = (pop32());
L_11193040:;
  /* 11193040 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11193043 cmp esi, 0x111963e0 */
  { uint32_t _a=(ESI),_b=(0x111963e0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193049 jl 0x1119300f */
  if ((C.sf!=C.of)) goto L_1119300f;
  /* 1119304b push dword ptr [0x11196344] */
  push32((uint32_t)(r32((uint32_t)(0x11196344))));
  /* 11193051 call edi */
  call_ind((uint32_t)(EDI), 0x11193053u);
  /* 11193053 push dword ptr [0x11196354] */
  push32((uint32_t)(r32((uint32_t)(0x11196354))));
  /* 11193059 call edi */
  call_ind((uint32_t)(EDI), 0x1119305bu);
  /* 1119305b push dword ptr [0x11196364] */
  push32((uint32_t)(r32((uint32_t)(0x11196364))));
  /* 11193061 call edi */
  call_ind((uint32_t)(EDI), 0x11193063u);
  /* 11193063 push dword ptr [0x11196324] */
  push32((uint32_t)(r32((uint32_t)(0x11196324))));
  /* 11193069 call edi */
  call_ind((uint32_t)(EDI), 0x1119306bu);
  /* 1119306b pop edi */
  EDI = (pop32());
  /* 1119306c pop esi */
  ESI = (pop32());
  /* 1119306d ret  */
  ESPCHK(0x11193002u, _esp0);
  ESP += 4; return;
}

/* FUN_1000306e @ 0x1119306e (97 bytes, 37 insns) */
void f_1119306e(void) {
  FTRACE(0x1119306eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1119306e push ebp */
  push32((uint32_t)(EBP));
  /* 1119306f mov ebp, esp */
  EBP = (ESP);
  /* 11193071 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11193074 push esi */
  push32((uint32_t)(ESI));
  /* 11193075 cmp dword ptr [eax*4 + 0x11196320], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11196320))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1119307d lea esi, [eax*4 + 0x11196320] */
  ESI = ((uint32_t)(EAX*4 + 0x11196320));
  /* 11193084 jne 0x111930c4 */
  if (!C.zf) goto L_111930c4;
  /* 11193086 push edi */
  push32((uint32_t)(EDI));
  /* 11193087 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11193089 call 0x111931b9 */
  push32(0x1119308eu); f_111931b9();
  /* 1119308e mov edi, eax */
  EDI = (EAX);
  /* 11193090 pop ecx */
  ECX = (pop32());
  /* 11193091 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11193093 jne 0x1119309d */
  if (!C.zf) goto L_1119309d;
  /* 11193095 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11193097 call 0x111924de */
  push32(0x1119309cu); f_111924de();
  /* 1119309c pop ecx */
  ECX = (pop32());
L_1119309d:;
  /* 1119309d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1119309f call 0x1119306e */
  push32(0x111930a4u); f_1119306e();
  /* 111930a4 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111930a7 pop ecx */
  ECX = (pop32());
  /* 111930a8 push edi */
  push32((uint32_t)(EDI));
  /* 111930a9 jne 0x111930b5 */
  if (!C.zf) goto L_111930b5;
  /* 111930ab call dword ptr [0x11195044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195044))), 0x111930b1u);
  /* 111930b1 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 111930b3 jmp 0x111930bb */
  goto L_111930bb;
L_111930b5:;
  /* 111930b5 call 0x11193171 */
  push32(0x111930bau); f_11193171();
  /* 111930ba pop ecx */
  ECX = (pop32());
L_111930bb:;
  /* 111930bb push 0x11 */
  push32((uint32_t)(0x11u));
  /* 111930bd call 0x111930cf */
  push32(0x111930c2u); f_111930cf();
  /* 111930c2 pop ecx */
  ECX = (pop32());
  /* 111930c3 pop edi */
  EDI = (pop32());
L_111930c4:;
  /* 111930c4 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 111930c6 call dword ptr [0x11195040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195040))), 0x111930ccu);
  /* 111930cc pop esi */
  ESI = (pop32());
  /* 111930cd pop ebp */
  EBP = (pop32());
  /* 111930ce ret  */
  ESPCHK(0x1119306eu, _esp0);
  ESP += 4; return;
}

/* FUN_100030cf @ 0x111930cf (21 bytes, 7 insns) */
void f_111930cf(void) {
  FTRACE(0x111930cfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111930cf push ebp */
  push32((uint32_t)(EBP));
  /* 111930d0 mov ebp, esp */
  EBP = (ESP);
  /* 111930d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111930d5 push dword ptr [eax*4 + 0x11196320] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x11196320))));
  /* 111930dc call dword ptr [0x11195048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195048))), 0x111930e2u);
  /* 111930e2 pop ebp */
  EBP = (pop32());
  /* 111930e3 ret  */
  ESPCHK(0x111930cfu, _esp0);
  ESP += 4; return;
}

/* FUN_100030e4 @ 0x111930e4 (141 bytes, 56 insns) */
void f_111930e4(void) {
  FTRACE(0x111930e4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111930e4 push ebx */
  push32((uint32_t)(EBX));
  /* 111930e5 push esi */
  push32((uint32_t)(ESI));
  /* 111930e6 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 111930ea push edi */
  push32((uint32_t)(EDI));
  /* 111930eb imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111930f0 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111930f3 mov ebx, esi */
  EBX = (ESI);
  /* 111930f5 ja 0x11193104 */
  if ((!C.cf&&!C.zf)) goto L_11193104;
  /* 111930f7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 111930f9 jne 0x111930fe */
  if (!C.zf) goto L_111930fe;
  /* 111930fb push 1 */
  push32((uint32_t)(0x1u));
  /* 111930fd pop esi */
  ESI = (pop32());
L_111930fe:;
  /* 111930fe add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11193101 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_11193104:;
  /* 11193104 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11193106 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193109 ja 0x11193145 */
  if ((!C.cf&&!C.zf)) goto L_11193145;
  /* 1119310b cmp ebx, dword ptr [0x11196570] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11196570))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193111 ja 0x11193130 */
  if ((!C.cf&&!C.zf)) goto L_11193130;
  /* 11193113 push 9 */
  push32((uint32_t)(0x9u));
  /* 11193115 call 0x1119306e */
  push32(0x1119311au); f_1119306e();
  /* 1119311a push ebx */
  push32((uint32_t)(EBX));
  /* 1119311b call 0x11193e79 */
  push32(0x11193120u); f_11193e79();
  /* 11193120 push 9 */
  push32((uint32_t)(0x9u));
  /* 11193122 mov edi, eax */
  EDI = (EAX);
  /* 11193124 call 0x111930cf */
  push32(0x11193129u); f_111930cf();
  /* 11193129 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1119312c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1119312e jne 0x1119315b */
  if (!C.zf) goto L_1119315b;
L_11193130:;
  /* 11193130 push esi */
  push32((uint32_t)(ESI));
  /* 11193131 push 8 */
  push32((uint32_t)(0x8u));
  /* 11193133 push dword ptr [0x11196be8] */
  push32((uint32_t)(r32((uint32_t)(0x11196be8))));
  /* 11193139 call dword ptr [0x1119503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119503c))), 0x1119313fu);
  /* 1119313f mov edi, eax */
  EDI = (EAX);
  /* 11193141 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11193143 jne 0x11193167 */
  if (!C.zf) goto L_11193167;
L_11193145:;
  /* 11193145 cmp dword ptr [0x1119696c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1119696c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1119314c je 0x11193167 */
  if (C.zf) goto L_11193167;
  /* 1119314e push esi */
  push32((uint32_t)(ESI));
  /* 1119314f call 0x11194518 */
  push32(0x11193154u); f_11194518();
  /* 11193154 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11193156 pop ecx */
  ECX = (pop32());
  /* 11193157 je 0x1119316d */
  if (C.zf) goto L_1119316d;
  /* 11193159 jmp 0x11193104 */
  goto L_11193104;
L_1119315b:;
  /* 1119315b push ebx */
  push32((uint32_t)(EBX));
  /* 1119315c push 0 */
  push32((uint32_t)(0x0u));
  /* 1119315e push edi */
  push32((uint32_t)(EDI));
  /* 1119315f call 0x111944c0 */
  push32(0x11193164u); f_111944c0();
  /* 11193164 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11193167:;
  /* 11193167 mov eax, edi */
  EAX = (EDI);
L_11193169:;
  /* 11193169 pop edi */
  EDI = (pop32());
  /* 1119316a pop esi */
  ESI = (pop32());
  /* 1119316b pop ebx */
  EBX = (pop32());
  /* 1119316c ret  */
  ESPCHK(0x111930e4u, _esp0);
  ESP += 4; return;
L_1119316d:;
  /* 1119316d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1119316f jmp 0x11193169 */
  goto L_11193169;
}

/* FUN_10003171 @ 0x11193171 (72 bytes, 29 insns) */
void f_11193171(void) {
  FTRACE(0x11193171u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11193171 push esi */
  push32((uint32_t)(ESI));
  /* 11193172 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11193176 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11193178 je 0x111931b7 */
  if (C.zf) goto L_111931b7;
  /* 1119317a push 9 */
  push32((uint32_t)(0x9u));
  /* 1119317c call 0x1119306e */
  push32(0x11193181u); f_1119306e();
  /* 11193181 push esi */
  push32((uint32_t)(ESI));
  /* 11193182 call 0x11193b23 */
  push32(0x11193187u); f_11193b23();
  /* 11193187 pop ecx */
  ECX = (pop32());
  /* 11193188 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1119318a pop ecx */
  ECX = (pop32());
  /* 1119318b je 0x111931a0 */
  if (C.zf) goto L_111931a0;
  /* 1119318d push esi */
  push32((uint32_t)(ESI));
  /* 1119318e push eax */
  push32((uint32_t)(EAX));
  /* 1119318f call 0x11193b4e */
  push32(0x11193194u); f_11193b4e();
  /* 11193194 push 9 */
  push32((uint32_t)(0x9u));
  /* 11193196 call 0x111930cf */
  push32(0x1119319bu); f_111930cf();
  /* 1119319b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1119319e pop esi */
  ESI = (pop32());
  /* 1119319f ret  */
  ESPCHK(0x11193171u, _esp0);
  ESP += 4; return;
L_111931a0:;
  /* 111931a0 push 9 */
  push32((uint32_t)(0x9u));
  /* 111931a2 call 0x111930cf */
  push32(0x111931a7u); f_111930cf();
  /* 111931a7 pop ecx */
  ECX = (pop32());
  /* 111931a8 push esi */
  push32((uint32_t)(ESI));
  /* 111931a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 111931ab push dword ptr [0x11196be8] */
  push32((uint32_t)(r32((uint32_t)(0x11196be8))));
  /* 111931b1 call dword ptr [0x1119504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119504c))), 0x111931b7u);
L_111931b7:;
  /* 111931b7 pop esi */
  ESI = (pop32());
  /* 111931b8 ret  */
  ESPCHK(0x11193171u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x111931b9 (18 bytes, 6 insns) */
void f_111931b9(void) {
  FTRACE(0x111931b9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111931b9 push dword ptr [0x1119696c] */
  push32((uint32_t)(r32((uint32_t)(0x1119696c))));
  /* 111931bf push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 111931c3 call 0x111931cb */
  push32(0x111931c8u); f_111931cb();
  /* 111931c8 pop ecx */
  ECX = (pop32());
  /* 111931c9 pop ecx */
  ECX = (pop32());
  /* 111931ca ret  */
  ESPCHK(0x111931b9u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x111931cb (44 bytes, 16 insns) */
void f_111931cb(void) {
  FTRACE(0x111931cbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111931cb cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111931d0 ja 0x111931f4 */
  if ((!C.cf&&!C.zf)) goto L_111931f4;
L_111931d2:;
  /* 111931d2 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 111931d6 call 0x111931f7 */
  push32(0x111931dbu); f_111931f7();
  /* 111931db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111931dd pop ecx */
  ECX = (pop32());
  /* 111931de jne 0x111931f6 */
  if (!C.zf) goto L_111931f6;
  /* 111931e0 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111931e4 je 0x111931f6 */
  if (C.zf) goto L_111931f6;
  /* 111931e6 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 111931ea call 0x11194518 */
  push32(0x111931efu); f_11194518();
  /* 111931ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111931f1 pop ecx */
  ECX = (pop32());
  /* 111931f2 jne 0x111931d2 */
  if (!C.zf) goto L_111931d2;
L_111931f4:;
  /* 111931f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111931f6:;
  /* 111931f6 ret  */
  ESPCHK(0x111931cbu, _esp0);
  ESP += 4; return;
}

/* FUN_100031f7 @ 0x111931f7 (78 bytes, 30 insns) */
void f_111931f7(void) {
  FTRACE(0x111931f7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111931f7 push esi */
  push32((uint32_t)(ESI));
  /* 111931f8 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 111931fc cmp esi, dword ptr [0x11196570] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11196570))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193202 push edi */
  push32((uint32_t)(EDI));
  /* 11193203 ja 0x11193226 */
  if ((!C.cf&&!C.zf)) goto L_11193226;
  /* 11193205 push 9 */
  push32((uint32_t)(0x9u));
  /* 11193207 call 0x1119306e */
  push32(0x1119320cu); f_1119306e();
  /* 1119320c push esi */
  push32((uint32_t)(ESI));
  /* 1119320d call 0x11193e79 */
  push32(0x11193212u); f_11193e79();
  /* 11193212 push 9 */
  push32((uint32_t)(0x9u));
  /* 11193214 mov edi, eax */
  EDI = (EAX);
  /* 11193216 call 0x111930cf */
  push32(0x1119321bu); f_111930cf();
  /* 1119321b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1119321e test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11193220 je 0x11193226 */
  if (C.zf) goto L_11193226;
  /* 11193222 mov eax, edi */
  EAX = (EDI);
  /* 11193224 jmp 0x11193242 */
  goto L_11193242;
L_11193226:;
  /* 11193226 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11193228 jne 0x1119322d */
  if (!C.zf) goto L_1119322d;
  /* 1119322a push 1 */
  push32((uint32_t)(0x1u));
  /* 1119322c pop esi */
  ESI = (pop32());
L_1119322d:;
  /* 1119322d add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11193230 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11193233 push esi */
  push32((uint32_t)(ESI));
  /* 11193234 push 0 */
  push32((uint32_t)(0x0u));
  /* 11193236 push dword ptr [0x11196be8] */
  push32((uint32_t)(r32((uint32_t)(0x11196be8))));
  /* 1119323c call dword ptr [0x1119503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119503c))), 0x11193242u);
L_11193242:;
  /* 11193242 pop edi */
  EDI = (pop32());
  /* 11193243 pop esi */
  ESI = (pop32());
  /* 11193244 ret  */
  ESPCHK(0x111931f7u, _esp0);
  ESP += 4; return;
}

/* FUN_10003250 @ 0x11193250 (7 bytes, 3 insns) */
void f_11193250(void) {
  FTRACE(0x11193250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11193250 push edi */
  push32((uint32_t)(EDI));
  /* 11193251 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11193255 jmp 0x111932c1 */
  jmp_ind(0x111932c1u); return;
}

/* FUN_10003260 @ 0x11193260 (224 bytes, 84 insns) */
void f_11193260(void) {
  FTRACE(0x11193260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11193260 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11193264 push edi */
  push32((uint32_t)(EDI));
  /* 11193265 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1119326b je 0x1119327c */
  if (C.zf) goto L_1119327c;
L_1119326d:;
  /* 1119326d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1119326f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11193270 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11193272 je 0x111932af */
  if (C.zf) goto L_111932af;
  /* 11193274 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1119327a jne 0x1119326d */
  if (!C.zf) goto L_1119326d;
L_1119327c:;
  /* 1119327c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1119327e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11193283 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11193285 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11193288 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1119328a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1119328d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11193292 je 0x1119327c */
  if (C.zf) goto L_1119327c;
  /* 11193294 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11193297 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11193299 je 0x111932be */
  if (C.zf) goto L_111932be;
  /* 1119329b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1119329d je 0x111932b9 */
  if (C.zf) goto L_111932b9;
  /* 1119329f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 111932a4 je 0x111932b4 */
  if (C.zf) goto L_111932b4;
  /* 111932a6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 111932ab je 0x111932af */
  if (C.zf) goto L_111932af;
  /* 111932ad jmp 0x1119327c */
  goto L_1119327c;
L_111932af:;
  /* 111932af lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 111932b2 jmp 0x111932c1 */
  goto L_111932c1;
L_111932b4:;
  /* 111932b4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 111932b7 jmp 0x111932c1 */
  goto L_111932c1;
L_111932b9:;
  /* 111932b9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 111932bc jmp 0x111932c1 */
  goto L_111932c1;
L_111932be:;
  /* 111932be lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_111932c1:;
  /* 111932c1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 111932c5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 111932cb je 0x111932e6 */
  if (C.zf) goto L_111932e6;
L_111932cd:;
  /* 111932cd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 111932cf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 111932d0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 111932d2 je 0x11193338 */
  if (C.zf) goto L_11193338;
  /* 111932d4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 111932d6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 111932d7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 111932dd jne 0x111932cd */
  if (!C.zf) goto L_111932cd;
  /* 111932df jmp 0x111932e6 */
  goto L_111932e6;
L_111932e1:;
  /* 111932e1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 111932e3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_111932e6:;
  /* 111932e6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 111932eb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 111932ed add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111932ef xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111932f2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 111932f4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111932f6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111932f9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 111932fe je 0x111932e1 */
  if (C.zf) goto L_111932e1;
  /* 11193300 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11193302 je 0x11193338 */
  if (C.zf) goto L_11193338;
  /* 11193304 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11193306 je 0x1119332f */
  if (C.zf) goto L_1119332f;
  /* 11193308 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1119330e je 0x11193322 */
  if (C.zf) goto L_11193322;
  /* 11193310 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11193316 je 0x1119331a */
  if (C.zf) goto L_1119331a;
  /* 11193318 jmp 0x111932e1 */
  goto L_111932e1;
L_1119331a:;
  /* 1119331a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1119331c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11193320 pop edi */
  EDI = (pop32());
  /* 11193321 ret  */
  ESPCHK(0x11193260u, _esp0);
  ESP += 4; return;
L_11193322:;
  /* 11193322 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11193325 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11193329 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1119332d pop edi */
  EDI = (pop32());
  /* 1119332e ret  */
  ESPCHK(0x11193260u, _esp0);
  ESP += 4; return;
L_1119332f:;
  /* 1119332f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11193332 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11193336 pop edi */
  EDI = (pop32());
  /* 11193337 ret  */
  ESPCHK(0x11193260u, _esp0);
  ESP += 4; return;
L_11193338:;
  /* 11193338 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1119333a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1119333e pop edi */
  EDI = (pop32());
  /* 1119333f ret  */
  ESPCHK(0x11193260u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11193340 (123 bytes, 44 insns) */
void f_11193340(void) {
  FTRACE(0x11193340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11193340 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11193344 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1119334a je 0x11193360 */
  if (C.zf) goto L_11193360;
L_1119334c:;
  /* 1119334c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1119334e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1119334f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11193351 je 0x11193393 */
  if (C.zf) goto L_11193393;
  /* 11193353 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11193359 jne 0x1119334c */
  if (!C.zf) goto L_1119334c;
  /* 1119335b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11193360:;
  /* 11193360 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11193362 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11193367 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11193369 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1119336c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1119336e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11193371 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11193376 je 0x11193360 */
  if (C.zf) goto L_11193360;
  /* 11193378 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1119337b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1119337d je 0x111933b1 */
  if (C.zf) goto L_111933b1;
  /* 1119337f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11193381 je 0x111933a7 */
  if (C.zf) goto L_111933a7;
  /* 11193383 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11193388 je 0x1119339d */
  if (C.zf) goto L_1119339d;
  /* 1119338a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1119338f je 0x11193393 */
  if (C.zf) goto L_11193393;
  /* 11193391 jmp 0x11193360 */
  goto L_11193360;
L_11193393:;
  /* 11193393 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11193396 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1119339a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1119339c ret  */
  ESPCHK(0x11193340u, _esp0);
  ESP += 4; return;
L_1119339d:;
  /* 1119339d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 111933a0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 111933a4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111933a6 ret  */
  ESPCHK(0x11193340u, _esp0);
  ESP += 4; return;
L_111933a7:;
  /* 111933a7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 111933aa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 111933ae sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111933b0 ret  */
  ESPCHK(0x11193340u, _esp0);
  ESP += 4; return;
L_111933b1:;
  /* 111933b1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 111933b4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 111933b8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111933ba ret  */
  ESPCHK(0x11193340u, _esp0);
  ESP += 4; return;
}

/* FUN_100033bb @ 0x111933bb (429 bytes, 143 insns) */
void f_111933bb(void) {
  FTRACE(0x111933bbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111933bb push ebp */
  push32((uint32_t)(EBP));
  /* 111933bc mov ebp, esp */
  EBP = (ESP);
  /* 111933be sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111933c1 push ebx */
  push32((uint32_t)(EBX));
  /* 111933c2 push esi */
  push32((uint32_t)(ESI));
  /* 111933c3 push edi */
  push32((uint32_t)(EDI));
  /* 111933c4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 111933c6 call 0x1119306e */
  push32(0x111933cbu); f_1119306e();
  /* 111933cb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 111933ce call 0x11193568 */
  push32(0x111933d3u); f_11193568();
  /* 111933d3 mov ebx, eax */
  EBX = (EAX);
  /* 111933d5 pop ecx */
  ECX = (pop32());
  /* 111933d6 cmp ebx, dword ptr [0x111969b0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x111969b0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111933dc pop ecx */
  ECX = (pop32());
  /* 111933dd mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 111933e0 jne 0x111933e9 */
  if (!C.zf) goto L_111933e9;
L_111933e2:;
  /* 111933e2 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 111933e4 jmp 0x11193559 */
  goto L_11193559;
L_111933e9:;
  /* 111933e9 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 111933eb je 0x11193547 */
  if (C.zf) goto L_11193547;
  /* 111933f1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111933f3 mov eax, 0x11196478 */
  EAX = (0x11196478u);
L_111933f8:;
  /* 111933f8 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111933fa je 0x11193470 */
  if (C.zf) goto L_11193470;
  /* 111933fc add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111933ff inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11193400 cmp eax, 0x11196568 */
  { uint32_t _a=(EAX),_b=(0x11196568u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193405 jl 0x111933f8 */
  if ((C.sf!=C.of)) goto L_111933f8;
  /* 11193407 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 1119340a push eax */
  push32((uint32_t)(EAX));
  /* 1119340b push ebx */
  push32((uint32_t)(EBX));
  /* 1119340c call dword ptr [0x11195034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195034))), 0x11193412u);
  /* 11193412 push 1 */
  push32((uint32_t)(0x1u));
  /* 11193414 pop esi */
  ESI = (pop32());
  /* 11193415 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193417 jne 0x1119353e */
  if (!C.zf) goto L_1119353e;
  /* 1119341d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1119341f and dword ptr [0x11196be4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11196be4)))&(0x0u); w32((uint32_t)(0x11196be4), (_r)); fl_logic(_r,32); }
  /* 11193426 pop ecx */
  ECX = (pop32());
  /* 11193427 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11193429 mov edi, 0x11196ae0 */
  EDI = (0x11196ae0u);
  /* 1119342e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193431 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11193433 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11193434 mov dword ptr [0x111969b0], ebx */
  w32((uint32_t)(0x111969b0), (EBX));
  /* 1119343a jbe 0x1119352b */
  if ((C.cf||C.zf)) goto L_1119352b;
  /* 11193440 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11193444 je 0x11193506 */
  if (C.zf) goto L_11193506;
  /* 1119344a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_1119344d:;
  /* 1119344d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1119344f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11193451 je 0x11193506 */
  if (C.zf) goto L_11193506;
  /* 11193457 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 1119345b movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_1119345e:;
  /* 1119345e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193460 ja 0x111934fa */
  if ((!C.cf&&!C.zf)) goto L_111934fa;
  /* 11193466 or byte ptr [eax + 0x11196ae1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11196ae1)))|(0x4u); w8((uint32_t)(EAX + 0x11196ae1), (_r)); fl_logic(_r,8); }
  /* 1119346d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1119346e jmp 0x1119345e */
  goto L_1119345e;
L_11193470:;
  /* 11193470 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11193474 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11193476 pop ecx */
  ECX = (pop32());
  /* 11193477 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11193479 mov edi, 0x11196ae0 */
  EDI = (0x11196ae0u);
  /* 1119347e lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 11193481 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11193483 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11193486 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11193487 lea ebx, [esi + 0x11196488] */
  EBX = ((uint32_t)(ESI + 0x11196488));
L_1119348d:;
  /* 1119348d cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11193490 mov ecx, ebx */
  ECX = (EBX);
  /* 11193492 je 0x111934c0 */
  if (C.zf) goto L_111934c0;
L_11193494:;
  /* 11193494 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11193497 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11193499 je 0x111934c0 */
  if (C.zf) goto L_111934c0;
  /* 1119349b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 1119349e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 111934a1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111934a3 ja 0x111934b9 */
  if ((!C.cf&&!C.zf)) goto L_111934b9;
  /* 111934a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111934a8 mov dl, byte ptr [edx + 0x11196470] */
  DL = (r8((uint32_t)(EDX + 0x11196470)));
L_111934ae:;
  /* 111934ae or byte ptr [eax + 0x11196ae1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11196ae1)))|(DL); w8((uint32_t)(EAX + 0x11196ae1), (_r)); fl_logic(_r,8); }
  /* 111934b4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111934b5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111934b7 jbe 0x111934ae */
  if ((C.cf||C.zf)) goto L_111934ae;
L_111934b9:;
  /* 111934b9 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 111934ba inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 111934bb cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111934be jne 0x11193494 */
  if (!C.zf) goto L_11193494;
L_111934c0:;
  /* 111934c0 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 111934c3 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 111934c6 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111934ca jb 0x1119348d */
  if (C.cf) goto L_1119348d;
  /* 111934cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111934cf mov dword ptr [0x111969cc], 1 */
  w32((uint32_t)(0x111969cc), (0x1u));
  /* 111934d9 push eax */
  push32((uint32_t)(EAX));
  /* 111934da mov dword ptr [0x111969b0], eax */
  w32((uint32_t)(0x111969b0), (EAX));
  /* 111934df call 0x111935b2 */
  push32(0x111934e4u); f_111935b2();
  /* 111934e4 lea esi, [esi + 0x1119647c] */
  ESI = ((uint32_t)(ESI + 0x1119647c));
  /* 111934ea mov edi, 0x111969c0 */
  EDI = (0x111969c0u);
  /* 111934ef movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 111934f0 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 111934f1 pop ecx */
  ECX = (pop32());
  /* 111934f2 mov dword ptr [0x11196be4], eax */
  w32((uint32_t)(0x11196be4), (EAX));
  /* 111934f7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 111934f8 jmp 0x1119354c */
  goto L_1119354c;
L_111934fa:;
  /* 111934fa inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 111934fb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 111934fc cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11193500 jne 0x1119344d */
  if (!C.zf) goto L_1119344d;
L_11193506:;
  /* 11193506 mov eax, esi */
  EAX = (ESI);
L_11193508:;
  /* 11193508 or byte ptr [eax + 0x11196ae1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11196ae1)))|(0x8u); w8((uint32_t)(EAX + 0x11196ae1), (_r)); fl_logic(_r,8); }
  /* 1119350f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11193510 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193515 jb 0x11193508 */
  if (C.cf) goto L_11193508;
  /* 11193517 push ebx */
  push32((uint32_t)(EBX));
  /* 11193518 call 0x111935b2 */
  push32(0x1119351du); f_111935b2();
  /* 1119351d pop ecx */
  ECX = (pop32());
  /* 1119351e mov dword ptr [0x11196be4], eax */
  w32((uint32_t)(0x11196be4), (EAX));
  /* 11193523 mov dword ptr [0x111969cc], esi */
  w32((uint32_t)(0x111969cc), (ESI));
  /* 11193529 jmp 0x11193532 */
  goto L_11193532;
L_1119352b:;
  /* 1119352b and dword ptr [0x111969cc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x111969cc)))&(0x0u); w32((uint32_t)(0x111969cc), (_r)); fl_logic(_r,32); }
L_11193532:;
  /* 11193532 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11193534 mov edi, 0x111969c0 */
  EDI = (0x111969c0u);
  /* 11193539 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1119353a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1119353b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1119353c jmp 0x1119354c */
  goto L_1119354c;
L_1119353e:;
  /* 1119353e cmp dword ptr [0x11196958], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11196958))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193545 je 0x11193556 */
  if (C.zf) goto L_11193556;
L_11193547:;
  /* 11193547 call 0x111935e5 */
  push32(0x1119354cu); f_111935e5();
L_1119354c:;
  /* 1119354c call 0x1119360e */
  push32(0x11193551u); f_1119360e();
  /* 11193551 jmp 0x111933e2 */
  goto L_111933e2;
L_11193556:;
  /* 11193556 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11193559:;
  /* 11193559 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1119355b call 0x111930cf */
  push32(0x11193560u); f_111930cf();
  /* 11193560 pop ecx */
  ECX = (pop32());
  /* 11193561 mov eax, esi */
  EAX = (ESI);
  /* 11193563 pop edi */
  EDI = (pop32());
  /* 11193564 pop esi */
  ESI = (pop32());
  /* 11193565 pop ebx */
  EBX = (pop32());
  /* 11193566 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11193567 ret  */
  ESPCHK(0x111933bbu, _esp0);
  ESP += 4; return;
}

/* FUN_10003568 @ 0x11193568 (74 bytes, 15 insns) */
void f_11193568(void) {
  FTRACE(0x11193568u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11193568 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1119356c and dword ptr [0x11196958], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11196958)))&(0x0u); w32((uint32_t)(0x11196958), (_r)); fl_logic(_r,32); }
  /* 11193573 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193576 jne 0x11193588 */
  if (!C.zf) goto L_11193588;
  /* 11193578 mov dword ptr [0x11196958], 1 */
  w32((uint32_t)(0x11196958), (0x1u));
  /* 11193582 jmp dword ptr [0x11195038] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11195038)))); return;
L_11193588:;
  /* 11193588 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1119358b jne 0x1119359d */
  if (!C.zf) goto L_1119359d;
  /* 1119358d mov dword ptr [0x11196958], 1 */
  w32((uint32_t)(0x11196958), (0x1u));
  /* 11193597 jmp dword ptr [0x11195030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11195030)))); return;
L_1119359d:;
  /* 1119359d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111935a0 jne 0x111935b1 */
  if (!C.zf) goto L_111935b1;
  /* 111935a2 mov eax, dword ptr [0x11196988] */
  EAX = (r32((uint32_t)(0x11196988)));
  /* 111935a7 mov dword ptr [0x11196958], 1 */
  w32((uint32_t)(0x11196958), (0x1u));
L_111935b1:;
  /* 111935b1 ret  */
  ESPCHK(0x11193568u, _esp0);
  ESP += 4; return;
}

/* FUN_100035b2 @ 0x111935b2 (51 bytes, 19 insns) */
void f_111935b2(void) {
  FTRACE(0x111935b2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111935b2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 111935b6 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111935bb je 0x111935df */
  if (C.zf) goto L_111935df;
  /* 111935bd sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111935c0 je 0x111935d9 */
  if (C.zf) goto L_111935d9;
  /* 111935c2 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111935c5 je 0x111935d3 */
  if (C.zf) goto L_111935d3;
  /* 111935c7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 111935c8 je 0x111935cd */
  if (C.zf) goto L_111935cd;
  /* 111935ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111935cc ret  */
  ESPCHK(0x111935b2u, _esp0);
  ESP += 4; return;
L_111935cd:;
  /* 111935cd mov eax, 0x404 */
  EAX = (0x404u);
  /* 111935d2 ret  */
  ESPCHK(0x111935b2u, _esp0);
  ESP += 4; return;
L_111935d3:;
  /* 111935d3 mov eax, 0x412 */
  EAX = (0x412u);
  /* 111935d8 ret  */
  ESPCHK(0x111935b2u, _esp0);
  ESP += 4; return;
L_111935d9:;
  /* 111935d9 mov eax, 0x804 */
  EAX = (0x804u);
  /* 111935de ret  */
  ESPCHK(0x111935b2u, _esp0);
  ESP += 4; return;
L_111935df:;
  /* 111935df mov eax, 0x411 */
  EAX = (0x411u);
  /* 111935e4 ret  */
  ESPCHK(0x111935b2u, _esp0);
  ESP += 4; return;
}

/* FUN_100035e5 @ 0x111935e5 (41 bytes, 17 insns) */
void f_111935e5(void) {
  FTRACE(0x111935e5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111935e5 push edi */
  push32((uint32_t)(EDI));
  /* 111935e6 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 111935e8 pop ecx */
  ECX = (pop32());
  /* 111935e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111935eb mov edi, 0x11196ae0 */
  EDI = (0x11196ae0u);
  /* 111935f0 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 111935f2 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 111935f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111935f5 mov edi, 0x111969c0 */
  EDI = (0x111969c0u);
  /* 111935fa mov dword ptr [0x111969b0], eax */
  w32((uint32_t)(0x111969b0), (EAX));
  /* 111935ff mov dword ptr [0x111969cc], eax */
  w32((uint32_t)(0x111969cc), (EAX));
  /* 11193604 mov dword ptr [0x11196be4], eax */
  w32((uint32_t)(0x11196be4), (EAX));
  /* 11193609 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1119360a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1119360b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1119360c pop edi */
  EDI = (pop32());
  /* 1119360d ret  */
  ESPCHK(0x111935e5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000360e @ 0x1119360e (389 bytes, 124 insns) */
void f_1119360e(void) {
  FTRACE(0x1119360eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1119360e push ebp */
  push32((uint32_t)(EBP));
  /* 1119360f mov ebp, esp */
  EBP = (ESP);
  /* 11193611 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11193617 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1119361a push esi */
  push32((uint32_t)(ESI));
  /* 1119361b push eax */
  push32((uint32_t)(EAX));
  /* 1119361c push dword ptr [0x111969b0] */
  push32((uint32_t)(r32((uint32_t)(0x111969b0))));
  /* 11193622 call dword ptr [0x11195034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195034))), 0x11193628u);
  /* 11193628 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1119362b jne 0x11193747 */
  if (!C.zf) goto L_11193747;
  /* 11193631 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11193633 mov esi, 0x100 */
  ESI = (0x100u);
L_11193638:;
  /* 11193638 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 1119363f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11193640 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193642 jb 0x11193638 */
  if (C.cf) goto L_11193638;
  /* 11193644 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 11193647 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 1119364e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11193650 je 0x11193689 */
  if (C.zf) goto L_11193689;
  /* 11193652 push ebx */
  push32((uint32_t)(EBX));
  /* 11193653 push edi */
  push32((uint32_t)(EDI));
  /* 11193654 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_11193657:;
  /* 11193657 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 1119365a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 1119365d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1119365f ja 0x1119367e */
  if ((!C.cf&&!C.zf)) goto L_1119367e;
  /* 11193661 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11193663 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 1119366a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1119366b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 11193670 mov ebx, ecx */
  EBX = (ECX);
  /* 11193672 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11193675 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11193677 mov ecx, ebx */
  ECX = (EBX);
  /* 11193679 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1119367c rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_1119367e:;
  /* 1119367e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1119367f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11193680 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 11193683 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11193685 jne 0x11193657 */
  if (!C.zf) goto L_11193657;
  /* 11193687 pop edi */
  EDI = (pop32());
  /* 11193688 pop ebx */
  EBX = (pop32());
L_11193689:;
  /* 11193689 push 0 */
  push32((uint32_t)(0x0u));
  /* 1119368b lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 11193691 push dword ptr [0x11196be4] */
  push32((uint32_t)(r32((uint32_t)(0x11196be4))));
  /* 11193697 push dword ptr [0x111969b0] */
  push32((uint32_t)(r32((uint32_t)(0x111969b0))));
  /* 1119369d push eax */
  push32((uint32_t)(EAX));
  /* 1119369e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 111936a4 push esi */
  push32((uint32_t)(ESI));
  /* 111936a5 push eax */
  push32((uint32_t)(EAX));
  /* 111936a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 111936a8 call 0x11194782 */
  push32(0x111936adu); f_11194782();
  /* 111936ad push 0 */
  push32((uint32_t)(0x0u));
  /* 111936af lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 111936b5 push dword ptr [0x111969b0] */
  push32((uint32_t)(r32((uint32_t)(0x111969b0))));
  /* 111936bb push esi */
  push32((uint32_t)(ESI));
  /* 111936bc push eax */
  push32((uint32_t)(EAX));
  /* 111936bd lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 111936c3 push esi */
  push32((uint32_t)(ESI));
  /* 111936c4 push eax */
  push32((uint32_t)(EAX));
  /* 111936c5 push esi */
  push32((uint32_t)(ESI));
  /* 111936c6 push dword ptr [0x11196be4] */
  push32((uint32_t)(r32((uint32_t)(0x11196be4))));
  /* 111936cc call 0x11194533 */
  push32(0x111936d1u); f_11194533();
  /* 111936d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 111936d3 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 111936d9 push dword ptr [0x111969b0] */
  push32((uint32_t)(r32((uint32_t)(0x111969b0))));
  /* 111936df push esi */
  push32((uint32_t)(ESI));
  /* 111936e0 push eax */
  push32((uint32_t)(EAX));
  /* 111936e1 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 111936e7 push esi */
  push32((uint32_t)(ESI));
  /* 111936e8 push eax */
  push32((uint32_t)(EAX));
  /* 111936e9 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 111936ee push dword ptr [0x11196be4] */
  push32((uint32_t)(r32((uint32_t)(0x11196be4))));
  /* 111936f4 call 0x11194533 */
  push32(0x111936f9u); f_11194533();
  /* 111936f9 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111936fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111936fe lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_11193704:;
  /* 11193704 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11193707 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 1119370a je 0x11193722 */
  if (C.zf) goto L_11193722;
  /* 1119370c or byte ptr [eax + 0x11196ae1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11196ae1)))|(0x10u); w8((uint32_t)(EAX + 0x11196ae1), (_r)); fl_logic(_r,8); }
  /* 11193713 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_1119371a:;
  /* 1119371a mov byte ptr [eax + 0x111969e0], dl */
  w8((uint32_t)(EAX + 0x111969e0), (DL));
  /* 11193720 jmp 0x1119373e */
  goto L_1119373e;
L_11193722:;
  /* 11193722 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 11193725 je 0x11193737 */
  if (C.zf) goto L_11193737;
  /* 11193727 or byte ptr [eax + 0x11196ae1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11196ae1)))|(0x20u); w8((uint32_t)(EAX + 0x11196ae1), (_r)); fl_logic(_r,8); }
  /* 1119372e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 11193735 jmp 0x1119371a */
  goto L_1119371a;
L_11193737:;
  /* 11193737 and byte ptr [eax + 0x111969e0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x111969e0)))&(0x0u); w8((uint32_t)(EAX + 0x111969e0), (_r)); fl_logic(_r,8); }
L_1119373e:;
  /* 1119373e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1119373f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11193740 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11193741 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193743 jb 0x11193704 */
  if (C.cf) goto L_11193704;
  /* 11193745 jmp 0x11193790 */
  goto L_11193790;
L_11193747:;
  /* 11193747 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11193749 mov esi, 0x100 */
  ESI = (0x100u);
L_1119374e:;
  /* 1119374e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193751 jb 0x1119376c */
  if (C.cf) goto L_1119376c;
  /* 11193753 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193756 ja 0x1119376c */
  if ((!C.cf&&!C.zf)) goto L_1119376c;
  /* 11193758 or byte ptr [eax + 0x11196ae1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11196ae1)))|(0x10u); w8((uint32_t)(EAX + 0x11196ae1), (_r)); fl_logic(_r,8); }
  /* 1119375f mov cl, al */
  CL = (AL);
  /* 11193761 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_11193764:;
  /* 11193764 mov byte ptr [eax + 0x111969e0], cl */
  w8((uint32_t)(EAX + 0x111969e0), (CL));
  /* 1119376a jmp 0x1119378b */
  goto L_1119378b;
L_1119376c:;
  /* 1119376c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1119376f jb 0x11193784 */
  if (C.cf) goto L_11193784;
  /* 11193771 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193774 ja 0x11193784 */
  if ((!C.cf&&!C.zf)) goto L_11193784;
  /* 11193776 or byte ptr [eax + 0x11196ae1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11196ae1)))|(0x20u); w8((uint32_t)(EAX + 0x11196ae1), (_r)); fl_logic(_r,8); }
  /* 1119377d mov cl, al */
  CL = (AL);
  /* 1119377f sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11193782 jmp 0x11193764 */
  goto L_11193764;
L_11193784:;
  /* 11193784 and byte ptr [eax + 0x111969e0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x111969e0)))&(0x0u); w8((uint32_t)(EAX + 0x111969e0), (_r)); fl_logic(_r,8); }
L_1119378b:;
  /* 1119378b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1119378c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1119378e jb 0x1119374e */
  if (C.cf) goto L_1119374e;
L_11193790:;
  /* 11193790 pop esi */
  ESI = (pop32());
  /* 11193791 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11193792 ret  */
  ESPCHK(0x1119360eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003793 @ 0x11193793 (28 bytes, 7 insns) */
void f_11193793(void) {
  FTRACE(0x11193793u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11193793 cmp dword ptr [0x11196d08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11196d08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1119379a jne 0x111937ae */
  if (!C.zf) goto L_111937ae;
  /* 1119379c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1119379e call 0x111933bb */
  push32(0x111937a3u); f_111933bb();
  /* 111937a3 pop ecx */
  ECX = (pop32());
  /* 111937a4 mov dword ptr [0x11196d08], 1 */
  w32((uint32_t)(0x11196d08), (0x1u));
L_111937ae:;
  /* 111937ae ret  */
  ESPCHK(0x11193793u, _esp0);
  ESP += 4; return;
}

/* FUN_100037b0 @ 0x111937b0 (664 bytes, 259 insns) [15 switch table(s)] */
void f_111937b0(void) {
  FTRACE(0x111937b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111937b0 push ebp */
  push32((uint32_t)(EBP));
  /* 111937b1 mov ebp, esp */
  EBP = (ESP);
  /* 111937b3 push edi */
  push32((uint32_t)(EDI));
  /* 111937b4 push esi */
  push32((uint32_t)(ESI));
  /* 111937b5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 111937b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111937bb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 111937be mov eax, ecx */
  EAX = (ECX);
  /* 111937c0 mov edx, ecx */
  EDX = (ECX);
  /* 111937c2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111937c4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111937c6 jbe 0x111937d0 */
  if ((C.cf||C.zf)) goto L_111937d0;
  /* 111937c8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111937ca jb 0x11193948 */
  if (C.cf) goto L_11193948;
L_111937d0:;
  /* 111937d0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 111937d6 jne 0x111937ec */
  if (!C.zf) goto L_111937ec;
  /* 111937d8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111937db and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 111937de cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111937e1 jb 0x1119380c */
  if (C.cf) goto L_1119380c;
  /* 111937e3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111937e5 jmp dword ptr [edx*4 + 0x111938f8] */
  switch (EDX) {
    case 0: goto L_11193908;
    case 1: goto L_11193910;
    case 2: goto L_1119391c;
    case 3: goto L_11193930;
    default: x86_unimpl("switch@0x111937e5 out of table"); return;
  }
L_111937ec:;
  /* 111937ec mov eax, edi */
  EAX = (EDI);
  /* 111937ee mov edx, 3 */
  EDX = (0x3u);
  /* 111937f3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111937f6 jb 0x11193804 */
  if (C.cf) goto L_11193804;
  /* 111937f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 111937fb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111937fd jmp dword ptr [eax*4 + 0x11193810] */
  switch (EAX) {
    case 1: goto L_11193820;
    case 2: goto L_1119384c;
    case 3: goto L_11193870;
    default: x86_unimpl("switch@0x111937fd out of table"); return;
  }
L_11193804:;
  /* 11193804 jmp dword ptr [ecx*4 + 0x11193908] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11193908)))); return;
  /* 1119380b nop  */
  /* nop */
L_1119380c:;
  /* 1119380c jmp dword ptr [ecx*4 + 0x1119388c] */
  switch (ECX) {
    case 0: goto L_111938ef;
    case 1: goto L_111938dc;
    case 2: goto L_111938d4;
    case 3: goto L_111938cc;
    case 4: goto L_111938c4;
    case 5: goto L_111938bc;
    case 6: goto L_111938b4;
    case 7: goto L_111938ac;
    default: x86_unimpl("switch@0x1119380c out of table"); return;
  }
  /* 11193813 nop  */
  /* nop */
L_11193820:;
  /* 11193820 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11193822 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11193824 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11193826 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11193829 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1119382c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1119382f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11193832 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11193835 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11193838 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1119383b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1119383e jb 0x1119380c */
  if (C.cf) goto L_1119380c;
  /* 11193840 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11193842 jmp dword ptr [edx*4 + 0x111938f8] */
  switch (EDX) {
    case 0: goto L_11193908;
    case 1: goto L_11193910;
    case 2: goto L_1119391c;
    case 3: goto L_11193930;
    default: x86_unimpl("switch@0x11193842 out of table"); return;
  }
  /* 11193849 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1119384c:;
  /* 1119384c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1119384e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11193850 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11193852 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11193855 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11193858 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1119385b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1119385e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11193861 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193864 jb 0x1119380c */
  if (C.cf) goto L_1119380c;
  /* 11193866 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11193868 jmp dword ptr [edx*4 + 0x111938f8] */
  switch (EDX) {
    case 0: goto L_11193908;
    case 1: goto L_11193910;
    case 2: goto L_1119391c;
    case 3: goto L_11193930;
    default: x86_unimpl("switch@0x11193868 out of table"); return;
  }
  /* 1119386f nop  */
  /* nop */
L_11193870:;
  /* 11193870 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11193872 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11193874 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11193876 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11193877 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1119387a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1119387b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1119387e jb 0x1119380c */
  if (C.cf) goto L_1119380c;
  /* 11193880 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11193882 jmp dword ptr [edx*4 + 0x111938f8] */
  switch (EDX) {
    case 0: goto L_11193908;
    case 1: goto L_11193910;
    case 2: goto L_1119391c;
    case 3: goto L_11193930;
    default: x86_unimpl("switch@0x11193882 out of table"); return;
  }
  /* 11193889 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111938ac:;
  /* 111938ac mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 111938b0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_111938b4:;
  /* 111938b4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 111938b8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_111938bc:;
  /* 111938bc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 111938c0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_111938c4:;
  /* 111938c4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 111938c8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_111938cc:;
  /* 111938cc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 111938d0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_111938d4:;
  /* 111938d4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 111938d8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_111938dc:;
  /* 111938dc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 111938e0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 111938e4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 111938eb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111938ed add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_111938ef:;
  /* 111938ef jmp dword ptr [edx*4 + 0x111938f8] */
  switch (EDX) {
    case 0: goto L_11193908;
    case 1: goto L_11193910;
    case 2: goto L_1119391c;
    case 3: goto L_11193930;
    default: x86_unimpl("switch@0x111938ef out of table"); return;
  }
  /* 111938f6 mov edi, edi */
  EDI = (EDI);
L_11193908:;
  /* 11193908 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1119390b pop esi */
  ESI = (pop32());
  /* 1119390c pop edi */
  EDI = (pop32());
  /* 1119390d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1119390e ret  */
  ESPCHK(0x111937b0u, _esp0);
  ESP += 4; return;
  /* 1119390f nop  */
  /* nop */
L_11193910:;
  /* 11193910 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11193912 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11193914 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11193917 pop esi */
  ESI = (pop32());
  /* 11193918 pop edi */
  EDI = (pop32());
  /* 11193919 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1119391a ret  */
  ESPCHK(0x111937b0u, _esp0);
  ESP += 4; return;
  /* 1119391b nop  */
  /* nop */
L_1119391c:;
  /* 1119391c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1119391e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11193920 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11193923 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11193926 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11193929 pop esi */
  ESI = (pop32());
  /* 1119392a pop edi */
  EDI = (pop32());
  /* 1119392b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1119392c ret  */
  ESPCHK(0x111937b0u, _esp0);
  ESP += 4; return;
  /* 1119392d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11193930:;
  /* 11193930 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11193932 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11193934 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11193937 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1119393a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1119393d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11193940 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11193943 pop esi */
  ESI = (pop32());
  /* 11193944 pop edi */
  EDI = (pop32());
  /* 11193945 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11193946 ret  */
  ESPCHK(0x111937b0u, _esp0);
  ESP += 4; return;
  /* 11193947 nop  */
  /* nop */
L_11193948:;
  /* 11193948 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1119394c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11193950 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11193956 jne 0x1119397c */
  if (!C.zf) goto L_1119397c;
  /* 11193958 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1119395b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1119395e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193961 jb 0x11193970 */
  if (C.cf) goto L_11193970;
  /* 11193963 std  */
  C.df=1;
  /* 11193964 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11193966 cld  */
  C.df=0;
  /* 11193967 jmp dword ptr [edx*4 + 0x11193a90] */
  switch (EDX) {
    case 0: goto L_11193aa0;
    case 1: goto L_11193aa8;
    case 2: goto L_11193ab8;
    case 3: goto L_11193acc;
    default: x86_unimpl("switch@0x11193967 out of table"); return;
  }
  /* 1119396e mov edi, edi */
  EDI = (EDI);
L_11193970:;
  /* 11193970 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11193972 jmp dword ptr [ecx*4 + 0x11193a40] */
  switch (ECX) {
    case 0: goto L_11193a87;
    default: x86_unimpl("switch@0x11193972 out of table"); return;
  }
  /* 11193979 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1119397c:;
  /* 1119397c mov eax, edi */
  EAX = (EDI);
  /* 1119397e mov edx, 3 */
  EDX = (0x3u);
  /* 11193983 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193986 jb 0x11193994 */
  if (C.cf) goto L_11193994;
  /* 11193988 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1119398b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1119398d jmp dword ptr [eax*4 + 0x11193998] */
  switch (EAX) {
    case 1: goto L_111939a8;
    case 2: goto L_111939c8;
    case 3: goto L_111939f0;
    default: x86_unimpl("switch@0x1119398d out of table"); return;
  }
L_11193994:;
  /* 11193994 jmp dword ptr [ecx*4 + 0x11193a90] */
  switch (ECX) {
    case 0: goto L_11193aa0;
    case 1: goto L_11193aa8;
    case 2: goto L_11193ab8;
    case 3: goto L_11193acc;
    default: x86_unimpl("switch@0x11193994 out of table"); return;
  }
  /* 1119399b nop  */
  /* nop */
L_111939a8:;
  /* 111939a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 111939ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 111939ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 111939b0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 111939b1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111939b4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 111939b5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111939b8 jb 0x11193970 */
  if (C.cf) goto L_11193970;
  /* 111939ba std  */
  C.df=1;
  /* 111939bb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111939bd cld  */
  C.df=0;
  /* 111939be jmp dword ptr [edx*4 + 0x11193a90] */
  switch (EDX) {
    case 0: goto L_11193aa0;
    case 1: goto L_11193aa8;
    case 2: goto L_11193ab8;
    case 3: goto L_11193acc;
    default: x86_unimpl("switch@0x111939be out of table"); return;
  }
  /* 111939c5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111939c8:;
  /* 111939c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 111939cb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 111939cd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 111939d0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 111939d3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111939d6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 111939d9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111939dc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111939df cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111939e2 jb 0x11193970 */
  if (C.cf) goto L_11193970;
  /* 111939e4 std  */
  C.df=1;
  /* 111939e5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111939e7 cld  */
  C.df=0;
  /* 111939e8 jmp dword ptr [edx*4 + 0x11193a90] */
  switch (EDX) {
    case 0: goto L_11193aa0;
    case 1: goto L_11193aa8;
    case 2: goto L_11193ab8;
    case 3: goto L_11193acc;
    default: x86_unimpl("switch@0x111939e8 out of table"); return;
  }
  /* 111939ef nop  */
  /* nop */
L_111939f0:;
  /* 111939f0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 111939f3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 111939f5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 111939f8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 111939fb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 111939fe mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11193a01 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11193a04 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11193a07 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11193a0a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11193a0d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193a10 jb 0x11193970 */
  if (C.cf) goto L_11193970;
  /* 11193a16 std  */
  C.df=1;
  /* 11193a17 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11193a19 cld  */
  C.df=0;
  /* 11193a1a jmp dword ptr [edx*4 + 0x11193a90] */
  switch (EDX) {
    case 0: goto L_11193aa0;
    case 1: goto L_11193aa8;
    case 2: goto L_11193ab8;
    case 3: goto L_11193acc;
    default: x86_unimpl("switch@0x11193a1a out of table"); return;
  }
  /* 11193a21 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11193a24 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 11193a25 cmp bl, byte ptr [ecx] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11193a27 adc dword ptr [edx + edi + 0x19], ecx */
  { uint32_t _a=(r32((uint32_t)(EDX + EDI*1 + 0x19))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(EDX + EDI*1 + 0x19), (_r)); fl_add(_a,_b,_r,32); }
  /* 11193a2b adc dword ptr [edx + edi + 0x19], edx */
  { uint32_t _a=(r32((uint32_t)(EDX + EDI*1 + 0x19))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EDX + EDI*1 + 0x19), (_r)); fl_add(_a,_b,_r,32); }
  /* 11193a2f adc dword ptr [edx + edi + 0x19], ebx */
  { uint32_t _a=(r32((uint32_t)(EDX + EDI*1 + 0x19))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(EDX + EDI*1 + 0x19), (_r)); fl_add(_a,_b,_r,32); }
  /* 11193a33 adc dword ptr [edx + edi + 0x19], esp */
  { uint32_t _a=(r32((uint32_t)(EDX + EDI*1 + 0x19))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(EDX + EDI*1 + 0x19), (_r)); fl_add(_a,_b,_r,32); }
  /* 11193a37 adc dword ptr [edx + edi + 0x19], ebp */
  { uint32_t _a=(r32((uint32_t)(EDX + EDI*1 + 0x19))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(EDX + EDI*1 + 0x19), (_r)); fl_add(_a,_b,_r,32); }
  /* 11193a3b adc dword ptr [edx + edi + 0x19], esi */
  { uint32_t _a=(r32((uint32_t)(EDX + EDI*1 + 0x19))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(EDX + EDI*1 + 0x19), (_r)); fl_add(_a,_b,_r,32); }
  /* 11193a44 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11193a48 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11193a4c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11193a50 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11193a54 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11193a58 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11193a5c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11193a60 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11193a64 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11193a68 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11193a6c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11193a70 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11193a74 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11193a78 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11193a7c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11193a83 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11193a85 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11193a87:;
  /* 11193a87 jmp dword ptr [edx*4 + 0x11193a90] */
  switch (EDX) {
    case 0: goto L_11193aa0;
    case 1: goto L_11193aa8;
    case 2: goto L_11193ab8;
    case 3: goto L_11193acc;
    default: x86_unimpl("switch@0x11193a87 out of table"); return;
  }
  /* 11193a8e mov edi, edi */
  EDI = (EDI);
L_11193aa0:;
  /* 11193aa0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11193aa3 pop esi */
  ESI = (pop32());
  /* 11193aa4 pop edi */
  EDI = (pop32());
  /* 11193aa5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11193aa6 ret  */
  ESPCHK(0x111937b0u, _esp0);
  ESP += 4; return;
  /* 11193aa7 nop  */
  /* nop */
L_11193aa8:;
  /* 11193aa8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11193aab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11193aae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11193ab1 pop esi */
  ESI = (pop32());
  /* 11193ab2 pop edi */
  EDI = (pop32());
  /* 11193ab3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11193ab4 ret  */
  ESPCHK(0x111937b0u, _esp0);
  ESP += 4; return;
  /* 11193ab5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11193ab8:;
  /* 11193ab8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11193abb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11193abe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11193ac1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11193ac4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11193ac7 pop esi */
  ESI = (pop32());
  /* 11193ac8 pop edi */
  EDI = (pop32());
  /* 11193ac9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11193aca ret  */
  ESPCHK(0x111937b0u, _esp0);
  ESP += 4; return;
  /* 11193acb nop  */
  /* nop */
L_11193acc:;
  /* 11193acc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11193acf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11193ad2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11193ad5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11193ad8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11193adb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11193ade mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11193ae1 pop esi */
  ESI = (pop32());
  /* 11193ae2 pop edi */
  EDI = (pop32());
  /* 11193ae3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11193ae4 ret  */
  ESPCHK(0x111937b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ae5 @ 0x11193ae5 (62 bytes, 15 insns) */
void f_11193ae5(void) {
  FTRACE(0x11193ae5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11193ae5 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11193aea push 0 */
  push32((uint32_t)(0x0u));
  /* 11193aec push dword ptr [0x11196be8] */
  push32((uint32_t)(r32((uint32_t)(0x11196be8))));
  /* 11193af2 call dword ptr [0x1119503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119503c))), 0x11193af8u);
  /* 11193af8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11193afa mov dword ptr [0x111969ac], eax */
  w32((uint32_t)(0x111969ac), (EAX));
  /* 11193aff jne 0x11193b02 */
  if (!C.zf) goto L_11193b02;
  /* 11193b01 ret  */
  ESPCHK(0x11193ae5u, _esp0);
  ESP += 4; return;
L_11193b02:;
  /* 11193b02 and dword ptr [0x111969a4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x111969a4)))&(0x0u); w32((uint32_t)(0x111969a4), (_r)); fl_logic(_r,32); }
  /* 11193b09 and dword ptr [0x111969a8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x111969a8)))&(0x0u); w32((uint32_t)(0x111969a8), (_r)); fl_logic(_r,32); }
  /* 11193b10 push 1 */
  push32((uint32_t)(0x1u));
  /* 11193b12 mov dword ptr [0x111969a0], eax */
  w32((uint32_t)(0x111969a0), (EAX));
  /* 11193b17 mov dword ptr [0x11196998], 0x10 */
  w32((uint32_t)(0x11196998), (0x10u));
  /* 11193b21 pop eax */
  EAX = (pop32());
  /* 11193b22 ret  */
  ESPCHK(0x11193ae5u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b23 @ 0x11193b23 (43 bytes, 14 insns) */
void f_11193b23(void) {
  FTRACE(0x11193b23u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11193b23 mov eax, dword ptr [0x111969a8] */
  EAX = (r32((uint32_t)(0x111969a8)));
  /* 11193b28 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11193b2b mov eax, dword ptr [0x111969ac] */
  EAX = (r32((uint32_t)(0x111969ac)));
  /* 11193b30 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_11193b33:;
  /* 11193b33 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193b35 jae 0x11193b4b */
  if (!C.cf) goto L_11193b4b;
  /* 11193b37 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11193b3b sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11193b3e cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193b44 jb 0x11193b4d */
  if (C.cf) goto L_11193b4d;
  /* 11193b46 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11193b49 jmp 0x11193b33 */
  goto L_11193b33;
L_11193b4b:;
  /* 11193b4b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11193b4d:;
  /* 11193b4d ret  */
  ESPCHK(0x11193b23u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b4e @ 0x11193b4e (811 bytes, 264 insns) */
void f_11193b4e(void) {
  FTRACE(0x11193b4eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11193b4e push ebp */
  push32((uint32_t)(EBP));
  /* 11193b4f mov ebp, esp */
  EBP = (ESP);
  /* 11193b51 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11193b54 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11193b57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11193b5a push ebx */
  push32((uint32_t)(EBX));
  /* 11193b5b push esi */
  push32((uint32_t)(ESI));
  /* 11193b5c mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11193b5f mov esi, edx */
  ESI = (EDX);
  /* 11193b61 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11193b64 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 11193b67 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11193b6a push edi */
  push32((uint32_t)(EDI));
  /* 11193b6b shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 11193b6e mov ecx, esi */
  ECX = (ESI);
  /* 11193b70 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 11193b73 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11193b79 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11193b7a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11193b7d lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11193b84 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11193b87 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11193b8a mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 11193b8d test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 11193b90 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11193b93 jne 0x11193c14 */
  if (!C.zf) goto L_11193c14;
  /* 11193b95 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11193b98 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11193b9a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11193b9b pop edi */
  EDI = (pop32());
  /* 11193b9c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11193b9f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193ba1 jbe 0x11193ba6 */
  if ((C.cf||C.zf)) goto L_11193ba6;
  /* 11193ba3 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11193ba6:;
  /* 11193ba6 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11193baa cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193bae jne 0x11193bf8 */
  if (!C.zf) goto L_11193bf8;
  /* 11193bb0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11193bb3 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193bb6 jae 0x11193bd4 */
  if (!C.cf) goto L_11193bd4;
  /* 11193bb8 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11193bbd shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11193bbf lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11193bc3 not edi */
  EDI = (~(EDI));
  /* 11193bc5 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11193bc9 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11193bcb jne 0x11193bf8 */
  if (!C.zf) goto L_11193bf8;
  /* 11193bcd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11193bd0 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11193bd2 jmp 0x11193bf8 */
  goto L_11193bf8;
L_11193bd4:;
  /* 11193bd4 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11193bd7 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11193bdc shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11193bde mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11193be1 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11193be5 not edi */
  EDI = (~(EDI));
  /* 11193be7 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11193bee dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11193bf0 jne 0x11193bf8 */
  if (!C.zf) goto L_11193bf8;
  /* 11193bf2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11193bf5 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11193bf8:;
  /* 11193bf8 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 11193bfc mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11193c00 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11193c03 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11193c07 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 11193c0b add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11193c0e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11193c11 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_11193c14:;
  /* 11193c14 mov edi, ebx */
  EDI = (EBX);
  /* 11193c16 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11193c19 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11193c1a cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193c1d jbe 0x11193c22 */
  if ((C.cf||C.zf)) goto L_11193c22;
  /* 11193c1f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11193c21 pop edi */
  EDI = (pop32());
L_11193c22:;
  /* 11193c22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11193c25 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11193c28 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11193c2b jne 0x11193cd1 */
  if (!C.zf) goto L_11193cd1;
  /* 11193c31 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11193c34 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11193c37 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11193c3a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11193c3c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11193c3f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11193c40 pop edx */
  EDX = (pop32());
  /* 11193c41 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193c43 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11193c46 jbe 0x11193c4d */
  if ((C.cf||C.zf)) goto L_11193c4d;
  /* 11193c48 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11193c4b mov ecx, edx */
  ECX = (EDX);
L_11193c4d:;
  /* 11193c4d add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11193c50 mov edi, ebx */
  EDI = (EBX);
  /* 11193c52 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11193c55 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11193c58 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11193c59 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193c5b jbe 0x11193c5f */
  if ((C.cf||C.zf)) goto L_11193c5f;
  /* 11193c5d mov edi, edx */
  EDI = (EDX);
L_11193c5f:;
  /* 11193c5f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193c61 je 0x11193cce */
  if (C.zf) goto L_11193cce;
  /* 11193c63 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11193c66 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11193c69 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193c6c jne 0x11193cb6 */
  if (!C.zf) goto L_11193cb6;
  /* 11193c6e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11193c71 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193c74 jae 0x11193c92 */
  if (!C.cf) goto L_11193c92;
  /* 11193c76 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11193c7b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11193c7d lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11193c81 not edx */
  EDX = (~(EDX));
  /* 11193c83 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11193c87 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11193c89 jne 0x11193cb6 */
  if (!C.zf) goto L_11193cb6;
  /* 11193c8b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11193c8e and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11193c90 jmp 0x11193cb6 */
  goto L_11193cb6;
L_11193c92:;
  /* 11193c92 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11193c95 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11193c9a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11193c9c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11193c9f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11193ca3 not edx */
  EDX = (~(EDX));
  /* 11193ca5 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11193cac dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11193cae jne 0x11193cb6 */
  if (!C.zf) goto L_11193cb6;
  /* 11193cb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11193cb3 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11193cb6:;
  /* 11193cb6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11193cb9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11193cbc mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11193cbf mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11193cc2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11193cc5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11193cc8 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11193ccb mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11193cce:;
  /* 11193cce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11193cd1:;
  /* 11193cd1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193cd5 jne 0x11193ce0 */
  if (!C.zf) goto L_11193ce0;
  /* 11193cd7 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193cda je 0x11193d69 */
  if (C.zf) goto L_11193d69;
L_11193ce0:;
  /* 11193ce0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11193ce3 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11193ce6 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11193ce9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11193cec mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11193cef lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11193cf2 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11193cf5 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11193cf8 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11193cfb mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11193cfe mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11193d01 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193d04 jne 0x11193d69 */
  if (!C.zf) goto L_11193d69;
  /* 11193d06 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 11193d0a cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193d0d mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11193d10 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11193d12 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 11193d16 jae 0x11193d3d */
  if (!C.cf) goto L_11193d3d;
  /* 11193d18 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11193d1c jne 0x11193d2c */
  if (!C.zf) goto L_11193d2c;
  /* 11193d1e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11193d23 mov ecx, edi */
  ECX = (EDI);
  /* 11193d25 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11193d27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11193d2a or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11193d2c:;
  /* 11193d2c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11193d31 mov ecx, edi */
  ECX = (EDI);
  /* 11193d33 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11193d35 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 11193d39 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11193d3b jmp 0x11193d66 */
  goto L_11193d66;
L_11193d3d:;
  /* 11193d3d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11193d41 jne 0x11193d53 */
  if (!C.zf) goto L_11193d53;
  /* 11193d43 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11193d46 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11193d4b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11193d4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11193d50 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11193d53:;
  /* 11193d53 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11193d56 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11193d5b shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11193d5d lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 11193d64 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11193d66:;
  /* 11193d66 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_11193d69:;
  /* 11193d69 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11193d6c mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 11193d6e mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 11193d72 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 11193d74 jne 0x11193e74 */
  if (!C.zf) goto L_11193e74;
  /* 11193d7a mov eax, dword ptr [0x111969a4] */
  EAX = (r32((uint32_t)(0x111969a4)));
  /* 11193d7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11193d81 je 0x11193e66 */
  if (C.zf) goto L_11193e66;
  /* 11193d87 mov ecx, dword ptr [0x1119699c] */
  ECX = (r32((uint32_t)(0x1119699c)));
  /* 11193d8d mov edi, dword ptr [0x11195050] */
  EDI = (r32((uint32_t)(0x11195050)));
  /* 11193d93 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11193d96 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11193d99 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 11193d9e push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11193da3 push ebx */
  push32((uint32_t)(EBX));
  /* 11193da4 push ecx */
  push32((uint32_t)(ECX));
  /* 11193da5 call edi */
  call_ind((uint32_t)(EDI), 0x11193da7u);
  /* 11193da7 mov ecx, dword ptr [0x1119699c] */
  ECX = (r32((uint32_t)(0x1119699c)));
  /* 11193dad mov eax, dword ptr [0x111969a4] */
  EAX = (r32((uint32_t)(0x111969a4)));
  /* 11193db2 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11193db7 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11193db9 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11193dbc mov eax, dword ptr [0x111969a4] */
  EAX = (r32((uint32_t)(0x111969a4)));
  /* 11193dc1 mov ecx, dword ptr [0x1119699c] */
  ECX = (r32((uint32_t)(0x1119699c)));
  /* 11193dc7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11193dca and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11193dd2 mov eax, dword ptr [0x111969a4] */
  EAX = (r32((uint32_t)(0x111969a4)));
  /* 11193dd7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11193dda dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 11193ddd mov eax, dword ptr [0x111969a4] */
  EAX = (r32((uint32_t)(0x111969a4)));
  /* 11193de2 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11193de5 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11193de9 jne 0x11193df4 */
  if (!C.zf) goto L_11193df4;
  /* 11193deb and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11193def mov eax, dword ptr [0x111969a4] */
  EAX = (r32((uint32_t)(0x111969a4)));
L_11193df4:;
  /* 11193df4 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193df8 jne 0x11193e66 */
  if (!C.zf) goto L_11193e66;
  /* 11193dfa push ebx */
  push32((uint32_t)(EBX));
  /* 11193dfb push 0 */
  push32((uint32_t)(0x0u));
  /* 11193dfd push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11193e00 call edi */
  call_ind((uint32_t)(EDI), 0x11193e02u);
  /* 11193e02 mov eax, dword ptr [0x111969a4] */
  EAX = (r32((uint32_t)(0x111969a4)));
  /* 11193e07 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11193e0a push 0 */
  push32((uint32_t)(0x0u));
  /* 11193e0c push dword ptr [0x11196be8] */
  push32((uint32_t)(r32((uint32_t)(0x11196be8))));
  /* 11193e12 call dword ptr [0x1119504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119504c))), 0x11193e18u);
  /* 11193e18 mov eax, dword ptr [0x111969a8] */
  EAX = (r32((uint32_t)(0x111969a8)));
  /* 11193e1d mov edx, dword ptr [0x111969ac] */
  EDX = (r32((uint32_t)(0x111969ac)));
  /* 11193e23 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11193e26 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11193e29 mov ecx, eax */
  ECX = (EAX);
  /* 11193e2b mov eax, dword ptr [0x111969a4] */
  EAX = (r32((uint32_t)(0x111969a4)));
  /* 11193e30 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11193e32 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 11193e36 push ecx */
  push32((uint32_t)(ECX));
  /* 11193e37 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 11193e3a push ecx */
  push32((uint32_t)(ECX));
  /* 11193e3b push eax */
  push32((uint32_t)(EAX));
  /* 11193e3c call 0x111948d0 */
  push32(0x11193e41u); f_111948d0();
  /* 11193e41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11193e44 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11193e47 dec dword ptr [0x111969a8] */
  { uint32_t _r=(r32((uint32_t)(0x111969a8)))-1; w32((uint32_t)(0x111969a8), (_r)); fl_dec(_r,32); }
  /* 11193e4d cmp eax, dword ptr [0x111969a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x111969a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193e53 jbe 0x11193e58 */
  if ((C.cf||C.zf)) goto L_11193e58;
  /* 11193e55 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11193e58:;
  /* 11193e58 mov ecx, dword ptr [0x111969ac] */
  ECX = (r32((uint32_t)(0x111969ac)));
  /* 11193e5e mov dword ptr [0x111969a0], ecx */
  w32((uint32_t)(0x111969a0), (ECX));
  /* 11193e64 jmp 0x11193e69 */
  goto L_11193e69;
L_11193e66:;
  /* 11193e66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11193e69:;
  /* 11193e69 mov dword ptr [0x111969a4], eax */
  w32((uint32_t)(0x111969a4), (EAX));
  /* 11193e6e mov dword ptr [0x1119699c], esi */
  w32((uint32_t)(0x1119699c), (ESI));
L_11193e74:;
  /* 11193e74 pop edi */
  EDI = (pop32());
  /* 11193e75 pop esi */
  ESI = (pop32());
  /* 11193e76 pop ebx */
  EBX = (pop32());
  /* 11193e77 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11193e78 ret  */
  ESPCHK(0x11193b4eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003e79 @ 0x11193e79 (777 bytes, 275 insns) */
void f_11193e79(void) {
  FTRACE(0x11193e79u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11193e79 push ebp */
  push32((uint32_t)(EBP));
  /* 11193e7a mov ebp, esp */
  EBP = (ESP);
  /* 11193e7c sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11193e7f mov eax, dword ptr [0x111969a8] */
  EAX = (r32((uint32_t)(0x111969a8)));
  /* 11193e84 mov edx, dword ptr [0x111969ac] */
  EDX = (r32((uint32_t)(0x111969ac)));
  /* 11193e8a push ebx */
  push32((uint32_t)(EBX));
  /* 11193e8b push esi */
  push32((uint32_t)(ESI));
  /* 11193e8c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11193e8f push edi */
  push32((uint32_t)(EDI));
  /* 11193e90 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11193e93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11193e96 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11193e99 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 11193e9c and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11193e9f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11193ea2 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11193ea5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11193ea6 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193ea9 jge 0x11193eb9 */
  if ((C.sf==C.of)) goto L_11193eb9;
  /* 11193eab or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11193eae shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11193eb0 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11193eb4 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11193eb7 jmp 0x11193ec9 */
  goto L_11193ec9;
L_11193eb9:;
  /* 11193eb9 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11193ebc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11193ebf xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11193ec1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11193ec3 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11193ec6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11193ec9:;
  /* 11193ec9 mov eax, dword ptr [0x111969a0] */
  EAX = (r32((uint32_t)(0x111969a0)));
  /* 11193ece mov ebx, eax */
  EBX = (EAX);
  /* 11193ed0 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193ed2 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11193ed5 jae 0x11193ef0 */
  if (!C.cf) goto L_11193ef0;
L_11193ed7:;
  /* 11193ed7 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11193eda mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11193edc and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11193edf and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11193ee1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11193ee3 jne 0x11193ef0 */
  if (!C.zf) goto L_11193ef0;
  /* 11193ee5 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11193ee8 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193eeb mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11193eee jb 0x11193ed7 */
  if (C.cf) goto L_11193ed7;
L_11193ef0:;
  /* 11193ef0 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193ef3 jne 0x11193f6e */
  if (!C.zf) goto L_11193f6e;
  /* 11193ef5 mov ebx, edx */
  EBX = (EDX);
L_11193ef7:;
  /* 11193ef7 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193ef9 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11193efc jae 0x11193f13 */
  if (!C.cf) goto L_11193f13;
  /* 11193efe mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11193f01 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11193f03 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11193f06 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11193f08 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11193f0a jne 0x11193f11 */
  if (!C.zf) goto L_11193f11;
  /* 11193f0c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11193f0f jmp 0x11193ef7 */
  goto L_11193ef7;
L_11193f11:;
  /* 11193f11 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11193f13:;
  /* 11193f13 jne 0x11193f6e */
  if (!C.zf) goto L_11193f6e;
L_11193f15:;
  /* 11193f15 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193f18 jae 0x11193f2b */
  if (!C.cf) goto L_11193f2b;
  /* 11193f1a cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193f1e jne 0x11193f28 */
  if (!C.zf) goto L_11193f28;
  /* 11193f20 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11193f23 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11193f26 jmp 0x11193f15 */
  goto L_11193f15;
L_11193f28:;
  /* 11193f28 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11193f2b:;
  /* 11193f2b jne 0x11193f53 */
  if (!C.zf) goto L_11193f53;
  /* 11193f2d mov ebx, edx */
  EBX = (EDX);
L_11193f2f:;
  /* 11193f2f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193f31 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11193f34 jae 0x11193f43 */
  if (!C.cf) goto L_11193f43;
  /* 11193f36 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193f3a jne 0x11193f41 */
  if (!C.zf) goto L_11193f41;
  /* 11193f3c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11193f3f jmp 0x11193f2f */
  goto L_11193f2f;
L_11193f41:;
  /* 11193f41 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11193f43:;
  /* 11193f43 jne 0x11193f53 */
  if (!C.zf) goto L_11193f53;
  /* 11193f45 call 0x11194182 */
  push32(0x11193f4au); f_11194182();
  /* 11193f4a mov ebx, eax */
  EBX = (EAX);
  /* 11193f4c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11193f4e mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11193f51 je 0x11193f67 */
  if (C.zf) goto L_11193f67;
L_11193f53:;
  /* 11193f53 push ebx */
  push32((uint32_t)(EBX));
  /* 11193f54 call 0x11194233 */
  push32(0x11193f59u); f_11194233();
  /* 11193f59 pop ecx */
  ECX = (pop32());
  /* 11193f5a mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 11193f5d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11193f5f mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11193f62 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193f65 jne 0x11193f6e */
  if (!C.zf) goto L_11193f6e;
L_11193f67:;
  /* 11193f67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11193f69 jmp 0x1119417d */
  goto L_1119417d;
L_11193f6e:;
  /* 11193f6e mov dword ptr [0x111969a0], ebx */
  w32((uint32_t)(0x111969a0), (EBX));
  /* 11193f74 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11193f77 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11193f79 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11193f7c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11193f7f je 0x11193f95 */
  if (C.zf) goto L_11193f95;
  /* 11193f81 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11193f88 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11193f8c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11193f8f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11193f91 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11193f93 jne 0x11193fcc */
  if (!C.zf) goto L_11193fcc;
L_11193f95:;
  /* 11193f95 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 11193f9b mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 11193f9e and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11193fa1 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11193fa4 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11193fa8 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 11193fab or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11193fad mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11193fb0 jne 0x11193fc9 */
  if (!C.zf) goto L_11193fc9;
L_11193fb2:;
  /* 11193fb2 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 11193fb8 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11193fbb and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11193fbe add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11193fc1 mov edi, esi */
  EDI = (ESI);
  /* 11193fc3 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 11193fc5 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 11193fc7 je 0x11193fb2 */
  if (C.zf) goto L_11193fb2;
L_11193fc9:;
  /* 11193fc9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_11193fcc:;
  /* 11193fcc mov ecx, edx */
  ECX = (EDX);
  /* 11193fce xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11193fd0 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11193fd6 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11193fdd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11193fe0 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11193fe4 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11193fe6 jne 0x11193ff5 */
  if (!C.zf) goto L_11193ff5;
  /* 11193fe8 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11193fef push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11193ff1 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11193ff4 pop edi */
  EDI = (pop32());
L_11193ff5:;
  /* 11193ff5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11193ff7 jl 0x11193ffe */
  if ((C.sf!=C.of)) goto L_11193ffe;
  /* 11193ff9 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11193ffb inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11193ffc jmp 0x11193ff5 */
  goto L_11193ff5;
L_11193ffe:;
  /* 11193ffe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11194001 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 11194005 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11194007 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1119400a mov esi, ecx */
  ESI = (ECX);
  /* 1119400c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1119400f sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11194012 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11194013 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11194016 jle 0x1119401b */
  if ((C.zf||C.sf!=C.of)) goto L_1119401b;
  /* 11194018 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1119401a pop esi */
  ESI = (pop32());
L_1119401b:;
  /* 1119401b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1119401d je 0x11194130 */
  if (C.zf) goto L_11194130;
  /* 11194023 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11194026 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11194029 jne 0x1119408c */
  if (!C.zf) goto L_1119408c;
  /* 1119402b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1119402e jge 0x1119405b */
  if ((C.sf==C.of)) goto L_1119405b;
  /* 11194030 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11194035 mov ecx, edi */
  ECX = (EDI);
  /* 11194037 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11194039 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1119403c lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11194040 not ebx */
  EBX = (~(EBX));
  /* 11194042 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11194045 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 11194049 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 1119404d dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1119404f jne 0x11194089 */
  if (!C.zf) goto L_11194089;
  /* 11194051 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11194054 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11194057 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 11194059 jmp 0x1119408c */
  goto L_1119408c;
L_1119405b:;
  /* 1119405b lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 1119405e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11194063 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11194065 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11194068 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 1119406c lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11194073 not ebx */
  EBX = (~(EBX));
  /* 11194075 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11194077 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11194079 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 1119407c jne 0x11194089 */
  if (!C.zf) goto L_11194089;
  /* 1119407e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11194081 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11194084 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11194087 jmp 0x1119408c */
  goto L_1119408c;
L_11194089:;
  /* 11194089 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1119408c:;
  /* 1119408c mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 1119408f mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 11194092 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11194096 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11194099 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1119409c mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 1119409f mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 111940a2 je 0x1119413c */
  if (C.zf) goto L_1119413c;
  /* 111940a8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111940ab mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 111940af lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 111940b2 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 111940b5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 111940b8 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 111940bb mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 111940be mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 111940c1 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 111940c4 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111940c7 jne 0x1119412d */
  if (!C.zf) goto L_1119412d;
  /* 111940c9 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 111940cd cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111940d0 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 111940d3 jge 0x111940fe */
  if ((C.sf==C.of)) goto L_111940fe;
  /* 111940d5 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 111940d7 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111940db mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 111940df jne 0x111940ec */
  if (!C.zf) goto L_111940ec;
  /* 111940e1 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 111940e6 mov ecx, esi */
  ECX = (ESI);
  /* 111940e8 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 111940ea or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_111940ec:;
  /* 111940ec mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 111940f1 mov ecx, esi */
  ECX = (ESI);
  /* 111940f3 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 111940f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111940f8 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 111940fc jmp 0x1119412d */
  goto L_1119412d;
L_111940fe:;
  /* 111940fe inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11194100 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11194104 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11194108 jne 0x11194117 */
  if (!C.zf) goto L_11194117;
  /* 1119410a lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1119410d mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11194112 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11194114 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_11194117:;
  /* 11194117 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1119411a lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11194121 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11194124 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11194129 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1119412b or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1119412d:;
  /* 1119412d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11194130:;
  /* 11194130 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11194132 je 0x1119413f */
  if (C.zf) goto L_1119413f;
  /* 11194134 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11194136 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 1119413a jmp 0x1119413f */
  goto L_1119413f;
L_1119413c:;
  /* 1119413c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1119413f:;
  /* 1119413f mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 11194142 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11194144 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11194147 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11194149 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 1119414d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11194150 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11194152 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11194154 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 11194157 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11194159 jne 0x11194175 */
  if (!C.zf) goto L_11194175;
  /* 1119415b cmp ebx, dword ptr [0x111969a4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x111969a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11194161 jne 0x11194175 */
  if (!C.zf) goto L_11194175;
  /* 11194163 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11194166 cmp ecx, dword ptr [0x1119699c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1119699c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1119416c jne 0x11194175 */
  if (!C.zf) goto L_11194175;
  /* 1119416e and dword ptr [0x111969a4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x111969a4)))&(0x0u); w32((uint32_t)(0x111969a4), (_r)); fl_logic(_r,32); }
L_11194175:;
  /* 11194175 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11194178 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1119417a lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_1119417d:;
  /* 1119417d pop edi */
  EDI = (pop32());
  /* 1119417e pop esi */
  ESI = (pop32());
  /* 1119417f pop ebx */
  EBX = (pop32());
  /* 11194180 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11194181 ret  */
  ESPCHK(0x11193e79u, _esp0);
  ESP += 4; return;
}

/* FUN_10004182 @ 0x11194182 (177 bytes, 53 insns) */
void f_11194182(void) {
  FTRACE(0x11194182u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11194182 mov eax, dword ptr [0x111969a8] */
  EAX = (r32((uint32_t)(0x111969a8)));
  /* 11194187 mov ecx, dword ptr [0x11196998] */
  ECX = (r32((uint32_t)(0x11196998)));
  /* 1119418d push esi */
  push32((uint32_t)(ESI));
  /* 1119418e push edi */
  push32((uint32_t)(EDI));
  /* 1119418f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11194191 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11194193 jne 0x111941c5 */
  if (!C.zf) goto L_111941c5;
  /* 11194195 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 11194199 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1119419c push eax */
  push32((uint32_t)(EAX));
  /* 1119419d push dword ptr [0x111969ac] */
  push32((uint32_t)(r32((uint32_t)(0x111969ac))));
  /* 111941a3 push edi */
  push32((uint32_t)(EDI));
  /* 111941a4 push dword ptr [0x11196be8] */
  push32((uint32_t)(r32((uint32_t)(0x11196be8))));
  /* 111941aa call dword ptr [0x11195028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195028))), 0x111941b0u);
  /* 111941b0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111941b2 je 0x11194215 */
  if (C.zf) goto L_11194215;
  /* 111941b4 add dword ptr [0x11196998], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x11196998))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x11196998), (_r)); fl_add(_a,_b,_r,32); }
  /* 111941bb mov dword ptr [0x111969ac], eax */
  w32((uint32_t)(0x111969ac), (EAX));
  /* 111941c0 mov eax, dword ptr [0x111969a8] */
  EAX = (r32((uint32_t)(0x111969a8)));
L_111941c5:;
  /* 111941c5 mov ecx, dword ptr [0x111969ac] */
  ECX = (r32((uint32_t)(0x111969ac)));
  /* 111941cb push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 111941d0 push 8 */
  push32((uint32_t)(0x8u));
  /* 111941d2 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 111941d5 push dword ptr [0x11196be8] */
  push32((uint32_t)(r32((uint32_t)(0x11196be8))));
  /* 111941db lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 111941de call dword ptr [0x1119503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119503c))), 0x111941e4u);
  /* 111941e4 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111941e6 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 111941e9 je 0x11194215 */
  if (C.zf) goto L_11194215;
  /* 111941eb push 4 */
  push32((uint32_t)(0x4u));
  /* 111941ed push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 111941f2 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 111941f7 push edi */
  push32((uint32_t)(EDI));
  /* 111941f8 call dword ptr [0x1119502c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119502c))), 0x111941feu);
  /* 111941fe cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11194200 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11194203 jne 0x11194219 */
  if (!C.zf) goto L_11194219;
  /* 11194205 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11194208 push edi */
  push32((uint32_t)(EDI));
  /* 11194209 push dword ptr [0x11196be8] */
  push32((uint32_t)(r32((uint32_t)(0x11196be8))));
  /* 1119420f call dword ptr [0x1119504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119504c))), 0x11194215u);
L_11194215:;
  /* 11194215 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11194217 jmp 0x11194230 */
  goto L_11194230;
L_11194219:;
  /* 11194219 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 1119421d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1119421f mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11194222 inc dword ptr [0x111969a8] */
  { uint32_t _r=(r32((uint32_t)(0x111969a8)))+1; w32((uint32_t)(0x111969a8), (_r)); fl_inc(_r,32); }
  /* 11194228 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 1119422b or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1119422e mov eax, esi */
  EAX = (ESI);
L_11194230:;
  /* 11194230 pop edi */
  EDI = (pop32());
  /* 11194231 pop esi */
  ESI = (pop32());
  /* 11194232 ret  */
  ESPCHK(0x11194182u, _esp0);
  ESP += 4; return;
}

/* FUN_10004233 @ 0x11194233 (251 bytes, 85 insns) */
void f_11194233(void) {
  FTRACE(0x11194233u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11194233 push ebp */
  push32((uint32_t)(EBP));
  /* 11194234 mov ebp, esp */
  EBP = (ESP);
  /* 11194236 push ecx */
  push32((uint32_t)(ECX));
  /* 11194237 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1119423a push ebx */
  push32((uint32_t)(EBX));
  /* 1119423b push esi */
  push32((uint32_t)(ESI));
  /* 1119423c push edi */
  push32((uint32_t)(EDI));
  /* 1119423d mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 11194240 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11194243 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11194245:;
  /* 11194245 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11194247 jl 0x1119424e */
  if ((C.sf!=C.of)) goto L_1119424e;
  /* 11194249 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1119424b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1119424c jmp 0x11194245 */
  goto L_11194245;
L_1119424e:;
  /* 1119424e mov eax, ebx */
  EAX = (EBX);
  /* 11194250 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11194252 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11194258 pop edx */
  EDX = (pop32());
  /* 11194259 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 11194260 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11194263:;
  /* 11194263 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 11194266 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 11194269 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1119426c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1119426d jne 0x11194263 */
  if (!C.zf) goto L_11194263;
  /* 1119426f mov edi, ebx */
  EDI = (EBX);
  /* 11194271 push 4 */
  push32((uint32_t)(0x4u));
  /* 11194273 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11194276 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11194279 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1119427e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11194283 push edi */
  push32((uint32_t)(EDI));
  /* 11194284 call dword ptr [0x1119502c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119502c))), 0x1119428au);
  /* 1119428a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1119428c jne 0x11194296 */
  if (!C.zf) goto L_11194296;
  /* 1119428e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11194291 jmp 0x11194329 */
  goto L_11194329;
L_11194296:;
  /* 11194296 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 1119429c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1119429e ja 0x111942dc */
  if ((!C.cf&&!C.zf)) goto L_111942dc;
  /* 111942a0 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_111942a3:;
  /* 111942a3 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 111942a7 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 111942ae lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 111942b4 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 111942bb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 111942bd lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 111942c3 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 111942c6 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 111942d0 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111942d5 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 111942d8 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111942da jbe 0x111942a3 */
  if ((C.cf||C.zf)) goto L_111942a3;
L_111942dc:;
  /* 111942dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111942df lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 111942e2 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111942e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 111942e9 pop edi */
  EDI = (pop32());
  /* 111942ea mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 111942ed mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 111942f0 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 111942f3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 111942f6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 111942f9 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 111942fe mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 11194305 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 11194308 mov cl, al */
  CL = (AL);
  /* 1119430a inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1119430c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1119430e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11194311 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 11194314 jne 0x11194319 */
  if (!C.zf) goto L_11194319;
  /* 11194316 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_11194319:;
  /* 11194319 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1119431e mov ecx, ebx */
  ECX = (EBX);
  /* 11194320 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11194322 not edx */
  EDX = (~(EDX));
  /* 11194324 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11194327 mov eax, ebx */
  EAX = (EBX);
L_11194329:;
  /* 11194329 pop edi */
  EDI = (pop32());
  /* 1119432a pop esi */
  ESI = (pop32());
  /* 1119432b pop ebx */
  EBX = (pop32());
  /* 1119432c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1119432d ret  */
  ESPCHK(0x11194233u, _esp0);
  ESP += 4; return;
}

/* FUN_1000432e @ 0x1119432e (137 bytes, 50 insns) */
void f_1119432e(void) {
  FTRACE(0x1119432eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1119432e push ebx */
  push32((uint32_t)(EBX));
  /* 1119432f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11194331 cmp dword ptr [0x1119695c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1119695c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11194337 push esi */
  push32((uint32_t)(ESI));
  /* 11194338 push edi */
  push32((uint32_t)(EDI));
  /* 11194339 jne 0x1119437d */
  if (!C.zf) goto L_1119437d;
  /* 1119433b push 0x11195478 */
  push32((uint32_t)(0x11195478u));
  /* 11194340 call dword ptr [0x1119501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119501c))), 0x11194346u);
  /* 11194346 mov edi, eax */
  EDI = (EAX);
  /* 11194348 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1119434a je 0x111943b3 */
  if (C.zf) goto L_111943b3;
  /* 1119434c mov esi, dword ptr [0x11195020] */
  ESI = (r32((uint32_t)(0x11195020)));
  /* 11194352 push 0x1119546c */
  push32((uint32_t)(0x1119546cu));
  /* 11194357 push edi */
  push32((uint32_t)(EDI));
  /* 11194358 call esi */
  call_ind((uint32_t)(ESI), 0x1119435au);
  /* 1119435a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1119435c mov dword ptr [0x1119695c], eax */
  w32((uint32_t)(0x1119695c), (EAX));
  /* 11194361 je 0x111943b3 */
  if (C.zf) goto L_111943b3;
  /* 11194363 push 0x1119545c */
  push32((uint32_t)(0x1119545cu));
  /* 11194368 push edi */
  push32((uint32_t)(EDI));
  /* 11194369 call esi */
  call_ind((uint32_t)(ESI), 0x1119436bu);
  /* 1119436b push 0x11195448 */
  push32((uint32_t)(0x11195448u));
  /* 11194370 push edi */
  push32((uint32_t)(EDI));
  /* 11194371 mov dword ptr [0x11196960], eax */
  w32((uint32_t)(0x11196960), (EAX));
  /* 11194376 call esi */
  call_ind((uint32_t)(ESI), 0x11194378u);
  /* 11194378 mov dword ptr [0x11196964], eax */
  w32((uint32_t)(0x11196964), (EAX));
L_1119437d:;
  /* 1119437d mov eax, dword ptr [0x11196960] */
  EAX = (r32((uint32_t)(0x11196960)));
  /* 11194382 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11194384 je 0x1119439c */
  if (C.zf) goto L_1119439c;
  /* 11194386 call eax */
  call_ind((uint32_t)(EAX), 0x11194388u);
  /* 11194388 mov ebx, eax */
  EBX = (EAX);
  /* 1119438a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1119438c je 0x1119439c */
  if (C.zf) goto L_1119439c;
  /* 1119438e mov eax, dword ptr [0x11196964] */
  EAX = (r32((uint32_t)(0x11196964)));
  /* 11194393 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11194395 je 0x1119439c */
  if (C.zf) goto L_1119439c;
  /* 11194397 push ebx */
  push32((uint32_t)(EBX));
  /* 11194398 call eax */
  call_ind((uint32_t)(EAX), 0x1119439au);
  /* 1119439a mov ebx, eax */
  EBX = (EAX);
L_1119439c:;
  /* 1119439c push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 111943a0 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 111943a4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 111943a8 push ebx */
  push32((uint32_t)(EBX));
  /* 111943a9 call dword ptr [0x1119695c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119695c))), 0x111943afu);
L_111943af:;
  /* 111943af pop edi */
  EDI = (pop32());
  /* 111943b0 pop esi */
  ESI = (pop32());
  /* 111943b1 pop ebx */
  EBX = (pop32());
  /* 111943b2 ret  */
  ESPCHK(0x1119432eu, _esp0);
  ESP += 4; return;
L_111943b3:;
  /* 111943b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111943b5 jmp 0x111943af */
  goto L_111943af;
}

/* _strncpy @ 0x111943c0 (254 bytes, 109 insns) */
void f_111943c0(void) {
  FTRACE(0x111943c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111943c0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 111943c4 push edi */
  push32((uint32_t)(EDI));
  /* 111943c5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111943c7 je 0x11194443 */
  if (C.zf) goto L_11194443;
  /* 111943c9 push esi */
  push32((uint32_t)(ESI));
  /* 111943ca push ebx */
  push32((uint32_t)(EBX));
  /* 111943cb mov ebx, ecx */
  EBX = (ECX);
  /* 111943cd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 111943d1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 111943d7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 111943db jne 0x111943e4 */
  if (!C.zf) goto L_111943e4;
  /* 111943dd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111943e0 jne 0x11194451 */
  if (!C.zf) goto L_11194451;
  /* 111943e2 jmp 0x11194405 */
  goto L_11194405;
L_111943e4:;
  /* 111943e4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111943e6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111943e7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111943e9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 111943ea dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 111943eb je 0x11194412 */
  if (C.zf) goto L_11194412;
  /* 111943ed test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111943ef je 0x1119441a */
  if (C.zf) goto L_1119441a;
  /* 111943f1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 111943f7 jne 0x111943e4 */
  if (!C.zf) goto L_111943e4;
  /* 111943f9 mov ebx, ecx */
  EBX = (ECX);
  /* 111943fb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111943fe jne 0x11194451 */
  if (!C.zf) goto L_11194451;
L_11194400:;
  /* 11194400 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11194403 je 0x11194412 */
  if (C.zf) goto L_11194412;
L_11194405:;
  /* 11194405 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11194407 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11194408 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1119440a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1119440b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1119440d je 0x1119443e */
  if (C.zf) goto L_1119443e;
  /* 1119440f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11194410 jne 0x11194405 */
  if (!C.zf) goto L_11194405;
L_11194412:;
  /* 11194412 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11194416 pop ebx */
  EBX = (pop32());
  /* 11194417 pop esi */
  ESI = (pop32());
  /* 11194418 pop edi */
  EDI = (pop32());
  /* 11194419 ret  */
  ESPCHK(0x111943c0u, _esp0);
  ESP += 4; return;
L_1119441a:;
  /* 1119441a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11194420 je 0x11194434 */
  if (C.zf) goto L_11194434;
L_11194422:;
  /* 11194422 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11194424 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11194425 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11194426 je 0x111944b6 */
  if (C.zf) goto L_111944b6;
  /* 1119442c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11194432 jne 0x11194422 */
  if (!C.zf) goto L_11194422;
L_11194434:;
  /* 11194434 mov ebx, ecx */
  EBX = (ECX);
  /* 11194436 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11194439 jne 0x111944a7 */
  if (!C.zf) goto L_111944a7;
L_1119443b:;
  /* 1119443b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1119443d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1119443e:;
  /* 1119443e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1119443f jne 0x1119443b */
  if (!C.zf) goto L_1119443b;
  /* 11194441 pop ebx */
  EBX = (pop32());
  /* 11194442 pop esi */
  ESI = (pop32());
L_11194443:;
  /* 11194443 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11194447 pop edi */
  EDI = (pop32());
  /* 11194448 ret  */
  ESPCHK(0x111943c0u, _esp0);
  ESP += 4; return;
L_11194449:;
  /* 11194449 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1119444b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1119444e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1119444f je 0x11194400 */
  if (C.zf) goto L_11194400;
L_11194451:;
  /* 11194451 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11194456 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11194458 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1119445a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1119445d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1119445f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11194461 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11194464 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11194469 je 0x11194449 */
  if (C.zf) goto L_11194449;
  /* 1119446b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1119446d je 0x1119449b */
  if (C.zf) goto L_1119449b;
  /* 1119446f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11194471 je 0x11194491 */
  if (C.zf) goto L_11194491;
  /* 11194473 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11194479 je 0x11194487 */
  if (C.zf) goto L_11194487;
  /* 1119447b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11194481 jne 0x11194449 */
  if (!C.zf) goto L_11194449;
  /* 11194483 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11194485 jmp 0x1119449f */
  goto L_1119449f;
L_11194487:;
  /* 11194487 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1119448d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1119448f jmp 0x1119449f */
  goto L_1119449f;
L_11194491:;
  /* 11194491 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11194497 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11194499 jmp 0x1119449f */
  goto L_1119449f;
L_1119449b:;
  /* 1119449b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1119449d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1119449f:;
  /* 1119449f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 111944a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111944a4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 111944a5 je 0x111944b1 */
  if (C.zf) goto L_111944b1;
L_111944a7:;
  /* 111944a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111944a9:;
  /* 111944a9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 111944ab add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 111944ae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 111944af jne 0x111944a9 */
  if (!C.zf) goto L_111944a9;
L_111944b1:;
  /* 111944b1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 111944b4 jne 0x1119443b */
  if (!C.zf) goto L_1119443b;
L_111944b6:;
  /* 111944b6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 111944ba pop ebx */
  EBX = (pop32());
  /* 111944bb pop esi */
  ESI = (pop32());
  /* 111944bc pop edi */
  EDI = (pop32());
  /* 111944bd ret  */
  ESPCHK(0x111943c0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x111944c0 (88 bytes, 40 insns) */
void f_111944c0(void) {
  FTRACE(0x111944c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111944c0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 111944c4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 111944c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111944ca je 0x11194513 */
  if (C.zf) goto L_11194513;
  /* 111944cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111944ce mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 111944d2 push edi */
  push32((uint32_t)(EDI));
  /* 111944d3 mov edi, ecx */
  EDI = (ECX);
  /* 111944d5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111944d8 jb 0x11194507 */
  if (C.cf) goto L_11194507;
  /* 111944da neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 111944dc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 111944df je 0x111944e9 */
  if (C.zf) goto L_111944e9;
  /* 111944e1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_111944e3:;
  /* 111944e3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111944e5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 111944e6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 111944e7 jne 0x111944e3 */
  if (!C.zf) goto L_111944e3;
L_111944e9:;
  /* 111944e9 mov ecx, eax */
  ECX = (EAX);
  /* 111944eb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 111944ee add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111944f0 mov ecx, eax */
  ECX = (EAX);
  /* 111944f2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 111944f5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111944f7 mov ecx, edx */
  ECX = (EDX);
  /* 111944f9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 111944fc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111944ff je 0x11194507 */
  if (C.zf) goto L_11194507;
  /* 11194501 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11194503 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11194505 je 0x1119450d */
  if (C.zf) goto L_1119450d;
L_11194507:;
  /* 11194507 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11194509 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1119450a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1119450b jne 0x11194507 */
  if (!C.zf) goto L_11194507;
L_1119450d:;
  /* 1119450d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11194511 pop edi */
  EDI = (pop32());
  /* 11194512 ret  */
  ESPCHK(0x111944c0u, _esp0);
  ESP += 4; return;
L_11194513:;
  /* 11194513 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11194517 ret  */
  ESPCHK(0x111944c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004518 @ 0x11194518 (27 bytes, 13 insns) */
void f_11194518(void) {
  FTRACE(0x11194518u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11194518 mov eax, dword ptr [0x11196968] */
  EAX = (r32((uint32_t)(0x11196968)));
  /* 1119451d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1119451f je 0x11194530 */
  if (C.zf) goto L_11194530;
  /* 11194521 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11194525 call eax */
  call_ind((uint32_t)(EAX), 0x11194527u);
  /* 11194527 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11194529 pop ecx */
  ECX = (pop32());
  /* 1119452a je 0x11194530 */
  if (C.zf) goto L_11194530;
  /* 1119452c push 1 */
  push32((uint32_t)(0x1u));
  /* 1119452e pop eax */
  EAX = (pop32());
  /* 1119452f ret  */
  ESPCHK(0x11194518u, _esp0);
  ESP += 4; return;
L_11194530:;
  /* 11194530 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11194532 ret  */
  ESPCHK(0x11194518u, _esp0);
  ESP += 4; return;
}

/* FUN_10004533 @ 0x11194533 (511 bytes, 193 insns) */
void f_11194533(void) {
  FTRACE(0x11194533u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11194533 push ebp */
  push32((uint32_t)(EBP));
  /* 11194534 mov ebp, esp */
  EBP = (ESP);
  /* 11194536 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11194538 push 0x11195490 */
  push32((uint32_t)(0x11195490u));
  /* 1119453d push 0x11194d00 */
  push32((uint32_t)(0x11194d00u));
  /* 11194542 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11194548 push eax */
  push32((uint32_t)(EAX));
  /* 11194549 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11194550 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11194553 push ebx */
  push32((uint32_t)(EBX));
  /* 11194554 push esi */
  push32((uint32_t)(ESI));
  /* 11194555 push edi */
  push32((uint32_t)(EDI));
  /* 11194556 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11194559 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1119455b cmp dword ptr [0x11196990], edi */
  { uint32_t _a=(r32((uint32_t)(0x11196990))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11194561 jne 0x111945a9 */
  if (!C.zf) goto L_111945a9;
  /* 11194563 push edi */
  push32((uint32_t)(EDI));
  /* 11194564 push edi */
  push32((uint32_t)(EDI));
  /* 11194565 push 1 */
  push32((uint32_t)(0x1u));
  /* 11194567 pop ebx */
  EBX = (pop32());
  /* 11194568 push ebx */
  push32((uint32_t)(EBX));
  /* 11194569 push 0x11195488 */
  push32((uint32_t)(0x11195488u));
  /* 1119456e mov esi, 0x100 */
  ESI = (0x100u);
  /* 11194573 push esi */
  push32((uint32_t)(ESI));
  /* 11194574 push edi */
  push32((uint32_t)(EDI));
  /* 11194575 call dword ptr [0x11195010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195010))), 0x1119457bu);
  /* 1119457b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1119457d je 0x11194587 */
  if (C.zf) goto L_11194587;
  /* 1119457f mov dword ptr [0x11196990], ebx */
  w32((uint32_t)(0x11196990), (EBX));
  /* 11194585 jmp 0x111945a9 */
  goto L_111945a9;
L_11194587:;
  /* 11194587 push edi */
  push32((uint32_t)(EDI));
  /* 11194588 push edi */
  push32((uint32_t)(EDI));
  /* 11194589 push ebx */
  push32((uint32_t)(EBX));
  /* 1119458a push 0x11195484 */
  push32((uint32_t)(0x11195484u));
  /* 1119458f push esi */
  push32((uint32_t)(ESI));
  /* 11194590 push edi */
  push32((uint32_t)(EDI));
  /* 11194591 call dword ptr [0x11195014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195014))), 0x11194597u);
  /* 11194597 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11194599 je 0x111946c1 */
  if (C.zf) goto L_111946c1;
  /* 1119459f mov dword ptr [0x11196990], 2 */
  w32((uint32_t)(0x11196990), (0x2u));
L_111945a9:;
  /* 111945a9 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111945ac jle 0x111945be */
  if ((C.zf||C.sf!=C.of)) goto L_111945be;
  /* 111945ae push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 111945b1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 111945b4 call 0x11194757 */
  push32(0x111945b9u); f_11194757();
  /* 111945b9 pop ecx */
  ECX = (pop32());
  /* 111945ba pop ecx */
  ECX = (pop32());
  /* 111945bb mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_111945be:;
  /* 111945be mov eax, dword ptr [0x11196990] */
  EAX = (r32((uint32_t)(0x11196990)));
  /* 111945c3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111945c6 jne 0x111945e5 */
  if (!C.zf) goto L_111945e5;
  /* 111945c8 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 111945cb push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 111945ce push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 111945d1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 111945d4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 111945d7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 111945da call dword ptr [0x11195014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195014))), 0x111945e0u);
  /* 111945e0 jmp 0x111946c3 */
  goto L_111946c3;
L_111945e5:;
  /* 111945e5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111945e8 jne 0x111946c1 */
  if (!C.zf) goto L_111946c1;
  /* 111945ee cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111945f1 jne 0x111945fb */
  if (!C.zf) goto L_111945fb;
  /* 111945f3 mov eax, dword ptr [0x11196988] */
  EAX = (r32((uint32_t)(0x11196988)));
  /* 111945f8 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_111945fb:;
  /* 111945fb push edi */
  push32((uint32_t)(EDI));
  /* 111945fc push edi */
  push32((uint32_t)(EDI));
  /* 111945fd push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11194600 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11194603 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11194606 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11194608 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1119460a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1119460d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1119460e push eax */
  push32((uint32_t)(EAX));
  /* 1119460f push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11194612 call dword ptr [0x11195024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195024))), 0x11194618u);
  /* 11194618 mov ebx, eax */
  EBX = (EAX);
  /* 1119461a mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 1119461d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1119461f je 0x111946c1 */
  if (C.zf) goto L_111946c1;
  /* 11194625 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11194628 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 1119462b add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1119462e and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11194630 call 0x11194de0 */
  push32(0x11194635u); f_11194de0();
  /* 11194635 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11194638 mov eax, esp */
  EAX = (ESP);
  /* 1119463a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1119463d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11194641 jmp 0x11194656 */
  goto L_11194656;
  /* 11194643 push 1 */
  push32((uint32_t)(0x1u));
  /* 11194645 pop eax */
  EAX = (pop32());
  /* 11194646 ret  */
  ESPCHK(0x11194533u, _esp0);
  ESP += 4; return;
  /* 11194647 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1119464a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1119464c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 1119464f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11194653 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_11194656:;
  /* 11194656 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11194659 je 0x111946c1 */
  if (C.zf) goto L_111946c1;
  /* 1119465b push ebx */
  push32((uint32_t)(EBX));
  /* 1119465c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1119465f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11194662 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11194665 push 1 */
  push32((uint32_t)(0x1u));
  /* 11194667 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1119466a call dword ptr [0x11195024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195024))), 0x11194670u);
  /* 11194670 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11194672 je 0x111946c1 */
  if (C.zf) goto L_111946c1;
  /* 11194674 push edi */
  push32((uint32_t)(EDI));
  /* 11194675 push edi */
  push32((uint32_t)(EDI));
  /* 11194676 push ebx */
  push32((uint32_t)(EBX));
  /* 11194677 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1119467a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1119467d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11194680 call dword ptr [0x11195010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195010))), 0x11194686u);
  /* 11194686 mov esi, eax */
  ESI = (EAX);
  /* 11194688 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 1119468b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1119468d je 0x111946c1 */
  if (C.zf) goto L_111946c1;
  /* 1119468f test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 11194693 je 0x111946d5 */
  if (C.zf) goto L_111946d5;
  /* 11194695 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11194698 je 0x11194750 */
  if (C.zf) goto L_11194750;
  /* 1119469e cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111946a1 jg 0x111946c1 */
  if ((!C.zf&&C.sf==C.of)) goto L_111946c1;
  /* 111946a3 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 111946a6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 111946a9 push ebx */
  push32((uint32_t)(EBX));
  /* 111946aa push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 111946ad push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 111946b0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 111946b3 call dword ptr [0x11195010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195010))), 0x111946b9u);
  /* 111946b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111946bb jne 0x11194750 */
  if (!C.zf) goto L_11194750;
L_111946c1:;
  /* 111946c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111946c3:;
  /* 111946c3 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 111946c6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111946c9 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 111946d0 pop edi */
  EDI = (pop32());
  /* 111946d1 pop esi */
  ESI = (pop32());
  /* 111946d2 pop ebx */
  EBX = (pop32());
  /* 111946d3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111946d4 ret  */
  ESPCHK(0x11194533u, _esp0);
  ESP += 4; return;
L_111946d5:;
  /* 111946d5 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 111946dc lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 111946df add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111946e2 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 111946e4 call 0x11194de0 */
  push32(0x111946e9u); f_11194de0();
  /* 111946e9 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 111946ec mov ebx, esp */
  EBX = (ESP);
  /* 111946ee mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 111946f1 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 111946f5 jmp 0x11194709 */
  goto L_11194709;
  /* 111946f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 111946f9 pop eax */
  EAX = (pop32());
  /* 111946fa ret  */
  ESPCHK(0x11194533u, _esp0);
  ESP += 4; return;
  /* 111946fb mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 111946fe xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11194700 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11194702 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11194706 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_11194709:;
  /* 11194709 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1119470b je 0x111946c1 */
  if (C.zf) goto L_111946c1;
  /* 1119470d push esi */
  push32((uint32_t)(ESI));
  /* 1119470e push ebx */
  push32((uint32_t)(EBX));
  /* 1119470f push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11194712 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11194715 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11194718 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1119471b call dword ptr [0x11195010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195010))), 0x11194721u);
  /* 11194721 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11194723 je 0x111946c1 */
  if (C.zf) goto L_111946c1;
  /* 11194725 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11194728 push edi */
  push32((uint32_t)(EDI));
  /* 11194729 push edi */
  push32((uint32_t)(EDI));
  /* 1119472a jne 0x11194730 */
  if (!C.zf) goto L_11194730;
  /* 1119472c push edi */
  push32((uint32_t)(EDI));
  /* 1119472d push edi */
  push32((uint32_t)(EDI));
  /* 1119472e jmp 0x11194736 */
  goto L_11194736;
L_11194730:;
  /* 11194730 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11194733 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_11194736:;
  /* 11194736 push esi */
  push32((uint32_t)(ESI));
  /* 11194737 push ebx */
  push32((uint32_t)(EBX));
  /* 11194738 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1119473d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11194740 call dword ptr [0x11195064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195064))), 0x11194746u);
  /* 11194746 mov esi, eax */
  ESI = (EAX);
  /* 11194748 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1119474a je 0x111946c1 */
  if (C.zf) goto L_111946c1;
L_11194750:;
  /* 11194750 mov eax, esi */
  EAX = (ESI);
  /* 11194752 jmp 0x111946c3 */
  goto L_111946c3;
}

/* FUN_10004757 @ 0x11194757 (43 bytes, 20 insns) */
void f_11194757(void) {
  FTRACE(0x11194757u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11194757 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1119475b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1119475f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11194761 push esi */
  push32((uint32_t)(ESI));
  /* 11194762 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 11194765 je 0x11194774 */
  if (C.zf) goto L_11194774;
L_11194767:;
  /* 11194767 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1119476a je 0x11194774 */
  if (C.zf) goto L_11194774;
  /* 1119476c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1119476d mov esi, ecx */
  ESI = (ECX);
  /* 1119476f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11194770 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11194772 jne 0x11194767 */
  if (!C.zf) goto L_11194767;
L_11194774:;
  /* 11194774 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11194777 pop esi */
  ESI = (pop32());
  /* 11194778 jne 0x1119477f */
  if (!C.zf) goto L_1119477f;
  /* 1119477a sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1119477e ret  */
  ESPCHK(0x11194757u, _esp0);
  ESP += 4; return;
L_1119477f:;
  /* 1119477f mov eax, edx */
  EAX = (EDX);
  /* 11194781 ret  */
  ESPCHK(0x11194757u, _esp0);
  ESP += 4; return;
}

/* FUN_10004782 @ 0x11194782 (318 bytes, 123 insns) */
void f_11194782(void) {
  FTRACE(0x11194782u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11194782 push ebp */
  push32((uint32_t)(EBP));
  /* 11194783 mov ebp, esp */
  EBP = (ESP);
  /* 11194785 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11194787 push 0x111954a8 */
  push32((uint32_t)(0x111954a8u));
  /* 1119478c push 0x11194d00 */
  push32((uint32_t)(0x11194d00u));
  /* 11194791 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11194797 push eax */
  push32((uint32_t)(EAX));
  /* 11194798 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1119479f sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111947a2 push ebx */
  push32((uint32_t)(EBX));
  /* 111947a3 push esi */
  push32((uint32_t)(ESI));
  /* 111947a4 push edi */
  push32((uint32_t)(EDI));
  /* 111947a5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 111947a8 mov eax, dword ptr [0x11196994] */
  EAX = (r32((uint32_t)(0x11196994)));
  /* 111947ad xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 111947af cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111947b1 jne 0x111947f1 */
  if (!C.zf) goto L_111947f1;
  /* 111947b3 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 111947b6 push eax */
  push32((uint32_t)(EAX));
  /* 111947b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 111947b9 pop esi */
  ESI = (pop32());
  /* 111947ba push esi */
  push32((uint32_t)(ESI));
  /* 111947bb push 0x11195488 */
  push32((uint32_t)(0x11195488u));
  /* 111947c0 push esi */
  push32((uint32_t)(ESI));
  /* 111947c1 call dword ptr [0x1119500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119500c))), 0x111947c7u);
  /* 111947c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111947c9 je 0x111947cf */
  if (C.zf) goto L_111947cf;
  /* 111947cb mov eax, esi */
  EAX = (ESI);
  /* 111947cd jmp 0x111947ec */
  goto L_111947ec;
L_111947cf:;
  /* 111947cf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 111947d2 push eax */
  push32((uint32_t)(EAX));
  /* 111947d3 push esi */
  push32((uint32_t)(ESI));
  /* 111947d4 push 0x11195484 */
  push32((uint32_t)(0x11195484u));
  /* 111947d9 push esi */
  push32((uint32_t)(ESI));
  /* 111947da push ebx */
  push32((uint32_t)(EBX));
  /* 111947db call dword ptr [0x11195018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195018))), 0x111947e1u);
  /* 111947e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111947e3 je 0x111948b7 */
  if (C.zf) goto L_111948b7;
  /* 111947e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 111947eb pop eax */
  EAX = (pop32());
L_111947ec:;
  /* 111947ec mov dword ptr [0x11196994], eax */
  w32((uint32_t)(0x11196994), (EAX));
L_111947f1:;
  /* 111947f1 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111947f4 jne 0x1119481a */
  if (!C.zf) goto L_1119481a;
  /* 111947f6 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 111947f9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111947fb jne 0x11194802 */
  if (!C.zf) goto L_11194802;
  /* 111947fd mov eax, dword ptr [0x11196978] */
  EAX = (r32((uint32_t)(0x11196978)));
L_11194802:;
  /* 11194802 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11194805 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11194808 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1119480b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1119480e push eax */
  push32((uint32_t)(EAX));
  /* 1119480f call dword ptr [0x11195018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195018))), 0x11194815u);
  /* 11194815 jmp 0x111948b9 */
  goto L_111948b9;
L_1119481a:;
  /* 1119481a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1119481d jne 0x111948b7 */
  if (!C.zf) goto L_111948b7;
  /* 11194823 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11194826 jne 0x11194830 */
  if (!C.zf) goto L_11194830;
  /* 11194828 mov eax, dword ptr [0x11196988] */
  EAX = (r32((uint32_t)(0x11196988)));
  /* 1119482d mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11194830:;
  /* 11194830 push ebx */
  push32((uint32_t)(EBX));
  /* 11194831 push ebx */
  push32((uint32_t)(EBX));
  /* 11194832 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11194835 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11194838 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1119483b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1119483d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1119483f and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11194842 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11194843 push eax */
  push32((uint32_t)(EAX));
  /* 11194844 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11194847 call dword ptr [0x11195024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195024))), 0x1119484du);
  /* 1119484d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11194850 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11194852 je 0x111948b7 */
  if (C.zf) goto L_111948b7;
  /* 11194854 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11194857 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 1119485a mov eax, edi */
  EAX = (EDI);
  /* 1119485c add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1119485f and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11194861 call 0x11194de0 */
  push32(0x11194866u); f_11194de0();
  /* 11194866 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11194869 mov esi, esp */
  ESI = (ESP);
  /* 1119486b mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 1119486e push edi */
  push32((uint32_t)(EDI));
  /* 1119486f push ebx */
  push32((uint32_t)(EBX));
  /* 11194870 push esi */
  push32((uint32_t)(ESI));
  /* 11194871 call 0x111944c0 */
  push32(0x11194876u); f_111944c0();
  /* 11194876 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11194879 jmp 0x11194886 */
  goto L_11194886;
  /* 1119487b push 1 */
  push32((uint32_t)(0x1u));
  /* 1119487d pop eax */
  EAX = (pop32());
  /* 1119487e ret  */
  ESPCHK(0x11194782u, _esp0);
  ESP += 4; return;
  /* 1119487f mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11194882 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11194884 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11194886:;
  /* 11194886 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1119488a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1119488c je 0x111948b7 */
  if (C.zf) goto L_111948b7;
  /* 1119488e push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11194891 push esi */
  push32((uint32_t)(ESI));
  /* 11194892 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11194895 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11194898 push 1 */
  push32((uint32_t)(0x1u));
  /* 1119489a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1119489d call dword ptr [0x11195024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11195024))), 0x111948a3u);
  /* 111948a3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111948a5 je 0x111948b7 */
  if (C.zf) goto L_111948b7;
  /* 111948a7 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 111948aa push eax */
  push32((uint32_t)(EAX));
  /* 111948ab push esi */
  push32((uint32_t)(ESI));
  /* 111948ac push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 111948af call dword ptr [0x1119500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1119500c))), 0x111948b5u);
  /* 111948b5 jmp 0x111948b9 */
  goto L_111948b9;
L_111948b7:;
  /* 111948b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111948b9:;
  /* 111948b9 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 111948bc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111948bf mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 111948c6 pop edi */
  EDI = (pop32());
  /* 111948c7 pop esi */
  ESI = (pop32());
  /* 111948c8 pop ebx */
  EBX = (pop32());
  /* 111948c9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111948ca ret  */
  ESPCHK(0x11194782u, _esp0);
  ESP += 4; return;
}

/* FUN_100048d0 @ 0x111948d0 (664 bytes, 263 insns) [15 switch table(s)] */
void f_111948d0(void) {
  FTRACE(0x111948d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111948d0 push ebp */
  push32((uint32_t)(EBP));
  /* 111948d1 mov ebp, esp */
  EBP = (ESP);
  /* 111948d3 push edi */
  push32((uint32_t)(EDI));
  /* 111948d4 push esi */
  push32((uint32_t)(ESI));
  /* 111948d5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 111948d8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111948db mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 111948de mov eax, ecx */
  EAX = (ECX);
  /* 111948e0 mov edx, ecx */
  EDX = (ECX);
  /* 111948e2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111948e4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111948e6 jbe 0x111948f0 */
  if ((C.cf||C.zf)) goto L_111948f0;
  /* 111948e8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111948ea jb 0x11194a68 */
  if (C.cf) goto L_11194a68;
L_111948f0:;
  /* 111948f0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 111948f6 jne 0x1119490c */
  if (!C.zf) goto L_1119490c;
  /* 111948f8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111948fb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 111948fe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11194901 jb 0x1119492c */
  if (C.cf) goto L_1119492c;
  /* 11194903 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11194905 jmp dword ptr [edx*4 + 0x11194a18] */
  switch (EDX) {
    case 0: goto L_11194a28;
    case 1: goto L_11194a30;
    case 2: goto L_11194a3c;
    case 3: goto L_11194a50;
    default: x86_unimpl("switch@0x11194905 out of table"); return;
  }
L_1119490c:;
  /* 1119490c mov eax, edi */
  EAX = (EDI);
  /* 1119490e mov edx, 3 */
  EDX = (0x3u);
  /* 11194913 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11194916 jb 0x11194924 */
  if (C.cf) goto L_11194924;
  /* 11194918 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1119491b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1119491d jmp dword ptr [eax*4 + 0x11194930] */
  switch (EAX) {
    case 1: goto L_11194940;
    case 2: goto L_1119496c;
    case 3: goto L_11194990;
    default: x86_unimpl("switch@0x1119491d out of table"); return;
  }
L_11194924:;
  /* 11194924 jmp dword ptr [ecx*4 + 0x11194a28] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11194a28)))); return;
  /* 1119492b nop  */
  /* nop */
L_1119492c:;
  /* 1119492c jmp dword ptr [ecx*4 + 0x111949ac] */
  switch (ECX) {
    case 0: goto L_11194a0f;
    case 1: goto L_111949fc;
    case 2: goto L_111949f4;
    case 3: goto L_111949ec;
    case 4: goto L_111949e4;
    case 5: goto L_111949dc;
    case 6: goto L_111949d4;
    case 7: goto L_111949cc;
    default: x86_unimpl("switch@0x1119492c out of table"); return;
  }
  /* 11194933 nop  */
  /* nop */
L_11194940:;
  /* 11194940 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11194942 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11194944 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11194946 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11194949 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1119494c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1119494f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11194952 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11194955 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11194958 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1119495b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1119495e jb 0x1119492c */
  if (C.cf) goto L_1119492c;
  /* 11194960 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11194962 jmp dword ptr [edx*4 + 0x11194a18] */
  switch (EDX) {
    case 0: goto L_11194a28;
    case 1: goto L_11194a30;
    case 2: goto L_11194a3c;
    case 3: goto L_11194a50;
    default: x86_unimpl("switch@0x11194962 out of table"); return;
  }
  /* 11194969 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1119496c:;
  /* 1119496c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1119496e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11194970 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11194972 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11194975 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11194978 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1119497b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1119497e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11194981 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11194984 jb 0x1119492c */
  if (C.cf) goto L_1119492c;
  /* 11194986 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11194988 jmp dword ptr [edx*4 + 0x11194a18] */
  switch (EDX) {
    case 0: goto L_11194a28;
    case 1: goto L_11194a30;
    case 2: goto L_11194a3c;
    case 3: goto L_11194a50;
    default: x86_unimpl("switch@0x11194988 out of table"); return;
  }
  /* 1119498f nop  */
  /* nop */
L_11194990:;
  /* 11194990 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11194992 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11194994 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11194996 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11194997 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1119499a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1119499b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1119499e jb 0x1119492c */
  if (C.cf) goto L_1119492c;
  /* 111949a0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111949a2 jmp dword ptr [edx*4 + 0x11194a18] */
  switch (EDX) {
    case 0: goto L_11194a28;
    case 1: goto L_11194a30;
    case 2: goto L_11194a3c;
    case 3: goto L_11194a50;
    default: x86_unimpl("switch@0x111949a2 out of table"); return;
  }
  /* 111949a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111949cc:;
  /* 111949cc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 111949d0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_111949d4:;
  /* 111949d4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 111949d8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_111949dc:;
  /* 111949dc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 111949e0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_111949e4:;
  /* 111949e4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 111949e8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_111949ec:;
  /* 111949ec mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 111949f0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_111949f4:;
  /* 111949f4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 111949f8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_111949fc:;
  /* 111949fc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11194a00 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11194a04 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11194a0b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11194a0d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11194a0f:;
  /* 11194a0f jmp dword ptr [edx*4 + 0x11194a18] */
  switch (EDX) {
    case 0: goto L_11194a28;
    case 1: goto L_11194a30;
    case 2: goto L_11194a3c;
    case 3: goto L_11194a50;
    default: x86_unimpl("switch@0x11194a0f out of table"); return;
  }
  /* 11194a16 mov edi, edi */
  EDI = (EDI);
L_11194a28:;
  /* 11194a28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11194a2b pop esi */
  ESI = (pop32());
  /* 11194a2c pop edi */
  EDI = (pop32());
  /* 11194a2d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11194a2e ret  */
  ESPCHK(0x111948d0u, _esp0);
  ESP += 4; return;
  /* 11194a2f nop  */
  /* nop */
L_11194a30:;
  /* 11194a30 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11194a32 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11194a34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11194a37 pop esi */
  ESI = (pop32());
  /* 11194a38 pop edi */
  EDI = (pop32());
  /* 11194a39 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11194a3a ret  */
  ESPCHK(0x111948d0u, _esp0);
  ESP += 4; return;
  /* 11194a3b nop  */
  /* nop */
L_11194a3c:;
  /* 11194a3c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11194a3e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11194a40 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11194a43 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11194a46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11194a49 pop esi */
  ESI = (pop32());
  /* 11194a4a pop edi */
  EDI = (pop32());
  /* 11194a4b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11194a4c ret  */
  ESPCHK(0x111948d0u, _esp0);
  ESP += 4; return;
  /* 11194a4d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11194a50:;
  /* 11194a50 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11194a52 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11194a54 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11194a57 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11194a5a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11194a5d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11194a60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11194a63 pop esi */
  ESI = (pop32());
  /* 11194a64 pop edi */
  EDI = (pop32());
  /* 11194a65 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11194a66 ret  */
  ESPCHK(0x111948d0u, _esp0);
  ESP += 4; return;
  /* 11194a67 nop  */
  /* nop */
L_11194a68:;
  /* 11194a68 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11194a6c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11194a70 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11194a76 jne 0x11194a9c */
  if (!C.zf) goto L_11194a9c;
  /* 11194a78 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11194a7b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11194a7e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11194a81 jb 0x11194a90 */
  if (C.cf) goto L_11194a90;
  /* 11194a83 std  */
  C.df=1;
  /* 11194a84 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11194a86 cld  */
  C.df=0;
  /* 11194a87 jmp dword ptr [edx*4 + 0x11194bb0] */
  switch (EDX) {
    case 0: goto L_11194bc0;
    case 1: goto L_11194bc8;
    case 2: goto L_11194bd8;
    case 3: goto L_11194bec;
    default: x86_unimpl("switch@0x11194a87 out of table"); return;
  }
  /* 11194a8e mov edi, edi */
  EDI = (EDI);
L_11194a90:;
  /* 11194a90 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11194a92 jmp dword ptr [ecx*4 + 0x11194b60] */
  switch (ECX) {
    case 0: goto L_11194ba7;
    default: x86_unimpl("switch@0x11194a92 out of table"); return;
  }
  /* 11194a99 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11194a9c:;
  /* 11194a9c mov eax, edi */
  EAX = (EDI);
  /* 11194a9e mov edx, 3 */
  EDX = (0x3u);
  /* 11194aa3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11194aa6 jb 0x11194ab4 */
  if (C.cf) goto L_11194ab4;
  /* 11194aa8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11194aab sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11194aad jmp dword ptr [eax*4 + 0x11194ab8] */
  switch (EAX) {
    case 1: goto L_11194ac8;
    case 2: goto L_11194ae8;
    case 3: goto L_11194b10;
    default: x86_unimpl("switch@0x11194aad out of table"); return;
  }
L_11194ab4:;
  /* 11194ab4 jmp dword ptr [ecx*4 + 0x11194bb0] */
  switch (ECX) {
    case 0: goto L_11194bc0;
    case 1: goto L_11194bc8;
    case 2: goto L_11194bd8;
    case 3: goto L_11194bec;
    default: x86_unimpl("switch@0x11194ab4 out of table"); return;
  }
  /* 11194abb nop  */
  /* nop */
L_11194ac8:;
  /* 11194ac8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11194acb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11194acd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11194ad0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11194ad1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11194ad4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11194ad5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11194ad8 jb 0x11194a90 */
  if (C.cf) goto L_11194a90;
  /* 11194ada std  */
  C.df=1;
  /* 11194adb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11194add cld  */
  C.df=0;
  /* 11194ade jmp dword ptr [edx*4 + 0x11194bb0] */
  switch (EDX) {
    case 0: goto L_11194bc0;
    case 1: goto L_11194bc8;
    case 2: goto L_11194bd8;
    case 3: goto L_11194bec;
    default: x86_unimpl("switch@0x11194ade out of table"); return;
  }
  /* 11194ae5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11194ae8:;
  /* 11194ae8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11194aeb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11194aed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11194af0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11194af3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11194af6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11194af9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11194afc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11194aff cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11194b02 jb 0x11194a90 */
  if (C.cf) goto L_11194a90;
  /* 11194b04 std  */
  C.df=1;
  /* 11194b05 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11194b07 cld  */
  C.df=0;
  /* 11194b08 jmp dword ptr [edx*4 + 0x11194bb0] */
  switch (EDX) {
    case 0: goto L_11194bc0;
    case 1: goto L_11194bc8;
    case 2: goto L_11194bd8;
    case 3: goto L_11194bec;
    default: x86_unimpl("switch@0x11194b08 out of table"); return;
  }
  /* 11194b0f nop  */
  /* nop */
L_11194b10:;
  /* 11194b10 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11194b13 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11194b15 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11194b18 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11194b1b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11194b1e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11194b21 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11194b24 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11194b27 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11194b2a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11194b2d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11194b30 jb 0x11194a90 */
  if (C.cf) goto L_11194a90;
  /* 11194b36 std  */
  C.df=1;
  /* 11194b37 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11194b39 cld  */
  C.df=0;
  /* 11194b3a jmp dword ptr [edx*4 + 0x11194bb0] */
  switch (EDX) {
    case 0: goto L_11194bc0;
    case 1: goto L_11194bc8;
    case 2: goto L_11194bd8;
    case 3: goto L_11194bec;
    default: x86_unimpl("switch@0x11194b3a out of table"); return;
  }
  /* 11194b41 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11194b44 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11194b46 sbb dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a-_b-C.cf; w32((uint32_t)(ECX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11194b48 insb byte ptr es:[edi], dx */
  x86_unimpl("insb @ 0x11194b48");
  /* 11194b49 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11194b4a sbb dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a-_b-C.cf; w32((uint32_t)(ECX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11194b4c je 0x11194b99 */
  if (C.zf) goto L_11194b99;
  /* 11194b4e sbb dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a-_b-C.cf; w32((uint32_t)(ECX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11194b50 jl 0x11194b9d */
  if ((C.sf!=C.of)) goto L_11194b9d;
  /* 11194b52 sbb dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a-_b-C.cf; w32((uint32_t)(ECX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11194b54 test byte ptr [ebx + 0x19], cl */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x19)))&(CL); fl_logic(_r,8); }
  /* 11194b57 adc dword ptr [ebx + ecx*2 + 0x4b941119], ecx */
  { uint32_t _a=(r32((uint32_t)(EBX + ECX*2 + 0x4b941119))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(EBX + ECX*2 + 0x4b941119), (_r)); fl_add(_a,_b,_r,32); }
  /* 11194b5e sbb dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a-_b-C.cf; w32((uint32_t)(ECX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11194b64 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11194b68 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11194b6c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11194b70 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11194b74 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11194b78 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11194b7c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11194b80 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11194b84 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11194b88 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11194b8c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11194b90 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11194b94 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11194b98 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11194b9c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11194ba3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11194ba5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11194ba7:;
  /* 11194ba7 jmp dword ptr [edx*4 + 0x11194bb0] */
  switch (EDX) {
    case 0: goto L_11194bc0;
    case 1: goto L_11194bc8;
    case 2: goto L_11194bd8;
    case 3: goto L_11194bec;
    default: x86_unimpl("switch@0x11194ba7 out of table"); return;
  }
  /* 11194bae mov edi, edi */
  EDI = (EDI);
L_11194bc0:;
  /* 11194bc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11194bc3 pop esi */
  ESI = (pop32());
  /* 11194bc4 pop edi */
  EDI = (pop32());
  /* 11194bc5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11194bc6 ret  */
  ESPCHK(0x111948d0u, _esp0);
  ESP += 4; return;
  /* 11194bc7 nop  */
  /* nop */
L_11194bc8:;
  /* 11194bc8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11194bcb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11194bce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11194bd1 pop esi */
  ESI = (pop32());
  /* 11194bd2 pop edi */
  EDI = (pop32());
  /* 11194bd3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11194bd4 ret  */
  ESPCHK(0x111948d0u, _esp0);
  ESP += 4; return;
  /* 11194bd5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11194bd8:;
  /* 11194bd8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11194bdb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11194bde mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11194be1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11194be4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11194be7 pop esi */
  ESI = (pop32());
  /* 11194be8 pop edi */
  EDI = (pop32());
  /* 11194be9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11194bea ret  */
  ESPCHK(0x111948d0u, _esp0);
  ESP += 4; return;
  /* 11194beb nop  */
  /* nop */
L_11194bec:;
  /* 11194bec mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11194bef mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11194bf2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11194bf5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11194bf8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11194bfb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11194bfe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11194c01 pop esi */
  ESI = (pop32());
  /* 11194c02 pop edi */
  EDI = (pop32());
  /* 11194c03 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11194c04 ret  */
  ESPCHK(0x111948d0u, _esp0);
  ESP += 4; return;
L_11194b99: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11194b99 (unresolved jump table)"); return;
L_11194b9d: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11194b9d (unresolved jump table)"); return;
}

/* __global_unwind2 @ 0x11194c08 (32 bytes, 18 insns) */
void f_11194c08(void) {
  FTRACE(0x11194c08u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11194c08 push ebp */
  push32((uint32_t)(EBP));
  /* 11194c09 mov ebp, esp */
  EBP = (ESP);
  /* 11194c0b push ebx */
  push32((uint32_t)(EBX));
  /* 11194c0c push esi */
  push32((uint32_t)(ESI));
  /* 11194c0d push edi */
  push32((uint32_t)(EDI));
  /* 11194c0e push ebp */
  push32((uint32_t)(EBP));
  /* 11194c0f push 0 */
  push32((uint32_t)(0x0u));
  /* 11194c11 push 0 */
  push32((uint32_t)(0x0u));
  /* 11194c13 push 0x11194c20 */
  push32((uint32_t)(0x11194c20u));
  /* 11194c18 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11194c1b call 0x11194e10 */
  push32(0x11194c20u); f_11194e10();
  /* 11194c20 pop ebp */
  EBP = (pop32());
  /* 11194c21 pop edi */
  EDI = (pop32());
  /* 11194c22 pop esi */
  ESI = (pop32());
  /* 11194c23 pop ebx */
  EBX = (pop32());
  /* 11194c24 mov esp, ebp */
  ESP = (EBP);
  /* 11194c26 pop ebp */
  EBP = (pop32());
  /* 11194c27 ret  */
  ESPCHK(0x11194c08u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11194c4a (104 bytes, 33 insns) */
void f_11194c4a(void) {
  FTRACE(0x11194c4au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11194c4a push ebx */
  push32((uint32_t)(EBX));
  /* 11194c4b push esi */
  push32((uint32_t)(ESI));
  /* 11194c4c push edi */
  push32((uint32_t)(EDI));
  /* 11194c4d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11194c51 push eax */
  push32((uint32_t)(EAX));
  /* 11194c52 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11194c54 push 0x11194c28 */
  push32((uint32_t)(0x11194c28u));
  /* 11194c59 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11194c60 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11194c67:;
  /* 11194c67 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11194c6b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11194c6e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11194c71 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11194c74 je 0x11194ca4 */
  if (C.zf) goto L_11194ca4;
  /* 11194c76 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11194c7a je 0x11194ca4 */
  if (C.zf) goto L_11194ca4;
  /* 11194c7c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11194c7f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11194c82 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11194c86 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11194c89 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11194c8e jne 0x11194ca2 */
  if (!C.zf) goto L_11194ca2;
  /* 11194c90 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11194c95 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11194c99 call 0x11194cde */
  push32(0x11194c9eu); f_11194cde();
  /* 11194c9e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11194ca2u);
L_11194ca2:;
  /* 11194ca2 jmp 0x11194c67 */
  goto L_11194c67;
L_11194ca4:;
  /* 11194ca4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11194cab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11194cae pop edi */
  EDI = (pop32());
  /* 11194caf pop esi */
  ESI = (pop32());
  /* 11194cb0 pop ebx */
  EBX = (pop32());
  /* 11194cb1 ret  */
  ESPCHK(0x11194c4au, _esp0);
  ESP += 4; return;
}

/* FUN_10004cde @ 0x11194cde (24 bytes, 10 insns) */
void f_11194cde(void) {
  FTRACE(0x11194cdeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11194cde push ebx */
  push32((uint32_t)(EBX));
  /* 11194cdf push ecx */
  push32((uint32_t)(ECX));
  /* 11194ce0 mov ebx, 0x11196580 */
  EBX = (0x11196580u);
  /* 11194ce5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11194ce8 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11194ceb mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11194cee mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11194cf1 pop ecx */
  ECX = (pop32());
  /* 11194cf2 pop ebx */
  EBX = (pop32());
  /* 11194cf3 ret 4 */
  ESPCHK(0x11194cdeu, _esp0);
  ESP += 8; return;
}

/* FUN_10004dbd @ 0x11194dbd (27 bytes, 11 insns) */
void f_11194dbd(void) {
  FTRACE(0x11194dbdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11194dbd push ebp */
  push32((uint32_t)(EBP));
  /* 11194dbe mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11194dc2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11194dc4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11194dc7 push eax */
  push32((uint32_t)(EAX));
  /* 11194dc8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11194dcb push eax */
  push32((uint32_t)(EAX));
  /* 11194dcc call 0x11194c4a */
  push32(0x11194dd1u); f_11194c4a();
  /* 11194dd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11194dd4 pop ebp */
  EBP = (pop32());
  /* 11194dd5 ret 4 */
  ESPCHK(0x11194dbdu, _esp0);
  ESP += 8; return;
}

/* FUN_10004de0 @ 0x11194de0 (47 bytes, 17 insns) */
void f_11194de0(void) {
  FTRACE(0x11194de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11194de0 push ecx */
  push32((uint32_t)(ECX));
  /* 11194de1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11194de6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11194dea jb 0x11194e00 */
  if (C.cf) goto L_11194e00;
L_11194dec:;
  /* 11194dec sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11194df2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11194df7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11194df9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11194dfe jae 0x11194dec */
  if (!C.cf) goto L_11194dec;
L_11194e00:;
  /* 11194e00 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11194e02 mov eax, esp */
  EAX = (ESP);
  /* 11194e04 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11194e06 mov esp, ecx */
  ESP = (ECX);
  /* 11194e08 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11194e0a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11194e0d push eax */
  push32((uint32_t)(EAX));
  /* 11194e0e ret  */
  ESPCHK(0x11194de0u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11194e10 (6 bytes, 1 insns) */
void f_11194e10(void) {
  FTRACE(0x11194e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11194e10 jmp dword ptr [0x11195008] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11195008)))); return;
}

