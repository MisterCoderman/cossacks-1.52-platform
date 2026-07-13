#include "recomp.h"

/* OnInit @ 0x11f41000 (849 bytes, 216 insns) */
void f_11f41000(void) {
  FTRACE(0x11f41000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f41000 push esi */
  push32((uint32_t)(ESI));
  /* 11f41001 mov esi, dword ptr [0x11f45114] */
  ESI = (r32((uint32_t)(0x11f45114)));
  /* 11f41007 push 0x11f4631c */
  push32((uint32_t)(0x11f4631cu));
  /* 11f4100c push 0x11f466c8 */
  push32((uint32_t)(0x11f466c8u));
  /* 11f41011 call esi */
  call_ind((uint32_t)(ESI), 0x11f41013u);
  /* 11f41013 push 0x11f46314 */
  push32((uint32_t)(0x11f46314u));
  /* 11f41018 push 0x11f46830 */
  push32((uint32_t)(0x11f46830u));
  /* 11f4101d call esi */
  call_ind((uint32_t)(ESI), 0x11f4101fu);
  /* 11f4101f push 0x11f4630c */
  push32((uint32_t)(0x11f4630cu));
  /* 11f41024 push 0x11f46828 */
  push32((uint32_t)(0x11f46828u));
  /* 11f41029 call esi */
  call_ind((uint32_t)(ESI), 0x11f4102bu);
  /* 11f4102b push 0x11f46300 */
  push32((uint32_t)(0x11f46300u));
  /* 11f41030 push 0x11f46700 */
  push32((uint32_t)(0x11f46700u));
  /* 11f41035 call esi */
  call_ind((uint32_t)(ESI), 0x11f41037u);
  /* 11f41037 push 0x11f462f4 */
  push32((uint32_t)(0x11f462f4u));
  /* 11f4103c push 0x11f46708 */
  push32((uint32_t)(0x11f46708u));
  /* 11f41041 call esi */
  call_ind((uint32_t)(ESI), 0x11f41043u);
  /* 11f41043 push 0x11f462e8 */
  push32((uint32_t)(0x11f462e8u));
  /* 11f41048 push 0x11f466f0 */
  push32((uint32_t)(0x11f466f0u));
  /* 11f4104d call esi */
  call_ind((uint32_t)(ESI), 0x11f4104fu);
  /* 11f4104f push 0x11f462dc */
  push32((uint32_t)(0x11f462dcu));
  /* 11f41054 push 0x11f466f8 */
  push32((uint32_t)(0x11f466f8u));
  /* 11f41059 call esi */
  call_ind((uint32_t)(ESI), 0x11f4105bu);
  /* 11f4105b push 0x11f462d0 */
  push32((uint32_t)(0x11f462d0u));
  /* 11f41060 push 0x11f466a0 */
  push32((uint32_t)(0x11f466a0u));
  /* 11f41065 call esi */
  call_ind((uint32_t)(ESI), 0x11f41067u);
  /* 11f41067 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f4106a push 0x11f462c4 */
  push32((uint32_t)(0x11f462c4u));
  /* 11f4106f push 0x11f466a8 */
  push32((uint32_t)(0x11f466a8u));
  /* 11f41074 call esi */
  call_ind((uint32_t)(ESI), 0x11f41076u);
  /* 11f41076 push 0x11f462b8 */
  push32((uint32_t)(0x11f462b8u));
  /* 11f4107b push 0x11f46698 */
  push32((uint32_t)(0x11f46698u));
  /* 11f41080 call esi */
  call_ind((uint32_t)(ESI), 0x11f41082u);
  /* 11f41082 push 0x11f462b0 */
  push32((uint32_t)(0x11f462b0u));
  /* 11f41087 push 0x11f46820 */
  push32((uint32_t)(0x11f46820u));
  /* 11f4108c call esi */
  call_ind((uint32_t)(ESI), 0x11f4108eu);
  /* 11f4108e mov esi, dword ptr [0x11f45118] */
  ESI = (r32((uint32_t)(0x11f45118)));
  /* 11f41094 push 0x11f462a4 */
  push32((uint32_t)(0x11f462a4u));
  /* 11f41099 push 0x11f46710 */
  push32((uint32_t)(0x11f46710u));
  /* 11f4109e call esi */
  call_ind((uint32_t)(ESI), 0x11f410a0u);
  /* 11f410a0 push 0x11f4629c */
  push32((uint32_t)(0x11f4629cu));
  /* 11f410a5 push 0x11f46840 */
  push32((uint32_t)(0x11f46840u));
  /* 11f410aa call esi */
  call_ind((uint32_t)(ESI), 0x11f410acu);
  /* 11f410ac push 0x11f46294 */
  push32((uint32_t)(0x11f46294u));
  /* 11f410b1 push 0x11f46848 */
  push32((uint32_t)(0x11f46848u));
  /* 11f410b6 call esi */
  call_ind((uint32_t)(ESI), 0x11f410b8u);
  /* 11f410b8 push 0x11f4628c */
  push32((uint32_t)(0x11f4628cu));
  /* 11f410bd push 0x11f466d0 */
  push32((uint32_t)(0x11f466d0u));
  /* 11f410c2 call esi */
  call_ind((uint32_t)(ESI), 0x11f410c4u);
  /* 11f410c4 push 0x11f46284 */
  push32((uint32_t)(0x11f46284u));
  /* 11f410c9 push 0x11f466d8 */
  push32((uint32_t)(0x11f466d8u));
  /* 11f410ce call esi */
  call_ind((uint32_t)(ESI), 0x11f410d0u);
  /* 11f410d0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f410d3 push 0x11f4627c */
  push32((uint32_t)(0x11f4627cu));
  /* 11f410d8 push 0x11f466e0 */
  push32((uint32_t)(0x11f466e0u));
  /* 11f410dd call esi */
  call_ind((uint32_t)(ESI), 0x11f410dfu);
  /* 11f410df push 0x11f46274 */
  push32((uint32_t)(0x11f46274u));
  /* 11f410e4 push 0x11f466e8 */
  push32((uint32_t)(0x11f466e8u));
  /* 11f410e9 call esi */
  call_ind((uint32_t)(ESI), 0x11f410ebu);
  /* 11f410eb push 0x11f46268 */
  push32((uint32_t)(0x11f46268u));
  /* 11f410f0 push 0x11f466c0 */
  push32((uint32_t)(0x11f466c0u));
  /* 11f410f5 call esi */
  call_ind((uint32_t)(ESI), 0x11f410f7u);
  /* 11f410f7 push 0x11f4625c */
  push32((uint32_t)(0x11f4625cu));
  /* 11f410fc push 0x11f466b8 */
  push32((uint32_t)(0x11f466b8u));
  /* 11f41101 call esi */
  call_ind((uint32_t)(ESI), 0x11f41103u);
  /* 11f41103 push 0x11f46250 */
  push32((uint32_t)(0x11f46250u));
  /* 11f41108 push 0x11f466b0 */
  push32((uint32_t)(0x11f466b0u));
  /* 11f4110d call esi */
  call_ind((uint32_t)(ESI), 0x11f4110fu);
  /* 11f4110f push 0x11f46248 */
  push32((uint32_t)(0x11f46248u));
  /* 11f41114 push 0x11f46838 */
  push32((uint32_t)(0x11f46838u));
  /* 11f41119 call esi */
  call_ind((uint32_t)(ESI), 0x11f4111bu);
  /* 11f4111b push 0x11f46240 */
  push32((uint32_t)(0x11f46240u));
  /* 11f41120 push 0x11f46718 */
  push32((uint32_t)(0x11f46718u));
  /* 11f41125 call esi */
  call_ind((uint32_t)(ESI), 0x11f41127u);
  /* 11f41127 mov esi, dword ptr [0x11f45110] */
  ESI = (r32((uint32_t)(0x11f45110)));
  /* 11f4112d push 0x11f46234 */
  push32((uint32_t)(0x11f46234u));
  /* 11f41132 push 0x11f46730 */
  push32((uint32_t)(0x11f46730u));
  /* 11f41137 call esi */
  call_ind((uint32_t)(ESI), 0x11f41139u);
  /* 11f41139 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f4113c push 0x11f46228 */
  push32((uint32_t)(0x11f46228u));
  /* 11f41141 push 0x11f46738 */
  push32((uint32_t)(0x11f46738u));
  /* 11f41146 call esi */
  call_ind((uint32_t)(ESI), 0x11f41148u);
  /* 11f41148 push 0x11f4621c */
  push32((uint32_t)(0x11f4621cu));
  /* 11f4114d push 0x11f46740 */
  push32((uint32_t)(0x11f46740u));
  /* 11f41152 call esi */
  call_ind((uint32_t)(ESI), 0x11f41154u);
  /* 11f41154 push 0x11f4620c */
  push32((uint32_t)(0x11f4620cu));
  /* 11f41159 push 0x11f46748 */
  push32((uint32_t)(0x11f46748u));
  /* 11f4115e call esi */
  call_ind((uint32_t)(ESI), 0x11f41160u);
  /* 11f41160 push 0x11f461f8 */
  push32((uint32_t)(0x11f461f8u));
  /* 11f41165 push 0x11f46750 */
  push32((uint32_t)(0x11f46750u));
  /* 11f4116a call esi */
  call_ind((uint32_t)(ESI), 0x11f4116cu);
  /* 11f4116c push 0x11f461ec */
  push32((uint32_t)(0x11f461ecu));
  /* 11f41171 push 0x11f46758 */
  push32((uint32_t)(0x11f46758u));
  /* 11f41176 call esi */
  call_ind((uint32_t)(ESI), 0x11f41178u);
  /* 11f41178 push 0x11f461dc */
  push32((uint32_t)(0x11f461dcu));
  /* 11f4117d push 0x11f46760 */
  push32((uint32_t)(0x11f46760u));
  /* 11f41182 call esi */
  call_ind((uint32_t)(ESI), 0x11f41184u);
  /* 11f41184 push 0x11f461d0 */
  push32((uint32_t)(0x11f461d0u));
  /* 11f41189 push 0x11f46768 */
  push32((uint32_t)(0x11f46768u));
  /* 11f4118e call esi */
  call_ind((uint32_t)(ESI), 0x11f41190u);
  /* 11f41190 push 0x11f461b8 */
  push32((uint32_t)(0x11f461b8u));
  /* 11f41195 push 0x11f46770 */
  push32((uint32_t)(0x11f46770u));
  /* 11f4119a call esi */
  call_ind((uint32_t)(ESI), 0x11f4119cu);
  /* 11f4119c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f4119f push 0x11f461ac */
  push32((uint32_t)(0x11f461acu));
  /* 11f411a4 push 0x11f46778 */
  push32((uint32_t)(0x11f46778u));
  /* 11f411a9 call esi */
  call_ind((uint32_t)(ESI), 0x11f411abu);
  /* 11f411ab push 0x11f4619c */
  push32((uint32_t)(0x11f4619cu));
  /* 11f411b0 push 0x11f46780 */
  push32((uint32_t)(0x11f46780u));
  /* 11f411b5 call esi */
  call_ind((uint32_t)(ESI), 0x11f411b7u);
  /* 11f411b7 push 0x11f46190 */
  push32((uint32_t)(0x11f46190u));
  /* 11f411bc push 0x11f46788 */
  push32((uint32_t)(0x11f46788u));
  /* 11f411c1 call esi */
  call_ind((uint32_t)(ESI), 0x11f411c3u);
  /* 11f411c3 push 0x11f4617c */
  push32((uint32_t)(0x11f4617cu));
  /* 11f411c8 push 0x11f46798 */
  push32((uint32_t)(0x11f46798u));
  /* 11f411cd call esi */
  call_ind((uint32_t)(ESI), 0x11f411cfu);
  /* 11f411cf push 0x11f46170 */
  push32((uint32_t)(0x11f46170u));
  /* 11f411d4 push 0x11f467a8 */
  push32((uint32_t)(0x11f467a8u));
  /* 11f411d9 call esi */
  call_ind((uint32_t)(ESI), 0x11f411dbu);
  /* 11f411db push 0x11f46164 */
  push32((uint32_t)(0x11f46164u));
  /* 11f411e0 push 0x11f46790 */
  push32((uint32_t)(0x11f46790u));
  /* 11f411e5 call esi */
  call_ind((uint32_t)(ESI), 0x11f411e7u);
  /* 11f411e7 push 0x11f46154 */
  push32((uint32_t)(0x11f46154u));
  /* 11f411ec push 0x11f467a0 */
  push32((uint32_t)(0x11f467a0u));
  /* 11f411f1 call esi */
  call_ind((uint32_t)(ESI), 0x11f411f3u);
  /* 11f411f3 push 0x11f46148 */
  push32((uint32_t)(0x11f46148u));
  /* 11f411f8 push 0x11f467b0 */
  push32((uint32_t)(0x11f467b0u));
  /* 11f411fd call esi */
  call_ind((uint32_t)(ESI), 0x11f411ffu);
  /* 11f411ff add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41202 push 0x11f4613c */
  push32((uint32_t)(0x11f4613cu));
  /* 11f41207 push 0x11f467c0 */
  push32((uint32_t)(0x11f467c0u));
  /* 11f4120c call esi */
  call_ind((uint32_t)(ESI), 0x11f4120eu);
  /* 11f4120e push 0x11f46130 */
  push32((uint32_t)(0x11f46130u));
  /* 11f41213 push 0x11f467d0 */
  push32((uint32_t)(0x11f467d0u));
  /* 11f41218 call esi */
  call_ind((uint32_t)(ESI), 0x11f4121au);
  /* 11f4121a push 0x11f46120 */
  push32((uint32_t)(0x11f46120u));
  /* 11f4121f push 0x11f467e0 */
  push32((uint32_t)(0x11f467e0u));
  /* 11f41224 call esi */
  call_ind((uint32_t)(ESI), 0x11f41226u);
  /* 11f41226 push 0x11f4610c */
  push32((uint32_t)(0x11f4610cu));
  /* 11f4122b push 0x11f467f0 */
  push32((uint32_t)(0x11f467f0u));
  /* 11f41230 call esi */
  call_ind((uint32_t)(ESI), 0x11f41232u);
  /* 11f41232 push 0x11f46100 */
  push32((uint32_t)(0x11f46100u));
  /* 11f41237 push 0x11f46800 */
  push32((uint32_t)(0x11f46800u));
  /* 11f4123c call esi */
  call_ind((uint32_t)(ESI), 0x11f4123eu);
  /* 11f4123e push 0x11f460f0 */
  push32((uint32_t)(0x11f460f0u));
  /* 11f41243 push 0x11f46810 */
  push32((uint32_t)(0x11f46810u));
  /* 11f41248 call esi */
  call_ind((uint32_t)(ESI), 0x11f4124au);
  /* 11f4124a push 0x11f460e4 */
  push32((uint32_t)(0x11f460e4u));
  /* 11f4124f push 0x11f467b8 */
  push32((uint32_t)(0x11f467b8u));
  /* 11f41254 call esi */
  call_ind((uint32_t)(ESI), 0x11f41256u);
  /* 11f41256 push 0x11f460cc */
  push32((uint32_t)(0x11f460ccu));
  /* 11f4125b push 0x11f467c8 */
  push32((uint32_t)(0x11f467c8u));
  /* 11f41260 call esi */
  call_ind((uint32_t)(ESI), 0x11f41262u);
  /* 11f41262 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41265 push 0x11f460b8 */
  push32((uint32_t)(0x11f460b8u));
  /* 11f4126a push 0x11f467d8 */
  push32((uint32_t)(0x11f467d8u));
  /* 11f4126f call esi */
  call_ind((uint32_t)(ESI), 0x11f41271u);
  /* 11f41271 push 0x11f460a8 */
  push32((uint32_t)(0x11f460a8u));
  /* 11f41276 push 0x11f467e8 */
  push32((uint32_t)(0x11f467e8u));
  /* 11f4127b call esi */
  call_ind((uint32_t)(ESI), 0x11f4127du);
  /* 11f4127d push 0x11f4609c */
  push32((uint32_t)(0x11f4609cu));
  /* 11f41282 push 0x11f467f8 */
  push32((uint32_t)(0x11f467f8u));
  /* 11f41287 call esi */
  call_ind((uint32_t)(ESI), 0x11f41289u);
  /* 11f41289 push 0x11f46088 */
  push32((uint32_t)(0x11f46088u));
  /* 11f4128e push 0x11f46808 */
  push32((uint32_t)(0x11f46808u));
  /* 11f41293 call esi */
  call_ind((uint32_t)(ESI), 0x11f41295u);
  /* 11f41295 push 0x11f4607c */
  push32((uint32_t)(0x11f4607cu));
  /* 11f4129a push 0x11f46818 */
  push32((uint32_t)(0x11f46818u));
  /* 11f4129f call esi */
  call_ind((uint32_t)(ESI), 0x11f412a1u);
  /* 11f412a1 mov esi, dword ptr [0x11f45120] */
  ESI = (r32((uint32_t)(0x11f45120)));
  /* 11f412a7 push 0x11f46074 */
  push32((uint32_t)(0x11f46074u));
  /* 11f412ac push 0x11f46858 */
  push32((uint32_t)(0x11f46858u));
  /* 11f412b1 call esi */
  call_ind((uint32_t)(ESI), 0x11f412b3u);
  /* 11f412b3 push 0x11f4606c */
  push32((uint32_t)(0x11f4606cu));
  /* 11f412b8 push 0x11f46690 */
  push32((uint32_t)(0x11f46690u));
  /* 11f412bd call esi */
  call_ind((uint32_t)(ESI), 0x11f412bfu);
  /* 11f412bf push 0x11f46064 */
  push32((uint32_t)(0x11f46064u));
  /* 11f412c4 push 0x11f46850 */
  push32((uint32_t)(0x11f46850u));
  /* 11f412c9 call esi */
  call_ind((uint32_t)(ESI), 0x11f412cbu);
  /* 11f412cb mov esi, dword ptr [0x11f45124] */
  ESI = (r32((uint32_t)(0x11f45124)));
  /* 11f412d1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f412d4 push 0x11f4605c */
  push32((uint32_t)(0x11f4605cu));
  /* 11f412d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f412db call esi */
  call_ind((uint32_t)(ESI), 0x11f412ddu);
  /* 11f412dd push 0x11f46054 */
  push32((uint32_t)(0x11f46054u));
  /* 11f412e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f412e4 call esi */
  call_ind((uint32_t)(ESI), 0x11f412e6u);
  /* 11f412e6 push 0x11f46048 */
  push32((uint32_t)(0x11f46048u));
  /* 11f412eb push 5 */
  push32((uint32_t)(0x5u));
  /* 11f412ed call esi */
  call_ind((uint32_t)(ESI), 0x11f412efu);
  /* 11f412ef mov esi, dword ptr [0x11f4511c] */
  ESI = (r32((uint32_t)(0x11f4511c)));
  /* 11f412f5 push 0x11f46040 */
  push32((uint32_t)(0x11f46040u));
  /* 11f412fa push 0x11f462d0 */
  push32((uint32_t)(0x11f462d0u));
  /* 11f412ff call esi */
  call_ind((uint32_t)(ESI), 0x11f41301u);
  /* 11f41301 push 0x11f46040 */
  push32((uint32_t)(0x11f46040u));
  /* 11f41306 push 0x11f462d0 */
  push32((uint32_t)(0x11f462d0u));
  /* 11f4130b call esi */
  call_ind((uint32_t)(ESI), 0x11f4130du);
  /* 11f4130d push 0x11f46040 */
  push32((uint32_t)(0x11f46040u));
  /* 11f41312 push 0x11f462d0 */
  push32((uint32_t)(0x11f462d0u));
  /* 11f41317 call esi */
  call_ind((uint32_t)(ESI), 0x11f41319u);
  /* 11f41319 push 0x11f46038 */
  push32((uint32_t)(0x11f46038u));
  /* 11f4131e push 0x11f462d0 */
  push32((uint32_t)(0x11f462d0u));
  /* 11f41323 call esi */
  call_ind((uint32_t)(ESI), 0x11f41325u);
  /* 11f41325 push 0x11f46030 */
  push32((uint32_t)(0x11f46030u));
  /* 11f4132a push 0x11f462d0 */
  push32((uint32_t)(0x11f462d0u));
  /* 11f4132f call esi */
  call_ind((uint32_t)(ESI), 0x11f41331u);
  /* 11f41331 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41334 push 0x11f46038 */
  push32((uint32_t)(0x11f46038u));
  /* 11f41339 push 0x11f462d0 */
  push32((uint32_t)(0x11f462d0u));
  /* 11f4133e call esi */
  call_ind((uint32_t)(ESI), 0x11f41340u);
  /* 11f41340 push 0x11f46064 */
  push32((uint32_t)(0x11f46064u));
  /* 11f41345 push 0x11f4631c */
  push32((uint32_t)(0x11f4631cu));
  /* 11f4134a call esi */
  call_ind((uint32_t)(ESI), 0x11f4134cu);
  /* 11f4134c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f4134f pop esi */
  ESI = (pop32());
  /* 11f41350 ret  */
  ESPCHK(0x11f41000u, _esp0);
  ESP += 4; return;
}

/* FUN_10001360 @ 0x11f41360 (20 bytes, 6 insns) */
void f_11f41360(void) {
  FTRACE(0x11f41360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f41360 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f41364 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f41365 jne 0x11f4136c */
  if (!C.zf) goto L_11f4136c;
  /* 11f41367 call 0x11f41000 */
  push32(0x11f4136cu); f_11f41000();
L_11f4136c:;
  /* 11f4136c mov eax, 1 */
  EAX = (0x1u);
  /* 11f41371 ret 0xc */
  ESPCHK(0x11f41360u, _esp0);
  ESP += 16; return;
}

/* ProcessScenary @ 0x11f41380 (1596 bytes, 556 insns) */
void f_11f41380(void) {
  FTRACE(0x11f41380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f41380 push ebx */
  push32((uint32_t)(EBX));
  /* 11f41381 push ebp */
  push32((uint32_t)(EBP));
  /* 11f41382 mov ebp, dword ptr [0x11f450bc] */
  EBP = (r32((uint32_t)(0x11f450bc)));
  /* 11f41388 push esi */
  push32((uint32_t)(ESI));
  /* 11f41389 push edi */
  push32((uint32_t)(EDI));
  /* 11f4138a push 1 */
  push32((uint32_t)(0x1u));
  /* 11f4138c call ebp */
  call_ind((uint32_t)(EBP), 0x11f4138eu);
  /* 11f4138e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41391 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f41393 je 0x11f416bf */
  if (C.zf) goto L_11f416bf;
  /* 11f41399 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f4139b push 1 */
  push32((uint32_t)(0x1u));
  /* 11f4139d call dword ptr [0x11f450cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f450cc))), 0x11f413a3u);
  /* 11f413a3 mov esi, dword ptr [0x11f450d0] */
  ESI = (r32((uint32_t)(0x11f450d0)));
  /* 11f413a9 push 0x11f4635c */
  push32((uint32_t)(0x11f4635cu));
  /* 11f413ae call esi */
  call_ind((uint32_t)(ESI), 0x11f413b0u);
  /* 11f413b0 push 0x11f46354 */
  push32((uint32_t)(0x11f46354u));
  /* 11f413b5 call esi */
  call_ind((uint32_t)(ESI), 0x11f413b7u);
  /* 11f413b7 mov esi, dword ptr [0x11f450c8] */
  ESI = (r32((uint32_t)(0x11f450c8)));
  /* 11f413bd push 0x249f0 */
  push32((uint32_t)(0x249f0u));
  /* 11f413c2 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f413c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f413c6 call esi */
  call_ind((uint32_t)(ESI), 0x11f413c8u);
  /* 11f413c8 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11f413cd push 1 */
  push32((uint32_t)(0x1u));
  /* 11f413cf push 2 */
  push32((uint32_t)(0x2u));
  /* 11f413d1 call esi */
  call_ind((uint32_t)(ESI), 0x11f413d3u);
  /* 11f413d3 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11f413d8 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f413da push 2 */
  push32((uint32_t)(0x2u));
  /* 11f413dc call esi */
  call_ind((uint32_t)(ESI), 0x11f413deu);
  /* 11f413de push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11f413e3 push 5 */
  push32((uint32_t)(0x5u));
  /* 11f413e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f413e7 call esi */
  call_ind((uint32_t)(ESI), 0x11f413e9u);
  /* 11f413e9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f413ec push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11f413f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f413f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f413f5 call esi */
  call_ind((uint32_t)(ESI), 0x11f413f7u);
  /* 11f413f7 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11f413fc push 2 */
  push32((uint32_t)(0x2u));
  /* 11f413fe push 2 */
  push32((uint32_t)(0x2u));
  /* 11f41400 call esi */
  call_ind((uint32_t)(ESI), 0x11f41402u);
  /* 11f41402 push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 11f41407 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f41409 push 5 */
  push32((uint32_t)(0x5u));
  /* 11f4140b call esi */
  call_ind((uint32_t)(ESI), 0x11f4140du);
  /* 11f4140d push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 11f41412 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f41414 push 5 */
  push32((uint32_t)(0x5u));
  /* 11f41416 call esi */
  call_ind((uint32_t)(ESI), 0x11f41418u);
  /* 11f41418 push 0x3d090 */
  push32((uint32_t)(0x3d090u));
  /* 11f4141d push 4 */
  push32((uint32_t)(0x4u));
  /* 11f4141f push 5 */
  push32((uint32_t)(0x5u));
  /* 11f41421 call esi */
  call_ind((uint32_t)(ESI), 0x11f41423u);
  /* 11f41423 push 0x3d090 */
  push32((uint32_t)(0x3d090u));
  /* 11f41428 push 5 */
  push32((uint32_t)(0x5u));
  /* 11f4142a push 5 */
  push32((uint32_t)(0x5u));
  /* 11f4142c call esi */
  call_ind((uint32_t)(ESI), 0x11f4142eu);
  /* 11f4142e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41431 push 0x3d090 */
  push32((uint32_t)(0x3d090u));
  /* 11f41436 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41438 push 5 */
  push32((uint32_t)(0x5u));
  /* 11f4143a call esi */
  call_ind((uint32_t)(ESI), 0x11f4143cu);
  /* 11f4143c push 0x3d090 */
  push32((uint32_t)(0x3d090u));
  /* 11f41441 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f41443 push 5 */
  push32((uint32_t)(0x5u));
  /* 11f41445 call esi */
  call_ind((uint32_t)(ESI), 0x11f41447u);
  /* 11f41447 mov edi, dword ptr [0x11f450d8] */
  EDI = (r32((uint32_t)(0x11f450d8)));
  /* 11f4144d push 0 */
  push32((uint32_t)(0x0u));
  /* 11f4144f push 0x11f46830 */
  push32((uint32_t)(0x11f46830u));
  /* 11f41454 call edi */
  call_ind((uint32_t)(EDI), 0x11f41456u);
  /* 11f41456 mov ebx, dword ptr [0x11f450dc] */
  EBX = (r32((uint32_t)(0x11f450dc)));
  /* 11f4145c push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11f41461 push 0x11f46840 */
  push32((uint32_t)(0x11f46840u));
  /* 11f41466 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f41468 call ebx */
  call_ind((uint32_t)(EBX), 0x11f4146au);
  /* 11f4146a push 0 */
  push32((uint32_t)(0x0u));
  /* 11f4146c push 0x11f46828 */
  push32((uint32_t)(0x11f46828u));
  /* 11f41471 call edi */
  call_ind((uint32_t)(EDI), 0x11f41473u);
  /* 11f41473 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11f41475 push 0x11f46848 */
  push32((uint32_t)(0x11f46848u));
  /* 11f4147a push 1 */
  push32((uint32_t)(0x1u));
  /* 11f4147c call ebx */
  call_ind((uint32_t)(EBX), 0x11f4147eu);
  /* 11f4147e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41481 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41483 push 0x11f46700 */
  push32((uint32_t)(0x11f46700u));
  /* 11f41488 call edi */
  call_ind((uint32_t)(EDI), 0x11f4148au);
  /* 11f4148a push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11f4148c push 0x11f466d0 */
  push32((uint32_t)(0x11f466d0u));
  /* 11f41491 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f41493 call ebx */
  call_ind((uint32_t)(EBX), 0x11f41495u);
  /* 11f41495 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41497 push 0x11f46708 */
  push32((uint32_t)(0x11f46708u));
  /* 11f4149c call edi */
  call_ind((uint32_t)(EDI), 0x11f4149eu);
  /* 11f4149e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11f414a0 push 0x11f466d8 */
  push32((uint32_t)(0x11f466d8u));
  /* 11f414a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f414a7 call ebx */
  call_ind((uint32_t)(EBX), 0x11f414a9u);
  /* 11f414a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f414ab push 0x11f46828 */
  push32((uint32_t)(0x11f46828u));
  /* 11f414b0 call edi */
  call_ind((uint32_t)(EDI), 0x11f414b2u);
  /* 11f414b2 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11f414b4 push 0x11f46848 */
  push32((uint32_t)(0x11f46848u));
  /* 11f414b9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f414bb call ebx */
  call_ind((uint32_t)(EBX), 0x11f414bdu);
  /* 11f414bd push 0 */
  push32((uint32_t)(0x0u));
  /* 11f414bf push 0x11f466f0 */
  push32((uint32_t)(0x11f466f0u));
  /* 11f414c4 call edi */
  call_ind((uint32_t)(EDI), 0x11f414c6u);
  /* 11f414c6 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f414c9 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11f414ce push 0x11f466e0 */
  push32((uint32_t)(0x11f466e0u));
  /* 11f414d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f414d5 call ebx */
  call_ind((uint32_t)(EBX), 0x11f414d7u);
  /* 11f414d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f414d9 push 0x11f466f8 */
  push32((uint32_t)(0x11f466f8u));
  /* 11f414de call edi */
  call_ind((uint32_t)(EDI), 0x11f414e0u);
  /* 11f414e0 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11f414e5 push 0x11f466e8 */
  push32((uint32_t)(0x11f466e8u));
  /* 11f414ea push 1 */
  push32((uint32_t)(0x1u));
  /* 11f414ec call ebx */
  call_ind((uint32_t)(EBX), 0x11f414eeu);
  /* 11f414ee mov ebp, dword ptr [0x11f450d4] */
  EBP = (r32((uint32_t)(0x11f450d4)));
  /* 11f414f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f414f6 call ebp */
  call_ind((uint32_t)(EBP), 0x11f414f8u);
  /* 11f414f8 mov ebx, dword ptr [0x11f450e4] */
  EBX = (r32((uint32_t)(0x11f450e4)));
  /* 11f414fe add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41501 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f41503 jne 0x11f4158b */
  if (!C.zf) goto L_11f4158b;
  /* 11f41509 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f4150b push 3 */
  push32((uint32_t)(0x3u));
  /* 11f4150d push 0x11f46710 */
  push32((uint32_t)(0x11f46710u));
  /* 11f41512 call dword ptr [0x11f450e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f450e8))), 0x11f41518u);
  /* 11f41518 push 0xd6d8 */
  push32((uint32_t)(0xd6d8u));
  /* 11f4151d push 3 */
  push32((uint32_t)(0x3u));
  /* 11f4151f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41521 call esi */
  call_ind((uint32_t)(ESI), 0x11f41523u);
  /* 11f41523 push 0xd6d8 */
  push32((uint32_t)(0xd6d8u));
  /* 11f41528 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f4152a push 0 */
  push32((uint32_t)(0x0u));
  /* 11f4152c call esi */
  call_ind((uint32_t)(ESI), 0x11f4152eu);
  /* 11f4152e push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 11f41533 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f41535 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41537 call esi */
  call_ind((uint32_t)(ESI), 0x11f41539u);
  /* 11f41539 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 11f4153e push 5 */
  push32((uint32_t)(0x5u));
  /* 11f41540 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41542 call esi */
  call_ind((uint32_t)(ESI), 0x11f41544u);
  /* 11f41544 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 11f41549 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f4154b push 0 */
  push32((uint32_t)(0x0u));
  /* 11f4154d call esi */
  call_ind((uint32_t)(ESI), 0x11f4154fu);
  /* 11f4154f add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41552 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 11f41557 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f41559 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f4155b call esi */
  call_ind((uint32_t)(ESI), 0x11f4155du);
  /* 11f4155d push 1 */
  push32((uint32_t)(0x1u));
  /* 11f4155f push 1 */
  push32((uint32_t)(0x1u));
  /* 11f41561 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f41563 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41565 push 0x11f46348 */
  push32((uint32_t)(0x11f46348u));
  /* 11f4156a push 2 */
  push32((uint32_t)(0x2u));
  /* 11f4156c call ebx */
  call_ind((uint32_t)(EBX), 0x11f4156eu);
  /* 11f4156e push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41570 push 0x11f46830 */
  push32((uint32_t)(0x11f46830u));
  /* 11f41575 call edi */
  call_ind((uint32_t)(EDI), 0x11f41577u);
  /* 11f41577 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f41579 push 0x11f46828 */
  push32((uint32_t)(0x11f46828u));
  /* 11f4157e call edi */
  call_ind((uint32_t)(EDI), 0x11f41580u);
  /* 11f41580 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f41582 call dword ptr [0x11f450e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f450e0))), 0x11f41588u);
  /* 11f41588 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f4158b:;
  /* 11f4158b push 0 */
  push32((uint32_t)(0x0u));
  /* 11f4158d call ebp */
  call_ind((uint32_t)(EBP), 0x11f4158fu);
  /* 11f4158f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41592 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f41595 jne 0x11f415f0 */
  if (!C.zf) goto L_11f415f0;
  /* 11f41597 push 0x2af8 */
  push32((uint32_t)(0x2af8u));
  /* 11f4159c push 3 */
  push32((uint32_t)(0x3u));
  /* 11f4159e push 0 */
  push32((uint32_t)(0x0u));
  /* 11f415a0 call esi */
  call_ind((uint32_t)(ESI), 0x11f415a2u);
  /* 11f415a2 push 0x2af8 */
  push32((uint32_t)(0x2af8u));
  /* 11f415a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f415a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f415ab call esi */
  call_ind((uint32_t)(ESI), 0x11f415adu);
  /* 11f415ad push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11f415b2 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f415b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f415b6 call esi */
  call_ind((uint32_t)(ESI), 0x11f415b8u);
  /* 11f415b8 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11f415bd push 5 */
  push32((uint32_t)(0x5u));
  /* 11f415bf push 0 */
  push32((uint32_t)(0x0u));
  /* 11f415c1 call esi */
  call_ind((uint32_t)(ESI), 0x11f415c3u);
  /* 11f415c3 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11f415c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f415ca push 0 */
  push32((uint32_t)(0x0u));
  /* 11f415cc call esi */
  call_ind((uint32_t)(ESI), 0x11f415ceu);
  /* 11f415ce push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11f415d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f415d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f415d7 call esi */
  call_ind((uint32_t)(ESI), 0x11f415d9u);
  /* 11f415d9 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f415dc push 2 */
  push32((uint32_t)(0x2u));
  /* 11f415de push 1 */
  push32((uint32_t)(0x1u));
  /* 11f415e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f415e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f415e4 push 0x11f46348 */
  push32((uint32_t)(0x11f46348u));
  /* 11f415e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f415eb call ebx */
  call_ind((uint32_t)(EBX), 0x11f415edu);
  /* 11f415ed add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f415f0:;
  /* 11f415f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f415f2 call ebp */
  call_ind((uint32_t)(EBP), 0x11f415f4u);
  /* 11f415f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f415f7 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f415fa jne 0x11f41655 */
  if (!C.zf) goto L_11f41655;
  /* 11f415fc push 0x157c */
  push32((uint32_t)(0x157cu));
  /* 11f41601 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f41603 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41605 call esi */
  call_ind((uint32_t)(ESI), 0x11f41607u);
  /* 11f41607 push 0x157c */
  push32((uint32_t)(0x157cu));
  /* 11f4160c push 1 */
  push32((uint32_t)(0x1u));
  /* 11f4160e push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41610 call esi */
  call_ind((uint32_t)(ESI), 0x11f41612u);
  /* 11f41612 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11f41617 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f41619 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f4161b call esi */
  call_ind((uint32_t)(ESI), 0x11f4161du);
  /* 11f4161d push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11f41622 push 5 */
  push32((uint32_t)(0x5u));
  /* 11f41624 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41626 call esi */
  call_ind((uint32_t)(ESI), 0x11f41628u);
  /* 11f41628 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11f4162d push 0 */
  push32((uint32_t)(0x0u));
  /* 11f4162f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41631 call esi */
  call_ind((uint32_t)(ESI), 0x11f41633u);
  /* 11f41633 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11f41638 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f4163a push 0 */
  push32((uint32_t)(0x0u));
  /* 11f4163c call esi */
  call_ind((uint32_t)(ESI), 0x11f4163eu);
  /* 11f4163e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41641 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f41643 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f41645 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f41647 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41649 push 0x11f46348 */
  push32((uint32_t)(0x11f46348u));
  /* 11f4164e push 2 */
  push32((uint32_t)(0x2u));
  /* 11f41650 call ebx */
  call_ind((uint32_t)(EBX), 0x11f41652u);
  /* 11f41652 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f41655:;
  /* 11f41655 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41657 call ebp */
  call_ind((uint32_t)(EBP), 0x11f41659u);
  /* 11f41659 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f4165c cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f4165f jne 0x11f416b9 */
  if (!C.zf) goto L_11f416b9;
  /* 11f41661 push 0x1194 */
  push32((uint32_t)(0x1194u));
  /* 11f41666 push eax */
  push32((uint32_t)(EAX));
  /* 11f41667 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41669 call esi */
  call_ind((uint32_t)(ESI), 0x11f4166bu);
  /* 11f4166b push 0x1194 */
  push32((uint32_t)(0x1194u));
  /* 11f41670 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f41672 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41674 call esi */
  call_ind((uint32_t)(ESI), 0x11f41676u);
  /* 11f41676 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11f4167b push 4 */
  push32((uint32_t)(0x4u));
  /* 11f4167d push 0 */
  push32((uint32_t)(0x0u));
  /* 11f4167f call esi */
  call_ind((uint32_t)(ESI), 0x11f41681u);
  /* 11f41681 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11f41686 push 5 */
  push32((uint32_t)(0x5u));
  /* 11f41688 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f4168a call esi */
  call_ind((uint32_t)(ESI), 0x11f4168cu);
  /* 11f4168c push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11f41691 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41693 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41695 call esi */
  call_ind((uint32_t)(ESI), 0x11f41697u);
  /* 11f41697 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11f4169c push 2 */
  push32((uint32_t)(0x2u));
  /* 11f4169e push 0 */
  push32((uint32_t)(0x0u));
  /* 11f416a0 call esi */
  call_ind((uint32_t)(ESI), 0x11f416a2u);
  /* 11f416a2 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f416a5 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f416a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f416a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f416ab push 0 */
  push32((uint32_t)(0x0u));
  /* 11f416ad push 0x11f46348 */
  push32((uint32_t)(0x11f46348u));
  /* 11f416b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f416b4 call ebx */
  call_ind((uint32_t)(EBX), 0x11f416b6u);
  /* 11f416b6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f416b9:;
  /* 11f416b9 mov ebp, dword ptr [0x11f450bc] */
  EBP = (r32((uint32_t)(0x11f450bc)));
L_11f416bf:;
  /* 11f416bf mov ebx, dword ptr [0x11f450f0] */
  EBX = (r32((uint32_t)(0x11f450f0)));
  /* 11f416c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f416c7 push 0x11f466c0 */
  push32((uint32_t)(0x11f466c0u));
  /* 11f416cc call ebx */
  call_ind((uint32_t)(EBX), 0x11f416ceu);
  /* 11f416ce mov esi, dword ptr [0x11f450f4] */
  ESI = (r32((uint32_t)(0x11f450f4)));
  /* 11f416d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f416d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f416d9 jle 0x11f416ec */
  if ((C.zf||C.sf!=C.of)) goto L_11f416ec;
  /* 11f416db push 0 */
  push32((uint32_t)(0x0u));
  /* 11f416dd push 0x11f466c0 */
  push32((uint32_t)(0x11f466c0u));
  /* 11f416e2 push 0x11f466a0 */
  push32((uint32_t)(0x11f466a0u));
  /* 11f416e7 call esi */
  call_ind((uint32_t)(ESI), 0x11f416e9u);
  /* 11f416e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f416ec:;
  /* 11f416ec push 0 */
  push32((uint32_t)(0x0u));
  /* 11f416ee push 0x11f466b8 */
  push32((uint32_t)(0x11f466b8u));
  /* 11f416f3 call ebx */
  call_ind((uint32_t)(EBX), 0x11f416f5u);
  /* 11f416f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f416f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f416fa jle 0x11f4170d */
  if ((C.zf||C.sf!=C.of)) goto L_11f4170d;
  /* 11f416fc push 0 */
  push32((uint32_t)(0x0u));
  /* 11f416fe push 0x11f466b8 */
  push32((uint32_t)(0x11f466b8u));
  /* 11f41703 push 0x11f466a8 */
  push32((uint32_t)(0x11f466a8u));
  /* 11f41708 call esi */
  call_ind((uint32_t)(ESI), 0x11f4170au);
  /* 11f4170a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f4170d:;
  /* 11f4170d push 0 */
  push32((uint32_t)(0x0u));
  /* 11f4170f push 0x11f466b0 */
  push32((uint32_t)(0x11f466b0u));
  /* 11f41714 call ebx */
  call_ind((uint32_t)(EBX), 0x11f41716u);
  /* 11f41716 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41719 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f4171b jle 0x11f4172e */
  if ((C.zf||C.sf!=C.of)) goto L_11f4172e;
  /* 11f4171d push 0 */
  push32((uint32_t)(0x0u));
  /* 11f4171f push 0x11f466b0 */
  push32((uint32_t)(0x11f466b0u));
  /* 11f41724 push 0x11f46698 */
  push32((uint32_t)(0x11f46698u));
  /* 11f41729 call esi */
  call_ind((uint32_t)(ESI), 0x11f4172bu);
  /* 11f4172b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f4172e:;
  /* 11f4172e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11f41730 push 5 */
  push32((uint32_t)(0x5u));
  /* 11f41732 call dword ptr [0x11f450ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f450ec))), 0x11f41738u);
  /* 11f41738 mov esi, dword ptr [0x11f450fc] */
  ESI = (r32((uint32_t)(0x11f450fc)));
  /* 11f4173e push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41740 push 0x11f46720 */
  push32((uint32_t)(0x11f46720u));
  /* 11f41745 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41747 call esi */
  call_ind((uint32_t)(ESI), 0x11f41749u);
  /* 11f41749 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f4174b push 0x11f46728 */
  push32((uint32_t)(0x11f46728u));
  /* 11f41750 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41752 call esi */
  call_ind((uint32_t)(ESI), 0x11f41754u);
  /* 11f41754 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41756 push 0x11f46730 */
  push32((uint32_t)(0x11f46730u));
  /* 11f4175b push 0 */
  push32((uint32_t)(0x0u));
  /* 11f4175d call esi */
  call_ind((uint32_t)(ESI), 0x11f4175fu);
  /* 11f4175f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41761 push 0x11f46738 */
  push32((uint32_t)(0x11f46738u));
  /* 11f41766 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41768 call esi */
  call_ind((uint32_t)(ESI), 0x11f4176au);
  /* 11f4176a push 0 */
  push32((uint32_t)(0x0u));
  /* 11f4176c push 0x11f46740 */
  push32((uint32_t)(0x11f46740u));
  /* 11f41771 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41773 call esi */
  call_ind((uint32_t)(ESI), 0x11f41775u);
  /* 11f41775 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41778 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f4177a push 0x11f46748 */
  push32((uint32_t)(0x11f46748u));
  /* 11f4177f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41781 call esi */
  call_ind((uint32_t)(ESI), 0x11f41783u);
  /* 11f41783 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41785 push 0x11f46750 */
  push32((uint32_t)(0x11f46750u));
  /* 11f4178a push 0 */
  push32((uint32_t)(0x0u));
  /* 11f4178c call esi */
  call_ind((uint32_t)(ESI), 0x11f4178eu);
  /* 11f4178e push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41790 push 0x11f46758 */
  push32((uint32_t)(0x11f46758u));
  /* 11f41795 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41797 call esi */
  call_ind((uint32_t)(ESI), 0x11f41799u);
  /* 11f41799 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f4179b push 0x11f46760 */
  push32((uint32_t)(0x11f46760u));
  /* 11f417a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f417a2 call esi */
  call_ind((uint32_t)(ESI), 0x11f417a4u);
  /* 11f417a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f417a6 push 0x11f46768 */
  push32((uint32_t)(0x11f46768u));
  /* 11f417ab push 0 */
  push32((uint32_t)(0x0u));
  /* 11f417ad call esi */
  call_ind((uint32_t)(ESI), 0x11f417afu);
  /* 11f417af push 0 */
  push32((uint32_t)(0x0u));
  /* 11f417b1 push 0x11f46770 */
  push32((uint32_t)(0x11f46770u));
  /* 11f417b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f417b8 call esi */
  call_ind((uint32_t)(ESI), 0x11f417bau);
  /* 11f417ba add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f417bd push 0 */
  push32((uint32_t)(0x0u));
  /* 11f417bf push 0x11f46778 */
  push32((uint32_t)(0x11f46778u));
  /* 11f417c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f417c6 call esi */
  call_ind((uint32_t)(ESI), 0x11f417c8u);
  /* 11f417c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f417ca push 0x11f46780 */
  push32((uint32_t)(0x11f46780u));
  /* 11f417cf push 0 */
  push32((uint32_t)(0x0u));
  /* 11f417d1 call esi */
  call_ind((uint32_t)(ESI), 0x11f417d3u);
  /* 11f417d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f417d5 push 0x11f46788 */
  push32((uint32_t)(0x11f46788u));
  /* 11f417da push 0 */
  push32((uint32_t)(0x0u));
  /* 11f417dc call esi */
  call_ind((uint32_t)(ESI), 0x11f417deu);
  /* 11f417de push 0 */
  push32((uint32_t)(0x0u));
  /* 11f417e0 push 0x11f46798 */
  push32((uint32_t)(0x11f46798u));
  /* 11f417e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f417e7 call esi */
  call_ind((uint32_t)(ESI), 0x11f417e9u);
  /* 11f417e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f417eb push 0x11f467a8 */
  push32((uint32_t)(0x11f467a8u));
  /* 11f417f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f417f2 call esi */
  call_ind((uint32_t)(ESI), 0x11f417f4u);
  /* 11f417f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f417f6 push 0x11f46790 */
  push32((uint32_t)(0x11f46790u));
  /* 11f417fb push 0 */
  push32((uint32_t)(0x0u));
  /* 11f417fd call esi */
  call_ind((uint32_t)(ESI), 0x11f417ffu);
  /* 11f417ff add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41802 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41804 push 0x11f467a0 */
  push32((uint32_t)(0x11f467a0u));
  /* 11f41809 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f4180b call esi */
  call_ind((uint32_t)(ESI), 0x11f4180du);
  /* 11f4180d push 0 */
  push32((uint32_t)(0x0u));
  /* 11f4180f push 0x11f467b0 */
  push32((uint32_t)(0x11f467b0u));
  /* 11f41814 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41816 call esi */
  call_ind((uint32_t)(ESI), 0x11f41818u);
  /* 11f41818 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f4181a push 0x11f467c0 */
  push32((uint32_t)(0x11f467c0u));
  /* 11f4181f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41821 call esi */
  call_ind((uint32_t)(ESI), 0x11f41823u);
  /* 11f41823 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41825 push 0x11f467d0 */
  push32((uint32_t)(0x11f467d0u));
  /* 11f4182a push 0 */
  push32((uint32_t)(0x0u));
  /* 11f4182c call esi */
  call_ind((uint32_t)(ESI), 0x11f4182eu);
  /* 11f4182e push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41830 push 0x11f467e0 */
  push32((uint32_t)(0x11f467e0u));
  /* 11f41835 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41837 call esi */
  call_ind((uint32_t)(ESI), 0x11f41839u);
  /* 11f41839 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f4183b push 0x11f467f0 */
  push32((uint32_t)(0x11f467f0u));
  /* 11f41840 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41842 call esi */
  call_ind((uint32_t)(ESI), 0x11f41844u);
  /* 11f41844 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41847 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41849 push 0x11f46800 */
  push32((uint32_t)(0x11f46800u));
  /* 11f4184e push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41850 call esi */
  call_ind((uint32_t)(ESI), 0x11f41852u);
  /* 11f41852 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41854 push 0x11f46810 */
  push32((uint32_t)(0x11f46810u));
  /* 11f41859 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f4185b call esi */
  call_ind((uint32_t)(ESI), 0x11f4185du);
  /* 11f4185d push 0 */
  push32((uint32_t)(0x0u));
  /* 11f4185f push 0x11f467b8 */
  push32((uint32_t)(0x11f467b8u));
  /* 11f41864 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41866 call esi */
  call_ind((uint32_t)(ESI), 0x11f41868u);
  /* 11f41868 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f4186a push 0x11f467c8 */
  push32((uint32_t)(0x11f467c8u));
  /* 11f4186f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41871 call esi */
  call_ind((uint32_t)(ESI), 0x11f41873u);
  /* 11f41873 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41875 push 0x11f467d8 */
  push32((uint32_t)(0x11f467d8u));
  /* 11f4187a push 0 */
  push32((uint32_t)(0x0u));
  /* 11f4187c call esi */
  call_ind((uint32_t)(ESI), 0x11f4187eu);
  /* 11f4187e push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41880 push 0x11f467e8 */
  push32((uint32_t)(0x11f467e8u));
  /* 11f41885 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41887 call esi */
  call_ind((uint32_t)(ESI), 0x11f41889u);
  /* 11f41889 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f4188c push 0 */
  push32((uint32_t)(0x0u));
  /* 11f4188e push 0x11f467f8 */
  push32((uint32_t)(0x11f467f8u));
  /* 11f41893 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41895 call esi */
  call_ind((uint32_t)(ESI), 0x11f41897u);
  /* 11f41897 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41899 push 0x11f46808 */
  push32((uint32_t)(0x11f46808u));
  /* 11f4189e push 0 */
  push32((uint32_t)(0x0u));
  /* 11f418a0 call esi */
  call_ind((uint32_t)(ESI), 0x11f418a2u);
  /* 11f418a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f418a4 push 0x11f46818 */
  push32((uint32_t)(0x11f46818u));
  /* 11f418a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f418ab call esi */
  call_ind((uint32_t)(ESI), 0x11f418adu);
  /* 11f418ad mov esi, dword ptr [0x11f45100] */
  ESI = (r32((uint32_t)(0x11f45100)));
  /* 11f418b3 push 0x11f46858 */
  push32((uint32_t)(0x11f46858u));
  /* 11f418b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f418ba call esi */
  call_ind((uint32_t)(ESI), 0x11f418bcu);
  /* 11f418bc push 0x11f46690 */
  push32((uint32_t)(0x11f46690u));
  /* 11f418c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f418c3 call esi */
  call_ind((uint32_t)(ESI), 0x11f418c5u);
  /* 11f418c5 push 0x11f46850 */
  push32((uint32_t)(0x11f46850u));
  /* 11f418ca push 0 */
  push32((uint32_t)(0x0u));
  /* 11f418cc call esi */
  call_ind((uint32_t)(ESI), 0x11f418ceu);
  /* 11f418ce push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11f418d0 call ebp */
  call_ind((uint32_t)(EBP), 0x11f418d2u);
  /* 11f418d2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f418d5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f418d7 je 0x11f41915 */
  if (C.zf) goto L_11f41915;
  /* 11f418d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f418db push 0 */
  push32((uint32_t)(0x0u));
  /* 11f418dd push 0 */
  push32((uint32_t)(0x0u));
  /* 11f418df push 0 */
  push32((uint32_t)(0x0u));
  /* 11f418e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f418e3 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11f418e8 push 0x11f46340 */
  push32((uint32_t)(0x11f46340u));
  /* 11f418ed push 0x11f46820 */
  push32((uint32_t)(0x11f46820u));
  /* 11f418f2 push 0x11f46838 */
  push32((uint32_t)(0x11f46838u));
  /* 11f418f7 push 0x11f46718 */
  push32((uint32_t)(0x11f46718u));
  /* 11f418fc push 0 */
  push32((uint32_t)(0x0u));
  /* 11f418fe push 5 */
  push32((uint32_t)(0x5u));
  /* 11f41900 call 0x11f419c0 */
  push32(0x11f41905u); f_11f419c0();
  /* 11f41905 mov esi, dword ptr [0x11f450cc] */
  ESI = (r32((uint32_t)(0x11f450cc)));
  /* 11f4190b push eax */
  push32((uint32_t)(EAX));
  /* 11f4190c push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11f4190e call esi */
  call_ind((uint32_t)(ESI), 0x11f41910u);
  /* 11f41910 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41913 jmp 0x11f4191b */
  goto L_11f4191b;
L_11f41915:;
  /* 11f41915 mov esi, dword ptr [0x11f450cc] */
  ESI = (r32((uint32_t)(0x11f450cc)));
L_11f4191b:;
  /* 11f4191b push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11f4191d call ebp */
  call_ind((uint32_t)(EBP), 0x11f4191fu);
  /* 11f4191f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41922 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f41924 je 0x11f4194d */
  if (C.zf) goto L_11f4194d;
  /* 11f41926 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f41928 call dword ptr [0x11f450f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f450f8))), 0x11f4192eu);
  /* 11f4192e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41931 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f41933 je 0x11f4194d */
  if (C.zf) goto L_11f4194d;
  /* 11f41935 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41937 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11f41939 call esi */
  call_ind((uint32_t)(ESI), 0x11f4193bu);
  /* 11f4193b mov edi, dword ptr [0x11f450d0] */
  EDI = (r32((uint32_t)(0x11f450d0)));
  /* 11f41941 push 0x11f46338 */
  push32((uint32_t)(0x11f46338u));
  /* 11f41946 call edi */
  call_ind((uint32_t)(EDI), 0x11f41948u);
  /* 11f41948 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f4194b jmp 0x11f41953 */
  goto L_11f41953;
L_11f4194d:;
  /* 11f4194d mov edi, dword ptr [0x11f450d0] */
  EDI = (r32((uint32_t)(0x11f450d0)));
L_11f41953:;
  /* 11f41953 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 11f41955 call ebp */
  call_ind((uint32_t)(EBP), 0x11f41957u);
  /* 11f41957 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f4195a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f4195c je 0x11f41987 */
  if (C.zf) goto L_11f41987;
  /* 11f4195e push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41960 push 0x11f466c8 */
  push32((uint32_t)(0x11f466c8u));
  /* 11f41965 call dword ptr [0x11f45108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45108))), 0x11f4196bu);
  /* 11f4196b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f4196e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f41970 jne 0x11f41987 */
  if (!C.zf) goto L_11f41987;
  /* 11f41972 push eax */
  push32((uint32_t)(EAX));
  /* 11f41973 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 11f41975 call esi */
  call_ind((uint32_t)(ESI), 0x11f41977u);
  /* 11f41977 push 0x11f46330 */
  push32((uint32_t)(0x11f46330u));
  /* 11f4197c call edi */
  call_ind((uint32_t)(EDI), 0x11f4197eu);
  /* 11f4197e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41981 call dword ptr [0x11f4510c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f4510c))), 0x11f41987u);
L_11f41987:;
  /* 11f41987 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11f41989 call ebp */
  call_ind((uint32_t)(EBP), 0x11f4198bu);
  /* 11f4198b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f4198e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f41990 je 0x11f419b7 */
  if (C.zf) goto L_11f419b7;
  /* 11f41992 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f41994 push 0x11f46710 */
  push32((uint32_t)(0x11f46710u));
  /* 11f41999 call ebx */
  call_ind((uint32_t)(EBX), 0x11f4199bu);
  /* 11f4199b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f4199e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f419a0 jne 0x11f419b7 */
  if (!C.zf) goto L_11f419b7;
  /* 11f419a2 push eax */
  push32((uint32_t)(EAX));
  /* 11f419a3 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11f419a5 call esi */
  call_ind((uint32_t)(ESI), 0x11f419a7u);
  /* 11f419a7 push 0x11f46328 */
  push32((uint32_t)(0x11f46328u));
  /* 11f419ac call edi */
  call_ind((uint32_t)(EDI), 0x11f419aeu);
  /* 11f419ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f419b1 call dword ptr [0x11f45104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45104))), 0x11f419b7u);
L_11f419b7:;
  /* 11f419b7 pop edi */
  EDI = (pop32());
  /* 11f419b8 pop esi */
  ESI = (pop32());
  /* 11f419b9 pop ebp */
  EBP = (pop32());
  /* 11f419ba pop ebx */
  EBX = (pop32());
  /* 11f419bb ret  */
  ESPCHK(0x11f41380u, _esp0);
  ESP += 4; return;
}

/* FUN_100019c0 @ 0x11f419c0 (364 bytes, 146 insns) */
void f_11f419c0(void) {
  FTRACE(0x11f419c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f419c0 push ebx */
  push32((uint32_t)(EBX));
  /* 11f419c1 push ebp */
  push32((uint32_t)(EBP));
  /* 11f419c2 push esi */
  push32((uint32_t)(ESI));
  /* 11f419c3 mov esi, dword ptr [esp + 0x20] */
  ESI = (r32((uint32_t)(ESP + 0x20)));
  /* 11f419c7 push edi */
  push32((uint32_t)(EDI));
  /* 11f419c8 push esi */
  push32((uint32_t)(ESI));
  /* 11f419c9 call dword ptr [0x11f450b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f450b4))), 0x11f419cfu);
  /* 11f419cf mov edi, dword ptr [esp + 0x18] */
  EDI = (r32((uint32_t)(ESP + 0x18)));
  /* 11f419d3 mov ebx, dword ptr [esp + 0x1c] */
  EBX = (r32((uint32_t)(ESP + 0x1c)));
  /* 11f419d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f419da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f419dc jle 0x11f41a1a */
  if ((C.zf||C.sf!=C.of)) goto L_11f41a1a;
  /* 11f419de mov eax, dword ptr [esp + 0x1c] */
  EAX = (r32((uint32_t)(ESP + 0x1c)));
  /* 11f419e2 mov ebp, dword ptr [0x11f450b8] */
  EBP = (r32((uint32_t)(0x11f450b8)));
  /* 11f419e8 push esi */
  push32((uint32_t)(ESI));
  /* 11f419e9 push eax */
  push32((uint32_t)(EAX));
  /* 11f419ea call ebp */
  call_ind((uint32_t)(EBP), 0x11f419ecu);
  /* 11f419ec mov ecx, dword ptr [esp + 0x28] */
  ECX = (r32((uint32_t)(ESP + 0x28)));
  /* 11f419f0 mov edx, eax */
  EDX = (EAX);
  /* 11f419f2 push esi */
  push32((uint32_t)(ESI));
  /* 11f419f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f419f4 mov dword ptr [esp + 0x34], edx */
  w32((uint32_t)(ESP + 0x34), (EDX));
  /* 11f419f8 call ebp */
  call_ind((uint32_t)(EBP), 0x11f419fau);
  /* 11f419fa mov edx, dword ptr [esp + 0x34] */
  EDX = (r32((uint32_t)(ESP + 0x34)));
  /* 11f419fe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41a01 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f41a03 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f41a05 jle 0x11f41a1a */
  if ((C.zf||C.sf!=C.of)) goto L_11f41a1a;
  /* 11f41a07 mov eax, dword ptr [esp + 0x1c] */
  EAX = (r32((uint32_t)(ESP + 0x1c)));
  /* 11f41a0b push ebx */
  push32((uint32_t)(EBX));
  /* 11f41a0c push eax */
  push32((uint32_t)(EAX));
  /* 11f41a0d call dword ptr [0x11f450f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f450f0))), 0x11f41a13u);
  /* 11f41a13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41a16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f41a18 je 0x11f41a38 */
  if (C.zf) goto L_11f41a38;
L_11f41a1a:;
  /* 11f41a1a mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 11f41a1e push edi */
  push32((uint32_t)(EDI));
  /* 11f41a1f push ecx */
  push32((uint32_t)(ECX));
  /* 11f41a20 call dword ptr [0x11f450f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f450f0))), 0x11f41a26u);
  /* 11f41a26 push esi */
  push32((uint32_t)(ESI));
  /* 11f41a27 mov ebp, eax */
  EBP = (EAX);
  /* 11f41a29 call dword ptr [0x11f450b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f450b4))), 0x11f41a2fu);
  /* 11f41a2f sub eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f41a31 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41a34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f41a36 jle 0x11f41a67 */
  if ((C.zf||C.sf!=C.of)) goto L_11f41a67;
L_11f41a38:;
  /* 11f41a38 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41a3a push esi */
  push32((uint32_t)(ESI));
  /* 11f41a3b call dword ptr [0x11f450d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f450d8))), 0x11f41a41u);
  /* 11f41a41 mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 11f41a45 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f41a47 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 11f41a49 push edx */
  push32((uint32_t)(EDX));
  /* 11f41a4a push edi */
  push32((uint32_t)(EDI));
  /* 11f41a4b call dword ptr [0x11f450b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f450b0))), 0x11f41a51u);
  /* 11f41a51 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41a53 push edi */
  push32((uint32_t)(EDI));
  /* 11f41a54 call dword ptr [0x11f450c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f450c0))), 0x11f41a5au);
  /* 11f41a5a push 1 */
  push32((uint32_t)(0x1u));
  /* 11f41a5c push 0xc */
  push32((uint32_t)(0xcu));
  /* 11f41a5e call dword ptr [0x11f450cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f450cc))), 0x11f41a64u);
  /* 11f41a64 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f41a67:;
  /* 11f41a67 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11f41a69 call dword ptr [0x11f450bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f450bc))), 0x11f41a6fu);
  /* 11f41a6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41a72 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f41a74 je 0x11f41aa3 */
  if (C.zf) goto L_11f41aa3;
  /* 11f41a76 mov eax, dword ptr [esp + 0x1c] */
  EAX = (r32((uint32_t)(ESP + 0x1c)));
  /* 11f41a7a mov esi, dword ptr [0x11f450f0] */
  ESI = (r32((uint32_t)(0x11f450f0)));
  /* 11f41a80 push ebx */
  push32((uint32_t)(EBX));
  /* 11f41a81 push eax */
  push32((uint32_t)(EAX));
  /* 11f41a82 call esi */
  call_ind((uint32_t)(ESI), 0x11f41a84u);
  /* 11f41a84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41a87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f41a89 jle 0x11f41aa9 */
  if ((C.zf||C.sf!=C.of)) goto L_11f41aa9;
  /* 11f41a8b push 1 */
  push32((uint32_t)(0x1u));
  /* 11f41a8d push edi */
  push32((uint32_t)(EDI));
  /* 11f41a8e call dword ptr [0x11f450c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f450c0))), 0x11f41a94u);
  /* 11f41a94 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41a96 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11f41a98 call dword ptr [0x11f450cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f450cc))), 0x11f41a9eu);
  /* 11f41a9e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41aa1 jmp 0x11f41aa9 */
  goto L_11f41aa9;
L_11f41aa3:;
  /* 11f41aa3 mov esi, dword ptr [0x11f450f0] */
  ESI = (r32((uint32_t)(0x11f450f0)));
L_11f41aa9:;
  /* 11f41aa9 mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 11f41aad push edi */
  push32((uint32_t)(EDI));
  /* 11f41aae push ecx */
  push32((uint32_t)(ECX));
  /* 11f41aaf call esi */
  call_ind((uint32_t)(ESI), 0x11f41ab1u);
  /* 11f41ab1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41ab4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f41ab6 jne 0x11f41b25 */
  if (!C.zf) goto L_11f41b25;
  /* 11f41ab8 mov edx, dword ptr [esp + 0x20] */
  EDX = (r32((uint32_t)(ESP + 0x20)));
  /* 11f41abc push ebx */
  push32((uint32_t)(EBX));
  /* 11f41abd push edx */
  push32((uint32_t)(EDX));
  /* 11f41abe call esi */
  call_ind((uint32_t)(ESI), 0x11f41ac0u);
  /* 11f41ac0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41ac3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f41ac6 jl 0x11f41b25 */
  if ((C.sf!=C.of)) goto L_11f41b25;
  /* 11f41ac8 mov eax, dword ptr [esp + 0x28] */
  EAX = (r32((uint32_t)(ESP + 0x28)));
  /* 11f41acc push eax */
  push32((uint32_t)(EAX));
  /* 11f41acd call dword ptr [0x11f450d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f450d0))), 0x11f41ad3u);
  /* 11f41ad3 mov ecx, dword ptr [esp + 0x30] */
  ECX = (r32((uint32_t)(ESP + 0x30)));
  /* 11f41ad7 mov esi, dword ptr [0x11f450c4] */
  ESI = (r32((uint32_t)(0x11f450c4)));
  /* 11f41add push ecx */
  push32((uint32_t)(ECX));
  /* 11f41ade push 1 */
  push32((uint32_t)(0x1u));
  /* 11f41ae0 push ebx */
  push32((uint32_t)(EBX));
  /* 11f41ae1 call esi */
  call_ind((uint32_t)(ESI), 0x11f41ae3u);
  /* 11f41ae3 mov edx, dword ptr [esp + 0x40] */
  EDX = (r32((uint32_t)(ESP + 0x40)));
  /* 11f41ae7 push edx */
  push32((uint32_t)(EDX));
  /* 11f41ae8 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f41aea push ebx */
  push32((uint32_t)(EBX));
  /* 11f41aeb call esi */
  call_ind((uint32_t)(ESI), 0x11f41aedu);
  /* 11f41aed mov eax, dword ptr [esp + 0x50] */
  EAX = (r32((uint32_t)(ESP + 0x50)));
  /* 11f41af1 push eax */
  push32((uint32_t)(EAX));
  /* 11f41af2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41af4 push ebx */
  push32((uint32_t)(EBX));
  /* 11f41af5 call esi */
  call_ind((uint32_t)(ESI), 0x11f41af7u);
  /* 11f41af7 mov ecx, dword ptr [esp + 0x60] */
  ECX = (r32((uint32_t)(ESP + 0x60)));
  /* 11f41afb push ecx */
  push32((uint32_t)(ECX));
  /* 11f41afc push 2 */
  push32((uint32_t)(0x2u));
  /* 11f41afe push ebx */
  push32((uint32_t)(EBX));
  /* 11f41aff call esi */
  call_ind((uint32_t)(ESI), 0x11f41b01u);
  /* 11f41b01 mov edx, dword ptr [esp + 0x70] */
  EDX = (r32((uint32_t)(ESP + 0x70)));
  /* 11f41b05 push edx */
  push32((uint32_t)(EDX));
  /* 11f41b06 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f41b08 push ebx */
  push32((uint32_t)(EBX));
  /* 11f41b09 call esi */
  call_ind((uint32_t)(ESI), 0x11f41b0bu);
  /* 11f41b0b mov eax, dword ptr [esp + 0x80] */
  EAX = (r32((uint32_t)(ESP + 0x80)));
  /* 11f41b12 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41b15 push eax */
  push32((uint32_t)(EAX));
  /* 11f41b16 push 5 */
  push32((uint32_t)(0x5u));
  /* 11f41b18 push ebx */
  push32((uint32_t)(EBX));
  /* 11f41b19 call esi */
  call_ind((uint32_t)(ESI), 0x11f41b1bu);
  /* 11f41b1b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41b1e xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11f41b20 pop edi */
  EDI = (pop32());
  /* 11f41b21 pop esi */
  ESI = (pop32());
  /* 11f41b22 pop ebp */
  EBP = (pop32());
  /* 11f41b23 pop ebx */
  EBX = (pop32());
  /* 11f41b24 ret  */
  ESPCHK(0x11f419c0u, _esp0);
  ESP += 4; return;
L_11f41b25:;
  /* 11f41b25 pop edi */
  EDI = (pop32());
  /* 11f41b26 pop esi */
  ESI = (pop32());
  /* 11f41b27 pop ebp */
  EBP = (pop32());
  /* 11f41b28 mov al, 1 */
  AL = (0x1u);
  /* 11f41b2a pop ebx */
  EBX = (pop32());
  /* 11f41b2b ret  */
  ESPCHK(0x11f419c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b30 @ 0x11f41b30 (217 bytes, 57 insns) */
void f_11f41b30(void) {
  FTRACE(0x11f41b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f41b30 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f41b34 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f41b37 jne 0x11f41bc5 */
  if (!C.zf) goto L_11f41bc5;
  /* 11f41b3d call dword ptr [0x11f4506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f4506c))), 0x11f41b43u);
  /* 11f41b43 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f41b45 mov dword ptr [0x11f4687c], eax */
  w32((uint32_t)(0x11f4687c), (EAX));
  /* 11f41b4a call 0x11f42564 */
  push32(0x11f41b4fu); f_11f42564();
  /* 11f41b4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f41b51 pop ecx */
  ECX = (pop32());
  /* 11f41b52 je 0x11f41b90 */
  if (C.zf) goto L_11f41b90;
  /* 11f41b54 mov eax, dword ptr [0x11f4687c] */
  EAX = (r32((uint32_t)(0x11f4687c)));
  /* 11f41b59 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f41b5b mov cl, byte ptr [0x11f4687d] */
  CL = (r8((uint32_t)(0x11f4687d)));
  /* 11f41b61 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f41b66 shr dword ptr [0x11f4687c], 0x10 */
  w32((uint32_t)(0x11f4687c), (sh_shr((uint32_t)(r32((uint32_t)(0x11f4687c))), (0x10u)&0x1f, 32)));
  /* 11f41b6d mov dword ptr [0x11f46884], eax */
  w32((uint32_t)(0x11f46884), (EAX));
  /* 11f41b72 mov dword ptr [0x11f46888], ecx */
  w32((uint32_t)(0x11f46888), (ECX));
  /* 11f41b78 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11f41b7b add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41b7d mov dword ptr [0x11f46880], eax */
  w32((uint32_t)(0x11f46880), (EAX));
  /* 11f41b82 call 0x11f41df7 */
  push32(0x11f41b87u); f_11f41df7();
  /* 11f41b87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f41b89 jne 0x11f41b94 */
  if (!C.zf) goto L_11f41b94;
  /* 11f41b8b call 0x11f425a0 */
  push32(0x11f41b90u); f_11f425a0();
L_11f41b90:;
  /* 11f41b90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f41b92 jmp 0x11f41c06 */
  goto L_11f41c06;
L_11f41b94:;
  /* 11f41b94 call dword ptr [0x11f45068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45068))), 0x11f41b9au);
  /* 11f41b9a mov dword ptr [0x11f46dd8], eax */
  w32((uint32_t)(0x11f46dd8), (EAX));
  /* 11f41b9f call 0x11f42432 */
  push32(0x11f41ba4u); f_11f42432();
  /* 11f41ba4 mov dword ptr [0x11f46868], eax */
  w32((uint32_t)(0x11f46868), (EAX));
  /* 11f41ba9 call 0x11f41f1c */
  push32(0x11f41baeu); f_11f41f1c();
  /* 11f41bae call 0x11f421e5 */
  push32(0x11f41bb3u); f_11f421e5();
  /* 11f41bb3 call 0x11f4212c */
  push32(0x11f41bb8u); f_11f4212c();
  /* 11f41bb8 call 0x11f41cd9 */
  push32(0x11f41bbdu); f_11f41cd9();
  /* 11f41bbd inc dword ptr [0x11f46864] */
  { uint32_t _r=(r32((uint32_t)(0x11f46864)))+1; w32((uint32_t)(0x11f46864), (_r)); fl_inc(_r,32); }
  /* 11f41bc3 jmp 0x11f41c03 */
  goto L_11f41c03;
L_11f41bc5:;
  /* 11f41bc5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f41bc7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f41bc9 jne 0x11f41bf7 */
  if (!C.zf) goto L_11f41bf7;
  /* 11f41bcb cmp dword ptr [0x11f46864], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11f46864))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f41bd1 jle 0x11f41b90 */
  if ((C.zf||C.sf!=C.of)) goto L_11f41b90;
  /* 11f41bd3 dec dword ptr [0x11f46864] */
  { uint32_t _r=(r32((uint32_t)(0x11f46864)))-1; w32((uint32_t)(0x11f46864), (_r)); fl_dec(_r,32); }
  /* 11f41bd9 cmp dword ptr [0x11f468b4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11f468b4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f41bdf jne 0x11f41be6 */
  if (!C.zf) goto L_11f41be6;
  /* 11f41be1 call 0x11f41d17 */
  push32(0x11f41be6u); f_11f41d17();
L_11f41be6:;
  /* 11f41be6 call 0x11f420d8 */
  push32(0x11f41bebu); f_11f420d8();
  /* 11f41beb call 0x11f41e4b */
  push32(0x11f41bf0u); f_11f41e4b();
  /* 11f41bf0 call 0x11f425a0 */
  push32(0x11f41bf5u); f_11f425a0();
  /* 11f41bf5 jmp 0x11f41c03 */
  goto L_11f41c03;
L_11f41bf7:;
  /* 11f41bf7 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f41bfa jne 0x11f41c03 */
  if (!C.zf) goto L_11f41c03;
  /* 11f41bfc push ecx */
  push32((uint32_t)(ECX));
  /* 11f41bfd call 0x11f41e7c */
  push32(0x11f41c02u); f_11f41e7c();
  /* 11f41c02 pop ecx */
  ECX = (pop32());
L_11f41c03:;
  /* 11f41c03 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f41c05 pop eax */
  EAX = (pop32());
L_11f41c06:;
  /* 11f41c06 ret 0xc */
  ESPCHK(0x11f41b30u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11f41c09 (157 bytes, 73 insns) */
void f_11f41c09(void) {
  FTRACE(0x11f41c09u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f41c09 push ebp */
  push32((uint32_t)(EBP));
  /* 11f41c0a mov ebp, esp */
  EBP = (ESP);
  /* 11f41c0c push ebx */
  push32((uint32_t)(EBX));
  /* 11f41c0d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f41c10 push esi */
  push32((uint32_t)(ESI));
  /* 11f41c11 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f41c14 push edi */
  push32((uint32_t)(EDI));
  /* 11f41c15 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11f41c18 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f41c1a jne 0x11f41c25 */
  if (!C.zf) goto L_11f41c25;
  /* 11f41c1c cmp dword ptr [0x11f46864], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f46864))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f41c23 jmp 0x11f41c4b */
  goto L_11f41c4b;
L_11f41c25:;
  /* 11f41c25 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f41c28 je 0x11f41c2f */
  if (C.zf) goto L_11f41c2f;
  /* 11f41c2a cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f41c2d jne 0x11f41c51 */
  if (!C.zf) goto L_11f41c51;
L_11f41c2f:;
  /* 11f41c2f mov eax, dword ptr [0x11f46ddc] */
  EAX = (r32((uint32_t)(0x11f46ddc)));
  /* 11f41c34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f41c36 je 0x11f41c41 */
  if (C.zf) goto L_11f41c41;
  /* 11f41c38 push edi */
  push32((uint32_t)(EDI));
  /* 11f41c39 push esi */
  push32((uint32_t)(ESI));
  /* 11f41c3a push ebx */
  push32((uint32_t)(EBX));
  /* 11f41c3b call eax */
  call_ind((uint32_t)(EAX), 0x11f41c3du);
  /* 11f41c3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f41c3f je 0x11f41c4d */
  if (C.zf) goto L_11f41c4d;
L_11f41c41:;
  /* 11f41c41 push edi */
  push32((uint32_t)(EDI));
  /* 11f41c42 push esi */
  push32((uint32_t)(ESI));
  /* 11f41c43 push ebx */
  push32((uint32_t)(EBX));
  /* 11f41c44 call 0x11f41b30 */
  push32(0x11f41c49u); f_11f41b30();
  /* 11f41c49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_11f41c4b:;
  /* 11f41c4b jne 0x11f41c51 */
  if (!C.zf) goto L_11f41c51;
L_11f41c4d:;
  /* 11f41c4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f41c4f jmp 0x11f41c9f */
  goto L_11f41c9f;
L_11f41c51:;
  /* 11f41c51 push edi */
  push32((uint32_t)(EDI));
  /* 11f41c52 push esi */
  push32((uint32_t)(ESI));
  /* 11f41c53 push ebx */
  push32((uint32_t)(EBX));
  /* 11f41c54 call 0x11f41360 */
  push32(0x11f41c59u); f_11f41360();
  /* 11f41c59 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f41c5c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11f41c5f jne 0x11f41c6d */
  if (!C.zf) goto L_11f41c6d;
  /* 11f41c61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f41c63 jne 0x11f41c9c */
  if (!C.zf) goto L_11f41c9c;
  /* 11f41c65 push edi */
  push32((uint32_t)(EDI));
  /* 11f41c66 push eax */
  push32((uint32_t)(EAX));
  /* 11f41c67 push ebx */
  push32((uint32_t)(EBX));
  /* 11f41c68 call 0x11f41b30 */
  push32(0x11f41c6du); f_11f41b30();
L_11f41c6d:;
  /* 11f41c6d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f41c6f je 0x11f41c76 */
  if (C.zf) goto L_11f41c76;
  /* 11f41c71 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f41c74 jne 0x11f41c9c */
  if (!C.zf) goto L_11f41c9c;
L_11f41c76:;
  /* 11f41c76 push edi */
  push32((uint32_t)(EDI));
  /* 11f41c77 push esi */
  push32((uint32_t)(ESI));
  /* 11f41c78 push ebx */
  push32((uint32_t)(EBX));
  /* 11f41c79 call 0x11f41b30 */
  push32(0x11f41c7eu); f_11f41b30();
  /* 11f41c7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f41c80 jne 0x11f41c85 */
  if (!C.zf) goto L_11f41c85;
  /* 11f41c82 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_11f41c85:;
  /* 11f41c85 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f41c89 je 0x11f41c9c */
  if (C.zf) goto L_11f41c9c;
  /* 11f41c8b mov eax, dword ptr [0x11f46ddc] */
  EAX = (r32((uint32_t)(0x11f46ddc)));
  /* 11f41c90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f41c92 je 0x11f41c9c */
  if (C.zf) goto L_11f41c9c;
  /* 11f41c94 push edi */
  push32((uint32_t)(EDI));
  /* 11f41c95 push esi */
  push32((uint32_t)(ESI));
  /* 11f41c96 push ebx */
  push32((uint32_t)(EBX));
  /* 11f41c97 call eax */
  call_ind((uint32_t)(EAX), 0x11f41c99u);
  /* 11f41c99 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11f41c9c:;
  /* 11f41c9c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11f41c9f:;
  /* 11f41c9f pop edi */
  EDI = (pop32());
  /* 11f41ca0 pop esi */
  ESI = (pop32());
  /* 11f41ca1 pop ebx */
  EBX = (pop32());
  /* 11f41ca2 pop ebp */
  EBP = (pop32());
  /* 11f41ca3 ret 0xc */
  ESPCHK(0x11f41c09u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11f41ca6 (48 bytes, 15 insns) */
void f_11f41ca6(void) {
  FTRACE(0x11f41ca6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f41ca6 mov eax, dword ptr [0x11f46870] */
  EAX = (r32((uint32_t)(0x11f46870)));
  /* 11f41cab cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f41cae je 0x11f41cbd */
  if (C.zf) goto L_11f41cbd;
  /* 11f41cb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f41cb2 jne 0x11f41cc2 */
  if (!C.zf) goto L_11f41cc2;
  /* 11f41cb4 cmp dword ptr [0x11f46874], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f46874))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f41cbb jne 0x11f41cc2 */
  if (!C.zf) goto L_11f41cc2;
L_11f41cbd:;
  /* 11f41cbd call 0x11f42615 */
  push32(0x11f41cc2u); f_11f42615();
L_11f41cc2:;
  /* 11f41cc2 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11f41cc6 call 0x11f4264e */
  push32(0x11f41ccbu); f_11f4264e();
  /* 11f41ccb push 0xff */
  push32((uint32_t)(0xffu));
  /* 11f41cd0 call dword ptr [0x11f46364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f46364))), 0x11f41cd6u);
  /* 11f41cd6 pop ecx */
  ECX = (pop32());
  /* 11f41cd7 pop ecx */
  ECX = (pop32());
  /* 11f41cd8 ret  */
  ESPCHK(0x11f41ca6u, _esp0);
  ESP += 4; return;
}

/* FUN_10001cd9 @ 0x11f41cd9 (45 bytes, 12 insns) */
void f_11f41cd9(void) {
  FTRACE(0x11f41cd9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f41cd9 mov eax, dword ptr [0x11f46dd4] */
  EAX = (r32((uint32_t)(0x11f46dd4)));
  /* 11f41cde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f41ce0 je 0x11f41ce4 */
  if (C.zf) goto L_11f41ce4;
  /* 11f41ce2 call eax */
  call_ind((uint32_t)(EAX), 0x11f41ce4u);
L_11f41ce4:;
  /* 11f41ce4 push 0x11f46010 */
  push32((uint32_t)(0x11f46010u));
  /* 11f41ce9 push 0x11f46008 */
  push32((uint32_t)(0x11f46008u));
  /* 11f41cee call 0x11f41ddd */
  push32(0x11f41cf3u); f_11f41ddd();
  /* 11f41cf3 push 0x11f46004 */
  push32((uint32_t)(0x11f46004u));
  /* 11f41cf8 push 0x11f46000 */
  push32((uint32_t)(0x11f46000u));
  /* 11f41cfd call 0x11f41ddd */
  push32(0x11f41d02u); f_11f41ddd();
  /* 11f41d02 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41d05 ret  */
  ESPCHK(0x11f41cd9u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11f41d06 (17 bytes, 6 insns) */
void f_11f41d06(void) {
  FTRACE(0x11f41d06u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f41d06 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41d08 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f41d0a push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11f41d0e call 0x11f41d26 */
  push32(0x11f41d13u); f_11f41d26();
  /* 11f41d13 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41d16 ret  */
  ESPCHK(0x11f41d06u, _esp0);
  ESP += 4; return;
}

/* FUN_10001d17 @ 0x11f41d17 (15 bytes, 6 insns) */
void f_11f41d17(void) {
  FTRACE(0x11f41d17u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f41d17 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f41d19 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41d1b push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41d1d call 0x11f41d26 */
  push32(0x11f41d22u); f_11f41d26();
  /* 11f41d22 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41d25 ret  */
  ESPCHK(0x11f41d17u, _esp0);
  ESP += 4; return;
}

/* FUN_10001d26 @ 0x11f41d26 (163 bytes, 53 insns) */
void f_11f41d26(void) {
  FTRACE(0x11f41d26u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f41d26 push edi */
  push32((uint32_t)(EDI));
  /* 11f41d27 call 0x11f41dcb */
  push32(0x11f41d2cu); f_11f41dcb();
  /* 11f41d2c push 1 */
  push32((uint32_t)(0x1u));
  /* 11f41d2e pop edi */
  EDI = (pop32());
  /* 11f41d2f cmp dword ptr [0x11f468b8], edi */
  { uint32_t _a=(r32((uint32_t)(0x11f468b8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f41d35 jne 0x11f41d48 */
  if (!C.zf) goto L_11f41d48;
  /* 11f41d37 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11f41d3b call dword ptr [0x11f45078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45078))), 0x11f41d41u);
  /* 11f41d41 push eax */
  push32((uint32_t)(EAX));
  /* 11f41d42 call dword ptr [0x11f45074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45074))), 0x11f41d48u);
L_11f41d48:;
  /* 11f41d48 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f41d4d push ebx */
  push32((uint32_t)(EBX));
  /* 11f41d4e mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11f41d52 mov dword ptr [0x11f468b4], edi */
  w32((uint32_t)(0x11f468b4), (EDI));
  /* 11f41d58 mov byte ptr [0x11f468b0], bl */
  w8((uint32_t)(0x11f468b0), (BL));
  /* 11f41d5e jne 0x11f41d9c */
  if (!C.zf) goto L_11f41d9c;
  /* 11f41d60 mov eax, dword ptr [0x11f46dd0] */
  EAX = (r32((uint32_t)(0x11f46dd0)));
  /* 11f41d65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f41d67 je 0x11f41d8b */
  if (C.zf) goto L_11f41d8b;
  /* 11f41d69 mov ecx, dword ptr [0x11f46dcc] */
  ECX = (r32((uint32_t)(0x11f46dcc)));
  /* 11f41d6f push esi */
  push32((uint32_t)(ESI));
  /* 11f41d70 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 11f41d73 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f41d75 jb 0x11f41d8a */
  if (C.cf) goto L_11f41d8a;
L_11f41d77:;
  /* 11f41d77 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11f41d79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f41d7b je 0x11f41d7f */
  if (C.zf) goto L_11f41d7f;
  /* 11f41d7d call eax */
  call_ind((uint32_t)(EAX), 0x11f41d7fu);
L_11f41d7f:;
  /* 11f41d7f sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f41d82 cmp esi, dword ptr [0x11f46dd0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11f46dd0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f41d88 jae 0x11f41d77 */
  if (!C.cf) goto L_11f41d77;
L_11f41d8a:;
  /* 11f41d8a pop esi */
  ESI = (pop32());
L_11f41d8b:;
  /* 11f41d8b push 0x11f46018 */
  push32((uint32_t)(0x11f46018u));
  /* 11f41d90 push 0x11f46014 */
  push32((uint32_t)(0x11f46014u));
  /* 11f41d95 call 0x11f41ddd */
  push32(0x11f41d9au); f_11f41ddd();
  /* 11f41d9a pop ecx */
  ECX = (pop32());
  /* 11f41d9b pop ecx */
  ECX = (pop32());
L_11f41d9c:;
  /* 11f41d9c push 0x11f46020 */
  push32((uint32_t)(0x11f46020u));
  /* 11f41da1 push 0x11f4601c */
  push32((uint32_t)(0x11f4601cu));
  /* 11f41da6 call 0x11f41ddd */
  push32(0x11f41dabu); f_11f41ddd();
  /* 11f41dab pop ecx */
  ECX = (pop32());
  /* 11f41dac pop ecx */
  ECX = (pop32());
  /* 11f41dad test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11f41daf pop ebx */
  EBX = (pop32());
  /* 11f41db0 je 0x11f41db9 */
  if (C.zf) goto L_11f41db9;
  /* 11f41db2 call 0x11f41dd4 */
  push32(0x11f41db7u); f_11f41dd4();
  /* 11f41db7 pop edi */
  EDI = (pop32());
  /* 11f41db8 ret  */
  ESPCHK(0x11f41d26u, _esp0);
  ESP += 4; return;
L_11f41db9:;
  /* 11f41db9 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11f41dbd mov dword ptr [0x11f468b8], edi */
  w32((uint32_t)(0x11f468b8), (EDI));
  /* 11f41dc3 call dword ptr [0x11f45070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45070))), 0x11f41dc9u);
  /* 11f41dc9 pop edi */
  EDI = (pop32());
  /* 11f41dca ret  */
  ESPCHK(0x11f41d26u, _esp0);
  ESP += 4; return;
}

/* FUN_10001dcb @ 0x11f41dcb (9 bytes, 4 insns) */
void f_11f41dcb(void) {
  FTRACE(0x11f41dcbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f41dcb push 0xd */
  push32((uint32_t)(0xdu));
  /* 11f41dcd call 0x11f42836 */
  push32(0x11f41dd2u); f_11f42836();
  /* 11f41dd2 pop ecx */
  ECX = (pop32());
  /* 11f41dd3 ret  */
  ESPCHK(0x11f41dcbu, _esp0);
  ESP += 4; return;
}

/* FUN_10001dd4 @ 0x11f41dd4 (9 bytes, 4 insns) */
void f_11f41dd4(void) {
  FTRACE(0x11f41dd4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f41dd4 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11f41dd6 call 0x11f42897 */
  push32(0x11f41ddbu); f_11f42897();
  /* 11f41ddb pop ecx */
  ECX = (pop32());
  /* 11f41ddc ret  */
  ESPCHK(0x11f41dd4u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ddd @ 0x11f41ddd (26 bytes, 12 insns) */
void f_11f41ddd(void) {
  FTRACE(0x11f41dddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f41ddd push esi */
  push32((uint32_t)(ESI));
  /* 11f41dde mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_11f41de2:;
  /* 11f41de2 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f41de6 jae 0x11f41df5 */
  if (!C.cf) goto L_11f41df5;
  /* 11f41de8 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11f41dea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f41dec je 0x11f41df0 */
  if (C.zf) goto L_11f41df0;
  /* 11f41dee call eax */
  call_ind((uint32_t)(EAX), 0x11f41df0u);
L_11f41df0:;
  /* 11f41df0 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41df3 jmp 0x11f41de2 */
  goto L_11f41de2;
L_11f41df5:;
  /* 11f41df5 pop esi */
  ESI = (pop32());
  /* 11f41df6 ret  */
  ESPCHK(0x11f41dddu, _esp0);
  ESP += 4; return;
}

/* FUN_10001df7 @ 0x11f41df7 (84 bytes, 32 insns) */
void f_11f41df7(void) {
  FTRACE(0x11f41df7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f41df7 push esi */
  push32((uint32_t)(ESI));
  /* 11f41df8 call 0x11f427a1 */
  push32(0x11f41dfdu); f_11f427a1();
  /* 11f41dfd call dword ptr [0x11f45084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45084))), 0x11f41e03u);
  /* 11f41e03 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f41e06 mov dword ptr [0x11f46368], eax */
  w32((uint32_t)(0x11f46368), (EAX));
  /* 11f41e0b je 0x11f41e47 */
  if (C.zf) goto L_11f41e47;
  /* 11f41e0d push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11f41e0f push 1 */
  push32((uint32_t)(0x1u));
  /* 11f41e11 call 0x11f428ac */
  push32(0x11f41e16u); f_11f428ac();
  /* 11f41e16 mov esi, eax */
  ESI = (EAX);
  /* 11f41e18 pop ecx */
  ECX = (pop32());
  /* 11f41e19 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f41e1b pop ecx */
  ECX = (pop32());
  /* 11f41e1c je 0x11f41e47 */
  if (C.zf) goto L_11f41e47;
  /* 11f41e1e push esi */
  push32((uint32_t)(ESI));
  /* 11f41e1f push dword ptr [0x11f46368] */
  push32((uint32_t)(r32((uint32_t)(0x11f46368))));
  /* 11f41e25 call dword ptr [0x11f45080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45080))), 0x11f41e2bu);
  /* 11f41e2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f41e2d je 0x11f41e47 */
  if (C.zf) goto L_11f41e47;
  /* 11f41e2f push esi */
  push32((uint32_t)(ESI));
  /* 11f41e30 call 0x11f41e69 */
  push32(0x11f41e35u); f_11f41e69();
  /* 11f41e35 pop ecx */
  ECX = (pop32());
  /* 11f41e36 call dword ptr [0x11f4507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f4507c))), 0x11f41e3cu);
  /* 11f41e3c or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11f41e40 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f41e42 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11f41e44 pop eax */
  EAX = (pop32());
  /* 11f41e45 pop esi */
  ESI = (pop32());
  /* 11f41e46 ret  */
  ESPCHK(0x11f41df7u, _esp0);
  ESP += 4; return;
L_11f41e47:;
  /* 11f41e47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f41e49 pop esi */
  ESI = (pop32());
  /* 11f41e4a ret  */
  ESPCHK(0x11f41df7u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e4b @ 0x11f41e4b (30 bytes, 8 insns) */
void f_11f41e4b(void) {
  FTRACE(0x11f41e4bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f41e4b call 0x11f427ca */
  push32(0x11f41e50u); f_11f427ca();
  /* 11f41e50 mov eax, dword ptr [0x11f46368] */
  EAX = (r32((uint32_t)(0x11f46368)));
  /* 11f41e55 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f41e58 je 0x11f41e68 */
  if (C.zf) goto L_11f41e68;
  /* 11f41e5a push eax */
  push32((uint32_t)(EAX));
  /* 11f41e5b call dword ptr [0x11f45088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45088))), 0x11f41e61u);
  /* 11f41e61 or dword ptr [0x11f46368], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11f46368)))|(0xffffffffu); w32((uint32_t)(0x11f46368), (_r)); fl_logic(_r,32); }
L_11f41e68:;
  /* 11f41e68 ret  */
  ESPCHK(0x11f41e4bu, _esp0);
  ESP += 4; return;
}

/* FUN_10001e69 @ 0x11f41e69 (19 bytes, 4 insns) */
void f_11f41e69(void) {
  FTRACE(0x11f41e69u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f41e69 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f41e6d mov dword ptr [eax + 0x50], 0x11f464e8 */
  w32((uint32_t)(EAX + 0x50), (0x11f464e8u));
  /* 11f41e74 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 11f41e7b ret  */
  ESPCHK(0x11f41e69u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e7c @ 0x11f41e7c (160 bytes, 62 insns) */
void f_11f41e7c(void) {
  FTRACE(0x11f41e7cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f41e7c mov eax, dword ptr [0x11f46368] */
  EAX = (r32((uint32_t)(0x11f46368)));
  /* 11f41e81 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f41e84 je 0x11f41f1b */
  if (C.zf) goto L_11f41f1b;
  /* 11f41e8a push esi */
  push32((uint32_t)(ESI));
  /* 11f41e8b mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11f41e8f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f41e91 jne 0x11f41ea0 */
  if (!C.zf) goto L_11f41ea0;
  /* 11f41e93 push eax */
  push32((uint32_t)(EAX));
  /* 11f41e94 call dword ptr [0x11f45000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45000))), 0x11f41e9au);
  /* 11f41e9a mov esi, eax */
  ESI = (EAX);
  /* 11f41e9c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f41e9e je 0x11f41f0c */
  if (C.zf) goto L_11f41f0c;
L_11f41ea0:;
  /* 11f41ea0 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11f41ea3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f41ea5 je 0x11f41eae */
  if (C.zf) goto L_11f41eae;
  /* 11f41ea7 push eax */
  push32((uint32_t)(EAX));
  /* 11f41ea8 call 0x11f42939 */
  push32(0x11f41eadu); f_11f42939();
  /* 11f41ead pop ecx */
  ECX = (pop32());
L_11f41eae:;
  /* 11f41eae mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11f41eb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f41eb3 je 0x11f41ebc */
  if (C.zf) goto L_11f41ebc;
  /* 11f41eb5 push eax */
  push32((uint32_t)(EAX));
  /* 11f41eb6 call 0x11f42939 */
  push32(0x11f41ebbu); f_11f42939();
  /* 11f41ebb pop ecx */
  ECX = (pop32());
L_11f41ebc:;
  /* 11f41ebc mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 11f41ebf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f41ec1 je 0x11f41eca */
  if (C.zf) goto L_11f41eca;
  /* 11f41ec3 push eax */
  push32((uint32_t)(EAX));
  /* 11f41ec4 call 0x11f42939 */
  push32(0x11f41ec9u); f_11f42939();
  /* 11f41ec9 pop ecx */
  ECX = (pop32());
L_11f41eca:;
  /* 11f41eca mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 11f41ecd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f41ecf je 0x11f41ed8 */
  if (C.zf) goto L_11f41ed8;
  /* 11f41ed1 push eax */
  push32((uint32_t)(EAX));
  /* 11f41ed2 call 0x11f42939 */
  push32(0x11f41ed7u); f_11f42939();
  /* 11f41ed7 pop ecx */
  ECX = (pop32());
L_11f41ed8:;
  /* 11f41ed8 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 11f41edb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f41edd je 0x11f41ee6 */
  if (C.zf) goto L_11f41ee6;
  /* 11f41edf push eax */
  push32((uint32_t)(EAX));
  /* 11f41ee0 call 0x11f42939 */
  push32(0x11f41ee5u); f_11f42939();
  /* 11f41ee5 pop ecx */
  ECX = (pop32());
L_11f41ee6:;
  /* 11f41ee6 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11f41ee9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f41eeb je 0x11f41ef4 */
  if (C.zf) goto L_11f41ef4;
  /* 11f41eed push eax */
  push32((uint32_t)(EAX));
  /* 11f41eee call 0x11f42939 */
  push32(0x11f41ef3u); f_11f42939();
  /* 11f41ef3 pop ecx */
  ECX = (pop32());
L_11f41ef4:;
  /* 11f41ef4 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 11f41ef7 cmp eax, 0x11f464e8 */
  { uint32_t _a=(EAX),_b=(0x11f464e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f41efc je 0x11f41f05 */
  if (C.zf) goto L_11f41f05;
  /* 11f41efe push eax */
  push32((uint32_t)(EAX));
  /* 11f41eff call 0x11f42939 */
  push32(0x11f41f04u); f_11f42939();
  /* 11f41f04 pop ecx */
  ECX = (pop32());
L_11f41f05:;
  /* 11f41f05 push esi */
  push32((uint32_t)(ESI));
  /* 11f41f06 call 0x11f42939 */
  push32(0x11f41f0bu); f_11f42939();
  /* 11f41f0b pop ecx */
  ECX = (pop32());
L_11f41f0c:;
  /* 11f41f0c push 0 */
  push32((uint32_t)(0x0u));
  /* 11f41f0e push dword ptr [0x11f46368] */
  push32((uint32_t)(r32((uint32_t)(0x11f46368))));
  /* 11f41f14 call dword ptr [0x11f45080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45080))), 0x11f41f1au);
  /* 11f41f1a pop esi */
  ESI = (pop32());
L_11f41f1b:;
  /* 11f41f1b ret  */
  ESPCHK(0x11f41e7cu, _esp0);
  ESP += 4; return;
}

/* FUN_10001f1c @ 0x11f41f1c (444 bytes, 150 insns) */
void f_11f41f1c(void) {
  FTRACE(0x11f41f1cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f41f1c push ebp */
  push32((uint32_t)(EBP));
  /* 11f41f1d mov ebp, esp */
  EBP = (ESP);
  /* 11f41f1f sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f41f22 push ebx */
  push32((uint32_t)(EBX));
  /* 11f41f23 push esi */
  push32((uint32_t)(ESI));
  /* 11f41f24 push edi */
  push32((uint32_t)(EDI));
  /* 11f41f25 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11f41f2a call 0x11f42981 */
  push32(0x11f41f2fu); f_11f42981();
  /* 11f41f2f mov esi, eax */
  ESI = (EAX);
  /* 11f41f31 pop ecx */
  ECX = (pop32());
  /* 11f41f32 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f41f34 jne 0x11f41f3e */
  if (!C.zf) goto L_11f41f3e;
  /* 11f41f36 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11f41f38 call 0x11f41ca6 */
  push32(0x11f41f3du); f_11f41ca6();
  /* 11f41f3d pop ecx */
  ECX = (pop32());
L_11f41f3e:;
  /* 11f41f3e mov dword ptr [0x11f46cc0], esi */
  w32((uint32_t)(0x11f46cc0), (ESI));
  /* 11f41f44 mov dword ptr [0x11f46dc0], 0x20 */
  w32((uint32_t)(0x11f46dc0), (0x20u));
  /* 11f41f4e lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_11f41f54:;
  /* 11f41f54 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f41f56 jae 0x11f41f76 */
  if (!C.cf) goto L_11f41f76;
  /* 11f41f58 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11f41f5c or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11f41f5f and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11f41f63 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 11f41f67 mov eax, dword ptr [0x11f46cc0] */
  EAX = (r32((uint32_t)(0x11f46cc0)));
  /* 11f41f6c add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41f6f add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41f74 jmp 0x11f41f54 */
  goto L_11f41f54;
L_11f41f76:;
  /* 11f41f76 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 11f41f79 push eax */
  push32((uint32_t)(EAX));
  /* 11f41f7a call dword ptr [0x11f4509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f4509c))), 0x11f41f80u);
  /* 11f41f80 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f41f85 je 0x11f4205c */
  if (C.zf) goto L_11f4205c;
  /* 11f41f8b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f41f8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f41f90 je 0x11f4205c */
  if (C.zf) goto L_11f4205c;
  /* 11f41f96 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 11f41f98 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 11f41f9b lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 11f41f9e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f41fa1 mov eax, 0x800 */
  EAX = (0x800u);
  /* 11f41fa6 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f41fa8 jl 0x11f41fac */
  if ((C.sf!=C.of)) goto L_11f41fac;
  /* 11f41faa mov edi, eax */
  EDI = (EAX);
L_11f41fac:;
  /* 11f41fac cmp dword ptr [0x11f46dc0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11f46dc0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f41fb2 jge 0x11f4200a */
  if ((C.sf==C.of)) goto L_11f4200a;
  /* 11f41fb4 mov esi, 0x11f46cc4 */
  ESI = (0x11f46cc4u);
L_11f41fb9:;
  /* 11f41fb9 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11f41fbe call 0x11f42981 */
  push32(0x11f41fc3u); f_11f42981();
  /* 11f41fc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f41fc5 pop ecx */
  ECX = (pop32());
  /* 11f41fc6 je 0x11f42004 */
  if (C.zf) goto L_11f42004;
  /* 11f41fc8 add dword ptr [0x11f46dc0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11f46dc0))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x11f46dc0), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f41fcf mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11f41fd1 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_11f41fd7:;
  /* 11f41fd7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f41fd9 jae 0x11f41ff7 */
  if (!C.cf) goto L_11f41ff7;
  /* 11f41fdb and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 11f41fdf or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11f41fe2 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11f41fe6 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11f41fea mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11f41fec add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41fef add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41ff5 jmp 0x11f41fd7 */
  goto L_11f41fd7;
L_11f41ff7:;
  /* 11f41ff7 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f41ffa cmp dword ptr [0x11f46dc0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11f46dc0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42000 jl 0x11f41fb9 */
  if ((C.sf!=C.of)) goto L_11f41fb9;
  /* 11f42002 jmp 0x11f4200a */
  goto L_11f4200a;
L_11f42004:;
  /* 11f42004 mov edi, dword ptr [0x11f46dc0] */
  EDI = (r32((uint32_t)(0x11f46dc0)));
L_11f4200a:;
  /* 11f4200a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11f4200c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f4200e jle 0x11f4205c */
  if ((C.zf||C.sf!=C.of)) goto L_11f4205c;
L_11f42010:;
  /* 11f42010 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f42013 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f42015 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42018 je 0x11f42052 */
  if (C.zf) goto L_11f42052;
  /* 11f4201a mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 11f4201c test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11f4201e je 0x11f42052 */
  if (C.zf) goto L_11f42052;
  /* 11f42020 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11f42022 jne 0x11f4202f */
  if (!C.zf) goto L_11f4202f;
  /* 11f42024 push ecx */
  push32((uint32_t)(ECX));
  /* 11f42025 call dword ptr [0x11f45098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45098))), 0x11f4202bu);
  /* 11f4202b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f4202d je 0x11f42052 */
  if (C.zf) goto L_11f42052;
L_11f4202f:;
  /* 11f4202f mov ecx, esi */
  ECX = (ESI);
  /* 11f42031 mov eax, esi */
  EAX = (ESI);
  /* 11f42033 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f42036 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11f42039 mov ecx, dword ptr [ecx*4 + 0x11f46cc0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11f46cc0)));
  /* 11f42040 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11f42043 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11f42046 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f42049 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11f4204b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11f4204d mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 11f4204f mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_11f42052:;
  /* 11f42052 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f42056 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f42057 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11f42058 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f4205a jl 0x11f42010 */
  if ((C.sf!=C.of)) goto L_11f42010;
L_11f4205c:;
  /* 11f4205c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11f4205e:;
  /* 11f4205e mov ecx, dword ptr [0x11f46cc0] */
  ECX = (r32((uint32_t)(0x11f46cc0)));
  /* 11f42064 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 11f42067 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f4206b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11f4206e jne 0x11f420bd */
  if (!C.zf) goto L_11f420bd;
  /* 11f42070 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11f42072 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 11f42076 jne 0x11f4207d */
  if (!C.zf) goto L_11f4207d;
  /* 11f42078 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11f4207a pop eax */
  EAX = (pop32());
  /* 11f4207b jmp 0x11f42087 */
  goto L_11f42087;
L_11f4207d:;
  /* 11f4207d mov eax, ebx */
  EAX = (EBX);
  /* 11f4207f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f42080 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f42082 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f42084 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11f42087:;
  /* 11f42087 push eax */
  push32((uint32_t)(EAX));
  /* 11f42088 call dword ptr [0x11f4508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f4508c))), 0x11f4208eu);
  /* 11f4208e mov edi, eax */
  EDI = (EAX);
  /* 11f42090 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42093 je 0x11f420ac */
  if (C.zf) goto L_11f420ac;
  /* 11f42095 push edi */
  push32((uint32_t)(EDI));
  /* 11f42096 call dword ptr [0x11f45098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45098))), 0x11f4209cu);
  /* 11f4209c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f4209e je 0x11f420ac */
  if (C.zf) goto L_11f420ac;
  /* 11f420a0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f420a5 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11f420a7 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f420aa jne 0x11f420b2 */
  if (!C.zf) goto L_11f420b2;
L_11f420ac:;
  /* 11f420ac or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11f420b0 jmp 0x11f420c1 */
  goto L_11f420c1;
L_11f420b2:;
  /* 11f420b2 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f420b5 jne 0x11f420c1 */
  if (!C.zf) goto L_11f420c1;
  /* 11f420b7 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11f420bb jmp 0x11f420c1 */
  goto L_11f420c1;
L_11f420bd:;
  /* 11f420bd or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_11f420c1:;
  /* 11f420c1 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11f420c2 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f420c5 jl 0x11f4205e */
  if ((C.sf!=C.of)) goto L_11f4205e;
  /* 11f420c7 push dword ptr [0x11f46dc0] */
  push32((uint32_t)(r32((uint32_t)(0x11f46dc0))));
  /* 11f420cd call dword ptr [0x11f45094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45094))), 0x11f420d3u);
  /* 11f420d3 pop edi */
  EDI = (pop32());
  /* 11f420d4 pop esi */
  ESI = (pop32());
  /* 11f420d5 pop ebx */
  EBX = (pop32());
  /* 11f420d6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f420d7 ret  */
  ESPCHK(0x11f41f1cu, _esp0);
  ESP += 4; return;
}

/* FUN_100020d8 @ 0x11f420d8 (84 bytes, 33 insns) */
void f_11f420d8(void) {
  FTRACE(0x11f420d8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f420d8 push ebx */
  push32((uint32_t)(EBX));
  /* 11f420d9 push esi */
  push32((uint32_t)(ESI));
  /* 11f420da push edi */
  push32((uint32_t)(EDI));
  /* 11f420db mov esi, 0x11f46cc0 */
  ESI = (0x11f46cc0u);
L_11f420e0:;
  /* 11f420e0 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11f420e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f420e4 je 0x11f4211d */
  if (C.zf) goto L_11f4211d;
  /* 11f420e6 mov edi, eax */
  EDI = (EAX);
  /* 11f420e8 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f420ed cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f420ef jae 0x11f42112 */
  if (!C.cf) goto L_11f42112;
  /* 11f420f1 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_11f420f4:;
  /* 11f420f4 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f420f8 je 0x11f42101 */
  if (C.zf) goto L_11f42101;
  /* 11f420fa push ebx */
  push32((uint32_t)(EBX));
  /* 11f420fb call dword ptr [0x11f450a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f450a0))), 0x11f42101u);
L_11f42101:;
  /* 11f42101 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11f42103 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f42106 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f4210b add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f4210e cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42110 jb 0x11f420f4 */
  if (C.cf) goto L_11f420f4;
L_11f42112:;
  /* 11f42112 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11f42114 call 0x11f42939 */
  push32(0x11f42119u); f_11f42939();
  /* 11f42119 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11f4211c pop ecx */
  ECX = (pop32());
L_11f4211d:;
  /* 11f4211d add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f42120 cmp esi, 0x11f46dc0 */
  { uint32_t _a=(ESI),_b=(0x11f46dc0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42126 jl 0x11f420e0 */
  if ((C.sf!=C.of)) goto L_11f420e0;
  /* 11f42128 pop edi */
  EDI = (pop32());
  /* 11f42129 pop esi */
  ESI = (pop32());
  /* 11f4212a pop ebx */
  EBX = (pop32());
  /* 11f4212b ret  */
  ESPCHK(0x11f420d8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000212c @ 0x11f4212c (185 bytes, 71 insns) */
void f_11f4212c(void) {
  FTRACE(0x11f4212cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f4212c push ebx */
  push32((uint32_t)(EBX));
  /* 11f4212d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f4212f cmp dword ptr [0x11f46dc8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11f46dc8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42135 push esi */
  push32((uint32_t)(ESI));
  /* 11f42136 push edi */
  push32((uint32_t)(EDI));
  /* 11f42137 jne 0x11f4213e */
  if (!C.zf) goto L_11f4213e;
  /* 11f42139 call 0x11f42f53 */
  push32(0x11f4213eu); f_11f42f53();
L_11f4213e:;
  /* 11f4213e mov esi, dword ptr [0x11f46868] */
  ESI = (r32((uint32_t)(0x11f46868)));
  /* 11f42144 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11f42146:;
  /* 11f42146 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f42148 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f4214a je 0x11f4215e */
  if (C.zf) goto L_11f4215e;
  /* 11f4214c cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f4214e je 0x11f42151 */
  if (C.zf) goto L_11f42151;
  /* 11f42150 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11f42151:;
  /* 11f42151 push esi */
  push32((uint32_t)(ESI));
  /* 11f42152 call 0x11f42b00 */
  push32(0x11f42157u); f_11f42b00();
  /* 11f42157 pop ecx */
  ECX = (pop32());
  /* 11f42158 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 11f4215c jmp 0x11f42146 */
  goto L_11f42146;
L_11f4215e:;
  /* 11f4215e lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 11f42165 push eax */
  push32((uint32_t)(EAX));
  /* 11f42166 call 0x11f42981 */
  push32(0x11f4216bu); f_11f42981();
  /* 11f4216b mov esi, eax */
  ESI = (EAX);
  /* 11f4216d pop ecx */
  ECX = (pop32());
  /* 11f4216e cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42170 mov dword ptr [0x11f46898], esi */
  w32((uint32_t)(0x11f46898), (ESI));
  /* 11f42176 jne 0x11f42180 */
  if (!C.zf) goto L_11f42180;
  /* 11f42178 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f4217a call 0x11f41ca6 */
  push32(0x11f4217fu); f_11f41ca6();
  /* 11f4217f pop ecx */
  ECX = (pop32());
L_11f42180:;
  /* 11f42180 mov edi, dword ptr [0x11f46868] */
  EDI = (r32((uint32_t)(0x11f46868)));
  /* 11f42186 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f42188 je 0x11f421c3 */
  if (C.zf) goto L_11f421c3;
  /* 11f4218a push ebp */
  push32((uint32_t)(EBP));
L_11f4218b:;
  /* 11f4218b push edi */
  push32((uint32_t)(EDI));
  /* 11f4218c call 0x11f42b00 */
  push32(0x11f42191u); f_11f42b00();
  /* 11f42191 mov ebp, eax */
  EBP = (EAX);
  /* 11f42193 pop ecx */
  ECX = (pop32());
  /* 11f42194 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11f42195 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f42198 je 0x11f421bc */
  if (C.zf) goto L_11f421bc;
  /* 11f4219a push ebp */
  push32((uint32_t)(EBP));
  /* 11f4219b call 0x11f42981 */
  push32(0x11f421a0u); f_11f42981();
  /* 11f421a0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f421a2 pop ecx */
  ECX = (pop32());
  /* 11f421a3 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11f421a5 jne 0x11f421af */
  if (!C.zf) goto L_11f421af;
  /* 11f421a7 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f421a9 call 0x11f41ca6 */
  push32(0x11f421aeu); f_11f41ca6();
  /* 11f421ae pop ecx */
  ECX = (pop32());
L_11f421af:;
  /* 11f421af push edi */
  push32((uint32_t)(EDI));
  /* 11f421b0 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11f421b2 call 0x11f42a10 */
  push32(0x11f421b7u); f_11f42a10();
  /* 11f421b7 pop ecx */
  ECX = (pop32());
  /* 11f421b8 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f421bb pop ecx */
  ECX = (pop32());
L_11f421bc:;
  /* 11f421bc add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f421be cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f421c0 jne 0x11f4218b */
  if (!C.zf) goto L_11f4218b;
  /* 11f421c2 pop ebp */
  EBP = (pop32());
L_11f421c3:;
  /* 11f421c3 push dword ptr [0x11f46868] */
  push32((uint32_t)(r32((uint32_t)(0x11f46868))));
  /* 11f421c9 call 0x11f42939 */
  push32(0x11f421ceu); f_11f42939();
  /* 11f421ce pop ecx */
  ECX = (pop32());
  /* 11f421cf mov dword ptr [0x11f46868], ebx */
  w32((uint32_t)(0x11f46868), (EBX));
  /* 11f421d5 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 11f421d7 pop edi */
  EDI = (pop32());
  /* 11f421d8 pop esi */
  ESI = (pop32());
  /* 11f421d9 mov dword ptr [0x11f46dc4], 1 */
  w32((uint32_t)(0x11f46dc4), (0x1u));
  /* 11f421e3 pop ebx */
  EBX = (pop32());
  /* 11f421e4 ret  */
  ESPCHK(0x11f4212cu, _esp0);
  ESP += 4; return;
}

/* FUN_100021e5 @ 0x11f421e5 (153 bytes, 62 insns) */
void f_11f421e5(void) {
  FTRACE(0x11f421e5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f421e5 push ebp */
  push32((uint32_t)(EBP));
  /* 11f421e6 mov ebp, esp */
  EBP = (ESP);
  /* 11f421e8 push ecx */
  push32((uint32_t)(ECX));
  /* 11f421e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11f421ea push ebx */
  push32((uint32_t)(EBX));
  /* 11f421eb xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f421ed cmp dword ptr [0x11f46dc8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11f46dc8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f421f3 push esi */
  push32((uint32_t)(ESI));
  /* 11f421f4 push edi */
  push32((uint32_t)(EDI));
  /* 11f421f5 jne 0x11f421fc */
  if (!C.zf) goto L_11f421fc;
  /* 11f421f7 call 0x11f42f53 */
  push32(0x11f421fcu); f_11f42f53();
L_11f421fc:;
  /* 11f421fc mov esi, 0x11f468bc */
  ESI = (0x11f468bcu);
  /* 11f42201 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11f42206 push esi */
  push32((uint32_t)(ESI));
  /* 11f42207 push ebx */
  push32((uint32_t)(EBX));
  /* 11f42208 call dword ptr [0x11f450a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f450a4))), 0x11f4220eu);
  /* 11f4220e mov eax, dword ptr [0x11f46dd8] */
  EAX = (r32((uint32_t)(0x11f46dd8)));
  /* 11f42213 mov dword ptr [0x11f468a8], esi */
  w32((uint32_t)(0x11f468a8), (ESI));
  /* 11f42219 mov edi, esi */
  EDI = (ESI);
  /* 11f4221b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f4221d je 0x11f42221 */
  if (C.zf) goto L_11f42221;
  /* 11f4221f mov edi, eax */
  EDI = (EAX);
L_11f42221:;
  /* 11f42221 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11f42224 push eax */
  push32((uint32_t)(EAX));
  /* 11f42225 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11f42228 push eax */
  push32((uint32_t)(EAX));
  /* 11f42229 push ebx */
  push32((uint32_t)(EBX));
  /* 11f4222a push ebx */
  push32((uint32_t)(EBX));
  /* 11f4222b push edi */
  push32((uint32_t)(EDI));
  /* 11f4222c call 0x11f4227e */
  push32(0x11f42231u); f_11f4227e();
  /* 11f42231 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f42234 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f42237 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11f4223a push eax */
  push32((uint32_t)(EAX));
  /* 11f4223b call 0x11f42981 */
  push32(0x11f42240u); f_11f42981();
  /* 11f42240 mov esi, eax */
  ESI = (EAX);
  /* 11f42242 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f42245 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42247 jne 0x11f42251 */
  if (!C.zf) goto L_11f42251;
  /* 11f42249 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f4224b call 0x11f41ca6 */
  push32(0x11f42250u); f_11f41ca6();
  /* 11f42250 pop ecx */
  ECX = (pop32());
L_11f42251:;
  /* 11f42251 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11f42254 push eax */
  push32((uint32_t)(EAX));
  /* 11f42255 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11f42258 push eax */
  push32((uint32_t)(EAX));
  /* 11f42259 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f4225c lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 11f4225f push eax */
  push32((uint32_t)(EAX));
  /* 11f42260 push esi */
  push32((uint32_t)(ESI));
  /* 11f42261 push edi */
  push32((uint32_t)(EDI));
  /* 11f42262 call 0x11f4227e */
  push32(0x11f42267u); f_11f4227e();
  /* 11f42267 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f4226a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f4226d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f4226e mov dword ptr [0x11f46890], esi */
  w32((uint32_t)(0x11f46890), (ESI));
  /* 11f42274 pop edi */
  EDI = (pop32());
  /* 11f42275 pop esi */
  ESI = (pop32());
  /* 11f42276 mov dword ptr [0x11f4688c], eax */
  w32((uint32_t)(0x11f4688c), (EAX));
  /* 11f4227b pop ebx */
  EBX = (pop32());
  /* 11f4227c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f4227d ret  */
  ESPCHK(0x11f421e5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000227e @ 0x11f4227e (436 bytes, 187 insns) */
void f_11f4227e(void) {
  FTRACE(0x11f4227eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f4227e push ebp */
  push32((uint32_t)(EBP));
  /* 11f4227f mov ebp, esp */
  EBP = (ESP);
  /* 11f42281 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f42284 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f42287 push ebx */
  push32((uint32_t)(EBX));
  /* 11f42288 push esi */
  push32((uint32_t)(ESI));
  /* 11f42289 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11f4228c mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11f4228f push edi */
  push32((uint32_t)(EDI));
  /* 11f42290 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f42293 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11f42299 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f4229c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f4229e je 0x11f422a8 */
  if (C.zf) goto L_11f422a8;
  /* 11f422a0 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11f422a2 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f422a5 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11f422a8:;
  /* 11f422a8 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f422ab jne 0x11f422f1 */
  if (!C.zf) goto L_11f422f1;
L_11f422ad:;
  /* 11f422ad mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11f422b0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f422b1 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f422b4 je 0x11f422df */
  if (C.zf) goto L_11f422df;
  /* 11f422b6 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f422b8 je 0x11f422df */
  if (C.zf) goto L_11f422df;
  /* 11f422ba movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11f422bd test byte ptr [edx + 0x11f46ba1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11f46ba1)))&(0x4u); fl_logic(_r,8); }
  /* 11f422c4 je 0x11f422d2 */
  if (C.zf) goto L_11f422d2;
  /* 11f422c6 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11f422c8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f422ca je 0x11f422d2 */
  if (C.zf) goto L_11f422d2;
  /* 11f422cc mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11f422ce mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11f422d0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f422d1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11f422d2:;
  /* 11f422d2 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11f422d4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f422d6 je 0x11f422ad */
  if (C.zf) goto L_11f422ad;
  /* 11f422d8 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11f422da mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11f422dc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f422dd jmp 0x11f422ad */
  goto L_11f422ad;
L_11f422df:;
  /* 11f422df inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11f422e1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f422e3 je 0x11f422e9 */
  if (C.zf) goto L_11f422e9;
  /* 11f422e5 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11f422e8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11f422e9:;
  /* 11f422e9 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f422ec jne 0x11f42334 */
  if (!C.zf) goto L_11f42334;
  /* 11f422ee inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f422ef jmp 0x11f42334 */
  goto L_11f42334;
L_11f422f1:;
  /* 11f422f1 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11f422f3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f422f5 je 0x11f422fc */
  if (C.zf) goto L_11f422fc;
  /* 11f422f7 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11f422f9 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11f422fb inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11f422fc:;
  /* 11f422fc mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11f422fe inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f422ff movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11f42302 test byte ptr [ebx + 0x11f46ba1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11f46ba1)))&(0x4u); fl_logic(_r,8); }
  /* 11f42309 je 0x11f42317 */
  if (C.zf) goto L_11f42317;
  /* 11f4230b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11f4230d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f4230f je 0x11f42316 */
  if (C.zf) goto L_11f42316;
  /* 11f42311 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11f42313 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 11f42315 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11f42316:;
  /* 11f42316 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11f42317:;
  /* 11f42317 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f4231a je 0x11f42325 */
  if (C.zf) goto L_11f42325;
  /* 11f4231c test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f4231e je 0x11f42329 */
  if (C.zf) goto L_11f42329;
  /* 11f42320 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f42323 jne 0x11f422f1 */
  if (!C.zf) goto L_11f422f1;
L_11f42325:;
  /* 11f42325 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f42327 jne 0x11f4232c */
  if (!C.zf) goto L_11f4232c;
L_11f42329:;
  /* 11f42329 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f4232a jmp 0x11f42334 */
  goto L_11f42334;
L_11f4232c:;
  /* 11f4232c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f4232e je 0x11f42334 */
  if (C.zf) goto L_11f42334;
  /* 11f42330 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_11f42334:;
  /* 11f42334 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_11f42338:;
  /* 11f42338 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f4233b je 0x11f42421 */
  if (C.zf) goto L_11f42421;
L_11f42341:;
  /* 11f42341 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11f42343 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f42346 je 0x11f4234d */
  if (C.zf) goto L_11f4234d;
  /* 11f42348 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f4234b jne 0x11f42350 */
  if (!C.zf) goto L_11f42350;
L_11f4234d:;
  /* 11f4234d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f4234e jmp 0x11f42341 */
  goto L_11f42341;
L_11f42350:;
  /* 11f42350 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f42353 je 0x11f42421 */
  if (C.zf) goto L_11f42421;
  /* 11f42359 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f4235b je 0x11f42365 */
  if (C.zf) goto L_11f42365;
  /* 11f4235d mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11f4235f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f42362 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11f42365:;
  /* 11f42365 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f42368 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_11f4236a:;
  /* 11f4236a mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 11f42371 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11f42373:;
  /* 11f42373 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f42376 jne 0x11f4237c */
  if (!C.zf) goto L_11f4237c;
  /* 11f42378 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f42379 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11f4237a jmp 0x11f42373 */
  goto L_11f42373;
L_11f4237c:;
  /* 11f4237c cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f4237f jne 0x11f423ad */
  if (!C.zf) goto L_11f423ad;
  /* 11f42381 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11f42384 jne 0x11f423ab */
  if (!C.zf) goto L_11f423ab;
  /* 11f42386 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f42388 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f4238b je 0x11f4239a */
  if (C.zf) goto L_11f4239a;
  /* 11f4238d cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f42391 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 11f42394 jne 0x11f4239a */
  if (!C.zf) goto L_11f4239a;
  /* 11f42396 mov eax, edx */
  EAX = (EDX);
  /* 11f42398 jmp 0x11f4239d */
  goto L_11f4239d;
L_11f4239a:;
  /* 11f4239a mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_11f4239d:;
  /* 11f4239d mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f423a0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f423a2 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f423a5 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11f423a8 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11f423ab:;
  /* 11f423ab shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_11f423ad:;
  /* 11f423ad mov edx, ebx */
  EDX = (EBX);
  /* 11f423af dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11f423b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f423b2 je 0x11f423c2 */
  if (C.zf) goto L_11f423c2;
  /* 11f423b4 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11f423b5:;
  /* 11f423b5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f423b7 je 0x11f423bd */
  if (C.zf) goto L_11f423bd;
  /* 11f423b9 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 11f423bc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11f423bd:;
  /* 11f423bd inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11f423bf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11f423c0 jne 0x11f423b5 */
  if (!C.zf) goto L_11f423b5;
L_11f423c2:;
  /* 11f423c2 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11f423c4 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f423c6 je 0x11f42412 */
  if (C.zf) goto L_11f42412;
  /* 11f423c8 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f423cc jne 0x11f423d8 */
  if (!C.zf) goto L_11f423d8;
  /* 11f423ce cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f423d1 je 0x11f42412 */
  if (C.zf) goto L_11f42412;
  /* 11f423d3 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f423d6 je 0x11f42412 */
  if (C.zf) goto L_11f42412;
L_11f423d8:;
  /* 11f423d8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f423dc je 0x11f4240c */
  if (C.zf) goto L_11f4240c;
  /* 11f423de test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f423e0 je 0x11f423fb */
  if (C.zf) goto L_11f423fb;
  /* 11f423e2 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11f423e5 test byte ptr [ebx + 0x11f46ba1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11f46ba1)))&(0x4u); fl_logic(_r,8); }
  /* 11f423ec je 0x11f423f4 */
  if (C.zf) goto L_11f423f4;
  /* 11f423ee mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11f423f0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f423f1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f423f2 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11f423f4:;
  /* 11f423f4 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11f423f6 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11f423f8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f423f9 jmp 0x11f4240a */
  goto L_11f4240a;
L_11f423fb:;
  /* 11f423fb movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11f423fe test byte ptr [edx + 0x11f46ba1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11f46ba1)))&(0x4u); fl_logic(_r,8); }
  /* 11f42405 je 0x11f4240a */
  if (C.zf) goto L_11f4240a;
  /* 11f42407 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f42408 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11f4240a:;
  /* 11f4240a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11f4240c:;
  /* 11f4240c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f4240d jmp 0x11f4236a */
  goto L_11f4236a;
L_11f42412:;
  /* 11f42412 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f42414 je 0x11f4241a */
  if (C.zf) goto L_11f4241a;
  /* 11f42416 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11f42419 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11f4241a:;
  /* 11f4241a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11f4241c jmp 0x11f42338 */
  goto L_11f42338;
L_11f42421:;
  /* 11f42421 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f42423 je 0x11f42428 */
  if (C.zf) goto L_11f42428;
  /* 11f42425 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11f42428:;
  /* 11f42428 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f4242b pop edi */
  EDI = (pop32());
  /* 11f4242c pop esi */
  ESI = (pop32());
  /* 11f4242d pop ebx */
  EBX = (pop32());
  /* 11f4242e inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 11f42430 pop ebp */
  EBP = (pop32());
  /* 11f42431 ret  */
  ESPCHK(0x11f4227eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002432 @ 0x11f42432 (306 bytes, 132 insns) */
void f_11f42432(void) {
  FTRACE(0x11f42432u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f42432 push ecx */
  push32((uint32_t)(ECX));
  /* 11f42433 push ecx */
  push32((uint32_t)(ECX));
  /* 11f42434 mov eax, dword ptr [0x11f469c0] */
  EAX = (r32((uint32_t)(0x11f469c0)));
  /* 11f42439 push ebx */
  push32((uint32_t)(EBX));
  /* 11f4243a push ebp */
  push32((uint32_t)(EBP));
  /* 11f4243b mov ebp, dword ptr [0x11f45058] */
  EBP = (r32((uint32_t)(0x11f45058)));
  /* 11f42441 push esi */
  push32((uint32_t)(ESI));
  /* 11f42442 push edi */
  push32((uint32_t)(EDI));
  /* 11f42443 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f42445 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11f42447 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f42449 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f4244b jne 0x11f42480 */
  if (!C.zf) goto L_11f42480;
  /* 11f4244d call ebp */
  call_ind((uint32_t)(EBP), 0x11f4244fu);
  /* 11f4244f mov esi, eax */
  ESI = (EAX);
  /* 11f42451 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42453 je 0x11f42461 */
  if (C.zf) goto L_11f42461;
  /* 11f42455 mov dword ptr [0x11f469c0], 1 */
  w32((uint32_t)(0x11f469c0), (0x1u));
  /* 11f4245f jmp 0x11f42489 */
  goto L_11f42489;
L_11f42461:;
  /* 11f42461 call dword ptr [0x11f45090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45090))), 0x11f42467u);
  /* 11f42467 mov edi, eax */
  EDI = (EAX);
  /* 11f42469 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f4246b je 0x11f4255b */
  if (C.zf) goto L_11f4255b;
  /* 11f42471 mov dword ptr [0x11f469c0], 2 */
  w32((uint32_t)(0x11f469c0), (0x2u));
  /* 11f4247b jmp 0x11f4250f */
  goto L_11f4250f;
L_11f42480:;
  /* 11f42480 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42483 jne 0x11f4250a */
  if (!C.zf) goto L_11f4250a;
L_11f42489:;
  /* 11f42489 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f4248b jne 0x11f42499 */
  if (!C.zf) goto L_11f42499;
  /* 11f4248d call ebp */
  call_ind((uint32_t)(EBP), 0x11f4248fu);
  /* 11f4248f mov esi, eax */
  ESI = (EAX);
  /* 11f42491 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42493 je 0x11f4255b */
  if (C.zf) goto L_11f4255b;
L_11f42499:;
  /* 11f42499 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f4249c mov eax, esi */
  EAX = (ESI);
  /* 11f4249e je 0x11f424ae */
  if (C.zf) goto L_11f424ae;
L_11f424a0:;
  /* 11f424a0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f424a1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f424a2 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f424a5 jne 0x11f424a0 */
  if (!C.zf) goto L_11f424a0;
  /* 11f424a7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f424a8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f424a9 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f424ac jne 0x11f424a0 */
  if (!C.zf) goto L_11f424a0;
L_11f424ae:;
  /* 11f424ae sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f424b0 mov edi, dword ptr [0x11f45060] */
  EDI = (r32((uint32_t)(0x11f45060)));
  /* 11f424b6 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11f424b8 push ebx */
  push32((uint32_t)(EBX));
  /* 11f424b9 push ebx */
  push32((uint32_t)(EBX));
  /* 11f424ba inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f424bb push ebx */
  push32((uint32_t)(EBX));
  /* 11f424bc push ebx */
  push32((uint32_t)(EBX));
  /* 11f424bd push eax */
  push32((uint32_t)(EAX));
  /* 11f424be push esi */
  push32((uint32_t)(ESI));
  /* 11f424bf push ebx */
  push32((uint32_t)(EBX));
  /* 11f424c0 push ebx */
  push32((uint32_t)(EBX));
  /* 11f424c1 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 11f424c5 call edi */
  call_ind((uint32_t)(EDI), 0x11f424c7u);
  /* 11f424c7 mov ebp, eax */
  EBP = (EAX);
  /* 11f424c9 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f424cb je 0x11f424ff */
  if (C.zf) goto L_11f424ff;
  /* 11f424cd push ebp */
  push32((uint32_t)(EBP));
  /* 11f424ce call 0x11f42981 */
  push32(0x11f424d3u); f_11f42981();
  /* 11f424d3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f424d5 pop ecx */
  ECX = (pop32());
  /* 11f424d6 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11f424da je 0x11f424ff */
  if (C.zf) goto L_11f424ff;
  /* 11f424dc push ebx */
  push32((uint32_t)(EBX));
  /* 11f424dd push ebx */
  push32((uint32_t)(EBX));
  /* 11f424de push ebp */
  push32((uint32_t)(EBP));
  /* 11f424df push eax */
  push32((uint32_t)(EAX));
  /* 11f424e0 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11f424e4 push esi */
  push32((uint32_t)(ESI));
  /* 11f424e5 push ebx */
  push32((uint32_t)(EBX));
  /* 11f424e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11f424e7 call edi */
  call_ind((uint32_t)(EDI), 0x11f424e9u);
  /* 11f424e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f424eb jne 0x11f424fb */
  if (!C.zf) goto L_11f424fb;
  /* 11f424ed push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11f424f1 call 0x11f42939 */
  push32(0x11f424f6u); f_11f42939();
  /* 11f424f6 pop ecx */
  ECX = (pop32());
  /* 11f424f7 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_11f424fb:;
  /* 11f424fb mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11f424ff:;
  /* 11f424ff push esi */
  push32((uint32_t)(ESI));
  /* 11f42500 call dword ptr [0x11f45064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45064))), 0x11f42506u);
  /* 11f42506 mov eax, ebx */
  EAX = (EBX);
  /* 11f42508 jmp 0x11f4255d */
  goto L_11f4255d;
L_11f4250a:;
  /* 11f4250a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f4250d jne 0x11f4255b */
  if (!C.zf) goto L_11f4255b;
L_11f4250f:;
  /* 11f4250f cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42511 jne 0x11f4251f */
  if (!C.zf) goto L_11f4251f;
  /* 11f42513 call dword ptr [0x11f45090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45090))), 0x11f42519u);
  /* 11f42519 mov edi, eax */
  EDI = (EAX);
  /* 11f4251b cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f4251d je 0x11f4255b */
  if (C.zf) goto L_11f4255b;
L_11f4251f:;
  /* 11f4251f cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f42521 mov eax, edi */
  EAX = (EDI);
  /* 11f42523 je 0x11f4252f */
  if (C.zf) goto L_11f4252f;
L_11f42525:;
  /* 11f42525 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f42526 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f42528 jne 0x11f42525 */
  if (!C.zf) goto L_11f42525;
  /* 11f4252a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f4252b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f4252d jne 0x11f42525 */
  if (!C.zf) goto L_11f42525;
L_11f4252f:;
  /* 11f4252f sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f42531 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f42532 mov ebp, eax */
  EBP = (EAX);
  /* 11f42534 push ebp */
  push32((uint32_t)(EBP));
  /* 11f42535 call 0x11f42981 */
  push32(0x11f4253au); f_11f42981();
  /* 11f4253a mov esi, eax */
  ESI = (EAX);
  /* 11f4253c pop ecx */
  ECX = (pop32());
  /* 11f4253d cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f4253f jne 0x11f42545 */
  if (!C.zf) goto L_11f42545;
  /* 11f42541 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11f42543 jmp 0x11f42550 */
  goto L_11f42550;
L_11f42545:;
  /* 11f42545 push ebp */
  push32((uint32_t)(EBP));
  /* 11f42546 push edi */
  push32((uint32_t)(EDI));
  /* 11f42547 push esi */
  push32((uint32_t)(ESI));
  /* 11f42548 call 0x11f42f70 */
  push32(0x11f4254du); f_11f42f70();
  /* 11f4254d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f42550:;
  /* 11f42550 push edi */
  push32((uint32_t)(EDI));
  /* 11f42551 call dword ptr [0x11f450a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f450a8))), 0x11f42557u);
  /* 11f42557 mov eax, esi */
  EAX = (ESI);
  /* 11f42559 jmp 0x11f4255d */
  goto L_11f4255d;
L_11f4255b:;
  /* 11f4255b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f4255d:;
  /* 11f4255d pop edi */
  EDI = (pop32());
  /* 11f4255e pop esi */
  ESI = (pop32());
  /* 11f4255f pop ebp */
  EBP = (pop32());
  /* 11f42560 pop ebx */
  EBX = (pop32());
  /* 11f42561 pop ecx */
  ECX = (pop32());
  /* 11f42562 pop ecx */
  ECX = (pop32());
  /* 11f42563 ret  */
  ESPCHK(0x11f42432u, _esp0);
  ESP += 4; return;
}

/* FUN_10002564 @ 0x11f42564 (60 bytes, 20 insns) */
void f_11f42564(void) {
  FTRACE(0x11f42564u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f42564 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f42566 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f42568 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f4256c push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11f42571 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11f42574 push eax */
  push32((uint32_t)(EAX));
  /* 11f42575 call dword ptr [0x11f4505c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f4505c))), 0x11f4257bu);
  /* 11f4257b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f4257d mov dword ptr [0x11f46ca8], eax */
  w32((uint32_t)(0x11f46ca8), (EAX));
  /* 11f42582 je 0x11f42599 */
  if (C.zf) goto L_11f42599;
  /* 11f42584 call 0x11f432a5 */
  push32(0x11f42589u); f_11f432a5();
  /* 11f42589 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f4258b jne 0x11f4259c */
  if (!C.zf) goto L_11f4259c;
  /* 11f4258d push dword ptr [0x11f46ca8] */
  push32((uint32_t)(r32((uint32_t)(0x11f46ca8))));
  /* 11f42593 call dword ptr [0x11f45054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45054))), 0x11f42599u);
L_11f42599:;
  /* 11f42599 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f4259b ret  */
  ESPCHK(0x11f42564u, _esp0);
  ESP += 4; return;
L_11f4259c:;
  /* 11f4259c push 1 */
  push32((uint32_t)(0x1u));
  /* 11f4259e pop eax */
  EAX = (pop32());
  /* 11f4259f ret  */
  ESPCHK(0x11f42564u, _esp0);
  ESP += 4; return;
}

/* FUN_100025a0 @ 0x11f425a0 (117 bytes, 38 insns) */
void f_11f425a0(void) {
  FTRACE(0x11f425a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f425a0 push ebx */
  push32((uint32_t)(EBX));
  /* 11f425a1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f425a3 cmp dword ptr [0x11f46a78], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11f46a78))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f425a9 push ebp */
  push32((uint32_t)(EBP));
  /* 11f425aa mov ebp, dword ptr [0x11f45048] */
  EBP = (r32((uint32_t)(0x11f45048)));
  /* 11f425b0 jle 0x11f425f6 */
  if ((C.zf||C.sf!=C.of)) goto L_11f425f6;
  /* 11f425b2 mov eax, dword ptr [0x11f46a7c] */
  EAX = (r32((uint32_t)(0x11f46a7c)));
  /* 11f425b7 push esi */
  push32((uint32_t)(ESI));
  /* 11f425b8 push edi */
  push32((uint32_t)(EDI));
  /* 11f425b9 mov edi, dword ptr [0x11f4504c] */
  EDI = (r32((uint32_t)(0x11f4504c)));
  /* 11f425bf lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_11f425c2:;
  /* 11f425c2 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11f425c7 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11f425cc push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11f425ce call edi */
  call_ind((uint32_t)(EDI), 0x11f425d0u);
  /* 11f425d0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11f425d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f425d7 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11f425d9 call edi */
  call_ind((uint32_t)(EDI), 0x11f425dbu);
  /* 11f425db push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 11f425de push 0 */
  push32((uint32_t)(0x0u));
  /* 11f425e0 push dword ptr [0x11f46ca8] */
  push32((uint32_t)(r32((uint32_t)(0x11f46ca8))));
  /* 11f425e6 call ebp */
  call_ind((uint32_t)(EBP), 0x11f425e8u);
  /* 11f425e8 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f425eb inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11f425ec cmp ebx, dword ptr [0x11f46a78] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11f46a78))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f425f2 jl 0x11f425c2 */
  if ((C.sf!=C.of)) goto L_11f425c2;
  /* 11f425f4 pop edi */
  EDI = (pop32());
  /* 11f425f5 pop esi */
  ESI = (pop32());
L_11f425f6:;
  /* 11f425f6 push dword ptr [0x11f46a7c] */
  push32((uint32_t)(r32((uint32_t)(0x11f46a7c))));
  /* 11f425fc push 0 */
  push32((uint32_t)(0x0u));
  /* 11f425fe push dword ptr [0x11f46ca8] */
  push32((uint32_t)(r32((uint32_t)(0x11f46ca8))));
  /* 11f42604 call ebp */
  call_ind((uint32_t)(EBP), 0x11f42606u);
  /* 11f42606 push dword ptr [0x11f46ca8] */
  push32((uint32_t)(r32((uint32_t)(0x11f46ca8))));
  /* 11f4260c call dword ptr [0x11f45054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45054))), 0x11f42612u);
  /* 11f42612 pop ebp */
  EBP = (pop32());
  /* 11f42613 pop ebx */
  EBX = (pop32());
  /* 11f42614 ret  */
  ESPCHK(0x11f425a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002615 @ 0x11f42615 (57 bytes, 18 insns) */
void f_11f42615(void) {
  FTRACE(0x11f42615u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f42615 mov eax, dword ptr [0x11f46870] */
  EAX = (r32((uint32_t)(0x11f46870)));
  /* 11f4261a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f4261d je 0x11f4262c */
  if (C.zf) goto L_11f4262c;
  /* 11f4261f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f42621 jne 0x11f4264d */
  if (!C.zf) goto L_11f4264d;
  /* 11f42623 cmp dword ptr [0x11f46874], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f46874))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f4262a jne 0x11f4264d */
  if (!C.zf) goto L_11f4264d;
L_11f4262c:;
  /* 11f4262c push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11f42631 call 0x11f4264e */
  push32(0x11f42636u); f_11f4264e();
  /* 11f42636 mov eax, dword ptr [0x11f469c4] */
  EAX = (r32((uint32_t)(0x11f469c4)));
  /* 11f4263b pop ecx */
  ECX = (pop32());
  /* 11f4263c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f4263e je 0x11f42642 */
  if (C.zf) goto L_11f42642;
  /* 11f42640 call eax */
  call_ind((uint32_t)(EAX), 0x11f42642u);
L_11f42642:;
  /* 11f42642 push 0xff */
  push32((uint32_t)(0xffu));
  /* 11f42647 call 0x11f4264e */
  push32(0x11f4264cu); f_11f4264e();
  /* 11f4264c pop ecx */
  ECX = (pop32());
L_11f4264d:;
  /* 11f4264d ret  */
  ESPCHK(0x11f42615u, _esp0);
  ESP += 4; return;
}

/* FUN_1000264e @ 0x11f4264e (339 bytes, 100 insns) */
void f_11f4264e(void) {
  FTRACE(0x11f4264eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f4264e push ebp */
  push32((uint32_t)(EBP));
  /* 11f4264f mov ebp, esp */
  EBP = (ESP);
  /* 11f42651 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f42657 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f4265a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f4265c mov eax, 0x11f46398 */
  EAX = (0x11f46398u);
L_11f42661:;
  /* 11f42661 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42663 je 0x11f42670 */
  if (C.zf) goto L_11f42670;
  /* 11f42665 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f42668 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f42669 cmp eax, 0x11f46428 */
  { uint32_t _a=(EAX),_b=(0x11f46428u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f4266e jl 0x11f42661 */
  if ((C.sf!=C.of)) goto L_11f42661;
L_11f42670:;
  /* 11f42670 push esi */
  push32((uint32_t)(ESI));
  /* 11f42671 mov esi, ecx */
  ESI = (ECX);
  /* 11f42673 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11f42676 cmp edx, dword ptr [esi + 0x11f46398] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x11f46398))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f4267c jne 0x11f4279e */
  if (!C.zf) goto L_11f4279e;
  /* 11f42682 mov eax, dword ptr [0x11f46870] */
  EAX = (r32((uint32_t)(0x11f46870)));
  /* 11f42687 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f4268a je 0x11f42778 */
  if (C.zf) goto L_11f42778;
  /* 11f42690 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f42692 jne 0x11f426a1 */
  if (!C.zf) goto L_11f426a1;
  /* 11f42694 cmp dword ptr [0x11f46874], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f46874))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f4269b je 0x11f42778 */
  if (C.zf) goto L_11f42778;
L_11f426a1:;
  /* 11f426a1 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f426a7 je 0x11f4279e */
  if (C.zf) goto L_11f4279e;
  /* 11f426ad lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11f426b3 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11f426b8 push eax */
  push32((uint32_t)(EAX));
  /* 11f426b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f426bb call dword ptr [0x11f450a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f450a4))), 0x11f426c1u);
  /* 11f426c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f426c3 jne 0x11f426d8 */
  if (!C.zf) goto L_11f426d8;
  /* 11f426c5 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11f426cb push 0x11f45408 */
  push32((uint32_t)(0x11f45408u));
  /* 11f426d0 push eax */
  push32((uint32_t)(EAX));
  /* 11f426d1 call 0x11f42a10 */
  push32(0x11f426d6u); f_11f42a10();
  /* 11f426d6 pop ecx */
  ECX = (pop32());
  /* 11f426d7 pop ecx */
  ECX = (pop32());
L_11f426d8:;
  /* 11f426d8 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11f426de push edi */
  push32((uint32_t)(EDI));
  /* 11f426df push eax */
  push32((uint32_t)(EAX));
  /* 11f426e0 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 11f426e6 call 0x11f42b00 */
  push32(0x11f426ebu); f_11f42b00();
  /* 11f426eb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f426ec pop ecx */
  ECX = (pop32());
  /* 11f426ed cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f426f0 jbe 0x11f4271b */
  if ((C.cf||C.zf)) goto L_11f4271b;
  /* 11f426f2 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11f426f8 push eax */
  push32((uint32_t)(EAX));
  /* 11f426f9 call 0x11f42b00 */
  push32(0x11f426feu); f_11f42b00();
  /* 11f426fe mov edi, eax */
  EDI = (EAX);
  /* 11f42700 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11f42706 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f42709 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f4270b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f4270d push 0x11f45404 */
  push32((uint32_t)(0x11f45404u));
  /* 11f42712 push edi */
  push32((uint32_t)(EDI));
  /* 11f42713 call 0x11f43b80 */
  push32(0x11f42718u); f_11f43b80();
  /* 11f42718 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f4271b:;
  /* 11f4271b lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11f42721 push 0x11f453e8 */
  push32((uint32_t)(0x11f453e8u));
  /* 11f42726 push eax */
  push32((uint32_t)(EAX));
  /* 11f42727 call 0x11f42a10 */
  push32(0x11f4272cu); f_11f42a10();
  /* 11f4272c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11f42732 push edi */
  push32((uint32_t)(EDI));
  /* 11f42733 push eax */
  push32((uint32_t)(EAX));
  /* 11f42734 call 0x11f42a20 */
  push32(0x11f42739u); f_11f42a20();
  /* 11f42739 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11f4273f push 0x11f453e4 */
  push32((uint32_t)(0x11f453e4u));
  /* 11f42744 push eax */
  push32((uint32_t)(EAX));
  /* 11f42745 call 0x11f42a20 */
  push32(0x11f4274au); f_11f42a20();
  /* 11f4274a push dword ptr [esi + 0x11f4639c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x11f4639c))));
  /* 11f42750 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11f42756 push eax */
  push32((uint32_t)(EAX));
  /* 11f42757 call 0x11f42a20 */
  push32(0x11f4275cu); f_11f42a20();
  /* 11f4275c push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11f42761 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11f42767 push 0x11f453bc */
  push32((uint32_t)(0x11f453bcu));
  /* 11f4276c push eax */
  push32((uint32_t)(EAX));
  /* 11f4276d call 0x11f43aee */
  push32(0x11f42772u); f_11f43aee();
  /* 11f42772 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f42775 pop edi */
  EDI = (pop32());
  /* 11f42776 jmp 0x11f4279e */
  goto L_11f4279e;
L_11f42778:;
  /* 11f42778 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11f4277b lea esi, [esi + 0x11f4639c] */
  ESI = ((uint32_t)(ESI + 0x11f4639c));
  /* 11f42781 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f42783 push eax */
  push32((uint32_t)(EAX));
  /* 11f42784 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11f42786 call 0x11f42b00 */
  push32(0x11f4278bu); f_11f42b00();
  /* 11f4278b pop ecx */
  ECX = (pop32());
  /* 11f4278c push eax */
  push32((uint32_t)(EAX));
  /* 11f4278d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11f4278f push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11f42791 call dword ptr [0x11f4508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f4508c))), 0x11f42797u);
  /* 11f42797 push eax */
  push32((uint32_t)(EAX));
  /* 11f42798 call dword ptr [0x11f45050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45050))), 0x11f4279eu);
L_11f4279e:;
  /* 11f4279e pop esi */
  ESI = (pop32());
  /* 11f4279f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f427a0 ret  */
  ESPCHK(0x11f4264eu, _esp0);
  ESP += 4; return;
}

/* FUN_100027a1 @ 0x11f427a1 (41 bytes, 12 insns) */
void f_11f427a1(void) {
  FTRACE(0x11f427a1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f427a1 push esi */
  push32((uint32_t)(ESI));
  /* 11f427a2 mov esi, dword ptr [0x11f45040] */
  ESI = (r32((uint32_t)(0x11f45040)));
  /* 11f427a8 push dword ptr [0x11f4646c] */
  push32((uint32_t)(r32((uint32_t)(0x11f4646c))));
  /* 11f427ae call esi */
  call_ind((uint32_t)(ESI), 0x11f427b0u);
  /* 11f427b0 push dword ptr [0x11f4645c] */
  push32((uint32_t)(r32((uint32_t)(0x11f4645c))));
  /* 11f427b6 call esi */
  call_ind((uint32_t)(ESI), 0x11f427b8u);
  /* 11f427b8 push dword ptr [0x11f4644c] */
  push32((uint32_t)(r32((uint32_t)(0x11f4644c))));
  /* 11f427be call esi */
  call_ind((uint32_t)(ESI), 0x11f427c0u);
  /* 11f427c0 push dword ptr [0x11f4642c] */
  push32((uint32_t)(r32((uint32_t)(0x11f4642c))));
  /* 11f427c6 call esi */
  call_ind((uint32_t)(ESI), 0x11f427c8u);
  /* 11f427c8 pop esi */
  ESI = (pop32());
  /* 11f427c9 ret  */
  ESPCHK(0x11f427a1u, _esp0);
  ESP += 4; return;
}

/* FUN_100027ca @ 0x11f427ca (108 bytes, 34 insns) */
void f_11f427ca(void) {
  FTRACE(0x11f427cau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f427ca push esi */
  push32((uint32_t)(ESI));
  /* 11f427cb push edi */
  push32((uint32_t)(EDI));
  /* 11f427cc mov edi, dword ptr [0x11f450a0] */
  EDI = (r32((uint32_t)(0x11f450a0)));
  /* 11f427d2 mov esi, 0x11f46428 */
  ESI = (0x11f46428u);
L_11f427d7:;
  /* 11f427d7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11f427d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f427db je 0x11f42808 */
  if (C.zf) goto L_11f42808;
  /* 11f427dd cmp esi, 0x11f4646c */
  { uint32_t _a=(ESI),_b=(0x11f4646cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f427e3 je 0x11f42808 */
  if (C.zf) goto L_11f42808;
  /* 11f427e5 cmp esi, 0x11f4645c */
  { uint32_t _a=(ESI),_b=(0x11f4645cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f427eb je 0x11f42808 */
  if (C.zf) goto L_11f42808;
  /* 11f427ed cmp esi, 0x11f4644c */
  { uint32_t _a=(ESI),_b=(0x11f4644cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f427f3 je 0x11f42808 */
  if (C.zf) goto L_11f42808;
  /* 11f427f5 cmp esi, 0x11f4642c */
  { uint32_t _a=(ESI),_b=(0x11f4642cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f427fb je 0x11f42808 */
  if (C.zf) goto L_11f42808;
  /* 11f427fd push eax */
  push32((uint32_t)(EAX));
  /* 11f427fe call edi */
  call_ind((uint32_t)(EDI), 0x11f42800u);
  /* 11f42800 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11f42802 call 0x11f42939 */
  push32(0x11f42807u); f_11f42939();
  /* 11f42807 pop ecx */
  ECX = (pop32());
L_11f42808:;
  /* 11f42808 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f4280b cmp esi, 0x11f464e8 */
  { uint32_t _a=(ESI),_b=(0x11f464e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42811 jl 0x11f427d7 */
  if ((C.sf!=C.of)) goto L_11f427d7;
  /* 11f42813 push dword ptr [0x11f4644c] */
  push32((uint32_t)(r32((uint32_t)(0x11f4644c))));
  /* 11f42819 call edi */
  call_ind((uint32_t)(EDI), 0x11f4281bu);
  /* 11f4281b push dword ptr [0x11f4645c] */
  push32((uint32_t)(r32((uint32_t)(0x11f4645c))));
  /* 11f42821 call edi */
  call_ind((uint32_t)(EDI), 0x11f42823u);
  /* 11f42823 push dword ptr [0x11f4646c] */
  push32((uint32_t)(r32((uint32_t)(0x11f4646c))));
  /* 11f42829 call edi */
  call_ind((uint32_t)(EDI), 0x11f4282bu);
  /* 11f4282b push dword ptr [0x11f4642c] */
  push32((uint32_t)(r32((uint32_t)(0x11f4642c))));
  /* 11f42831 call edi */
  call_ind((uint32_t)(EDI), 0x11f42833u);
  /* 11f42833 pop edi */
  EDI = (pop32());
  /* 11f42834 pop esi */
  ESI = (pop32());
  /* 11f42835 ret  */
  ESPCHK(0x11f427cau, _esp0);
  ESP += 4; return;
}

/* FUN_10002836 @ 0x11f42836 (97 bytes, 37 insns) */
void f_11f42836(void) {
  FTRACE(0x11f42836u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f42836 push ebp */
  push32((uint32_t)(EBP));
  /* 11f42837 mov ebp, esp */
  EBP = (ESP);
  /* 11f42839 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f4283c push esi */
  push32((uint32_t)(ESI));
  /* 11f4283d cmp dword ptr [eax*4 + 0x11f46428], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11f46428))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42845 lea esi, [eax*4 + 0x11f46428] */
  ESI = ((uint32_t)(EAX*4 + 0x11f46428));
  /* 11f4284c jne 0x11f4288c */
  if (!C.zf) goto L_11f4288c;
  /* 11f4284e push edi */
  push32((uint32_t)(EDI));
  /* 11f4284f push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11f42851 call 0x11f42981 */
  push32(0x11f42856u); f_11f42981();
  /* 11f42856 mov edi, eax */
  EDI = (EAX);
  /* 11f42858 pop ecx */
  ECX = (pop32());
  /* 11f42859 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f4285b jne 0x11f42865 */
  if (!C.zf) goto L_11f42865;
  /* 11f4285d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f4285f call 0x11f41ca6 */
  push32(0x11f42864u); f_11f41ca6();
  /* 11f42864 pop ecx */
  ECX = (pop32());
L_11f42865:;
  /* 11f42865 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f42867 call 0x11f42836 */
  push32(0x11f4286cu); f_11f42836();
  /* 11f4286c cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f4286f pop ecx */
  ECX = (pop32());
  /* 11f42870 push edi */
  push32((uint32_t)(EDI));
  /* 11f42871 jne 0x11f4287d */
  if (!C.zf) goto L_11f4287d;
  /* 11f42873 call dword ptr [0x11f45040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45040))), 0x11f42879u);
  /* 11f42879 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11f4287b jmp 0x11f42883 */
  goto L_11f42883;
L_11f4287d:;
  /* 11f4287d call 0x11f42939 */
  push32(0x11f42882u); f_11f42939();
  /* 11f42882 pop ecx */
  ECX = (pop32());
L_11f42883:;
  /* 11f42883 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f42885 call 0x11f42897 */
  push32(0x11f4288au); f_11f42897();
  /* 11f4288a pop ecx */
  ECX = (pop32());
  /* 11f4288b pop edi */
  EDI = (pop32());
L_11f4288c:;
  /* 11f4288c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11f4288e call dword ptr [0x11f4503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f4503c))), 0x11f42894u);
  /* 11f42894 pop esi */
  ESI = (pop32());
  /* 11f42895 pop ebp */
  EBP = (pop32());
  /* 11f42896 ret  */
  ESPCHK(0x11f42836u, _esp0);
  ESP += 4; return;
}

/* FUN_10002897 @ 0x11f42897 (21 bytes, 7 insns) */
void f_11f42897(void) {
  FTRACE(0x11f42897u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f42897 push ebp */
  push32((uint32_t)(EBP));
  /* 11f42898 mov ebp, esp */
  EBP = (ESP);
  /* 11f4289a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f4289d push dword ptr [eax*4 + 0x11f46428] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x11f46428))));
  /* 11f428a4 call dword ptr [0x11f45044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45044))), 0x11f428aau);
  /* 11f428aa pop ebp */
  EBP = (pop32());
  /* 11f428ab ret  */
  ESPCHK(0x11f42897u, _esp0);
  ESP += 4; return;
}

/* FUN_100028ac @ 0x11f428ac (141 bytes, 56 insns) */
void f_11f428ac(void) {
  FTRACE(0x11f428acu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f428ac push ebx */
  push32((uint32_t)(EBX));
  /* 11f428ad push esi */
  push32((uint32_t)(ESI));
  /* 11f428ae mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11f428b2 push edi */
  push32((uint32_t)(EDI));
  /* 11f428b3 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f428b8 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f428bb mov ebx, esi */
  EBX = (ESI);
  /* 11f428bd ja 0x11f428cc */
  if ((!C.cf&&!C.zf)) goto L_11f428cc;
  /* 11f428bf test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f428c1 jne 0x11f428c6 */
  if (!C.zf) goto L_11f428c6;
  /* 11f428c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f428c5 pop esi */
  ESI = (pop32());
L_11f428c6:;
  /* 11f428c6 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f428c9 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_11f428cc:;
  /* 11f428cc xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f428ce cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f428d1 ja 0x11f4290d */
  if ((!C.cf&&!C.zf)) goto L_11f4290d;
  /* 11f428d3 cmp ebx, dword ptr [0x11f46670] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11f46670))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f428d9 ja 0x11f428f8 */
  if ((!C.cf&&!C.zf)) goto L_11f428f8;
  /* 11f428db push 9 */
  push32((uint32_t)(0x9u));
  /* 11f428dd call 0x11f42836 */
  push32(0x11f428e2u); f_11f42836();
  /* 11f428e2 push ebx */
  push32((uint32_t)(EBX));
  /* 11f428e3 call 0x11f43639 */
  push32(0x11f428e8u); f_11f43639();
  /* 11f428e8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f428ea mov edi, eax */
  EDI = (EAX);
  /* 11f428ec call 0x11f42897 */
  push32(0x11f428f1u); f_11f42897();
  /* 11f428f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f428f4 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f428f6 jne 0x11f42923 */
  if (!C.zf) goto L_11f42923;
L_11f428f8:;
  /* 11f428f8 push esi */
  push32((uint32_t)(ESI));
  /* 11f428f9 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f428fb push dword ptr [0x11f46ca8] */
  push32((uint32_t)(r32((uint32_t)(0x11f46ca8))));
  /* 11f42901 call dword ptr [0x11f45038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45038))), 0x11f42907u);
  /* 11f42907 mov edi, eax */
  EDI = (EAX);
  /* 11f42909 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f4290b jne 0x11f4292f */
  if (!C.zf) goto L_11f4292f;
L_11f4290d:;
  /* 11f4290d cmp dword ptr [0x11f46a3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f46a3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42914 je 0x11f4292f */
  if (C.zf) goto L_11f4292f;
  /* 11f42916 push esi */
  push32((uint32_t)(ESI));
  /* 11f42917 call 0x11f43cd8 */
  push32(0x11f4291cu); f_11f43cd8();
  /* 11f4291c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f4291e pop ecx */
  ECX = (pop32());
  /* 11f4291f je 0x11f42935 */
  if (C.zf) goto L_11f42935;
  /* 11f42921 jmp 0x11f428cc */
  goto L_11f428cc;
L_11f42923:;
  /* 11f42923 push ebx */
  push32((uint32_t)(EBX));
  /* 11f42924 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f42926 push edi */
  push32((uint32_t)(EDI));
  /* 11f42927 call 0x11f43c80 */
  push32(0x11f4292cu); f_11f43c80();
  /* 11f4292c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f4292f:;
  /* 11f4292f mov eax, edi */
  EAX = (EDI);
L_11f42931:;
  /* 11f42931 pop edi */
  EDI = (pop32());
  /* 11f42932 pop esi */
  ESI = (pop32());
  /* 11f42933 pop ebx */
  EBX = (pop32());
  /* 11f42934 ret  */
  ESPCHK(0x11f428acu, _esp0);
  ESP += 4; return;
L_11f42935:;
  /* 11f42935 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f42937 jmp 0x11f42931 */
  goto L_11f42931;
}

/* FUN_10002939 @ 0x11f42939 (72 bytes, 29 insns) */
void f_11f42939(void) {
  FTRACE(0x11f42939u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f42939 push esi */
  push32((uint32_t)(ESI));
  /* 11f4293a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11f4293e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f42940 je 0x11f4297f */
  if (C.zf) goto L_11f4297f;
  /* 11f42942 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f42944 call 0x11f42836 */
  push32(0x11f42949u); f_11f42836();
  /* 11f42949 push esi */
  push32((uint32_t)(ESI));
  /* 11f4294a call 0x11f432e3 */
  push32(0x11f4294fu); f_11f432e3();
  /* 11f4294f pop ecx */
  ECX = (pop32());
  /* 11f42950 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f42952 pop ecx */
  ECX = (pop32());
  /* 11f42953 je 0x11f42968 */
  if (C.zf) goto L_11f42968;
  /* 11f42955 push esi */
  push32((uint32_t)(ESI));
  /* 11f42956 push eax */
  push32((uint32_t)(EAX));
  /* 11f42957 call 0x11f4330e */
  push32(0x11f4295cu); f_11f4330e();
  /* 11f4295c push 9 */
  push32((uint32_t)(0x9u));
  /* 11f4295e call 0x11f42897 */
  push32(0x11f42963u); f_11f42897();
  /* 11f42963 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f42966 pop esi */
  ESI = (pop32());
  /* 11f42967 ret  */
  ESPCHK(0x11f42939u, _esp0);
  ESP += 4; return;
L_11f42968:;
  /* 11f42968 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f4296a call 0x11f42897 */
  push32(0x11f4296fu); f_11f42897();
  /* 11f4296f pop ecx */
  ECX = (pop32());
  /* 11f42970 push esi */
  push32((uint32_t)(ESI));
  /* 11f42971 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f42973 push dword ptr [0x11f46ca8] */
  push32((uint32_t)(r32((uint32_t)(0x11f46ca8))));
  /* 11f42979 call dword ptr [0x11f45048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45048))), 0x11f4297fu);
L_11f4297f:;
  /* 11f4297f pop esi */
  ESI = (pop32());
  /* 11f42980 ret  */
  ESPCHK(0x11f42939u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x11f42981 (18 bytes, 6 insns) */
void f_11f42981(void) {
  FTRACE(0x11f42981u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f42981 push dword ptr [0x11f46a3c] */
  push32((uint32_t)(r32((uint32_t)(0x11f46a3c))));
  /* 11f42987 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11f4298b call 0x11f42993 */
  push32(0x11f42990u); f_11f42993();
  /* 11f42990 pop ecx */
  ECX = (pop32());
  /* 11f42991 pop ecx */
  ECX = (pop32());
  /* 11f42992 ret  */
  ESPCHK(0x11f42981u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x11f42993 (44 bytes, 16 insns) */
void f_11f42993(void) {
  FTRACE(0x11f42993u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f42993 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42998 ja 0x11f429bc */
  if ((!C.cf&&!C.zf)) goto L_11f429bc;
L_11f4299a:;
  /* 11f4299a push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11f4299e call 0x11f429bf */
  push32(0x11f429a3u); f_11f429bf();
  /* 11f429a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f429a5 pop ecx */
  ECX = (pop32());
  /* 11f429a6 jne 0x11f429be */
  if (!C.zf) goto L_11f429be;
  /* 11f429a8 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f429ac je 0x11f429be */
  if (C.zf) goto L_11f429be;
  /* 11f429ae push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11f429b2 call 0x11f43cd8 */
  push32(0x11f429b7u); f_11f43cd8();
  /* 11f429b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f429b9 pop ecx */
  ECX = (pop32());
  /* 11f429ba jne 0x11f4299a */
  if (!C.zf) goto L_11f4299a;
L_11f429bc:;
  /* 11f429bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f429be:;
  /* 11f429be ret  */
  ESPCHK(0x11f42993u, _esp0);
  ESP += 4; return;
}

/* FUN_100029bf @ 0x11f429bf (78 bytes, 30 insns) */
void f_11f429bf(void) {
  FTRACE(0x11f429bfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f429bf push esi */
  push32((uint32_t)(ESI));
  /* 11f429c0 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11f429c4 cmp esi, dword ptr [0x11f46670] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11f46670))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f429ca push edi */
  push32((uint32_t)(EDI));
  /* 11f429cb ja 0x11f429ee */
  if ((!C.cf&&!C.zf)) goto L_11f429ee;
  /* 11f429cd push 9 */
  push32((uint32_t)(0x9u));
  /* 11f429cf call 0x11f42836 */
  push32(0x11f429d4u); f_11f42836();
  /* 11f429d4 push esi */
  push32((uint32_t)(ESI));
  /* 11f429d5 call 0x11f43639 */
  push32(0x11f429dau); f_11f43639();
  /* 11f429da push 9 */
  push32((uint32_t)(0x9u));
  /* 11f429dc mov edi, eax */
  EDI = (EAX);
  /* 11f429de call 0x11f42897 */
  push32(0x11f429e3u); f_11f42897();
  /* 11f429e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f429e6 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f429e8 je 0x11f429ee */
  if (C.zf) goto L_11f429ee;
  /* 11f429ea mov eax, edi */
  EAX = (EDI);
  /* 11f429ec jmp 0x11f42a0a */
  goto L_11f42a0a;
L_11f429ee:;
  /* 11f429ee test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f429f0 jne 0x11f429f5 */
  if (!C.zf) goto L_11f429f5;
  /* 11f429f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f429f4 pop esi */
  ESI = (pop32());
L_11f429f5:;
  /* 11f429f5 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f429f8 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11f429fb push esi */
  push32((uint32_t)(ESI));
  /* 11f429fc push 0 */
  push32((uint32_t)(0x0u));
  /* 11f429fe push dword ptr [0x11f46ca8] */
  push32((uint32_t)(r32((uint32_t)(0x11f46ca8))));
  /* 11f42a04 call dword ptr [0x11f45038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45038))), 0x11f42a0au);
L_11f42a0a:;
  /* 11f42a0a pop edi */
  EDI = (pop32());
  /* 11f42a0b pop esi */
  ESI = (pop32());
  /* 11f42a0c ret  */
  ESPCHK(0x11f429bfu, _esp0);
  ESP += 4; return;
}

/* FUN_10002a10 @ 0x11f42a10 (7 bytes, 3 insns) */
void f_11f42a10(void) {
  FTRACE(0x11f42a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f42a10 push edi */
  push32((uint32_t)(EDI));
  /* 11f42a11 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11f42a15 jmp 0x11f42a81 */
  jmp_ind(0x11f42a81u); return;
}

/* FUN_10002a20 @ 0x11f42a20 (224 bytes, 84 insns) */
void f_11f42a20(void) {
  FTRACE(0x11f42a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f42a20 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f42a24 push edi */
  push32((uint32_t)(EDI));
  /* 11f42a25 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11f42a2b je 0x11f42a3c */
  if (C.zf) goto L_11f42a3c;
L_11f42a2d:;
  /* 11f42a2d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11f42a2f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f42a30 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f42a32 je 0x11f42a6f */
  if (C.zf) goto L_11f42a6f;
  /* 11f42a34 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11f42a3a jne 0x11f42a2d */
  if (!C.zf) goto L_11f42a2d;
L_11f42a3c:;
  /* 11f42a3c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11f42a3e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11f42a43 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f42a45 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f42a48 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f42a4a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f42a4d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11f42a52 je 0x11f42a3c */
  if (C.zf) goto L_11f42a3c;
  /* 11f42a54 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11f42a57 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f42a59 je 0x11f42a7e */
  if (C.zf) goto L_11f42a7e;
  /* 11f42a5b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11f42a5d je 0x11f42a79 */
  if (C.zf) goto L_11f42a79;
  /* 11f42a5f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11f42a64 je 0x11f42a74 */
  if (C.zf) goto L_11f42a74;
  /* 11f42a66 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11f42a6b je 0x11f42a6f */
  if (C.zf) goto L_11f42a6f;
  /* 11f42a6d jmp 0x11f42a3c */
  goto L_11f42a3c;
L_11f42a6f:;
  /* 11f42a6f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11f42a72 jmp 0x11f42a81 */
  goto L_11f42a81;
L_11f42a74:;
  /* 11f42a74 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11f42a77 jmp 0x11f42a81 */
  goto L_11f42a81;
L_11f42a79:;
  /* 11f42a79 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11f42a7c jmp 0x11f42a81 */
  goto L_11f42a81;
L_11f42a7e:;
  /* 11f42a7e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11f42a81:;
  /* 11f42a81 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11f42a85 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11f42a8b je 0x11f42aa6 */
  if (C.zf) goto L_11f42aa6;
L_11f42a8d:;
  /* 11f42a8d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11f42a8f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f42a90 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f42a92 je 0x11f42af8 */
  if (C.zf) goto L_11f42af8;
  /* 11f42a94 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11f42a96 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f42a97 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11f42a9d jne 0x11f42a8d */
  if (!C.zf) goto L_11f42a8d;
  /* 11f42a9f jmp 0x11f42aa6 */
  goto L_11f42aa6;
L_11f42aa1:;
  /* 11f42aa1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11f42aa3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11f42aa6:;
  /* 11f42aa6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11f42aab mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11f42aad add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f42aaf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f42ab2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f42ab4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f42ab6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f42ab9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11f42abe je 0x11f42aa1 */
  if (C.zf) goto L_11f42aa1;
  /* 11f42ac0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f42ac2 je 0x11f42af8 */
  if (C.zf) goto L_11f42af8;
  /* 11f42ac4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11f42ac6 je 0x11f42aef */
  if (C.zf) goto L_11f42aef;
  /* 11f42ac8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11f42ace je 0x11f42ae2 */
  if (C.zf) goto L_11f42ae2;
  /* 11f42ad0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11f42ad6 je 0x11f42ada */
  if (C.zf) goto L_11f42ada;
  /* 11f42ad8 jmp 0x11f42aa1 */
  goto L_11f42aa1;
L_11f42ada:;
  /* 11f42ada mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11f42adc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f42ae0 pop edi */
  EDI = (pop32());
  /* 11f42ae1 ret  */
  ESPCHK(0x11f42a20u, _esp0);
  ESP += 4; return;
L_11f42ae2:;
  /* 11f42ae2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11f42ae5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f42ae9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11f42aed pop edi */
  EDI = (pop32());
  /* 11f42aee ret  */
  ESPCHK(0x11f42a20u, _esp0);
  ESP += 4; return;
L_11f42aef:;
  /* 11f42aef mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11f42af2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f42af6 pop edi */
  EDI = (pop32());
  /* 11f42af7 ret  */
  ESPCHK(0x11f42a20u, _esp0);
  ESP += 4; return;
L_11f42af8:;
  /* 11f42af8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11f42afa mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f42afe pop edi */
  EDI = (pop32());
  /* 11f42aff ret  */
  ESPCHK(0x11f42a20u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11f42b00 (123 bytes, 44 insns) */
void f_11f42b00(void) {
  FTRACE(0x11f42b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f42b00 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f42b04 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11f42b0a je 0x11f42b20 */
  if (C.zf) goto L_11f42b20;
L_11f42b0c:;
  /* 11f42b0c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11f42b0e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f42b0f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f42b11 je 0x11f42b53 */
  if (C.zf) goto L_11f42b53;
  /* 11f42b13 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11f42b19 jne 0x11f42b0c */
  if (!C.zf) goto L_11f42b0c;
  /* 11f42b1b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11f42b20:;
  /* 11f42b20 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11f42b22 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11f42b27 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f42b29 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f42b2c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f42b2e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f42b31 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11f42b36 je 0x11f42b20 */
  if (C.zf) goto L_11f42b20;
  /* 11f42b38 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11f42b3b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f42b3d je 0x11f42b71 */
  if (C.zf) goto L_11f42b71;
  /* 11f42b3f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11f42b41 je 0x11f42b67 */
  if (C.zf) goto L_11f42b67;
  /* 11f42b43 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11f42b48 je 0x11f42b5d */
  if (C.zf) goto L_11f42b5d;
  /* 11f42b4a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11f42b4f je 0x11f42b53 */
  if (C.zf) goto L_11f42b53;
  /* 11f42b51 jmp 0x11f42b20 */
  goto L_11f42b20;
L_11f42b53:;
  /* 11f42b53 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11f42b56 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f42b5a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f42b5c ret  */
  ESPCHK(0x11f42b00u, _esp0);
  ESP += 4; return;
L_11f42b5d:;
  /* 11f42b5d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11f42b60 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f42b64 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f42b66 ret  */
  ESPCHK(0x11f42b00u, _esp0);
  ESP += 4; return;
L_11f42b67:;
  /* 11f42b67 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11f42b6a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f42b6e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f42b70 ret  */
  ESPCHK(0x11f42b00u, _esp0);
  ESP += 4; return;
L_11f42b71:;
  /* 11f42b71 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11f42b74 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f42b78 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f42b7a ret  */
  ESPCHK(0x11f42b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b7b @ 0x11f42b7b (429 bytes, 143 insns) */
void f_11f42b7b(void) {
  FTRACE(0x11f42b7bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f42b7b push ebp */
  push32((uint32_t)(EBP));
  /* 11f42b7c mov ebp, esp */
  EBP = (ESP);
  /* 11f42b7e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f42b81 push ebx */
  push32((uint32_t)(EBX));
  /* 11f42b82 push esi */
  push32((uint32_t)(ESI));
  /* 11f42b83 push edi */
  push32((uint32_t)(EDI));
  /* 11f42b84 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11f42b86 call 0x11f42836 */
  push32(0x11f42b8bu); f_11f42836();
  /* 11f42b8b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f42b8e call 0x11f42d28 */
  push32(0x11f42b93u); f_11f42d28();
  /* 11f42b93 mov ebx, eax */
  EBX = (EAX);
  /* 11f42b95 pop ecx */
  ECX = (pop32());
  /* 11f42b96 cmp ebx, dword ptr [0x11f46a80] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11f46a80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42b9c pop ecx */
  ECX = (pop32());
  /* 11f42b9d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11f42ba0 jne 0x11f42ba9 */
  if (!C.zf) goto L_11f42ba9;
L_11f42ba2:;
  /* 11f42ba2 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11f42ba4 jmp 0x11f42d19 */
  goto L_11f42d19;
L_11f42ba9:;
  /* 11f42ba9 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11f42bab je 0x11f42d07 */
  if (C.zf) goto L_11f42d07;
  /* 11f42bb1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f42bb3 mov eax, 0x11f46578 */
  EAX = (0x11f46578u);
L_11f42bb8:;
  /* 11f42bb8 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42bba je 0x11f42c30 */
  if (C.zf) goto L_11f42c30;
  /* 11f42bbc add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f42bbf inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11f42bc0 cmp eax, 0x11f46668 */
  { uint32_t _a=(EAX),_b=(0x11f46668u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42bc5 jl 0x11f42bb8 */
  if ((C.sf!=C.of)) goto L_11f42bb8;
  /* 11f42bc7 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11f42bca push eax */
  push32((uint32_t)(EAX));
  /* 11f42bcb push ebx */
  push32((uint32_t)(EBX));
  /* 11f42bcc call dword ptr [0x11f45030] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45030))), 0x11f42bd2u);
  /* 11f42bd2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f42bd4 pop esi */
  ESI = (pop32());
  /* 11f42bd5 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42bd7 jne 0x11f42cfe */
  if (!C.zf) goto L_11f42cfe;
  /* 11f42bdd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11f42bdf and dword ptr [0x11f46ca4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11f46ca4)))&(0x0u); w32((uint32_t)(0x11f46ca4), (_r)); fl_logic(_r,32); }
  /* 11f42be6 pop ecx */
  ECX = (pop32());
  /* 11f42be7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f42be9 mov edi, 0x11f46ba0 */
  EDI = (0x11f46ba0u);
  /* 11f42bee cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42bf1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11f42bf3 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11f42bf4 mov dword ptr [0x11f46a80], ebx */
  w32((uint32_t)(0x11f46a80), (EBX));
  /* 11f42bfa jbe 0x11f42ceb */
  if ((C.cf||C.zf)) goto L_11f42ceb;
  /* 11f42c00 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f42c04 je 0x11f42cc6 */
  if (C.zf) goto L_11f42cc6;
  /* 11f42c0a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_11f42c0d:;
  /* 11f42c0d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11f42c0f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f42c11 je 0x11f42cc6 */
  if (C.zf) goto L_11f42cc6;
  /* 11f42c17 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 11f42c1b movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_11f42c1e:;
  /* 11f42c1e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42c20 ja 0x11f42cba */
  if ((!C.cf&&!C.zf)) goto L_11f42cba;
  /* 11f42c26 or byte ptr [eax + 0x11f46ba1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11f46ba1)))|(0x4u); w8((uint32_t)(EAX + 0x11f46ba1), (_r)); fl_logic(_r,8); }
  /* 11f42c2d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f42c2e jmp 0x11f42c1e */
  goto L_11f42c1e;
L_11f42c30:;
  /* 11f42c30 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f42c34 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11f42c36 pop ecx */
  ECX = (pop32());
  /* 11f42c37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f42c39 mov edi, 0x11f46ba0 */
  EDI = (0x11f46ba0u);
  /* 11f42c3e lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 11f42c41 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11f42c43 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11f42c46 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11f42c47 lea ebx, [esi + 0x11f46588] */
  EBX = ((uint32_t)(ESI + 0x11f46588));
L_11f42c4d:;
  /* 11f42c4d cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f42c50 mov ecx, ebx */
  ECX = (EBX);
  /* 11f42c52 je 0x11f42c80 */
  if (C.zf) goto L_11f42c80;
L_11f42c54:;
  /* 11f42c54 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11f42c57 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f42c59 je 0x11f42c80 */
  if (C.zf) goto L_11f42c80;
  /* 11f42c5b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11f42c5e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 11f42c61 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42c63 ja 0x11f42c79 */
  if ((!C.cf&&!C.zf)) goto L_11f42c79;
  /* 11f42c65 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f42c68 mov dl, byte ptr [edx + 0x11f46570] */
  DL = (r8((uint32_t)(EDX + 0x11f46570)));
L_11f42c6e:;
  /* 11f42c6e or byte ptr [eax + 0x11f46ba1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11f46ba1)))|(DL); w8((uint32_t)(EAX + 0x11f46ba1), (_r)); fl_logic(_r,8); }
  /* 11f42c74 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f42c75 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42c77 jbe 0x11f42c6e */
  if ((C.cf||C.zf)) goto L_11f42c6e;
L_11f42c79:;
  /* 11f42c79 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f42c7a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f42c7b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f42c7e jne 0x11f42c54 */
  if (!C.zf) goto L_11f42c54;
L_11f42c80:;
  /* 11f42c80 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11f42c83 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f42c86 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42c8a jb 0x11f42c4d */
  if (C.cf) goto L_11f42c4d;
  /* 11f42c8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f42c8f mov dword ptr [0x11f46a9c], 1 */
  w32((uint32_t)(0x11f46a9c), (0x1u));
  /* 11f42c99 push eax */
  push32((uint32_t)(EAX));
  /* 11f42c9a mov dword ptr [0x11f46a80], eax */
  w32((uint32_t)(0x11f46a80), (EAX));
  /* 11f42c9f call 0x11f42d72 */
  push32(0x11f42ca4u); f_11f42d72();
  /* 11f42ca4 lea esi, [esi + 0x11f4657c] */
  ESI = ((uint32_t)(ESI + 0x11f4657c));
  /* 11f42caa mov edi, 0x11f46a90 */
  EDI = (0x11f46a90u);
  /* 11f42caf movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11f42cb0 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11f42cb1 pop ecx */
  ECX = (pop32());
  /* 11f42cb2 mov dword ptr [0x11f46ca4], eax */
  w32((uint32_t)(0x11f46ca4), (EAX));
  /* 11f42cb7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11f42cb8 jmp 0x11f42d0c */
  goto L_11f42d0c;
L_11f42cba:;
  /* 11f42cba inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f42cbb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f42cbc cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f42cc0 jne 0x11f42c0d */
  if (!C.zf) goto L_11f42c0d;
L_11f42cc6:;
  /* 11f42cc6 mov eax, esi */
  EAX = (ESI);
L_11f42cc8:;
  /* 11f42cc8 or byte ptr [eax + 0x11f46ba1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11f46ba1)))|(0x8u); w8((uint32_t)(EAX + 0x11f46ba1), (_r)); fl_logic(_r,8); }
  /* 11f42ccf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f42cd0 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42cd5 jb 0x11f42cc8 */
  if (C.cf) goto L_11f42cc8;
  /* 11f42cd7 push ebx */
  push32((uint32_t)(EBX));
  /* 11f42cd8 call 0x11f42d72 */
  push32(0x11f42cddu); f_11f42d72();
  /* 11f42cdd pop ecx */
  ECX = (pop32());
  /* 11f42cde mov dword ptr [0x11f46ca4], eax */
  w32((uint32_t)(0x11f46ca4), (EAX));
  /* 11f42ce3 mov dword ptr [0x11f46a9c], esi */
  w32((uint32_t)(0x11f46a9c), (ESI));
  /* 11f42ce9 jmp 0x11f42cf2 */
  goto L_11f42cf2;
L_11f42ceb:;
  /* 11f42ceb and dword ptr [0x11f46a9c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11f46a9c)))&(0x0u); w32((uint32_t)(0x11f46a9c), (_r)); fl_logic(_r,32); }
L_11f42cf2:;
  /* 11f42cf2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f42cf4 mov edi, 0x11f46a90 */
  EDI = (0x11f46a90u);
  /* 11f42cf9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11f42cfa stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11f42cfb stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11f42cfc jmp 0x11f42d0c */
  goto L_11f42d0c;
L_11f42cfe:;
  /* 11f42cfe cmp dword ptr [0x11f46a28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f46a28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42d05 je 0x11f42d16 */
  if (C.zf) goto L_11f42d16;
L_11f42d07:;
  /* 11f42d07 call 0x11f42da5 */
  push32(0x11f42d0cu); f_11f42da5();
L_11f42d0c:;
  /* 11f42d0c call 0x11f42dce */
  push32(0x11f42d11u); f_11f42dce();
  /* 11f42d11 jmp 0x11f42ba2 */
  goto L_11f42ba2;
L_11f42d16:;
  /* 11f42d16 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11f42d19:;
  /* 11f42d19 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11f42d1b call 0x11f42897 */
  push32(0x11f42d20u); f_11f42897();
  /* 11f42d20 pop ecx */
  ECX = (pop32());
  /* 11f42d21 mov eax, esi */
  EAX = (ESI);
  /* 11f42d23 pop edi */
  EDI = (pop32());
  /* 11f42d24 pop esi */
  ESI = (pop32());
  /* 11f42d25 pop ebx */
  EBX = (pop32());
  /* 11f42d26 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f42d27 ret  */
  ESPCHK(0x11f42b7bu, _esp0);
  ESP += 4; return;
}

/* FUN_10002d28 @ 0x11f42d28 (74 bytes, 15 insns) */
void f_11f42d28(void) {
  FTRACE(0x11f42d28u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f42d28 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f42d2c and dword ptr [0x11f46a28], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11f46a28)))&(0x0u); w32((uint32_t)(0x11f46a28), (_r)); fl_logic(_r,32); }
  /* 11f42d33 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42d36 jne 0x11f42d48 */
  if (!C.zf) goto L_11f42d48;
  /* 11f42d38 mov dword ptr [0x11f46a28], 1 */
  w32((uint32_t)(0x11f46a28), (0x1u));
  /* 11f42d42 jmp dword ptr [0x11f45034] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11f45034)))); return;
L_11f42d48:;
  /* 11f42d48 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42d4b jne 0x11f42d5d */
  if (!C.zf) goto L_11f42d5d;
  /* 11f42d4d mov dword ptr [0x11f46a28], 1 */
  w32((uint32_t)(0x11f46a28), (0x1u));
  /* 11f42d57 jmp dword ptr [0x11f4502c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11f4502c)))); return;
L_11f42d5d:;
  /* 11f42d5d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42d60 jne 0x11f42d71 */
  if (!C.zf) goto L_11f42d71;
  /* 11f42d62 mov eax, dword ptr [0x11f46a58] */
  EAX = (r32((uint32_t)(0x11f46a58)));
  /* 11f42d67 mov dword ptr [0x11f46a28], 1 */
  w32((uint32_t)(0x11f46a28), (0x1u));
L_11f42d71:;
  /* 11f42d71 ret  */
  ESPCHK(0x11f42d28u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d72 @ 0x11f42d72 (51 bytes, 19 insns) */
void f_11f42d72(void) {
  FTRACE(0x11f42d72u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f42d72 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f42d76 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f42d7b je 0x11f42d9f */
  if (C.zf) goto L_11f42d9f;
  /* 11f42d7d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f42d80 je 0x11f42d99 */
  if (C.zf) goto L_11f42d99;
  /* 11f42d82 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f42d85 je 0x11f42d93 */
  if (C.zf) goto L_11f42d93;
  /* 11f42d87 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f42d88 je 0x11f42d8d */
  if (C.zf) goto L_11f42d8d;
  /* 11f42d8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f42d8c ret  */
  ESPCHK(0x11f42d72u, _esp0);
  ESP += 4; return;
L_11f42d8d:;
  /* 11f42d8d mov eax, 0x404 */
  EAX = (0x404u);
  /* 11f42d92 ret  */
  ESPCHK(0x11f42d72u, _esp0);
  ESP += 4; return;
L_11f42d93:;
  /* 11f42d93 mov eax, 0x412 */
  EAX = (0x412u);
  /* 11f42d98 ret  */
  ESPCHK(0x11f42d72u, _esp0);
  ESP += 4; return;
L_11f42d99:;
  /* 11f42d99 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11f42d9e ret  */
  ESPCHK(0x11f42d72u, _esp0);
  ESP += 4; return;
L_11f42d9f:;
  /* 11f42d9f mov eax, 0x411 */
  EAX = (0x411u);
  /* 11f42da4 ret  */
  ESPCHK(0x11f42d72u, _esp0);
  ESP += 4; return;
}

/* FUN_10002da5 @ 0x11f42da5 (41 bytes, 17 insns) */
void f_11f42da5(void) {
  FTRACE(0x11f42da5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f42da5 push edi */
  push32((uint32_t)(EDI));
  /* 11f42da6 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11f42da8 pop ecx */
  ECX = (pop32());
  /* 11f42da9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f42dab mov edi, 0x11f46ba0 */
  EDI = (0x11f46ba0u);
  /* 11f42db0 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11f42db2 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11f42db3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f42db5 mov edi, 0x11f46a90 */
  EDI = (0x11f46a90u);
  /* 11f42dba mov dword ptr [0x11f46a80], eax */
  w32((uint32_t)(0x11f46a80), (EAX));
  /* 11f42dbf mov dword ptr [0x11f46a9c], eax */
  w32((uint32_t)(0x11f46a9c), (EAX));
  /* 11f42dc4 mov dword ptr [0x11f46ca4], eax */
  w32((uint32_t)(0x11f46ca4), (EAX));
  /* 11f42dc9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11f42dca stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11f42dcb stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11f42dcc pop edi */
  EDI = (pop32());
  /* 11f42dcd ret  */
  ESPCHK(0x11f42da5u, _esp0);
  ESP += 4; return;
}

/* FUN_10002dce @ 0x11f42dce (389 bytes, 124 insns) */
void f_11f42dce(void) {
  FTRACE(0x11f42dceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f42dce push ebp */
  push32((uint32_t)(EBP));
  /* 11f42dcf mov ebp, esp */
  EBP = (ESP);
  /* 11f42dd1 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f42dd7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11f42dda push esi */
  push32((uint32_t)(ESI));
  /* 11f42ddb push eax */
  push32((uint32_t)(EAX));
  /* 11f42ddc push dword ptr [0x11f46a80] */
  push32((uint32_t)(r32((uint32_t)(0x11f46a80))));
  /* 11f42de2 call dword ptr [0x11f45030] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45030))), 0x11f42de8u);
  /* 11f42de8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42deb jne 0x11f42f07 */
  if (!C.zf) goto L_11f42f07;
  /* 11f42df1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f42df3 mov esi, 0x100 */
  ESI = (0x100u);
L_11f42df8:;
  /* 11f42df8 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 11f42dff inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f42e00 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42e02 jb 0x11f42df8 */
  if (C.cf) goto L_11f42df8;
  /* 11f42e04 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 11f42e07 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 11f42e0e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f42e10 je 0x11f42e49 */
  if (C.zf) goto L_11f42e49;
  /* 11f42e12 push ebx */
  push32((uint32_t)(EBX));
  /* 11f42e13 push edi */
  push32((uint32_t)(EDI));
  /* 11f42e14 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_11f42e17:;
  /* 11f42e17 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11f42e1a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11f42e1d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42e1f ja 0x11f42e3e */
  if ((!C.cf&&!C.zf)) goto L_11f42e3e;
  /* 11f42e21 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f42e23 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 11f42e2a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f42e2b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 11f42e30 mov ebx, ecx */
  EBX = (ECX);
  /* 11f42e32 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f42e35 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11f42e37 mov ecx, ebx */
  ECX = (EBX);
  /* 11f42e39 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11f42e3c rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_11f42e3e:;
  /* 11f42e3e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11f42e3f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11f42e40 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 11f42e43 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f42e45 jne 0x11f42e17 */
  if (!C.zf) goto L_11f42e17;
  /* 11f42e47 pop edi */
  EDI = (pop32());
  /* 11f42e48 pop ebx */
  EBX = (pop32());
L_11f42e49:;
  /* 11f42e49 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f42e4b lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 11f42e51 push dword ptr [0x11f46ca4] */
  push32((uint32_t)(r32((uint32_t)(0x11f46ca4))));
  /* 11f42e57 push dword ptr [0x11f46a80] */
  push32((uint32_t)(r32((uint32_t)(0x11f46a80))));
  /* 11f42e5d push eax */
  push32((uint32_t)(EAX));
  /* 11f42e5e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11f42e64 push esi */
  push32((uint32_t)(ESI));
  /* 11f42e65 push eax */
  push32((uint32_t)(EAX));
  /* 11f42e66 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f42e68 call 0x11f43f42 */
  push32(0x11f42e6du); f_11f43f42();
  /* 11f42e6d push 0 */
  push32((uint32_t)(0x0u));
  /* 11f42e6f lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 11f42e75 push dword ptr [0x11f46a80] */
  push32((uint32_t)(r32((uint32_t)(0x11f46a80))));
  /* 11f42e7b push esi */
  push32((uint32_t)(ESI));
  /* 11f42e7c push eax */
  push32((uint32_t)(EAX));
  /* 11f42e7d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11f42e83 push esi */
  push32((uint32_t)(ESI));
  /* 11f42e84 push eax */
  push32((uint32_t)(EAX));
  /* 11f42e85 push esi */
  push32((uint32_t)(ESI));
  /* 11f42e86 push dword ptr [0x11f46ca4] */
  push32((uint32_t)(r32((uint32_t)(0x11f46ca4))));
  /* 11f42e8c call 0x11f43cf3 */
  push32(0x11f42e91u); f_11f43cf3();
  /* 11f42e91 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f42e93 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 11f42e99 push dword ptr [0x11f46a80] */
  push32((uint32_t)(r32((uint32_t)(0x11f46a80))));
  /* 11f42e9f push esi */
  push32((uint32_t)(ESI));
  /* 11f42ea0 push eax */
  push32((uint32_t)(EAX));
  /* 11f42ea1 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11f42ea7 push esi */
  push32((uint32_t)(ESI));
  /* 11f42ea8 push eax */
  push32((uint32_t)(EAX));
  /* 11f42ea9 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11f42eae push dword ptr [0x11f46ca4] */
  push32((uint32_t)(r32((uint32_t)(0x11f46ca4))));
  /* 11f42eb4 call 0x11f43cf3 */
  push32(0x11f42eb9u); f_11f43cf3();
  /* 11f42eb9 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f42ebc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f42ebe lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_11f42ec4:;
  /* 11f42ec4 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11f42ec7 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11f42eca je 0x11f42ee2 */
  if (C.zf) goto L_11f42ee2;
  /* 11f42ecc or byte ptr [eax + 0x11f46ba1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11f46ba1)))|(0x10u); w8((uint32_t)(EAX + 0x11f46ba1), (_r)); fl_logic(_r,8); }
  /* 11f42ed3 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_11f42eda:;
  /* 11f42eda mov byte ptr [eax + 0x11f46aa0], dl */
  w8((uint32_t)(EAX + 0x11f46aa0), (DL));
  /* 11f42ee0 jmp 0x11f42efe */
  goto L_11f42efe;
L_11f42ee2:;
  /* 11f42ee2 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 11f42ee5 je 0x11f42ef7 */
  if (C.zf) goto L_11f42ef7;
  /* 11f42ee7 or byte ptr [eax + 0x11f46ba1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11f46ba1)))|(0x20u); w8((uint32_t)(EAX + 0x11f46ba1), (_r)); fl_logic(_r,8); }
  /* 11f42eee mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 11f42ef5 jmp 0x11f42eda */
  goto L_11f42eda;
L_11f42ef7:;
  /* 11f42ef7 and byte ptr [eax + 0x11f46aa0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11f46aa0)))&(0x0u); w8((uint32_t)(EAX + 0x11f46aa0), (_r)); fl_logic(_r,8); }
L_11f42efe:;
  /* 11f42efe inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f42eff inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f42f00 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f42f01 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42f03 jb 0x11f42ec4 */
  if (C.cf) goto L_11f42ec4;
  /* 11f42f05 jmp 0x11f42f50 */
  goto L_11f42f50;
L_11f42f07:;
  /* 11f42f07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f42f09 mov esi, 0x100 */
  ESI = (0x100u);
L_11f42f0e:;
  /* 11f42f0e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42f11 jb 0x11f42f2c */
  if (C.cf) goto L_11f42f2c;
  /* 11f42f13 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42f16 ja 0x11f42f2c */
  if ((!C.cf&&!C.zf)) goto L_11f42f2c;
  /* 11f42f18 or byte ptr [eax + 0x11f46ba1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11f46ba1)))|(0x10u); w8((uint32_t)(EAX + 0x11f46ba1), (_r)); fl_logic(_r,8); }
  /* 11f42f1f mov cl, al */
  CL = (AL);
  /* 11f42f21 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_11f42f24:;
  /* 11f42f24 mov byte ptr [eax + 0x11f46aa0], cl */
  w8((uint32_t)(EAX + 0x11f46aa0), (CL));
  /* 11f42f2a jmp 0x11f42f4b */
  goto L_11f42f4b;
L_11f42f2c:;
  /* 11f42f2c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42f2f jb 0x11f42f44 */
  if (C.cf) goto L_11f42f44;
  /* 11f42f31 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42f34 ja 0x11f42f44 */
  if ((!C.cf&&!C.zf)) goto L_11f42f44;
  /* 11f42f36 or byte ptr [eax + 0x11f46ba1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11f46ba1)))|(0x20u); w8((uint32_t)(EAX + 0x11f46ba1), (_r)); fl_logic(_r,8); }
  /* 11f42f3d mov cl, al */
  CL = (AL);
  /* 11f42f3f sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f42f42 jmp 0x11f42f24 */
  goto L_11f42f24;
L_11f42f44:;
  /* 11f42f44 and byte ptr [eax + 0x11f46aa0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11f46aa0)))&(0x0u); w8((uint32_t)(EAX + 0x11f46aa0), (_r)); fl_logic(_r,8); }
L_11f42f4b:;
  /* 11f42f4b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f42f4c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42f4e jb 0x11f42f0e */
  if (C.cf) goto L_11f42f0e;
L_11f42f50:;
  /* 11f42f50 pop esi */
  ESI = (pop32());
  /* 11f42f51 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f42f52 ret  */
  ESPCHK(0x11f42dceu, _esp0);
  ESP += 4; return;
}

/* FUN_10002f53 @ 0x11f42f53 (28 bytes, 7 insns) */
void f_11f42f53(void) {
  FTRACE(0x11f42f53u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f42f53 cmp dword ptr [0x11f46dc8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f46dc8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42f5a jne 0x11f42f6e */
  if (!C.zf) goto L_11f42f6e;
  /* 11f42f5c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11f42f5e call 0x11f42b7b */
  push32(0x11f42f63u); f_11f42b7b();
  /* 11f42f63 pop ecx */
  ECX = (pop32());
  /* 11f42f64 mov dword ptr [0x11f46dc8], 1 */
  w32((uint32_t)(0x11f46dc8), (0x1u));
L_11f42f6e:;
  /* 11f42f6e ret  */
  ESPCHK(0x11f42f53u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f70 @ 0x11f42f70 (664 bytes, 265 insns) [15 switch table(s)] */
void f_11f42f70(void) {
  FTRACE(0x11f42f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f42f70 push ebp */
  push32((uint32_t)(EBP));
  /* 11f42f71 mov ebp, esp */
  EBP = (ESP);
  /* 11f42f73 push edi */
  push32((uint32_t)(EDI));
  /* 11f42f74 push esi */
  push32((uint32_t)(ESI));
  /* 11f42f75 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f42f78 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f42f7b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f42f7e mov eax, ecx */
  EAX = (ECX);
  /* 11f42f80 mov edx, ecx */
  EDX = (ECX);
  /* 11f42f82 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f42f84 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42f86 jbe 0x11f42f90 */
  if ((C.cf||C.zf)) goto L_11f42f90;
  /* 11f42f88 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42f8a jb 0x11f43108 */
  if (C.cf) goto L_11f43108;
L_11f42f90:;
  /* 11f42f90 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11f42f96 jne 0x11f42fac */
  if (!C.zf) goto L_11f42fac;
  /* 11f42f98 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f42f9b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11f42f9e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42fa1 jb 0x11f42fcc */
  if (C.cf) goto L_11f42fcc;
  /* 11f42fa3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f42fa5 jmp dword ptr [edx*4 + 0x11f430b8] */
  switch (EDX) {
    case 0: goto L_11f430c8;
    case 1: goto L_11f430d0;
    case 2: goto L_11f430dc;
    case 3: goto L_11f430f0;
    default: x86_unimpl("switch@0x11f42fa5 out of table"); return;
  }
L_11f42fac:;
  /* 11f42fac mov eax, edi */
  EAX = (EDI);
  /* 11f42fae mov edx, 3 */
  EDX = (0x3u);
  /* 11f42fb3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f42fb6 jb 0x11f42fc4 */
  if (C.cf) goto L_11f42fc4;
  /* 11f42fb8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11f42fbb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f42fbd jmp dword ptr [eax*4 + 0x11f42fd0] */
  switch (EAX) {
    case 1: goto L_11f42fe0;
    case 2: goto L_11f4300c;
    case 3: goto L_11f43030;
    default: x86_unimpl("switch@0x11f42fbd out of table"); return;
  }
L_11f42fc4:;
  /* 11f42fc4 jmp dword ptr [ecx*4 + 0x11f430c8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11f430c8)))); return;
  /* 11f42fcb nop  */
  /* nop */
L_11f42fcc:;
  /* 11f42fcc jmp dword ptr [ecx*4 + 0x11f4304c] */
  switch (ECX) {
    case 0: goto L_11f430af;
    case 1: goto L_11f4309c;
    case 2: goto L_11f43094;
    case 3: goto L_11f4308c;
    case 4: goto L_11f43084;
    case 5: goto L_11f4307c;
    case 6: goto L_11f43074;
    case 7: goto L_11f4306c;
    default: x86_unimpl("switch@0x11f42fcc out of table"); return;
  }
  /* 11f42fd3 nop  */
  /* nop */
L_11f42fe0:;
  /* 11f42fe0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f42fe2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f42fe4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f42fe6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f42fe9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f42fec mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f42fef shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f42ff2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f42ff5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f42ff8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f42ffb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f42ffe jb 0x11f42fcc */
  if (C.cf) goto L_11f42fcc;
  /* 11f43000 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f43002 jmp dword ptr [edx*4 + 0x11f430b8] */
  switch (EDX) {
    case 0: goto L_11f430c8;
    case 1: goto L_11f430d0;
    case 2: goto L_11f430dc;
    case 3: goto L_11f430f0;
    default: x86_unimpl("switch@0x11f43002 out of table"); return;
  }
  /* 11f43009 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f4300c:;
  /* 11f4300c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f4300e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f43010 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f43012 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f43015 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f43018 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f4301b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f4301e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f43021 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43024 jb 0x11f42fcc */
  if (C.cf) goto L_11f42fcc;
  /* 11f43026 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f43028 jmp dword ptr [edx*4 + 0x11f430b8] */
  switch (EDX) {
    case 0: goto L_11f430c8;
    case 1: goto L_11f430d0;
    case 2: goto L_11f430dc;
    case 3: goto L_11f430f0;
    default: x86_unimpl("switch@0x11f43028 out of table"); return;
  }
  /* 11f4302f nop  */
  /* nop */
L_11f43030:;
  /* 11f43030 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f43032 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f43034 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f43036 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f43037 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f4303a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f4303b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f4303e jb 0x11f42fcc */
  if (C.cf) goto L_11f42fcc;
  /* 11f43040 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f43042 jmp dword ptr [edx*4 + 0x11f430b8] */
  switch (EDX) {
    case 0: goto L_11f430c8;
    case 1: goto L_11f430d0;
    case 2: goto L_11f430dc;
    case 3: goto L_11f430f0;
    default: x86_unimpl("switch@0x11f43042 out of table"); return;
  }
  /* 11f43049 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f4306c:;
  /* 11f4306c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11f43070 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11f43074:;
  /* 11f43074 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11f43078 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11f4307c:;
  /* 11f4307c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11f43080 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11f43084:;
  /* 11f43084 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11f43088 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11f4308c:;
  /* 11f4308c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11f43090 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11f43094:;
  /* 11f43094 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11f43098 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11f4309c:;
  /* 11f4309c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11f430a0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11f430a4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11f430ab add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f430ad add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11f430af:;
  /* 11f430af jmp dword ptr [edx*4 + 0x11f430b8] */
  switch (EDX) {
    case 0: goto L_11f430c8;
    case 1: goto L_11f430d0;
    case 2: goto L_11f430dc;
    case 3: goto L_11f430f0;
    default: x86_unimpl("switch@0x11f430af out of table"); return;
  }
  /* 11f430b6 mov edi, edi */
  EDI = (EDI);
L_11f430c8:;
  /* 11f430c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f430cb pop esi */
  ESI = (pop32());
  /* 11f430cc pop edi */
  EDI = (pop32());
  /* 11f430cd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f430ce ret  */
  ESPCHK(0x11f42f70u, _esp0);
  ESP += 4; return;
  /* 11f430cf nop  */
  /* nop */
L_11f430d0:;
  /* 11f430d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f430d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f430d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f430d7 pop esi */
  ESI = (pop32());
  /* 11f430d8 pop edi */
  EDI = (pop32());
  /* 11f430d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f430da ret  */
  ESPCHK(0x11f42f70u, _esp0);
  ESP += 4; return;
  /* 11f430db nop  */
  /* nop */
L_11f430dc:;
  /* 11f430dc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f430de mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f430e0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f430e3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f430e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f430e9 pop esi */
  ESI = (pop32());
  /* 11f430ea pop edi */
  EDI = (pop32());
  /* 11f430eb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f430ec ret  */
  ESPCHK(0x11f42f70u, _esp0);
  ESP += 4; return;
  /* 11f430ed lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f430f0:;
  /* 11f430f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f430f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f430f4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f430f7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f430fa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f430fd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f43100 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f43103 pop esi */
  ESI = (pop32());
  /* 11f43104 pop edi */
  EDI = (pop32());
  /* 11f43105 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f43106 ret  */
  ESPCHK(0x11f42f70u, _esp0);
  ESP += 4; return;
  /* 11f43107 nop  */
  /* nop */
L_11f43108:;
  /* 11f43108 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11f4310c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11f43110 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11f43116 jne 0x11f4313c */
  if (!C.zf) goto L_11f4313c;
  /* 11f43118 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f4311b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11f4311e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43121 jb 0x11f43130 */
  if (C.cf) goto L_11f43130;
  /* 11f43123 std  */
  C.df=1;
  /* 11f43124 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f43126 cld  */
  C.df=0;
  /* 11f43127 jmp dword ptr [edx*4 + 0x11f43250] */
  switch (EDX) {
    case 0: goto L_11f43260;
    case 1: goto L_11f43268;
    case 2: goto L_11f43278;
    case 3: goto L_11f4328c;
    default: x86_unimpl("switch@0x11f43127 out of table"); return;
  }
  /* 11f4312e mov edi, edi */
  EDI = (EDI);
L_11f43130:;
  /* 11f43130 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f43132 jmp dword ptr [ecx*4 + 0x11f43200] */
  switch (ECX) {
    case 0: goto L_11f43247;
    default: x86_unimpl("switch@0x11f43132 out of table"); return;
  }
  /* 11f43139 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f4313c:;
  /* 11f4313c mov eax, edi */
  EAX = (EDI);
  /* 11f4313e mov edx, 3 */
  EDX = (0x3u);
  /* 11f43143 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43146 jb 0x11f43154 */
  if (C.cf) goto L_11f43154;
  /* 11f43148 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11f4314b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f4314d jmp dword ptr [eax*4 + 0x11f43158] */
  switch (EAX) {
    case 1: goto L_11f43168;
    case 2: goto L_11f43188;
    case 3: goto L_11f431b0;
    default: x86_unimpl("switch@0x11f4314d out of table"); return;
  }
L_11f43154:;
  /* 11f43154 jmp dword ptr [ecx*4 + 0x11f43250] */
  switch (ECX) {
    case 0: goto L_11f43260;
    case 1: goto L_11f43268;
    case 2: goto L_11f43278;
    case 3: goto L_11f4328c;
    default: x86_unimpl("switch@0x11f43154 out of table"); return;
  }
  /* 11f4315b nop  */
  /* nop */
L_11f43168:;
  /* 11f43168 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f4316b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f4316d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f43170 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11f43171 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f43174 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11f43175 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43178 jb 0x11f43130 */
  if (C.cf) goto L_11f43130;
  /* 11f4317a std  */
  C.df=1;
  /* 11f4317b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f4317d cld  */
  C.df=0;
  /* 11f4317e jmp dword ptr [edx*4 + 0x11f43250] */
  switch (EDX) {
    case 0: goto L_11f43260;
    case 1: goto L_11f43268;
    case 2: goto L_11f43278;
    case 3: goto L_11f4328c;
    default: x86_unimpl("switch@0x11f4317e out of table"); return;
  }
  /* 11f43185 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f43188:;
  /* 11f43188 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f4318b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f4318d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f43190 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f43193 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f43196 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f43199 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f4319c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f4319f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f431a2 jb 0x11f43130 */
  if (C.cf) goto L_11f43130;
  /* 11f431a4 std  */
  C.df=1;
  /* 11f431a5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f431a7 cld  */
  C.df=0;
  /* 11f431a8 jmp dword ptr [edx*4 + 0x11f43250] */
  switch (EDX) {
    case 0: goto L_11f43260;
    case 1: goto L_11f43268;
    case 2: goto L_11f43278;
    case 3: goto L_11f4328c;
    default: x86_unimpl("switch@0x11f431a8 out of table"); return;
  }
  /* 11f431af nop  */
  /* nop */
L_11f431b0:;
  /* 11f431b0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f431b3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f431b5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f431b8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f431bb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f431be mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f431c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f431c4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f431c7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f431ca sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f431cd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f431d0 jb 0x11f43130 */
  if (C.cf) goto L_11f43130;
  /* 11f431d6 std  */
  C.df=1;
  /* 11f431d7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f431d9 cld  */
  C.df=0;
  /* 11f431da jmp dword ptr [edx*4 + 0x11f43250] */
  switch (EDX) {
    case 0: goto L_11f43260;
    case 1: goto L_11f43268;
    case 2: goto L_11f43278;
    case 3: goto L_11f4328c;
    default: x86_unimpl("switch@0x11f431da out of table"); return;
  }
  /* 11f431e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11f431e4 add al, 0x32 */
  { uint32_t _a=(AL),_b=(0x32u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11f431e6 hlt  */
  x86_unimpl("hlt @ 0x11f431e6");
  /* 11f431e7 adc dword ptr [edx + esi], ecx */
  { uint32_t _a=(r32((uint32_t)(EDX + ESI*1))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(EDX + ESI*1), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f431ea hlt  */
  x86_unimpl("hlt @ 0x11f431ea");
  /* 11f431eb adc dword ptr [edx + esi], edx */
  { uint32_t _a=(r32((uint32_t)(EDX + ESI*1))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EDX + ESI*1), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f431ee hlt  */
  x86_unimpl("hlt @ 0x11f431ee");
  /* 11f431ef adc dword ptr [edx + esi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDX + ESI*1))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(EDX + ESI*1), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f431f2 hlt  */
  x86_unimpl("hlt @ 0x11f431f2");
  /* 11f431f3 adc dword ptr [edx + esi], esp */
  { uint32_t _a=(r32((uint32_t)(EDX + ESI*1))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(EDX + ESI*1), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f431f6 hlt  */
  x86_unimpl("hlt @ 0x11f431f6");
  /* 11f431f7 adc dword ptr [edx + esi], ebp */
  { uint32_t _a=(r32((uint32_t)(EDX + ESI*1))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(EDX + ESI*1), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f431fa hlt  */
  x86_unimpl("hlt @ 0x11f431fa");
  /* 11f431fb adc dword ptr [edx + esi], esi */
  { uint32_t _a=(r32((uint32_t)(EDX + ESI*1))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(EDX + ESI*1), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f431fe hlt  */
  x86_unimpl("hlt @ 0x11f431fe");
  /* 11f43204 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11f43208 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11f4320c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11f43210 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11f43214 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11f43218 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11f4321c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11f43220 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11f43224 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11f43228 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11f4322c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11f43230 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11f43234 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11f43238 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11f4323c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11f43243 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f43245 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11f43247:;
  /* 11f43247 jmp dword ptr [edx*4 + 0x11f43250] */
  switch (EDX) {
    case 0: goto L_11f43260;
    case 1: goto L_11f43268;
    case 2: goto L_11f43278;
    case 3: goto L_11f4328c;
    default: x86_unimpl("switch@0x11f43247 out of table"); return;
  }
  /* 11f4324e mov edi, edi */
  EDI = (EDI);
L_11f43260:;
  /* 11f43260 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f43263 pop esi */
  ESI = (pop32());
  /* 11f43264 pop edi */
  EDI = (pop32());
  /* 11f43265 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f43266 ret  */
  ESPCHK(0x11f42f70u, _esp0);
  ESP += 4; return;
  /* 11f43267 nop  */
  /* nop */
L_11f43268:;
  /* 11f43268 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f4326b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f4326e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f43271 pop esi */
  ESI = (pop32());
  /* 11f43272 pop edi */
  EDI = (pop32());
  /* 11f43273 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f43274 ret  */
  ESPCHK(0x11f42f70u, _esp0);
  ESP += 4; return;
  /* 11f43275 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f43278:;
  /* 11f43278 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f4327b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f4327e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f43281 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f43284 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f43287 pop esi */
  ESI = (pop32());
  /* 11f43288 pop edi */
  EDI = (pop32());
  /* 11f43289 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f4328a ret  */
  ESPCHK(0x11f42f70u, _esp0);
  ESP += 4; return;
  /* 11f4328b nop  */
  /* nop */
L_11f4328c:;
  /* 11f4328c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f4328f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f43292 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f43295 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f43298 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f4329b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f4329e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f432a1 pop esi */
  ESI = (pop32());
  /* 11f432a2 pop edi */
  EDI = (pop32());
  /* 11f432a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f432a4 ret  */
  ESPCHK(0x11f42f70u, _esp0);
  ESP += 4; return;
}

/* FUN_100032a5 @ 0x11f432a5 (62 bytes, 15 insns) */
void f_11f432a5(void) {
  FTRACE(0x11f432a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f432a5 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11f432aa push 0 */
  push32((uint32_t)(0x0u));
  /* 11f432ac push dword ptr [0x11f46ca8] */
  push32((uint32_t)(r32((uint32_t)(0x11f46ca8))));
  /* 11f432b2 call dword ptr [0x11f45038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45038))), 0x11f432b8u);
  /* 11f432b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f432ba mov dword ptr [0x11f46a7c], eax */
  w32((uint32_t)(0x11f46a7c), (EAX));
  /* 11f432bf jne 0x11f432c2 */
  if (!C.zf) goto L_11f432c2;
  /* 11f432c1 ret  */
  ESPCHK(0x11f432a5u, _esp0);
  ESP += 4; return;
L_11f432c2:;
  /* 11f432c2 and dword ptr [0x11f46a74], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11f46a74)))&(0x0u); w32((uint32_t)(0x11f46a74), (_r)); fl_logic(_r,32); }
  /* 11f432c9 and dword ptr [0x11f46a78], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11f46a78)))&(0x0u); w32((uint32_t)(0x11f46a78), (_r)); fl_logic(_r,32); }
  /* 11f432d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f432d2 mov dword ptr [0x11f46a70], eax */
  w32((uint32_t)(0x11f46a70), (EAX));
  /* 11f432d7 mov dword ptr [0x11f46a68], 0x10 */
  w32((uint32_t)(0x11f46a68), (0x10u));
  /* 11f432e1 pop eax */
  EAX = (pop32());
  /* 11f432e2 ret  */
  ESPCHK(0x11f432a5u, _esp0);
  ESP += 4; return;
}

/* FUN_100032e3 @ 0x11f432e3 (43 bytes, 14 insns) */
void f_11f432e3(void) {
  FTRACE(0x11f432e3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f432e3 mov eax, dword ptr [0x11f46a78] */
  EAX = (r32((uint32_t)(0x11f46a78)));
  /* 11f432e8 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11f432eb mov eax, dword ptr [0x11f46a7c] */
  EAX = (r32((uint32_t)(0x11f46a7c)));
  /* 11f432f0 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_11f432f3:;
  /* 11f432f3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f432f5 jae 0x11f4330b */
  if (!C.cf) goto L_11f4330b;
  /* 11f432f7 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f432fb sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f432fe cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43304 jb 0x11f4330d */
  if (C.cf) goto L_11f4330d;
  /* 11f43306 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f43309 jmp 0x11f432f3 */
  goto L_11f432f3;
L_11f4330b:;
  /* 11f4330b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f4330d:;
  /* 11f4330d ret  */
  ESPCHK(0x11f432e3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000330e @ 0x11f4330e (811 bytes, 264 insns) */
void f_11f4330e(void) {
  FTRACE(0x11f4330eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f4330e push ebp */
  push32((uint32_t)(EBP));
  /* 11f4330f mov ebp, esp */
  EBP = (ESP);
  /* 11f43311 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f43314 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f43317 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f4331a push ebx */
  push32((uint32_t)(EBX));
  /* 11f4331b push esi */
  push32((uint32_t)(ESI));
  /* 11f4331c mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11f4331f mov esi, edx */
  ESI = (EDX);
  /* 11f43321 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f43324 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 11f43327 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f4332a push edi */
  push32((uint32_t)(EDI));
  /* 11f4332b shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 11f4332e mov ecx, esi */
  ECX = (ESI);
  /* 11f43330 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 11f43333 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f43339 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11f4333a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11f4333d lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11f43344 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11f43347 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11f4334a mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 11f4334d test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 11f43350 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f43353 jne 0x11f433d4 */
  if (!C.zf) goto L_11f433d4;
  /* 11f43355 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11f43358 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11f4335a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f4335b pop edi */
  EDI = (pop32());
  /* 11f4335c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11f4335f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43361 jbe 0x11f43366 */
  if ((C.cf||C.zf)) goto L_11f43366;
  /* 11f43363 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11f43366:;
  /* 11f43366 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11f4336a cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f4336e jne 0x11f433b8 */
  if (!C.zf) goto L_11f433b8;
  /* 11f43370 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f43373 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43376 jae 0x11f43394 */
  if (!C.cf) goto L_11f43394;
  /* 11f43378 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11f4337d shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11f4337f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11f43383 not edi */
  EDI = (~(EDI));
  /* 11f43385 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11f43389 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11f4338b jne 0x11f433b8 */
  if (!C.zf) goto L_11f433b8;
  /* 11f4338d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f43390 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11f43392 jmp 0x11f433b8 */
  goto L_11f433b8;
L_11f43394:;
  /* 11f43394 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f43397 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11f4339c shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11f4339e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f433a1 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11f433a5 not edi */
  EDI = (~(EDI));
  /* 11f433a7 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11f433ae dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11f433b0 jne 0x11f433b8 */
  if (!C.zf) goto L_11f433b8;
  /* 11f433b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f433b5 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11f433b8:;
  /* 11f433b8 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 11f433bc mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11f433c0 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11f433c3 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11f433c7 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 11f433cb add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f433ce mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11f433d1 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_11f433d4:;
  /* 11f433d4 mov edi, ebx */
  EDI = (EBX);
  /* 11f433d6 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11f433d9 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11f433da cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f433dd jbe 0x11f433e2 */
  if ((C.cf||C.zf)) goto L_11f433e2;
  /* 11f433df push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11f433e1 pop edi */
  EDI = (pop32());
L_11f433e2:;
  /* 11f433e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f433e5 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11f433e8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11f433eb jne 0x11f43491 */
  if (!C.zf) goto L_11f43491;
  /* 11f433f1 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f433f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f433f7 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11f433fa push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11f433fc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11f433ff dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f43400 pop edx */
  EDX = (pop32());
  /* 11f43401 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43403 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11f43406 jbe 0x11f4340d */
  if ((C.cf||C.zf)) goto L_11f4340d;
  /* 11f43408 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11f4340b mov ecx, edx */
  ECX = (EDX);
L_11f4340d:;
  /* 11f4340d add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f43410 mov edi, ebx */
  EDI = (EBX);
  /* 11f43412 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11f43415 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11f43418 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11f43419 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f4341b jbe 0x11f4341f */
  if ((C.cf||C.zf)) goto L_11f4341f;
  /* 11f4341d mov edi, edx */
  EDI = (EDX);
L_11f4341f:;
  /* 11f4341f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43421 je 0x11f4348e */
  if (C.zf) goto L_11f4348e;
  /* 11f43423 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f43426 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f43429 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f4342c jne 0x11f43476 */
  if (!C.zf) goto L_11f43476;
  /* 11f4342e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f43431 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43434 jae 0x11f43452 */
  if (!C.cf) goto L_11f43452;
  /* 11f43436 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f4343b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f4343d lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11f43441 not edx */
  EDX = (~(EDX));
  /* 11f43443 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11f43447 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11f43449 jne 0x11f43476 */
  if (!C.zf) goto L_11f43476;
  /* 11f4344b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f4344e and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11f43450 jmp 0x11f43476 */
  goto L_11f43476;
L_11f43452:;
  /* 11f43452 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f43455 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f4345a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f4345c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f4345f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11f43463 not edx */
  EDX = (~(EDX));
  /* 11f43465 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11f4346c dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11f4346e jne 0x11f43476 */
  if (!C.zf) goto L_11f43476;
  /* 11f43470 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f43473 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11f43476:;
  /* 11f43476 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f43479 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f4347c mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f4347f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11f43482 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f43485 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f43488 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f4348b mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11f4348e:;
  /* 11f4348e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11f43491:;
  /* 11f43491 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43495 jne 0x11f434a0 */
  if (!C.zf) goto L_11f434a0;
  /* 11f43497 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f4349a je 0x11f43529 */
  if (C.zf) goto L_11f43529;
L_11f434a0:;
  /* 11f434a0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f434a3 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11f434a6 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f434a9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11f434ac mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f434af lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11f434b2 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11f434b5 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11f434b8 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f434bb mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11f434be mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f434c1 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f434c4 jne 0x11f43529 */
  if (!C.zf) goto L_11f43529;
  /* 11f434c6 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 11f434ca cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f434cd mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11f434d0 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11f434d2 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 11f434d6 jae 0x11f434fd */
  if (!C.cf) goto L_11f434fd;
  /* 11f434d8 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f434dc jne 0x11f434ec */
  if (!C.zf) goto L_11f434ec;
  /* 11f434de mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11f434e3 mov ecx, edi */
  ECX = (EDI);
  /* 11f434e5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11f434e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f434ea or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11f434ec:;
  /* 11f434ec mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11f434f1 mov ecx, edi */
  ECX = (EDI);
  /* 11f434f3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11f434f5 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 11f434f9 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11f434fb jmp 0x11f43526 */
  goto L_11f43526;
L_11f434fd:;
  /* 11f434fd cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f43501 jne 0x11f43513 */
  if (!C.zf) goto L_11f43513;
  /* 11f43503 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11f43506 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11f4350b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11f4350d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f43510 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11f43513:;
  /* 11f43513 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11f43516 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11f4351b shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11f4351d lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 11f43524 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11f43526:;
  /* 11f43526 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_11f43529:;
  /* 11f43529 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f4352c mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 11f4352e mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 11f43532 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 11f43534 jne 0x11f43634 */
  if (!C.zf) goto L_11f43634;
  /* 11f4353a mov eax, dword ptr [0x11f46a74] */
  EAX = (r32((uint32_t)(0x11f46a74)));
  /* 11f4353f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f43541 je 0x11f43626 */
  if (C.zf) goto L_11f43626;
  /* 11f43547 mov ecx, dword ptr [0x11f46a6c] */
  ECX = (r32((uint32_t)(0x11f46a6c)));
  /* 11f4354d mov edi, dword ptr [0x11f4504c] */
  EDI = (r32((uint32_t)(0x11f4504c)));
  /* 11f43553 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11f43556 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f43559 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 11f4355e push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11f43563 push ebx */
  push32((uint32_t)(EBX));
  /* 11f43564 push ecx */
  push32((uint32_t)(ECX));
  /* 11f43565 call edi */
  call_ind((uint32_t)(EDI), 0x11f43567u);
  /* 11f43567 mov ecx, dword ptr [0x11f46a6c] */
  ECX = (r32((uint32_t)(0x11f46a6c)));
  /* 11f4356d mov eax, dword ptr [0x11f46a74] */
  EAX = (r32((uint32_t)(0x11f46a74)));
  /* 11f43572 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f43577 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f43579 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11f4357c mov eax, dword ptr [0x11f46a74] */
  EAX = (r32((uint32_t)(0x11f46a74)));
  /* 11f43581 mov ecx, dword ptr [0x11f46a6c] */
  ECX = (r32((uint32_t)(0x11f46a6c)));
  /* 11f43587 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f4358a and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11f43592 mov eax, dword ptr [0x11f46a74] */
  EAX = (r32((uint32_t)(0x11f46a74)));
  /* 11f43597 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f4359a dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 11f4359d mov eax, dword ptr [0x11f46a74] */
  EAX = (r32((uint32_t)(0x11f46a74)));
  /* 11f435a2 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f435a5 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f435a9 jne 0x11f435b4 */
  if (!C.zf) goto L_11f435b4;
  /* 11f435ab and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11f435af mov eax, dword ptr [0x11f46a74] */
  EAX = (r32((uint32_t)(0x11f46a74)));
L_11f435b4:;
  /* 11f435b4 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f435b8 jne 0x11f43626 */
  if (!C.zf) goto L_11f43626;
  /* 11f435ba push ebx */
  push32((uint32_t)(EBX));
  /* 11f435bb push 0 */
  push32((uint32_t)(0x0u));
  /* 11f435bd push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11f435c0 call edi */
  call_ind((uint32_t)(EDI), 0x11f435c2u);
  /* 11f435c2 mov eax, dword ptr [0x11f46a74] */
  EAX = (r32((uint32_t)(0x11f46a74)));
  /* 11f435c7 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11f435ca push 0 */
  push32((uint32_t)(0x0u));
  /* 11f435cc push dword ptr [0x11f46ca8] */
  push32((uint32_t)(r32((uint32_t)(0x11f46ca8))));
  /* 11f435d2 call dword ptr [0x11f45048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45048))), 0x11f435d8u);
  /* 11f435d8 mov eax, dword ptr [0x11f46a78] */
  EAX = (r32((uint32_t)(0x11f46a78)));
  /* 11f435dd mov edx, dword ptr [0x11f46a7c] */
  EDX = (r32((uint32_t)(0x11f46a7c)));
  /* 11f435e3 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f435e6 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11f435e9 mov ecx, eax */
  ECX = (EAX);
  /* 11f435eb mov eax, dword ptr [0x11f46a74] */
  EAX = (r32((uint32_t)(0x11f46a74)));
  /* 11f435f0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f435f2 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 11f435f6 push ecx */
  push32((uint32_t)(ECX));
  /* 11f435f7 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 11f435fa push ecx */
  push32((uint32_t)(ECX));
  /* 11f435fb push eax */
  push32((uint32_t)(EAX));
  /* 11f435fc call 0x11f44090 */
  push32(0x11f43601u); f_11f44090();
  /* 11f43601 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f43604 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f43607 dec dword ptr [0x11f46a78] */
  { uint32_t _r=(r32((uint32_t)(0x11f46a78)))-1; w32((uint32_t)(0x11f46a78), (_r)); fl_dec(_r,32); }
  /* 11f4360d cmp eax, dword ptr [0x11f46a74] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11f46a74))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43613 jbe 0x11f43618 */
  if ((C.cf||C.zf)) goto L_11f43618;
  /* 11f43615 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11f43618:;
  /* 11f43618 mov ecx, dword ptr [0x11f46a7c] */
  ECX = (r32((uint32_t)(0x11f46a7c)));
  /* 11f4361e mov dword ptr [0x11f46a70], ecx */
  w32((uint32_t)(0x11f46a70), (ECX));
  /* 11f43624 jmp 0x11f43629 */
  goto L_11f43629;
L_11f43626:;
  /* 11f43626 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11f43629:;
  /* 11f43629 mov dword ptr [0x11f46a74], eax */
  w32((uint32_t)(0x11f46a74), (EAX));
  /* 11f4362e mov dword ptr [0x11f46a6c], esi */
  w32((uint32_t)(0x11f46a6c), (ESI));
L_11f43634:;
  /* 11f43634 pop edi */
  EDI = (pop32());
  /* 11f43635 pop esi */
  ESI = (pop32());
  /* 11f43636 pop ebx */
  EBX = (pop32());
  /* 11f43637 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f43638 ret  */
  ESPCHK(0x11f4330eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003639 @ 0x11f43639 (777 bytes, 275 insns) */
void f_11f43639(void) {
  FTRACE(0x11f43639u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f43639 push ebp */
  push32((uint32_t)(EBP));
  /* 11f4363a mov ebp, esp */
  EBP = (ESP);
  /* 11f4363c sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f4363f mov eax, dword ptr [0x11f46a78] */
  EAX = (r32((uint32_t)(0x11f46a78)));
  /* 11f43644 mov edx, dword ptr [0x11f46a7c] */
  EDX = (r32((uint32_t)(0x11f46a7c)));
  /* 11f4364a push ebx */
  push32((uint32_t)(EBX));
  /* 11f4364b push esi */
  push32((uint32_t)(ESI));
  /* 11f4364c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f4364f push edi */
  push32((uint32_t)(EDI));
  /* 11f43650 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11f43653 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f43656 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11f43659 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 11f4365c and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11f4365f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11f43662 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11f43665 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f43666 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43669 jge 0x11f43679 */
  if ((C.sf==C.of)) goto L_11f43679;
  /* 11f4366b or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11f4366e shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11f43670 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11f43674 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11f43677 jmp 0x11f43689 */
  goto L_11f43689;
L_11f43679:;
  /* 11f43679 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f4367c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f4367f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11f43681 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f43683 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11f43686 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11f43689:;
  /* 11f43689 mov eax, dword ptr [0x11f46a70] */
  EAX = (r32((uint32_t)(0x11f46a70)));
  /* 11f4368e mov ebx, eax */
  EBX = (EAX);
  /* 11f43690 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43692 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11f43695 jae 0x11f436b0 */
  if (!C.cf) goto L_11f436b0;
L_11f43697:;
  /* 11f43697 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11f4369a mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11f4369c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11f4369f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11f436a1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11f436a3 jne 0x11f436b0 */
  if (!C.zf) goto L_11f436b0;
  /* 11f436a5 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f436a8 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f436ab mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11f436ae jb 0x11f43697 */
  if (C.cf) goto L_11f43697;
L_11f436b0:;
  /* 11f436b0 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f436b3 jne 0x11f4372e */
  if (!C.zf) goto L_11f4372e;
  /* 11f436b5 mov ebx, edx */
  EBX = (EDX);
L_11f436b7:;
  /* 11f436b7 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f436b9 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11f436bc jae 0x11f436d3 */
  if (!C.cf) goto L_11f436d3;
  /* 11f436be mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11f436c1 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11f436c3 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11f436c6 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11f436c8 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11f436ca jne 0x11f436d1 */
  if (!C.zf) goto L_11f436d1;
  /* 11f436cc add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f436cf jmp 0x11f436b7 */
  goto L_11f436b7;
L_11f436d1:;
  /* 11f436d1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11f436d3:;
  /* 11f436d3 jne 0x11f4372e */
  if (!C.zf) goto L_11f4372e;
L_11f436d5:;
  /* 11f436d5 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f436d8 jae 0x11f436eb */
  if (!C.cf) goto L_11f436eb;
  /* 11f436da cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f436de jne 0x11f436e8 */
  if (!C.zf) goto L_11f436e8;
  /* 11f436e0 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f436e3 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11f436e6 jmp 0x11f436d5 */
  goto L_11f436d5;
L_11f436e8:;
  /* 11f436e8 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11f436eb:;
  /* 11f436eb jne 0x11f43713 */
  if (!C.zf) goto L_11f43713;
  /* 11f436ed mov ebx, edx */
  EBX = (EDX);
L_11f436ef:;
  /* 11f436ef cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f436f1 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11f436f4 jae 0x11f43703 */
  if (!C.cf) goto L_11f43703;
  /* 11f436f6 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f436fa jne 0x11f43701 */
  if (!C.zf) goto L_11f43701;
  /* 11f436fc add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f436ff jmp 0x11f436ef */
  goto L_11f436ef;
L_11f43701:;
  /* 11f43701 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11f43703:;
  /* 11f43703 jne 0x11f43713 */
  if (!C.zf) goto L_11f43713;
  /* 11f43705 call 0x11f43942 */
  push32(0x11f4370au); f_11f43942();
  /* 11f4370a mov ebx, eax */
  EBX = (EAX);
  /* 11f4370c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11f4370e mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11f43711 je 0x11f43727 */
  if (C.zf) goto L_11f43727;
L_11f43713:;
  /* 11f43713 push ebx */
  push32((uint32_t)(EBX));
  /* 11f43714 call 0x11f439f3 */
  push32(0x11f43719u); f_11f439f3();
  /* 11f43719 pop ecx */
  ECX = (pop32());
  /* 11f4371a mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 11f4371d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11f4371f mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11f43722 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43725 jne 0x11f4372e */
  if (!C.zf) goto L_11f4372e;
L_11f43727:;
  /* 11f43727 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f43729 jmp 0x11f4393d */
  goto L_11f4393d;
L_11f4372e:;
  /* 11f4372e mov dword ptr [0x11f46a70], ebx */
  w32((uint32_t)(0x11f46a70), (EBX));
  /* 11f43734 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11f43737 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11f43739 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f4373c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f4373f je 0x11f43755 */
  if (C.zf) goto L_11f43755;
  /* 11f43741 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11f43748 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11f4374c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11f4374f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11f43751 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11f43753 jne 0x11f4378c */
  if (!C.zf) goto L_11f4378c;
L_11f43755:;
  /* 11f43755 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 11f4375b mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 11f4375e and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11f43761 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11f43764 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f43768 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 11f4376b or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11f4376d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11f43770 jne 0x11f43789 */
  if (!C.zf) goto L_11f43789;
L_11f43772:;
  /* 11f43772 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 11f43778 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11f4377b and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11f4377e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f43781 mov edi, esi */
  EDI = (ESI);
  /* 11f43783 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 11f43785 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 11f43787 je 0x11f43772 */
  if (C.zf) goto L_11f43772;
L_11f43789:;
  /* 11f43789 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_11f4378c:;
  /* 11f4378c mov ecx, edx */
  ECX = (EDX);
  /* 11f4378e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f43790 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f43796 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11f4379d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f437a0 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11f437a4 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11f437a6 jne 0x11f437b5 */
  if (!C.zf) goto L_11f437b5;
  /* 11f437a8 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11f437af push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11f437b1 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11f437b4 pop edi */
  EDI = (pop32());
L_11f437b5:;
  /* 11f437b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f437b7 jl 0x11f437be */
  if ((C.sf!=C.of)) goto L_11f437be;
  /* 11f437b9 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11f437bb inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f437bc jmp 0x11f437b5 */
  goto L_11f437b5;
L_11f437be:;
  /* 11f437be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f437c1 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 11f437c5 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11f437c7 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f437ca mov esi, ecx */
  ESI = (ECX);
  /* 11f437cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f437cf sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11f437d2 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11f437d3 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f437d6 jle 0x11f437db */
  if ((C.zf||C.sf!=C.of)) goto L_11f437db;
  /* 11f437d8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11f437da pop esi */
  ESI = (pop32());
L_11f437db:;
  /* 11f437db cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f437dd je 0x11f438f0 */
  if (C.zf) goto L_11f438f0;
  /* 11f437e3 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f437e6 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f437e9 jne 0x11f4384c */
  if (!C.zf) goto L_11f4384c;
  /* 11f437eb cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f437ee jge 0x11f4381b */
  if ((C.sf==C.of)) goto L_11f4381b;
  /* 11f437f0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11f437f5 mov ecx, edi */
  ECX = (EDI);
  /* 11f437f7 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11f437f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f437fc lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11f43800 not ebx */
  EBX = (~(EBX));
  /* 11f43802 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11f43805 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 11f43809 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 11f4380d dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11f4380f jne 0x11f43849 */
  if (!C.zf) goto L_11f43849;
  /* 11f43811 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f43814 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f43817 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 11f43819 jmp 0x11f4384c */
  goto L_11f4384c;
L_11f4381b:;
  /* 11f4381b lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11f4381e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11f43823 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11f43825 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f43828 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11f4382c lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11f43833 not ebx */
  EBX = (~(EBX));
  /* 11f43835 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11f43837 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11f43839 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11f4383c jne 0x11f43849 */
  if (!C.zf) goto L_11f43849;
  /* 11f4383e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f43841 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f43844 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11f43847 jmp 0x11f4384c */
  goto L_11f4384c;
L_11f43849:;
  /* 11f43849 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11f4384c:;
  /* 11f4384c mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 11f4384f mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 11f43852 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43856 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11f43859 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f4385c mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 11f4385f mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11f43862 je 0x11f438fc */
  if (C.zf) goto L_11f438fc;
  /* 11f43868 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f4386b mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 11f4386f lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11f43872 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 11f43875 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11f43878 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11f4387b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f4387e mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11f43881 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f43884 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43887 jne 0x11f438ed */
  if (!C.zf) goto L_11f438ed;
  /* 11f43889 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 11f4388d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43890 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11f43893 jge 0x11f438be */
  if ((C.sf==C.of)) goto L_11f438be;
  /* 11f43895 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11f43897 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f4389b mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11f4389f jne 0x11f438ac */
  if (!C.zf) goto L_11f438ac;
  /* 11f438a1 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11f438a6 mov ecx, esi */
  ECX = (ESI);
  /* 11f438a8 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11f438aa or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_11f438ac:;
  /* 11f438ac mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11f438b1 mov ecx, esi */
  ECX = (ESI);
  /* 11f438b3 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11f438b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f438b8 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11f438bc jmp 0x11f438ed */
  goto L_11f438ed;
L_11f438be:;
  /* 11f438be inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11f438c0 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f438c4 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11f438c8 jne 0x11f438d7 */
  if (!C.zf) goto L_11f438d7;
  /* 11f438ca lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11f438cd mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11f438d2 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11f438d4 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_11f438d7:;
  /* 11f438d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f438da lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11f438e1 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11f438e4 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11f438e9 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11f438eb or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11f438ed:;
  /* 11f438ed mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11f438f0:;
  /* 11f438f0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f438f2 je 0x11f438ff */
  if (C.zf) goto L_11f438ff;
  /* 11f438f4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11f438f6 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 11f438fa jmp 0x11f438ff */
  goto L_11f438ff;
L_11f438fc:;
  /* 11f438fc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11f438ff:;
  /* 11f438ff mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 11f43902 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f43904 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11f43907 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11f43909 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 11f4390d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11f43910 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11f43912 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f43914 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 11f43917 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11f43919 jne 0x11f43935 */
  if (!C.zf) goto L_11f43935;
  /* 11f4391b cmp ebx, dword ptr [0x11f46a74] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11f46a74))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43921 jne 0x11f43935 */
  if (!C.zf) goto L_11f43935;
  /* 11f43923 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f43926 cmp ecx, dword ptr [0x11f46a6c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11f46a6c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f4392c jne 0x11f43935 */
  if (!C.zf) goto L_11f43935;
  /* 11f4392e and dword ptr [0x11f46a74], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11f46a74)))&(0x0u); w32((uint32_t)(0x11f46a74), (_r)); fl_logic(_r,32); }
L_11f43935:;
  /* 11f43935 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f43938 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11f4393a lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_11f4393d:;
  /* 11f4393d pop edi */
  EDI = (pop32());
  /* 11f4393e pop esi */
  ESI = (pop32());
  /* 11f4393f pop ebx */
  EBX = (pop32());
  /* 11f43940 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f43941 ret  */
  ESPCHK(0x11f43639u, _esp0);
  ESP += 4; return;
}

/* FUN_10003942 @ 0x11f43942 (177 bytes, 53 insns) */
void f_11f43942(void) {
  FTRACE(0x11f43942u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f43942 mov eax, dword ptr [0x11f46a78] */
  EAX = (r32((uint32_t)(0x11f46a78)));
  /* 11f43947 mov ecx, dword ptr [0x11f46a68] */
  ECX = (r32((uint32_t)(0x11f46a68)));
  /* 11f4394d push esi */
  push32((uint32_t)(ESI));
  /* 11f4394e push edi */
  push32((uint32_t)(EDI));
  /* 11f4394f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f43951 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43953 jne 0x11f43985 */
  if (!C.zf) goto L_11f43985;
  /* 11f43955 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 11f43959 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11f4395c push eax */
  push32((uint32_t)(EAX));
  /* 11f4395d push dword ptr [0x11f46a7c] */
  push32((uint32_t)(r32((uint32_t)(0x11f46a7c))));
  /* 11f43963 push edi */
  push32((uint32_t)(EDI));
  /* 11f43964 push dword ptr [0x11f46ca8] */
  push32((uint32_t)(r32((uint32_t)(0x11f46ca8))));
  /* 11f4396a call dword ptr [0x11f45024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45024))), 0x11f43970u);
  /* 11f43970 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43972 je 0x11f439d5 */
  if (C.zf) goto L_11f439d5;
  /* 11f43974 add dword ptr [0x11f46a68], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x11f46a68))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x11f46a68), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f4397b mov dword ptr [0x11f46a7c], eax */
  w32((uint32_t)(0x11f46a7c), (EAX));
  /* 11f43980 mov eax, dword ptr [0x11f46a78] */
  EAX = (r32((uint32_t)(0x11f46a78)));
L_11f43985:;
  /* 11f43985 mov ecx, dword ptr [0x11f46a7c] */
  ECX = (r32((uint32_t)(0x11f46a7c)));
  /* 11f4398b push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11f43990 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f43992 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f43995 push dword ptr [0x11f46ca8] */
  push32((uint32_t)(r32((uint32_t)(0x11f46ca8))));
  /* 11f4399b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11f4399e call dword ptr [0x11f45038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45038))), 0x11f439a4u);
  /* 11f439a4 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f439a6 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11f439a9 je 0x11f439d5 */
  if (C.zf) goto L_11f439d5;
  /* 11f439ab push 4 */
  push32((uint32_t)(0x4u));
  /* 11f439ad push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11f439b2 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11f439b7 push edi */
  push32((uint32_t)(EDI));
  /* 11f439b8 call dword ptr [0x11f45028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45028))), 0x11f439beu);
  /* 11f439be cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f439c0 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11f439c3 jne 0x11f439d9 */
  if (!C.zf) goto L_11f439d9;
  /* 11f439c5 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11f439c8 push edi */
  push32((uint32_t)(EDI));
  /* 11f439c9 push dword ptr [0x11f46ca8] */
  push32((uint32_t)(r32((uint32_t)(0x11f46ca8))));
  /* 11f439cf call dword ptr [0x11f45048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45048))), 0x11f439d5u);
L_11f439d5:;
  /* 11f439d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f439d7 jmp 0x11f439f0 */
  goto L_11f439f0;
L_11f439d9:;
  /* 11f439d9 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11f439dd mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11f439df mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11f439e2 inc dword ptr [0x11f46a78] */
  { uint32_t _r=(r32((uint32_t)(0x11f46a78)))+1; w32((uint32_t)(0x11f46a78), (_r)); fl_inc(_r,32); }
  /* 11f439e8 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11f439eb or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11f439ee mov eax, esi */
  EAX = (ESI);
L_11f439f0:;
  /* 11f439f0 pop edi */
  EDI = (pop32());
  /* 11f439f1 pop esi */
  ESI = (pop32());
  /* 11f439f2 ret  */
  ESPCHK(0x11f43942u, _esp0);
  ESP += 4; return;
}

/* FUN_100039f3 @ 0x11f439f3 (251 bytes, 85 insns) */
void f_11f439f3(void) {
  FTRACE(0x11f439f3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f439f3 push ebp */
  push32((uint32_t)(EBP));
  /* 11f439f4 mov ebp, esp */
  EBP = (ESP);
  /* 11f439f6 push ecx */
  push32((uint32_t)(ECX));
  /* 11f439f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f439fa push ebx */
  push32((uint32_t)(EBX));
  /* 11f439fb push esi */
  push32((uint32_t)(ESI));
  /* 11f439fc push edi */
  push32((uint32_t)(EDI));
  /* 11f439fd mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 11f43a00 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f43a03 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11f43a05:;
  /* 11f43a05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f43a07 jl 0x11f43a0e */
  if ((C.sf!=C.of)) goto L_11f43a0e;
  /* 11f43a09 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11f43a0b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11f43a0c jmp 0x11f43a05 */
  goto L_11f43a05;
L_11f43a0e:;
  /* 11f43a0e mov eax, ebx */
  EAX = (EBX);
  /* 11f43a10 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11f43a12 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f43a18 pop edx */
  EDX = (pop32());
  /* 11f43a19 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 11f43a20 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f43a23:;
  /* 11f43a23 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 11f43a26 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 11f43a29 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f43a2c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11f43a2d jne 0x11f43a23 */
  if (!C.zf) goto L_11f43a23;
  /* 11f43a2f mov edi, ebx */
  EDI = (EBX);
  /* 11f43a31 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f43a33 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11f43a36 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f43a39 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11f43a3e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11f43a43 push edi */
  push32((uint32_t)(EDI));
  /* 11f43a44 call dword ptr [0x11f45028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45028))), 0x11f43a4au);
  /* 11f43a4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f43a4c jne 0x11f43a56 */
  if (!C.zf) goto L_11f43a56;
  /* 11f43a4e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f43a51 jmp 0x11f43ae9 */
  goto L_11f43ae9;
L_11f43a56:;
  /* 11f43a56 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 11f43a5c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43a5e ja 0x11f43a9c */
  if ((!C.cf&&!C.zf)) goto L_11f43a9c;
  /* 11f43a60 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_11f43a63:;
  /* 11f43a63 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 11f43a67 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 11f43a6e lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 11f43a74 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 11f43a7b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11f43a7d lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 11f43a83 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11f43a86 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 11f43a90 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f43a95 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 11f43a98 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43a9a jbe 0x11f43a63 */
  if ((C.cf||C.zf)) goto L_11f43a63;
L_11f43a9c:;
  /* 11f43a9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f43a9f lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 11f43aa2 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f43aa7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f43aa9 pop edi */
  EDI = (pop32());
  /* 11f43aaa mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11f43aad mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11f43ab0 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 11f43ab3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11f43ab6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11f43ab9 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11f43abe mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 11f43ac5 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 11f43ac8 mov cl, al */
  CL = (AL);
  /* 11f43aca inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11f43acc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f43ace mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f43ad1 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 11f43ad4 jne 0x11f43ad9 */
  if (!C.zf) goto L_11f43ad9;
  /* 11f43ad6 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_11f43ad9:;
  /* 11f43ad9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f43ade mov ecx, ebx */
  ECX = (EBX);
  /* 11f43ae0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f43ae2 not edx */
  EDX = (~(EDX));
  /* 11f43ae4 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11f43ae7 mov eax, ebx */
  EAX = (EBX);
L_11f43ae9:;
  /* 11f43ae9 pop edi */
  EDI = (pop32());
  /* 11f43aea pop esi */
  ESI = (pop32());
  /* 11f43aeb pop ebx */
  EBX = (pop32());
  /* 11f43aec leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f43aed ret  */
  ESPCHK(0x11f439f3u, _esp0);
  ESP += 4; return;
}

/* FUN_10003aee @ 0x11f43aee (137 bytes, 50 insns) */
void f_11f43aee(void) {
  FTRACE(0x11f43aeeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f43aee push ebx */
  push32((uint32_t)(EBX));
  /* 11f43aef xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f43af1 cmp dword ptr [0x11f46a2c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11f46a2c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43af7 push esi */
  push32((uint32_t)(ESI));
  /* 11f43af8 push edi */
  push32((uint32_t)(EDI));
  /* 11f43af9 jne 0x11f43b3d */
  if (!C.zf) goto L_11f43b3d;
  /* 11f43afb push 0x11f45450 */
  push32((uint32_t)(0x11f45450u));
  /* 11f43b00 call dword ptr [0x11f45018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45018))), 0x11f43b06u);
  /* 11f43b06 mov edi, eax */
  EDI = (EAX);
  /* 11f43b08 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43b0a je 0x11f43b73 */
  if (C.zf) goto L_11f43b73;
  /* 11f43b0c mov esi, dword ptr [0x11f4501c] */
  ESI = (r32((uint32_t)(0x11f4501c)));
  /* 11f43b12 push 0x11f45444 */
  push32((uint32_t)(0x11f45444u));
  /* 11f43b17 push edi */
  push32((uint32_t)(EDI));
  /* 11f43b18 call esi */
  call_ind((uint32_t)(ESI), 0x11f43b1au);
  /* 11f43b1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f43b1c mov dword ptr [0x11f46a2c], eax */
  w32((uint32_t)(0x11f46a2c), (EAX));
  /* 11f43b21 je 0x11f43b73 */
  if (C.zf) goto L_11f43b73;
  /* 11f43b23 push 0x11f45434 */
  push32((uint32_t)(0x11f45434u));
  /* 11f43b28 push edi */
  push32((uint32_t)(EDI));
  /* 11f43b29 call esi */
  call_ind((uint32_t)(ESI), 0x11f43b2bu);
  /* 11f43b2b push 0x11f45420 */
  push32((uint32_t)(0x11f45420u));
  /* 11f43b30 push edi */
  push32((uint32_t)(EDI));
  /* 11f43b31 mov dword ptr [0x11f46a30], eax */
  w32((uint32_t)(0x11f46a30), (EAX));
  /* 11f43b36 call esi */
  call_ind((uint32_t)(ESI), 0x11f43b38u);
  /* 11f43b38 mov dword ptr [0x11f46a34], eax */
  w32((uint32_t)(0x11f46a34), (EAX));
L_11f43b3d:;
  /* 11f43b3d mov eax, dword ptr [0x11f46a30] */
  EAX = (r32((uint32_t)(0x11f46a30)));
  /* 11f43b42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f43b44 je 0x11f43b5c */
  if (C.zf) goto L_11f43b5c;
  /* 11f43b46 call eax */
  call_ind((uint32_t)(EAX), 0x11f43b48u);
  /* 11f43b48 mov ebx, eax */
  EBX = (EAX);
  /* 11f43b4a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11f43b4c je 0x11f43b5c */
  if (C.zf) goto L_11f43b5c;
  /* 11f43b4e mov eax, dword ptr [0x11f46a34] */
  EAX = (r32((uint32_t)(0x11f46a34)));
  /* 11f43b53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f43b55 je 0x11f43b5c */
  if (C.zf) goto L_11f43b5c;
  /* 11f43b57 push ebx */
  push32((uint32_t)(EBX));
  /* 11f43b58 call eax */
  call_ind((uint32_t)(EAX), 0x11f43b5au);
  /* 11f43b5a mov ebx, eax */
  EBX = (EAX);
L_11f43b5c:;
  /* 11f43b5c push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11f43b60 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11f43b64 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11f43b68 push ebx */
  push32((uint32_t)(EBX));
  /* 11f43b69 call dword ptr [0x11f46a2c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f46a2c))), 0x11f43b6fu);
L_11f43b6f:;
  /* 11f43b6f pop edi */
  EDI = (pop32());
  /* 11f43b70 pop esi */
  ESI = (pop32());
  /* 11f43b71 pop ebx */
  EBX = (pop32());
  /* 11f43b72 ret  */
  ESPCHK(0x11f43aeeu, _esp0);
  ESP += 4; return;
L_11f43b73:;
  /* 11f43b73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f43b75 jmp 0x11f43b6f */
  goto L_11f43b6f;
}

/* _strncpy @ 0x11f43b80 (254 bytes, 109 insns) */
void f_11f43b80(void) {
  FTRACE(0x11f43b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f43b80 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11f43b84 push edi */
  push32((uint32_t)(EDI));
  /* 11f43b85 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f43b87 je 0x11f43c03 */
  if (C.zf) goto L_11f43c03;
  /* 11f43b89 push esi */
  push32((uint32_t)(ESI));
  /* 11f43b8a push ebx */
  push32((uint32_t)(EBX));
  /* 11f43b8b mov ebx, ecx */
  EBX = (ECX);
  /* 11f43b8d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11f43b91 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11f43b97 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11f43b9b jne 0x11f43ba4 */
  if (!C.zf) goto L_11f43ba4;
  /* 11f43b9d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f43ba0 jne 0x11f43c11 */
  if (!C.zf) goto L_11f43c11;
  /* 11f43ba2 jmp 0x11f43bc5 */
  goto L_11f43bc5;
L_11f43ba4:;
  /* 11f43ba4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f43ba6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f43ba7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f43ba9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f43baa dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f43bab je 0x11f43bd2 */
  if (C.zf) goto L_11f43bd2;
  /* 11f43bad test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f43baf je 0x11f43bda */
  if (C.zf) goto L_11f43bda;
  /* 11f43bb1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11f43bb7 jne 0x11f43ba4 */
  if (!C.zf) goto L_11f43ba4;
  /* 11f43bb9 mov ebx, ecx */
  EBX = (ECX);
  /* 11f43bbb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f43bbe jne 0x11f43c11 */
  if (!C.zf) goto L_11f43c11;
L_11f43bc0:;
  /* 11f43bc0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11f43bc3 je 0x11f43bd2 */
  if (C.zf) goto L_11f43bd2;
L_11f43bc5:;
  /* 11f43bc5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f43bc7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f43bc8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f43bca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f43bcb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f43bcd je 0x11f43bfe */
  if (C.zf) goto L_11f43bfe;
  /* 11f43bcf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11f43bd0 jne 0x11f43bc5 */
  if (!C.zf) goto L_11f43bc5;
L_11f43bd2:;
  /* 11f43bd2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11f43bd6 pop ebx */
  EBX = (pop32());
  /* 11f43bd7 pop esi */
  ESI = (pop32());
  /* 11f43bd8 pop edi */
  EDI = (pop32());
  /* 11f43bd9 ret  */
  ESPCHK(0x11f43b80u, _esp0);
  ESP += 4; return;
L_11f43bda:;
  /* 11f43bda test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11f43be0 je 0x11f43bf4 */
  if (C.zf) goto L_11f43bf4;
L_11f43be2:;
  /* 11f43be2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f43be4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f43be5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f43be6 je 0x11f43c76 */
  if (C.zf) goto L_11f43c76;
  /* 11f43bec test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11f43bf2 jne 0x11f43be2 */
  if (!C.zf) goto L_11f43be2;
L_11f43bf4:;
  /* 11f43bf4 mov ebx, ecx */
  EBX = (ECX);
  /* 11f43bf6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f43bf9 jne 0x11f43c67 */
  if (!C.zf) goto L_11f43c67;
L_11f43bfb:;
  /* 11f43bfb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f43bfd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11f43bfe:;
  /* 11f43bfe dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11f43bff jne 0x11f43bfb */
  if (!C.zf) goto L_11f43bfb;
  /* 11f43c01 pop ebx */
  EBX = (pop32());
  /* 11f43c02 pop esi */
  ESI = (pop32());
L_11f43c03:;
  /* 11f43c03 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f43c07 pop edi */
  EDI = (pop32());
  /* 11f43c08 ret  */
  ESPCHK(0x11f43b80u, _esp0);
  ESP += 4; return;
L_11f43c09:;
  /* 11f43c09 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11f43c0b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f43c0e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f43c0f je 0x11f43bc0 */
  if (C.zf) goto L_11f43bc0;
L_11f43c11:;
  /* 11f43c11 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11f43c16 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11f43c18 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f43c1a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f43c1d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f43c1f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11f43c21 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f43c24 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11f43c29 je 0x11f43c09 */
  if (C.zf) goto L_11f43c09;
  /* 11f43c2b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f43c2d je 0x11f43c5b */
  if (C.zf) goto L_11f43c5b;
  /* 11f43c2f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11f43c31 je 0x11f43c51 */
  if (C.zf) goto L_11f43c51;
  /* 11f43c33 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11f43c39 je 0x11f43c47 */
  if (C.zf) goto L_11f43c47;
  /* 11f43c3b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11f43c41 jne 0x11f43c09 */
  if (!C.zf) goto L_11f43c09;
  /* 11f43c43 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11f43c45 jmp 0x11f43c5f */
  goto L_11f43c5f;
L_11f43c47:;
  /* 11f43c47 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f43c4d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11f43c4f jmp 0x11f43c5f */
  goto L_11f43c5f;
L_11f43c51:;
  /* 11f43c51 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f43c57 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11f43c59 jmp 0x11f43c5f */
  goto L_11f43c5f;
L_11f43c5b:;
  /* 11f43c5b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f43c5d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11f43c5f:;
  /* 11f43c5f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f43c62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f43c64 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f43c65 je 0x11f43c71 */
  if (C.zf) goto L_11f43c71;
L_11f43c67:;
  /* 11f43c67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f43c69:;
  /* 11f43c69 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11f43c6b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f43c6e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f43c6f jne 0x11f43c69 */
  if (!C.zf) goto L_11f43c69;
L_11f43c71:;
  /* 11f43c71 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11f43c74 jne 0x11f43bfb */
  if (!C.zf) goto L_11f43bfb;
L_11f43c76:;
  /* 11f43c76 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11f43c7a pop ebx */
  EBX = (pop32());
  /* 11f43c7b pop esi */
  ESI = (pop32());
  /* 11f43c7c pop edi */
  EDI = (pop32());
  /* 11f43c7d ret  */
  ESPCHK(0x11f43b80u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11f43c80 (88 bytes, 40 insns) */
void f_11f43c80(void) {
  FTRACE(0x11f43c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f43c80 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11f43c84 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f43c88 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f43c8a je 0x11f43cd3 */
  if (C.zf) goto L_11f43cd3;
  /* 11f43c8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f43c8e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11f43c92 push edi */
  push32((uint32_t)(EDI));
  /* 11f43c93 mov edi, ecx */
  EDI = (ECX);
  /* 11f43c95 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43c98 jb 0x11f43cc7 */
  if (C.cf) goto L_11f43cc7;
  /* 11f43c9a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f43c9c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11f43c9f je 0x11f43ca9 */
  if (C.zf) goto L_11f43ca9;
  /* 11f43ca1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11f43ca3:;
  /* 11f43ca3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f43ca5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f43ca6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f43ca7 jne 0x11f43ca3 */
  if (!C.zf) goto L_11f43ca3;
L_11f43ca9:;
  /* 11f43ca9 mov ecx, eax */
  ECX = (EAX);
  /* 11f43cab shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11f43cae add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f43cb0 mov ecx, eax */
  ECX = (EAX);
  /* 11f43cb2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11f43cb5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f43cb7 mov ecx, edx */
  ECX = (EDX);
  /* 11f43cb9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11f43cbc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f43cbf je 0x11f43cc7 */
  if (C.zf) goto L_11f43cc7;
  /* 11f43cc1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11f43cc3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f43cc5 je 0x11f43ccd */
  if (C.zf) goto L_11f43ccd;
L_11f43cc7:;
  /* 11f43cc7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f43cc9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f43cca dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11f43ccb jne 0x11f43cc7 */
  if (!C.zf) goto L_11f43cc7;
L_11f43ccd:;
  /* 11f43ccd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f43cd1 pop edi */
  EDI = (pop32());
  /* 11f43cd2 ret  */
  ESPCHK(0x11f43c80u, _esp0);
  ESP += 4; return;
L_11f43cd3:;
  /* 11f43cd3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f43cd7 ret  */
  ESPCHK(0x11f43c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cd8 @ 0x11f43cd8 (27 bytes, 13 insns) */
void f_11f43cd8(void) {
  FTRACE(0x11f43cd8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f43cd8 mov eax, dword ptr [0x11f46a38] */
  EAX = (r32((uint32_t)(0x11f46a38)));
  /* 11f43cdd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f43cdf je 0x11f43cf0 */
  if (C.zf) goto L_11f43cf0;
  /* 11f43ce1 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11f43ce5 call eax */
  call_ind((uint32_t)(EAX), 0x11f43ce7u);
  /* 11f43ce7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f43ce9 pop ecx */
  ECX = (pop32());
  /* 11f43cea je 0x11f43cf0 */
  if (C.zf) goto L_11f43cf0;
  /* 11f43cec push 1 */
  push32((uint32_t)(0x1u));
  /* 11f43cee pop eax */
  EAX = (pop32());
  /* 11f43cef ret  */
  ESPCHK(0x11f43cd8u, _esp0);
  ESP += 4; return;
L_11f43cf0:;
  /* 11f43cf0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f43cf2 ret  */
  ESPCHK(0x11f43cd8u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cf3 @ 0x11f43cf3 (511 bytes, 193 insns) */
void f_11f43cf3(void) {
  FTRACE(0x11f43cf3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f43cf3 push ebp */
  push32((uint32_t)(EBP));
  /* 11f43cf4 mov ebp, esp */
  EBP = (ESP);
  /* 11f43cf6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f43cf8 push 0x11f45468 */
  push32((uint32_t)(0x11f45468u));
  /* 11f43cfd push 0x11f444c0 */
  push32((uint32_t)(0x11f444c0u));
  /* 11f43d02 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11f43d08 push eax */
  push32((uint32_t)(EAX));
  /* 11f43d09 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11f43d10 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f43d13 push ebx */
  push32((uint32_t)(EBX));
  /* 11f43d14 push esi */
  push32((uint32_t)(ESI));
  /* 11f43d15 push edi */
  push32((uint32_t)(EDI));
  /* 11f43d16 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f43d19 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f43d1b cmp dword ptr [0x11f46a60], edi */
  { uint32_t _a=(r32((uint32_t)(0x11f46a60))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43d21 jne 0x11f43d69 */
  if (!C.zf) goto L_11f43d69;
  /* 11f43d23 push edi */
  push32((uint32_t)(EDI));
  /* 11f43d24 push edi */
  push32((uint32_t)(EDI));
  /* 11f43d25 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f43d27 pop ebx */
  EBX = (pop32());
  /* 11f43d28 push ebx */
  push32((uint32_t)(EBX));
  /* 11f43d29 push 0x11f45460 */
  push32((uint32_t)(0x11f45460u));
  /* 11f43d2e mov esi, 0x100 */
  ESI = (0x100u);
  /* 11f43d33 push esi */
  push32((uint32_t)(ESI));
  /* 11f43d34 push edi */
  push32((uint32_t)(EDI));
  /* 11f43d35 call dword ptr [0x11f4500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f4500c))), 0x11f43d3bu);
  /* 11f43d3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f43d3d je 0x11f43d47 */
  if (C.zf) goto L_11f43d47;
  /* 11f43d3f mov dword ptr [0x11f46a60], ebx */
  w32((uint32_t)(0x11f46a60), (EBX));
  /* 11f43d45 jmp 0x11f43d69 */
  goto L_11f43d69;
L_11f43d47:;
  /* 11f43d47 push edi */
  push32((uint32_t)(EDI));
  /* 11f43d48 push edi */
  push32((uint32_t)(EDI));
  /* 11f43d49 push ebx */
  push32((uint32_t)(EBX));
  /* 11f43d4a push 0x11f4545c */
  push32((uint32_t)(0x11f4545cu));
  /* 11f43d4f push esi */
  push32((uint32_t)(ESI));
  /* 11f43d50 push edi */
  push32((uint32_t)(EDI));
  /* 11f43d51 call dword ptr [0x11f45010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45010))), 0x11f43d57u);
  /* 11f43d57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f43d59 je 0x11f43e81 */
  if (C.zf) goto L_11f43e81;
  /* 11f43d5f mov dword ptr [0x11f46a60], 2 */
  w32((uint32_t)(0x11f46a60), (0x2u));
L_11f43d69:;
  /* 11f43d69 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43d6c jle 0x11f43d7e */
  if ((C.zf||C.sf!=C.of)) goto L_11f43d7e;
  /* 11f43d6e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f43d71 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f43d74 call 0x11f43f17 */
  push32(0x11f43d79u); f_11f43f17();
  /* 11f43d79 pop ecx */
  ECX = (pop32());
  /* 11f43d7a pop ecx */
  ECX = (pop32());
  /* 11f43d7b mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11f43d7e:;
  /* 11f43d7e mov eax, dword ptr [0x11f46a60] */
  EAX = (r32((uint32_t)(0x11f46a60)));
  /* 11f43d83 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43d86 jne 0x11f43da5 */
  if (!C.zf) goto L_11f43da5;
  /* 11f43d88 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11f43d8b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11f43d8e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f43d91 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f43d94 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f43d97 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f43d9a call dword ptr [0x11f45010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45010))), 0x11f43da0u);
  /* 11f43da0 jmp 0x11f43e83 */
  goto L_11f43e83;
L_11f43da5:;
  /* 11f43da5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43da8 jne 0x11f43e81 */
  if (!C.zf) goto L_11f43e81;
  /* 11f43dae cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43db1 jne 0x11f43dbb */
  if (!C.zf) goto L_11f43dbb;
  /* 11f43db3 mov eax, dword ptr [0x11f46a58] */
  EAX = (r32((uint32_t)(0x11f46a58)));
  /* 11f43db8 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11f43dbb:;
  /* 11f43dbb push edi */
  push32((uint32_t)(EDI));
  /* 11f43dbc push edi */
  push32((uint32_t)(EDI));
  /* 11f43dbd push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f43dc0 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f43dc3 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11f43dc6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f43dc8 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f43dca and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11f43dcd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f43dce push eax */
  push32((uint32_t)(EAX));
  /* 11f43dcf push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11f43dd2 call dword ptr [0x11f45020] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45020))), 0x11f43dd8u);
  /* 11f43dd8 mov ebx, eax */
  EBX = (EAX);
  /* 11f43dda mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 11f43ddd cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43ddf je 0x11f43e81 */
  if (C.zf) goto L_11f43e81;
  /* 11f43de5 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11f43de8 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 11f43deb add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f43dee and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11f43df0 call 0x11f445a0 */
  push32(0x11f43df5u); f_11f445a0();
  /* 11f43df5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f43df8 mov eax, esp */
  EAX = (ESP);
  /* 11f43dfa mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11f43dfd or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f43e01 jmp 0x11f43e16 */
  goto L_11f43e16;
  /* 11f43e03 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f43e05 pop eax */
  EAX = (pop32());
  /* 11f43e06 ret  */
  ESPCHK(0x11f43cf3u, _esp0);
  ESP += 4; return;
  /* 11f43e07 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11f43e0a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f43e0c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11f43e0f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f43e13 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_11f43e16:;
  /* 11f43e16 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43e19 je 0x11f43e81 */
  if (C.zf) goto L_11f43e81;
  /* 11f43e1b push ebx */
  push32((uint32_t)(EBX));
  /* 11f43e1c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11f43e1f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f43e22 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f43e25 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f43e27 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11f43e2a call dword ptr [0x11f45020] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45020))), 0x11f43e30u);
  /* 11f43e30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f43e32 je 0x11f43e81 */
  if (C.zf) goto L_11f43e81;
  /* 11f43e34 push edi */
  push32((uint32_t)(EDI));
  /* 11f43e35 push edi */
  push32((uint32_t)(EDI));
  /* 11f43e36 push ebx */
  push32((uint32_t)(EBX));
  /* 11f43e37 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11f43e3a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f43e3d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f43e40 call dword ptr [0x11f4500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f4500c))), 0x11f43e46u);
  /* 11f43e46 mov esi, eax */
  ESI = (EAX);
  /* 11f43e48 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 11f43e4b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43e4d je 0x11f43e81 */
  if (C.zf) goto L_11f43e81;
  /* 11f43e4f test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 11f43e53 je 0x11f43e95 */
  if (C.zf) goto L_11f43e95;
  /* 11f43e55 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43e58 je 0x11f43f10 */
  if (C.zf) goto L_11f43f10;
  /* 11f43e5e cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43e61 jg 0x11f43e81 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f43e81;
  /* 11f43e63 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11f43e66 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11f43e69 push ebx */
  push32((uint32_t)(EBX));
  /* 11f43e6a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11f43e6d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f43e70 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f43e73 call dword ptr [0x11f4500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f4500c))), 0x11f43e79u);
  /* 11f43e79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f43e7b jne 0x11f43f10 */
  if (!C.zf) goto L_11f43f10;
L_11f43e81:;
  /* 11f43e81 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f43e83:;
  /* 11f43e83 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11f43e86 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f43e89 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11f43e90 pop edi */
  EDI = (pop32());
  /* 11f43e91 pop esi */
  ESI = (pop32());
  /* 11f43e92 pop ebx */
  EBX = (pop32());
  /* 11f43e93 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f43e94 ret  */
  ESPCHK(0x11f43cf3u, _esp0);
  ESP += 4; return;
L_11f43e95:;
  /* 11f43e95 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11f43e9c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11f43e9f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f43ea2 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11f43ea4 call 0x11f445a0 */
  push32(0x11f43ea9u); f_11f445a0();
  /* 11f43ea9 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f43eac mov ebx, esp */
  EBX = (ESP);
  /* 11f43eae mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11f43eb1 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f43eb5 jmp 0x11f43ec9 */
  goto L_11f43ec9;
  /* 11f43eb7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f43eb9 pop eax */
  EAX = (pop32());
  /* 11f43eba ret  */
  ESPCHK(0x11f43cf3u, _esp0);
  ESP += 4; return;
  /* 11f43ebb mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11f43ebe xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f43ec0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f43ec2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f43ec6 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_11f43ec9:;
  /* 11f43ec9 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43ecb je 0x11f43e81 */
  if (C.zf) goto L_11f43e81;
  /* 11f43ecd push esi */
  push32((uint32_t)(ESI));
  /* 11f43ece push ebx */
  push32((uint32_t)(EBX));
  /* 11f43ecf push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11f43ed2 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11f43ed5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f43ed8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f43edb call dword ptr [0x11f4500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f4500c))), 0x11f43ee1u);
  /* 11f43ee1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f43ee3 je 0x11f43e81 */
  if (C.zf) goto L_11f43e81;
  /* 11f43ee5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43ee8 push edi */
  push32((uint32_t)(EDI));
  /* 11f43ee9 push edi */
  push32((uint32_t)(EDI));
  /* 11f43eea jne 0x11f43ef0 */
  if (!C.zf) goto L_11f43ef0;
  /* 11f43eec push edi */
  push32((uint32_t)(EDI));
  /* 11f43eed push edi */
  push32((uint32_t)(EDI));
  /* 11f43eee jmp 0x11f43ef6 */
  goto L_11f43ef6;
L_11f43ef0:;
  /* 11f43ef0 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11f43ef3 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_11f43ef6:;
  /* 11f43ef6 push esi */
  push32((uint32_t)(ESI));
  /* 11f43ef7 push ebx */
  push32((uint32_t)(EBX));
  /* 11f43ef8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11f43efd push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11f43f00 call dword ptr [0x11f45060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45060))), 0x11f43f06u);
  /* 11f43f06 mov esi, eax */
  ESI = (EAX);
  /* 11f43f08 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43f0a je 0x11f43e81 */
  if (C.zf) goto L_11f43e81;
L_11f43f10:;
  /* 11f43f10 mov eax, esi */
  EAX = (ESI);
  /* 11f43f12 jmp 0x11f43e83 */
  goto L_11f43e83;
}

/* FUN_10003f17 @ 0x11f43f17 (43 bytes, 20 insns) */
void f_11f43f17(void) {
  FTRACE(0x11f43f17u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f43f17 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f43f1b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f43f1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f43f21 push esi */
  push32((uint32_t)(ESI));
  /* 11f43f22 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 11f43f25 je 0x11f43f34 */
  if (C.zf) goto L_11f43f34;
L_11f43f27:;
  /* 11f43f27 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f43f2a je 0x11f43f34 */
  if (C.zf) goto L_11f43f34;
  /* 11f43f2c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f43f2d mov esi, ecx */
  ESI = (ECX);
  /* 11f43f2f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f43f30 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f43f32 jne 0x11f43f27 */
  if (!C.zf) goto L_11f43f27;
L_11f43f34:;
  /* 11f43f34 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f43f37 pop esi */
  ESI = (pop32());
  /* 11f43f38 jne 0x11f43f3f */
  if (!C.zf) goto L_11f43f3f;
  /* 11f43f3a sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f43f3e ret  */
  ESPCHK(0x11f43f17u, _esp0);
  ESP += 4; return;
L_11f43f3f:;
  /* 11f43f3f mov eax, edx */
  EAX = (EDX);
  /* 11f43f41 ret  */
  ESPCHK(0x11f43f17u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f42 @ 0x11f43f42 (318 bytes, 123 insns) */
void f_11f43f42(void) {
  FTRACE(0x11f43f42u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f43f42 push ebp */
  push32((uint32_t)(EBP));
  /* 11f43f43 mov ebp, esp */
  EBP = (ESP);
  /* 11f43f45 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f43f47 push 0x11f45480 */
  push32((uint32_t)(0x11f45480u));
  /* 11f43f4c push 0x11f444c0 */
  push32((uint32_t)(0x11f444c0u));
  /* 11f43f51 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11f43f57 push eax */
  push32((uint32_t)(EAX));
  /* 11f43f58 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11f43f5f sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f43f62 push ebx */
  push32((uint32_t)(EBX));
  /* 11f43f63 push esi */
  push32((uint32_t)(ESI));
  /* 11f43f64 push edi */
  push32((uint32_t)(EDI));
  /* 11f43f65 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f43f68 mov eax, dword ptr [0x11f46a64] */
  EAX = (r32((uint32_t)(0x11f46a64)));
  /* 11f43f6d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f43f6f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43f71 jne 0x11f43fb1 */
  if (!C.zf) goto L_11f43fb1;
  /* 11f43f73 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11f43f76 push eax */
  push32((uint32_t)(EAX));
  /* 11f43f77 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f43f79 pop esi */
  ESI = (pop32());
  /* 11f43f7a push esi */
  push32((uint32_t)(ESI));
  /* 11f43f7b push 0x11f45460 */
  push32((uint32_t)(0x11f45460u));
  /* 11f43f80 push esi */
  push32((uint32_t)(ESI));
  /* 11f43f81 call dword ptr [0x11f45008] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45008))), 0x11f43f87u);
  /* 11f43f87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f43f89 je 0x11f43f8f */
  if (C.zf) goto L_11f43f8f;
  /* 11f43f8b mov eax, esi */
  EAX = (ESI);
  /* 11f43f8d jmp 0x11f43fac */
  goto L_11f43fac;
L_11f43f8f:;
  /* 11f43f8f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11f43f92 push eax */
  push32((uint32_t)(EAX));
  /* 11f43f93 push esi */
  push32((uint32_t)(ESI));
  /* 11f43f94 push 0x11f4545c */
  push32((uint32_t)(0x11f4545cu));
  /* 11f43f99 push esi */
  push32((uint32_t)(ESI));
  /* 11f43f9a push ebx */
  push32((uint32_t)(EBX));
  /* 11f43f9b call dword ptr [0x11f45014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45014))), 0x11f43fa1u);
  /* 11f43fa1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f43fa3 je 0x11f44077 */
  if (C.zf) goto L_11f44077;
  /* 11f43fa9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f43fab pop eax */
  EAX = (pop32());
L_11f43fac:;
  /* 11f43fac mov dword ptr [0x11f46a64], eax */
  w32((uint32_t)(0x11f46a64), (EAX));
L_11f43fb1:;
  /* 11f43fb1 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43fb4 jne 0x11f43fda */
  if (!C.zf) goto L_11f43fda;
  /* 11f43fb6 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f43fb9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43fbb jne 0x11f43fc2 */
  if (!C.zf) goto L_11f43fc2;
  /* 11f43fbd mov eax, dword ptr [0x11f46a48] */
  EAX = (r32((uint32_t)(0x11f46a48)));
L_11f43fc2:;
  /* 11f43fc2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f43fc5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f43fc8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f43fcb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f43fce push eax */
  push32((uint32_t)(EAX));
  /* 11f43fcf call dword ptr [0x11f45014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45014))), 0x11f43fd5u);
  /* 11f43fd5 jmp 0x11f44079 */
  goto L_11f44079;
L_11f43fda:;
  /* 11f43fda cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43fdd jne 0x11f44077 */
  if (!C.zf) goto L_11f44077;
  /* 11f43fe3 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f43fe6 jne 0x11f43ff0 */
  if (!C.zf) goto L_11f43ff0;
  /* 11f43fe8 mov eax, dword ptr [0x11f46a58] */
  EAX = (r32((uint32_t)(0x11f46a58)));
  /* 11f43fed mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11f43ff0:;
  /* 11f43ff0 push ebx */
  push32((uint32_t)(EBX));
  /* 11f43ff1 push ebx */
  push32((uint32_t)(EBX));
  /* 11f43ff2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f43ff5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f43ff8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11f43ffb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f43ffd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f43fff and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11f44002 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f44003 push eax */
  push32((uint32_t)(EAX));
  /* 11f44004 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11f44007 call dword ptr [0x11f45020] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45020))), 0x11f4400du);
  /* 11f4400d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11f44010 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f44012 je 0x11f44077 */
  if (C.zf) goto L_11f44077;
  /* 11f44014 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11f44017 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 11f4401a mov eax, edi */
  EAX = (EDI);
  /* 11f4401c add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f4401f and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11f44021 call 0x11f445a0 */
  push32(0x11f44026u); f_11f445a0();
  /* 11f44026 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f44029 mov esi, esp */
  ESI = (ESP);
  /* 11f4402b mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 11f4402e push edi */
  push32((uint32_t)(EDI));
  /* 11f4402f push ebx */
  push32((uint32_t)(EBX));
  /* 11f44030 push esi */
  push32((uint32_t)(ESI));
  /* 11f44031 call 0x11f43c80 */
  push32(0x11f44036u); f_11f43c80();
  /* 11f44036 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f44039 jmp 0x11f44046 */
  goto L_11f44046;
  /* 11f4403b push 1 */
  push32((uint32_t)(0x1u));
  /* 11f4403d pop eax */
  EAX = (pop32());
  /* 11f4403e ret  */
  ESPCHK(0x11f43f42u, _esp0);
  ESP += 4; return;
  /* 11f4403f mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11f44042 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f44044 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11f44046:;
  /* 11f44046 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f4404a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f4404c je 0x11f44077 */
  if (C.zf) goto L_11f44077;
  /* 11f4404e push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11f44051 push esi */
  push32((uint32_t)(ESI));
  /* 11f44052 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f44055 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f44058 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f4405a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11f4405d call dword ptr [0x11f45020] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45020))), 0x11f44063u);
  /* 11f44063 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f44065 je 0x11f44077 */
  if (C.zf) goto L_11f44077;
  /* 11f44067 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f4406a push eax */
  push32((uint32_t)(EAX));
  /* 11f4406b push esi */
  push32((uint32_t)(ESI));
  /* 11f4406c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f4406f call dword ptr [0x11f45008] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f45008))), 0x11f44075u);
  /* 11f44075 jmp 0x11f44079 */
  goto L_11f44079;
L_11f44077:;
  /* 11f44077 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f44079:;
  /* 11f44079 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11f4407c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f4407f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11f44086 pop edi */
  EDI = (pop32());
  /* 11f44087 pop esi */
  ESI = (pop32());
  /* 11f44088 pop ebx */
  EBX = (pop32());
  /* 11f44089 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f4408a ret  */
  ESPCHK(0x11f43f42u, _esp0);
  ESP += 4; return;
}

/* FUN_10004090 @ 0x11f44090 (664 bytes, 262 insns) [15 switch table(s)] */
void f_11f44090(void) {
  FTRACE(0x11f44090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f44090 push ebp */
  push32((uint32_t)(EBP));
  /* 11f44091 mov ebp, esp */
  EBP = (ESP);
  /* 11f44093 push edi */
  push32((uint32_t)(EDI));
  /* 11f44094 push esi */
  push32((uint32_t)(ESI));
  /* 11f44095 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f44098 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f4409b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f4409e mov eax, ecx */
  EAX = (ECX);
  /* 11f440a0 mov edx, ecx */
  EDX = (ECX);
  /* 11f440a2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f440a4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f440a6 jbe 0x11f440b0 */
  if ((C.cf||C.zf)) goto L_11f440b0;
  /* 11f440a8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f440aa jb 0x11f44228 */
  if (C.cf) goto L_11f44228;
L_11f440b0:;
  /* 11f440b0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11f440b6 jne 0x11f440cc */
  if (!C.zf) goto L_11f440cc;
  /* 11f440b8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f440bb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11f440be cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f440c1 jb 0x11f440ec */
  if (C.cf) goto L_11f440ec;
  /* 11f440c3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f440c5 jmp dword ptr [edx*4 + 0x11f441d8] */
  switch (EDX) {
    case 0: goto L_11f441e8;
    case 1: goto L_11f441f0;
    case 2: goto L_11f441fc;
    case 3: goto L_11f44210;
    default: x86_unimpl("switch@0x11f440c5 out of table"); return;
  }
L_11f440cc:;
  /* 11f440cc mov eax, edi */
  EAX = (EDI);
  /* 11f440ce mov edx, 3 */
  EDX = (0x3u);
  /* 11f440d3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f440d6 jb 0x11f440e4 */
  if (C.cf) goto L_11f440e4;
  /* 11f440d8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11f440db add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f440dd jmp dword ptr [eax*4 + 0x11f440f0] */
  switch (EAX) {
    case 1: goto L_11f44100;
    case 2: goto L_11f4412c;
    case 3: goto L_11f44150;
    default: x86_unimpl("switch@0x11f440dd out of table"); return;
  }
L_11f440e4:;
  /* 11f440e4 jmp dword ptr [ecx*4 + 0x11f441e8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11f441e8)))); return;
  /* 11f440eb nop  */
  /* nop */
L_11f440ec:;
  /* 11f440ec jmp dword ptr [ecx*4 + 0x11f4416c] */
  switch (ECX) {
    case 0: goto L_11f441cf;
    case 1: goto L_11f441bc;
    case 2: goto L_11f441b4;
    case 3: goto L_11f441ac;
    case 4: goto L_11f441a4;
    case 5: goto L_11f4419c;
    case 6: goto L_11f44194;
    case 7: goto L_11f4418c;
    default: x86_unimpl("switch@0x11f440ec out of table"); return;
  }
  /* 11f440f3 nop  */
  /* nop */
L_11f44100:;
  /* 11f44100 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f44102 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f44104 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f44106 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f44109 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f4410c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f4410f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f44112 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f44115 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f44118 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f4411b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f4411e jb 0x11f440ec */
  if (C.cf) goto L_11f440ec;
  /* 11f44120 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f44122 jmp dword ptr [edx*4 + 0x11f441d8] */
  switch (EDX) {
    case 0: goto L_11f441e8;
    case 1: goto L_11f441f0;
    case 2: goto L_11f441fc;
    case 3: goto L_11f44210;
    default: x86_unimpl("switch@0x11f44122 out of table"); return;
  }
  /* 11f44129 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f4412c:;
  /* 11f4412c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f4412e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f44130 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f44132 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f44135 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f44138 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f4413b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f4413e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f44141 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f44144 jb 0x11f440ec */
  if (C.cf) goto L_11f440ec;
  /* 11f44146 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f44148 jmp dword ptr [edx*4 + 0x11f441d8] */
  switch (EDX) {
    case 0: goto L_11f441e8;
    case 1: goto L_11f441f0;
    case 2: goto L_11f441fc;
    case 3: goto L_11f44210;
    default: x86_unimpl("switch@0x11f44148 out of table"); return;
  }
  /* 11f4414f nop  */
  /* nop */
L_11f44150:;
  /* 11f44150 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f44152 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f44154 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f44156 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f44157 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f4415a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f4415b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f4415e jb 0x11f440ec */
  if (C.cf) goto L_11f440ec;
  /* 11f44160 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f44162 jmp dword ptr [edx*4 + 0x11f441d8] */
  switch (EDX) {
    case 0: goto L_11f441e8;
    case 1: goto L_11f441f0;
    case 2: goto L_11f441fc;
    case 3: goto L_11f44210;
    default: x86_unimpl("switch@0x11f44162 out of table"); return;
  }
  /* 11f44169 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f4418c:;
  /* 11f4418c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11f44190 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11f44194:;
  /* 11f44194 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11f44198 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11f4419c:;
  /* 11f4419c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11f441a0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11f441a4:;
  /* 11f441a4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11f441a8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11f441ac:;
  /* 11f441ac mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11f441b0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11f441b4:;
  /* 11f441b4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11f441b8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11f441bc:;
  /* 11f441bc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11f441c0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11f441c4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11f441cb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f441cd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11f441cf:;
  /* 11f441cf jmp dword ptr [edx*4 + 0x11f441d8] */
  switch (EDX) {
    case 0: goto L_11f441e8;
    case 1: goto L_11f441f0;
    case 2: goto L_11f441fc;
    case 3: goto L_11f44210;
    default: x86_unimpl("switch@0x11f441cf out of table"); return;
  }
  /* 11f441d6 mov edi, edi */
  EDI = (EDI);
L_11f441e8:;
  /* 11f441e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f441eb pop esi */
  ESI = (pop32());
  /* 11f441ec pop edi */
  EDI = (pop32());
  /* 11f441ed leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f441ee ret  */
  ESPCHK(0x11f44090u, _esp0);
  ESP += 4; return;
  /* 11f441ef nop  */
  /* nop */
L_11f441f0:;
  /* 11f441f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f441f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f441f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f441f7 pop esi */
  ESI = (pop32());
  /* 11f441f8 pop edi */
  EDI = (pop32());
  /* 11f441f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f441fa ret  */
  ESPCHK(0x11f44090u, _esp0);
  ESP += 4; return;
  /* 11f441fb nop  */
  /* nop */
L_11f441fc:;
  /* 11f441fc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f441fe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f44200 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f44203 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f44206 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f44209 pop esi */
  ESI = (pop32());
  /* 11f4420a pop edi */
  EDI = (pop32());
  /* 11f4420b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f4420c ret  */
  ESPCHK(0x11f44090u, _esp0);
  ESP += 4; return;
  /* 11f4420d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f44210:;
  /* 11f44210 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f44212 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f44214 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f44217 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f4421a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f4421d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f44220 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f44223 pop esi */
  ESI = (pop32());
  /* 11f44224 pop edi */
  EDI = (pop32());
  /* 11f44225 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f44226 ret  */
  ESPCHK(0x11f44090u, _esp0);
  ESP += 4; return;
  /* 11f44227 nop  */
  /* nop */
L_11f44228:;
  /* 11f44228 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11f4422c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11f44230 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11f44236 jne 0x11f4425c */
  if (!C.zf) goto L_11f4425c;
  /* 11f44238 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f4423b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11f4423e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f44241 jb 0x11f44250 */
  if (C.cf) goto L_11f44250;
  /* 11f44243 std  */
  C.df=1;
  /* 11f44244 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f44246 cld  */
  C.df=0;
  /* 11f44247 jmp dword ptr [edx*4 + 0x11f44370] */
  switch (EDX) {
    case 0: goto L_11f44380;
    case 1: goto L_11f44388;
    case 2: goto L_11f44398;
    case 3: goto L_11f443ac;
    default: x86_unimpl("switch@0x11f44247 out of table"); return;
  }
  /* 11f4424e mov edi, edi */
  EDI = (EDI);
L_11f44250:;
  /* 11f44250 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f44252 jmp dword ptr [ecx*4 + 0x11f44320] */
  switch (ECX) {
    case 0: goto L_11f44367;
    default: x86_unimpl("switch@0x11f44252 out of table"); return;
  }
  /* 11f44259 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f4425c:;
  /* 11f4425c mov eax, edi */
  EAX = (EDI);
  /* 11f4425e mov edx, 3 */
  EDX = (0x3u);
  /* 11f44263 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f44266 jb 0x11f44274 */
  if (C.cf) goto L_11f44274;
  /* 11f44268 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11f4426b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f4426d jmp dword ptr [eax*4 + 0x11f44278] */
  switch (EAX) {
    case 1: goto L_11f44288;
    case 2: goto L_11f442a8;
    case 3: goto L_11f442d0;
    default: x86_unimpl("switch@0x11f4426d out of table"); return;
  }
L_11f44274:;
  /* 11f44274 jmp dword ptr [ecx*4 + 0x11f44370] */
  switch (ECX) {
    case 0: goto L_11f44380;
    case 1: goto L_11f44388;
    case 2: goto L_11f44398;
    case 3: goto L_11f443ac;
    default: x86_unimpl("switch@0x11f44274 out of table"); return;
  }
  /* 11f4427b nop  */
  /* nop */
L_11f44288:;
  /* 11f44288 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f4428b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f4428d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f44290 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11f44291 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f44294 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11f44295 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f44298 jb 0x11f44250 */
  if (C.cf) goto L_11f44250;
  /* 11f4429a std  */
  C.df=1;
  /* 11f4429b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f4429d cld  */
  C.df=0;
  /* 11f4429e jmp dword ptr [edx*4 + 0x11f44370] */
  switch (EDX) {
    case 0: goto L_11f44380;
    case 1: goto L_11f44388;
    case 2: goto L_11f44398;
    case 3: goto L_11f443ac;
    default: x86_unimpl("switch@0x11f4429e out of table"); return;
  }
  /* 11f442a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f442a8:;
  /* 11f442a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f442ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f442ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f442b0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f442b3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f442b6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f442b9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f442bc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f442bf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f442c2 jb 0x11f44250 */
  if (C.cf) goto L_11f44250;
  /* 11f442c4 std  */
  C.df=1;
  /* 11f442c5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f442c7 cld  */
  C.df=0;
  /* 11f442c8 jmp dword ptr [edx*4 + 0x11f44370] */
  switch (EDX) {
    case 0: goto L_11f44380;
    case 1: goto L_11f44388;
    case 2: goto L_11f44398;
    case 3: goto L_11f443ac;
    default: x86_unimpl("switch@0x11f442c8 out of table"); return;
  }
  /* 11f442cf nop  */
  /* nop */
L_11f442d0:;
  /* 11f442d0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f442d3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f442d5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f442d8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f442db mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f442de mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f442e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f442e4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f442e7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f442ea sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f442ed cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f442f0 jb 0x11f44250 */
  if (C.cf) goto L_11f44250;
  /* 11f442f6 std  */
  C.df=1;
  /* 11f442f7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f442f9 cld  */
  C.df=0;
  /* 11f442fa jmp dword ptr [edx*4 + 0x11f44370] */
  switch (EDX) {
    case 0: goto L_11f44380;
    case 1: goto L_11f44388;
    case 2: goto L_11f44398;
    case 3: goto L_11f443ac;
    default: x86_unimpl("switch@0x11f442fa out of table"); return;
  }
  /* 11f44301 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11f44304 and al, 0x43 */
  { uint32_t _r=(AL)&(0x43u); AL = (_r); fl_logic(_r,8); }
  /* 11f44306 hlt  */
  x86_unimpl("hlt @ 0x11f44306");
  /* 11f44307 adc dword ptr [ebx + eax*2], ebp */
  { uint32_t _a=(r32((uint32_t)(EBX + EAX*2))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(EBX + EAX*2), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f4430a hlt  */
  x86_unimpl("hlt @ 0x11f4430a");
  /* 11f4430b adc dword ptr [ebx + eax*2], esi */
  { uint32_t _a=(r32((uint32_t)(EBX + EAX*2))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(EBX + EAX*2), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f4430e hlt  */
  x86_unimpl("hlt @ 0x11f4430e");
  /* 11f4430f adc dword ptr [ebx + eax*2], edi */
  { uint32_t _a=(r32((uint32_t)(EBX + EAX*2))),_b=(EDI),_r=_a+_b+C.cf; w32((uint32_t)(EBX + EAX*2), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f44312 hlt  */
  x86_unimpl("hlt @ 0x11f44312");
  /* 11f44313 adc dword ptr [ebx + eax*2 - 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBX + EAX*2 + -0xc))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(EBX + EAX*2 + -0xc), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f44317 adc dword ptr [ebx + eax*2 - 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBX + EAX*2 + -0xc))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(EBX + EAX*2 + -0xc), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f4431b adc dword ptr [ebx + eax*2 - 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBX + EAX*2 + -0xc))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EBX + EAX*2 + -0xc), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f44324 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11f44328 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11f4432c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11f44330 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11f44334 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11f44338 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11f4433c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11f44340 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11f44344 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11f44348 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11f4434c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11f44350 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11f44354 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11f44358 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11f4435c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11f44363 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f44365 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11f44367:;
  /* 11f44367 jmp dword ptr [edx*4 + 0x11f44370] */
  switch (EDX) {
    case 0: goto L_11f44380;
    case 1: goto L_11f44388;
    case 2: goto L_11f44398;
    case 3: goto L_11f443ac;
    default: x86_unimpl("switch@0x11f44367 out of table"); return;
  }
  /* 11f4436e mov edi, edi */
  EDI = (EDI);
L_11f44380:;
  /* 11f44380 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f44383 pop esi */
  ESI = (pop32());
  /* 11f44384 pop edi */
  EDI = (pop32());
  /* 11f44385 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f44386 ret  */
  ESPCHK(0x11f44090u, _esp0);
  ESP += 4; return;
  /* 11f44387 nop  */
  /* nop */
L_11f44388:;
  /* 11f44388 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f4438b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f4438e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f44391 pop esi */
  ESI = (pop32());
  /* 11f44392 pop edi */
  EDI = (pop32());
  /* 11f44393 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f44394 ret  */
  ESPCHK(0x11f44090u, _esp0);
  ESP += 4; return;
  /* 11f44395 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f44398:;
  /* 11f44398 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f4439b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f4439e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f443a1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f443a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f443a7 pop esi */
  ESI = (pop32());
  /* 11f443a8 pop edi */
  EDI = (pop32());
  /* 11f443a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f443aa ret  */
  ESPCHK(0x11f44090u, _esp0);
  ESP += 4; return;
  /* 11f443ab nop  */
  /* nop */
L_11f443ac:;
  /* 11f443ac mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f443af mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f443b2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f443b5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f443b8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f443bb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f443be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f443c1 pop esi */
  ESI = (pop32());
  /* 11f443c2 pop edi */
  EDI = (pop32());
  /* 11f443c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f443c4 ret  */
  ESPCHK(0x11f44090u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11f443c8 (32 bytes, 18 insns) */
void f_11f443c8(void) {
  FTRACE(0x11f443c8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f443c8 push ebp */
  push32((uint32_t)(EBP));
  /* 11f443c9 mov ebp, esp */
  EBP = (ESP);
  /* 11f443cb push ebx */
  push32((uint32_t)(EBX));
  /* 11f443cc push esi */
  push32((uint32_t)(ESI));
  /* 11f443cd push edi */
  push32((uint32_t)(EDI));
  /* 11f443ce push ebp */
  push32((uint32_t)(EBP));
  /* 11f443cf push 0 */
  push32((uint32_t)(0x0u));
  /* 11f443d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f443d3 push 0x11f443e0 */
  push32((uint32_t)(0x11f443e0u));
  /* 11f443d8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f443db call 0x11f445d0 */
  push32(0x11f443e0u); f_11f445d0();
  /* 11f443e0 pop ebp */
  EBP = (pop32());
  /* 11f443e1 pop edi */
  EDI = (pop32());
  /* 11f443e2 pop esi */
  ESI = (pop32());
  /* 11f443e3 pop ebx */
  EBX = (pop32());
  /* 11f443e4 mov esp, ebp */
  ESP = (EBP);
  /* 11f443e6 pop ebp */
  EBP = (pop32());
  /* 11f443e7 ret  */
  ESPCHK(0x11f443c8u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11f4440a (104 bytes, 33 insns) */
void f_11f4440a(void) {
  FTRACE(0x11f4440au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f4440a push ebx */
  push32((uint32_t)(EBX));
  /* 11f4440b push esi */
  push32((uint32_t)(ESI));
  /* 11f4440c push edi */
  push32((uint32_t)(EDI));
  /* 11f4440d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11f44411 push eax */
  push32((uint32_t)(EAX));
  /* 11f44412 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11f44414 push 0x11f443e8 */
  push32((uint32_t)(0x11f443e8u));
  /* 11f44419 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11f44420 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11f44427:;
  /* 11f44427 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11f4442b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f4442e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11f44431 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f44434 je 0x11f44464 */
  if (C.zf) goto L_11f44464;
  /* 11f44436 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f4443a je 0x11f44464 */
  if (C.zf) goto L_11f44464;
  /* 11f4443c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11f4443f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11f44442 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11f44446 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11f44449 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f4444e jne 0x11f44462 */
  if (!C.zf) goto L_11f44462;
  /* 11f44450 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11f44455 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11f44459 call 0x11f4449e */
  push32(0x11f4445eu); f_11f4449e();
  /* 11f4445e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11f44462u);
L_11f44462:;
  /* 11f44462 jmp 0x11f44427 */
  goto L_11f44427;
L_11f44464:;
  /* 11f44464 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11f4446b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f4446e pop edi */
  EDI = (pop32());
  /* 11f4446f pop esi */
  ESI = (pop32());
  /* 11f44470 pop ebx */
  EBX = (pop32());
  /* 11f44471 ret  */
  ESPCHK(0x11f4440au, _esp0);
  ESP += 4; return;
}

/* FUN_1000449e @ 0x11f4449e (24 bytes, 10 insns) */
void f_11f4449e(void) {
  FTRACE(0x11f4449eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f4449e push ebx */
  push32((uint32_t)(EBX));
  /* 11f4449f push ecx */
  push32((uint32_t)(ECX));
  /* 11f444a0 mov ebx, 0x11f46680 */
  EBX = (0x11f46680u);
  /* 11f444a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f444a8 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11f444ab mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11f444ae mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11f444b1 pop ecx */
  ECX = (pop32());
  /* 11f444b2 pop ebx */
  EBX = (pop32());
  /* 11f444b3 ret 4 */
  ESPCHK(0x11f4449eu, _esp0);
  ESP += 8; return;
}

/* FUN_1000457d @ 0x11f4457d (27 bytes, 11 insns) */
void f_11f4457d(void) {
  FTRACE(0x11f4457du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f4457d push ebp */
  push32((uint32_t)(EBP));
  /* 11f4457e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f44582 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11f44584 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11f44587 push eax */
  push32((uint32_t)(EAX));
  /* 11f44588 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11f4458b push eax */
  push32((uint32_t)(EAX));
  /* 11f4458c call 0x11f4440a */
  push32(0x11f44591u); f_11f4440a();
  /* 11f44591 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f44594 pop ebp */
  EBP = (pop32());
  /* 11f44595 ret 4 */
  ESPCHK(0x11f4457du, _esp0);
  ESP += 8; return;
}

/* FUN_100045a0 @ 0x11f445a0 (47 bytes, 17 insns) */
void f_11f445a0(void) {
  FTRACE(0x11f445a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f445a0 push ecx */
  push32((uint32_t)(ECX));
  /* 11f445a1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f445a6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11f445aa jb 0x11f445c0 */
  if (C.cf) goto L_11f445c0;
L_11f445ac:;
  /* 11f445ac sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f445b2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f445b7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11f445b9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f445be jae 0x11f445ac */
  if (!C.cf) goto L_11f445ac;
L_11f445c0:;
  /* 11f445c0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f445c2 mov eax, esp */
  EAX = (ESP);
  /* 11f445c4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11f445c6 mov esp, ecx */
  ESP = (ECX);
  /* 11f445c8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f445ca mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f445cd push eax */
  push32((uint32_t)(EAX));
  /* 11f445ce ret  */
  ESPCHK(0x11f445a0u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11f445d0 (6 bytes, 1 insns) */
void f_11f445d0(void) {
  FTRACE(0x11f445d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f445d0 jmp dword ptr [0x11f45004] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11f45004)))); return;
}

