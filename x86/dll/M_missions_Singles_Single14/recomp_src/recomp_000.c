#include "recomp.h"

/* OnInit @ 0x11141000 (409 bytes, 110 insns) */
void f_11141000(void) {
  FTRACE(0x11141000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11141000 push esi */
  push32((uint32_t)(ESI));
  /* 11141001 mov esi, dword ptr [0x11145110] */
  ESI = (r32((uint32_t)(0x11145110)));
  /* 11141007 push edi */
  push32((uint32_t)(EDI));
  /* 11141008 push 0x11146134 */
  push32((uint32_t)(0x11146134u));
  /* 1114100d push 0x11146568 */
  push32((uint32_t)(0x11146568u));
  /* 11141012 call esi */
  call_ind((uint32_t)(ESI), 0x11141014u);
  /* 11141014 push 0x1114612c */
  push32((uint32_t)(0x1114612cu));
  /* 11141019 push 0x111465b8 */
  push32((uint32_t)(0x111465b8u));
  /* 1114101e call esi */
  call_ind((uint32_t)(ESI), 0x11141020u);
  /* 11141020 push 0x11146124 */
  push32((uint32_t)(0x11146124u));
  /* 11141025 push 0x111465b0 */
  push32((uint32_t)(0x111465b0u));
  /* 1114102a call esi */
  call_ind((uint32_t)(ESI), 0x1114102cu);
  /* 1114102c push 0x1114611c */
  push32((uint32_t)(0x1114611cu));
  /* 11141031 push 0x11146528 */
  push32((uint32_t)(0x11146528u));
  /* 11141036 call esi */
  call_ind((uint32_t)(ESI), 0x11141038u);
  /* 11141038 mov esi, dword ptr [0x11145114] */
  ESI = (r32((uint32_t)(0x11145114)));
  /* 1114103e push 0x11146110 */
  push32((uint32_t)(0x11146110u));
  /* 11141043 push 0x11146558 */
  push32((uint32_t)(0x11146558u));
  /* 11141048 call esi */
  call_ind((uint32_t)(ESI), 0x1114104au);
  /* 1114104a push 0x11146104 */
  push32((uint32_t)(0x11146104u));
  /* 1114104f push 0x111465a8 */
  push32((uint32_t)(0x111465a8u));
  /* 11141054 call esi */
  call_ind((uint32_t)(ESI), 0x11141056u);
  /* 11141056 push 0x111460f8 */
  push32((uint32_t)(0x111460f8u));
  /* 1114105b push 0x111465c8 */
  push32((uint32_t)(0x111465c8u));
  /* 11141060 call esi */
  call_ind((uint32_t)(ESI), 0x11141062u);
  /* 11141062 push 0x111460ec */
  push32((uint32_t)(0x111460ecu));
  /* 11141067 push 0x11146530 */
  push32((uint32_t)(0x11146530u));
  /* 1114106c call esi */
  call_ind((uint32_t)(ESI), 0x1114106eu);
  /* 1114106e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11141071 push 0x111460e0 */
  push32((uint32_t)(0x111460e0u));
  /* 11141076 push 0x11146560 */
  push32((uint32_t)(0x11146560u));
  /* 1114107b call esi */
  call_ind((uint32_t)(ESI), 0x1114107du);
  /* 1114107d push 0x111460d8 */
  push32((uint32_t)(0x111460d8u));
  /* 11141082 push 0x11146578 */
  push32((uint32_t)(0x11146578u));
  /* 11141087 call esi */
  call_ind((uint32_t)(ESI), 0x11141089u);
  /* 11141089 push 0x111460d0 */
  push32((uint32_t)(0x111460d0u));
  /* 1114108e push 0x11146588 */
  push32((uint32_t)(0x11146588u));
  /* 11141093 call esi */
  call_ind((uint32_t)(ESI), 0x11141095u);
  /* 11141095 push 0x111460c8 */
  push32((uint32_t)(0x111460c8u));
  /* 1114109a push 0x11146590 */
  push32((uint32_t)(0x11146590u));
  /* 1114109f call esi */
  call_ind((uint32_t)(ESI), 0x111410a1u);
  /* 111410a1 push 0x111460c0 */
  push32((uint32_t)(0x111460c0u));
  /* 111410a6 push 0x11146598 */
  push32((uint32_t)(0x11146598u));
  /* 111410ab call esi */
  call_ind((uint32_t)(ESI), 0x111410adu);
  /* 111410ad push 0x111460b8 */
  push32((uint32_t)(0x111460b8u));
  /* 111410b2 push 0x111465a0 */
  push32((uint32_t)(0x111465a0u));
  /* 111410b7 call esi */
  call_ind((uint32_t)(ESI), 0x111410b9u);
  /* 111410b9 push 0x111460b0 */
  push32((uint32_t)(0x111460b0u));
  /* 111410be push 0x111465d0 */
  push32((uint32_t)(0x111465d0u));
  /* 111410c3 call esi */
  call_ind((uint32_t)(ESI), 0x111410c5u);
  /* 111410c5 push 0x111460a8 */
  push32((uint32_t)(0x111460a8u));
  /* 111410ca push 0x111465d8 */
  push32((uint32_t)(0x111465d8u));
  /* 111410cf call esi */
  call_ind((uint32_t)(ESI), 0x111410d1u);
  /* 111410d1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111410d4 push 0x111460a0 */
  push32((uint32_t)(0x111460a0u));
  /* 111410d9 push 0x11146570 */
  push32((uint32_t)(0x11146570u));
  /* 111410de call esi */
  call_ind((uint32_t)(ESI), 0x111410e0u);
  /* 111410e0 mov esi, dword ptr [0x11145118] */
  ESI = (r32((uint32_t)(0x11145118)));
  /* 111410e6 push 0x11146098 */
  push32((uint32_t)(0x11146098u));
  /* 111410eb push 1 */
  push32((uint32_t)(0x1u));
  /* 111410ed call esi */
  call_ind((uint32_t)(ESI), 0x111410efu);
  /* 111410ef push 0x11146090 */
  push32((uint32_t)(0x11146090u));
  /* 111410f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 111410f6 call esi */
  call_ind((uint32_t)(ESI), 0x111410f8u);
  /* 111410f8 push 0x11146088 */
  push32((uint32_t)(0x11146088u));
  /* 111410fd push 3 */
  push32((uint32_t)(0x3u));
  /* 111410ff call esi */
  call_ind((uint32_t)(ESI), 0x11141101u);
  /* 11141101 push 0x11146080 */
  push32((uint32_t)(0x11146080u));
  /* 11141106 push 4 */
  push32((uint32_t)(0x4u));
  /* 11141108 call esi */
  call_ind((uint32_t)(ESI), 0x1114110au);
  /* 1114110a push 0x11146074 */
  push32((uint32_t)(0x11146074u));
  /* 1114110f push 5 */
  push32((uint32_t)(0x5u));
  /* 11141111 call esi */
  call_ind((uint32_t)(ESI), 0x11141113u);
  /* 11141113 push 0x1114606c */
  push32((uint32_t)(0x1114606cu));
  /* 11141118 push 6 */
  push32((uint32_t)(0x6u));
  /* 1114111a call esi */
  call_ind((uint32_t)(ESI), 0x1114111cu);
  /* 1114111c mov esi, dword ptr [0x1114511c] */
  ESI = (r32((uint32_t)(0x1114511c)));
  /* 11141122 push 0x11146520 */
  push32((uint32_t)(0x11146520u));
  /* 11141127 call esi */
  call_ind((uint32_t)(ESI), 0x11141129u);
  /* 11141129 push 8 */
  push32((uint32_t)(0x8u));
  /* 1114112b push 0x11146520 */
  push32((uint32_t)(0x11146520u));
  /* 11141130 mov edi, dword ptr [0x11145120] */
  EDI = (r32((uint32_t)(0x11145120)));
  /* 11141136 call edi */
  call_ind((uint32_t)(EDI), 0x11141138u);
  /* 11141138 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1114113b push 0x11146550 */
  push32((uint32_t)(0x11146550u));
  /* 11141140 call esi */
  call_ind((uint32_t)(ESI), 0x11141142u);
  /* 11141142 push 8 */
  push32((uint32_t)(0x8u));
  /* 11141144 push 0x11146550 */
  push32((uint32_t)(0x11146550u));
  /* 11141149 call edi */
  call_ind((uint32_t)(EDI), 0x1114114bu);
  /* 1114114b mov esi, dword ptr [0x11145124] */
  ESI = (r32((uint32_t)(0x11145124)));
  /* 11141151 push 0x11146060 */
  push32((uint32_t)(0x11146060u));
  /* 11141156 push 0x11146580 */
  push32((uint32_t)(0x11146580u));
  /* 1114115b call esi */
  call_ind((uint32_t)(ESI), 0x1114115du);
  /* 1114115d mov edi, dword ptr [0x11145128] */
  EDI = (r32((uint32_t)(0x11145128)));
  /* 11141163 push 0x11146058 */
  push32((uint32_t)(0x11146058u));
  /* 11141168 push 0x11146548 */
  push32((uint32_t)(0x11146548u));
  /* 1114116d call edi */
  call_ind((uint32_t)(EDI), 0x1114116fu);
  /* 1114116f push 0x11146050 */
  push32((uint32_t)(0x11146050u));
  /* 11141174 push 0x11146540 */
  push32((uint32_t)(0x11146540u));
  /* 11141179 call edi */
  call_ind((uint32_t)(EDI), 0x1114117bu);
  /* 1114117b push 0x1114603c */
  push32((uint32_t)(0x1114603cu));
  /* 11141180 push 0x11146538 */
  push32((uint32_t)(0x11146538u));
  /* 11141185 call esi */
  call_ind((uint32_t)(ESI), 0x11141187u);
  /* 11141187 push 0x11146030 */
  push32((uint32_t)(0x11146030u));
  /* 1114118c push 0x111465c0 */
  push32((uint32_t)(0x111465c0u));
  /* 11141191 call esi */
  call_ind((uint32_t)(ESI), 0x11141193u);
  /* 11141193 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11141196 pop edi */
  EDI = (pop32());
  /* 11141197 pop esi */
  ESI = (pop32());
  /* 11141198 ret  */
  ESPCHK(0x11141000u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x111411a0 (2495 bytes, 884 insns) */
void f_111411a0(void) {
  FTRACE(0x111411a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111411a0 push ebx */
  push32((uint32_t)(EBX));
  /* 111411a1 push ebp */
  push32((uint32_t)(EBP));
  /* 111411a2 push esi */
  push32((uint32_t)(ESI));
  /* 111411a3 mov esi, dword ptr [0x111450b0] */
  ESI = (r32((uint32_t)(0x111450b0)));
  /* 111411a9 push edi */
  push32((uint32_t)(EDI));
  /* 111411aa push 1 */
  push32((uint32_t)(0x1u));
  /* 111411ac call esi */
  call_ind((uint32_t)(ESI), 0x111411aeu);
  /* 111411ae mov edi, dword ptr [0x111450b4] */
  EDI = (r32((uint32_t)(0x111450b4)));
  /* 111411b4 mov ebp, dword ptr [0x111450b8] */
  EBP = (r32((uint32_t)(0x111450b8)));
  /* 111411ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111411bd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111411bf je 0x111415fa */
  if (C.zf) goto L_111415fa;
  /* 111411c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 111411c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 111411c9 call edi */
  call_ind((uint32_t)(EDI), 0x111411cbu);
  /* 111411cb push 0x111461e8 */
  push32((uint32_t)(0x111461e8u));
  /* 111411d0 call ebp */
  call_ind((uint32_t)(EBP), 0x111411d2u);
  /* 111411d2 push 0x111461e0 */
  push32((uint32_t)(0x111461e0u));
  /* 111411d7 call ebp */
  call_ind((uint32_t)(EBP), 0x111411d9u);
  /* 111411d9 mov esi, dword ptr [0x111450bc] */
  ESI = (r32((uint32_t)(0x111450bc)));
  /* 111411df push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 111411e4 push 3 */
  push32((uint32_t)(0x3u));
  /* 111411e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 111411e8 call esi */
  call_ind((uint32_t)(ESI), 0x111411eau);
  /* 111411ea push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111411ef push 1 */
  push32((uint32_t)(0x1u));
  /* 111411f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 111411f3 call esi */
  call_ind((uint32_t)(ESI), 0x111411f5u);
  /* 111411f5 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111411fa push 4 */
  push32((uint32_t)(0x4u));
  /* 111411fc push 1 */
  push32((uint32_t)(0x1u));
  /* 111411fe call esi */
  call_ind((uint32_t)(ESI), 0x11141200u);
  /* 11141200 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11141205 push 5 */
  push32((uint32_t)(0x5u));
  /* 11141207 push 1 */
  push32((uint32_t)(0x1u));
  /* 11141209 call esi */
  call_ind((uint32_t)(ESI), 0x1114120bu);
  /* 1114120b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1114120e push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11141213 push 0 */
  push32((uint32_t)(0x0u));
  /* 11141215 push 1 */
  push32((uint32_t)(0x1u));
  /* 11141217 call esi */
  call_ind((uint32_t)(ESI), 0x11141219u);
  /* 11141219 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1114121e push 2 */
  push32((uint32_t)(0x2u));
  /* 11141220 push 1 */
  push32((uint32_t)(0x1u));
  /* 11141222 call esi */
  call_ind((uint32_t)(ESI), 0x11141224u);
  /* 11141224 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11141229 push 3 */
  push32((uint32_t)(0x3u));
  /* 1114122b push 2 */
  push32((uint32_t)(0x2u));
  /* 1114122d call esi */
  call_ind((uint32_t)(ESI), 0x1114122fu);
  /* 1114122f push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11141234 push 1 */
  push32((uint32_t)(0x1u));
  /* 11141236 push 2 */
  push32((uint32_t)(0x2u));
  /* 11141238 call esi */
  call_ind((uint32_t)(ESI), 0x1114123au);
  /* 1114123a push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1114123f push 4 */
  push32((uint32_t)(0x4u));
  /* 11141241 push 2 */
  push32((uint32_t)(0x2u));
  /* 11141243 call esi */
  call_ind((uint32_t)(ESI), 0x11141245u);
  /* 11141245 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1114124a push 5 */
  push32((uint32_t)(0x5u));
  /* 1114124c push 2 */
  push32((uint32_t)(0x2u));
  /* 1114124e call esi */
  call_ind((uint32_t)(ESI), 0x11141250u);
  /* 11141250 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11141253 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11141258 push 0 */
  push32((uint32_t)(0x0u));
  /* 1114125a push 2 */
  push32((uint32_t)(0x2u));
  /* 1114125c call esi */
  call_ind((uint32_t)(ESI), 0x1114125eu);
  /* 1114125e push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11141263 push 2 */
  push32((uint32_t)(0x2u));
  /* 11141265 push 2 */
  push32((uint32_t)(0x2u));
  /* 11141267 call esi */
  call_ind((uint32_t)(ESI), 0x11141269u);
  /* 11141269 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 1114126e push 3 */
  push32((uint32_t)(0x3u));
  /* 11141270 push 4 */
  push32((uint32_t)(0x4u));
  /* 11141272 call esi */
  call_ind((uint32_t)(ESI), 0x11141274u);
  /* 11141274 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11141279 push 1 */
  push32((uint32_t)(0x1u));
  /* 1114127b push 4 */
  push32((uint32_t)(0x4u));
  /* 1114127d call esi */
  call_ind((uint32_t)(ESI), 0x1114127fu);
  /* 1114127f push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11141284 push 4 */
  push32((uint32_t)(0x4u));
  /* 11141286 push 4 */
  push32((uint32_t)(0x4u));
  /* 11141288 call esi */
  call_ind((uint32_t)(ESI), 0x1114128au);
  /* 1114128a push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1114128f push 5 */
  push32((uint32_t)(0x5u));
  /* 11141291 push 4 */
  push32((uint32_t)(0x4u));
  /* 11141293 call esi */
  call_ind((uint32_t)(ESI), 0x11141295u);
  /* 11141295 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11141298 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1114129d push 0 */
  push32((uint32_t)(0x0u));
  /* 1114129f push 4 */
  push32((uint32_t)(0x4u));
  /* 111412a1 call esi */
  call_ind((uint32_t)(ESI), 0x111412a3u);
  /* 111412a3 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111412a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 111412aa push 4 */
  push32((uint32_t)(0x4u));
  /* 111412ac call esi */
  call_ind((uint32_t)(ESI), 0x111412aeu);
  /* 111412ae push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 111412b3 push 3 */
  push32((uint32_t)(0x3u));
  /* 111412b5 push 5 */
  push32((uint32_t)(0x5u));
  /* 111412b7 call esi */
  call_ind((uint32_t)(ESI), 0x111412b9u);
  /* 111412b9 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111412be push 1 */
  push32((uint32_t)(0x1u));
  /* 111412c0 push 5 */
  push32((uint32_t)(0x5u));
  /* 111412c2 call esi */
  call_ind((uint32_t)(ESI), 0x111412c4u);
  /* 111412c4 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111412c9 push 4 */
  push32((uint32_t)(0x4u));
  /* 111412cb push 5 */
  push32((uint32_t)(0x5u));
  /* 111412cd call esi */
  call_ind((uint32_t)(ESI), 0x111412cfu);
  /* 111412cf push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111412d4 push 5 */
  push32((uint32_t)(0x5u));
  /* 111412d6 push 5 */
  push32((uint32_t)(0x5u));
  /* 111412d8 call esi */
  call_ind((uint32_t)(ESI), 0x111412dau);
  /* 111412da add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111412dd push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111412e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 111412e4 push 5 */
  push32((uint32_t)(0x5u));
  /* 111412e6 call esi */
  call_ind((uint32_t)(ESI), 0x111412e8u);
  /* 111412e8 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111412ed push 2 */
  push32((uint32_t)(0x2u));
  /* 111412ef push 5 */
  push32((uint32_t)(0x5u));
  /* 111412f1 call esi */
  call_ind((uint32_t)(ESI), 0x111412f3u);
  /* 111412f3 mov ebx, dword ptr [0x111450c0] */
  EBX = (r32((uint32_t)(0x111450c0)));
  /* 111412f9 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 111412fb push 2 */
  push32((uint32_t)(0x2u));
  /* 111412fd call ebx */
  call_ind((uint32_t)(EBX), 0x111412ffu);
  /* 111412ff push 0xb */
  push32((uint32_t)(0xbu));
  /* 11141301 push 0 */
  push32((uint32_t)(0x0u));
  /* 11141303 call ebx */
  call_ind((uint32_t)(EBX), 0x11141305u);
  /* 11141305 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11141307 push 1 */
  push32((uint32_t)(0x1u));
  /* 11141309 call ebx */
  call_ind((uint32_t)(EBX), 0x1114130bu);
  /* 1114130b push 1 */
  push32((uint32_t)(0x1u));
  /* 1114130d push 0xf */
  push32((uint32_t)(0xfu));
  /* 1114130f call edi */
  call_ind((uint32_t)(EDI), 0x11141311u);
  /* 11141311 mov ebx, dword ptr [0x111450c4] */
  EBX = (r32((uint32_t)(0x111450c4)));
  /* 11141317 push 1 */
  push32((uint32_t)(0x1u));
  /* 11141319 push 2 */
  push32((uint32_t)(0x2u));
  /* 1114131b push 0x111465c8 */
  push32((uint32_t)(0x111465c8u));
  /* 11141320 call ebx */
  call_ind((uint32_t)(EBX), 0x11141322u);
  /* 11141322 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11141325 push 2 */
  push32((uint32_t)(0x2u));
  /* 11141327 push 2 */
  push32((uint32_t)(0x2u));
  /* 11141329 push 0x111465a8 */
  push32((uint32_t)(0x111465a8u));
  /* 1114132e call ebx */
  call_ind((uint32_t)(EBX), 0x11141330u);
  /* 11141330 push 0 */
  push32((uint32_t)(0x0u));
  /* 11141332 call dword ptr [0x111450c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111450c8))), 0x11141338u);
  /* 11141338 mov ebx, dword ptr [0x111450cc] */
  EBX = (r32((uint32_t)(0x111450cc)));
  /* 1114133e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11141341 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11141343 jne 0x111413e5 */
  if (!C.zf) goto L_111413e5;
  /* 11141349 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 1114134e push 3 */
  push32((uint32_t)(0x3u));
  /* 11141350 push 0 */
  push32((uint32_t)(0x0u));
  /* 11141352 call esi */
  call_ind((uint32_t)(ESI), 0x11141354u);
  /* 11141354 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11141359 push 1 */
  push32((uint32_t)(0x1u));
  /* 1114135b push 0 */
  push32((uint32_t)(0x0u));
  /* 1114135d call esi */
  call_ind((uint32_t)(ESI), 0x1114135fu);
  /* 1114135f push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11141364 push 4 */
  push32((uint32_t)(0x4u));
  /* 11141366 push 0 */
  push32((uint32_t)(0x0u));
  /* 11141368 call esi */
  call_ind((uint32_t)(ESI), 0x1114136au);
  /* 1114136a push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 1114136f push 5 */
  push32((uint32_t)(0x5u));
  /* 11141371 push 0 */
  push32((uint32_t)(0x0u));
  /* 11141373 call esi */
  call_ind((uint32_t)(ESI), 0x11141375u);
  /* 11141375 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 1114137a push 0 */
  push32((uint32_t)(0x0u));
  /* 1114137c push 0 */
  push32((uint32_t)(0x0u));
  /* 1114137e call esi */
  call_ind((uint32_t)(ESI), 0x11141380u);
  /* 11141380 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11141385 push 2 */
  push32((uint32_t)(0x2u));
  /* 11141387 push 0 */
  push32((uint32_t)(0x0u));
  /* 11141389 call esi */
  call_ind((uint32_t)(ESI), 0x1114138bu);
  /* 1114138b add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1114138e push 0 */
  push32((uint32_t)(0x0u));
  /* 11141390 push 1 */
  push32((uint32_t)(0x1u));
  /* 11141392 push 1 */
  push32((uint32_t)(0x1u));
  /* 11141394 push 0 */
  push32((uint32_t)(0x0u));
  /* 11141396 push 0x111461d4 */
  push32((uint32_t)(0x111461d4u));
  /* 1114139b push 2 */
  push32((uint32_t)(0x2u));
  /* 1114139d call ebx */
  call_ind((uint32_t)(EBX), 0x1114139fu);
  /* 1114139f push 0 */
  push32((uint32_t)(0x0u));
  /* 111413a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 111413a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 111413a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 111413a7 push 0x111461c8 */
  push32((uint32_t)(0x111461c8u));
  /* 111413ac push 4 */
  push32((uint32_t)(0x4u));
  /* 111413ae call ebx */
  call_ind((uint32_t)(EBX), 0x111413b0u);
  /* 111413b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 111413b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 111413b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 111413b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 111413b8 push 0x111461bc */
  push32((uint32_t)(0x111461bcu));
  /* 111413bd push 1 */
  push32((uint32_t)(0x1u));
  /* 111413bf call ebx */
  call_ind((uint32_t)(EBX), 0x111413c1u);
  /* 111413c1 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111413c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 111413c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 111413c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 111413ca push 1 */
  push32((uint32_t)(0x1u));
  /* 111413cc push 0x111461b0 */
  push32((uint32_t)(0x111461b0u));
  /* 111413d1 push 5 */
  push32((uint32_t)(0x5u));
  /* 111413d3 call ebx */
  call_ind((uint32_t)(EBX), 0x111413d5u);
  /* 111413d5 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 111413da push 1 */
  push32((uint32_t)(0x1u));
  /* 111413dc call dword ptr [0x111450d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111450d0))), 0x111413e2u);
  /* 111413e2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111413e5:;
  /* 111413e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 111413e7 call dword ptr [0x111450c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111450c8))), 0x111413edu);
  /* 111413ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111413f0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111413f3 jne 0x11141495 */
  if (!C.zf) goto L_11141495;
  /* 111413f9 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 111413fe push 3 */
  push32((uint32_t)(0x3u));
  /* 11141400 push 0 */
  push32((uint32_t)(0x0u));
  /* 11141402 call esi */
  call_ind((uint32_t)(ESI), 0x11141404u);
  /* 11141404 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11141409 push 1 */
  push32((uint32_t)(0x1u));
  /* 1114140b push 0 */
  push32((uint32_t)(0x0u));
  /* 1114140d call esi */
  call_ind((uint32_t)(ESI), 0x1114140fu);
  /* 1114140f push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11141414 push 4 */
  push32((uint32_t)(0x4u));
  /* 11141416 push 0 */
  push32((uint32_t)(0x0u));
  /* 11141418 call esi */
  call_ind((uint32_t)(ESI), 0x1114141au);
  /* 1114141a push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 1114141f push 5 */
  push32((uint32_t)(0x5u));
  /* 11141421 push 0 */
  push32((uint32_t)(0x0u));
  /* 11141423 call esi */
  call_ind((uint32_t)(ESI), 0x11141425u);
  /* 11141425 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 1114142a push 0 */
  push32((uint32_t)(0x0u));
  /* 1114142c push 0 */
  push32((uint32_t)(0x0u));
  /* 1114142e call esi */
  call_ind((uint32_t)(ESI), 0x11141430u);
  /* 11141430 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11141435 push 2 */
  push32((uint32_t)(0x2u));
  /* 11141437 push 0 */
  push32((uint32_t)(0x0u));
  /* 11141439 call esi */
  call_ind((uint32_t)(ESI), 0x1114143bu);
  /* 1114143b add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1114143e push 1 */
  push32((uint32_t)(0x1u));
  /* 11141440 push 1 */
  push32((uint32_t)(0x1u));
  /* 11141442 push 1 */
  push32((uint32_t)(0x1u));
  /* 11141444 push 0 */
  push32((uint32_t)(0x0u));
  /* 11141446 push 0x111461d4 */
  push32((uint32_t)(0x111461d4u));
  /* 1114144b push 2 */
  push32((uint32_t)(0x2u));
  /* 1114144d call ebx */
  call_ind((uint32_t)(EBX), 0x1114144fu);
  /* 1114144f push 1 */
  push32((uint32_t)(0x1u));
  /* 11141451 push 1 */
  push32((uint32_t)(0x1u));
  /* 11141453 push 1 */
  push32((uint32_t)(0x1u));
  /* 11141455 push 1 */
  push32((uint32_t)(0x1u));
  /* 11141457 push 0x111461c8 */
  push32((uint32_t)(0x111461c8u));
  /* 1114145c push 4 */
  push32((uint32_t)(0x4u));
  /* 1114145e call ebx */
  call_ind((uint32_t)(EBX), 0x11141460u);
  /* 11141460 push 1 */
  push32((uint32_t)(0x1u));
  /* 11141462 push 1 */
  push32((uint32_t)(0x1u));
  /* 11141464 push 1 */
  push32((uint32_t)(0x1u));
  /* 11141466 push 1 */
  push32((uint32_t)(0x1u));
  /* 11141468 push 0x111461bc */
  push32((uint32_t)(0x111461bcu));
  /* 1114146d push 1 */
  push32((uint32_t)(0x1u));
  /* 1114146f call ebx */
  call_ind((uint32_t)(EBX), 0x11141471u);
  /* 11141471 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11141474 push 1 */
  push32((uint32_t)(0x1u));
  /* 11141476 push 1 */
  push32((uint32_t)(0x1u));
  /* 11141478 push 1 */
  push32((uint32_t)(0x1u));
  /* 1114147a push 1 */
  push32((uint32_t)(0x1u));
  /* 1114147c push 0x111461b0 */
  push32((uint32_t)(0x111461b0u));
  /* 11141481 push 5 */
  push32((uint32_t)(0x5u));
  /* 11141483 call ebx */
  call_ind((uint32_t)(EBX), 0x11141485u);
  /* 11141485 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1114148a push 1 */
  push32((uint32_t)(0x1u));
  /* 1114148c call dword ptr [0x111450d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111450d0))), 0x11141492u);
  /* 11141492 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11141495:;
  /* 11141495 push 0 */
  push32((uint32_t)(0x0u));
  /* 11141497 call dword ptr [0x111450c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111450c8))), 0x1114149du);
  /* 1114149d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111414a0 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111414a3 jne 0x11141545 */
  if (!C.zf) goto L_11141545;
  /* 111414a9 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111414ae push 3 */
  push32((uint32_t)(0x3u));
  /* 111414b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 111414b2 call esi */
  call_ind((uint32_t)(ESI), 0x111414b4u);
  /* 111414b4 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111414b9 push 1 */
  push32((uint32_t)(0x1u));
  /* 111414bb push 0 */
  push32((uint32_t)(0x0u));
  /* 111414bd call esi */
  call_ind((uint32_t)(ESI), 0x111414bfu);
  /* 111414bf push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111414c4 push 4 */
  push32((uint32_t)(0x4u));
  /* 111414c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111414c8 call esi */
  call_ind((uint32_t)(ESI), 0x111414cau);
  /* 111414ca push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111414cf push 5 */
  push32((uint32_t)(0x5u));
  /* 111414d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 111414d3 call esi */
  call_ind((uint32_t)(ESI), 0x111414d5u);
  /* 111414d5 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111414da push 0 */
  push32((uint32_t)(0x0u));
  /* 111414dc push 0 */
  push32((uint32_t)(0x0u));
  /* 111414de call esi */
  call_ind((uint32_t)(ESI), 0x111414e0u);
  /* 111414e0 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111414e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 111414e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 111414e9 call esi */
  call_ind((uint32_t)(ESI), 0x111414ebu);
  /* 111414eb add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111414ee push 2 */
  push32((uint32_t)(0x2u));
  /* 111414f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 111414f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 111414f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 111414f6 push 0x111461d4 */
  push32((uint32_t)(0x111461d4u));
  /* 111414fb push 2 */
  push32((uint32_t)(0x2u));
  /* 111414fd call ebx */
  call_ind((uint32_t)(EBX), 0x111414ffu);
  /* 111414ff push 2 */
  push32((uint32_t)(0x2u));
  /* 11141501 push 1 */
  push32((uint32_t)(0x1u));
  /* 11141503 push 1 */
  push32((uint32_t)(0x1u));
  /* 11141505 push 1 */
  push32((uint32_t)(0x1u));
  /* 11141507 push 0x111461c8 */
  push32((uint32_t)(0x111461c8u));
  /* 1114150c push 4 */
  push32((uint32_t)(0x4u));
  /* 1114150e call ebx */
  call_ind((uint32_t)(EBX), 0x11141510u);
  /* 11141510 push 2 */
  push32((uint32_t)(0x2u));
  /* 11141512 push 1 */
  push32((uint32_t)(0x1u));
  /* 11141514 push 1 */
  push32((uint32_t)(0x1u));
  /* 11141516 push 1 */
  push32((uint32_t)(0x1u));
  /* 11141518 push 0x111461bc */
  push32((uint32_t)(0x111461bcu));
  /* 1114151d push 1 */
  push32((uint32_t)(0x1u));
  /* 1114151f call ebx */
  call_ind((uint32_t)(EBX), 0x11141521u);
  /* 11141521 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11141524 push 2 */
  push32((uint32_t)(0x2u));
  /* 11141526 push 1 */
  push32((uint32_t)(0x1u));
  /* 11141528 push 1 */
  push32((uint32_t)(0x1u));
  /* 1114152a push 1 */
  push32((uint32_t)(0x1u));
  /* 1114152c push 0x111461b0 */
  push32((uint32_t)(0x111461b0u));
  /* 11141531 push 4 */
  push32((uint32_t)(0x4u));
  /* 11141533 call ebx */
  call_ind((uint32_t)(EBX), 0x11141535u);
  /* 11141535 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 1114153a push 1 */
  push32((uint32_t)(0x1u));
  /* 1114153c call dword ptr [0x111450d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111450d0))), 0x11141542u);
  /* 11141542 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11141545:;
  /* 11141545 push 0 */
  push32((uint32_t)(0x0u));
  /* 11141547 call dword ptr [0x111450c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111450c8))), 0x1114154du);
  /* 1114154d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11141550 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11141553 jne 0x111415f4 */
  if (!C.zf) goto L_111415f4;
  /* 11141559 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 1114155e push eax */
  push32((uint32_t)(EAX));
  /* 1114155f push 0 */
  push32((uint32_t)(0x0u));
  /* 11141561 call esi */
  call_ind((uint32_t)(ESI), 0x11141563u);
  /* 11141563 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11141568 push 1 */
  push32((uint32_t)(0x1u));
  /* 1114156a push 0 */
  push32((uint32_t)(0x0u));
  /* 1114156c call esi */
  call_ind((uint32_t)(ESI), 0x1114156eu);
  /* 1114156e push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11141573 push 4 */
  push32((uint32_t)(0x4u));
  /* 11141575 push 0 */
  push32((uint32_t)(0x0u));
  /* 11141577 call esi */
  call_ind((uint32_t)(ESI), 0x11141579u);
  /* 11141579 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 1114157e push 5 */
  push32((uint32_t)(0x5u));
  /* 11141580 push 0 */
  push32((uint32_t)(0x0u));
  /* 11141582 call esi */
  call_ind((uint32_t)(ESI), 0x11141584u);
  /* 11141584 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11141589 push 0 */
  push32((uint32_t)(0x0u));
  /* 1114158b push 0 */
  push32((uint32_t)(0x0u));
  /* 1114158d call esi */
  call_ind((uint32_t)(ESI), 0x1114158fu);
  /* 1114158f push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11141594 push 2 */
  push32((uint32_t)(0x2u));
  /* 11141596 push 0 */
  push32((uint32_t)(0x0u));
  /* 11141598 call esi */
  call_ind((uint32_t)(ESI), 0x1114159au);
  /* 1114159a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1114159d push 3 */
  push32((uint32_t)(0x3u));
  /* 1114159f push 1 */
  push32((uint32_t)(0x1u));
  /* 111415a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 111415a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 111415a5 push 0x111461d4 */
  push32((uint32_t)(0x111461d4u));
  /* 111415aa push 2 */
  push32((uint32_t)(0x2u));
  /* 111415ac call ebx */
  call_ind((uint32_t)(EBX), 0x111415aeu);
  /* 111415ae push 3 */
  push32((uint32_t)(0x3u));
  /* 111415b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 111415b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 111415b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 111415b6 push 0x111461c8 */
  push32((uint32_t)(0x111461c8u));
  /* 111415bb push 4 */
  push32((uint32_t)(0x4u));
  /* 111415bd call ebx */
  call_ind((uint32_t)(EBX), 0x111415bfu);
  /* 111415bf push 3 */
  push32((uint32_t)(0x3u));
  /* 111415c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 111415c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 111415c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 111415c7 push 0x111461bc */
  push32((uint32_t)(0x111461bcu));
  /* 111415cc push 1 */
  push32((uint32_t)(0x1u));
  /* 111415ce call ebx */
  call_ind((uint32_t)(EBX), 0x111415d0u);
  /* 111415d0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111415d3 push 3 */
  push32((uint32_t)(0x3u));
  /* 111415d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 111415d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 111415d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 111415db push 0x111461b0 */
  push32((uint32_t)(0x111461b0u));
  /* 111415e0 push 5 */
  push32((uint32_t)(0x5u));
  /* 111415e2 call ebx */
  call_ind((uint32_t)(EBX), 0x111415e4u);
  /* 111415e4 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 111415e9 push 1 */
  push32((uint32_t)(0x1u));
  /* 111415eb call dword ptr [0x111450d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111450d0))), 0x111415f1u);
  /* 111415f1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111415f4:;
  /* 111415f4 mov esi, dword ptr [0x111450b0] */
  ESI = (r32((uint32_t)(0x111450b0)));
L_111415fa:;
  /* 111415fa push 0 */
  push32((uint32_t)(0x0u));
  /* 111415fc push 0x11146580 */
  push32((uint32_t)(0x11146580u));
  /* 11141601 push 0 */
  push32((uint32_t)(0x0u));
  /* 11141603 call dword ptr [0x111450d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111450d4))), 0x11141609u);
  /* 11141609 mov ebx, dword ptr [0x111450d8] */
  EBX = (r32((uint32_t)(0x111450d8)));
  /* 1114160f push 0 */
  push32((uint32_t)(0x0u));
  /* 11141611 push 0x111465b0 */
  push32((uint32_t)(0x111465b0u));
  /* 11141616 call ebx */
  call_ind((uint32_t)(EBX), 0x11141618u);
  /* 11141618 push 0x11146520 */
  push32((uint32_t)(0x11146520u));
  /* 1114161d push 0x111465b0 */
  push32((uint32_t)(0x111465b0u));
  /* 11141622 call dword ptr [0x111450dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111450dc))), 0x11141628u);
  /* 11141628 push 2 */
  push32((uint32_t)(0x2u));
  /* 1114162a call esi */
  call_ind((uint32_t)(ESI), 0x1114162cu);
  /* 1114162c add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1114162f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11141631 je 0x11141652 */
  if (C.zf) goto L_11141652;
  /* 11141633 push 2 */
  push32((uint32_t)(0x2u));
  /* 11141635 call dword ptr [0x111450e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111450e0))), 0x1114163bu);
  /* 1114163b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1114163e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11141640 je 0x11141652 */
  if (C.zf) goto L_11141652;
  /* 11141642 push 0 */
  push32((uint32_t)(0x0u));
  /* 11141644 push 2 */
  push32((uint32_t)(0x2u));
  /* 11141646 call edi */
  call_ind((uint32_t)(EDI), 0x11141648u);
  /* 11141648 push 0x111461a8 */
  push32((uint32_t)(0x111461a8u));
  /* 1114164d call ebp */
  call_ind((uint32_t)(EBP), 0x1114164fu);
  /* 1114164f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11141652:;
  /* 11141652 push 3 */
  push32((uint32_t)(0x3u));
  /* 11141654 call esi */
  call_ind((uint32_t)(ESI), 0x11141656u);
  /* 11141656 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11141659 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1114165b je 0x1114167c */
  if (C.zf) goto L_1114167c;
  /* 1114165d push 4 */
  push32((uint32_t)(0x4u));
  /* 1114165f call dword ptr [0x111450e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111450e0))), 0x11141665u);
  /* 11141665 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11141668 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1114166a je 0x1114167c */
  if (C.zf) goto L_1114167c;
  /* 1114166c push 0 */
  push32((uint32_t)(0x0u));
  /* 1114166e push 3 */
  push32((uint32_t)(0x3u));
  /* 11141670 call edi */
  call_ind((uint32_t)(EDI), 0x11141672u);
  /* 11141672 push 0x111461a0 */
  push32((uint32_t)(0x111461a0u));
  /* 11141677 call ebp */
  call_ind((uint32_t)(EBP), 0x11141679u);
  /* 11141679 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1114167c:;
  /* 1114167c push 5 */
  push32((uint32_t)(0x5u));
  /* 1114167e call esi */
  call_ind((uint32_t)(ESI), 0x11141680u);
  /* 11141680 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11141683 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11141685 je 0x111416ac */
  if (C.zf) goto L_111416ac;
  /* 11141687 push 0 */
  push32((uint32_t)(0x0u));
  /* 11141689 call dword ptr [0x111450e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111450e0))), 0x1114168fu);
  /* 1114168f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11141692 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11141694 je 0x111416ac */
  if (C.zf) goto L_111416ac;
  /* 11141696 push 0 */
  push32((uint32_t)(0x0u));
  /* 11141698 push 5 */
  push32((uint32_t)(0x5u));
  /* 1114169a call edi */
  call_ind((uint32_t)(EDI), 0x1114169cu);
  /* 1114169c push 0x11146198 */
  push32((uint32_t)(0x11146198u));
  /* 111416a1 call ebp */
  call_ind((uint32_t)(EBP), 0x111416a3u);
  /* 111416a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111416a6 call dword ptr [0x111450e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111450e4))), 0x111416acu);
L_111416ac:;
  /* 111416ac push 6 */
  push32((uint32_t)(0x6u));
  /* 111416ae call esi */
  call_ind((uint32_t)(ESI), 0x111416b0u);
  /* 111416b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111416b3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111416b5 je 0x111416d6 */
  if (C.zf) goto L_111416d6;
  /* 111416b7 push 5 */
  push32((uint32_t)(0x5u));
  /* 111416b9 call dword ptr [0x111450e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111450e0))), 0x111416bfu);
  /* 111416bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111416c2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111416c4 je 0x111416d6 */
  if (C.zf) goto L_111416d6;
  /* 111416c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111416c8 push 6 */
  push32((uint32_t)(0x6u));
  /* 111416ca call edi */
  call_ind((uint32_t)(EDI), 0x111416ccu);
  /* 111416cc push 0x11146190 */
  push32((uint32_t)(0x11146190u));
  /* 111416d1 call ebp */
  call_ind((uint32_t)(EBP), 0x111416d3u);
  /* 111416d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111416d6:;
  /* 111416d6 push 4 */
  push32((uint32_t)(0x4u));
  /* 111416d8 call esi */
  call_ind((uint32_t)(ESI), 0x111416dau);
  /* 111416da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111416dd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111416df je 0x11141718 */
  if (C.zf) goto L_11141718;
  /* 111416e1 push 3 */
  push32((uint32_t)(0x3u));
  /* 111416e3 call esi */
  call_ind((uint32_t)(ESI), 0x111416e5u);
  /* 111416e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111416e8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111416ea jne 0x11141718 */
  if (!C.zf) goto L_11141718;
  /* 111416ec push 2 */
  push32((uint32_t)(0x2u));
  /* 111416ee call esi */
  call_ind((uint32_t)(ESI), 0x111416f0u);
  /* 111416f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111416f3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111416f5 jne 0x11141718 */
  if (!C.zf) goto L_11141718;
  /* 111416f7 push 6 */
  push32((uint32_t)(0x6u));
  /* 111416f9 call esi */
  call_ind((uint32_t)(ESI), 0x111416fbu);
  /* 111416fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111416fe test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11141700 jne 0x11141718 */
  if (!C.zf) goto L_11141718;
  /* 11141702 push 0 */
  push32((uint32_t)(0x0u));
  /* 11141704 push 4 */
  push32((uint32_t)(0x4u));
  /* 11141706 call edi */
  call_ind((uint32_t)(EDI), 0x11141708u);
  /* 11141708 push 0x11146188 */
  push32((uint32_t)(0x11146188u));
  /* 1114170d call ebp */
  call_ind((uint32_t)(EBP), 0x1114170fu);
  /* 1114170f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11141712 call dword ptr [0x111450e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111450e8))), 0x11141718u);
L_11141718:;
  /* 11141718 push 7 */
  push32((uint32_t)(0x7u));
  /* 1114171a call esi */
  call_ind((uint32_t)(ESI), 0x1114171cu);
  /* 1114171c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1114171f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11141721 je 0x1114175c */
  if (C.zf) goto L_1114175c;
  /* 11141723 push 1 */
  push32((uint32_t)(0x1u));
  /* 11141725 call dword ptr [0x111450e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111450e0))), 0x1114172bu);
  /* 1114172b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1114172e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11141730 je 0x1114175c */
  if (C.zf) goto L_1114175c;
  /* 11141732 push 0 */
  push32((uint32_t)(0x0u));
  /* 11141734 push 7 */
  push32((uint32_t)(0x7u));
  /* 11141736 call edi */
  call_ind((uint32_t)(EDI), 0x11141738u);
  /* 11141738 push 0x11146180 */
  push32((uint32_t)(0x11146180u));
  /* 1114173d call ebp */
  call_ind((uint32_t)(EBP), 0x1114173fu);
  /* 1114173f push 0 */
  push32((uint32_t)(0x0u));
  /* 11141741 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11141743 call edi */
  call_ind((uint32_t)(EDI), 0x11141745u);
  /* 11141745 push 0 */
  push32((uint32_t)(0x0u));
  /* 11141747 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11141749 call edi */
  call_ind((uint32_t)(EDI), 0x1114174bu);
  /* 1114174b push 0 */
  push32((uint32_t)(0x0u));
  /* 1114174d push 0xa */
  push32((uint32_t)(0xau));
  /* 1114174f call edi */
  call_ind((uint32_t)(EDI), 0x11141751u);
  /* 11141751 push 2 */
  push32((uint32_t)(0x2u));
  /* 11141753 call dword ptr [0x111450ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111450ec))), 0x11141759u);
  /* 11141759 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1114175c:;
  /* 1114175c push 8 */
  push32((uint32_t)(0x8u));
  /* 1114175e call esi */
  call_ind((uint32_t)(ESI), 0x11141760u);
  /* 11141760 mov esi, dword ptr [0x111450f0] */
  ESI = (r32((uint32_t)(0x111450f0)));
  /* 11141766 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11141769 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1114176b je 0x111417c6 */
  if (C.zf) goto L_111417c6;
  /* 1114176d push 0x111465b8 */
  push32((uint32_t)(0x111465b8u));
  /* 11141772 push 0x111465c8 */
  push32((uint32_t)(0x111465c8u));
  /* 11141777 call dword ptr [0x111450f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111450f4))), 0x1114177du);
  /* 1114177d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11141780 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11141782 jle 0x111417c6 */
  if ((C.zf||C.sf!=C.of)) goto L_111417c6;
  /* 11141784 push 0 */
  push32((uint32_t)(0x0u));
  /* 11141786 push 8 */
  push32((uint32_t)(0x8u));
  /* 11141788 call edi */
  call_ind((uint32_t)(EDI), 0x1114178au);
  /* 1114178a push 0 */
  push32((uint32_t)(0x0u));
  /* 1114178c push 0x111465b8 */
  push32((uint32_t)(0x111465b8u));
  /* 11141791 call ebx */
  call_ind((uint32_t)(EBX), 0x11141793u);
  /* 11141793 push 0 */
  push32((uint32_t)(0x0u));
  /* 11141795 push 0 */
  push32((uint32_t)(0x0u));
  /* 11141797 push 0x11146560 */
  push32((uint32_t)(0x11146560u));
  /* 1114179c push 3 */
  push32((uint32_t)(0x3u));
  /* 1114179e call esi */
  call_ind((uint32_t)(ESI), 0x111417a0u);
  /* 111417a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 111417a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 111417a4 push 0x11146530 */
  push32((uint32_t)(0x11146530u));
  /* 111417a9 push 3 */
  push32((uint32_t)(0x3u));
  /* 111417ab call esi */
  call_ind((uint32_t)(ESI), 0x111417adu);
  /* 111417ad push 2 */
  push32((uint32_t)(0x2u));
  /* 111417af push 0x60 */
  push32((uint32_t)(0x60u));
  /* 111417b1 push 0x11146558 */
  push32((uint32_t)(0x11146558u));
  /* 111417b6 push 3 */
  push32((uint32_t)(0x3u));
  /* 111417b8 call esi */
  call_ind((uint32_t)(ESI), 0x111417bau);
  /* 111417ba add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111417bd push 1 */
  push32((uint32_t)(0x1u));
  /* 111417bf push 9 */
  push32((uint32_t)(0x9u));
  /* 111417c1 call edi */
  call_ind((uint32_t)(EDI), 0x111417c3u);
  /* 111417c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111417c6:;
  /* 111417c6 push 9 */
  push32((uint32_t)(0x9u));
  /* 111417c8 call dword ptr [0x111450b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111450b0))), 0x111417ceu);
  /* 111417ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111417d1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111417d3 je 0x1114184a */
  if (C.zf) goto L_1114184a;
  /* 111417d5 push 0x111465b8 */
  push32((uint32_t)(0x111465b8u));
  /* 111417da push 0x11146558 */
  push32((uint32_t)(0x11146558u));
  /* 111417df call dword ptr [0x111450f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111450f4))), 0x111417e5u);
  /* 111417e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111417e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111417ea jle 0x1114184a */
  if ((C.zf||C.sf!=C.of)) goto L_1114184a;
  /* 111417ec push 0 */
  push32((uint32_t)(0x0u));
  /* 111417ee push 9 */
  push32((uint32_t)(0x9u));
  /* 111417f0 call edi */
  call_ind((uint32_t)(EDI), 0x111417f2u);
  /* 111417f2 push 0x11146178 */
  push32((uint32_t)(0x11146178u));
  /* 111417f7 call ebp */
  call_ind((uint32_t)(EBP), 0x111417f9u);
  /* 111417f9 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 111417fe push 1 */
  push32((uint32_t)(0x1u));
  /* 11141800 push 0 */
  push32((uint32_t)(0x0u));
  /* 11141802 call dword ptr [0x111450f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111450f8))), 0x11141808u);
  /* 11141808 push 0 */
  push32((uint32_t)(0x0u));
  /* 1114180a push 0x111465b8 */
  push32((uint32_t)(0x111465b8u));
  /* 1114180f call ebx */
  call_ind((uint32_t)(EBX), 0x11141811u);
  /* 11141811 push 0 */
  push32((uint32_t)(0x0u));
  /* 11141813 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11141818 push 0x11146530 */
  push32((uint32_t)(0x11146530u));
  /* 1114181d push 3 */
  push32((uint32_t)(0x3u));
  /* 1114181f call esi */
  call_ind((uint32_t)(ESI), 0x11141821u);
  /* 11141821 push 2 */
  push32((uint32_t)(0x2u));
  /* 11141823 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11141828 push 0x11146560 */
  push32((uint32_t)(0x11146560u));
  /* 1114182d push 3 */
  push32((uint32_t)(0x3u));
  /* 1114182f call esi */
  call_ind((uint32_t)(ESI), 0x11141831u);
  /* 11141831 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11141834 push 2 */
  push32((uint32_t)(0x2u));
  /* 11141836 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11141838 push 0x111465c8 */
  push32((uint32_t)(0x111465c8u));
  /* 1114183d push 3 */
  push32((uint32_t)(0x3u));
  /* 1114183f call esi */
  call_ind((uint32_t)(ESI), 0x11141841u);
  /* 11141841 push 1 */
  push32((uint32_t)(0x1u));
  /* 11141843 push 8 */
  push32((uint32_t)(0x8u));
  /* 11141845 call edi */
  call_ind((uint32_t)(EDI), 0x11141847u);
  /* 11141847 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1114184a:;
  /* 1114184a push 0xa */
  push32((uint32_t)(0xau));
  /* 1114184c call dword ptr [0x111450b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111450b0))), 0x11141852u);
  /* 11141852 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11141855 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11141857 je 0x111418cc */
  if (C.zf) goto L_111418cc;
  /* 11141859 push 0x11146520 */
  push32((uint32_t)(0x11146520u));
  /* 1114185e push 0x111465a8 */
  push32((uint32_t)(0x111465a8u));
  /* 11141863 call dword ptr [0x111450f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111450f4))), 0x11141869u);
  /* 11141869 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1114186c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1114186e jle 0x111418cc */
  if ((C.zf||C.sf!=C.of)) goto L_111418cc;
  /* 11141870 push 0 */
  push32((uint32_t)(0x0u));
  /* 11141872 push 0xa */
  push32((uint32_t)(0xau));
  /* 11141874 call edi */
  call_ind((uint32_t)(EDI), 0x11141876u);
  /* 11141876 push 0 */
  push32((uint32_t)(0x0u));
  /* 11141878 push 0x11146520 */
  push32((uint32_t)(0x11146520u));
  /* 1114187d call ebx */
  call_ind((uint32_t)(EBX), 0x1114187fu);
  /* 1114187f push 0 */
  push32((uint32_t)(0x0u));
  /* 11141881 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11141883 push 0x11146588 */
  push32((uint32_t)(0x11146588u));
  /* 11141888 push 3 */
  push32((uint32_t)(0x3u));
  /* 1114188a call esi */
  call_ind((uint32_t)(ESI), 0x1114188cu);
  /* 1114188c push 2 */
  push32((uint32_t)(0x2u));
  /* 1114188e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11141890 push 0x11146590 */
  push32((uint32_t)(0x11146590u));
  /* 11141895 push 3 */
  push32((uint32_t)(0x3u));
  /* 11141897 call esi */
  call_ind((uint32_t)(ESI), 0x11141899u);
  /* 11141899 push 2 */
  push32((uint32_t)(0x2u));
  /* 1114189b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1114189d push 0x11146598 */
  push32((uint32_t)(0x11146598u));
  /* 111418a2 push 3 */
  push32((uint32_t)(0x3u));
  /* 111418a4 call esi */
  call_ind((uint32_t)(ESI), 0x111418a6u);
  /* 111418a6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111418a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 111418ab push 0x20 */
  push32((uint32_t)(0x20u));
  /* 111418ad push 0x111465a0 */
  push32((uint32_t)(0x111465a0u));
  /* 111418b2 push 3 */
  push32((uint32_t)(0x3u));
  /* 111418b4 call esi */
  call_ind((uint32_t)(ESI), 0x111418b6u);
  /* 111418b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 111418b8 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 111418ba push 0x11146558 */
  push32((uint32_t)(0x11146558u));
  /* 111418bf push 3 */
  push32((uint32_t)(0x3u));
  /* 111418c1 call esi */
  call_ind((uint32_t)(ESI), 0x111418c3u);
  /* 111418c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 111418c5 push 0xb */
  push32((uint32_t)(0xbu));
  /* 111418c7 call edi */
  call_ind((uint32_t)(EDI), 0x111418c9u);
  /* 111418c9 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111418cc:;
  /* 111418cc push 0xb */
  push32((uint32_t)(0xbu));
  /* 111418ce call dword ptr [0x111450b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111450b0))), 0x111418d4u);
  /* 111418d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111418d7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111418d9 je 0x11141974 */
  if (C.zf) goto L_11141974;
  /* 111418df push 0x11146520 */
  push32((uint32_t)(0x11146520u));
  /* 111418e4 push 0x11146558 */
  push32((uint32_t)(0x11146558u));
  /* 111418e9 call dword ptr [0x111450f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111450f4))), 0x111418efu);
  /* 111418ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111418f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111418f4 jle 0x11141974 */
  if ((C.zf||C.sf!=C.of)) goto L_11141974;
  /* 111418f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111418f8 push 0xb */
  push32((uint32_t)(0xbu));
  /* 111418fa call edi */
  call_ind((uint32_t)(EDI), 0x111418fcu);
  /* 111418fc push 0x11146170 */
  push32((uint32_t)(0x11146170u));
  /* 11141901 call ebp */
  call_ind((uint32_t)(EBP), 0x11141903u);
  /* 11141903 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11141908 push 1 */
  push32((uint32_t)(0x1u));
  /* 1114190a push 0 */
  push32((uint32_t)(0x0u));
  /* 1114190c call dword ptr [0x111450f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111450f8))), 0x11141912u);
  /* 11141912 push 0 */
  push32((uint32_t)(0x0u));
  /* 11141914 push 0x11146520 */
  push32((uint32_t)(0x11146520u));
  /* 11141919 call ebx */
  call_ind((uint32_t)(EBX), 0x1114191bu);
  /* 1114191b push 0 */
  push32((uint32_t)(0x0u));
  /* 1114191d push 0xac */
  push32((uint32_t)(0xacu));
  /* 11141922 push 0x111465a0 */
  push32((uint32_t)(0x111465a0u));
  /* 11141927 push 3 */
  push32((uint32_t)(0x3u));
  /* 11141929 call esi */
  call_ind((uint32_t)(ESI), 0x1114192bu);
  /* 1114192b push 2 */
  push32((uint32_t)(0x2u));
  /* 1114192d push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11141932 push 0x11146598 */
  push32((uint32_t)(0x11146598u));
  /* 11141937 push 3 */
  push32((uint32_t)(0x3u));
  /* 11141939 call esi */
  call_ind((uint32_t)(ESI), 0x1114193bu);
  /* 1114193b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1114193e push 2 */
  push32((uint32_t)(0x2u));
  /* 11141940 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11141945 push 0x11146590 */
  push32((uint32_t)(0x11146590u));
  /* 1114194a push 3 */
  push32((uint32_t)(0x3u));
  /* 1114194c call esi */
  call_ind((uint32_t)(ESI), 0x1114194eu);
  /* 1114194e push 2 */
  push32((uint32_t)(0x2u));
  /* 11141950 push 0xac */
  push32((uint32_t)(0xacu));
  /* 11141955 push 0x11146588 */
  push32((uint32_t)(0x11146588u));
  /* 1114195a push 3 */
  push32((uint32_t)(0x3u));
  /* 1114195c call esi */
  call_ind((uint32_t)(ESI), 0x1114195eu);
  /* 1114195e push 2 */
  push32((uint32_t)(0x2u));
  /* 11141960 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11141962 push 0x111465a8 */
  push32((uint32_t)(0x111465a8u));
  /* 11141967 push 3 */
  push32((uint32_t)(0x3u));
  /* 11141969 call esi */
  call_ind((uint32_t)(ESI), 0x1114196bu);
  /* 1114196b push 1 */
  push32((uint32_t)(0x1u));
  /* 1114196d push 0xa */
  push32((uint32_t)(0xau));
  /* 1114196f call edi */
  call_ind((uint32_t)(EDI), 0x11141971u);
  /* 11141971 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11141974:;
  /* 11141974 mov esi, dword ptr [0x111450b0] */
  ESI = (r32((uint32_t)(0x111450b0)));
  /* 1114197a push 0xc */
  push32((uint32_t)(0xcu));
  /* 1114197c call esi */
  call_ind((uint32_t)(ESI), 0x1114197eu);
  /* 1114197e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11141981 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11141983 je 0x111419b9 */
  if (C.zf) goto L_111419b9;
  /* 11141985 push 0x11146520 */
  push32((uint32_t)(0x11146520u));
  /* 1114198a call dword ptr [0x111450fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111450fc))), 0x11141990u);
  /* 11141990 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11141993 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11141995 jne 0x111419b9 */
  if (!C.zf) goto L_111419b9;
  /* 11141997 push eax */
  push32((uint32_t)(EAX));
  /* 11141998 push 0xc */
  push32((uint32_t)(0xcu));
  /* 1114199a call edi */
  call_ind((uint32_t)(EDI), 0x1114199cu);
  /* 1114199c push 0x11146168 */
  push32((uint32_t)(0x11146168u));
  /* 111419a1 call ebp */
  call_ind((uint32_t)(EBP), 0x111419a3u);
  /* 111419a3 push 0x1194 */
  push32((uint32_t)(0x1194u));
  /* 111419a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 111419aa call dword ptr [0x111450d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111450d0))), 0x111419b0u);
  /* 111419b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 111419b2 push 0xe */
  push32((uint32_t)(0xeu));
  /* 111419b4 call edi */
  call_ind((uint32_t)(EDI), 0x111419b6u);
  /* 111419b6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111419b9:;
  /* 111419b9 push 0xd */
  push32((uint32_t)(0xdu));
  /* 111419bb call esi */
  call_ind((uint32_t)(ESI), 0x111419bdu);
  /* 111419bd mov esi, dword ptr [0x11145100] */
  ESI = (r32((uint32_t)(0x11145100)));
  /* 111419c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111419c6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111419c8 je 0x11141a1f */
  if (C.zf) goto L_11141a1f;
  /* 111419ca push 1 */
  push32((uint32_t)(0x1u));
  /* 111419cc call dword ptr [0x11145104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145104))), 0x111419d2u);
  /* 111419d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111419d5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111419d7 je 0x11141a1f */
  if (C.zf) goto L_11141a1f;
  /* 111419d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 111419db push 0xd */
  push32((uint32_t)(0xdu));
  /* 111419dd call edi */
  call_ind((uint32_t)(EDI), 0x111419dfu);
  /* 111419df push 0 */
  push32((uint32_t)(0x0u));
  /* 111419e1 push 0x111465d8 */
  push32((uint32_t)(0x111465d8u));
  /* 111419e6 push 6 */
  push32((uint32_t)(0x6u));
  /* 111419e8 push 0x11146538 */
  push32((uint32_t)(0x11146538u));
  /* 111419ed push 0x11146540 */
  push32((uint32_t)(0x11146540u));
  /* 111419f2 push 0x11146550 */
  push32((uint32_t)(0x11146550u));
  /* 111419f7 call esi */
  call_ind((uint32_t)(ESI), 0x111419f9u);
  /* 111419f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 111419fb push 0x11146550 */
  push32((uint32_t)(0x11146550u));
  /* 11141a00 call ebx */
  call_ind((uint32_t)(EBX), 0x11141a02u);
  /* 11141a02 push 0 */
  push32((uint32_t)(0x0u));
  /* 11141a04 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11141a09 push 0x11146570 */
  push32((uint32_t)(0x11146570u));
  /* 11141a0e push 6 */
  push32((uint32_t)(0x6u));
  /* 11141a10 call dword ptr [0x11145108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145108))), 0x11141a16u);
  /* 11141a16 push 1 */
  push32((uint32_t)(0x1u));
  /* 11141a18 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11141a1a call edi */
  call_ind((uint32_t)(EDI), 0x11141a1cu);
  /* 11141a1c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11141a1f:;
  /* 11141a1f mov ebx, dword ptr [0x111450b0] */
  EBX = (r32((uint32_t)(0x111450b0)));
  /* 11141a25 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11141a27 call ebx */
  call_ind((uint32_t)(EBX), 0x11141a29u);
  /* 11141a29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11141a2c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11141a2e je 0x11141a7b */
  if (C.zf) goto L_11141a7b;
  /* 11141a30 push 2 */
  push32((uint32_t)(0x2u));
  /* 11141a32 call dword ptr [0x11145104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145104))), 0x11141a38u);
  /* 11141a38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11141a3b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11141a3d je 0x11141a7b */
  if (C.zf) goto L_11141a7b;
  /* 11141a3f push 0 */
  push32((uint32_t)(0x0u));
  /* 11141a41 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11141a43 call edi */
  call_ind((uint32_t)(EDI), 0x11141a45u);
  /* 11141a45 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11141a47 push 0x111465a8 */
  push32((uint32_t)(0x111465a8u));
  /* 11141a4c push 3 */
  push32((uint32_t)(0x3u));
  /* 11141a4e push 0x111465c0 */
  push32((uint32_t)(0x111465c0u));
  /* 11141a53 push 0x11146548 */
  push32((uint32_t)(0x11146548u));
  /* 11141a58 push 0x11146520 */
  push32((uint32_t)(0x11146520u));
  /* 11141a5d call esi */
  call_ind((uint32_t)(ESI), 0x11141a5fu);
  /* 11141a5f push 0x11146160 */
  push32((uint32_t)(0x11146160u));
  /* 11141a64 call ebp */
  call_ind((uint32_t)(EBP), 0x11141a66u);
  /* 11141a66 push 1 */
  push32((uint32_t)(0x1u));
  /* 11141a68 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11141a6a call edi */
  call_ind((uint32_t)(EDI), 0x11141a6cu);
  /* 11141a6c push 1 */
  push32((uint32_t)(0x1u));
  /* 11141a6e push 0xb */
  push32((uint32_t)(0xbu));
  /* 11141a70 call edi */
  call_ind((uint32_t)(EDI), 0x11141a72u);
  /* 11141a72 push 1 */
  push32((uint32_t)(0x1u));
  /* 11141a74 push 0xa */
  push32((uint32_t)(0xau));
  /* 11141a76 call edi */
  call_ind((uint32_t)(EDI), 0x11141a78u);
  /* 11141a78 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11141a7b:;
  /* 11141a7b push 0xf */
  push32((uint32_t)(0xfu));
  /* 11141a7d call ebx */
  call_ind((uint32_t)(EBX), 0x11141a7fu);
  /* 11141a7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11141a82 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11141a84 je 0x11141abe */
  if (C.zf) goto L_11141abe;
  /* 11141a86 mov esi, dword ptr [0x111450fc] */
  ESI = (r32((uint32_t)(0x111450fc)));
  /* 11141a8c push 0x11146550 */
  push32((uint32_t)(0x11146550u));
  /* 11141a91 call esi */
  call_ind((uint32_t)(ESI), 0x11141a93u);
  /* 11141a93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11141a96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11141a98 jne 0x11141ac4 */
  if (!C.zf) goto L_11141ac4;
  /* 11141a9a push eax */
  push32((uint32_t)(EAX));
  /* 11141a9b push 0xf */
  push32((uint32_t)(0xfu));
  /* 11141a9d call edi */
  call_ind((uint32_t)(EDI), 0x11141a9fu);
  /* 11141a9f push 0x11146158 */
  push32((uint32_t)(0x11146158u));
  /* 11141aa4 call ebp */
  call_ind((uint32_t)(EBP), 0x11141aa6u);
  /* 11141aa6 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 11141aab push 1 */
  push32((uint32_t)(0x1u));
  /* 11141aad call dword ptr [0x111450d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111450d0))), 0x11141ab3u);
  /* 11141ab3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11141ab5 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11141ab7 call edi */
  call_ind((uint32_t)(EDI), 0x11141ab9u);
  /* 11141ab9 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11141abc jmp 0x11141ac4 */
  goto L_11141ac4;
L_11141abe:;
  /* 11141abe mov esi, dword ptr [0x111450fc] */
  ESI = (r32((uint32_t)(0x111450fc)));
L_11141ac4:;
  /* 11141ac4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11141ac6 call ebx */
  call_ind((uint32_t)(EBX), 0x11141ac8u);
  /* 11141ac8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11141acb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11141acd je 0x11141afe */
  if (C.zf) goto L_11141afe;
  /* 11141acf push 6 */
  push32((uint32_t)(0x6u));
  /* 11141ad1 push 0x111465d0 */
  push32((uint32_t)(0x111465d0u));
  /* 11141ad6 call dword ptr [0x1114510c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1114510c))), 0x11141adcu);
  /* 11141adc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11141adf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11141ae1 jne 0x11141afe */
  if (!C.zf) goto L_11141afe;
  /* 11141ae3 push eax */
  push32((uint32_t)(EAX));
  /* 11141ae4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11141ae6 call edi */
  call_ind((uint32_t)(EDI), 0x11141ae8u);
  /* 11141ae8 push 0x11146150 */
  push32((uint32_t)(0x11146150u));
  /* 11141aed call ebp */
  call_ind((uint32_t)(EBP), 0x11141aefu);
  /* 11141aef push 0 */
  push32((uint32_t)(0x0u));
  /* 11141af1 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11141af3 call edi */
  call_ind((uint32_t)(EDI), 0x11141af5u);
  /* 11141af5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11141af7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11141af9 call edi */
  call_ind((uint32_t)(EDI), 0x11141afbu);
  /* 11141afb add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11141afe:;
  /* 11141afe push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11141b00 call ebx */
  call_ind((uint32_t)(EBX), 0x11141b02u);
  /* 11141b02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11141b05 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11141b07 je 0x11141b2c */
  if (C.zf) goto L_11141b2c;
  /* 11141b09 push 0x11146528 */
  push32((uint32_t)(0x11146528u));
  /* 11141b0e call esi */
  call_ind((uint32_t)(ESI), 0x11141b10u);
  /* 11141b10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11141b13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11141b15 jne 0x11141b2c */
  if (!C.zf) goto L_11141b2c;
  /* 11141b17 push eax */
  push32((uint32_t)(EAX));
  /* 11141b18 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11141b1a call edi */
  call_ind((uint32_t)(EDI), 0x11141b1cu);
  /* 11141b1c push 0x11146148 */
  push32((uint32_t)(0x11146148u));
  /* 11141b21 call ebp */
  call_ind((uint32_t)(EBP), 0x11141b23u);
  /* 11141b23 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11141b26 call dword ptr [0x111450e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111450e4))), 0x11141b2cu);
L_11141b2c:;
  /* 11141b2c push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11141b2e call ebx */
  call_ind((uint32_t)(EBX), 0x11141b30u);
  /* 11141b30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11141b33 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11141b35 je 0x11141b5a */
  if (C.zf) goto L_11141b5a;
  /* 11141b37 push 0x11146568 */
  push32((uint32_t)(0x11146568u));
  /* 11141b3c call esi */
  call_ind((uint32_t)(ESI), 0x11141b3eu);
  /* 11141b3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11141b41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11141b43 jne 0x11141b5a */
  if (!C.zf) goto L_11141b5a;
  /* 11141b45 push eax */
  push32((uint32_t)(EAX));
  /* 11141b46 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11141b48 call edi */
  call_ind((uint32_t)(EDI), 0x11141b4au);
  /* 11141b4a push 0x11146140 */
  push32((uint32_t)(0x11146140u));
  /* 11141b4f call ebp */
  call_ind((uint32_t)(EBP), 0x11141b51u);
  /* 11141b51 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11141b54 call dword ptr [0x111450e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111450e4))), 0x11141b5au);
L_11141b5a:;
  /* 11141b5a pop edi */
  EDI = (pop32());
  /* 11141b5b pop esi */
  ESI = (pop32());
  /* 11141b5c pop ebp */
  EBP = (pop32());
  /* 11141b5d pop ebx */
  EBX = (pop32());
  /* 11141b5e ret  */
  ESPCHK(0x111411a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b60 @ 0x11141b60 (20 bytes, 6 insns) */
void f_11141b60(void) {
  FTRACE(0x11141b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11141b60 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11141b64 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11141b65 jne 0x11141b6c */
  if (!C.zf) goto L_11141b6c;
  /* 11141b67 call 0x11141000 */
  push32(0x11141b6cu); f_11141000();
L_11141b6c:;
  /* 11141b6c mov eax, 1 */
  EAX = (0x1u);
  /* 11141b71 ret 0xc */
  ESPCHK(0x11141b60u, _esp0);
  ESP += 16; return;
}

/* FUN_10001b80 @ 0x11141b80 (217 bytes, 57 insns) */
void f_11141b80(void) {
  FTRACE(0x11141b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11141b80 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11141b84 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11141b87 jne 0x11141c15 */
  if (!C.zf) goto L_11141c15;
  /* 11141b8d call dword ptr [0x11145070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145070))), 0x11141b93u);
  /* 11141b93 push 1 */
  push32((uint32_t)(0x1u));
  /* 11141b95 mov dword ptr [0x111465fc], eax */
  w32((uint32_t)(0x111465fc), (EAX));
  /* 11141b9a call 0x111425b4 */
  push32(0x11141b9fu); f_111425b4();
  /* 11141b9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11141ba1 pop ecx */
  ECX = (pop32());
  /* 11141ba2 je 0x11141be0 */
  if (C.zf) goto L_11141be0;
  /* 11141ba4 mov eax, dword ptr [0x111465fc] */
  EAX = (r32((uint32_t)(0x111465fc)));
  /* 11141ba9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11141bab mov cl, byte ptr [0x111465fd] */
  CL = (r8((uint32_t)(0x111465fd)));
  /* 11141bb1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11141bb6 shr dword ptr [0x111465fc], 0x10 */
  w32((uint32_t)(0x111465fc), (sh_shr((uint32_t)(r32((uint32_t)(0x111465fc))), (0x10u)&0x1f, 32)));
  /* 11141bbd mov dword ptr [0x11146604], eax */
  w32((uint32_t)(0x11146604), (EAX));
  /* 11141bc2 mov dword ptr [0x11146608], ecx */
  w32((uint32_t)(0x11146608), (ECX));
  /* 11141bc8 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11141bcb add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11141bcd mov dword ptr [0x11146600], eax */
  w32((uint32_t)(0x11146600), (EAX));
  /* 11141bd2 call 0x11141e47 */
  push32(0x11141bd7u); f_11141e47();
  /* 11141bd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11141bd9 jne 0x11141be4 */
  if (!C.zf) goto L_11141be4;
  /* 11141bdb call 0x111425f0 */
  push32(0x11141be0u); f_111425f0();
L_11141be0:;
  /* 11141be0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11141be2 jmp 0x11141c56 */
  goto L_11141c56;
L_11141be4:;
  /* 11141be4 call dword ptr [0x1114506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1114506c))), 0x11141beau);
  /* 11141bea mov dword ptr [0x11146b58], eax */
  w32((uint32_t)(0x11146b58), (EAX));
  /* 11141bef call 0x11142482 */
  push32(0x11141bf4u); f_11142482();
  /* 11141bf4 mov dword ptr [0x111465e8], eax */
  w32((uint32_t)(0x111465e8), (EAX));
  /* 11141bf9 call 0x11141f6c */
  push32(0x11141bfeu); f_11141f6c();
  /* 11141bfe call 0x11142235 */
  push32(0x11141c03u); f_11142235();
  /* 11141c03 call 0x1114217c */
  push32(0x11141c08u); f_1114217c();
  /* 11141c08 call 0x11141d29 */
  push32(0x11141c0du); f_11141d29();
  /* 11141c0d inc dword ptr [0x111465e4] */
  { uint32_t _r=(r32((uint32_t)(0x111465e4)))+1; w32((uint32_t)(0x111465e4), (_r)); fl_inc(_r,32); }
  /* 11141c13 jmp 0x11141c53 */
  goto L_11141c53;
L_11141c15:;
  /* 11141c15 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11141c17 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11141c19 jne 0x11141c47 */
  if (!C.zf) goto L_11141c47;
  /* 11141c1b cmp dword ptr [0x111465e4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x111465e4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11141c21 jle 0x11141be0 */
  if ((C.zf||C.sf!=C.of)) goto L_11141be0;
  /* 11141c23 dec dword ptr [0x111465e4] */
  { uint32_t _r=(r32((uint32_t)(0x111465e4)))-1; w32((uint32_t)(0x111465e4), (_r)); fl_dec(_r,32); }
  /* 11141c29 cmp dword ptr [0x11146634], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11146634))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11141c2f jne 0x11141c36 */
  if (!C.zf) goto L_11141c36;
  /* 11141c31 call 0x11141d67 */
  push32(0x11141c36u); f_11141d67();
L_11141c36:;
  /* 11141c36 call 0x11142128 */
  push32(0x11141c3bu); f_11142128();
  /* 11141c3b call 0x11141e9b */
  push32(0x11141c40u); f_11141e9b();
  /* 11141c40 call 0x111425f0 */
  push32(0x11141c45u); f_111425f0();
  /* 11141c45 jmp 0x11141c53 */
  goto L_11141c53;
L_11141c47:;
  /* 11141c47 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11141c4a jne 0x11141c53 */
  if (!C.zf) goto L_11141c53;
  /* 11141c4c push ecx */
  push32((uint32_t)(ECX));
  /* 11141c4d call 0x11141ecc */
  push32(0x11141c52u); f_11141ecc();
  /* 11141c52 pop ecx */
  ECX = (pop32());
L_11141c53:;
  /* 11141c53 push 1 */
  push32((uint32_t)(0x1u));
  /* 11141c55 pop eax */
  EAX = (pop32());
L_11141c56:;
  /* 11141c56 ret 0xc */
  ESPCHK(0x11141b80u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11141c59 (157 bytes, 73 insns) */
void f_11141c59(void) {
  FTRACE(0x11141c59u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11141c59 push ebp */
  push32((uint32_t)(EBP));
  /* 11141c5a mov ebp, esp */
  EBP = (ESP);
  /* 11141c5c push ebx */
  push32((uint32_t)(EBX));
  /* 11141c5d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11141c60 push esi */
  push32((uint32_t)(ESI));
  /* 11141c61 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11141c64 push edi */
  push32((uint32_t)(EDI));
  /* 11141c65 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11141c68 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11141c6a jne 0x11141c75 */
  if (!C.zf) goto L_11141c75;
  /* 11141c6c cmp dword ptr [0x111465e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111465e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11141c73 jmp 0x11141c9b */
  goto L_11141c9b;
L_11141c75:;
  /* 11141c75 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11141c78 je 0x11141c7f */
  if (C.zf) goto L_11141c7f;
  /* 11141c7a cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11141c7d jne 0x11141ca1 */
  if (!C.zf) goto L_11141ca1;
L_11141c7f:;
  /* 11141c7f mov eax, dword ptr [0x11146b5c] */
  EAX = (r32((uint32_t)(0x11146b5c)));
  /* 11141c84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11141c86 je 0x11141c91 */
  if (C.zf) goto L_11141c91;
  /* 11141c88 push edi */
  push32((uint32_t)(EDI));
  /* 11141c89 push esi */
  push32((uint32_t)(ESI));
  /* 11141c8a push ebx */
  push32((uint32_t)(EBX));
  /* 11141c8b call eax */
  call_ind((uint32_t)(EAX), 0x11141c8du);
  /* 11141c8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11141c8f je 0x11141c9d */
  if (C.zf) goto L_11141c9d;
L_11141c91:;
  /* 11141c91 push edi */
  push32((uint32_t)(EDI));
  /* 11141c92 push esi */
  push32((uint32_t)(ESI));
  /* 11141c93 push ebx */
  push32((uint32_t)(EBX));
  /* 11141c94 call 0x11141b80 */
  push32(0x11141c99u); f_11141b80();
  /* 11141c99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_11141c9b:;
  /* 11141c9b jne 0x11141ca1 */
  if (!C.zf) goto L_11141ca1;
L_11141c9d:;
  /* 11141c9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11141c9f jmp 0x11141cef */
  goto L_11141cef;
L_11141ca1:;
  /* 11141ca1 push edi */
  push32((uint32_t)(EDI));
  /* 11141ca2 push esi */
  push32((uint32_t)(ESI));
  /* 11141ca3 push ebx */
  push32((uint32_t)(EBX));
  /* 11141ca4 call 0x11141b60 */
  push32(0x11141ca9u); f_11141b60();
  /* 11141ca9 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11141cac mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11141caf jne 0x11141cbd */
  if (!C.zf) goto L_11141cbd;
  /* 11141cb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11141cb3 jne 0x11141cec */
  if (!C.zf) goto L_11141cec;
  /* 11141cb5 push edi */
  push32((uint32_t)(EDI));
  /* 11141cb6 push eax */
  push32((uint32_t)(EAX));
  /* 11141cb7 push ebx */
  push32((uint32_t)(EBX));
  /* 11141cb8 call 0x11141b80 */
  push32(0x11141cbdu); f_11141b80();
L_11141cbd:;
  /* 11141cbd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11141cbf je 0x11141cc6 */
  if (C.zf) goto L_11141cc6;
  /* 11141cc1 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11141cc4 jne 0x11141cec */
  if (!C.zf) goto L_11141cec;
L_11141cc6:;
  /* 11141cc6 push edi */
  push32((uint32_t)(EDI));
  /* 11141cc7 push esi */
  push32((uint32_t)(ESI));
  /* 11141cc8 push ebx */
  push32((uint32_t)(EBX));
  /* 11141cc9 call 0x11141b80 */
  push32(0x11141cceu); f_11141b80();
  /* 11141cce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11141cd0 jne 0x11141cd5 */
  if (!C.zf) goto L_11141cd5;
  /* 11141cd2 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_11141cd5:;
  /* 11141cd5 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11141cd9 je 0x11141cec */
  if (C.zf) goto L_11141cec;
  /* 11141cdb mov eax, dword ptr [0x11146b5c] */
  EAX = (r32((uint32_t)(0x11146b5c)));
  /* 11141ce0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11141ce2 je 0x11141cec */
  if (C.zf) goto L_11141cec;
  /* 11141ce4 push edi */
  push32((uint32_t)(EDI));
  /* 11141ce5 push esi */
  push32((uint32_t)(ESI));
  /* 11141ce6 push ebx */
  push32((uint32_t)(EBX));
  /* 11141ce7 call eax */
  call_ind((uint32_t)(EAX), 0x11141ce9u);
  /* 11141ce9 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11141cec:;
  /* 11141cec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11141cef:;
  /* 11141cef pop edi */
  EDI = (pop32());
  /* 11141cf0 pop esi */
  ESI = (pop32());
  /* 11141cf1 pop ebx */
  EBX = (pop32());
  /* 11141cf2 pop ebp */
  EBP = (pop32());
  /* 11141cf3 ret 0xc */
  ESPCHK(0x11141c59u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11141cf6 (48 bytes, 15 insns) */
void f_11141cf6(void) {
  FTRACE(0x11141cf6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11141cf6 mov eax, dword ptr [0x111465f0] */
  EAX = (r32((uint32_t)(0x111465f0)));
  /* 11141cfb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11141cfe je 0x11141d0d */
  if (C.zf) goto L_11141d0d;
  /* 11141d00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11141d02 jne 0x11141d12 */
  if (!C.zf) goto L_11141d12;
  /* 11141d04 cmp dword ptr [0x111465f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111465f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11141d0b jne 0x11141d12 */
  if (!C.zf) goto L_11141d12;
L_11141d0d:;
  /* 11141d0d call 0x11142665 */
  push32(0x11141d12u); f_11142665();
L_11141d12:;
  /* 11141d12 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11141d16 call 0x1114269e */
  push32(0x11141d1bu); f_1114269e();
  /* 11141d1b push 0xff */
  push32((uint32_t)(0xffu));
  /* 11141d20 call dword ptr [0x111461f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111461f0))), 0x11141d26u);
  /* 11141d26 pop ecx */
  ECX = (pop32());
  /* 11141d27 pop ecx */
  ECX = (pop32());
  /* 11141d28 ret  */
  ESPCHK(0x11141cf6u, _esp0);
  ESP += 4; return;
}

/* FUN_10001d29 @ 0x11141d29 (45 bytes, 12 insns) */
void f_11141d29(void) {
  FTRACE(0x11141d29u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11141d29 mov eax, dword ptr [0x11146b54] */
  EAX = (r32((uint32_t)(0x11146b54)));
  /* 11141d2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11141d30 je 0x11141d34 */
  if (C.zf) goto L_11141d34;
  /* 11141d32 call eax */
  call_ind((uint32_t)(EAX), 0x11141d34u);
L_11141d34:;
  /* 11141d34 push 0x11146010 */
  push32((uint32_t)(0x11146010u));
  /* 11141d39 push 0x11146008 */
  push32((uint32_t)(0x11146008u));
  /* 11141d3e call 0x11141e2d */
  push32(0x11141d43u); f_11141e2d();
  /* 11141d43 push 0x11146004 */
  push32((uint32_t)(0x11146004u));
  /* 11141d48 push 0x11146000 */
  push32((uint32_t)(0x11146000u));
  /* 11141d4d call 0x11141e2d */
  push32(0x11141d52u); f_11141e2d();
  /* 11141d52 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11141d55 ret  */
  ESPCHK(0x11141d29u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11141d56 (17 bytes, 6 insns) */
void f_11141d56(void) {
  FTRACE(0x11141d56u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11141d56 push 0 */
  push32((uint32_t)(0x0u));
  /* 11141d58 push 1 */
  push32((uint32_t)(0x1u));
  /* 11141d5a push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11141d5e call 0x11141d76 */
  push32(0x11141d63u); f_11141d76();
  /* 11141d63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11141d66 ret  */
  ESPCHK(0x11141d56u, _esp0);
  ESP += 4; return;
}

/* FUN_10001d67 @ 0x11141d67 (15 bytes, 6 insns) */
void f_11141d67(void) {
  FTRACE(0x11141d67u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11141d67 push 1 */
  push32((uint32_t)(0x1u));
  /* 11141d69 push 0 */
  push32((uint32_t)(0x0u));
  /* 11141d6b push 0 */
  push32((uint32_t)(0x0u));
  /* 11141d6d call 0x11141d76 */
  push32(0x11141d72u); f_11141d76();
  /* 11141d72 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11141d75 ret  */
  ESPCHK(0x11141d67u, _esp0);
  ESP += 4; return;
}

/* FUN_10001d76 @ 0x11141d76 (163 bytes, 53 insns) */
void f_11141d76(void) {
  FTRACE(0x11141d76u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11141d76 push edi */
  push32((uint32_t)(EDI));
  /* 11141d77 call 0x11141e1b */
  push32(0x11141d7cu); f_11141e1b();
  /* 11141d7c push 1 */
  push32((uint32_t)(0x1u));
  /* 11141d7e pop edi */
  EDI = (pop32());
  /* 11141d7f cmp dword ptr [0x11146638], edi */
  { uint32_t _a=(r32((uint32_t)(0x11146638))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11141d85 jne 0x11141d98 */
  if (!C.zf) goto L_11141d98;
  /* 11141d87 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11141d8b call dword ptr [0x1114507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1114507c))), 0x11141d91u);
  /* 11141d91 push eax */
  push32((uint32_t)(EAX));
  /* 11141d92 call dword ptr [0x11145078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145078))), 0x11141d98u);
L_11141d98:;
  /* 11141d98 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11141d9d push ebx */
  push32((uint32_t)(EBX));
  /* 11141d9e mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11141da2 mov dword ptr [0x11146634], edi */
  w32((uint32_t)(0x11146634), (EDI));
  /* 11141da8 mov byte ptr [0x11146630], bl */
  w8((uint32_t)(0x11146630), (BL));
  /* 11141dae jne 0x11141dec */
  if (!C.zf) goto L_11141dec;
  /* 11141db0 mov eax, dword ptr [0x11146b50] */
  EAX = (r32((uint32_t)(0x11146b50)));
  /* 11141db5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11141db7 je 0x11141ddb */
  if (C.zf) goto L_11141ddb;
  /* 11141db9 mov ecx, dword ptr [0x11146b4c] */
  ECX = (r32((uint32_t)(0x11146b4c)));
  /* 11141dbf push esi */
  push32((uint32_t)(ESI));
  /* 11141dc0 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 11141dc3 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11141dc5 jb 0x11141dda */
  if (C.cf) goto L_11141dda;
L_11141dc7:;
  /* 11141dc7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11141dc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11141dcb je 0x11141dcf */
  if (C.zf) goto L_11141dcf;
  /* 11141dcd call eax */
  call_ind((uint32_t)(EAX), 0x11141dcfu);
L_11141dcf:;
  /* 11141dcf sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11141dd2 cmp esi, dword ptr [0x11146b50] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11146b50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11141dd8 jae 0x11141dc7 */
  if (!C.cf) goto L_11141dc7;
L_11141dda:;
  /* 11141dda pop esi */
  ESI = (pop32());
L_11141ddb:;
  /* 11141ddb push 0x11146018 */
  push32((uint32_t)(0x11146018u));
  /* 11141de0 push 0x11146014 */
  push32((uint32_t)(0x11146014u));
  /* 11141de5 call 0x11141e2d */
  push32(0x11141deau); f_11141e2d();
  /* 11141dea pop ecx */
  ECX = (pop32());
  /* 11141deb pop ecx */
  ECX = (pop32());
L_11141dec:;
  /* 11141dec push 0x11146020 */
  push32((uint32_t)(0x11146020u));
  /* 11141df1 push 0x1114601c */
  push32((uint32_t)(0x1114601cu));
  /* 11141df6 call 0x11141e2d */
  push32(0x11141dfbu); f_11141e2d();
  /* 11141dfb pop ecx */
  ECX = (pop32());
  /* 11141dfc pop ecx */
  ECX = (pop32());
  /* 11141dfd test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11141dff pop ebx */
  EBX = (pop32());
  /* 11141e00 je 0x11141e09 */
  if (C.zf) goto L_11141e09;
  /* 11141e02 call 0x11141e24 */
  push32(0x11141e07u); f_11141e24();
  /* 11141e07 pop edi */
  EDI = (pop32());
  /* 11141e08 ret  */
  ESPCHK(0x11141d76u, _esp0);
  ESP += 4; return;
L_11141e09:;
  /* 11141e09 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11141e0d mov dword ptr [0x11146638], edi */
  w32((uint32_t)(0x11146638), (EDI));
  /* 11141e13 call dword ptr [0x11145074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145074))), 0x11141e19u);
  /* 11141e19 pop edi */
  EDI = (pop32());
  /* 11141e1a ret  */
  ESPCHK(0x11141d76u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e1b @ 0x11141e1b (9 bytes, 4 insns) */
void f_11141e1b(void) {
  FTRACE(0x11141e1bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11141e1b push 0xd */
  push32((uint32_t)(0xdu));
  /* 11141e1d call 0x11142886 */
  push32(0x11141e22u); f_11142886();
  /* 11141e22 pop ecx */
  ECX = (pop32());
  /* 11141e23 ret  */
  ESPCHK(0x11141e1bu, _esp0);
  ESP += 4; return;
}

/* FUN_10001e24 @ 0x11141e24 (9 bytes, 4 insns) */
void f_11141e24(void) {
  FTRACE(0x11141e24u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11141e24 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11141e26 call 0x111428e7 */
  push32(0x11141e2bu); f_111428e7();
  /* 11141e2b pop ecx */
  ECX = (pop32());
  /* 11141e2c ret  */
  ESPCHK(0x11141e24u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e2d @ 0x11141e2d (26 bytes, 12 insns) */
void f_11141e2d(void) {
  FTRACE(0x11141e2du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11141e2d push esi */
  push32((uint32_t)(ESI));
  /* 11141e2e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_11141e32:;
  /* 11141e32 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11141e36 jae 0x11141e45 */
  if (!C.cf) goto L_11141e45;
  /* 11141e38 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11141e3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11141e3c je 0x11141e40 */
  if (C.zf) goto L_11141e40;
  /* 11141e3e call eax */
  call_ind((uint32_t)(EAX), 0x11141e40u);
L_11141e40:;
  /* 11141e40 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11141e43 jmp 0x11141e32 */
  goto L_11141e32;
L_11141e45:;
  /* 11141e45 pop esi */
  ESI = (pop32());
  /* 11141e46 ret  */
  ESPCHK(0x11141e2du, _esp0);
  ESP += 4; return;
}

/* FUN_10001e47 @ 0x11141e47 (84 bytes, 32 insns) */
void f_11141e47(void) {
  FTRACE(0x11141e47u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11141e47 push esi */
  push32((uint32_t)(ESI));
  /* 11141e48 call 0x111427f1 */
  push32(0x11141e4du); f_111427f1();
  /* 11141e4d call dword ptr [0x11145088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145088))), 0x11141e53u);
  /* 11141e53 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11141e56 mov dword ptr [0x111461f4], eax */
  w32((uint32_t)(0x111461f4), (EAX));
  /* 11141e5b je 0x11141e97 */
  if (C.zf) goto L_11141e97;
  /* 11141e5d push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11141e5f push 1 */
  push32((uint32_t)(0x1u));
  /* 11141e61 call 0x111428fc */
  push32(0x11141e66u); f_111428fc();
  /* 11141e66 mov esi, eax */
  ESI = (EAX);
  /* 11141e68 pop ecx */
  ECX = (pop32());
  /* 11141e69 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11141e6b pop ecx */
  ECX = (pop32());
  /* 11141e6c je 0x11141e97 */
  if (C.zf) goto L_11141e97;
  /* 11141e6e push esi */
  push32((uint32_t)(ESI));
  /* 11141e6f push dword ptr [0x111461f4] */
  push32((uint32_t)(r32((uint32_t)(0x111461f4))));
  /* 11141e75 call dword ptr [0x11145084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145084))), 0x11141e7bu);
  /* 11141e7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11141e7d je 0x11141e97 */
  if (C.zf) goto L_11141e97;
  /* 11141e7f push esi */
  push32((uint32_t)(ESI));
  /* 11141e80 call 0x11141eb9 */
  push32(0x11141e85u); f_11141eb9();
  /* 11141e85 pop ecx */
  ECX = (pop32());
  /* 11141e86 call dword ptr [0x11145080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145080))), 0x11141e8cu);
  /* 11141e8c or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11141e90 push 1 */
  push32((uint32_t)(0x1u));
  /* 11141e92 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11141e94 pop eax */
  EAX = (pop32());
  /* 11141e95 pop esi */
  ESI = (pop32());
  /* 11141e96 ret  */
  ESPCHK(0x11141e47u, _esp0);
  ESP += 4; return;
L_11141e97:;
  /* 11141e97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11141e99 pop esi */
  ESI = (pop32());
  /* 11141e9a ret  */
  ESPCHK(0x11141e47u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e9b @ 0x11141e9b (30 bytes, 8 insns) */
void f_11141e9b(void) {
  FTRACE(0x11141e9bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11141e9b call 0x1114281a */
  push32(0x11141ea0u); f_1114281a();
  /* 11141ea0 mov eax, dword ptr [0x111461f4] */
  EAX = (r32((uint32_t)(0x111461f4)));
  /* 11141ea5 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11141ea8 je 0x11141eb8 */
  if (C.zf) goto L_11141eb8;
  /* 11141eaa push eax */
  push32((uint32_t)(EAX));
  /* 11141eab call dword ptr [0x11145000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145000))), 0x11141eb1u);
  /* 11141eb1 or dword ptr [0x111461f4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x111461f4)))|(0xffffffffu); w32((uint32_t)(0x111461f4), (_r)); fl_logic(_r,32); }
L_11141eb8:;
  /* 11141eb8 ret  */
  ESPCHK(0x11141e9bu, _esp0);
  ESP += 4; return;
}

/* FUN_10001eb9 @ 0x11141eb9 (19 bytes, 4 insns) */
void f_11141eb9(void) {
  FTRACE(0x11141eb9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11141eb9 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11141ebd mov dword ptr [eax + 0x50], 0x11146370 */
  w32((uint32_t)(EAX + 0x50), (0x11146370u));
  /* 11141ec4 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 11141ecb ret  */
  ESPCHK(0x11141eb9u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ecc @ 0x11141ecc (160 bytes, 62 insns) */
void f_11141ecc(void) {
  FTRACE(0x11141eccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11141ecc mov eax, dword ptr [0x111461f4] */
  EAX = (r32((uint32_t)(0x111461f4)));
  /* 11141ed1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11141ed4 je 0x11141f6b */
  if (C.zf) goto L_11141f6b;
  /* 11141eda push esi */
  push32((uint32_t)(ESI));
  /* 11141edb mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11141edf test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11141ee1 jne 0x11141ef0 */
  if (!C.zf) goto L_11141ef0;
  /* 11141ee3 push eax */
  push32((uint32_t)(EAX));
  /* 11141ee4 call dword ptr [0x11145094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145094))), 0x11141eeau);
  /* 11141eea mov esi, eax */
  ESI = (EAX);
  /* 11141eec test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11141eee je 0x11141f5c */
  if (C.zf) goto L_11141f5c;
L_11141ef0:;
  /* 11141ef0 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11141ef3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11141ef5 je 0x11141efe */
  if (C.zf) goto L_11141efe;
  /* 11141ef7 push eax */
  push32((uint32_t)(EAX));
  /* 11141ef8 call 0x11142989 */
  push32(0x11141efdu); f_11142989();
  /* 11141efd pop ecx */
  ECX = (pop32());
L_11141efe:;
  /* 11141efe mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11141f01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11141f03 je 0x11141f0c */
  if (C.zf) goto L_11141f0c;
  /* 11141f05 push eax */
  push32((uint32_t)(EAX));
  /* 11141f06 call 0x11142989 */
  push32(0x11141f0bu); f_11142989();
  /* 11141f0b pop ecx */
  ECX = (pop32());
L_11141f0c:;
  /* 11141f0c mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 11141f0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11141f11 je 0x11141f1a */
  if (C.zf) goto L_11141f1a;
  /* 11141f13 push eax */
  push32((uint32_t)(EAX));
  /* 11141f14 call 0x11142989 */
  push32(0x11141f19u); f_11142989();
  /* 11141f19 pop ecx */
  ECX = (pop32());
L_11141f1a:;
  /* 11141f1a mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 11141f1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11141f1f je 0x11141f28 */
  if (C.zf) goto L_11141f28;
  /* 11141f21 push eax */
  push32((uint32_t)(EAX));
  /* 11141f22 call 0x11142989 */
  push32(0x11141f27u); f_11142989();
  /* 11141f27 pop ecx */
  ECX = (pop32());
L_11141f28:;
  /* 11141f28 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 11141f2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11141f2d je 0x11141f36 */
  if (C.zf) goto L_11141f36;
  /* 11141f2f push eax */
  push32((uint32_t)(EAX));
  /* 11141f30 call 0x11142989 */
  push32(0x11141f35u); f_11142989();
  /* 11141f35 pop ecx */
  ECX = (pop32());
L_11141f36:;
  /* 11141f36 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11141f39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11141f3b je 0x11141f44 */
  if (C.zf) goto L_11141f44;
  /* 11141f3d push eax */
  push32((uint32_t)(EAX));
  /* 11141f3e call 0x11142989 */
  push32(0x11141f43u); f_11142989();
  /* 11141f43 pop ecx */
  ECX = (pop32());
L_11141f44:;
  /* 11141f44 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 11141f47 cmp eax, 0x11146370 */
  { uint32_t _a=(EAX),_b=(0x11146370u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11141f4c je 0x11141f55 */
  if (C.zf) goto L_11141f55;
  /* 11141f4e push eax */
  push32((uint32_t)(EAX));
  /* 11141f4f call 0x11142989 */
  push32(0x11141f54u); f_11142989();
  /* 11141f54 pop ecx */
  ECX = (pop32());
L_11141f55:;
  /* 11141f55 push esi */
  push32((uint32_t)(ESI));
  /* 11141f56 call 0x11142989 */
  push32(0x11141f5bu); f_11142989();
  /* 11141f5b pop ecx */
  ECX = (pop32());
L_11141f5c:;
  /* 11141f5c push 0 */
  push32((uint32_t)(0x0u));
  /* 11141f5e push dword ptr [0x111461f4] */
  push32((uint32_t)(r32((uint32_t)(0x111461f4))));
  /* 11141f64 call dword ptr [0x11145084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145084))), 0x11141f6au);
  /* 11141f6a pop esi */
  ESI = (pop32());
L_11141f6b:;
  /* 11141f6b ret  */
  ESPCHK(0x11141eccu, _esp0);
  ESP += 4; return;
}

/* FUN_10001f6c @ 0x11141f6c (444 bytes, 150 insns) */
void f_11141f6c(void) {
  FTRACE(0x11141f6cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11141f6c push ebp */
  push32((uint32_t)(EBP));
  /* 11141f6d mov ebp, esp */
  EBP = (ESP);
  /* 11141f6f sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11141f72 push ebx */
  push32((uint32_t)(EBX));
  /* 11141f73 push esi */
  push32((uint32_t)(ESI));
  /* 11141f74 push edi */
  push32((uint32_t)(EDI));
  /* 11141f75 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11141f7a call 0x111429d1 */
  push32(0x11141f7fu); f_111429d1();
  /* 11141f7f mov esi, eax */
  ESI = (EAX);
  /* 11141f81 pop ecx */
  ECX = (pop32());
  /* 11141f82 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11141f84 jne 0x11141f8e */
  if (!C.zf) goto L_11141f8e;
  /* 11141f86 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11141f88 call 0x11141cf6 */
  push32(0x11141f8du); f_11141cf6();
  /* 11141f8d pop ecx */
  ECX = (pop32());
L_11141f8e:;
  /* 11141f8e mov dword ptr [0x11146a40], esi */
  w32((uint32_t)(0x11146a40), (ESI));
  /* 11141f94 mov dword ptr [0x11146b40], 0x20 */
  w32((uint32_t)(0x11146b40), (0x20u));
  /* 11141f9e lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_11141fa4:;
  /* 11141fa4 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11141fa6 jae 0x11141fc6 */
  if (!C.cf) goto L_11141fc6;
  /* 11141fa8 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11141fac or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11141faf and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11141fb3 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 11141fb7 mov eax, dword ptr [0x11146a40] */
  EAX = (r32((uint32_t)(0x11146a40)));
  /* 11141fbc add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11141fbf add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11141fc4 jmp 0x11141fa4 */
  goto L_11141fa4;
L_11141fc6:;
  /* 11141fc6 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 11141fc9 push eax */
  push32((uint32_t)(EAX));
  /* 11141fca call dword ptr [0x111450a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111450a4))), 0x11141fd0u);
  /* 11141fd0 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11141fd5 je 0x111420ac */
  if (C.zf) goto L_111420ac;
  /* 11141fdb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11141fde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11141fe0 je 0x111420ac */
  if (C.zf) goto L_111420ac;
  /* 11141fe6 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 11141fe8 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 11141feb lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 11141fee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11141ff1 mov eax, 0x800 */
  EAX = (0x800u);
  /* 11141ff6 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11141ff8 jl 0x11141ffc */
  if ((C.sf!=C.of)) goto L_11141ffc;
  /* 11141ffa mov edi, eax */
  EDI = (EAX);
L_11141ffc:;
  /* 11141ffc cmp dword ptr [0x11146b40], edi */
  { uint32_t _a=(r32((uint32_t)(0x11146b40))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142002 jge 0x1114205a */
  if ((C.sf==C.of)) goto L_1114205a;
  /* 11142004 mov esi, 0x11146a44 */
  ESI = (0x11146a44u);
L_11142009:;
  /* 11142009 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1114200e call 0x111429d1 */
  push32(0x11142013u); f_111429d1();
  /* 11142013 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11142015 pop ecx */
  ECX = (pop32());
  /* 11142016 je 0x11142054 */
  if (C.zf) goto L_11142054;
  /* 11142018 add dword ptr [0x11146b40], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11146b40))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x11146b40), (_r)); fl_add(_a,_b,_r,32); }
  /* 1114201f mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11142021 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_11142027:;
  /* 11142027 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142029 jae 0x11142047 */
  if (!C.cf) goto L_11142047;
  /* 1114202b and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 1114202f or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11142032 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11142036 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 1114203a mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1114203c add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1114203f add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11142045 jmp 0x11142027 */
  goto L_11142027;
L_11142047:;
  /* 11142047 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1114204a cmp dword ptr [0x11146b40], edi */
  { uint32_t _a=(r32((uint32_t)(0x11146b40))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142050 jl 0x11142009 */
  if ((C.sf!=C.of)) goto L_11142009;
  /* 11142052 jmp 0x1114205a */
  goto L_1114205a;
L_11142054:;
  /* 11142054 mov edi, dword ptr [0x11146b40] */
  EDI = (r32((uint32_t)(0x11146b40)));
L_1114205a:;
  /* 1114205a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1114205c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1114205e jle 0x111420ac */
  if ((C.zf||C.sf!=C.of)) goto L_111420ac;
L_11142060:;
  /* 11142060 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11142063 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11142065 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142068 je 0x111420a2 */
  if (C.zf) goto L_111420a2;
  /* 1114206a mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 1114206c test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 1114206e je 0x111420a2 */
  if (C.zf) goto L_111420a2;
  /* 11142070 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11142072 jne 0x1114207f */
  if (!C.zf) goto L_1114207f;
  /* 11142074 push ecx */
  push32((uint32_t)(ECX));
  /* 11142075 call dword ptr [0x111450a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111450a0))), 0x1114207bu);
  /* 1114207b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1114207d je 0x111420a2 */
  if (C.zf) goto L_111420a2;
L_1114207f:;
  /* 1114207f mov ecx, esi */
  ECX = (ESI);
  /* 11142081 mov eax, esi */
  EAX = (ESI);
  /* 11142083 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11142086 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11142089 mov ecx, dword ptr [ecx*4 + 0x11146a40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11146a40)));
  /* 11142090 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11142093 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11142096 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11142099 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 1114209b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1114209d mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 1114209f mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_111420a2:;
  /* 111420a2 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 111420a6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111420a7 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 111420a8 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111420aa jl 0x11142060 */
  if ((C.sf!=C.of)) goto L_11142060;
L_111420ac:;
  /* 111420ac xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_111420ae:;
  /* 111420ae mov ecx, dword ptr [0x11146a40] */
  ECX = (r32((uint32_t)(0x11146a40)));
  /* 111420b4 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 111420b7 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111420bb lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 111420be jne 0x1114210d */
  if (!C.zf) goto L_1114210d;
  /* 111420c0 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 111420c2 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 111420c6 jne 0x111420cd */
  if (!C.zf) goto L_111420cd;
  /* 111420c8 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 111420ca pop eax */
  EAX = (pop32());
  /* 111420cb jmp 0x111420d7 */
  goto L_111420d7;
L_111420cd:;
  /* 111420cd mov eax, ebx */
  EAX = (EBX);
  /* 111420cf dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 111420d0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 111420d2 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111420d4 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_111420d7:;
  /* 111420d7 push eax */
  push32((uint32_t)(EAX));
  /* 111420d8 call dword ptr [0x1114509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1114509c))), 0x111420deu);
  /* 111420de mov edi, eax */
  EDI = (EAX);
  /* 111420e0 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111420e3 je 0x111420fc */
  if (C.zf) goto L_111420fc;
  /* 111420e5 push edi */
  push32((uint32_t)(EDI));
  /* 111420e6 call dword ptr [0x111450a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111450a0))), 0x111420ecu);
  /* 111420ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111420ee je 0x111420fc */
  if (C.zf) goto L_111420fc;
  /* 111420f0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111420f5 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 111420f7 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111420fa jne 0x11142102 */
  if (!C.zf) goto L_11142102;
L_111420fc:;
  /* 111420fc or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11142100 jmp 0x11142111 */
  goto L_11142111;
L_11142102:;
  /* 11142102 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142105 jne 0x11142111 */
  if (!C.zf) goto L_11142111;
  /* 11142107 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 1114210b jmp 0x11142111 */
  goto L_11142111;
L_1114210d:;
  /* 1114210d or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_11142111:;
  /* 11142111 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11142112 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142115 jl 0x111420ae */
  if ((C.sf!=C.of)) goto L_111420ae;
  /* 11142117 push dword ptr [0x11146b40] */
  push32((uint32_t)(r32((uint32_t)(0x11146b40))));
  /* 1114211d call dword ptr [0x11145098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145098))), 0x11142123u);
  /* 11142123 pop edi */
  EDI = (pop32());
  /* 11142124 pop esi */
  ESI = (pop32());
  /* 11142125 pop ebx */
  EBX = (pop32());
  /* 11142126 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11142127 ret  */
  ESPCHK(0x11141f6cu, _esp0);
  ESP += 4; return;
}

/* FUN_10002128 @ 0x11142128 (84 bytes, 33 insns) */
void f_11142128(void) {
  FTRACE(0x11142128u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11142128 push ebx */
  push32((uint32_t)(EBX));
  /* 11142129 push esi */
  push32((uint32_t)(ESI));
  /* 1114212a push edi */
  push32((uint32_t)(EDI));
  /* 1114212b mov esi, 0x11146a40 */
  ESI = (0x11146a40u);
L_11142130:;
  /* 11142130 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11142132 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11142134 je 0x1114216d */
  if (C.zf) goto L_1114216d;
  /* 11142136 mov edi, eax */
  EDI = (EAX);
  /* 11142138 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1114213d cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1114213f jae 0x11142162 */
  if (!C.cf) goto L_11142162;
  /* 11142141 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_11142144:;
  /* 11142144 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142148 je 0x11142151 */
  if (C.zf) goto L_11142151;
  /* 1114214a push ebx */
  push32((uint32_t)(EBX));
  /* 1114214b call dword ptr [0x111450a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111450a8))), 0x11142151u);
L_11142151:;
  /* 11142151 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11142153 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11142156 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1114215b add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1114215e cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142160 jb 0x11142144 */
  if (C.cf) goto L_11142144;
L_11142162:;
  /* 11142162 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11142164 call 0x11142989 */
  push32(0x11142169u); f_11142989();
  /* 11142169 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 1114216c pop ecx */
  ECX = (pop32());
L_1114216d:;
  /* 1114216d add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11142170 cmp esi, 0x11146b40 */
  { uint32_t _a=(ESI),_b=(0x11146b40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142176 jl 0x11142130 */
  if ((C.sf!=C.of)) goto L_11142130;
  /* 11142178 pop edi */
  EDI = (pop32());
  /* 11142179 pop esi */
  ESI = (pop32());
  /* 1114217a pop ebx */
  EBX = (pop32());
  /* 1114217b ret  */
  ESPCHK(0x11142128u, _esp0);
  ESP += 4; return;
}

/* FUN_1000217c @ 0x1114217c (185 bytes, 71 insns) */
void f_1114217c(void) {
  FTRACE(0x1114217cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1114217c push ebx */
  push32((uint32_t)(EBX));
  /* 1114217d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1114217f cmp dword ptr [0x11146b48], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11146b48))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142185 push esi */
  push32((uint32_t)(ESI));
  /* 11142186 push edi */
  push32((uint32_t)(EDI));
  /* 11142187 jne 0x1114218e */
  if (!C.zf) goto L_1114218e;
  /* 11142189 call 0x11142fa3 */
  push32(0x1114218eu); f_11142fa3();
L_1114218e:;
  /* 1114218e mov esi, dword ptr [0x111465e8] */
  ESI = (r32((uint32_t)(0x111465e8)));
  /* 11142194 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11142196:;
  /* 11142196 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11142198 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1114219a je 0x111421ae */
  if (C.zf) goto L_111421ae;
  /* 1114219c cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1114219e je 0x111421a1 */
  if (C.zf) goto L_111421a1;
  /* 111421a0 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_111421a1:;
  /* 111421a1 push esi */
  push32((uint32_t)(ESI));
  /* 111421a2 call 0x11142b50 */
  push32(0x111421a7u); f_11142b50();
  /* 111421a7 pop ecx */
  ECX = (pop32());
  /* 111421a8 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 111421ac jmp 0x11142196 */
  goto L_11142196;
L_111421ae:;
  /* 111421ae lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 111421b5 push eax */
  push32((uint32_t)(EAX));
  /* 111421b6 call 0x111429d1 */
  push32(0x111421bbu); f_111429d1();
  /* 111421bb mov esi, eax */
  ESI = (EAX);
  /* 111421bd pop ecx */
  ECX = (pop32());
  /* 111421be cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111421c0 mov dword ptr [0x11146618], esi */
  w32((uint32_t)(0x11146618), (ESI));
  /* 111421c6 jne 0x111421d0 */
  if (!C.zf) goto L_111421d0;
  /* 111421c8 push 9 */
  push32((uint32_t)(0x9u));
  /* 111421ca call 0x11141cf6 */
  push32(0x111421cfu); f_11141cf6();
  /* 111421cf pop ecx */
  ECX = (pop32());
L_111421d0:;
  /* 111421d0 mov edi, dword ptr [0x111465e8] */
  EDI = (r32((uint32_t)(0x111465e8)));
  /* 111421d6 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111421d8 je 0x11142213 */
  if (C.zf) goto L_11142213;
  /* 111421da push ebp */
  push32((uint32_t)(EBP));
L_111421db:;
  /* 111421db push edi */
  push32((uint32_t)(EDI));
  /* 111421dc call 0x11142b50 */
  push32(0x111421e1u); f_11142b50();
  /* 111421e1 mov ebp, eax */
  EBP = (EAX);
  /* 111421e3 pop ecx */
  ECX = (pop32());
  /* 111421e4 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 111421e5 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111421e8 je 0x1114220c */
  if (C.zf) goto L_1114220c;
  /* 111421ea push ebp */
  push32((uint32_t)(EBP));
  /* 111421eb call 0x111429d1 */
  push32(0x111421f0u); f_111429d1();
  /* 111421f0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111421f2 pop ecx */
  ECX = (pop32());
  /* 111421f3 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 111421f5 jne 0x111421ff */
  if (!C.zf) goto L_111421ff;
  /* 111421f7 push 9 */
  push32((uint32_t)(0x9u));
  /* 111421f9 call 0x11141cf6 */
  push32(0x111421feu); f_11141cf6();
  /* 111421fe pop ecx */
  ECX = (pop32());
L_111421ff:;
  /* 111421ff push edi */
  push32((uint32_t)(EDI));
  /* 11142200 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11142202 call 0x11142a60 */
  push32(0x11142207u); f_11142a60();
  /* 11142207 pop ecx */
  ECX = (pop32());
  /* 11142208 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1114220b pop ecx */
  ECX = (pop32());
L_1114220c:;
  /* 1114220c add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1114220e cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11142210 jne 0x111421db */
  if (!C.zf) goto L_111421db;
  /* 11142212 pop ebp */
  EBP = (pop32());
L_11142213:;
  /* 11142213 push dword ptr [0x111465e8] */
  push32((uint32_t)(r32((uint32_t)(0x111465e8))));
  /* 11142219 call 0x11142989 */
  push32(0x1114221eu); f_11142989();
  /* 1114221e pop ecx */
  ECX = (pop32());
  /* 1114221f mov dword ptr [0x111465e8], ebx */
  w32((uint32_t)(0x111465e8), (EBX));
  /* 11142225 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 11142227 pop edi */
  EDI = (pop32());
  /* 11142228 pop esi */
  ESI = (pop32());
  /* 11142229 mov dword ptr [0x11146b44], 1 */
  w32((uint32_t)(0x11146b44), (0x1u));
  /* 11142233 pop ebx */
  EBX = (pop32());
  /* 11142234 ret  */
  ESPCHK(0x1114217cu, _esp0);
  ESP += 4; return;
}

/* FUN_10002235 @ 0x11142235 (153 bytes, 62 insns) */
void f_11142235(void) {
  FTRACE(0x11142235u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11142235 push ebp */
  push32((uint32_t)(EBP));
  /* 11142236 mov ebp, esp */
  EBP = (ESP);
  /* 11142238 push ecx */
  push32((uint32_t)(ECX));
  /* 11142239 push ecx */
  push32((uint32_t)(ECX));
  /* 1114223a push ebx */
  push32((uint32_t)(EBX));
  /* 1114223b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1114223d cmp dword ptr [0x11146b48], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11146b48))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142243 push esi */
  push32((uint32_t)(ESI));
  /* 11142244 push edi */
  push32((uint32_t)(EDI));
  /* 11142245 jne 0x1114224c */
  if (!C.zf) goto L_1114224c;
  /* 11142247 call 0x11142fa3 */
  push32(0x1114224cu); f_11142fa3();
L_1114224c:;
  /* 1114224c mov esi, 0x1114663c */
  ESI = (0x1114663cu);
  /* 11142251 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11142256 push esi */
  push32((uint32_t)(ESI));
  /* 11142257 push ebx */
  push32((uint32_t)(EBX));
  /* 11142258 call dword ptr [0x1114508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1114508c))), 0x1114225eu);
  /* 1114225e mov eax, dword ptr [0x11146b58] */
  EAX = (r32((uint32_t)(0x11146b58)));
  /* 11142263 mov dword ptr [0x11146628], esi */
  w32((uint32_t)(0x11146628), (ESI));
  /* 11142269 mov edi, esi */
  EDI = (ESI);
  /* 1114226b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1114226d je 0x11142271 */
  if (C.zf) goto L_11142271;
  /* 1114226f mov edi, eax */
  EDI = (EAX);
L_11142271:;
  /* 11142271 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11142274 push eax */
  push32((uint32_t)(EAX));
  /* 11142275 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11142278 push eax */
  push32((uint32_t)(EAX));
  /* 11142279 push ebx */
  push32((uint32_t)(EBX));
  /* 1114227a push ebx */
  push32((uint32_t)(EBX));
  /* 1114227b push edi */
  push32((uint32_t)(EDI));
  /* 1114227c call 0x111422ce */
  push32(0x11142281u); f_111422ce();
  /* 11142281 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11142284 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11142287 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 1114228a push eax */
  push32((uint32_t)(EAX));
  /* 1114228b call 0x111429d1 */
  push32(0x11142290u); f_111429d1();
  /* 11142290 mov esi, eax */
  ESI = (EAX);
  /* 11142292 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11142295 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142297 jne 0x111422a1 */
  if (!C.zf) goto L_111422a1;
  /* 11142299 push 8 */
  push32((uint32_t)(0x8u));
  /* 1114229b call 0x11141cf6 */
  push32(0x111422a0u); f_11141cf6();
  /* 111422a0 pop ecx */
  ECX = (pop32());
L_111422a1:;
  /* 111422a1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 111422a4 push eax */
  push32((uint32_t)(EAX));
  /* 111422a5 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 111422a8 push eax */
  push32((uint32_t)(EAX));
  /* 111422a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111422ac lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 111422af push eax */
  push32((uint32_t)(EAX));
  /* 111422b0 push esi */
  push32((uint32_t)(ESI));
  /* 111422b1 push edi */
  push32((uint32_t)(EDI));
  /* 111422b2 call 0x111422ce */
  push32(0x111422b7u); f_111422ce();
  /* 111422b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111422ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111422bd dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 111422be mov dword ptr [0x11146610], esi */
  w32((uint32_t)(0x11146610), (ESI));
  /* 111422c4 pop edi */
  EDI = (pop32());
  /* 111422c5 pop esi */
  ESI = (pop32());
  /* 111422c6 mov dword ptr [0x1114660c], eax */
  w32((uint32_t)(0x1114660c), (EAX));
  /* 111422cb pop ebx */
  EBX = (pop32());
  /* 111422cc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111422cd ret  */
  ESPCHK(0x11142235u, _esp0);
  ESP += 4; return;
}

/* FUN_100022ce @ 0x111422ce (436 bytes, 187 insns) */
void f_111422ce(void) {
  FTRACE(0x111422ceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111422ce push ebp */
  push32((uint32_t)(EBP));
  /* 111422cf mov ebp, esp */
  EBP = (ESP);
  /* 111422d1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 111422d4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111422d7 push ebx */
  push32((uint32_t)(EBX));
  /* 111422d8 push esi */
  push32((uint32_t)(ESI));
  /* 111422d9 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 111422dc mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 111422df push edi */
  push32((uint32_t)(EDI));
  /* 111422e0 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 111422e3 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 111422e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111422ec test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 111422ee je 0x111422f8 */
  if (C.zf) goto L_111422f8;
  /* 111422f0 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 111422f2 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 111422f5 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_111422f8:;
  /* 111422f8 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111422fb jne 0x11142341 */
  if (!C.zf) goto L_11142341;
L_111422fd:;
  /* 111422fd mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11142300 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11142301 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11142304 je 0x1114232f */
  if (C.zf) goto L_1114232f;
  /* 11142306 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11142308 je 0x1114232f */
  if (C.zf) goto L_1114232f;
  /* 1114230a movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 1114230d test byte ptr [edx + 0x11146921], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11146921)))&(0x4u); fl_logic(_r,8); }
  /* 11142314 je 0x11142322 */
  if (C.zf) goto L_11142322;
  /* 11142316 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11142318 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1114231a je 0x11142322 */
  if (C.zf) goto L_11142322;
  /* 1114231c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1114231e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11142320 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11142321 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11142322:;
  /* 11142322 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11142324 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11142326 je 0x111422fd */
  if (C.zf) goto L_111422fd;
  /* 11142328 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1114232a mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1114232c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1114232d jmp 0x111422fd */
  goto L_111422fd;
L_1114232f:;
  /* 1114232f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11142331 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11142333 je 0x11142339 */
  if (C.zf) goto L_11142339;
  /* 11142335 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11142338 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11142339:;
  /* 11142339 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1114233c jne 0x11142384 */
  if (!C.zf) goto L_11142384;
  /* 1114233e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1114233f jmp 0x11142384 */
  goto L_11142384;
L_11142341:;
  /* 11142341 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11142343 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11142345 je 0x1114234c */
  if (C.zf) goto L_1114234c;
  /* 11142347 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11142349 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1114234b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1114234c:;
  /* 1114234c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1114234e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1114234f movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11142352 test byte ptr [ebx + 0x11146921], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11146921)))&(0x4u); fl_logic(_r,8); }
  /* 11142359 je 0x11142367 */
  if (C.zf) goto L_11142367;
  /* 1114235b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1114235d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1114235f je 0x11142366 */
  if (C.zf) goto L_11142366;
  /* 11142361 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11142363 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 11142365 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11142366:;
  /* 11142366 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11142367:;
  /* 11142367 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1114236a je 0x11142375 */
  if (C.zf) goto L_11142375;
  /* 1114236c test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1114236e je 0x11142379 */
  if (C.zf) goto L_11142379;
  /* 11142370 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11142373 jne 0x11142341 */
  if (!C.zf) goto L_11142341;
L_11142375:;
  /* 11142375 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11142377 jne 0x1114237c */
  if (!C.zf) goto L_1114237c;
L_11142379:;
  /* 11142379 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1114237a jmp 0x11142384 */
  goto L_11142384;
L_1114237c:;
  /* 1114237c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1114237e je 0x11142384 */
  if (C.zf) goto L_11142384;
  /* 11142380 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_11142384:;
  /* 11142384 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_11142388:;
  /* 11142388 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1114238b je 0x11142471 */
  if (C.zf) goto L_11142471;
L_11142391:;
  /* 11142391 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11142393 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11142396 je 0x1114239d */
  if (C.zf) goto L_1114239d;
  /* 11142398 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1114239b jne 0x111423a0 */
  if (!C.zf) goto L_111423a0;
L_1114239d:;
  /* 1114239d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1114239e jmp 0x11142391 */
  goto L_11142391;
L_111423a0:;
  /* 111423a0 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111423a3 je 0x11142471 */
  if (C.zf) goto L_11142471;
  /* 111423a9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 111423ab je 0x111423b5 */
  if (C.zf) goto L_111423b5;
  /* 111423ad mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 111423af add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 111423b2 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_111423b5:;
  /* 111423b5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111423b8 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_111423ba:;
  /* 111423ba mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 111423c1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_111423c3:;
  /* 111423c3 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111423c6 jne 0x111423cc */
  if (!C.zf) goto L_111423cc;
  /* 111423c8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111423c9 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 111423ca jmp 0x111423c3 */
  goto L_111423c3;
L_111423cc:;
  /* 111423cc cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111423cf jne 0x111423fd */
  if (!C.zf) goto L_111423fd;
  /* 111423d1 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 111423d4 jne 0x111423fb */
  if (!C.zf) goto L_111423fb;
  /* 111423d6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 111423d8 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111423db je 0x111423ea */
  if (C.zf) goto L_111423ea;
  /* 111423dd cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111423e1 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 111423e4 jne 0x111423ea */
  if (!C.zf) goto L_111423ea;
  /* 111423e6 mov eax, edx */
  EAX = (EDX);
  /* 111423e8 jmp 0x111423ed */
  goto L_111423ed;
L_111423ea:;
  /* 111423ea mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_111423ed:;
  /* 111423ed mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 111423f0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111423f2 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111423f5 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 111423f8 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_111423fb:;
  /* 111423fb shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_111423fd:;
  /* 111423fd mov edx, ebx */
  EDX = (EBX);
  /* 111423ff dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11142400 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11142402 je 0x11142412 */
  if (C.zf) goto L_11142412;
  /* 11142404 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11142405:;
  /* 11142405 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11142407 je 0x1114240d */
  if (C.zf) goto L_1114240d;
  /* 11142409 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 1114240c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1114240d:;
  /* 1114240d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1114240f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11142410 jne 0x11142405 */
  if (!C.zf) goto L_11142405;
L_11142412:;
  /* 11142412 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11142414 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11142416 je 0x11142462 */
  if (C.zf) goto L_11142462;
  /* 11142418 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1114241c jne 0x11142428 */
  if (!C.zf) goto L_11142428;
  /* 1114241e cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11142421 je 0x11142462 */
  if (C.zf) goto L_11142462;
  /* 11142423 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11142426 je 0x11142462 */
  if (C.zf) goto L_11142462;
L_11142428:;
  /* 11142428 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1114242c je 0x1114245c */
  if (C.zf) goto L_1114245c;
  /* 1114242e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11142430 je 0x1114244b */
  if (C.zf) goto L_1114244b;
  /* 11142432 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11142435 test byte ptr [ebx + 0x11146921], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11146921)))&(0x4u); fl_logic(_r,8); }
  /* 1114243c je 0x11142444 */
  if (C.zf) goto L_11142444;
  /* 1114243e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11142440 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11142441 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11142442 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11142444:;
  /* 11142444 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11142446 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11142448 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11142449 jmp 0x1114245a */
  goto L_1114245a;
L_1114244b:;
  /* 1114244b movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 1114244e test byte ptr [edx + 0x11146921], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11146921)))&(0x4u); fl_logic(_r,8); }
  /* 11142455 je 0x1114245a */
  if (C.zf) goto L_1114245a;
  /* 11142457 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11142458 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1114245a:;
  /* 1114245a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1114245c:;
  /* 1114245c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1114245d jmp 0x111423ba */
  goto L_111423ba;
L_11142462:;
  /* 11142462 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11142464 je 0x1114246a */
  if (C.zf) goto L_1114246a;
  /* 11142466 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11142469 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1114246a:;
  /* 1114246a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1114246c jmp 0x11142388 */
  goto L_11142388;
L_11142471:;
  /* 11142471 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11142473 je 0x11142478 */
  if (C.zf) goto L_11142478;
  /* 11142475 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11142478:;
  /* 11142478 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1114247b pop edi */
  EDI = (pop32());
  /* 1114247c pop esi */
  ESI = (pop32());
  /* 1114247d pop ebx */
  EBX = (pop32());
  /* 1114247e inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 11142480 pop ebp */
  EBP = (pop32());
  /* 11142481 ret  */
  ESPCHK(0x111422ceu, _esp0);
  ESP += 4; return;
}

/* FUN_10002482 @ 0x11142482 (306 bytes, 132 insns) */
void f_11142482(void) {
  FTRACE(0x11142482u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11142482 push ecx */
  push32((uint32_t)(ECX));
  /* 11142483 push ecx */
  push32((uint32_t)(ECX));
  /* 11142484 mov eax, dword ptr [0x11146740] */
  EAX = (r32((uint32_t)(0x11146740)));
  /* 11142489 push ebx */
  push32((uint32_t)(EBX));
  /* 1114248a push ebp */
  push32((uint32_t)(EBP));
  /* 1114248b mov ebp, dword ptr [0x1114505c] */
  EBP = (r32((uint32_t)(0x1114505c)));
  /* 11142491 push esi */
  push32((uint32_t)(ESI));
  /* 11142492 push edi */
  push32((uint32_t)(EDI));
  /* 11142493 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11142495 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11142497 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11142499 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1114249b jne 0x111424d0 */
  if (!C.zf) goto L_111424d0;
  /* 1114249d call ebp */
  call_ind((uint32_t)(EBP), 0x1114249fu);
  /* 1114249f mov esi, eax */
  ESI = (EAX);
  /* 111424a1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111424a3 je 0x111424b1 */
  if (C.zf) goto L_111424b1;
  /* 111424a5 mov dword ptr [0x11146740], 1 */
  w32((uint32_t)(0x11146740), (0x1u));
  /* 111424af jmp 0x111424d9 */
  goto L_111424d9;
L_111424b1:;
  /* 111424b1 call dword ptr [0x11145060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145060))), 0x111424b7u);
  /* 111424b7 mov edi, eax */
  EDI = (EAX);
  /* 111424b9 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111424bb je 0x111425ab */
  if (C.zf) goto L_111425ab;
  /* 111424c1 mov dword ptr [0x11146740], 2 */
  w32((uint32_t)(0x11146740), (0x2u));
  /* 111424cb jmp 0x1114255f */
  goto L_1114255f;
L_111424d0:;
  /* 111424d0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111424d3 jne 0x1114255a */
  if (!C.zf) goto L_1114255a;
L_111424d9:;
  /* 111424d9 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111424db jne 0x111424e9 */
  if (!C.zf) goto L_111424e9;
  /* 111424dd call ebp */
  call_ind((uint32_t)(EBP), 0x111424dfu);
  /* 111424df mov esi, eax */
  ESI = (EAX);
  /* 111424e1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111424e3 je 0x111425ab */
  if (C.zf) goto L_111425ab;
L_111424e9:;
  /* 111424e9 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 111424ec mov eax, esi */
  EAX = (ESI);
  /* 111424ee je 0x111424fe */
  if (C.zf) goto L_111424fe;
L_111424f0:;
  /* 111424f0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111424f1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111424f2 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 111424f5 jne 0x111424f0 */
  if (!C.zf) goto L_111424f0;
  /* 111424f7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111424f8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111424f9 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 111424fc jne 0x111424f0 */
  if (!C.zf) goto L_111424f0;
L_111424fe:;
  /* 111424fe sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11142500 mov edi, dword ptr [0x11145064] */
  EDI = (r32((uint32_t)(0x11145064)));
  /* 11142506 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11142508 push ebx */
  push32((uint32_t)(EBX));
  /* 11142509 push ebx */
  push32((uint32_t)(EBX));
  /* 1114250a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1114250b push ebx */
  push32((uint32_t)(EBX));
  /* 1114250c push ebx */
  push32((uint32_t)(EBX));
  /* 1114250d push eax */
  push32((uint32_t)(EAX));
  /* 1114250e push esi */
  push32((uint32_t)(ESI));
  /* 1114250f push ebx */
  push32((uint32_t)(EBX));
  /* 11142510 push ebx */
  push32((uint32_t)(EBX));
  /* 11142511 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 11142515 call edi */
  call_ind((uint32_t)(EDI), 0x11142517u);
  /* 11142517 mov ebp, eax */
  EBP = (EAX);
  /* 11142519 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1114251b je 0x1114254f */
  if (C.zf) goto L_1114254f;
  /* 1114251d push ebp */
  push32((uint32_t)(EBP));
  /* 1114251e call 0x111429d1 */
  push32(0x11142523u); f_111429d1();
  /* 11142523 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142525 pop ecx */
  ECX = (pop32());
  /* 11142526 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 1114252a je 0x1114254f */
  if (C.zf) goto L_1114254f;
  /* 1114252c push ebx */
  push32((uint32_t)(EBX));
  /* 1114252d push ebx */
  push32((uint32_t)(EBX));
  /* 1114252e push ebp */
  push32((uint32_t)(EBP));
  /* 1114252f push eax */
  push32((uint32_t)(EAX));
  /* 11142530 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11142534 push esi */
  push32((uint32_t)(ESI));
  /* 11142535 push ebx */
  push32((uint32_t)(EBX));
  /* 11142536 push ebx */
  push32((uint32_t)(EBX));
  /* 11142537 call edi */
  call_ind((uint32_t)(EDI), 0x11142539u);
  /* 11142539 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1114253b jne 0x1114254b */
  if (!C.zf) goto L_1114254b;
  /* 1114253d push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11142541 call 0x11142989 */
  push32(0x11142546u); f_11142989();
  /* 11142546 pop ecx */
  ECX = (pop32());
  /* 11142547 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_1114254b:;
  /* 1114254b mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_1114254f:;
  /* 1114254f push esi */
  push32((uint32_t)(ESI));
  /* 11142550 call dword ptr [0x11145068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145068))), 0x11142556u);
  /* 11142556 mov eax, ebx */
  EAX = (EBX);
  /* 11142558 jmp 0x111425ad */
  goto L_111425ad;
L_1114255a:;
  /* 1114255a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1114255d jne 0x111425ab */
  if (!C.zf) goto L_111425ab;
L_1114255f:;
  /* 1114255f cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142561 jne 0x1114256f */
  if (!C.zf) goto L_1114256f;
  /* 11142563 call dword ptr [0x11145060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145060))), 0x11142569u);
  /* 11142569 mov edi, eax */
  EDI = (EAX);
  /* 1114256b cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1114256d je 0x111425ab */
  if (C.zf) goto L_111425ab;
L_1114256f:;
  /* 1114256f cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11142571 mov eax, edi */
  EAX = (EDI);
  /* 11142573 je 0x1114257f */
  if (C.zf) goto L_1114257f;
L_11142575:;
  /* 11142575 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11142576 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11142578 jne 0x11142575 */
  if (!C.zf) goto L_11142575;
  /* 1114257a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1114257b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1114257d jne 0x11142575 */
  if (!C.zf) goto L_11142575;
L_1114257f:;
  /* 1114257f sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11142581 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11142582 mov ebp, eax */
  EBP = (EAX);
  /* 11142584 push ebp */
  push32((uint32_t)(EBP));
  /* 11142585 call 0x111429d1 */
  push32(0x1114258au); f_111429d1();
  /* 1114258a mov esi, eax */
  ESI = (EAX);
  /* 1114258c pop ecx */
  ECX = (pop32());
  /* 1114258d cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1114258f jne 0x11142595 */
  if (!C.zf) goto L_11142595;
  /* 11142591 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11142593 jmp 0x111425a0 */
  goto L_111425a0;
L_11142595:;
  /* 11142595 push ebp */
  push32((uint32_t)(EBP));
  /* 11142596 push edi */
  push32((uint32_t)(EDI));
  /* 11142597 push esi */
  push32((uint32_t)(ESI));
  /* 11142598 call 0x11142fc0 */
  push32(0x1114259du); f_11142fc0();
  /* 1114259d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111425a0:;
  /* 111425a0 push edi */
  push32((uint32_t)(EDI));
  /* 111425a1 call dword ptr [0x11145090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145090))), 0x111425a7u);
  /* 111425a7 mov eax, esi */
  EAX = (ESI);
  /* 111425a9 jmp 0x111425ad */
  goto L_111425ad;
L_111425ab:;
  /* 111425ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111425ad:;
  /* 111425ad pop edi */
  EDI = (pop32());
  /* 111425ae pop esi */
  ESI = (pop32());
  /* 111425af pop ebp */
  EBP = (pop32());
  /* 111425b0 pop ebx */
  EBX = (pop32());
  /* 111425b1 pop ecx */
  ECX = (pop32());
  /* 111425b2 pop ecx */
  ECX = (pop32());
  /* 111425b3 ret  */
  ESPCHK(0x11142482u, _esp0);
  ESP += 4; return;
}

/* FUN_100025b4 @ 0x111425b4 (60 bytes, 20 insns) */
void f_111425b4(void) {
  FTRACE(0x111425b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111425b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111425b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111425b8 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111425bc push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 111425c1 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 111425c4 push eax */
  push32((uint32_t)(EAX));
  /* 111425c5 call dword ptr [0x11145054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145054))), 0x111425cbu);
  /* 111425cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111425cd mov dword ptr [0x11146a28], eax */
  w32((uint32_t)(0x11146a28), (EAX));
  /* 111425d2 je 0x111425e9 */
  if (C.zf) goto L_111425e9;
  /* 111425d4 call 0x111432f5 */
  push32(0x111425d9u); f_111432f5();
  /* 111425d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111425db jne 0x111425ec */
  if (!C.zf) goto L_111425ec;
  /* 111425dd push dword ptr [0x11146a28] */
  push32((uint32_t)(r32((uint32_t)(0x11146a28))));
  /* 111425e3 call dword ptr [0x11145058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145058))), 0x111425e9u);
L_111425e9:;
  /* 111425e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111425eb ret  */
  ESPCHK(0x111425b4u, _esp0);
  ESP += 4; return;
L_111425ec:;
  /* 111425ec push 1 */
  push32((uint32_t)(0x1u));
  /* 111425ee pop eax */
  EAX = (pop32());
  /* 111425ef ret  */
  ESPCHK(0x111425b4u, _esp0);
  ESP += 4; return;
}

/* FUN_100025f0 @ 0x111425f0 (117 bytes, 38 insns) */
void f_111425f0(void) {
  FTRACE(0x111425f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111425f0 push ebx */
  push32((uint32_t)(EBX));
  /* 111425f1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 111425f3 cmp dword ptr [0x111467f8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x111467f8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111425f9 push ebp */
  push32((uint32_t)(EBP));
  /* 111425fa mov ebp, dword ptr [0x1114504c] */
  EBP = (r32((uint32_t)(0x1114504c)));
  /* 11142600 jle 0x11142646 */
  if ((C.zf||C.sf!=C.of)) goto L_11142646;
  /* 11142602 mov eax, dword ptr [0x111467fc] */
  EAX = (r32((uint32_t)(0x111467fc)));
  /* 11142607 push esi */
  push32((uint32_t)(ESI));
  /* 11142608 push edi */
  push32((uint32_t)(EDI));
  /* 11142609 mov edi, dword ptr [0x11145050] */
  EDI = (r32((uint32_t)(0x11145050)));
  /* 1114260f lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_11142612:;
  /* 11142612 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11142617 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1114261c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1114261e call edi */
  call_ind((uint32_t)(EDI), 0x11142620u);
  /* 11142620 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11142625 push 0 */
  push32((uint32_t)(0x0u));
  /* 11142627 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11142629 call edi */
  call_ind((uint32_t)(EDI), 0x1114262bu);
  /* 1114262b push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 1114262e push 0 */
  push32((uint32_t)(0x0u));
  /* 11142630 push dword ptr [0x11146a28] */
  push32((uint32_t)(r32((uint32_t)(0x11146a28))));
  /* 11142636 call ebp */
  call_ind((uint32_t)(EBP), 0x11142638u);
  /* 11142638 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1114263b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1114263c cmp ebx, dword ptr [0x111467f8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x111467f8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142642 jl 0x11142612 */
  if ((C.sf!=C.of)) goto L_11142612;
  /* 11142644 pop edi */
  EDI = (pop32());
  /* 11142645 pop esi */
  ESI = (pop32());
L_11142646:;
  /* 11142646 push dword ptr [0x111467fc] */
  push32((uint32_t)(r32((uint32_t)(0x111467fc))));
  /* 1114264c push 0 */
  push32((uint32_t)(0x0u));
  /* 1114264e push dword ptr [0x11146a28] */
  push32((uint32_t)(r32((uint32_t)(0x11146a28))));
  /* 11142654 call ebp */
  call_ind((uint32_t)(EBP), 0x11142656u);
  /* 11142656 push dword ptr [0x11146a28] */
  push32((uint32_t)(r32((uint32_t)(0x11146a28))));
  /* 1114265c call dword ptr [0x11145058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145058))), 0x11142662u);
  /* 11142662 pop ebp */
  EBP = (pop32());
  /* 11142663 pop ebx */
  EBX = (pop32());
  /* 11142664 ret  */
  ESPCHK(0x111425f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002665 @ 0x11142665 (57 bytes, 18 insns) */
void f_11142665(void) {
  FTRACE(0x11142665u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11142665 mov eax, dword ptr [0x111465f0] */
  EAX = (r32((uint32_t)(0x111465f0)));
  /* 1114266a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1114266d je 0x1114267c */
  if (C.zf) goto L_1114267c;
  /* 1114266f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11142671 jne 0x1114269d */
  if (!C.zf) goto L_1114269d;
  /* 11142673 cmp dword ptr [0x111465f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111465f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1114267a jne 0x1114269d */
  if (!C.zf) goto L_1114269d;
L_1114267c:;
  /* 1114267c push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11142681 call 0x1114269e */
  push32(0x11142686u); f_1114269e();
  /* 11142686 mov eax, dword ptr [0x11146744] */
  EAX = (r32((uint32_t)(0x11146744)));
  /* 1114268b pop ecx */
  ECX = (pop32());
  /* 1114268c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1114268e je 0x11142692 */
  if (C.zf) goto L_11142692;
  /* 11142690 call eax */
  call_ind((uint32_t)(EAX), 0x11142692u);
L_11142692:;
  /* 11142692 push 0xff */
  push32((uint32_t)(0xffu));
  /* 11142697 call 0x1114269e */
  push32(0x1114269cu); f_1114269e();
  /* 1114269c pop ecx */
  ECX = (pop32());
L_1114269d:;
  /* 1114269d ret  */
  ESPCHK(0x11142665u, _esp0);
  ESP += 4; return;
}

/* FUN_1000269e @ 0x1114269e (339 bytes, 100 insns) */
void f_1114269e(void) {
  FTRACE(0x1114269eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1114269e push ebp */
  push32((uint32_t)(EBP));
  /* 1114269f mov ebp, esp */
  EBP = (ESP);
  /* 111426a1 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111426a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111426aa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111426ac mov eax, 0x11146220 */
  EAX = (0x11146220u);
L_111426b1:;
  /* 111426b1 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111426b3 je 0x111426c0 */
  if (C.zf) goto L_111426c0;
  /* 111426b5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111426b8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 111426b9 cmp eax, 0x111462b0 */
  { uint32_t _a=(EAX),_b=(0x111462b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111426be jl 0x111426b1 */
  if ((C.sf!=C.of)) goto L_111426b1;
L_111426c0:;
  /* 111426c0 push esi */
  push32((uint32_t)(ESI));
  /* 111426c1 mov esi, ecx */
  ESI = (ECX);
  /* 111426c3 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 111426c6 cmp edx, dword ptr [esi + 0x11146220] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x11146220))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111426cc jne 0x111427ee */
  if (!C.zf) goto L_111427ee;
  /* 111426d2 mov eax, dword ptr [0x111465f0] */
  EAX = (r32((uint32_t)(0x111465f0)));
  /* 111426d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111426da je 0x111427c8 */
  if (C.zf) goto L_111427c8;
  /* 111426e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111426e2 jne 0x111426f1 */
  if (!C.zf) goto L_111426f1;
  /* 111426e4 cmp dword ptr [0x111465f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111465f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111426eb je 0x111427c8 */
  if (C.zf) goto L_111427c8;
L_111426f1:;
  /* 111426f1 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111426f7 je 0x111427ee */
  if (C.zf) goto L_111427ee;
  /* 111426fd lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11142703 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11142708 push eax */
  push32((uint32_t)(EAX));
  /* 11142709 push 0 */
  push32((uint32_t)(0x0u));
  /* 1114270b call dword ptr [0x1114508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1114508c))), 0x11142711u);
  /* 11142711 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11142713 jne 0x11142728 */
  if (!C.zf) goto L_11142728;
  /* 11142715 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 1114271b push 0x11145408 */
  push32((uint32_t)(0x11145408u));
  /* 11142720 push eax */
  push32((uint32_t)(EAX));
  /* 11142721 call 0x11142a60 */
  push32(0x11142726u); f_11142a60();
  /* 11142726 pop ecx */
  ECX = (pop32());
  /* 11142727 pop ecx */
  ECX = (pop32());
L_11142728:;
  /* 11142728 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 1114272e push edi */
  push32((uint32_t)(EDI));
  /* 1114272f push eax */
  push32((uint32_t)(EAX));
  /* 11142730 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 11142736 call 0x11142b50 */
  push32(0x1114273bu); f_11142b50();
  /* 1114273b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1114273c pop ecx */
  ECX = (pop32());
  /* 1114273d cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142740 jbe 0x1114276b */
  if ((C.cf||C.zf)) goto L_1114276b;
  /* 11142742 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11142748 push eax */
  push32((uint32_t)(EAX));
  /* 11142749 call 0x11142b50 */
  push32(0x1114274eu); f_11142b50();
  /* 1114274e mov edi, eax */
  EDI = (EAX);
  /* 11142750 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11142756 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11142759 push 3 */
  push32((uint32_t)(0x3u));
  /* 1114275b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1114275d push 0x11145404 */
  push32((uint32_t)(0x11145404u));
  /* 11142762 push edi */
  push32((uint32_t)(EDI));
  /* 11142763 call 0x11143bd0 */
  push32(0x11142768u); f_11143bd0();
  /* 11142768 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1114276b:;
  /* 1114276b lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11142771 push 0x111453e8 */
  push32((uint32_t)(0x111453e8u));
  /* 11142776 push eax */
  push32((uint32_t)(EAX));
  /* 11142777 call 0x11142a60 */
  push32(0x1114277cu); f_11142a60();
  /* 1114277c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11142782 push edi */
  push32((uint32_t)(EDI));
  /* 11142783 push eax */
  push32((uint32_t)(EAX));
  /* 11142784 call 0x11142a70 */
  push32(0x11142789u); f_11142a70();
  /* 11142789 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 1114278f push 0x111453e4 */
  push32((uint32_t)(0x111453e4u));
  /* 11142794 push eax */
  push32((uint32_t)(EAX));
  /* 11142795 call 0x11142a70 */
  push32(0x1114279au); f_11142a70();
  /* 1114279a push dword ptr [esi + 0x11146224] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x11146224))));
  /* 111427a0 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 111427a6 push eax */
  push32((uint32_t)(EAX));
  /* 111427a7 call 0x11142a70 */
  push32(0x111427acu); f_11142a70();
  /* 111427ac push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 111427b1 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 111427b7 push 0x111453bc */
  push32((uint32_t)(0x111453bcu));
  /* 111427bc push eax */
  push32((uint32_t)(EAX));
  /* 111427bd call 0x11143b3e */
  push32(0x111427c2u); f_11143b3e();
  /* 111427c2 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111427c5 pop edi */
  EDI = (pop32());
  /* 111427c6 jmp 0x111427ee */
  goto L_111427ee;
L_111427c8:;
  /* 111427c8 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 111427cb lea esi, [esi + 0x11146224] */
  ESI = ((uint32_t)(ESI + 0x11146224));
  /* 111427d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 111427d3 push eax */
  push32((uint32_t)(EAX));
  /* 111427d4 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 111427d6 call 0x11142b50 */
  push32(0x111427dbu); f_11142b50();
  /* 111427db pop ecx */
  ECX = (pop32());
  /* 111427dc push eax */
  push32((uint32_t)(EAX));
  /* 111427dd push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 111427df push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 111427e1 call dword ptr [0x1114509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1114509c))), 0x111427e7u);
  /* 111427e7 push eax */
  push32((uint32_t)(EAX));
  /* 111427e8 call dword ptr [0x11145048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145048))), 0x111427eeu);
L_111427ee:;
  /* 111427ee pop esi */
  ESI = (pop32());
  /* 111427ef leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111427f0 ret  */
  ESPCHK(0x1114269eu, _esp0);
  ESP += 4; return;
}

/* FUN_100027f1 @ 0x111427f1 (41 bytes, 12 insns) */
void f_111427f1(void) {
  FTRACE(0x111427f1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111427f1 push esi */
  push32((uint32_t)(ESI));
  /* 111427f2 mov esi, dword ptr [0x11145044] */
  ESI = (r32((uint32_t)(0x11145044)));
  /* 111427f8 push dword ptr [0x111462f4] */
  push32((uint32_t)(r32((uint32_t)(0x111462f4))));
  /* 111427fe call esi */
  call_ind((uint32_t)(ESI), 0x11142800u);
  /* 11142800 push dword ptr [0x111462e4] */
  push32((uint32_t)(r32((uint32_t)(0x111462e4))));
  /* 11142806 call esi */
  call_ind((uint32_t)(ESI), 0x11142808u);
  /* 11142808 push dword ptr [0x111462d4] */
  push32((uint32_t)(r32((uint32_t)(0x111462d4))));
  /* 1114280e call esi */
  call_ind((uint32_t)(ESI), 0x11142810u);
  /* 11142810 push dword ptr [0x111462b4] */
  push32((uint32_t)(r32((uint32_t)(0x111462b4))));
  /* 11142816 call esi */
  call_ind((uint32_t)(ESI), 0x11142818u);
  /* 11142818 pop esi */
  ESI = (pop32());
  /* 11142819 ret  */
  ESPCHK(0x111427f1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000281a @ 0x1114281a (108 bytes, 34 insns) */
void f_1114281a(void) {
  FTRACE(0x1114281au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1114281a push esi */
  push32((uint32_t)(ESI));
  /* 1114281b push edi */
  push32((uint32_t)(EDI));
  /* 1114281c mov edi, dword ptr [0x111450a8] */
  EDI = (r32((uint32_t)(0x111450a8)));
  /* 11142822 mov esi, 0x111462b0 */
  ESI = (0x111462b0u);
L_11142827:;
  /* 11142827 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11142829 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1114282b je 0x11142858 */
  if (C.zf) goto L_11142858;
  /* 1114282d cmp esi, 0x111462f4 */
  { uint32_t _a=(ESI),_b=(0x111462f4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142833 je 0x11142858 */
  if (C.zf) goto L_11142858;
  /* 11142835 cmp esi, 0x111462e4 */
  { uint32_t _a=(ESI),_b=(0x111462e4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1114283b je 0x11142858 */
  if (C.zf) goto L_11142858;
  /* 1114283d cmp esi, 0x111462d4 */
  { uint32_t _a=(ESI),_b=(0x111462d4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142843 je 0x11142858 */
  if (C.zf) goto L_11142858;
  /* 11142845 cmp esi, 0x111462b4 */
  { uint32_t _a=(ESI),_b=(0x111462b4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1114284b je 0x11142858 */
  if (C.zf) goto L_11142858;
  /* 1114284d push eax */
  push32((uint32_t)(EAX));
  /* 1114284e call edi */
  call_ind((uint32_t)(EDI), 0x11142850u);
  /* 11142850 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11142852 call 0x11142989 */
  push32(0x11142857u); f_11142989();
  /* 11142857 pop ecx */
  ECX = (pop32());
L_11142858:;
  /* 11142858 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1114285b cmp esi, 0x11146370 */
  { uint32_t _a=(ESI),_b=(0x11146370u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142861 jl 0x11142827 */
  if ((C.sf!=C.of)) goto L_11142827;
  /* 11142863 push dword ptr [0x111462d4] */
  push32((uint32_t)(r32((uint32_t)(0x111462d4))));
  /* 11142869 call edi */
  call_ind((uint32_t)(EDI), 0x1114286bu);
  /* 1114286b push dword ptr [0x111462e4] */
  push32((uint32_t)(r32((uint32_t)(0x111462e4))));
  /* 11142871 call edi */
  call_ind((uint32_t)(EDI), 0x11142873u);
  /* 11142873 push dword ptr [0x111462f4] */
  push32((uint32_t)(r32((uint32_t)(0x111462f4))));
  /* 11142879 call edi */
  call_ind((uint32_t)(EDI), 0x1114287bu);
  /* 1114287b push dword ptr [0x111462b4] */
  push32((uint32_t)(r32((uint32_t)(0x111462b4))));
  /* 11142881 call edi */
  call_ind((uint32_t)(EDI), 0x11142883u);
  /* 11142883 pop edi */
  EDI = (pop32());
  /* 11142884 pop esi */
  ESI = (pop32());
  /* 11142885 ret  */
  ESPCHK(0x1114281au, _esp0);
  ESP += 4; return;
}

/* FUN_10002886 @ 0x11142886 (97 bytes, 37 insns) */
void f_11142886(void) {
  FTRACE(0x11142886u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11142886 push ebp */
  push32((uint32_t)(EBP));
  /* 11142887 mov ebp, esp */
  EBP = (ESP);
  /* 11142889 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1114288c push esi */
  push32((uint32_t)(ESI));
  /* 1114288d cmp dword ptr [eax*4 + 0x111462b0], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x111462b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142895 lea esi, [eax*4 + 0x111462b0] */
  ESI = ((uint32_t)(EAX*4 + 0x111462b0));
  /* 1114289c jne 0x111428dc */
  if (!C.zf) goto L_111428dc;
  /* 1114289e push edi */
  push32((uint32_t)(EDI));
  /* 1114289f push 0x18 */
  push32((uint32_t)(0x18u));
  /* 111428a1 call 0x111429d1 */
  push32(0x111428a6u); f_111429d1();
  /* 111428a6 mov edi, eax */
  EDI = (EAX);
  /* 111428a8 pop ecx */
  ECX = (pop32());
  /* 111428a9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 111428ab jne 0x111428b5 */
  if (!C.zf) goto L_111428b5;
  /* 111428ad push 0x11 */
  push32((uint32_t)(0x11u));
  /* 111428af call 0x11141cf6 */
  push32(0x111428b4u); f_11141cf6();
  /* 111428b4 pop ecx */
  ECX = (pop32());
L_111428b5:;
  /* 111428b5 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 111428b7 call 0x11142886 */
  push32(0x111428bcu); f_11142886();
  /* 111428bc cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111428bf pop ecx */
  ECX = (pop32());
  /* 111428c0 push edi */
  push32((uint32_t)(EDI));
  /* 111428c1 jne 0x111428cd */
  if (!C.zf) goto L_111428cd;
  /* 111428c3 call dword ptr [0x11145044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145044))), 0x111428c9u);
  /* 111428c9 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 111428cb jmp 0x111428d3 */
  goto L_111428d3;
L_111428cd:;
  /* 111428cd call 0x11142989 */
  push32(0x111428d2u); f_11142989();
  /* 111428d2 pop ecx */
  ECX = (pop32());
L_111428d3:;
  /* 111428d3 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 111428d5 call 0x111428e7 */
  push32(0x111428dau); f_111428e7();
  /* 111428da pop ecx */
  ECX = (pop32());
  /* 111428db pop edi */
  EDI = (pop32());
L_111428dc:;
  /* 111428dc push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 111428de call dword ptr [0x11145040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145040))), 0x111428e4u);
  /* 111428e4 pop esi */
  ESI = (pop32());
  /* 111428e5 pop ebp */
  EBP = (pop32());
  /* 111428e6 ret  */
  ESPCHK(0x11142886u, _esp0);
  ESP += 4; return;
}

/* FUN_100028e7 @ 0x111428e7 (21 bytes, 7 insns) */
void f_111428e7(void) {
  FTRACE(0x111428e7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111428e7 push ebp */
  push32((uint32_t)(EBP));
  /* 111428e8 mov ebp, esp */
  EBP = (ESP);
  /* 111428ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111428ed push dword ptr [eax*4 + 0x111462b0] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x111462b0))));
  /* 111428f4 call dword ptr [0x1114503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1114503c))), 0x111428fau);
  /* 111428fa pop ebp */
  EBP = (pop32());
  /* 111428fb ret  */
  ESPCHK(0x111428e7u, _esp0);
  ESP += 4; return;
}

/* FUN_100028fc @ 0x111428fc (141 bytes, 56 insns) */
void f_111428fc(void) {
  FTRACE(0x111428fcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111428fc push ebx */
  push32((uint32_t)(EBX));
  /* 111428fd push esi */
  push32((uint32_t)(ESI));
  /* 111428fe mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11142902 push edi */
  push32((uint32_t)(EDI));
  /* 11142903 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11142908 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1114290b mov ebx, esi */
  EBX = (ESI);
  /* 1114290d ja 0x1114291c */
  if ((!C.cf&&!C.zf)) goto L_1114291c;
  /* 1114290f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11142911 jne 0x11142916 */
  if (!C.zf) goto L_11142916;
  /* 11142913 push 1 */
  push32((uint32_t)(0x1u));
  /* 11142915 pop esi */
  ESI = (pop32());
L_11142916:;
  /* 11142916 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11142919 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_1114291c:;
  /* 1114291c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1114291e cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142921 ja 0x1114295d */
  if ((!C.cf&&!C.zf)) goto L_1114295d;
  /* 11142923 cmp ebx, dword ptr [0x11146500] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11146500))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142929 ja 0x11142948 */
  if ((!C.cf&&!C.zf)) goto L_11142948;
  /* 1114292b push 9 */
  push32((uint32_t)(0x9u));
  /* 1114292d call 0x11142886 */
  push32(0x11142932u); f_11142886();
  /* 11142932 push ebx */
  push32((uint32_t)(EBX));
  /* 11142933 call 0x11143689 */
  push32(0x11142938u); f_11143689();
  /* 11142938 push 9 */
  push32((uint32_t)(0x9u));
  /* 1114293a mov edi, eax */
  EDI = (EAX);
  /* 1114293c call 0x111428e7 */
  push32(0x11142941u); f_111428e7();
  /* 11142941 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11142944 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11142946 jne 0x11142973 */
  if (!C.zf) goto L_11142973;
L_11142948:;
  /* 11142948 push esi */
  push32((uint32_t)(ESI));
  /* 11142949 push 8 */
  push32((uint32_t)(0x8u));
  /* 1114294b push dword ptr [0x11146a28] */
  push32((uint32_t)(r32((uint32_t)(0x11146a28))));
  /* 11142951 call dword ptr [0x11145038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145038))), 0x11142957u);
  /* 11142957 mov edi, eax */
  EDI = (EAX);
  /* 11142959 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1114295b jne 0x1114297f */
  if (!C.zf) goto L_1114297f;
L_1114295d:;
  /* 1114295d cmp dword ptr [0x111467bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111467bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142964 je 0x1114297f */
  if (C.zf) goto L_1114297f;
  /* 11142966 push esi */
  push32((uint32_t)(ESI));
  /* 11142967 call 0x11143d28 */
  push32(0x1114296cu); f_11143d28();
  /* 1114296c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1114296e pop ecx */
  ECX = (pop32());
  /* 1114296f je 0x11142985 */
  if (C.zf) goto L_11142985;
  /* 11142971 jmp 0x1114291c */
  goto L_1114291c;
L_11142973:;
  /* 11142973 push ebx */
  push32((uint32_t)(EBX));
  /* 11142974 push 0 */
  push32((uint32_t)(0x0u));
  /* 11142976 push edi */
  push32((uint32_t)(EDI));
  /* 11142977 call 0x11143cd0 */
  push32(0x1114297cu); f_11143cd0();
  /* 1114297c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1114297f:;
  /* 1114297f mov eax, edi */
  EAX = (EDI);
L_11142981:;
  /* 11142981 pop edi */
  EDI = (pop32());
  /* 11142982 pop esi */
  ESI = (pop32());
  /* 11142983 pop ebx */
  EBX = (pop32());
  /* 11142984 ret  */
  ESPCHK(0x111428fcu, _esp0);
  ESP += 4; return;
L_11142985:;
  /* 11142985 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11142987 jmp 0x11142981 */
  goto L_11142981;
}

/* FUN_10002989 @ 0x11142989 (72 bytes, 29 insns) */
void f_11142989(void) {
  FTRACE(0x11142989u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11142989 push esi */
  push32((uint32_t)(ESI));
  /* 1114298a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1114298e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11142990 je 0x111429cf */
  if (C.zf) goto L_111429cf;
  /* 11142992 push 9 */
  push32((uint32_t)(0x9u));
  /* 11142994 call 0x11142886 */
  push32(0x11142999u); f_11142886();
  /* 11142999 push esi */
  push32((uint32_t)(ESI));
  /* 1114299a call 0x11143333 */
  push32(0x1114299fu); f_11143333();
  /* 1114299f pop ecx */
  ECX = (pop32());
  /* 111429a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111429a2 pop ecx */
  ECX = (pop32());
  /* 111429a3 je 0x111429b8 */
  if (C.zf) goto L_111429b8;
  /* 111429a5 push esi */
  push32((uint32_t)(ESI));
  /* 111429a6 push eax */
  push32((uint32_t)(EAX));
  /* 111429a7 call 0x1114335e */
  push32(0x111429acu); f_1114335e();
  /* 111429ac push 9 */
  push32((uint32_t)(0x9u));
  /* 111429ae call 0x111428e7 */
  push32(0x111429b3u); f_111428e7();
  /* 111429b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111429b6 pop esi */
  ESI = (pop32());
  /* 111429b7 ret  */
  ESPCHK(0x11142989u, _esp0);
  ESP += 4; return;
L_111429b8:;
  /* 111429b8 push 9 */
  push32((uint32_t)(0x9u));
  /* 111429ba call 0x111428e7 */
  push32(0x111429bfu); f_111428e7();
  /* 111429bf pop ecx */
  ECX = (pop32());
  /* 111429c0 push esi */
  push32((uint32_t)(ESI));
  /* 111429c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 111429c3 push dword ptr [0x11146a28] */
  push32((uint32_t)(r32((uint32_t)(0x11146a28))));
  /* 111429c9 call dword ptr [0x1114504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1114504c))), 0x111429cfu);
L_111429cf:;
  /* 111429cf pop esi */
  ESI = (pop32());
  /* 111429d0 ret  */
  ESPCHK(0x11142989u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x111429d1 (18 bytes, 6 insns) */
void f_111429d1(void) {
  FTRACE(0x111429d1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111429d1 push dword ptr [0x111467bc] */
  push32((uint32_t)(r32((uint32_t)(0x111467bc))));
  /* 111429d7 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 111429db call 0x111429e3 */
  push32(0x111429e0u); f_111429e3();
  /* 111429e0 pop ecx */
  ECX = (pop32());
  /* 111429e1 pop ecx */
  ECX = (pop32());
  /* 111429e2 ret  */
  ESPCHK(0x111429d1u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x111429e3 (44 bytes, 16 insns) */
void f_111429e3(void) {
  FTRACE(0x111429e3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111429e3 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111429e8 ja 0x11142a0c */
  if ((!C.cf&&!C.zf)) goto L_11142a0c;
L_111429ea:;
  /* 111429ea push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 111429ee call 0x11142a0f */
  push32(0x111429f3u); f_11142a0f();
  /* 111429f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111429f5 pop ecx */
  ECX = (pop32());
  /* 111429f6 jne 0x11142a0e */
  if (!C.zf) goto L_11142a0e;
  /* 111429f8 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111429fc je 0x11142a0e */
  if (C.zf) goto L_11142a0e;
  /* 111429fe push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11142a02 call 0x11143d28 */
  push32(0x11142a07u); f_11143d28();
  /* 11142a07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11142a09 pop ecx */
  ECX = (pop32());
  /* 11142a0a jne 0x111429ea */
  if (!C.zf) goto L_111429ea;
L_11142a0c:;
  /* 11142a0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11142a0e:;
  /* 11142a0e ret  */
  ESPCHK(0x111429e3u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a0f @ 0x11142a0f (78 bytes, 30 insns) */
void f_11142a0f(void) {
  FTRACE(0x11142a0fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11142a0f push esi */
  push32((uint32_t)(ESI));
  /* 11142a10 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11142a14 cmp esi, dword ptr [0x11146500] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11146500))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142a1a push edi */
  push32((uint32_t)(EDI));
  /* 11142a1b ja 0x11142a3e */
  if ((!C.cf&&!C.zf)) goto L_11142a3e;
  /* 11142a1d push 9 */
  push32((uint32_t)(0x9u));
  /* 11142a1f call 0x11142886 */
  push32(0x11142a24u); f_11142886();
  /* 11142a24 push esi */
  push32((uint32_t)(ESI));
  /* 11142a25 call 0x11143689 */
  push32(0x11142a2au); f_11143689();
  /* 11142a2a push 9 */
  push32((uint32_t)(0x9u));
  /* 11142a2c mov edi, eax */
  EDI = (EAX);
  /* 11142a2e call 0x111428e7 */
  push32(0x11142a33u); f_111428e7();
  /* 11142a33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11142a36 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11142a38 je 0x11142a3e */
  if (C.zf) goto L_11142a3e;
  /* 11142a3a mov eax, edi */
  EAX = (EDI);
  /* 11142a3c jmp 0x11142a5a */
  goto L_11142a5a;
L_11142a3e:;
  /* 11142a3e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11142a40 jne 0x11142a45 */
  if (!C.zf) goto L_11142a45;
  /* 11142a42 push 1 */
  push32((uint32_t)(0x1u));
  /* 11142a44 pop esi */
  ESI = (pop32());
L_11142a45:;
  /* 11142a45 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11142a48 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11142a4b push esi */
  push32((uint32_t)(ESI));
  /* 11142a4c push 0 */
  push32((uint32_t)(0x0u));
  /* 11142a4e push dword ptr [0x11146a28] */
  push32((uint32_t)(r32((uint32_t)(0x11146a28))));
  /* 11142a54 call dword ptr [0x11145038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145038))), 0x11142a5au);
L_11142a5a:;
  /* 11142a5a pop edi */
  EDI = (pop32());
  /* 11142a5b pop esi */
  ESI = (pop32());
  /* 11142a5c ret  */
  ESPCHK(0x11142a0fu, _esp0);
  ESP += 4; return;
}

/* FUN_10002a60 @ 0x11142a60 (7 bytes, 3 insns) */
void f_11142a60(void) {
  FTRACE(0x11142a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11142a60 push edi */
  push32((uint32_t)(EDI));
  /* 11142a61 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11142a65 jmp 0x11142ad1 */
  jmp_ind(0x11142ad1u); return;
}

/* FUN_10002a70 @ 0x11142a70 (224 bytes, 84 insns) */
void f_11142a70(void) {
  FTRACE(0x11142a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11142a70 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11142a74 push edi */
  push32((uint32_t)(EDI));
  /* 11142a75 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11142a7b je 0x11142a8c */
  if (C.zf) goto L_11142a8c;
L_11142a7d:;
  /* 11142a7d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11142a7f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11142a80 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11142a82 je 0x11142abf */
  if (C.zf) goto L_11142abf;
  /* 11142a84 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11142a8a jne 0x11142a7d */
  if (!C.zf) goto L_11142a7d;
L_11142a8c:;
  /* 11142a8c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11142a8e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11142a93 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11142a95 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11142a98 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11142a9a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11142a9d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11142aa2 je 0x11142a8c */
  if (C.zf) goto L_11142a8c;
  /* 11142aa4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11142aa7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11142aa9 je 0x11142ace */
  if (C.zf) goto L_11142ace;
  /* 11142aab test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11142aad je 0x11142ac9 */
  if (C.zf) goto L_11142ac9;
  /* 11142aaf test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11142ab4 je 0x11142ac4 */
  if (C.zf) goto L_11142ac4;
  /* 11142ab6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11142abb je 0x11142abf */
  if (C.zf) goto L_11142abf;
  /* 11142abd jmp 0x11142a8c */
  goto L_11142a8c;
L_11142abf:;
  /* 11142abf lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11142ac2 jmp 0x11142ad1 */
  goto L_11142ad1;
L_11142ac4:;
  /* 11142ac4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11142ac7 jmp 0x11142ad1 */
  goto L_11142ad1;
L_11142ac9:;
  /* 11142ac9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11142acc jmp 0x11142ad1 */
  goto L_11142ad1;
L_11142ace:;
  /* 11142ace lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11142ad1:;
  /* 11142ad1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11142ad5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11142adb je 0x11142af6 */
  if (C.zf) goto L_11142af6;
L_11142add:;
  /* 11142add mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11142adf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11142ae0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11142ae2 je 0x11142b48 */
  if (C.zf) goto L_11142b48;
  /* 11142ae4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11142ae6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11142ae7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11142aed jne 0x11142add */
  if (!C.zf) goto L_11142add;
  /* 11142aef jmp 0x11142af6 */
  goto L_11142af6;
L_11142af1:;
  /* 11142af1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11142af3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11142af6:;
  /* 11142af6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11142afb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11142afd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11142aff xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11142b02 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11142b04 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11142b06 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11142b09 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11142b0e je 0x11142af1 */
  if (C.zf) goto L_11142af1;
  /* 11142b10 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11142b12 je 0x11142b48 */
  if (C.zf) goto L_11142b48;
  /* 11142b14 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11142b16 je 0x11142b3f */
  if (C.zf) goto L_11142b3f;
  /* 11142b18 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11142b1e je 0x11142b32 */
  if (C.zf) goto L_11142b32;
  /* 11142b20 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11142b26 je 0x11142b2a */
  if (C.zf) goto L_11142b2a;
  /* 11142b28 jmp 0x11142af1 */
  goto L_11142af1;
L_11142b2a:;
  /* 11142b2a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11142b2c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11142b30 pop edi */
  EDI = (pop32());
  /* 11142b31 ret  */
  ESPCHK(0x11142a70u, _esp0);
  ESP += 4; return;
L_11142b32:;
  /* 11142b32 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11142b35 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11142b39 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11142b3d pop edi */
  EDI = (pop32());
  /* 11142b3e ret  */
  ESPCHK(0x11142a70u, _esp0);
  ESP += 4; return;
L_11142b3f:;
  /* 11142b3f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11142b42 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11142b46 pop edi */
  EDI = (pop32());
  /* 11142b47 ret  */
  ESPCHK(0x11142a70u, _esp0);
  ESP += 4; return;
L_11142b48:;
  /* 11142b48 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11142b4a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11142b4e pop edi */
  EDI = (pop32());
  /* 11142b4f ret  */
  ESPCHK(0x11142a70u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11142b50 (123 bytes, 44 insns) */
void f_11142b50(void) {
  FTRACE(0x11142b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11142b50 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11142b54 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11142b5a je 0x11142b70 */
  if (C.zf) goto L_11142b70;
L_11142b5c:;
  /* 11142b5c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11142b5e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11142b5f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11142b61 je 0x11142ba3 */
  if (C.zf) goto L_11142ba3;
  /* 11142b63 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11142b69 jne 0x11142b5c */
  if (!C.zf) goto L_11142b5c;
  /* 11142b6b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11142b70:;
  /* 11142b70 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11142b72 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11142b77 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11142b79 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11142b7c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11142b7e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11142b81 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11142b86 je 0x11142b70 */
  if (C.zf) goto L_11142b70;
  /* 11142b88 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11142b8b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11142b8d je 0x11142bc1 */
  if (C.zf) goto L_11142bc1;
  /* 11142b8f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11142b91 je 0x11142bb7 */
  if (C.zf) goto L_11142bb7;
  /* 11142b93 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11142b98 je 0x11142bad */
  if (C.zf) goto L_11142bad;
  /* 11142b9a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11142b9f je 0x11142ba3 */
  if (C.zf) goto L_11142ba3;
  /* 11142ba1 jmp 0x11142b70 */
  goto L_11142b70;
L_11142ba3:;
  /* 11142ba3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11142ba6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11142baa sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11142bac ret  */
  ESPCHK(0x11142b50u, _esp0);
  ESP += 4; return;
L_11142bad:;
  /* 11142bad lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11142bb0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11142bb4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11142bb6 ret  */
  ESPCHK(0x11142b50u, _esp0);
  ESP += 4; return;
L_11142bb7:;
  /* 11142bb7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11142bba mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11142bbe sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11142bc0 ret  */
  ESPCHK(0x11142b50u, _esp0);
  ESP += 4; return;
L_11142bc1:;
  /* 11142bc1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11142bc4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11142bc8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11142bca ret  */
  ESPCHK(0x11142b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10002bcb @ 0x11142bcb (429 bytes, 143 insns) */
void f_11142bcb(void) {
  FTRACE(0x11142bcbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11142bcb push ebp */
  push32((uint32_t)(EBP));
  /* 11142bcc mov ebp, esp */
  EBP = (ESP);
  /* 11142bce sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11142bd1 push ebx */
  push32((uint32_t)(EBX));
  /* 11142bd2 push esi */
  push32((uint32_t)(ESI));
  /* 11142bd3 push edi */
  push32((uint32_t)(EDI));
  /* 11142bd4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11142bd6 call 0x11142886 */
  push32(0x11142bdbu); f_11142886();
  /* 11142bdb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11142bde call 0x11142d78 */
  push32(0x11142be3u); f_11142d78();
  /* 11142be3 mov ebx, eax */
  EBX = (EAX);
  /* 11142be5 pop ecx */
  ECX = (pop32());
  /* 11142be6 cmp ebx, dword ptr [0x11146800] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11146800))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142bec pop ecx */
  ECX = (pop32());
  /* 11142bed mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11142bf0 jne 0x11142bf9 */
  if (!C.zf) goto L_11142bf9;
L_11142bf2:;
  /* 11142bf2 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11142bf4 jmp 0x11142d69 */
  goto L_11142d69;
L_11142bf9:;
  /* 11142bf9 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11142bfb je 0x11142d57 */
  if (C.zf) goto L_11142d57;
  /* 11142c01 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11142c03 mov eax, 0x11146408 */
  EAX = (0x11146408u);
L_11142c08:;
  /* 11142c08 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142c0a je 0x11142c80 */
  if (C.zf) goto L_11142c80;
  /* 11142c0c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11142c0f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11142c10 cmp eax, 0x111464f8 */
  { uint32_t _a=(EAX),_b=(0x111464f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142c15 jl 0x11142c08 */
  if ((C.sf!=C.of)) goto L_11142c08;
  /* 11142c17 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11142c1a push eax */
  push32((uint32_t)(EAX));
  /* 11142c1b push ebx */
  push32((uint32_t)(EBX));
  /* 11142c1c call dword ptr [0x11145034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145034))), 0x11142c22u);
  /* 11142c22 push 1 */
  push32((uint32_t)(0x1u));
  /* 11142c24 pop esi */
  ESI = (pop32());
  /* 11142c25 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142c27 jne 0x11142d4e */
  if (!C.zf) goto L_11142d4e;
  /* 11142c2d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11142c2f and dword ptr [0x11146a24], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11146a24)))&(0x0u); w32((uint32_t)(0x11146a24), (_r)); fl_logic(_r,32); }
  /* 11142c36 pop ecx */
  ECX = (pop32());
  /* 11142c37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11142c39 mov edi, 0x11146920 */
  EDI = (0x11146920u);
  /* 11142c3e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142c41 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11142c43 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11142c44 mov dword ptr [0x11146800], ebx */
  w32((uint32_t)(0x11146800), (EBX));
  /* 11142c4a jbe 0x11142d3b */
  if ((C.cf||C.zf)) goto L_11142d3b;
  /* 11142c50 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11142c54 je 0x11142d16 */
  if (C.zf) goto L_11142d16;
  /* 11142c5a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_11142c5d:;
  /* 11142c5d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11142c5f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11142c61 je 0x11142d16 */
  if (C.zf) goto L_11142d16;
  /* 11142c67 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 11142c6b movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_11142c6e:;
  /* 11142c6e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142c70 ja 0x11142d0a */
  if ((!C.cf&&!C.zf)) goto L_11142d0a;
  /* 11142c76 or byte ptr [eax + 0x11146921], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11146921)))|(0x4u); w8((uint32_t)(EAX + 0x11146921), (_r)); fl_logic(_r,8); }
  /* 11142c7d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11142c7e jmp 0x11142c6e */
  goto L_11142c6e;
L_11142c80:;
  /* 11142c80 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11142c84 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11142c86 pop ecx */
  ECX = (pop32());
  /* 11142c87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11142c89 mov edi, 0x11146920 */
  EDI = (0x11146920u);
  /* 11142c8e lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 11142c91 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11142c93 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11142c96 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11142c97 lea ebx, [esi + 0x11146418] */
  EBX = ((uint32_t)(ESI + 0x11146418));
L_11142c9d:;
  /* 11142c9d cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11142ca0 mov ecx, ebx */
  ECX = (EBX);
  /* 11142ca2 je 0x11142cd0 */
  if (C.zf) goto L_11142cd0;
L_11142ca4:;
  /* 11142ca4 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11142ca7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11142ca9 je 0x11142cd0 */
  if (C.zf) goto L_11142cd0;
  /* 11142cab movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11142cae movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 11142cb1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142cb3 ja 0x11142cc9 */
  if ((!C.cf&&!C.zf)) goto L_11142cc9;
  /* 11142cb5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11142cb8 mov dl, byte ptr [edx + 0x11146400] */
  DL = (r8((uint32_t)(EDX + 0x11146400)));
L_11142cbe:;
  /* 11142cbe or byte ptr [eax + 0x11146921], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11146921)))|(DL); w8((uint32_t)(EAX + 0x11146921), (_r)); fl_logic(_r,8); }
  /* 11142cc4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11142cc5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142cc7 jbe 0x11142cbe */
  if ((C.cf||C.zf)) goto L_11142cbe;
L_11142cc9:;
  /* 11142cc9 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11142cca inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11142ccb cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11142cce jne 0x11142ca4 */
  if (!C.zf) goto L_11142ca4;
L_11142cd0:;
  /* 11142cd0 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11142cd3 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11142cd6 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142cda jb 0x11142c9d */
  if (C.cf) goto L_11142c9d;
  /* 11142cdc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11142cdf mov dword ptr [0x1114681c], 1 */
  w32((uint32_t)(0x1114681c), (0x1u));
  /* 11142ce9 push eax */
  push32((uint32_t)(EAX));
  /* 11142cea mov dword ptr [0x11146800], eax */
  w32((uint32_t)(0x11146800), (EAX));
  /* 11142cef call 0x11142dc2 */
  push32(0x11142cf4u); f_11142dc2();
  /* 11142cf4 lea esi, [esi + 0x1114640c] */
  ESI = ((uint32_t)(ESI + 0x1114640c));
  /* 11142cfa mov edi, 0x11146810 */
  EDI = (0x11146810u);
  /* 11142cff movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11142d00 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11142d01 pop ecx */
  ECX = (pop32());
  /* 11142d02 mov dword ptr [0x11146a24], eax */
  w32((uint32_t)(0x11146a24), (EAX));
  /* 11142d07 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11142d08 jmp 0x11142d5c */
  goto L_11142d5c;
L_11142d0a:;
  /* 11142d0a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11142d0b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11142d0c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11142d10 jne 0x11142c5d */
  if (!C.zf) goto L_11142c5d;
L_11142d16:;
  /* 11142d16 mov eax, esi */
  EAX = (ESI);
L_11142d18:;
  /* 11142d18 or byte ptr [eax + 0x11146921], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11146921)))|(0x8u); w8((uint32_t)(EAX + 0x11146921), (_r)); fl_logic(_r,8); }
  /* 11142d1f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11142d20 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142d25 jb 0x11142d18 */
  if (C.cf) goto L_11142d18;
  /* 11142d27 push ebx */
  push32((uint32_t)(EBX));
  /* 11142d28 call 0x11142dc2 */
  push32(0x11142d2du); f_11142dc2();
  /* 11142d2d pop ecx */
  ECX = (pop32());
  /* 11142d2e mov dword ptr [0x11146a24], eax */
  w32((uint32_t)(0x11146a24), (EAX));
  /* 11142d33 mov dword ptr [0x1114681c], esi */
  w32((uint32_t)(0x1114681c), (ESI));
  /* 11142d39 jmp 0x11142d42 */
  goto L_11142d42;
L_11142d3b:;
  /* 11142d3b and dword ptr [0x1114681c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1114681c)))&(0x0u); w32((uint32_t)(0x1114681c), (_r)); fl_logic(_r,32); }
L_11142d42:;
  /* 11142d42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11142d44 mov edi, 0x11146810 */
  EDI = (0x11146810u);
  /* 11142d49 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11142d4a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11142d4b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11142d4c jmp 0x11142d5c */
  goto L_11142d5c;
L_11142d4e:;
  /* 11142d4e cmp dword ptr [0x111467a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111467a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142d55 je 0x11142d66 */
  if (C.zf) goto L_11142d66;
L_11142d57:;
  /* 11142d57 call 0x11142df5 */
  push32(0x11142d5cu); f_11142df5();
L_11142d5c:;
  /* 11142d5c call 0x11142e1e */
  push32(0x11142d61u); f_11142e1e();
  /* 11142d61 jmp 0x11142bf2 */
  goto L_11142bf2;
L_11142d66:;
  /* 11142d66 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11142d69:;
  /* 11142d69 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11142d6b call 0x111428e7 */
  push32(0x11142d70u); f_111428e7();
  /* 11142d70 pop ecx */
  ECX = (pop32());
  /* 11142d71 mov eax, esi */
  EAX = (ESI);
  /* 11142d73 pop edi */
  EDI = (pop32());
  /* 11142d74 pop esi */
  ESI = (pop32());
  /* 11142d75 pop ebx */
  EBX = (pop32());
  /* 11142d76 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11142d77 ret  */
  ESPCHK(0x11142bcbu, _esp0);
  ESP += 4; return;
}

/* FUN_10002d78 @ 0x11142d78 (74 bytes, 15 insns) */
void f_11142d78(void) {
  FTRACE(0x11142d78u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11142d78 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11142d7c and dword ptr [0x111467a8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x111467a8)))&(0x0u); w32((uint32_t)(0x111467a8), (_r)); fl_logic(_r,32); }
  /* 11142d83 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142d86 jne 0x11142d98 */
  if (!C.zf) goto L_11142d98;
  /* 11142d88 mov dword ptr [0x111467a8], 1 */
  w32((uint32_t)(0x111467a8), (0x1u));
  /* 11142d92 jmp dword ptr [0x1114502c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1114502c)))); return;
L_11142d98:;
  /* 11142d98 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142d9b jne 0x11142dad */
  if (!C.zf) goto L_11142dad;
  /* 11142d9d mov dword ptr [0x111467a8], 1 */
  w32((uint32_t)(0x111467a8), (0x1u));
  /* 11142da7 jmp dword ptr [0x11145030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11145030)))); return;
L_11142dad:;
  /* 11142dad cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142db0 jne 0x11142dc1 */
  if (!C.zf) goto L_11142dc1;
  /* 11142db2 mov eax, dword ptr [0x111467d8] */
  EAX = (r32((uint32_t)(0x111467d8)));
  /* 11142db7 mov dword ptr [0x111467a8], 1 */
  w32((uint32_t)(0x111467a8), (0x1u));
L_11142dc1:;
  /* 11142dc1 ret  */
  ESPCHK(0x11142d78u, _esp0);
  ESP += 4; return;
}

/* FUN_10002dc2 @ 0x11142dc2 (51 bytes, 19 insns) */
void f_11142dc2(void) {
  FTRACE(0x11142dc2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11142dc2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11142dc6 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11142dcb je 0x11142def */
  if (C.zf) goto L_11142def;
  /* 11142dcd sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11142dd0 je 0x11142de9 */
  if (C.zf) goto L_11142de9;
  /* 11142dd2 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11142dd5 je 0x11142de3 */
  if (C.zf) goto L_11142de3;
  /* 11142dd7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11142dd8 je 0x11142ddd */
  if (C.zf) goto L_11142ddd;
  /* 11142dda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11142ddc ret  */
  ESPCHK(0x11142dc2u, _esp0);
  ESP += 4; return;
L_11142ddd:;
  /* 11142ddd mov eax, 0x404 */
  EAX = (0x404u);
  /* 11142de2 ret  */
  ESPCHK(0x11142dc2u, _esp0);
  ESP += 4; return;
L_11142de3:;
  /* 11142de3 mov eax, 0x412 */
  EAX = (0x412u);
  /* 11142de8 ret  */
  ESPCHK(0x11142dc2u, _esp0);
  ESP += 4; return;
L_11142de9:;
  /* 11142de9 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11142dee ret  */
  ESPCHK(0x11142dc2u, _esp0);
  ESP += 4; return;
L_11142def:;
  /* 11142def mov eax, 0x411 */
  EAX = (0x411u);
  /* 11142df4 ret  */
  ESPCHK(0x11142dc2u, _esp0);
  ESP += 4; return;
}

/* FUN_10002df5 @ 0x11142df5 (41 bytes, 17 insns) */
void f_11142df5(void) {
  FTRACE(0x11142df5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11142df5 push edi */
  push32((uint32_t)(EDI));
  /* 11142df6 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11142df8 pop ecx */
  ECX = (pop32());
  /* 11142df9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11142dfb mov edi, 0x11146920 */
  EDI = (0x11146920u);
  /* 11142e00 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11142e02 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11142e03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11142e05 mov edi, 0x11146810 */
  EDI = (0x11146810u);
  /* 11142e0a mov dword ptr [0x11146800], eax */
  w32((uint32_t)(0x11146800), (EAX));
  /* 11142e0f mov dword ptr [0x1114681c], eax */
  w32((uint32_t)(0x1114681c), (EAX));
  /* 11142e14 mov dword ptr [0x11146a24], eax */
  w32((uint32_t)(0x11146a24), (EAX));
  /* 11142e19 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11142e1a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11142e1b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11142e1c pop edi */
  EDI = (pop32());
  /* 11142e1d ret  */
  ESPCHK(0x11142df5u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e1e @ 0x11142e1e (389 bytes, 124 insns) */
void f_11142e1e(void) {
  FTRACE(0x11142e1eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11142e1e push ebp */
  push32((uint32_t)(EBP));
  /* 11142e1f mov ebp, esp */
  EBP = (ESP);
  /* 11142e21 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11142e27 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11142e2a push esi */
  push32((uint32_t)(ESI));
  /* 11142e2b push eax */
  push32((uint32_t)(EAX));
  /* 11142e2c push dword ptr [0x11146800] */
  push32((uint32_t)(r32((uint32_t)(0x11146800))));
  /* 11142e32 call dword ptr [0x11145034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145034))), 0x11142e38u);
  /* 11142e38 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142e3b jne 0x11142f57 */
  if (!C.zf) goto L_11142f57;
  /* 11142e41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11142e43 mov esi, 0x100 */
  ESI = (0x100u);
L_11142e48:;
  /* 11142e48 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 11142e4f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11142e50 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142e52 jb 0x11142e48 */
  if (C.cf) goto L_11142e48;
  /* 11142e54 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 11142e57 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 11142e5e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11142e60 je 0x11142e99 */
  if (C.zf) goto L_11142e99;
  /* 11142e62 push ebx */
  push32((uint32_t)(EBX));
  /* 11142e63 push edi */
  push32((uint32_t)(EDI));
  /* 11142e64 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_11142e67:;
  /* 11142e67 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11142e6a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11142e6d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142e6f ja 0x11142e8e */
  if ((!C.cf&&!C.zf)) goto L_11142e8e;
  /* 11142e71 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11142e73 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 11142e7a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11142e7b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 11142e80 mov ebx, ecx */
  EBX = (ECX);
  /* 11142e82 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11142e85 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11142e87 mov ecx, ebx */
  ECX = (EBX);
  /* 11142e89 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11142e8c rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_11142e8e:;
  /* 11142e8e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11142e8f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11142e90 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 11142e93 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11142e95 jne 0x11142e67 */
  if (!C.zf) goto L_11142e67;
  /* 11142e97 pop edi */
  EDI = (pop32());
  /* 11142e98 pop ebx */
  EBX = (pop32());
L_11142e99:;
  /* 11142e99 push 0 */
  push32((uint32_t)(0x0u));
  /* 11142e9b lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 11142ea1 push dword ptr [0x11146a24] */
  push32((uint32_t)(r32((uint32_t)(0x11146a24))));
  /* 11142ea7 push dword ptr [0x11146800] */
  push32((uint32_t)(r32((uint32_t)(0x11146800))));
  /* 11142ead push eax */
  push32((uint32_t)(EAX));
  /* 11142eae lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11142eb4 push esi */
  push32((uint32_t)(ESI));
  /* 11142eb5 push eax */
  push32((uint32_t)(EAX));
  /* 11142eb6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11142eb8 call 0x11143f92 */
  push32(0x11142ebdu); f_11143f92();
  /* 11142ebd push 0 */
  push32((uint32_t)(0x0u));
  /* 11142ebf lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 11142ec5 push dword ptr [0x11146800] */
  push32((uint32_t)(r32((uint32_t)(0x11146800))));
  /* 11142ecb push esi */
  push32((uint32_t)(ESI));
  /* 11142ecc push eax */
  push32((uint32_t)(EAX));
  /* 11142ecd lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11142ed3 push esi */
  push32((uint32_t)(ESI));
  /* 11142ed4 push eax */
  push32((uint32_t)(EAX));
  /* 11142ed5 push esi */
  push32((uint32_t)(ESI));
  /* 11142ed6 push dword ptr [0x11146a24] */
  push32((uint32_t)(r32((uint32_t)(0x11146a24))));
  /* 11142edc call 0x11143d43 */
  push32(0x11142ee1u); f_11143d43();
  /* 11142ee1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11142ee3 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 11142ee9 push dword ptr [0x11146800] */
  push32((uint32_t)(r32((uint32_t)(0x11146800))));
  /* 11142eef push esi */
  push32((uint32_t)(ESI));
  /* 11142ef0 push eax */
  push32((uint32_t)(EAX));
  /* 11142ef1 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11142ef7 push esi */
  push32((uint32_t)(ESI));
  /* 11142ef8 push eax */
  push32((uint32_t)(EAX));
  /* 11142ef9 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11142efe push dword ptr [0x11146a24] */
  push32((uint32_t)(r32((uint32_t)(0x11146a24))));
  /* 11142f04 call 0x11143d43 */
  push32(0x11142f09u); f_11143d43();
  /* 11142f09 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11142f0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11142f0e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_11142f14:;
  /* 11142f14 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11142f17 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11142f1a je 0x11142f32 */
  if (C.zf) goto L_11142f32;
  /* 11142f1c or byte ptr [eax + 0x11146921], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11146921)))|(0x10u); w8((uint32_t)(EAX + 0x11146921), (_r)); fl_logic(_r,8); }
  /* 11142f23 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_11142f2a:;
  /* 11142f2a mov byte ptr [eax + 0x11146820], dl */
  w8((uint32_t)(EAX + 0x11146820), (DL));
  /* 11142f30 jmp 0x11142f4e */
  goto L_11142f4e;
L_11142f32:;
  /* 11142f32 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 11142f35 je 0x11142f47 */
  if (C.zf) goto L_11142f47;
  /* 11142f37 or byte ptr [eax + 0x11146921], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11146921)))|(0x20u); w8((uint32_t)(EAX + 0x11146921), (_r)); fl_logic(_r,8); }
  /* 11142f3e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 11142f45 jmp 0x11142f2a */
  goto L_11142f2a;
L_11142f47:;
  /* 11142f47 and byte ptr [eax + 0x11146820], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11146820)))&(0x0u); w8((uint32_t)(EAX + 0x11146820), (_r)); fl_logic(_r,8); }
L_11142f4e:;
  /* 11142f4e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11142f4f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11142f50 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11142f51 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142f53 jb 0x11142f14 */
  if (C.cf) goto L_11142f14;
  /* 11142f55 jmp 0x11142fa0 */
  goto L_11142fa0;
L_11142f57:;
  /* 11142f57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11142f59 mov esi, 0x100 */
  ESI = (0x100u);
L_11142f5e:;
  /* 11142f5e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142f61 jb 0x11142f7c */
  if (C.cf) goto L_11142f7c;
  /* 11142f63 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142f66 ja 0x11142f7c */
  if ((!C.cf&&!C.zf)) goto L_11142f7c;
  /* 11142f68 or byte ptr [eax + 0x11146921], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11146921)))|(0x10u); w8((uint32_t)(EAX + 0x11146921), (_r)); fl_logic(_r,8); }
  /* 11142f6f mov cl, al */
  CL = (AL);
  /* 11142f71 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_11142f74:;
  /* 11142f74 mov byte ptr [eax + 0x11146820], cl */
  w8((uint32_t)(EAX + 0x11146820), (CL));
  /* 11142f7a jmp 0x11142f9b */
  goto L_11142f9b;
L_11142f7c:;
  /* 11142f7c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142f7f jb 0x11142f94 */
  if (C.cf) goto L_11142f94;
  /* 11142f81 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142f84 ja 0x11142f94 */
  if ((!C.cf&&!C.zf)) goto L_11142f94;
  /* 11142f86 or byte ptr [eax + 0x11146921], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11146921)))|(0x20u); w8((uint32_t)(EAX + 0x11146921), (_r)); fl_logic(_r,8); }
  /* 11142f8d mov cl, al */
  CL = (AL);
  /* 11142f8f sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11142f92 jmp 0x11142f74 */
  goto L_11142f74;
L_11142f94:;
  /* 11142f94 and byte ptr [eax + 0x11146820], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11146820)))&(0x0u); w8((uint32_t)(EAX + 0x11146820), (_r)); fl_logic(_r,8); }
L_11142f9b:;
  /* 11142f9b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11142f9c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142f9e jb 0x11142f5e */
  if (C.cf) goto L_11142f5e;
L_11142fa0:;
  /* 11142fa0 pop esi */
  ESI = (pop32());
  /* 11142fa1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11142fa2 ret  */
  ESPCHK(0x11142e1eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002fa3 @ 0x11142fa3 (28 bytes, 7 insns) */
void f_11142fa3(void) {
  FTRACE(0x11142fa3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11142fa3 cmp dword ptr [0x11146b48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11146b48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142faa jne 0x11142fbe */
  if (!C.zf) goto L_11142fbe;
  /* 11142fac push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11142fae call 0x11142bcb */
  push32(0x11142fb3u); f_11142bcb();
  /* 11142fb3 pop ecx */
  ECX = (pop32());
  /* 11142fb4 mov dword ptr [0x11146b48], 1 */
  w32((uint32_t)(0x11146b48), (0x1u));
L_11142fbe:;
  /* 11142fbe ret  */
  ESPCHK(0x11142fa3u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fc0 @ 0x11142fc0 (664 bytes, 264 insns) [15 switch table(s)] */
void f_11142fc0(void) {
  FTRACE(0x11142fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11142fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11142fc1 mov ebp, esp */
  EBP = (ESP);
  /* 11142fc3 push edi */
  push32((uint32_t)(EDI));
  /* 11142fc4 push esi */
  push32((uint32_t)(ESI));
  /* 11142fc5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11142fc8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11142fcb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11142fce mov eax, ecx */
  EAX = (ECX);
  /* 11142fd0 mov edx, ecx */
  EDX = (ECX);
  /* 11142fd2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11142fd4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142fd6 jbe 0x11142fe0 */
  if ((C.cf||C.zf)) goto L_11142fe0;
  /* 11142fd8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142fda jb 0x11143158 */
  if (C.cf) goto L_11143158;
L_11142fe0:;
  /* 11142fe0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11142fe6 jne 0x11142ffc */
  if (!C.zf) goto L_11142ffc;
  /* 11142fe8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11142feb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11142fee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11142ff1 jb 0x1114301c */
  if (C.cf) goto L_1114301c;
  /* 11142ff3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11142ff5 jmp dword ptr [edx*4 + 0x11143108] */
  switch (EDX) {
    case 0: goto L_11143118;
    case 1: goto L_11143120;
    case 2: goto L_1114312c;
    case 3: goto L_11143140;
    default: x86_unimpl("switch@0x11142ff5 out of table"); return;
  }
L_11142ffc:;
  /* 11142ffc mov eax, edi */
  EAX = (EDI);
  /* 11142ffe mov edx, 3 */
  EDX = (0x3u);
  /* 11143003 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11143006 jb 0x11143014 */
  if (C.cf) goto L_11143014;
  /* 11143008 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1114300b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1114300d jmp dword ptr [eax*4 + 0x11143020] */
  switch (EAX) {
    case 1: goto L_11143030;
    case 2: goto L_1114305c;
    case 3: goto L_11143080;
    default: x86_unimpl("switch@0x1114300d out of table"); return;
  }
L_11143014:;
  /* 11143014 jmp dword ptr [ecx*4 + 0x11143118] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11143118)))); return;
  /* 1114301b nop  */
  /* nop */
L_1114301c:;
  /* 1114301c jmp dword ptr [ecx*4 + 0x1114309c] */
  switch (ECX) {
    case 0: goto L_111430ff;
    case 1: goto L_111430ec;
    case 2: goto L_111430e4;
    case 3: goto L_111430dc;
    case 4: goto L_111430d4;
    case 5: goto L_111430cc;
    case 6: goto L_111430c4;
    case 7: goto L_111430bc;
    default: x86_unimpl("switch@0x1114301c out of table"); return;
  }
  /* 11143023 nop  */
  /* nop */
L_11143030:;
  /* 11143030 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11143032 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11143034 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11143036 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11143039 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1114303c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1114303f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11143042 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11143045 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11143048 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1114304b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1114304e jb 0x1114301c */
  if (C.cf) goto L_1114301c;
  /* 11143050 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11143052 jmp dword ptr [edx*4 + 0x11143108] */
  switch (EDX) {
    case 0: goto L_11143118;
    case 1: goto L_11143120;
    case 2: goto L_1114312c;
    case 3: goto L_11143140;
    default: x86_unimpl("switch@0x11143052 out of table"); return;
  }
  /* 11143059 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1114305c:;
  /* 1114305c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1114305e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11143060 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11143062 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11143065 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11143068 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1114306b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1114306e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11143071 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143074 jb 0x1114301c */
  if (C.cf) goto L_1114301c;
  /* 11143076 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11143078 jmp dword ptr [edx*4 + 0x11143108] */
  switch (EDX) {
    case 0: goto L_11143118;
    case 1: goto L_11143120;
    case 2: goto L_1114312c;
    case 3: goto L_11143140;
    default: x86_unimpl("switch@0x11143078 out of table"); return;
  }
  /* 1114307f nop  */
  /* nop */
L_11143080:;
  /* 11143080 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11143082 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11143084 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11143086 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11143087 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1114308a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1114308b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1114308e jb 0x1114301c */
  if (C.cf) goto L_1114301c;
  /* 11143090 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11143092 jmp dword ptr [edx*4 + 0x11143108] */
  switch (EDX) {
    case 0: goto L_11143118;
    case 1: goto L_11143120;
    case 2: goto L_1114312c;
    case 3: goto L_11143140;
    default: x86_unimpl("switch@0x11143092 out of table"); return;
  }
  /* 11143099 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111430bc:;
  /* 111430bc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 111430c0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_111430c4:;
  /* 111430c4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 111430c8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_111430cc:;
  /* 111430cc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 111430d0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_111430d4:;
  /* 111430d4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 111430d8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_111430dc:;
  /* 111430dc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 111430e0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_111430e4:;
  /* 111430e4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 111430e8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_111430ec:;
  /* 111430ec mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 111430f0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 111430f4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 111430fb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111430fd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_111430ff:;
  /* 111430ff jmp dword ptr [edx*4 + 0x11143108] */
  switch (EDX) {
    case 0: goto L_11143118;
    case 1: goto L_11143120;
    case 2: goto L_1114312c;
    case 3: goto L_11143140;
    default: x86_unimpl("switch@0x111430ff out of table"); return;
  }
  /* 11143106 mov edi, edi */
  EDI = (EDI);
L_11143118:;
  /* 11143118 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1114311b pop esi */
  ESI = (pop32());
  /* 1114311c pop edi */
  EDI = (pop32());
  /* 1114311d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1114311e ret  */
  ESPCHK(0x11142fc0u, _esp0);
  ESP += 4; return;
  /* 1114311f nop  */
  /* nop */
L_11143120:;
  /* 11143120 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11143122 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11143124 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11143127 pop esi */
  ESI = (pop32());
  /* 11143128 pop edi */
  EDI = (pop32());
  /* 11143129 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1114312a ret  */
  ESPCHK(0x11142fc0u, _esp0);
  ESP += 4; return;
  /* 1114312b nop  */
  /* nop */
L_1114312c:;
  /* 1114312c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1114312e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11143130 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11143133 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11143136 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11143139 pop esi */
  ESI = (pop32());
  /* 1114313a pop edi */
  EDI = (pop32());
  /* 1114313b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1114313c ret  */
  ESPCHK(0x11142fc0u, _esp0);
  ESP += 4; return;
  /* 1114313d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11143140:;
  /* 11143140 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11143142 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11143144 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11143147 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1114314a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1114314d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11143150 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11143153 pop esi */
  ESI = (pop32());
  /* 11143154 pop edi */
  EDI = (pop32());
  /* 11143155 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11143156 ret  */
  ESPCHK(0x11142fc0u, _esp0);
  ESP += 4; return;
  /* 11143157 nop  */
  /* nop */
L_11143158:;
  /* 11143158 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1114315c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11143160 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11143166 jne 0x1114318c */
  if (!C.zf) goto L_1114318c;
  /* 11143168 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1114316b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1114316e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143171 jb 0x11143180 */
  if (C.cf) goto L_11143180;
  /* 11143173 std  */
  C.df=1;
  /* 11143174 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11143176 cld  */
  C.df=0;
  /* 11143177 jmp dword ptr [edx*4 + 0x111432a0] */
  switch (EDX) {
    case 0: goto L_111432b0;
    case 1: goto L_111432b8;
    case 2: goto L_111432c8;
    case 3: goto L_111432dc;
    default: x86_unimpl("switch@0x11143177 out of table"); return;
  }
  /* 1114317e mov edi, edi */
  EDI = (EDI);
L_11143180:;
  /* 11143180 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11143182 jmp dword ptr [ecx*4 + 0x11143250] */
  switch (ECX) {
    case 0: goto L_11143297;
    default: x86_unimpl("switch@0x11143182 out of table"); return;
  }
  /* 11143189 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1114318c:;
  /* 1114318c mov eax, edi */
  EAX = (EDI);
  /* 1114318e mov edx, 3 */
  EDX = (0x3u);
  /* 11143193 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143196 jb 0x111431a4 */
  if (C.cf) goto L_111431a4;
  /* 11143198 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1114319b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1114319d jmp dword ptr [eax*4 + 0x111431a8] */
  switch (EAX) {
    case 1: goto L_111431b8;
    case 2: goto L_111431d8;
    case 3: goto L_11143200;
    default: x86_unimpl("switch@0x1114319d out of table"); return;
  }
L_111431a4:;
  /* 111431a4 jmp dword ptr [ecx*4 + 0x111432a0] */
  switch (ECX) {
    case 0: goto L_111432b0;
    case 1: goto L_111432b8;
    case 2: goto L_111432c8;
    case 3: goto L_111432dc;
    default: x86_unimpl("switch@0x111431a4 out of table"); return;
  }
  /* 111431ab nop  */
  /* nop */
L_111431b8:;
  /* 111431b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 111431bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 111431bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 111431c0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 111431c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111431c4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 111431c5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111431c8 jb 0x11143180 */
  if (C.cf) goto L_11143180;
  /* 111431ca std  */
  C.df=1;
  /* 111431cb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111431cd cld  */
  C.df=0;
  /* 111431ce jmp dword ptr [edx*4 + 0x111432a0] */
  switch (EDX) {
    case 0: goto L_111432b0;
    case 1: goto L_111432b8;
    case 2: goto L_111432c8;
    case 3: goto L_111432dc;
    default: x86_unimpl("switch@0x111431ce out of table"); return;
  }
  /* 111431d5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111431d8:;
  /* 111431d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 111431db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 111431dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 111431e0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 111431e3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111431e6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 111431e9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111431ec sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111431ef cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111431f2 jb 0x11143180 */
  if (C.cf) goto L_11143180;
  /* 111431f4 std  */
  C.df=1;
  /* 111431f5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111431f7 cld  */
  C.df=0;
  /* 111431f8 jmp dword ptr [edx*4 + 0x111432a0] */
  switch (EDX) {
    case 0: goto L_111432b0;
    case 1: goto L_111432b8;
    case 2: goto L_111432c8;
    case 3: goto L_111432dc;
    default: x86_unimpl("switch@0x111431f8 out of table"); return;
  }
  /* 111431ff nop  */
  /* nop */
L_11143200:;
  /* 11143200 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11143203 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11143205 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11143208 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1114320b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1114320e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11143211 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11143214 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11143217 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1114321a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1114321d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143220 jb 0x11143180 */
  if (C.cf) goto L_11143180;
  /* 11143226 std  */
  C.df=1;
  /* 11143227 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11143229 cld  */
  C.df=0;
  /* 1114322a jmp dword ptr [edx*4 + 0x111432a0] */
  switch (EDX) {
    case 0: goto L_111432b0;
    case 1: goto L_111432b8;
    case 2: goto L_111432c8;
    case 3: goto L_111432dc;
    default: x86_unimpl("switch@0x1114322a out of table"); return;
  }
  /* 11143231 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11143234 push esp */
  push32((uint32_t)(ESP));
  /* 11143235 xor dl, byte ptr [ecx + edx] */
  { uint32_t _r=(DL)^(r8((uint32_t)(ECX + EDX*1))); DL = (_r); fl_logic(_r,8); }
  /* 11143238 pop esp */
  ESP = (pop32());
  /* 11143239 xor dl, byte ptr [ecx + edx] */
  { uint32_t _r=(DL)^(r8((uint32_t)(ECX + EDX*1))); DL = (_r); fl_logic(_r,8); }
  /* 1114323c xor dl, byte ptr fs:[ecx + edx] */
  { uint32_t _r=(DL)^(r8((uint32_t)(ECX + EDX*1))); DL = (_r); fl_logic(_r,8); }
  /* 11143240 insb byte ptr es:[edi], dx */
  x86_unimpl("insb @ 0x11143240");
  /* 11143241 xor dl, byte ptr [ecx + edx] */
  { uint32_t _r=(DL)^(r8((uint32_t)(ECX + EDX*1))); DL = (_r); fl_logic(_r,8); }
  /* 11143244 je 0x11143278 */
  if (C.zf) goto L_11143278;
  /* 11143246 adc al, 0x11 */
  { uint32_t _a=(AL),_b=(0x11u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11143248 jl 0x1114327c */
  if ((C.sf!=C.of)) goto L_1114327c;
  /* 1114324a adc al, 0x11 */
  { uint32_t _a=(AL),_b=(0x11u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1114324c test byte ptr [edx], dh */
  { uint32_t _r=(r8((uint32_t)(EDX)))&(C.d.b.h); fl_logic(_r,8); }
  /* 1114324e adc al, 0x11 */
  { uint32_t _a=(AL),_b=(0x11u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11143254 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11143258 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1114325c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11143260 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11143264 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11143268 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1114326c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11143270 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11143274 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
L_11143278:;
  /* 11143278 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
L_1114327c:;
  /* 1114327c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11143280 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11143284 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11143288 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1114328c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11143293 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11143295 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11143297:;
  /* 11143297 jmp dword ptr [edx*4 + 0x111432a0] */
  switch (EDX) {
    case 0: goto L_111432b0;
    case 1: goto L_111432b8;
    case 2: goto L_111432c8;
    case 3: goto L_111432dc;
    default: x86_unimpl("switch@0x11143297 out of table"); return;
  }
  /* 1114329e mov edi, edi */
  EDI = (EDI);
L_111432b0:;
  /* 111432b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111432b3 pop esi */
  ESI = (pop32());
  /* 111432b4 pop edi */
  EDI = (pop32());
  /* 111432b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111432b6 ret  */
  ESPCHK(0x11142fc0u, _esp0);
  ESP += 4; return;
  /* 111432b7 nop  */
  /* nop */
L_111432b8:;
  /* 111432b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 111432bb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 111432be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111432c1 pop esi */
  ESI = (pop32());
  /* 111432c2 pop edi */
  EDI = (pop32());
  /* 111432c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111432c4 ret  */
  ESPCHK(0x11142fc0u, _esp0);
  ESP += 4; return;
  /* 111432c5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111432c8:;
  /* 111432c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 111432cb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 111432ce mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 111432d1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 111432d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111432d7 pop esi */
  ESI = (pop32());
  /* 111432d8 pop edi */
  EDI = (pop32());
  /* 111432d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111432da ret  */
  ESPCHK(0x11142fc0u, _esp0);
  ESP += 4; return;
  /* 111432db nop  */
  /* nop */
L_111432dc:;
  /* 111432dc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 111432df mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 111432e2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 111432e5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 111432e8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 111432eb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 111432ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111432f1 pop esi */
  ESI = (pop32());
  /* 111432f2 pop edi */
  EDI = (pop32());
  /* 111432f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111432f4 ret  */
  ESPCHK(0x11142fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_100032f5 @ 0x111432f5 (62 bytes, 15 insns) */
void f_111432f5(void) {
  FTRACE(0x111432f5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111432f5 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 111432fa push 0 */
  push32((uint32_t)(0x0u));
  /* 111432fc push dword ptr [0x11146a28] */
  push32((uint32_t)(r32((uint32_t)(0x11146a28))));
  /* 11143302 call dword ptr [0x11145038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145038))), 0x11143308u);
  /* 11143308 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1114330a mov dword ptr [0x111467fc], eax */
  w32((uint32_t)(0x111467fc), (EAX));
  /* 1114330f jne 0x11143312 */
  if (!C.zf) goto L_11143312;
  /* 11143311 ret  */
  ESPCHK(0x111432f5u, _esp0);
  ESP += 4; return;
L_11143312:;
  /* 11143312 and dword ptr [0x111467f4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x111467f4)))&(0x0u); w32((uint32_t)(0x111467f4), (_r)); fl_logic(_r,32); }
  /* 11143319 and dword ptr [0x111467f8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x111467f8)))&(0x0u); w32((uint32_t)(0x111467f8), (_r)); fl_logic(_r,32); }
  /* 11143320 push 1 */
  push32((uint32_t)(0x1u));
  /* 11143322 mov dword ptr [0x111467f0], eax */
  w32((uint32_t)(0x111467f0), (EAX));
  /* 11143327 mov dword ptr [0x111467e8], 0x10 */
  w32((uint32_t)(0x111467e8), (0x10u));
  /* 11143331 pop eax */
  EAX = (pop32());
  /* 11143332 ret  */
  ESPCHK(0x111432f5u, _esp0);
  ESP += 4; return;
}

/* FUN_10003333 @ 0x11143333 (43 bytes, 14 insns) */
void f_11143333(void) {
  FTRACE(0x11143333u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11143333 mov eax, dword ptr [0x111467f8] */
  EAX = (r32((uint32_t)(0x111467f8)));
  /* 11143338 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1114333b mov eax, dword ptr [0x111467fc] */
  EAX = (r32((uint32_t)(0x111467fc)));
  /* 11143340 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_11143343:;
  /* 11143343 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143345 jae 0x1114335b */
  if (!C.cf) goto L_1114335b;
  /* 11143347 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1114334b sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1114334e cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143354 jb 0x1114335d */
  if (C.cf) goto L_1114335d;
  /* 11143356 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11143359 jmp 0x11143343 */
  goto L_11143343;
L_1114335b:;
  /* 1114335b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1114335d:;
  /* 1114335d ret  */
  ESPCHK(0x11143333u, _esp0);
  ESP += 4; return;
}

/* FUN_1000335e @ 0x1114335e (811 bytes, 264 insns) */
void f_1114335e(void) {
  FTRACE(0x1114335eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1114335e push ebp */
  push32((uint32_t)(EBP));
  /* 1114335f mov ebp, esp */
  EBP = (ESP);
  /* 11143361 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11143364 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11143367 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1114336a push ebx */
  push32((uint32_t)(EBX));
  /* 1114336b push esi */
  push32((uint32_t)(ESI));
  /* 1114336c mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 1114336f mov esi, edx */
  ESI = (EDX);
  /* 11143371 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11143374 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 11143377 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1114337a push edi */
  push32((uint32_t)(EDI));
  /* 1114337b shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 1114337e mov ecx, esi */
  ECX = (ESI);
  /* 11143380 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 11143383 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11143389 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1114338a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1114338d lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11143394 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11143397 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1114339a mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 1114339d test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 111433a0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111433a3 jne 0x11143424 */
  if (!C.zf) goto L_11143424;
  /* 111433a5 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 111433a8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 111433aa dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 111433ab pop edi */
  EDI = (pop32());
  /* 111433ac mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 111433af cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111433b1 jbe 0x111433b6 */
  if ((C.cf||C.zf)) goto L_111433b6;
  /* 111433b3 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_111433b6:;
  /* 111433b6 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 111433ba cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111433be jne 0x11143408 */
  if (!C.zf) goto L_11143408;
  /* 111433c0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111433c3 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111433c6 jae 0x111433e4 */
  if (!C.cf) goto L_111433e4;
  /* 111433c8 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 111433cd shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 111433cf lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 111433d3 not edi */
  EDI = (~(EDI));
  /* 111433d5 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 111433d9 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 111433db jne 0x11143408 */
  if (!C.zf) goto L_11143408;
  /* 111433dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111433e0 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 111433e2 jmp 0x11143408 */
  goto L_11143408;
L_111433e4:;
  /* 111433e4 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111433e7 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 111433ec shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 111433ee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111433f1 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 111433f5 not edi */
  EDI = (~(EDI));
  /* 111433f7 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 111433fe dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11143400 jne 0x11143408 */
  if (!C.zf) goto L_11143408;
  /* 11143402 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11143405 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11143408:;
  /* 11143408 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 1114340c mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11143410 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11143413 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11143417 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 1114341b add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1114341e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11143421 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_11143424:;
  /* 11143424 mov edi, ebx */
  EDI = (EBX);
  /* 11143426 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11143429 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1114342a cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1114342d jbe 0x11143432 */
  if ((C.cf||C.zf)) goto L_11143432;
  /* 1114342f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11143431 pop edi */
  EDI = (pop32());
L_11143432:;
  /* 11143432 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11143435 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11143438 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1114343b jne 0x111434e1 */
  if (!C.zf) goto L_111434e1;
  /* 11143441 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11143444 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11143447 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1114344a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1114344c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1114344f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11143450 pop edx */
  EDX = (pop32());
  /* 11143451 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143453 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11143456 jbe 0x1114345d */
  if ((C.cf||C.zf)) goto L_1114345d;
  /* 11143458 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1114345b mov ecx, edx */
  ECX = (EDX);
L_1114345d:;
  /* 1114345d add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11143460 mov edi, ebx */
  EDI = (EBX);
  /* 11143462 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11143465 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11143468 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11143469 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1114346b jbe 0x1114346f */
  if ((C.cf||C.zf)) goto L_1114346f;
  /* 1114346d mov edi, edx */
  EDI = (EDX);
L_1114346f:;
  /* 1114346f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143471 je 0x111434de */
  if (C.zf) goto L_111434de;
  /* 11143473 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11143476 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11143479 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1114347c jne 0x111434c6 */
  if (!C.zf) goto L_111434c6;
  /* 1114347e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11143481 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143484 jae 0x111434a2 */
  if (!C.cf) goto L_111434a2;
  /* 11143486 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1114348b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1114348d lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11143491 not edx */
  EDX = (~(EDX));
  /* 11143493 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11143497 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11143499 jne 0x111434c6 */
  if (!C.zf) goto L_111434c6;
  /* 1114349b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1114349e and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 111434a0 jmp 0x111434c6 */
  goto L_111434c6;
L_111434a2:;
  /* 111434a2 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111434a5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 111434aa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 111434ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111434af lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 111434b3 not edx */
  EDX = (~(EDX));
  /* 111434b5 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 111434bc dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 111434be jne 0x111434c6 */
  if (!C.zf) goto L_111434c6;
  /* 111434c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111434c3 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_111434c6:;
  /* 111434c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111434c9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 111434cc mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 111434cf mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 111434d2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111434d5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 111434d8 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 111434db mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_111434de:;
  /* 111434de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_111434e1:;
  /* 111434e1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111434e5 jne 0x111434f0 */
  if (!C.zf) goto L_111434f0;
  /* 111434e7 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111434ea je 0x11143579 */
  if (C.zf) goto L_11143579;
L_111434f0:;
  /* 111434f0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111434f3 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 111434f6 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 111434f9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 111434fc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111434ff lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11143502 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11143505 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11143508 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1114350b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1114350e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11143511 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143514 jne 0x11143579 */
  if (!C.zf) goto L_11143579;
  /* 11143516 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 1114351a cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1114351d mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11143520 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11143522 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 11143526 jae 0x1114354d */
  if (!C.cf) goto L_1114354d;
  /* 11143528 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1114352c jne 0x1114353c */
  if (!C.zf) goto L_1114353c;
  /* 1114352e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11143533 mov ecx, edi */
  ECX = (EDI);
  /* 11143535 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11143537 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1114353a or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_1114353c:;
  /* 1114353c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11143541 mov ecx, edi */
  ECX = (EDI);
  /* 11143543 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11143545 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 11143549 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1114354b jmp 0x11143576 */
  goto L_11143576;
L_1114354d:;
  /* 1114354d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11143551 jne 0x11143563 */
  if (!C.zf) goto L_11143563;
  /* 11143553 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11143556 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1114355b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1114355d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11143560 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11143563:;
  /* 11143563 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11143566 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1114356b shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1114356d lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 11143574 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11143576:;
  /* 11143576 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_11143579:;
  /* 11143579 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1114357c mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 1114357e mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 11143582 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 11143584 jne 0x11143684 */
  if (!C.zf) goto L_11143684;
  /* 1114358a mov eax, dword ptr [0x111467f4] */
  EAX = (r32((uint32_t)(0x111467f4)));
  /* 1114358f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11143591 je 0x11143676 */
  if (C.zf) goto L_11143676;
  /* 11143597 mov ecx, dword ptr [0x111467ec] */
  ECX = (r32((uint32_t)(0x111467ec)));
  /* 1114359d mov edi, dword ptr [0x11145050] */
  EDI = (r32((uint32_t)(0x11145050)));
  /* 111435a3 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 111435a6 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111435a9 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 111435ae push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 111435b3 push ebx */
  push32((uint32_t)(EBX));
  /* 111435b4 push ecx */
  push32((uint32_t)(ECX));
  /* 111435b5 call edi */
  call_ind((uint32_t)(EDI), 0x111435b7u);
  /* 111435b7 mov ecx, dword ptr [0x111467ec] */
  ECX = (r32((uint32_t)(0x111467ec)));
  /* 111435bd mov eax, dword ptr [0x111467f4] */
  EAX = (r32((uint32_t)(0x111467f4)));
  /* 111435c2 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 111435c7 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 111435c9 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 111435cc mov eax, dword ptr [0x111467f4] */
  EAX = (r32((uint32_t)(0x111467f4)));
  /* 111435d1 mov ecx, dword ptr [0x111467ec] */
  ECX = (r32((uint32_t)(0x111467ec)));
  /* 111435d7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 111435da and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 111435e2 mov eax, dword ptr [0x111467f4] */
  EAX = (r32((uint32_t)(0x111467f4)));
  /* 111435e7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 111435ea dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 111435ed mov eax, dword ptr [0x111467f4] */
  EAX = (r32((uint32_t)(0x111467f4)));
  /* 111435f2 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 111435f5 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111435f9 jne 0x11143604 */
  if (!C.zf) goto L_11143604;
  /* 111435fb and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 111435ff mov eax, dword ptr [0x111467f4] */
  EAX = (r32((uint32_t)(0x111467f4)));
L_11143604:;
  /* 11143604 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143608 jne 0x11143676 */
  if (!C.zf) goto L_11143676;
  /* 1114360a push ebx */
  push32((uint32_t)(EBX));
  /* 1114360b push 0 */
  push32((uint32_t)(0x0u));
  /* 1114360d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11143610 call edi */
  call_ind((uint32_t)(EDI), 0x11143612u);
  /* 11143612 mov eax, dword ptr [0x111467f4] */
  EAX = (r32((uint32_t)(0x111467f4)));
  /* 11143617 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 1114361a push 0 */
  push32((uint32_t)(0x0u));
  /* 1114361c push dword ptr [0x11146a28] */
  push32((uint32_t)(r32((uint32_t)(0x11146a28))));
  /* 11143622 call dword ptr [0x1114504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1114504c))), 0x11143628u);
  /* 11143628 mov eax, dword ptr [0x111467f8] */
  EAX = (r32((uint32_t)(0x111467f8)));
  /* 1114362d mov edx, dword ptr [0x111467fc] */
  EDX = (r32((uint32_t)(0x111467fc)));
  /* 11143633 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11143636 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11143639 mov ecx, eax */
  ECX = (EAX);
  /* 1114363b mov eax, dword ptr [0x111467f4] */
  EAX = (r32((uint32_t)(0x111467f4)));
  /* 11143640 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11143642 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 11143646 push ecx */
  push32((uint32_t)(ECX));
  /* 11143647 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 1114364a push ecx */
  push32((uint32_t)(ECX));
  /* 1114364b push eax */
  push32((uint32_t)(EAX));
  /* 1114364c call 0x111440e0 */
  push32(0x11143651u); f_111440e0();
  /* 11143651 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11143654 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11143657 dec dword ptr [0x111467f8] */
  { uint32_t _r=(r32((uint32_t)(0x111467f8)))-1; w32((uint32_t)(0x111467f8), (_r)); fl_dec(_r,32); }
  /* 1114365d cmp eax, dword ptr [0x111467f4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x111467f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143663 jbe 0x11143668 */
  if ((C.cf||C.zf)) goto L_11143668;
  /* 11143665 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11143668:;
  /* 11143668 mov ecx, dword ptr [0x111467fc] */
  ECX = (r32((uint32_t)(0x111467fc)));
  /* 1114366e mov dword ptr [0x111467f0], ecx */
  w32((uint32_t)(0x111467f0), (ECX));
  /* 11143674 jmp 0x11143679 */
  goto L_11143679;
L_11143676:;
  /* 11143676 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11143679:;
  /* 11143679 mov dword ptr [0x111467f4], eax */
  w32((uint32_t)(0x111467f4), (EAX));
  /* 1114367e mov dword ptr [0x111467ec], esi */
  w32((uint32_t)(0x111467ec), (ESI));
L_11143684:;
  /* 11143684 pop edi */
  EDI = (pop32());
  /* 11143685 pop esi */
  ESI = (pop32());
  /* 11143686 pop ebx */
  EBX = (pop32());
  /* 11143687 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11143688 ret  */
  ESPCHK(0x1114335eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003689 @ 0x11143689 (777 bytes, 275 insns) */
void f_11143689(void) {
  FTRACE(0x11143689u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11143689 push ebp */
  push32((uint32_t)(EBP));
  /* 1114368a mov ebp, esp */
  EBP = (ESP);
  /* 1114368c sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1114368f mov eax, dword ptr [0x111467f8] */
  EAX = (r32((uint32_t)(0x111467f8)));
  /* 11143694 mov edx, dword ptr [0x111467fc] */
  EDX = (r32((uint32_t)(0x111467fc)));
  /* 1114369a push ebx */
  push32((uint32_t)(EBX));
  /* 1114369b push esi */
  push32((uint32_t)(ESI));
  /* 1114369c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1114369f push edi */
  push32((uint32_t)(EDI));
  /* 111436a0 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 111436a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111436a6 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 111436a9 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 111436ac and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 111436af mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 111436b2 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 111436b5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 111436b6 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111436b9 jge 0x111436c9 */
  if ((C.sf==C.of)) goto L_111436c9;
  /* 111436bb or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 111436be shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 111436c0 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 111436c4 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 111436c7 jmp 0x111436d9 */
  goto L_111436d9;
L_111436c9:;
  /* 111436c9 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111436cc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111436cf xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 111436d1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 111436d3 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 111436d6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_111436d9:;
  /* 111436d9 mov eax, dword ptr [0x111467f0] */
  EAX = (r32((uint32_t)(0x111467f0)));
  /* 111436de mov ebx, eax */
  EBX = (EAX);
  /* 111436e0 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111436e2 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 111436e5 jae 0x11143700 */
  if (!C.cf) goto L_11143700;
L_111436e7:;
  /* 111436e7 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 111436ea mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 111436ec and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 111436ef and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 111436f1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 111436f3 jne 0x11143700 */
  if (!C.zf) goto L_11143700;
  /* 111436f5 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 111436f8 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111436fb mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 111436fe jb 0x111436e7 */
  if (C.cf) goto L_111436e7;
L_11143700:;
  /* 11143700 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143703 jne 0x1114377e */
  if (!C.zf) goto L_1114377e;
  /* 11143705 mov ebx, edx */
  EBX = (EDX);
L_11143707:;
  /* 11143707 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143709 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1114370c jae 0x11143723 */
  if (!C.cf) goto L_11143723;
  /* 1114370e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11143711 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11143713 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11143716 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11143718 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1114371a jne 0x11143721 */
  if (!C.zf) goto L_11143721;
  /* 1114371c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1114371f jmp 0x11143707 */
  goto L_11143707;
L_11143721:;
  /* 11143721 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11143723:;
  /* 11143723 jne 0x1114377e */
  if (!C.zf) goto L_1114377e;
L_11143725:;
  /* 11143725 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143728 jae 0x1114373b */
  if (!C.cf) goto L_1114373b;
  /* 1114372a cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1114372e jne 0x11143738 */
  if (!C.zf) goto L_11143738;
  /* 11143730 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11143733 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11143736 jmp 0x11143725 */
  goto L_11143725;
L_11143738:;
  /* 11143738 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1114373b:;
  /* 1114373b jne 0x11143763 */
  if (!C.zf) goto L_11143763;
  /* 1114373d mov ebx, edx */
  EBX = (EDX);
L_1114373f:;
  /* 1114373f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143741 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11143744 jae 0x11143753 */
  if (!C.cf) goto L_11143753;
  /* 11143746 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1114374a jne 0x11143751 */
  if (!C.zf) goto L_11143751;
  /* 1114374c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1114374f jmp 0x1114373f */
  goto L_1114373f;
L_11143751:;
  /* 11143751 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11143753:;
  /* 11143753 jne 0x11143763 */
  if (!C.zf) goto L_11143763;
  /* 11143755 call 0x11143992 */
  push32(0x1114375au); f_11143992();
  /* 1114375a mov ebx, eax */
  EBX = (EAX);
  /* 1114375c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1114375e mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11143761 je 0x11143777 */
  if (C.zf) goto L_11143777;
L_11143763:;
  /* 11143763 push ebx */
  push32((uint32_t)(EBX));
  /* 11143764 call 0x11143a43 */
  push32(0x11143769u); f_11143a43();
  /* 11143769 pop ecx */
  ECX = (pop32());
  /* 1114376a mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 1114376d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1114376f mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11143772 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143775 jne 0x1114377e */
  if (!C.zf) goto L_1114377e;
L_11143777:;
  /* 11143777 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11143779 jmp 0x1114398d */
  goto L_1114398d;
L_1114377e:;
  /* 1114377e mov dword ptr [0x111467f0], ebx */
  w32((uint32_t)(0x111467f0), (EBX));
  /* 11143784 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11143787 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11143789 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1114378c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1114378f je 0x111437a5 */
  if (C.zf) goto L_111437a5;
  /* 11143791 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11143798 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 1114379c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1114379f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 111437a1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 111437a3 jne 0x111437dc */
  if (!C.zf) goto L_111437dc;
L_111437a5:;
  /* 111437a5 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 111437ab mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 111437ae and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 111437b1 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 111437b4 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 111437b8 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 111437bb or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 111437bd mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 111437c0 jne 0x111437d9 */
  if (!C.zf) goto L_111437d9;
L_111437c2:;
  /* 111437c2 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 111437c8 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 111437cb and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 111437ce add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111437d1 mov edi, esi */
  EDI = (ESI);
  /* 111437d3 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 111437d5 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 111437d7 je 0x111437c2 */
  if (C.zf) goto L_111437c2;
L_111437d9:;
  /* 111437d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_111437dc:;
  /* 111437dc mov ecx, edx */
  ECX = (EDX);
  /* 111437de xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 111437e0 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111437e6 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 111437ed mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111437f0 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 111437f4 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 111437f6 jne 0x11143805 */
  if (!C.zf) goto L_11143805;
  /* 111437f8 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 111437ff push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11143801 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11143804 pop edi */
  EDI = (pop32());
L_11143805:;
  /* 11143805 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11143807 jl 0x1114380e */
  if ((C.sf!=C.of)) goto L_1114380e;
  /* 11143809 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1114380b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1114380c jmp 0x11143805 */
  goto L_11143805;
L_1114380e:;
  /* 1114380e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11143811 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 11143815 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11143817 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1114381a mov esi, ecx */
  ESI = (ECX);
  /* 1114381c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1114381f sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11143822 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11143823 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143826 jle 0x1114382b */
  if ((C.zf||C.sf!=C.of)) goto L_1114382b;
  /* 11143828 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1114382a pop esi */
  ESI = (pop32());
L_1114382b:;
  /* 1114382b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1114382d je 0x11143940 */
  if (C.zf) goto L_11143940;
  /* 11143833 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11143836 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143839 jne 0x1114389c */
  if (!C.zf) goto L_1114389c;
  /* 1114383b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1114383e jge 0x1114386b */
  if ((C.sf==C.of)) goto L_1114386b;
  /* 11143840 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11143845 mov ecx, edi */
  ECX = (EDI);
  /* 11143847 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11143849 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1114384c lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11143850 not ebx */
  EBX = (~(EBX));
  /* 11143852 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11143855 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 11143859 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 1114385d dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1114385f jne 0x11143899 */
  if (!C.zf) goto L_11143899;
  /* 11143861 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11143864 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11143867 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 11143869 jmp 0x1114389c */
  goto L_1114389c;
L_1114386b:;
  /* 1114386b lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 1114386e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11143873 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11143875 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11143878 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 1114387c lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11143883 not ebx */
  EBX = (~(EBX));
  /* 11143885 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11143887 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11143889 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 1114388c jne 0x11143899 */
  if (!C.zf) goto L_11143899;
  /* 1114388e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11143891 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11143894 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11143897 jmp 0x1114389c */
  goto L_1114389c;
L_11143899:;
  /* 11143899 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1114389c:;
  /* 1114389c mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 1114389f mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 111438a2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111438a6 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 111438a9 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 111438ac mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 111438af mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 111438b2 je 0x1114394c */
  if (C.zf) goto L_1114394c;
  /* 111438b8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111438bb mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 111438bf lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 111438c2 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 111438c5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 111438c8 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 111438cb mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 111438ce mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 111438d1 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 111438d4 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111438d7 jne 0x1114393d */
  if (!C.zf) goto L_1114393d;
  /* 111438d9 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 111438dd cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111438e0 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 111438e3 jge 0x1114390e */
  if ((C.sf==C.of)) goto L_1114390e;
  /* 111438e5 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 111438e7 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111438eb mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 111438ef jne 0x111438fc */
  if (!C.zf) goto L_111438fc;
  /* 111438f1 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 111438f6 mov ecx, esi */
  ECX = (ESI);
  /* 111438f8 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 111438fa or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_111438fc:;
  /* 111438fc mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11143901 mov ecx, esi */
  ECX = (ESI);
  /* 11143903 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11143905 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11143908 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1114390c jmp 0x1114393d */
  goto L_1114393d;
L_1114390e:;
  /* 1114390e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11143910 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11143914 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11143918 jne 0x11143927 */
  if (!C.zf) goto L_11143927;
  /* 1114391a lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1114391d mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11143922 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11143924 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_11143927:;
  /* 11143927 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1114392a lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11143931 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11143934 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11143939 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1114393b or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1114393d:;
  /* 1114393d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11143940:;
  /* 11143940 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11143942 je 0x1114394f */
  if (C.zf) goto L_1114394f;
  /* 11143944 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11143946 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 1114394a jmp 0x1114394f */
  goto L_1114394f;
L_1114394c:;
  /* 1114394c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1114394f:;
  /* 1114394f mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 11143952 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11143954 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11143957 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11143959 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 1114395d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11143960 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11143962 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11143964 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 11143967 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11143969 jne 0x11143985 */
  if (!C.zf) goto L_11143985;
  /* 1114396b cmp ebx, dword ptr [0x111467f4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x111467f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143971 jne 0x11143985 */
  if (!C.zf) goto L_11143985;
  /* 11143973 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11143976 cmp ecx, dword ptr [0x111467ec] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x111467ec))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1114397c jne 0x11143985 */
  if (!C.zf) goto L_11143985;
  /* 1114397e and dword ptr [0x111467f4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x111467f4)))&(0x0u); w32((uint32_t)(0x111467f4), (_r)); fl_logic(_r,32); }
L_11143985:;
  /* 11143985 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11143988 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1114398a lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_1114398d:;
  /* 1114398d pop edi */
  EDI = (pop32());
  /* 1114398e pop esi */
  ESI = (pop32());
  /* 1114398f pop ebx */
  EBX = (pop32());
  /* 11143990 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11143991 ret  */
  ESPCHK(0x11143689u, _esp0);
  ESP += 4; return;
}

/* FUN_10003992 @ 0x11143992 (177 bytes, 53 insns) */
void f_11143992(void) {
  FTRACE(0x11143992u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11143992 mov eax, dword ptr [0x111467f8] */
  EAX = (r32((uint32_t)(0x111467f8)));
  /* 11143997 mov ecx, dword ptr [0x111467e8] */
  ECX = (r32((uint32_t)(0x111467e8)));
  /* 1114399d push esi */
  push32((uint32_t)(ESI));
  /* 1114399e push edi */
  push32((uint32_t)(EDI));
  /* 1114399f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 111439a1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111439a3 jne 0x111439d5 */
  if (!C.zf) goto L_111439d5;
  /* 111439a5 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 111439a9 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 111439ac push eax */
  push32((uint32_t)(EAX));
  /* 111439ad push dword ptr [0x111467fc] */
  push32((uint32_t)(r32((uint32_t)(0x111467fc))));
  /* 111439b3 push edi */
  push32((uint32_t)(EDI));
  /* 111439b4 push dword ptr [0x11146a28] */
  push32((uint32_t)(r32((uint32_t)(0x11146a28))));
  /* 111439ba call dword ptr [0x11145024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145024))), 0x111439c0u);
  /* 111439c0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111439c2 je 0x11143a25 */
  if (C.zf) goto L_11143a25;
  /* 111439c4 add dword ptr [0x111467e8], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x111467e8))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x111467e8), (_r)); fl_add(_a,_b,_r,32); }
  /* 111439cb mov dword ptr [0x111467fc], eax */
  w32((uint32_t)(0x111467fc), (EAX));
  /* 111439d0 mov eax, dword ptr [0x111467f8] */
  EAX = (r32((uint32_t)(0x111467f8)));
L_111439d5:;
  /* 111439d5 mov ecx, dword ptr [0x111467fc] */
  ECX = (r32((uint32_t)(0x111467fc)));
  /* 111439db push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 111439e0 push 8 */
  push32((uint32_t)(0x8u));
  /* 111439e2 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 111439e5 push dword ptr [0x11146a28] */
  push32((uint32_t)(r32((uint32_t)(0x11146a28))));
  /* 111439eb lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 111439ee call dword ptr [0x11145038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145038))), 0x111439f4u);
  /* 111439f4 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111439f6 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 111439f9 je 0x11143a25 */
  if (C.zf) goto L_11143a25;
  /* 111439fb push 4 */
  push32((uint32_t)(0x4u));
  /* 111439fd push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11143a02 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11143a07 push edi */
  push32((uint32_t)(EDI));
  /* 11143a08 call dword ptr [0x11145028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145028))), 0x11143a0eu);
  /* 11143a0e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143a10 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11143a13 jne 0x11143a29 */
  if (!C.zf) goto L_11143a29;
  /* 11143a15 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11143a18 push edi */
  push32((uint32_t)(EDI));
  /* 11143a19 push dword ptr [0x11146a28] */
  push32((uint32_t)(r32((uint32_t)(0x11146a28))));
  /* 11143a1f call dword ptr [0x1114504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1114504c))), 0x11143a25u);
L_11143a25:;
  /* 11143a25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11143a27 jmp 0x11143a40 */
  goto L_11143a40;
L_11143a29:;
  /* 11143a29 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11143a2d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11143a2f mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11143a32 inc dword ptr [0x111467f8] */
  { uint32_t _r=(r32((uint32_t)(0x111467f8)))+1; w32((uint32_t)(0x111467f8), (_r)); fl_inc(_r,32); }
  /* 11143a38 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11143a3b or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11143a3e mov eax, esi */
  EAX = (ESI);
L_11143a40:;
  /* 11143a40 pop edi */
  EDI = (pop32());
  /* 11143a41 pop esi */
  ESI = (pop32());
  /* 11143a42 ret  */
  ESPCHK(0x11143992u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a43 @ 0x11143a43 (251 bytes, 85 insns) */
void f_11143a43(void) {
  FTRACE(0x11143a43u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11143a43 push ebp */
  push32((uint32_t)(EBP));
  /* 11143a44 mov ebp, esp */
  EBP = (ESP);
  /* 11143a46 push ecx */
  push32((uint32_t)(ECX));
  /* 11143a47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11143a4a push ebx */
  push32((uint32_t)(EBX));
  /* 11143a4b push esi */
  push32((uint32_t)(ESI));
  /* 11143a4c push edi */
  push32((uint32_t)(EDI));
  /* 11143a4d mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 11143a50 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11143a53 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11143a55:;
  /* 11143a55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11143a57 jl 0x11143a5e */
  if ((C.sf!=C.of)) goto L_11143a5e;
  /* 11143a59 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11143a5b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11143a5c jmp 0x11143a55 */
  goto L_11143a55;
L_11143a5e:;
  /* 11143a5e mov eax, ebx */
  EAX = (EBX);
  /* 11143a60 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11143a62 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11143a68 pop edx */
  EDX = (pop32());
  /* 11143a69 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 11143a70 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11143a73:;
  /* 11143a73 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 11143a76 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 11143a79 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11143a7c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11143a7d jne 0x11143a73 */
  if (!C.zf) goto L_11143a73;
  /* 11143a7f mov edi, ebx */
  EDI = (EBX);
  /* 11143a81 push 4 */
  push32((uint32_t)(0x4u));
  /* 11143a83 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11143a86 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11143a89 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11143a8e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11143a93 push edi */
  push32((uint32_t)(EDI));
  /* 11143a94 call dword ptr [0x11145028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145028))), 0x11143a9au);
  /* 11143a9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11143a9c jne 0x11143aa6 */
  if (!C.zf) goto L_11143aa6;
  /* 11143a9e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11143aa1 jmp 0x11143b39 */
  goto L_11143b39;
L_11143aa6:;
  /* 11143aa6 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 11143aac cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143aae ja 0x11143aec */
  if ((!C.cf&&!C.zf)) goto L_11143aec;
  /* 11143ab0 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_11143ab3:;
  /* 11143ab3 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 11143ab7 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 11143abe lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 11143ac4 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 11143acb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11143acd lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 11143ad3 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11143ad6 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 11143ae0 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11143ae5 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 11143ae8 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143aea jbe 0x11143ab3 */
  if ((C.cf||C.zf)) goto L_11143ab3;
L_11143aec:;
  /* 11143aec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11143aef lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 11143af2 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11143af7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11143af9 pop edi */
  EDI = (pop32());
  /* 11143afa mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11143afd mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11143b00 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 11143b03 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11143b06 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11143b09 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11143b0e mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 11143b15 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 11143b18 mov cl, al */
  CL = (AL);
  /* 11143b1a inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11143b1c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11143b1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11143b21 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 11143b24 jne 0x11143b29 */
  if (!C.zf) goto L_11143b29;
  /* 11143b26 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_11143b29:;
  /* 11143b29 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11143b2e mov ecx, ebx */
  ECX = (EBX);
  /* 11143b30 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11143b32 not edx */
  EDX = (~(EDX));
  /* 11143b34 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11143b37 mov eax, ebx */
  EAX = (EBX);
L_11143b39:;
  /* 11143b39 pop edi */
  EDI = (pop32());
  /* 11143b3a pop esi */
  ESI = (pop32());
  /* 11143b3b pop ebx */
  EBX = (pop32());
  /* 11143b3c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11143b3d ret  */
  ESPCHK(0x11143a43u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b3e @ 0x11143b3e (137 bytes, 50 insns) */
void f_11143b3e(void) {
  FTRACE(0x11143b3eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11143b3e push ebx */
  push32((uint32_t)(EBX));
  /* 11143b3f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11143b41 cmp dword ptr [0x111467ac], ebx */
  { uint32_t _a=(r32((uint32_t)(0x111467ac))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143b47 push esi */
  push32((uint32_t)(ESI));
  /* 11143b48 push edi */
  push32((uint32_t)(EDI));
  /* 11143b49 jne 0x11143b8d */
  if (!C.zf) goto L_11143b8d;
  /* 11143b4b push 0x11145450 */
  push32((uint32_t)(0x11145450u));
  /* 11143b50 call dword ptr [0x1114501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1114501c))), 0x11143b56u);
  /* 11143b56 mov edi, eax */
  EDI = (EAX);
  /* 11143b58 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143b5a je 0x11143bc3 */
  if (C.zf) goto L_11143bc3;
  /* 11143b5c mov esi, dword ptr [0x11145020] */
  ESI = (r32((uint32_t)(0x11145020)));
  /* 11143b62 push 0x11145444 */
  push32((uint32_t)(0x11145444u));
  /* 11143b67 push edi */
  push32((uint32_t)(EDI));
  /* 11143b68 call esi */
  call_ind((uint32_t)(ESI), 0x11143b6au);
  /* 11143b6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11143b6c mov dword ptr [0x111467ac], eax */
  w32((uint32_t)(0x111467ac), (EAX));
  /* 11143b71 je 0x11143bc3 */
  if (C.zf) goto L_11143bc3;
  /* 11143b73 push 0x11145434 */
  push32((uint32_t)(0x11145434u));
  /* 11143b78 push edi */
  push32((uint32_t)(EDI));
  /* 11143b79 call esi */
  call_ind((uint32_t)(ESI), 0x11143b7bu);
  /* 11143b7b push 0x11145420 */
  push32((uint32_t)(0x11145420u));
  /* 11143b80 push edi */
  push32((uint32_t)(EDI));
  /* 11143b81 mov dword ptr [0x111467b0], eax */
  w32((uint32_t)(0x111467b0), (EAX));
  /* 11143b86 call esi */
  call_ind((uint32_t)(ESI), 0x11143b88u);
  /* 11143b88 mov dword ptr [0x111467b4], eax */
  w32((uint32_t)(0x111467b4), (EAX));
L_11143b8d:;
  /* 11143b8d mov eax, dword ptr [0x111467b0] */
  EAX = (r32((uint32_t)(0x111467b0)));
  /* 11143b92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11143b94 je 0x11143bac */
  if (C.zf) goto L_11143bac;
  /* 11143b96 call eax */
  call_ind((uint32_t)(EAX), 0x11143b98u);
  /* 11143b98 mov ebx, eax */
  EBX = (EAX);
  /* 11143b9a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11143b9c je 0x11143bac */
  if (C.zf) goto L_11143bac;
  /* 11143b9e mov eax, dword ptr [0x111467b4] */
  EAX = (r32((uint32_t)(0x111467b4)));
  /* 11143ba3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11143ba5 je 0x11143bac */
  if (C.zf) goto L_11143bac;
  /* 11143ba7 push ebx */
  push32((uint32_t)(EBX));
  /* 11143ba8 call eax */
  call_ind((uint32_t)(EAX), 0x11143baau);
  /* 11143baa mov ebx, eax */
  EBX = (EAX);
L_11143bac:;
  /* 11143bac push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11143bb0 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11143bb4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11143bb8 push ebx */
  push32((uint32_t)(EBX));
  /* 11143bb9 call dword ptr [0x111467ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111467ac))), 0x11143bbfu);
L_11143bbf:;
  /* 11143bbf pop edi */
  EDI = (pop32());
  /* 11143bc0 pop esi */
  ESI = (pop32());
  /* 11143bc1 pop ebx */
  EBX = (pop32());
  /* 11143bc2 ret  */
  ESPCHK(0x11143b3eu, _esp0);
  ESP += 4; return;
L_11143bc3:;
  /* 11143bc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11143bc5 jmp 0x11143bbf */
  goto L_11143bbf;
}

/* _strncpy @ 0x11143bd0 (254 bytes, 109 insns) */
void f_11143bd0(void) {
  FTRACE(0x11143bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11143bd0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11143bd4 push edi */
  push32((uint32_t)(EDI));
  /* 11143bd5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11143bd7 je 0x11143c53 */
  if (C.zf) goto L_11143c53;
  /* 11143bd9 push esi */
  push32((uint32_t)(ESI));
  /* 11143bda push ebx */
  push32((uint32_t)(EBX));
  /* 11143bdb mov ebx, ecx */
  EBX = (ECX);
  /* 11143bdd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11143be1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11143be7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11143beb jne 0x11143bf4 */
  if (!C.zf) goto L_11143bf4;
  /* 11143bed shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11143bf0 jne 0x11143c61 */
  if (!C.zf) goto L_11143c61;
  /* 11143bf2 jmp 0x11143c15 */
  goto L_11143c15;
L_11143bf4:;
  /* 11143bf4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11143bf6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11143bf7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11143bf9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11143bfa dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11143bfb je 0x11143c22 */
  if (C.zf) goto L_11143c22;
  /* 11143bfd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11143bff je 0x11143c2a */
  if (C.zf) goto L_11143c2a;
  /* 11143c01 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11143c07 jne 0x11143bf4 */
  if (!C.zf) goto L_11143bf4;
  /* 11143c09 mov ebx, ecx */
  EBX = (ECX);
  /* 11143c0b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11143c0e jne 0x11143c61 */
  if (!C.zf) goto L_11143c61;
L_11143c10:;
  /* 11143c10 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11143c13 je 0x11143c22 */
  if (C.zf) goto L_11143c22;
L_11143c15:;
  /* 11143c15 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11143c17 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11143c18 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11143c1a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11143c1b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11143c1d je 0x11143c4e */
  if (C.zf) goto L_11143c4e;
  /* 11143c1f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11143c20 jne 0x11143c15 */
  if (!C.zf) goto L_11143c15;
L_11143c22:;
  /* 11143c22 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11143c26 pop ebx */
  EBX = (pop32());
  /* 11143c27 pop esi */
  ESI = (pop32());
  /* 11143c28 pop edi */
  EDI = (pop32());
  /* 11143c29 ret  */
  ESPCHK(0x11143bd0u, _esp0);
  ESP += 4; return;
L_11143c2a:;
  /* 11143c2a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11143c30 je 0x11143c44 */
  if (C.zf) goto L_11143c44;
L_11143c32:;
  /* 11143c32 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11143c34 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11143c35 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11143c36 je 0x11143cc6 */
  if (C.zf) goto L_11143cc6;
  /* 11143c3c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11143c42 jne 0x11143c32 */
  if (!C.zf) goto L_11143c32;
L_11143c44:;
  /* 11143c44 mov ebx, ecx */
  EBX = (ECX);
  /* 11143c46 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11143c49 jne 0x11143cb7 */
  if (!C.zf) goto L_11143cb7;
L_11143c4b:;
  /* 11143c4b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11143c4d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11143c4e:;
  /* 11143c4e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11143c4f jne 0x11143c4b */
  if (!C.zf) goto L_11143c4b;
  /* 11143c51 pop ebx */
  EBX = (pop32());
  /* 11143c52 pop esi */
  ESI = (pop32());
L_11143c53:;
  /* 11143c53 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11143c57 pop edi */
  EDI = (pop32());
  /* 11143c58 ret  */
  ESPCHK(0x11143bd0u, _esp0);
  ESP += 4; return;
L_11143c59:;
  /* 11143c59 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11143c5b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11143c5e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11143c5f je 0x11143c10 */
  if (C.zf) goto L_11143c10;
L_11143c61:;
  /* 11143c61 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11143c66 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11143c68 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11143c6a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11143c6d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11143c6f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11143c71 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11143c74 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11143c79 je 0x11143c59 */
  if (C.zf) goto L_11143c59;
  /* 11143c7b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11143c7d je 0x11143cab */
  if (C.zf) goto L_11143cab;
  /* 11143c7f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11143c81 je 0x11143ca1 */
  if (C.zf) goto L_11143ca1;
  /* 11143c83 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11143c89 je 0x11143c97 */
  if (C.zf) goto L_11143c97;
  /* 11143c8b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11143c91 jne 0x11143c59 */
  if (!C.zf) goto L_11143c59;
  /* 11143c93 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11143c95 jmp 0x11143caf */
  goto L_11143caf;
L_11143c97:;
  /* 11143c97 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11143c9d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11143c9f jmp 0x11143caf */
  goto L_11143caf;
L_11143ca1:;
  /* 11143ca1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11143ca7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11143ca9 jmp 0x11143caf */
  goto L_11143caf;
L_11143cab:;
  /* 11143cab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11143cad mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11143caf:;
  /* 11143caf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11143cb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11143cb4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11143cb5 je 0x11143cc1 */
  if (C.zf) goto L_11143cc1;
L_11143cb7:;
  /* 11143cb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11143cb9:;
  /* 11143cb9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11143cbb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11143cbe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11143cbf jne 0x11143cb9 */
  if (!C.zf) goto L_11143cb9;
L_11143cc1:;
  /* 11143cc1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11143cc4 jne 0x11143c4b */
  if (!C.zf) goto L_11143c4b;
L_11143cc6:;
  /* 11143cc6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11143cca pop ebx */
  EBX = (pop32());
  /* 11143ccb pop esi */
  ESI = (pop32());
  /* 11143ccc pop edi */
  EDI = (pop32());
  /* 11143ccd ret  */
  ESPCHK(0x11143bd0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11143cd0 (88 bytes, 40 insns) */
void f_11143cd0(void) {
  FTRACE(0x11143cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11143cd0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11143cd4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11143cd8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11143cda je 0x11143d23 */
  if (C.zf) goto L_11143d23;
  /* 11143cdc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11143cde mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11143ce2 push edi */
  push32((uint32_t)(EDI));
  /* 11143ce3 mov edi, ecx */
  EDI = (ECX);
  /* 11143ce5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143ce8 jb 0x11143d17 */
  if (C.cf) goto L_11143d17;
  /* 11143cea neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11143cec and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11143cef je 0x11143cf9 */
  if (C.zf) goto L_11143cf9;
  /* 11143cf1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11143cf3:;
  /* 11143cf3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11143cf5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11143cf6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11143cf7 jne 0x11143cf3 */
  if (!C.zf) goto L_11143cf3;
L_11143cf9:;
  /* 11143cf9 mov ecx, eax */
  ECX = (EAX);
  /* 11143cfb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11143cfe add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11143d00 mov ecx, eax */
  ECX = (EAX);
  /* 11143d02 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11143d05 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11143d07 mov ecx, edx */
  ECX = (EDX);
  /* 11143d09 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11143d0c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11143d0f je 0x11143d17 */
  if (C.zf) goto L_11143d17;
  /* 11143d11 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11143d13 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11143d15 je 0x11143d1d */
  if (C.zf) goto L_11143d1d;
L_11143d17:;
  /* 11143d17 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11143d19 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11143d1a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11143d1b jne 0x11143d17 */
  if (!C.zf) goto L_11143d17;
L_11143d1d:;
  /* 11143d1d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11143d21 pop edi */
  EDI = (pop32());
  /* 11143d22 ret  */
  ESPCHK(0x11143cd0u, _esp0);
  ESP += 4; return;
L_11143d23:;
  /* 11143d23 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11143d27 ret  */
  ESPCHK(0x11143cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d28 @ 0x11143d28 (27 bytes, 13 insns) */
void f_11143d28(void) {
  FTRACE(0x11143d28u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11143d28 mov eax, dword ptr [0x111467b8] */
  EAX = (r32((uint32_t)(0x111467b8)));
  /* 11143d2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11143d2f je 0x11143d40 */
  if (C.zf) goto L_11143d40;
  /* 11143d31 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11143d35 call eax */
  call_ind((uint32_t)(EAX), 0x11143d37u);
  /* 11143d37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11143d39 pop ecx */
  ECX = (pop32());
  /* 11143d3a je 0x11143d40 */
  if (C.zf) goto L_11143d40;
  /* 11143d3c push 1 */
  push32((uint32_t)(0x1u));
  /* 11143d3e pop eax */
  EAX = (pop32());
  /* 11143d3f ret  */
  ESPCHK(0x11143d28u, _esp0);
  ESP += 4; return;
L_11143d40:;
  /* 11143d40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11143d42 ret  */
  ESPCHK(0x11143d28u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d43 @ 0x11143d43 (511 bytes, 193 insns) */
void f_11143d43(void) {
  FTRACE(0x11143d43u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11143d43 push ebp */
  push32((uint32_t)(EBP));
  /* 11143d44 mov ebp, esp */
  EBP = (ESP);
  /* 11143d46 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11143d48 push 0x11145468 */
  push32((uint32_t)(0x11145468u));
  /* 11143d4d push 0x11144510 */
  push32((uint32_t)(0x11144510u));
  /* 11143d52 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11143d58 push eax */
  push32((uint32_t)(EAX));
  /* 11143d59 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11143d60 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11143d63 push ebx */
  push32((uint32_t)(EBX));
  /* 11143d64 push esi */
  push32((uint32_t)(ESI));
  /* 11143d65 push edi */
  push32((uint32_t)(EDI));
  /* 11143d66 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11143d69 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11143d6b cmp dword ptr [0x111467e0], edi */
  { uint32_t _a=(r32((uint32_t)(0x111467e0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143d71 jne 0x11143db9 */
  if (!C.zf) goto L_11143db9;
  /* 11143d73 push edi */
  push32((uint32_t)(EDI));
  /* 11143d74 push edi */
  push32((uint32_t)(EDI));
  /* 11143d75 push 1 */
  push32((uint32_t)(0x1u));
  /* 11143d77 pop ebx */
  EBX = (pop32());
  /* 11143d78 push ebx */
  push32((uint32_t)(EBX));
  /* 11143d79 push 0x11145460 */
  push32((uint32_t)(0x11145460u));
  /* 11143d7e mov esi, 0x100 */
  ESI = (0x100u);
  /* 11143d83 push esi */
  push32((uint32_t)(ESI));
  /* 11143d84 push edi */
  push32((uint32_t)(EDI));
  /* 11143d85 call dword ptr [0x11145010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145010))), 0x11143d8bu);
  /* 11143d8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11143d8d je 0x11143d97 */
  if (C.zf) goto L_11143d97;
  /* 11143d8f mov dword ptr [0x111467e0], ebx */
  w32((uint32_t)(0x111467e0), (EBX));
  /* 11143d95 jmp 0x11143db9 */
  goto L_11143db9;
L_11143d97:;
  /* 11143d97 push edi */
  push32((uint32_t)(EDI));
  /* 11143d98 push edi */
  push32((uint32_t)(EDI));
  /* 11143d99 push ebx */
  push32((uint32_t)(EBX));
  /* 11143d9a push 0x1114545c */
  push32((uint32_t)(0x1114545cu));
  /* 11143d9f push esi */
  push32((uint32_t)(ESI));
  /* 11143da0 push edi */
  push32((uint32_t)(EDI));
  /* 11143da1 call dword ptr [0x11145014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145014))), 0x11143da7u);
  /* 11143da7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11143da9 je 0x11143ed1 */
  if (C.zf) goto L_11143ed1;
  /* 11143daf mov dword ptr [0x111467e0], 2 */
  w32((uint32_t)(0x111467e0), (0x2u));
L_11143db9:;
  /* 11143db9 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143dbc jle 0x11143dce */
  if ((C.zf||C.sf!=C.of)) goto L_11143dce;
  /* 11143dbe push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11143dc1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11143dc4 call 0x11143f67 */
  push32(0x11143dc9u); f_11143f67();
  /* 11143dc9 pop ecx */
  ECX = (pop32());
  /* 11143dca pop ecx */
  ECX = (pop32());
  /* 11143dcb mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11143dce:;
  /* 11143dce mov eax, dword ptr [0x111467e0] */
  EAX = (r32((uint32_t)(0x111467e0)));
  /* 11143dd3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143dd6 jne 0x11143df5 */
  if (!C.zf) goto L_11143df5;
  /* 11143dd8 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11143ddb push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11143dde push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11143de1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11143de4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11143de7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11143dea call dword ptr [0x11145014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145014))), 0x11143df0u);
  /* 11143df0 jmp 0x11143ed3 */
  goto L_11143ed3;
L_11143df5:;
  /* 11143df5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143df8 jne 0x11143ed1 */
  if (!C.zf) goto L_11143ed1;
  /* 11143dfe cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143e01 jne 0x11143e0b */
  if (!C.zf) goto L_11143e0b;
  /* 11143e03 mov eax, dword ptr [0x111467d8] */
  EAX = (r32((uint32_t)(0x111467d8)));
  /* 11143e08 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11143e0b:;
  /* 11143e0b push edi */
  push32((uint32_t)(EDI));
  /* 11143e0c push edi */
  push32((uint32_t)(EDI));
  /* 11143e0d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11143e10 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11143e13 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11143e16 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11143e18 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11143e1a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11143e1d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11143e1e push eax */
  push32((uint32_t)(EAX));
  /* 11143e1f push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11143e22 call dword ptr [0x11145018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145018))), 0x11143e28u);
  /* 11143e28 mov ebx, eax */
  EBX = (EAX);
  /* 11143e2a mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 11143e2d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143e2f je 0x11143ed1 */
  if (C.zf) goto L_11143ed1;
  /* 11143e35 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11143e38 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 11143e3b add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11143e3e and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11143e40 call 0x111445f0 */
  push32(0x11143e45u); f_111445f0();
  /* 11143e45 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11143e48 mov eax, esp */
  EAX = (ESP);
  /* 11143e4a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11143e4d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11143e51 jmp 0x11143e66 */
  goto L_11143e66;
  /* 11143e53 push 1 */
  push32((uint32_t)(0x1u));
  /* 11143e55 pop eax */
  EAX = (pop32());
  /* 11143e56 ret  */
  ESPCHK(0x11143d43u, _esp0);
  ESP += 4; return;
  /* 11143e57 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11143e5a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11143e5c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11143e5f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11143e63 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_11143e66:;
  /* 11143e66 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143e69 je 0x11143ed1 */
  if (C.zf) goto L_11143ed1;
  /* 11143e6b push ebx */
  push32((uint32_t)(EBX));
  /* 11143e6c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11143e6f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11143e72 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11143e75 push 1 */
  push32((uint32_t)(0x1u));
  /* 11143e77 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11143e7a call dword ptr [0x11145018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145018))), 0x11143e80u);
  /* 11143e80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11143e82 je 0x11143ed1 */
  if (C.zf) goto L_11143ed1;
  /* 11143e84 push edi */
  push32((uint32_t)(EDI));
  /* 11143e85 push edi */
  push32((uint32_t)(EDI));
  /* 11143e86 push ebx */
  push32((uint32_t)(EBX));
  /* 11143e87 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11143e8a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11143e8d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11143e90 call dword ptr [0x11145010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145010))), 0x11143e96u);
  /* 11143e96 mov esi, eax */
  ESI = (EAX);
  /* 11143e98 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 11143e9b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143e9d je 0x11143ed1 */
  if (C.zf) goto L_11143ed1;
  /* 11143e9f test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 11143ea3 je 0x11143ee5 */
  if (C.zf) goto L_11143ee5;
  /* 11143ea5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143ea8 je 0x11143f60 */
  if (C.zf) goto L_11143f60;
  /* 11143eae cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143eb1 jg 0x11143ed1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11143ed1;
  /* 11143eb3 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11143eb6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11143eb9 push ebx */
  push32((uint32_t)(EBX));
  /* 11143eba push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11143ebd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11143ec0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11143ec3 call dword ptr [0x11145010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145010))), 0x11143ec9u);
  /* 11143ec9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11143ecb jne 0x11143f60 */
  if (!C.zf) goto L_11143f60;
L_11143ed1:;
  /* 11143ed1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11143ed3:;
  /* 11143ed3 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11143ed6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11143ed9 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11143ee0 pop edi */
  EDI = (pop32());
  /* 11143ee1 pop esi */
  ESI = (pop32());
  /* 11143ee2 pop ebx */
  EBX = (pop32());
  /* 11143ee3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11143ee4 ret  */
  ESPCHK(0x11143d43u, _esp0);
  ESP += 4; return;
L_11143ee5:;
  /* 11143ee5 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11143eec lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11143eef add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11143ef2 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11143ef4 call 0x111445f0 */
  push32(0x11143ef9u); f_111445f0();
  /* 11143ef9 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11143efc mov ebx, esp */
  EBX = (ESP);
  /* 11143efe mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11143f01 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11143f05 jmp 0x11143f19 */
  goto L_11143f19;
  /* 11143f07 push 1 */
  push32((uint32_t)(0x1u));
  /* 11143f09 pop eax */
  EAX = (pop32());
  /* 11143f0a ret  */
  ESPCHK(0x11143d43u, _esp0);
  ESP += 4; return;
  /* 11143f0b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11143f0e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11143f10 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11143f12 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11143f16 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_11143f19:;
  /* 11143f19 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143f1b je 0x11143ed1 */
  if (C.zf) goto L_11143ed1;
  /* 11143f1d push esi */
  push32((uint32_t)(ESI));
  /* 11143f1e push ebx */
  push32((uint32_t)(EBX));
  /* 11143f1f push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11143f22 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11143f25 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11143f28 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11143f2b call dword ptr [0x11145010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145010))), 0x11143f31u);
  /* 11143f31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11143f33 je 0x11143ed1 */
  if (C.zf) goto L_11143ed1;
  /* 11143f35 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143f38 push edi */
  push32((uint32_t)(EDI));
  /* 11143f39 push edi */
  push32((uint32_t)(EDI));
  /* 11143f3a jne 0x11143f40 */
  if (!C.zf) goto L_11143f40;
  /* 11143f3c push edi */
  push32((uint32_t)(EDI));
  /* 11143f3d push edi */
  push32((uint32_t)(EDI));
  /* 11143f3e jmp 0x11143f46 */
  goto L_11143f46;
L_11143f40:;
  /* 11143f40 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11143f43 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_11143f46:;
  /* 11143f46 push esi */
  push32((uint32_t)(ESI));
  /* 11143f47 push ebx */
  push32((uint32_t)(EBX));
  /* 11143f48 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11143f4d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11143f50 call dword ptr [0x11145064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145064))), 0x11143f56u);
  /* 11143f56 mov esi, eax */
  ESI = (EAX);
  /* 11143f58 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143f5a je 0x11143ed1 */
  if (C.zf) goto L_11143ed1;
L_11143f60:;
  /* 11143f60 mov eax, esi */
  EAX = (ESI);
  /* 11143f62 jmp 0x11143ed3 */
  goto L_11143ed3;
}

/* FUN_10003f67 @ 0x11143f67 (43 bytes, 20 insns) */
void f_11143f67(void) {
  FTRACE(0x11143f67u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11143f67 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11143f6b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11143f6f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11143f71 push esi */
  push32((uint32_t)(ESI));
  /* 11143f72 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 11143f75 je 0x11143f84 */
  if (C.zf) goto L_11143f84;
L_11143f77:;
  /* 11143f77 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11143f7a je 0x11143f84 */
  if (C.zf) goto L_11143f84;
  /* 11143f7c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11143f7d mov esi, ecx */
  ESI = (ECX);
  /* 11143f7f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11143f80 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11143f82 jne 0x11143f77 */
  if (!C.zf) goto L_11143f77;
L_11143f84:;
  /* 11143f84 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11143f87 pop esi */
  ESI = (pop32());
  /* 11143f88 jne 0x11143f8f */
  if (!C.zf) goto L_11143f8f;
  /* 11143f8a sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11143f8e ret  */
  ESPCHK(0x11143f67u, _esp0);
  ESP += 4; return;
L_11143f8f:;
  /* 11143f8f mov eax, edx */
  EAX = (EDX);
  /* 11143f91 ret  */
  ESPCHK(0x11143f67u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f92 @ 0x11143f92 (318 bytes, 123 insns) */
void f_11143f92(void) {
  FTRACE(0x11143f92u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11143f92 push ebp */
  push32((uint32_t)(EBP));
  /* 11143f93 mov ebp, esp */
  EBP = (ESP);
  /* 11143f95 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11143f97 push 0x11145480 */
  push32((uint32_t)(0x11145480u));
  /* 11143f9c push 0x11144510 */
  push32((uint32_t)(0x11144510u));
  /* 11143fa1 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11143fa7 push eax */
  push32((uint32_t)(EAX));
  /* 11143fa8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11143faf sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11143fb2 push ebx */
  push32((uint32_t)(EBX));
  /* 11143fb3 push esi */
  push32((uint32_t)(ESI));
  /* 11143fb4 push edi */
  push32((uint32_t)(EDI));
  /* 11143fb5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11143fb8 mov eax, dword ptr [0x111467e4] */
  EAX = (r32((uint32_t)(0x111467e4)));
  /* 11143fbd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11143fbf cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11143fc1 jne 0x11144001 */
  if (!C.zf) goto L_11144001;
  /* 11143fc3 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11143fc6 push eax */
  push32((uint32_t)(EAX));
  /* 11143fc7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11143fc9 pop esi */
  ESI = (pop32());
  /* 11143fca push esi */
  push32((uint32_t)(ESI));
  /* 11143fcb push 0x11145460 */
  push32((uint32_t)(0x11145460u));
  /* 11143fd0 push esi */
  push32((uint32_t)(ESI));
  /* 11143fd1 call dword ptr [0x11145008] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145008))), 0x11143fd7u);
  /* 11143fd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11143fd9 je 0x11143fdf */
  if (C.zf) goto L_11143fdf;
  /* 11143fdb mov eax, esi */
  EAX = (ESI);
  /* 11143fdd jmp 0x11143ffc */
  goto L_11143ffc;
L_11143fdf:;
  /* 11143fdf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11143fe2 push eax */
  push32((uint32_t)(EAX));
  /* 11143fe3 push esi */
  push32((uint32_t)(ESI));
  /* 11143fe4 push 0x1114545c */
  push32((uint32_t)(0x1114545cu));
  /* 11143fe9 push esi */
  push32((uint32_t)(ESI));
  /* 11143fea push ebx */
  push32((uint32_t)(EBX));
  /* 11143feb call dword ptr [0x1114500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1114500c))), 0x11143ff1u);
  /* 11143ff1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11143ff3 je 0x111440c7 */
  if (C.zf) goto L_111440c7;
  /* 11143ff9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11143ffb pop eax */
  EAX = (pop32());
L_11143ffc:;
  /* 11143ffc mov dword ptr [0x111467e4], eax */
  w32((uint32_t)(0x111467e4), (EAX));
L_11144001:;
  /* 11144001 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11144004 jne 0x1114402a */
  if (!C.zf) goto L_1114402a;
  /* 11144006 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11144009 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1114400b jne 0x11144012 */
  if (!C.zf) goto L_11144012;
  /* 1114400d mov eax, dword ptr [0x111467c8] */
  EAX = (r32((uint32_t)(0x111467c8)));
L_11144012:;
  /* 11144012 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11144015 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11144018 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1114401b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1114401e push eax */
  push32((uint32_t)(EAX));
  /* 1114401f call dword ptr [0x1114500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1114500c))), 0x11144025u);
  /* 11144025 jmp 0x111440c9 */
  goto L_111440c9;
L_1114402a:;
  /* 1114402a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1114402d jne 0x111440c7 */
  if (!C.zf) goto L_111440c7;
  /* 11144033 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11144036 jne 0x11144040 */
  if (!C.zf) goto L_11144040;
  /* 11144038 mov eax, dword ptr [0x111467d8] */
  EAX = (r32((uint32_t)(0x111467d8)));
  /* 1114403d mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11144040:;
  /* 11144040 push ebx */
  push32((uint32_t)(EBX));
  /* 11144041 push ebx */
  push32((uint32_t)(EBX));
  /* 11144042 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11144045 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11144048 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1114404b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1114404d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1114404f and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11144052 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11144053 push eax */
  push32((uint32_t)(EAX));
  /* 11144054 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11144057 call dword ptr [0x11145018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145018))), 0x1114405du);
  /* 1114405d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11144060 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11144062 je 0x111440c7 */
  if (C.zf) goto L_111440c7;
  /* 11144064 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11144067 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 1114406a mov eax, edi */
  EAX = (EDI);
  /* 1114406c add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1114406f and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11144071 call 0x111445f0 */
  push32(0x11144076u); f_111445f0();
  /* 11144076 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11144079 mov esi, esp */
  ESI = (ESP);
  /* 1114407b mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 1114407e push edi */
  push32((uint32_t)(EDI));
  /* 1114407f push ebx */
  push32((uint32_t)(EBX));
  /* 11144080 push esi */
  push32((uint32_t)(ESI));
  /* 11144081 call 0x11143cd0 */
  push32(0x11144086u); f_11143cd0();
  /* 11144086 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11144089 jmp 0x11144096 */
  goto L_11144096;
  /* 1114408b push 1 */
  push32((uint32_t)(0x1u));
  /* 1114408d pop eax */
  EAX = (pop32());
  /* 1114408e ret  */
  ESPCHK(0x11143f92u, _esp0);
  ESP += 4; return;
  /* 1114408f mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11144092 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11144094 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11144096:;
  /* 11144096 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1114409a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1114409c je 0x111440c7 */
  if (C.zf) goto L_111440c7;
  /* 1114409e push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 111440a1 push esi */
  push32((uint32_t)(ESI));
  /* 111440a2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 111440a5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 111440a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 111440aa push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 111440ad call dword ptr [0x11145018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145018))), 0x111440b3u);
  /* 111440b3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111440b5 je 0x111440c7 */
  if (C.zf) goto L_111440c7;
  /* 111440b7 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 111440ba push eax */
  push32((uint32_t)(EAX));
  /* 111440bb push esi */
  push32((uint32_t)(ESI));
  /* 111440bc push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 111440bf call dword ptr [0x11145008] */
  call_ind((uint32_t)(r32((uint32_t)(0x11145008))), 0x111440c5u);
  /* 111440c5 jmp 0x111440c9 */
  goto L_111440c9;
L_111440c7:;
  /* 111440c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111440c9:;
  /* 111440c9 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 111440cc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111440cf mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 111440d6 pop edi */
  EDI = (pop32());
  /* 111440d7 pop esi */
  ESI = (pop32());
  /* 111440d8 pop ebx */
  EBX = (pop32());
  /* 111440d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111440da ret  */
  ESPCHK(0x11143f92u, _esp0);
  ESP += 4; return;
}

/* FUN_100040e0 @ 0x111440e0 (664 bytes, 264 insns) [15 switch table(s)] */
void f_111440e0(void) {
  FTRACE(0x111440e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111440e0 push ebp */
  push32((uint32_t)(EBP));
  /* 111440e1 mov ebp, esp */
  EBP = (ESP);
  /* 111440e3 push edi */
  push32((uint32_t)(EDI));
  /* 111440e4 push esi */
  push32((uint32_t)(ESI));
  /* 111440e5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 111440e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111440eb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 111440ee mov eax, ecx */
  EAX = (ECX);
  /* 111440f0 mov edx, ecx */
  EDX = (ECX);
  /* 111440f2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111440f4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111440f6 jbe 0x11144100 */
  if ((C.cf||C.zf)) goto L_11144100;
  /* 111440f8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111440fa jb 0x11144278 */
  if (C.cf) goto L_11144278;
L_11144100:;
  /* 11144100 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11144106 jne 0x1114411c */
  if (!C.zf) goto L_1114411c;
  /* 11144108 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1114410b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1114410e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11144111 jb 0x1114413c */
  if (C.cf) goto L_1114413c;
  /* 11144113 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11144115 jmp dword ptr [edx*4 + 0x11144228] */
  switch (EDX) {
    case 0: goto L_11144238;
    case 1: goto L_11144240;
    case 2: goto L_1114424c;
    case 3: goto L_11144260;
    default: x86_unimpl("switch@0x11144115 out of table"); return;
  }
L_1114411c:;
  /* 1114411c mov eax, edi */
  EAX = (EDI);
  /* 1114411e mov edx, 3 */
  EDX = (0x3u);
  /* 11144123 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11144126 jb 0x11144134 */
  if (C.cf) goto L_11144134;
  /* 11144128 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1114412b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1114412d jmp dword ptr [eax*4 + 0x11144140] */
  switch (EAX) {
    case 1: goto L_11144150;
    case 2: goto L_1114417c;
    case 3: goto L_111441a0;
    default: x86_unimpl("switch@0x1114412d out of table"); return;
  }
L_11144134:;
  /* 11144134 jmp dword ptr [ecx*4 + 0x11144238] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11144238)))); return;
  /* 1114413b nop  */
  /* nop */
L_1114413c:;
  /* 1114413c jmp dword ptr [ecx*4 + 0x111441bc] */
  switch (ECX) {
    case 0: goto L_1114421f;
    case 1: goto L_1114420c;
    case 2: goto L_11144204;
    case 3: goto L_111441fc;
    case 4: goto L_111441f4;
    case 5: goto L_111441ec;
    case 6: goto L_111441e4;
    case 7: goto L_111441dc;
    default: x86_unimpl("switch@0x1114413c out of table"); return;
  }
  /* 11144143 nop  */
  /* nop */
L_11144150:;
  /* 11144150 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11144152 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11144154 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11144156 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11144159 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1114415c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1114415f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11144162 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11144165 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11144168 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1114416b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1114416e jb 0x1114413c */
  if (C.cf) goto L_1114413c;
  /* 11144170 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11144172 jmp dword ptr [edx*4 + 0x11144228] */
  switch (EDX) {
    case 0: goto L_11144238;
    case 1: goto L_11144240;
    case 2: goto L_1114424c;
    case 3: goto L_11144260;
    default: x86_unimpl("switch@0x11144172 out of table"); return;
  }
  /* 11144179 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1114417c:;
  /* 1114417c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1114417e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11144180 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11144182 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11144185 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11144188 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1114418b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1114418e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11144191 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11144194 jb 0x1114413c */
  if (C.cf) goto L_1114413c;
  /* 11144196 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11144198 jmp dword ptr [edx*4 + 0x11144228] */
  switch (EDX) {
    case 0: goto L_11144238;
    case 1: goto L_11144240;
    case 2: goto L_1114424c;
    case 3: goto L_11144260;
    default: x86_unimpl("switch@0x11144198 out of table"); return;
  }
  /* 1114419f nop  */
  /* nop */
L_111441a0:;
  /* 111441a0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 111441a2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111441a4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111441a6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111441a7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111441aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 111441ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111441ae jb 0x1114413c */
  if (C.cf) goto L_1114413c;
  /* 111441b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111441b2 jmp dword ptr [edx*4 + 0x11144228] */
  switch (EDX) {
    case 0: goto L_11144238;
    case 1: goto L_11144240;
    case 2: goto L_1114424c;
    case 3: goto L_11144260;
    default: x86_unimpl("switch@0x111441b2 out of table"); return;
  }
  /* 111441b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111441dc:;
  /* 111441dc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 111441e0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_111441e4:;
  /* 111441e4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 111441e8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_111441ec:;
  /* 111441ec mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 111441f0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_111441f4:;
  /* 111441f4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 111441f8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_111441fc:;
  /* 111441fc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11144200 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11144204:;
  /* 11144204 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11144208 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1114420c:;
  /* 1114420c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11144210 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11144214 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1114421b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1114421d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1114421f:;
  /* 1114421f jmp dword ptr [edx*4 + 0x11144228] */
  switch (EDX) {
    case 0: goto L_11144238;
    case 1: goto L_11144240;
    case 2: goto L_1114424c;
    case 3: goto L_11144260;
    default: x86_unimpl("switch@0x1114421f out of table"); return;
  }
  /* 11144226 mov edi, edi */
  EDI = (EDI);
L_11144238:;
  /* 11144238 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1114423b pop esi */
  ESI = (pop32());
  /* 1114423c pop edi */
  EDI = (pop32());
  /* 1114423d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1114423e ret  */
  ESPCHK(0x111440e0u, _esp0);
  ESP += 4; return;
  /* 1114423f nop  */
  /* nop */
L_11144240:;
  /* 11144240 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11144242 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11144244 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11144247 pop esi */
  ESI = (pop32());
  /* 11144248 pop edi */
  EDI = (pop32());
  /* 11144249 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1114424a ret  */
  ESPCHK(0x111440e0u, _esp0);
  ESP += 4; return;
  /* 1114424b nop  */
  /* nop */
L_1114424c:;
  /* 1114424c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1114424e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11144250 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11144253 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11144256 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11144259 pop esi */
  ESI = (pop32());
  /* 1114425a pop edi */
  EDI = (pop32());
  /* 1114425b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1114425c ret  */
  ESPCHK(0x111440e0u, _esp0);
  ESP += 4; return;
  /* 1114425d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11144260:;
  /* 11144260 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11144262 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11144264 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11144267 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1114426a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1114426d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11144270 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11144273 pop esi */
  ESI = (pop32());
  /* 11144274 pop edi */
  EDI = (pop32());
  /* 11144275 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11144276 ret  */
  ESPCHK(0x111440e0u, _esp0);
  ESP += 4; return;
  /* 11144277 nop  */
  /* nop */
L_11144278:;
  /* 11144278 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1114427c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11144280 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11144286 jne 0x111442ac */
  if (!C.zf) goto L_111442ac;
  /* 11144288 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1114428b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1114428e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11144291 jb 0x111442a0 */
  if (C.cf) goto L_111442a0;
  /* 11144293 std  */
  C.df=1;
  /* 11144294 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11144296 cld  */
  C.df=0;
  /* 11144297 jmp dword ptr [edx*4 + 0x111443c0] */
  switch (EDX) {
    case 0: goto L_111443d0;
    case 1: goto L_111443d8;
    case 2: goto L_111443e8;
    case 3: goto L_111443fc;
    default: x86_unimpl("switch@0x11144297 out of table"); return;
  }
  /* 1114429e mov edi, edi */
  EDI = (EDI);
L_111442a0:;
  /* 111442a0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 111442a2 jmp dword ptr [ecx*4 + 0x11144370] */
  switch (ECX) {
    case 0: goto L_111443b7;
    default: x86_unimpl("switch@0x111442a2 out of table"); return;
  }
  /* 111442a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111442ac:;
  /* 111442ac mov eax, edi */
  EAX = (EDI);
  /* 111442ae mov edx, 3 */
  EDX = (0x3u);
  /* 111442b3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111442b6 jb 0x111442c4 */
  if (C.cf) goto L_111442c4;
  /* 111442b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 111442bb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111442bd jmp dword ptr [eax*4 + 0x111442c8] */
  switch (EAX) {
    case 1: goto L_111442d8;
    case 2: goto L_111442f8;
    case 3: goto L_11144320;
    default: x86_unimpl("switch@0x111442bd out of table"); return;
  }
L_111442c4:;
  /* 111442c4 jmp dword ptr [ecx*4 + 0x111443c0] */
  switch (ECX) {
    case 0: goto L_111443d0;
    case 1: goto L_111443d8;
    case 2: goto L_111443e8;
    case 3: goto L_111443fc;
    default: x86_unimpl("switch@0x111442c4 out of table"); return;
  }
  /* 111442cb nop  */
  /* nop */
L_111442d8:;
  /* 111442d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 111442db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 111442dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 111442e0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 111442e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111442e4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 111442e5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111442e8 jb 0x111442a0 */
  if (C.cf) goto L_111442a0;
  /* 111442ea std  */
  C.df=1;
  /* 111442eb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111442ed cld  */
  C.df=0;
  /* 111442ee jmp dword ptr [edx*4 + 0x111443c0] */
  switch (EDX) {
    case 0: goto L_111443d0;
    case 1: goto L_111443d8;
    case 2: goto L_111443e8;
    case 3: goto L_111443fc;
    default: x86_unimpl("switch@0x111442ee out of table"); return;
  }
  /* 111442f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111442f8:;
  /* 111442f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 111442fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 111442fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11144300 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11144303 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11144306 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11144309 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1114430c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1114430f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11144312 jb 0x111442a0 */
  if (C.cf) goto L_111442a0;
  /* 11144314 std  */
  C.df=1;
  /* 11144315 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11144317 cld  */
  C.df=0;
  /* 11144318 jmp dword ptr [edx*4 + 0x111443c0] */
  switch (EDX) {
    case 0: goto L_111443d0;
    case 1: goto L_111443d8;
    case 2: goto L_111443e8;
    case 3: goto L_111443fc;
    default: x86_unimpl("switch@0x11144318 out of table"); return;
  }
  /* 1114431f nop  */
  /* nop */
L_11144320:;
  /* 11144320 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11144323 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11144325 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11144328 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1114432b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1114432e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11144331 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11144334 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11144337 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1114433a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1114433d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11144340 jb 0x111442a0 */
  if (C.cf) goto L_111442a0;
  /* 11144346 std  */
  C.df=1;
  /* 11144347 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11144349 cld  */
  C.df=0;
  /* 1114434a jmp dword ptr [edx*4 + 0x111443c0] */
  switch (EDX) {
    case 0: goto L_111443d0;
    case 1: goto L_111443d8;
    case 2: goto L_111443e8;
    case 3: goto L_111443fc;
    default: x86_unimpl("switch@0x1114434a out of table"); return;
  }
  /* 11144351 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11144354 je 0x11144399 */
  if (C.zf) goto L_11144399;
  /* 11144356 adc al, 0x11 */
  { uint32_t _a=(AL),_b=(0x11u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11144358 jl 0x1114439d */
  if ((C.sf!=C.of)) goto L_1114439d;
  /* 1114435a adc al, 0x11 */
  { uint32_t _a=(AL),_b=(0x11u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1114435c test byte ptr [ebx + 0x14], al */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x14)))&(AL); fl_logic(_r,8); }
  /* 1114435f adc dword ptr [ebx + eax*2 + 0x43941114], ecx */
  { uint32_t _a=(r32((uint32_t)(EBX + EAX*2 + 0x43941114))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(EBX + EAX*2 + 0x43941114), (_r)); fl_add(_a,_b,_r,32); }
  /* 11144366 adc al, 0x11 */
  { uint32_t _a=(AL),_b=(0x11u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11144368 pushfd  */
  x86_unimpl("pushfd @ 0x11144368");
  /* 11144369 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1114436a adc al, 0x11 */
  { uint32_t _a=(AL),_b=(0x11u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1114436c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 1114436d inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1114436e adc al, 0x11 */
  { uint32_t _a=(AL),_b=(0x11u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11144374 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11144378 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1114437c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11144380 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11144384 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11144388 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1114438c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11144390 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11144394 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11144398 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1114439c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 111443a0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 111443a4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 111443a8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 111443ac lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 111443b3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111443b5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_111443b7:;
  /* 111443b7 jmp dword ptr [edx*4 + 0x111443c0] */
  switch (EDX) {
    case 0: goto L_111443d0;
    case 1: goto L_111443d8;
    case 2: goto L_111443e8;
    case 3: goto L_111443fc;
    default: x86_unimpl("switch@0x111443b7 out of table"); return;
  }
  /* 111443be mov edi, edi */
  EDI = (EDI);
L_111443d0:;
  /* 111443d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111443d3 pop esi */
  ESI = (pop32());
  /* 111443d4 pop edi */
  EDI = (pop32());
  /* 111443d5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111443d6 ret  */
  ESPCHK(0x111440e0u, _esp0);
  ESP += 4; return;
  /* 111443d7 nop  */
  /* nop */
L_111443d8:;
  /* 111443d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 111443db mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 111443de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111443e1 pop esi */
  ESI = (pop32());
  /* 111443e2 pop edi */
  EDI = (pop32());
  /* 111443e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111443e4 ret  */
  ESPCHK(0x111440e0u, _esp0);
  ESP += 4; return;
  /* 111443e5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111443e8:;
  /* 111443e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 111443eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 111443ee mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 111443f1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 111443f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111443f7 pop esi */
  ESI = (pop32());
  /* 111443f8 pop edi */
  EDI = (pop32());
  /* 111443f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111443fa ret  */
  ESPCHK(0x111440e0u, _esp0);
  ESP += 4; return;
  /* 111443fb nop  */
  /* nop */
L_111443fc:;
  /* 111443fc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 111443ff mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11144402 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11144405 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11144408 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1114440b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1114440e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11144411 pop esi */
  ESI = (pop32());
  /* 11144412 pop edi */
  EDI = (pop32());
  /* 11144413 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11144414 ret  */
  ESPCHK(0x111440e0u, _esp0);
  ESP += 4; return;
L_11144399: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11144399 (unresolved jump table)"); return;
L_1114439d: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1114439d (unresolved jump table)"); return;
}

/* __global_unwind2 @ 0x11144418 (32 bytes, 18 insns) */
void f_11144418(void) {
  FTRACE(0x11144418u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11144418 push ebp */
  push32((uint32_t)(EBP));
  /* 11144419 mov ebp, esp */
  EBP = (ESP);
  /* 1114441b push ebx */
  push32((uint32_t)(EBX));
  /* 1114441c push esi */
  push32((uint32_t)(ESI));
  /* 1114441d push edi */
  push32((uint32_t)(EDI));
  /* 1114441e push ebp */
  push32((uint32_t)(EBP));
  /* 1114441f push 0 */
  push32((uint32_t)(0x0u));
  /* 11144421 push 0 */
  push32((uint32_t)(0x0u));
  /* 11144423 push 0x11144430 */
  push32((uint32_t)(0x11144430u));
  /* 11144428 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1114442b call 0x11144620 */
  push32(0x11144430u); f_11144620();
  /* 11144430 pop ebp */
  EBP = (pop32());
  /* 11144431 pop edi */
  EDI = (pop32());
  /* 11144432 pop esi */
  ESI = (pop32());
  /* 11144433 pop ebx */
  EBX = (pop32());
  /* 11144434 mov esp, ebp */
  ESP = (EBP);
  /* 11144436 pop ebp */
  EBP = (pop32());
  /* 11144437 ret  */
  ESPCHK(0x11144418u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1114445a (104 bytes, 33 insns) */
void f_1114445a(void) {
  FTRACE(0x1114445au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1114445a push ebx */
  push32((uint32_t)(EBX));
  /* 1114445b push esi */
  push32((uint32_t)(ESI));
  /* 1114445c push edi */
  push32((uint32_t)(EDI));
  /* 1114445d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11144461 push eax */
  push32((uint32_t)(EAX));
  /* 11144462 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11144464 push 0x11144438 */
  push32((uint32_t)(0x11144438u));
  /* 11144469 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11144470 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11144477:;
  /* 11144477 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1114447b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1114447e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11144481 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11144484 je 0x111444b4 */
  if (C.zf) goto L_111444b4;
  /* 11144486 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1114448a je 0x111444b4 */
  if (C.zf) goto L_111444b4;
  /* 1114448c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1114448f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11144492 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11144496 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11144499 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1114449e jne 0x111444b2 */
  if (!C.zf) goto L_111444b2;
  /* 111444a0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 111444a5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 111444a9 call 0x111444ee */
  push32(0x111444aeu); f_111444ee();
  /* 111444ae call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x111444b2u);
L_111444b2:;
  /* 111444b2 jmp 0x11144477 */
  goto L_11144477;
L_111444b4:;
  /* 111444b4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 111444bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111444be pop edi */
  EDI = (pop32());
  /* 111444bf pop esi */
  ESI = (pop32());
  /* 111444c0 pop ebx */
  EBX = (pop32());
  /* 111444c1 ret  */
  ESPCHK(0x1114445au, _esp0);
  ESP += 4; return;
}

/* FUN_100044ee @ 0x111444ee (24 bytes, 10 insns) */
void f_111444ee(void) {
  FTRACE(0x111444eeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111444ee push ebx */
  push32((uint32_t)(EBX));
  /* 111444ef push ecx */
  push32((uint32_t)(ECX));
  /* 111444f0 mov ebx, 0x11146510 */
  EBX = (0x11146510u);
  /* 111444f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111444f8 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 111444fb mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 111444fe mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11144501 pop ecx */
  ECX = (pop32());
  /* 11144502 pop ebx */
  EBX = (pop32());
  /* 11144503 ret 4 */
  ESPCHK(0x111444eeu, _esp0);
  ESP += 8; return;
}

/* FUN_100045cd @ 0x111445cd (27 bytes, 11 insns) */
void f_111445cd(void) {
  FTRACE(0x111445cdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111445cd push ebp */
  push32((uint32_t)(EBP));
  /* 111445ce mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 111445d2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 111445d4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 111445d7 push eax */
  push32((uint32_t)(EAX));
  /* 111445d8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 111445db push eax */
  push32((uint32_t)(EAX));
  /* 111445dc call 0x1114445a */
  push32(0x111445e1u); f_1114445a();
  /* 111445e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111445e4 pop ebp */
  EBP = (pop32());
  /* 111445e5 ret 4 */
  ESPCHK(0x111445cdu, _esp0);
  ESP += 8; return;
}

/* FUN_100045f0 @ 0x111445f0 (47 bytes, 17 insns) */
void f_111445f0(void) {
  FTRACE(0x111445f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111445f0 push ecx */
  push32((uint32_t)(ECX));
  /* 111445f1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111445f6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 111445fa jb 0x11144610 */
  if (C.cf) goto L_11144610;
L_111445fc:;
  /* 111445fc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11144602 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11144607 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11144609 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1114460e jae 0x111445fc */
  if (!C.cf) goto L_111445fc;
L_11144610:;
  /* 11144610 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11144612 mov eax, esp */
  EAX = (ESP);
  /* 11144614 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11144616 mov esp, ecx */
  ESP = (ECX);
  /* 11144618 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1114461a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1114461d push eax */
  push32((uint32_t)(EAX));
  /* 1114461e ret  */
  ESPCHK(0x111445f0u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11144620 (6 bytes, 1 insns) */
void f_11144620(void) {
  FTRACE(0x11144620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11144620 jmp dword ptr [0x11145004] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11145004)))); return;
}

