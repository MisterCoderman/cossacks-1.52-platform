#include "recomp.h"

/* x64toa @ 0x11f99110 (242 bytes, 91 insns) */
void f_11f99110(void) {
  FTRACE(0x11f99110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f99110 push ebp */
  push32((uint32_t)(EBP));
  /* 11f99111 mov ebp, esp */
  EBP = (ESP);
  /* 11f99113 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f99116 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f99119 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f9911c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99120 je 0x11f99144 */
  if (C.zf) goto L_11f99144;
  /* 11f99122 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f99125 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11f99128 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9912b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9912e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f99131 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f99134 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f99136 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f99139 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9913c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f9913e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11f99141 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11f99144:;
  /* 11f99144 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f99147 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11f9914a:;
  /* 11f9914a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f9914d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f9914f push ecx */
  push32((uint32_t)(ECX));
  /* 11f99150 push eax */
  push32((uint32_t)(EAX));
  /* 11f99151 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f99154 push edx */
  push32((uint32_t)(EDX));
  /* 11f99155 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f99158 push eax */
  push32((uint32_t)(EAX));
  /* 11f99159 call 0x11f9d090 */
  push32(0x11f9915eu); f_11f9d090();
  /* 11f9915e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f99161 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f99164 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f99166 push edx */
  push32((uint32_t)(EDX));
  /* 11f99167 push ecx */
  push32((uint32_t)(ECX));
  /* 11f99168 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9916b push eax */
  push32((uint32_t)(EAX));
  /* 11f9916c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9916f push ecx */
  push32((uint32_t)(ECX));
  /* 11f99170 call 0x11f9d020 */
  push32(0x11f99175u); f_11f9d020();
  /* 11f99175 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11f99178 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11f9917b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9917f jbe 0x11f99197 */
  if ((C.cf||C.zf)) goto L_11f99197;
  /* 11f99181 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f99184 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f99187 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9918a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11f9918c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9918f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f99192 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f99195 jmp 0x11f991ab */
  goto L_11f991ab;
L_11f99197:;
  /* 11f99197 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9919a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9919d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f991a0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11f991a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f991a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f991a8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11f991ab:;
  /* 11f991ab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f991af ja 0x11f9914a */
  if ((!C.cf&&!C.zf)) goto L_11f9914a;
  /* 11f991b1 jb 0x11f991b9 */
  if (C.cf) goto L_11f991b9;
  /* 11f991b3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f991b7 ja 0x11f9914a */
  if ((!C.cf&&!C.zf)) goto L_11f9914a;
L_11f991b9:;
  /* 11f991b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f991bc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11f991bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f991c2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f991c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f991c8:;
  /* 11f991c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f991cb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11f991cd mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11f991d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f991d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f991d6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11f991d8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11f991da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f991dd mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11f991e0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11f991e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f991e5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f991e8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f991eb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f991ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f991f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f991f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f991f7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f991fa jb 0x11f991c8 */
  if (C.cf) goto L_11f991c8;
  /* 11f991fc mov esp, ebp */
  ESP = (EBP);
  /* 11f991fe pop ebp */
  EBP = (pop32());
  /* 11f991ff ret 0x14 */
  ESPCHK(0x11f99110u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x11f99210 (31 bytes, 15 insns) */
void f_11f99210(void) {
  FTRACE(0x11f99210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f99210 push ebp */
  push32((uint32_t)(EBP));
  /* 11f99211 mov ebp, esp */
  EBP = (ESP);
  /* 11f99213 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f99215 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f99218 push eax */
  push32((uint32_t)(EAX));
  /* 11f99219 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f9921c push ecx */
  push32((uint32_t)(ECX));
  /* 11f9921d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f99220 push edx */
  push32((uint32_t)(EDX));
  /* 11f99221 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f99224 push eax */
  push32((uint32_t)(EAX));
  /* 11f99225 call 0x11f99110 */
  push32(0x11f9922au); f_11f99110();
  /* 11f9922a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f9922d pop ebp */
  EBP = (pop32());
  /* 11f9922e ret  */
  ESPCHK(0x11f99210u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11f99230 (123 bytes, 44 insns) */
void f_11f99230(void) {
  FTRACE(0x11f99230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f99230 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f99234 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11f9923a je 0x11f99250 */
  if (C.zf) goto L_11f99250;
L_11f9923c:;
  /* 11f9923c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11f9923e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f9923f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f99241 je 0x11f99283 */
  if (C.zf) goto L_11f99283;
  /* 11f99243 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11f99249 jne 0x11f9923c */
  if (!C.zf) goto L_11f9923c;
  /* 11f9924b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11f99250:;
  /* 11f99250 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11f99252 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11f99257 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f99259 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f9925c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9925e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f99261 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11f99266 je 0x11f99250 */
  if (C.zf) goto L_11f99250;
  /* 11f99268 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11f9926b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f9926d je 0x11f992a1 */
  if (C.zf) goto L_11f992a1;
  /* 11f9926f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11f99271 je 0x11f99297 */
  if (C.zf) goto L_11f99297;
  /* 11f99273 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11f99278 je 0x11f9928d */
  if (C.zf) goto L_11f9928d;
  /* 11f9927a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11f9927f je 0x11f99283 */
  if (C.zf) goto L_11f99283;
  /* 11f99281 jmp 0x11f99250 */
  goto L_11f99250;
L_11f99283:;
  /* 11f99283 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11f99286 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f9928a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9928c ret  */
  ESPCHK(0x11f99230u, _esp0);
  ESP += 4; return;
L_11f9928d:;
  /* 11f9928d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11f99290 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f99294 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f99296 ret  */
  ESPCHK(0x11f99230u, _esp0);
  ESP += 4; return;
L_11f99297:;
  /* 11f99297 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11f9929a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f9929e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f992a0 ret  */
  ESPCHK(0x11f99230u, _esp0);
  ESP += 4; return;
L_11f992a1:;
  /* 11f992a1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11f992a4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f992a8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f992aa ret  */
  ESPCHK(0x11f99230u, _esp0);
  ESP += 4; return;
}

/* FUN_100092b0 @ 0x11f992b0 (249 bytes, 93 insns) */
void f_11f992b0(void) {
  FTRACE(0x11f992b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f992b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f992b1 mov ebp, esp */
  EBP = (ESP);
  /* 11f992b3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f992b6 push ebx */
  push32((uint32_t)(EBX));
  /* 11f992b7 push esi */
  push32((uint32_t)(ESI));
  /* 11f992b8 push edi */
  push32((uint32_t)(EDI));
  /* 11f992b9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11f992bc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11f992bf lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 11f992c2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11f992c5:;
  /* 11f992c5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f992c9 jne 0x11f992e9 */
  if (!C.zf) goto L_11f992e9;
  /* 11f992cb push 0x11fbe034 */
  push32((uint32_t)(0x11fbe034u));
  /* 11f992d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f992d2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11f992d4 push 0x11fbe028 */
  push32((uint32_t)(0x11fbe028u));
  /* 11f992d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f992db call 0x11f954c0 */
  push32(0x11f992e0u); f_11f954c0();
  /* 11f992e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f992e3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f992e6 jne 0x11f992e9 */
  if (!C.zf) goto L_11f992e9;
  /* 11f992e8 int3  */
  x86_unimpl("int3 @ 0x11f992e8");
L_11f992e9:;
  /* 11f992e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f992eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f992ed jne 0x11f992c5 */
  if (!C.zf) goto L_11f992c5;
L_11f992ef:;
  /* 11f992ef cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f992f3 jne 0x11f99313 */
  if (!C.zf) goto L_11f99313;
  /* 11f992f5 push 0x11fbe018 */
  push32((uint32_t)(0x11fbe018u));
  /* 11f992fa push 0 */
  push32((uint32_t)(0x0u));
  /* 11f992fc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11f992fe push 0x11fbe028 */
  push32((uint32_t)(0x11fbe028u));
  /* 11f99303 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f99305 call 0x11f954c0 */
  push32(0x11f9930au); f_11f954c0();
  /* 11f9930a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9930d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99310 jne 0x11f99313 */
  if (!C.zf) goto L_11f99313;
  /* 11f99312 int3  */
  x86_unimpl("int3 @ 0x11f99312");
L_11f99313:;
  /* 11f99313 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f99315 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f99317 jne 0x11f992ef */
  if (!C.zf) goto L_11f992ef;
  /* 11f99319 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9931c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11f99323 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f99326 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f99329 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11f9932c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9932f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f99332 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11f99334 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f99337 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9933a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11f9933d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f99340 push edx */
  push32((uint32_t)(EDX));
  /* 11f99341 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f99344 push eax */
  push32((uint32_t)(EAX));
  /* 11f99345 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f99348 push ecx */
  push32((uint32_t)(ECX));
  /* 11f99349 call 0x11f9d390 */
  push32(0x11f9934eu); f_11f9d390();
  /* 11f9934e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f99351 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11f99354 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f99357 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f9935a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9935d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f99360 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11f99363 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f99366 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9936a jl 0x11f9938e */
  if ((C.sf!=C.of)) goto L_11f9938e;
  /* 11f9936c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9936f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f99371 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11f99374 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f99376 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f9937c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11f9937f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f99382 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f99384 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f99387 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9938a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11f9938c jmp 0x11f9939f */
  goto L_11f9939f;
L_11f9938e:;
  /* 11f9938e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f99391 push eax */
  push32((uint32_t)(EAX));
  /* 11f99392 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f99394 call 0x11f9d110 */
  push32(0x11f99399u); f_11f9d110();
  /* 11f99399 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9939c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11f9939f:;
  /* 11f9939f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f993a2 pop edi */
  EDI = (pop32());
  /* 11f993a3 pop esi */
  ESI = (pop32());
  /* 11f993a4 pop ebx */
  EBX = (pop32());
  /* 11f993a5 mov esp, ebp */
  ESP = (EBP);
  /* 11f993a7 pop ebp */
  EBP = (pop32());
  /* 11f993a8 ret  */
  ESPCHK(0x11f992b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100093b0 @ 0x11f993b0 (7 bytes, 3 insns) */
void f_11f993b0(void) {
  FTRACE(0x11f993b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f993b0 push edi */
  push32((uint32_t)(EDI));
  /* 11f993b1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11f993b5 jmp 0x11f99421 */
  jmp_ind(0x11f99421u); return;
}

/* FUN_100093c0 @ 0x11f993c0 (224 bytes, 84 insns) */
void f_11f993c0(void) {
  FTRACE(0x11f993c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f993c0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f993c4 push edi */
  push32((uint32_t)(EDI));
  /* 11f993c5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11f993cb je 0x11f993dc */
  if (C.zf) goto L_11f993dc;
L_11f993cd:;
  /* 11f993cd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11f993cf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f993d0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f993d2 je 0x11f9940f */
  if (C.zf) goto L_11f9940f;
  /* 11f993d4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11f993da jne 0x11f993cd */
  if (!C.zf) goto L_11f993cd;
L_11f993dc:;
  /* 11f993dc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11f993de mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11f993e3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f993e5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f993e8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f993ea add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f993ed test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11f993f2 je 0x11f993dc */
  if (C.zf) goto L_11f993dc;
  /* 11f993f4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11f993f7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f993f9 je 0x11f9941e */
  if (C.zf) goto L_11f9941e;
  /* 11f993fb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11f993fd je 0x11f99419 */
  if (C.zf) goto L_11f99419;
  /* 11f993ff test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11f99404 je 0x11f99414 */
  if (C.zf) goto L_11f99414;
  /* 11f99406 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11f9940b je 0x11f9940f */
  if (C.zf) goto L_11f9940f;
  /* 11f9940d jmp 0x11f993dc */
  goto L_11f993dc;
L_11f9940f:;
  /* 11f9940f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11f99412 jmp 0x11f99421 */
  goto L_11f99421;
L_11f99414:;
  /* 11f99414 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11f99417 jmp 0x11f99421 */
  goto L_11f99421;
L_11f99419:;
  /* 11f99419 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11f9941c jmp 0x11f99421 */
  goto L_11f99421;
L_11f9941e:;
  /* 11f9941e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11f99421:;
  /* 11f99421 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11f99425 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11f9942b je 0x11f99446 */
  if (C.zf) goto L_11f99446;
L_11f9942d:;
  /* 11f9942d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11f9942f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f99430 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f99432 je 0x11f99498 */
  if (C.zf) goto L_11f99498;
  /* 11f99434 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11f99436 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f99437 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11f9943d jne 0x11f9942d */
  if (!C.zf) goto L_11f9942d;
  /* 11f9943f jmp 0x11f99446 */
  goto L_11f99446;
L_11f99441:;
  /* 11f99441 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11f99443 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11f99446:;
  /* 11f99446 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11f9944b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11f9944d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9944f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f99452 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f99454 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f99456 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f99459 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11f9945e je 0x11f99441 */
  if (C.zf) goto L_11f99441;
  /* 11f99460 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f99462 je 0x11f99498 */
  if (C.zf) goto L_11f99498;
  /* 11f99464 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11f99466 je 0x11f9948f */
  if (C.zf) goto L_11f9948f;
  /* 11f99468 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11f9946e je 0x11f99482 */
  if (C.zf) goto L_11f99482;
  /* 11f99470 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11f99476 je 0x11f9947a */
  if (C.zf) goto L_11f9947a;
  /* 11f99478 jmp 0x11f99441 */
  goto L_11f99441;
L_11f9947a:;
  /* 11f9947a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11f9947c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f99480 pop edi */
  EDI = (pop32());
  /* 11f99481 ret  */
  ESPCHK(0x11f993c0u, _esp0);
  ESP += 4; return;
L_11f99482:;
  /* 11f99482 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11f99485 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f99489 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11f9948d pop edi */
  EDI = (pop32());
  /* 11f9948e ret  */
  ESPCHK(0x11f993c0u, _esp0);
  ESP += 4; return;
L_11f9948f:;
  /* 11f9948f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11f99492 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f99496 pop edi */
  EDI = (pop32());
  /* 11f99497 ret  */
  ESPCHK(0x11f993c0u, _esp0);
  ESP += 4; return;
L_11f99498:;
  /* 11f99498 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11f9949a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f9949e pop edi */
  EDI = (pop32());
  /* 11f9949f ret  */
  ESPCHK(0x11f993c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100094a0 @ 0x11f994a0 (243 bytes, 91 insns) */
void f_11f994a0(void) {
  FTRACE(0x11f994a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f994a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f994a1 mov ebp, esp */
  EBP = (ESP);
  /* 11f994a3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f994a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11f994a7 push esi */
  push32((uint32_t)(ESI));
  /* 11f994a8 push edi */
  push32((uint32_t)(EDI));
  /* 11f994a9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11f994ac mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11f994af:;
  /* 11f994af cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f994b3 jne 0x11f994d3 */
  if (!C.zf) goto L_11f994d3;
  /* 11f994b5 push 0x11fbe034 */
  push32((uint32_t)(0x11fbe034u));
  /* 11f994ba push 0 */
  push32((uint32_t)(0x0u));
  /* 11f994bc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 11f994be push 0x11fbe044 */
  push32((uint32_t)(0x11fbe044u));
  /* 11f994c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f994c5 call 0x11f954c0 */
  push32(0x11f994cau); f_11f954c0();
  /* 11f994ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f994cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f994d0 jne 0x11f994d3 */
  if (!C.zf) goto L_11f994d3;
  /* 11f994d2 int3  */
  x86_unimpl("int3 @ 0x11f994d2");
L_11f994d3:;
  /* 11f994d3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f994d5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f994d7 jne 0x11f994af */
  if (!C.zf) goto L_11f994af;
L_11f994d9:;
  /* 11f994d9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f994dd jne 0x11f994fd */
  if (!C.zf) goto L_11f994fd;
  /* 11f994df push 0x11fbe018 */
  push32((uint32_t)(0x11fbe018u));
  /* 11f994e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f994e6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11f994e8 push 0x11fbe044 */
  push32((uint32_t)(0x11fbe044u));
  /* 11f994ed push 2 */
  push32((uint32_t)(0x2u));
  /* 11f994ef call 0x11f954c0 */
  push32(0x11f994f4u); f_11f954c0();
  /* 11f994f4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f994f7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f994fa jne 0x11f994fd */
  if (!C.zf) goto L_11f994fd;
  /* 11f994fc int3  */
  x86_unimpl("int3 @ 0x11f994fc");
L_11f994fd:;
  /* 11f994fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f994ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f99501 jne 0x11f994d9 */
  if (!C.zf) goto L_11f994d9;
  /* 11f99503 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f99506 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 11f9950d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f99510 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f99513 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11f99516 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f99519 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9951c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11f9951e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f99521 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f99524 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11f99527 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f9952a push ecx */
  push32((uint32_t)(ECX));
  /* 11f9952b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f9952e push edx */
  push32((uint32_t)(EDX));
  /* 11f9952f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f99532 push eax */
  push32((uint32_t)(EAX));
  /* 11f99533 call 0x11f9d390 */
  push32(0x11f99538u); f_11f9d390();
  /* 11f99538 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9953b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11f9953e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f99541 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f99544 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f99547 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9954a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11f9954d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f99550 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99554 jl 0x11f99578 */
  if ((C.sf!=C.of)) goto L_11f99578;
  /* 11f99556 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f99559 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f9955b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11f9955e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f99560 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f99566 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11f99569 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9956c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f9956e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f99571 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f99574 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11f99576 jmp 0x11f99589 */
  goto L_11f99589;
L_11f99578:;
  /* 11f99578 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9957b push edx */
  push32((uint32_t)(EDX));
  /* 11f9957c push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9957e call 0x11f9d110 */
  push32(0x11f99583u); f_11f9d110();
  /* 11f99583 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f99586 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_11f99589:;
  /* 11f99589 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f9958c pop edi */
  EDI = (pop32());
  /* 11f9958d pop esi */
  ESI = (pop32());
  /* 11f9958e pop ebx */
  EBX = (pop32());
  /* 11f9958f mov esp, ebp */
  ESP = (EBP);
  /* 11f99591 pop ebp */
  EBP = (pop32());
  /* 11f99592 ret  */
  ESPCHK(0x11f994a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100095a0 @ 0x11f995a0 (47 bytes, 17 insns) */
void f_11f995a0(void) {
  FTRACE(0x11f995a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f995a0 push ecx */
  push32((uint32_t)(ECX));
  /* 11f995a1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f995a6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11f995aa jb 0x11f995c0 */
  if (C.cf) goto L_11f995c0;
L_11f995ac:;
  /* 11f995ac sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f995b2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f995b7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11f995b9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f995be jae 0x11f995ac */
  if (!C.cf) goto L_11f995ac;
L_11f995c0:;
  /* 11f995c0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f995c2 mov eax, esp */
  EAX = (ESP);
  /* 11f995c4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11f995c6 mov esp, ecx */
  ESP = (ECX);
  /* 11f995c8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f995ca mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f995cd push eax */
  push32((uint32_t)(EAX));
  /* 11f995ce ret  */
  ESPCHK(0x11f995a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100095d0 @ 0x11f995d0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_11f995d0(void) {
  FTRACE(0x11f995d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f995d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f995d1 mov ebp, esp */
  EBP = (ESP);
  /* 11f995d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f995d6 push esi */
  push32((uint32_t)(ESI));
  /* 11f995d7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f995db je 0x11f995e3 */
  if (C.zf) goto L_11f995e3;
  /* 11f995dd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f995e1 jne 0x11f995e8 */
  if (!C.zf) goto L_11f995e8;
L_11f995e3:;
  /* 11f995e3 jmp 0x11f997b8 */
  goto L_11f997b8;
L_11f995e8:;
  /* 11f995e8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f995ec je 0x11f99604 */
  if (C.zf) goto L_11f99604;
  /* 11f995ee cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f995f2 je 0x11f99604 */
  if (C.zf) goto L_11f99604;
  /* 11f995f4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f995f8 je 0x11f99604 */
  if (C.zf) goto L_11f99604;
  /* 11f995fa cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f995fe jne 0x11f996e1 */
  if (!C.zf) goto L_11f996e1;
L_11f99604:;
  /* 11f99604 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f99606 call 0x11f99e00 */
  push32(0x11f9960bu); f_11f99e00();
  /* 11f9960b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9960e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99612 je 0x11f9961a */
  if (C.zf) goto L_11f9961a;
  /* 11f99614 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99618 jne 0x11f9965f */
  if (!C.zf) goto L_11f9965f;
L_11f9961a:;
  /* 11f9961a cmp dword ptr [0x11fc2838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99621 jne 0x11f9965f */
  if (!C.zf) goto L_11f9965f;
  /* 11f99623 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f99625 push 0x11f99800 */
  push32((uint32_t)(0x11f99800u));
  /* 11f9962a call dword ptr [0x11fc534c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc534c))), 0x11f99630u);
  /* 11f99630 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99633 jne 0x11f99641 */
  if (!C.zf) goto L_11f99641;
  /* 11f99635 mov dword ptr [0x11fc2838], 1 */
  w32((uint32_t)(0x11fc2838), (0x1u));
  /* 11f9963f jmp 0x11f9965f */
  goto L_11f9965f;
L_11f99641:;
  /* 11f99641 call dword ptr [0x11fc53ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc53ac))), 0x11f99647u);
  /* 11f99647 mov esi, eax */
  ESI = (EAX);
  /* 11f99649 call 0x11f9e2e0 */
  push32(0x11f9964eu); f_11f9e2e0();
  /* 11f9964e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11f99650 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f99652 call 0x11f99ea0 */
  push32(0x11f99657u); f_11f99ea0();
  /* 11f99657 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9965a jmp 0x11f997b8 */
  goto L_11f997b8;
L_11f9965f:;
  /* 11f9965f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f99662 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11f99665 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f99668 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9966b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11f9966e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99672 ja 0x11f996d2 */
  if ((!C.cf&&!C.zf)) goto L_11f996d2;
  /* 11f99674 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f99677 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f99679 mov dl, byte ptr [eax + 0x11f997df] */
  DL = (r8((uint32_t)(EAX + 0x11f997df)));
  /* 11f9967f jmp dword ptr [edx*4 + 0x11f997cb] */
  switch (EDX) {
    case 0: goto L_11f99686;
    case 1: goto L_11f996c0;
    case 2: goto L_11f9969a;
    case 3: goto L_11f996ad;
    case 4: goto L_11f996d2;
    default: x86_unimpl("switch@0x11f9967f out of table"); return;
  }
L_11f99686:;
  /* 11f99686 mov ecx, dword ptr [0x11fc2828] */
  ECX = (r32((uint32_t)(0x11fc2828)));
  /* 11f9968c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f9968f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f99692 mov dword ptr [0x11fc2828], edx */
  w32((uint32_t)(0x11fc2828), (EDX));
  /* 11f99698 jmp 0x11f996d2 */
  goto L_11f996d2;
L_11f9969a:;
  /* 11f9969a mov eax, dword ptr [0x11fc282c] */
  EAX = (r32((uint32_t)(0x11fc282c)));
  /* 11f9969f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f996a2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f996a5 mov dword ptr [0x11fc282c], ecx */
  w32((uint32_t)(0x11fc282c), (ECX));
  /* 11f996ab jmp 0x11f996d2 */
  goto L_11f996d2;
L_11f996ad:;
  /* 11f996ad mov edx, dword ptr [0x11fc2830] */
  EDX = (r32((uint32_t)(0x11fc2830)));
  /* 11f996b3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11f996b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f996b9 mov dword ptr [0x11fc2830], eax */
  w32((uint32_t)(0x11fc2830), (EAX));
  /* 11f996be jmp 0x11f996d2 */
  goto L_11f996d2;
L_11f996c0:;
  /* 11f996c0 mov ecx, dword ptr [0x11fc2834] */
  ECX = (r32((uint32_t)(0x11fc2834)));
  /* 11f996c6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f996c9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f996cc mov dword ptr [0x11fc2834], edx */
  w32((uint32_t)(0x11fc2834), (EDX));
L_11f996d2:;
  /* 11f996d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f996d4 call 0x11f99ea0 */
  push32(0x11f996d9u); f_11f99ea0();
  /* 11f996d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f996dc jmp 0x11f997b3 */
  goto L_11f997b3;
L_11f996e1:;
  /* 11f996e1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f996e5 je 0x11f996f8 */
  if (C.zf) goto L_11f996f8;
  /* 11f996e7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f996eb je 0x11f996f8 */
  if (C.zf) goto L_11f996f8;
  /* 11f996ed cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f996f1 je 0x11f996f8 */
  if (C.zf) goto L_11f996f8;
  /* 11f996f3 jmp 0x11f997b8 */
  goto L_11f997b8;
L_11f996f8:;
  /* 11f996f8 call 0x11f95e40 */
  push32(0x11f996fdu); f_11f95e40();
  /* 11f996fd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f99700 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f99703 cmp dword ptr [eax + 0x50], 0x11fc0c10 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x11fc0c10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9970a jne 0x11f99755 */
  if (!C.zf) goto L_11f99755;
  /* 11f9970c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 11f99711 push 0x11fbe050 */
  push32((uint32_t)(0x11fbe050u));
  /* 11f99716 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f99718 mov ecx, dword ptr [0x11fc0c90] */
  ECX = (r32((uint32_t)(0x11fc0c90)));
  /* 11f9971e push ecx */
  push32((uint32_t)(ECX));
  /* 11f9971f call 0x11f96400 */
  push32(0x11f99724u); f_11f96400();
  /* 11f99724 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f99727 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9972a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 11f9972d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f99730 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99734 je 0x11f99753 */
  if (C.zf) goto L_11f99753;
  /* 11f99736 mov ecx, dword ptr [0x11fc0c90] */
  ECX = (r32((uint32_t)(0x11fc0c90)));
  /* 11f9973c push ecx */
  push32((uint32_t)(ECX));
  /* 11f9973d push 0x11fc0c10 */
  push32((uint32_t)(0x11fc0c10u));
  /* 11f99742 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f99745 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11f99748 push eax */
  push32((uint32_t)(EAX));
  /* 11f99749 call 0x11f9cce0 */
  push32(0x11f9974eu); f_11f9cce0();
  /* 11f9974e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f99751 jmp 0x11f99755 */
  goto L_11f99755;
L_11f99753:;
  /* 11f99753 jmp 0x11f997b8 */
  goto L_11f997b8;
L_11f99755:;
  /* 11f99755 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f99758 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11f9975b push edx */
  push32((uint32_t)(EDX));
  /* 11f9975c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9975f push eax */
  push32((uint32_t)(EAX));
  /* 11f99760 call 0x11f99ae0 */
  push32(0x11f99765u); f_11f99ae0();
  /* 11f99765 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f99768 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f9976b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9976f jne 0x11f99773 */
  if (!C.zf) goto L_11f99773;
  /* 11f99771 jmp 0x11f997b8 */
  goto L_11f997b8;
L_11f99773:;
  /* 11f99773 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f99776 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f99779 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11f9977c:;
  /* 11f9977c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9977f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f99782 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99785 jne 0x11f997b3 */
  if (!C.zf) goto L_11f997b3;
  /* 11f99787 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9978a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9978d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11f99790 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f99793 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f99796 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f99799 mov edx, dword ptr [0x11fc0c94] */
  EDX = (r32((uint32_t)(0x11fc0c94)));
  /* 11f9979f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f997a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f997a5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11f997a8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f997aa cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f997ad jb 0x11f997b1 */
  if (C.cf) goto L_11f997b1;
  /* 11f997af jmp 0x11f997b3 */
  goto L_11f997b3;
L_11f997b1:;
  /* 11f997b1 jmp 0x11f9977c */
  goto L_11f9977c;
L_11f997b3:;
  /* 11f997b3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f997b6 jmp 0x11f997c6 */
  goto L_11f997c6;
L_11f997b8:;
  /* 11f997b8 call 0x11f9e2d0 */
  push32(0x11f997bdu); f_11f9e2d0();
  /* 11f997bd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11f997c3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11f997c6:;
  /* 11f997c6 pop esi */
  ESI = (pop32());
  /* 11f997c7 mov esp, ebp */
  ESP = (EBP);
  /* 11f997c9 pop ebp */
  EBP = (pop32());
  /* 11f997ca ret  */
  ESPCHK(0x11f995d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009800 @ 0x11f99800 (146 bytes, 45 insns) */
void f_11f99800(void) {
  FTRACE(0x11f99800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f99800 push ebp */
  push32((uint32_t)(EBP));
  /* 11f99801 mov ebp, esp */
  EBP = (ESP);
  /* 11f99803 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f99806 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f99808 call 0x11f99e00 */
  push32(0x11f9980du); f_11f99e00();
  /* 11f9980d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f99810 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99814 jne 0x11f9982e */
  if (!C.zf) goto L_11f9982e;
  /* 11f99816 mov dword ptr [ebp - 8], 0x11fc2828 */
  w32((uint32_t)(EBP + -0x8), (0x11fc2828u));
  /* 11f9981d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f99820 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f99822 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f99825 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11f9982c jmp 0x11f99844 */
  goto L_11f99844;
L_11f9982e:;
  /* 11f9982e mov dword ptr [ebp - 8], 0x11fc282c */
  w32((uint32_t)(EBP + -0x8), (0x11fc282cu));
  /* 11f99835 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f99838 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f9983a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f9983d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_11f99844:;
  /* 11f99844 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99848 jne 0x11f99858 */
  if (!C.zf) goto L_11f99858;
  /* 11f9984a push 1 */
  push32((uint32_t)(0x1u));
  /* 11f9984c call 0x11f99ea0 */
  push32(0x11f99851u); f_11f99ea0();
  /* 11f99851 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f99854 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f99856 jmp 0x11f9988c */
  goto L_11f9988c;
L_11f99858:;
  /* 11f99858 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9985c je 0x11f9987d */
  if (C.zf) goto L_11f9987d;
  /* 11f9985e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f99861 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11f99867 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f99869 call 0x11f99ea0 */
  push32(0x11f9986eu); f_11f99ea0();
  /* 11f9986e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f99871 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f99874 push edx */
  push32((uint32_t)(EDX));
  /* 11f99875 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x11f99878u);
  /* 11f99878 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9987b jmp 0x11f99887 */
  goto L_11f99887;
L_11f9987d:;
  /* 11f9987d push 1 */
  push32((uint32_t)(0x1u));
  /* 11f9987f call 0x11f99ea0 */
  push32(0x11f99884u); f_11f99ea0();
  /* 11f99884 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f99887:;
  /* 11f99887 mov eax, 1 */
  EAX = (0x1u);
L_11f9988c:;
  /* 11f9988c mov esp, ebp */
  ESP = (EBP);
  /* 11f9988e pop ebp */
  EBP = (pop32());
  /* 11f9988f ret 4 */
  ESPCHK(0x11f99800u, _esp0);
  ESP += 8; return;
}

/* FUN_100098a0 @ 0x11f998a0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_11f998a0(void) {
  FTRACE(0x11f998a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f998a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f998a1 mov ebp, esp */
  EBP = (ESP);
  /* 11f998a3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f998a6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11f998ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f998b0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11f998b3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f998b6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f998b9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11f998bc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f998c0 ja 0x11f9996e */
  if ((!C.cf&&!C.zf)) goto L_11f9996e;
  /* 11f998c6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f998c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f998cb mov dl, byte ptr [eax + 0x11f99ac2] */
  DL = (r8((uint32_t)(EAX + 0x11f99ac2)));
  /* 11f998d1 jmp dword ptr [edx*4 + 0x11f99aaa] */
  switch (EDX) {
    case 0: goto L_11f998d8;
    case 1: goto L_11f99943;
    case 2: goto L_11f99929;
    case 3: goto L_11f998f5;
    case 4: goto L_11f9990f;
    case 5: goto L_11f9996e;
    default: x86_unimpl("switch@0x11f998d1 out of table"); return;
  }
L_11f998d8:;
  /* 11f998d8 mov dword ptr [ebp - 0x18], 0x11fc2828 */
  w32((uint32_t)(EBP + -0x18), (0x11fc2828u));
  /* 11f998df mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f998e2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f998e4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11f998e7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f998ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f998ed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f998f0 jmp 0x11f99976 */
  goto L_11f99976;
L_11f998f5:;
  /* 11f998f5 mov dword ptr [ebp - 0x18], 0x11fc282c */
  w32((uint32_t)(EBP + -0x18), (0x11fc282cu));
  /* 11f998fc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f998ff mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f99901 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11f99904 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f99907 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9990a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f9990d jmp 0x11f99976 */
  goto L_11f99976;
L_11f9990f:;
  /* 11f9990f mov dword ptr [ebp - 0x18], 0x11fc2830 */
  w32((uint32_t)(EBP + -0x18), (0x11fc2830u));
  /* 11f99916 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f99919 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f9991b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11f9991e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f99921 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f99924 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f99927 jmp 0x11f99976 */
  goto L_11f99976;
L_11f99929:;
  /* 11f99929 mov dword ptr [ebp - 0x18], 0x11fc2834 */
  w32((uint32_t)(EBP + -0x18), (0x11fc2834u));
  /* 11f99930 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f99933 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f99935 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11f99938 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9993b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9993e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f99941 jmp 0x11f99976 */
  goto L_11f99976;
L_11f99943:;
  /* 11f99943 call 0x11f95e40 */
  push32(0x11f99948u); f_11f95e40();
  /* 11f99948 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f9994b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9994e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11f99951 push edx */
  push32((uint32_t)(EDX));
  /* 11f99952 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f99955 push eax */
  push32((uint32_t)(EAX));
  /* 11f99956 call 0x11f99ae0 */
  push32(0x11f9995bu); f_11f99ae0();
  /* 11f9995b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9995e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f99961 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11f99964 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f99967 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f99969 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11f9996c jmp 0x11f99976 */
  goto L_11f99976;
L_11f9996e:;
  /* 11f9996e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f99971 jmp 0x11f99aa6 */
  goto L_11f99aa6;
L_11f99976:;
  /* 11f99976 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9997a je 0x11f99986 */
  if (C.zf) goto L_11f99986;
  /* 11f9997c push 1 */
  push32((uint32_t)(0x1u));
  /* 11f9997e call 0x11f99e00 */
  push32(0x11f99983u); f_11f99e00();
  /* 11f99983 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f99986:;
  /* 11f99986 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9998a jne 0x11f999a3 */
  if (!C.zf) goto L_11f999a3;
  /* 11f9998c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99990 je 0x11f9999c */
  if (C.zf) goto L_11f9999c;
  /* 11f99992 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f99994 call 0x11f99ea0 */
  push32(0x11f99999u); f_11f99ea0();
  /* 11f99999 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f9999c:;
  /* 11f9999c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9999e jmp 0x11f99aa6 */
  goto L_11f99aa6;
L_11f999a3:;
  /* 11f999a3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f999a7 jne 0x11f999c0 */
  if (!C.zf) goto L_11f999c0;
  /* 11f999a9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f999ad je 0x11f999b9 */
  if (C.zf) goto L_11f999b9;
  /* 11f999af push 1 */
  push32((uint32_t)(0x1u));
  /* 11f999b1 call 0x11f99ea0 */
  push32(0x11f999b6u); f_11f99ea0();
  /* 11f999b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f999b9:;
  /* 11f999b9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f999bb call 0x11f95bc0 */
  push32(0x11f999c0u); f_11f95bc0();
L_11f999c0:;
  /* 11f999c0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f999c4 je 0x11f999d2 */
  if (C.zf) goto L_11f999d2;
  /* 11f999c6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f999ca je 0x11f999d2 */
  if (C.zf) goto L_11f999d2;
  /* 11f999cc cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f999d0 jne 0x11f999fe */
  if (!C.zf) goto L_11f999fe;
L_11f999d2:;
  /* 11f999d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f999d5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11f999d8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11f999db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f999de mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 11f999e5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f999e9 jne 0x11f999fe */
  if (!C.zf) goto L_11f999fe;
  /* 11f999eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f999ee mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11f999f1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f999f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f999f7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_11f999fe:;
  /* 11f999fe cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99a02 jne 0x11f99a40 */
  if (!C.zf) goto L_11f99a40;
  /* 11f99a04 mov eax, dword ptr [0x11fc0c88] */
  EAX = (r32((uint32_t)(0x11fc0c88)));
  /* 11f99a09 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11f99a0c jmp 0x11f99a17 */
  goto L_11f99a17;
L_11f99a0e:;
  /* 11f99a0e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f99a11 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f99a14 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11f99a17:;
  /* 11f99a17 mov edx, dword ptr [0x11fc0c88] */
  EDX = (r32((uint32_t)(0x11fc0c88)));
  /* 11f99a1d add edx, dword ptr [0x11fc0c8c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11fc0c8c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f99a23 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99a26 jge 0x11f99a3e */
  if ((C.sf==C.of)) goto L_11f99a3e;
  /* 11f99a28 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f99a2b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f99a2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f99a31 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11f99a34 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11f99a3c jmp 0x11f99a0e */
  goto L_11f99a0e;
L_11f99a3e:;
  /* 11f99a3e jmp 0x11f99a49 */
  goto L_11f99a49;
L_11f99a40:;
  /* 11f99a40 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f99a43 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11f99a49:;
  /* 11f99a49 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99a4d je 0x11f99a59 */
  if (C.zf) goto L_11f99a59;
  /* 11f99a4f push 1 */
  push32((uint32_t)(0x1u));
  /* 11f99a51 call 0x11f99ea0 */
  push32(0x11f99a56u); f_11f99ea0();
  /* 11f99a56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f99a59:;
  /* 11f99a59 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99a5d jne 0x11f99a70 */
  if (!C.zf) goto L_11f99a70;
  /* 11f99a5f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f99a62 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11f99a65 push edx */
  push32((uint32_t)(EDX));
  /* 11f99a66 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f99a68 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11f99a6bu);
  /* 11f99a6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f99a6e jmp 0x11f99a7a */
  goto L_11f99a7a;
L_11f99a70:;
  /* 11f99a70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f99a73 push eax */
  push32((uint32_t)(EAX));
  /* 11f99a74 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11f99a77u);
  /* 11f99a77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f99a7a:;
  /* 11f99a7a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99a7e je 0x11f99a8c */
  if (C.zf) goto L_11f99a8c;
  /* 11f99a80 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99a84 je 0x11f99a8c */
  if (C.zf) goto L_11f99a8c;
  /* 11f99a86 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99a8a jne 0x11f99aa4 */
  if (!C.zf) goto L_11f99aa4;
L_11f99a8c:;
  /* 11f99a8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f99a8f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f99a92 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 11f99a95 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99a99 jne 0x11f99aa4 */
  if (!C.zf) goto L_11f99aa4;
  /* 11f99a9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f99a9e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f99aa1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_11f99aa4:;
  /* 11f99aa4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f99aa6:;
  /* 11f99aa6 mov esp, ebp */
  ESP = (EBP);
  /* 11f99aa8 pop ebp */
  EBP = (pop32());
  /* 11f99aa9 ret  */
  ESPCHK(0x11f998a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ae0 @ 0x11f99ae0 (91 bytes, 35 insns) */
void f_11f99ae0(void) {
  FTRACE(0x11f99ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f99ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f99ae1 mov ebp, esp */
  EBP = (ESP);
  /* 11f99ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f99ae4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f99ae7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f99aea:;
  /* 11f99aea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f99aed mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f99af0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99af3 je 0x11f99b13 */
  if (C.zf) goto L_11f99b13;
  /* 11f99af5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f99af8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f99afb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f99afe mov ecx, dword ptr [0x11fc0c94] */
  ECX = (r32((uint32_t)(0x11fc0c94)));
  /* 11f99b04 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f99b07 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f99b0a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f99b0c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99b0f jae 0x11f99b13 */
  if (!C.cf) goto L_11f99b13;
  /* 11f99b11 jmp 0x11f99aea */
  goto L_11f99aea;
L_11f99b13:;
  /* 11f99b13 mov eax, dword ptr [0x11fc0c94] */
  EAX = (r32((uint32_t)(0x11fc0c94)));
  /* 11f99b18 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f99b1b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f99b1e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f99b20 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99b23 jae 0x11f99b35 */
  if (!C.cf) goto L_11f99b35;
  /* 11f99b25 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f99b28 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f99b2b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99b2e jne 0x11f99b35 */
  if (!C.zf) goto L_11f99b35;
  /* 11f99b30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f99b33 jmp 0x11f99b37 */
  goto L_11f99b37;
L_11f99b35:;
  /* 11f99b35 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f99b37:;
  /* 11f99b37 mov esp, ebp */
  ESP = (EBP);
  /* 11f99b39 pop ebp */
  EBP = (pop32());
  /* 11f99b3a ret  */
  ESPCHK(0x11f99ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b40 @ 0x11f99b40 (13 bytes, 6 insns) */
void f_11f99b40(void) {
  FTRACE(0x11f99b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f99b40 push ebp */
  push32((uint32_t)(EBP));
  /* 11f99b41 mov ebp, esp */
  EBP = (ESP);
  /* 11f99b43 call 0x11f95e40 */
  push32(0x11f99b48u); f_11f95e40();
  /* 11f99b48 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f99b4b pop ebp */
  EBP = (pop32());
  /* 11f99b4c ret  */
  ESPCHK(0x11f99b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b50 @ 0x11f99b50 (13 bytes, 6 insns) */
void f_11f99b50(void) {
  FTRACE(0x11f99b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f99b50 push ebp */
  push32((uint32_t)(EBP));
  /* 11f99b51 mov ebp, esp */
  EBP = (ESP);
  /* 11f99b53 call 0x11f95e40 */
  push32(0x11f99b58u); f_11f95e40();
  /* 11f99b58 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f99b5b pop ebp */
  EBP = (pop32());
  /* 11f99b5c ret  */
  ESPCHK(0x11f99b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b60 @ 0x11f99b60 (187 bytes, 54 insns) */
void f_11f99b60(void) {
  FTRACE(0x11f99b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f99b60 push ebp */
  push32((uint32_t)(EBP));
  /* 11f99b61 mov ebp, esp */
  EBP = (ESP);
  /* 11f99b63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f99b66 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f99b6d cmp dword ptr [0x11fc283c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc283c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99b74 jne 0x11f99bd3 */
  if (!C.zf) goto L_11f99bd3;
  /* 11f99b76 push 0x11fbd47c */
  push32((uint32_t)(0x11fbd47cu));
  /* 11f99b7b call dword ptr [0x11fc5398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5398))), 0x11f99b81u);
  /* 11f99b81 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f99b84 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99b88 je 0x11f99ba7 */
  if (C.zf) goto L_11f99ba7;
  /* 11f99b8a push 0x11fbe080 */
  push32((uint32_t)(0x11fbe080u));
  /* 11f99b8f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f99b92 push eax */
  push32((uint32_t)(EAX));
  /* 11f99b93 call dword ptr [0x11fc5394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5394))), 0x11f99b99u);
  /* 11f99b99 mov dword ptr [0x11fc283c], eax */
  w32((uint32_t)(0x11fc283c), (EAX));
  /* 11f99b9e cmp dword ptr [0x11fc283c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc283c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99ba5 jne 0x11f99bab */
  if (!C.zf) goto L_11f99bab;
L_11f99ba7:;
  /* 11f99ba7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f99ba9 jmp 0x11f99c17 */
  goto L_11f99c17;
L_11f99bab:;
  /* 11f99bab push 0x11fbe070 */
  push32((uint32_t)(0x11fbe070u));
  /* 11f99bb0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f99bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f99bb4 call dword ptr [0x11fc5394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5394))), 0x11f99bbau);
  /* 11f99bba mov dword ptr [0x11fc2840], eax */
  w32((uint32_t)(0x11fc2840), (EAX));
  /* 11f99bbf push 0x11fbe05c */
  push32((uint32_t)(0x11fbe05cu));
  /* 11f99bc4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f99bc7 push edx */
  push32((uint32_t)(EDX));
  /* 11f99bc8 call dword ptr [0x11fc5394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5394))), 0x11f99bceu);
  /* 11f99bce mov dword ptr [0x11fc2844], eax */
  w32((uint32_t)(0x11fc2844), (EAX));
L_11f99bd3:;
  /* 11f99bd3 cmp dword ptr [0x11fc2840], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2840))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99bda je 0x11f99be5 */
  if (C.zf) goto L_11f99be5;
  /* 11f99bdc call dword ptr [0x11fc2840] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc2840))), 0x11f99be2u);
  /* 11f99be2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f99be5:;
  /* 11f99be5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99be9 je 0x11f99c01 */
  if (C.zf) goto L_11f99c01;
  /* 11f99beb cmp dword ptr [0x11fc2844], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2844))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99bf2 je 0x11f99c01 */
  if (C.zf) goto L_11f99c01;
  /* 11f99bf4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f99bf7 push eax */
  push32((uint32_t)(EAX));
  /* 11f99bf8 call dword ptr [0x11fc2844] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc2844))), 0x11f99bfeu);
  /* 11f99bfe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f99c01:;
  /* 11f99c01 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f99c04 push ecx */
  push32((uint32_t)(ECX));
  /* 11f99c05 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f99c08 push edx */
  push32((uint32_t)(EDX));
  /* 11f99c09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f99c0c push eax */
  push32((uint32_t)(EAX));
  /* 11f99c0d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f99c10 push ecx */
  push32((uint32_t)(ECX));
  /* 11f99c11 call dword ptr [0x11fc283c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc283c))), 0x11f99c17u);
L_11f99c17:;
  /* 11f99c17 mov esp, ebp */
  ESP = (EBP);
  /* 11f99c19 pop ebp */
  EBP = (pop32());
  /* 11f99c1a ret  */
  ESPCHK(0x11f99b60u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x11f99c20 (254 bytes, 109 insns) */
void f_11f99c20(void) {
  FTRACE(0x11f99c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f99c20 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11f99c24 push edi */
  push32((uint32_t)(EDI));
  /* 11f99c25 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f99c27 je 0x11f99ca3 */
  if (C.zf) goto L_11f99ca3;
  /* 11f99c29 push esi */
  push32((uint32_t)(ESI));
  /* 11f99c2a push ebx */
  push32((uint32_t)(EBX));
  /* 11f99c2b mov ebx, ecx */
  EBX = (ECX);
  /* 11f99c2d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11f99c31 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11f99c37 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11f99c3b jne 0x11f99c44 */
  if (!C.zf) goto L_11f99c44;
  /* 11f99c3d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f99c40 jne 0x11f99cb1 */
  if (!C.zf) goto L_11f99cb1;
  /* 11f99c42 jmp 0x11f99c65 */
  goto L_11f99c65;
L_11f99c44:;
  /* 11f99c44 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f99c46 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f99c47 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f99c49 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f99c4a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f99c4b je 0x11f99c72 */
  if (C.zf) goto L_11f99c72;
  /* 11f99c4d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f99c4f je 0x11f99c7a */
  if (C.zf) goto L_11f99c7a;
  /* 11f99c51 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11f99c57 jne 0x11f99c44 */
  if (!C.zf) goto L_11f99c44;
  /* 11f99c59 mov ebx, ecx */
  EBX = (ECX);
  /* 11f99c5b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f99c5e jne 0x11f99cb1 */
  if (!C.zf) goto L_11f99cb1;
L_11f99c60:;
  /* 11f99c60 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11f99c63 je 0x11f99c72 */
  if (C.zf) goto L_11f99c72;
L_11f99c65:;
  /* 11f99c65 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f99c67 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f99c68 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f99c6a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f99c6b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f99c6d je 0x11f99c9e */
  if (C.zf) goto L_11f99c9e;
  /* 11f99c6f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11f99c70 jne 0x11f99c65 */
  if (!C.zf) goto L_11f99c65;
L_11f99c72:;
  /* 11f99c72 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11f99c76 pop ebx */
  EBX = (pop32());
  /* 11f99c77 pop esi */
  ESI = (pop32());
  /* 11f99c78 pop edi */
  EDI = (pop32());
  /* 11f99c79 ret  */
  ESPCHK(0x11f99c20u, _esp0);
  ESP += 4; return;
L_11f99c7a:;
  /* 11f99c7a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11f99c80 je 0x11f99c94 */
  if (C.zf) goto L_11f99c94;
L_11f99c82:;
  /* 11f99c82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f99c84 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f99c85 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f99c86 je 0x11f99d16 */
  if (C.zf) goto L_11f99d16;
  /* 11f99c8c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11f99c92 jne 0x11f99c82 */
  if (!C.zf) goto L_11f99c82;
L_11f99c94:;
  /* 11f99c94 mov ebx, ecx */
  EBX = (ECX);
  /* 11f99c96 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f99c99 jne 0x11f99d07 */
  if (!C.zf) goto L_11f99d07;
L_11f99c9b:;
  /* 11f99c9b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f99c9d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11f99c9e:;
  /* 11f99c9e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11f99c9f jne 0x11f99c9b */
  if (!C.zf) goto L_11f99c9b;
  /* 11f99ca1 pop ebx */
  EBX = (pop32());
  /* 11f99ca2 pop esi */
  ESI = (pop32());
L_11f99ca3:;
  /* 11f99ca3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f99ca7 pop edi */
  EDI = (pop32());
  /* 11f99ca8 ret  */
  ESPCHK(0x11f99c20u, _esp0);
  ESP += 4; return;
L_11f99ca9:;
  /* 11f99ca9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11f99cab add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f99cae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f99caf je 0x11f99c60 */
  if (C.zf) goto L_11f99c60;
L_11f99cb1:;
  /* 11f99cb1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11f99cb6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11f99cb8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f99cba xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f99cbd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f99cbf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11f99cc1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f99cc4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11f99cc9 je 0x11f99ca9 */
  if (C.zf) goto L_11f99ca9;
  /* 11f99ccb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f99ccd je 0x11f99cfb */
  if (C.zf) goto L_11f99cfb;
  /* 11f99ccf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11f99cd1 je 0x11f99cf1 */
  if (C.zf) goto L_11f99cf1;
  /* 11f99cd3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11f99cd9 je 0x11f99ce7 */
  if (C.zf) goto L_11f99ce7;
  /* 11f99cdb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11f99ce1 jne 0x11f99ca9 */
  if (!C.zf) goto L_11f99ca9;
  /* 11f99ce3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11f99ce5 jmp 0x11f99cff */
  goto L_11f99cff;
L_11f99ce7:;
  /* 11f99ce7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f99ced mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11f99cef jmp 0x11f99cff */
  goto L_11f99cff;
L_11f99cf1:;
  /* 11f99cf1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f99cf7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11f99cf9 jmp 0x11f99cff */
  goto L_11f99cff;
L_11f99cfb:;
  /* 11f99cfb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f99cfd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11f99cff:;
  /* 11f99cff add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f99d02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f99d04 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f99d05 je 0x11f99d11 */
  if (C.zf) goto L_11f99d11;
L_11f99d07:;
  /* 11f99d07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f99d09:;
  /* 11f99d09 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11f99d0b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f99d0e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f99d0f jne 0x11f99d09 */
  if (!C.zf) goto L_11f99d09;
L_11f99d11:;
  /* 11f99d11 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11f99d14 jne 0x11f99c9b */
  if (!C.zf) goto L_11f99c9b;
L_11f99d16:;
  /* 11f99d16 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11f99d1a pop ebx */
  EBX = (pop32());
  /* 11f99d1b pop esi */
  ESI = (pop32());
  /* 11f99d1c pop edi */
  EDI = (pop32());
  /* 11f99d1d ret  */
  ESPCHK(0x11f99c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d20 @ 0x11f99d20 (55 bytes, 16 insns) */
void f_11f99d20(void) {
  FTRACE(0x11f99d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f99d20 push ebp */
  push32((uint32_t)(EBP));
  /* 11f99d21 mov ebp, esp */
  EBP = (ESP);
  /* 11f99d23 mov eax, dword ptr [0x11fc0b94] */
  EAX = (r32((uint32_t)(0x11fc0b94)));
  /* 11f99d28 push eax */
  push32((uint32_t)(EAX));
  /* 11f99d29 call dword ptr [0x11fc5354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5354))), 0x11f99d2fu);
  /* 11f99d2f mov ecx, dword ptr [0x11fc0b84] */
  ECX = (r32((uint32_t)(0x11fc0b84)));
  /* 11f99d35 push ecx */
  push32((uint32_t)(ECX));
  /* 11f99d36 call dword ptr [0x11fc5354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5354))), 0x11f99d3cu);
  /* 11f99d3c mov edx, dword ptr [0x11fc0b74] */
  EDX = (r32((uint32_t)(0x11fc0b74)));
  /* 11f99d42 push edx */
  push32((uint32_t)(EDX));
  /* 11f99d43 call dword ptr [0x11fc5354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5354))), 0x11f99d49u);
  /* 11f99d49 mov eax, dword ptr [0x11fc0b54] */
  EAX = (r32((uint32_t)(0x11fc0b54)));
  /* 11f99d4e push eax */
  push32((uint32_t)(EAX));
  /* 11f99d4f call dword ptr [0x11fc5354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5354))), 0x11f99d55u);
  /* 11f99d55 pop ebp */
  EBP = (pop32());
  /* 11f99d56 ret  */
  ESPCHK(0x11f99d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d60 @ 0x11f99d60 (159 bytes, 47 insns) */
void f_11f99d60(void) {
  FTRACE(0x11f99d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f99d60 push ebp */
  push32((uint32_t)(EBP));
  /* 11f99d61 mov ebp, esp */
  EBP = (ESP);
  /* 11f99d63 push ecx */
  push32((uint32_t)(ECX));
  /* 11f99d64 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f99d6b jmp 0x11f99d76 */
  goto L_11f99d76;
L_11f99d6d:;
  /* 11f99d6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f99d70 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f99d73 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f99d76:;
  /* 11f99d76 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99d7a jge 0x11f99dc9 */
  if ((C.sf==C.of)) goto L_11f99dc9;
  /* 11f99d7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f99d7f cmp dword ptr [ecx*4 + 0x11fc0b50], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11fc0b50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99d87 je 0x11f99dc7 */
  if (C.zf) goto L_11f99dc7;
  /* 11f99d89 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99d8d je 0x11f99dc7 */
  if (C.zf) goto L_11f99dc7;
  /* 11f99d8f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99d93 je 0x11f99dc7 */
  if (C.zf) goto L_11f99dc7;
  /* 11f99d95 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99d99 je 0x11f99dc7 */
  if (C.zf) goto L_11f99dc7;
  /* 11f99d9b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99d9f je 0x11f99dc7 */
  if (C.zf) goto L_11f99dc7;
  /* 11f99da1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f99da4 mov eax, dword ptr [edx*4 + 0x11fc0b50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11fc0b50)));
  /* 11f99dab push eax */
  push32((uint32_t)(EAX));
  /* 11f99dac call dword ptr [0x11fc53d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc53d8))), 0x11f99db2u);
  /* 11f99db2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f99db4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f99db7 mov edx, dword ptr [ecx*4 + 0x11fc0b50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11fc0b50)));
  /* 11f99dbe push edx */
  push32((uint32_t)(EDX));
  /* 11f99dbf call 0x11f96e90 */
  push32(0x11f99dc4u); f_11f96e90();
  /* 11f99dc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f99dc7:;
  /* 11f99dc7 jmp 0x11f99d6d */
  goto L_11f99d6d;
L_11f99dc9:;
  /* 11f99dc9 mov eax, dword ptr [0x11fc0b74] */
  EAX = (r32((uint32_t)(0x11fc0b74)));
  /* 11f99dce push eax */
  push32((uint32_t)(EAX));
  /* 11f99dcf call dword ptr [0x11fc53d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc53d8))), 0x11f99dd5u);
  /* 11f99dd5 mov ecx, dword ptr [0x11fc0b84] */
  ECX = (r32((uint32_t)(0x11fc0b84)));
  /* 11f99ddb push ecx */
  push32((uint32_t)(ECX));
  /* 11f99ddc call dword ptr [0x11fc53d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc53d8))), 0x11f99de2u);
  /* 11f99de2 mov edx, dword ptr [0x11fc0b94] */
  EDX = (r32((uint32_t)(0x11fc0b94)));
  /* 11f99de8 push edx */
  push32((uint32_t)(EDX));
  /* 11f99de9 call dword ptr [0x11fc53d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc53d8))), 0x11f99defu);
  /* 11f99def mov eax, dword ptr [0x11fc0b54] */
  EAX = (r32((uint32_t)(0x11fc0b54)));
  /* 11f99df4 push eax */
  push32((uint32_t)(EAX));
  /* 11f99df5 call dword ptr [0x11fc53d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc53d8))), 0x11f99dfbu);
  /* 11f99dfb mov esp, ebp */
  ESP = (EBP);
  /* 11f99dfd pop ebp */
  EBP = (pop32());
  /* 11f99dfe ret  */
  ESPCHK(0x11f99d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e00 @ 0x11f99e00 (151 bytes, 46 insns) */
void f_11f99e00(void) {
  FTRACE(0x11f99e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f99e00 push ebp */
  push32((uint32_t)(EBP));
  /* 11f99e01 mov ebp, esp */
  EBP = (ESP);
  /* 11f99e03 push ecx */
  push32((uint32_t)(ECX));
  /* 11f99e04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f99e07 cmp dword ptr [eax*4 + 0x11fc0b50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11fc0b50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99e0f jne 0x11f99e82 */
  if (!C.zf) goto L_11f99e82;
  /* 11f99e11 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 11f99e16 push 0x11fbe08c */
  push32((uint32_t)(0x11fbe08cu));
  /* 11f99e1b push 2 */
  push32((uint32_t)(0x2u));
  /* 11f99e1d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11f99e1f call 0x11f96400 */
  push32(0x11f99e24u); f_11f96400();
  /* 11f99e24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f99e27 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f99e2a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99e2e jne 0x11f99e3a */
  if (!C.zf) goto L_11f99e3a;
  /* 11f99e30 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f99e32 call 0x11f95370 */
  push32(0x11f99e37u); f_11f95370();
  /* 11f99e37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f99e3a:;
  /* 11f99e3a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f99e3c call 0x11f99e00 */
  push32(0x11f99e41u); f_11f99e00();
  /* 11f99e41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f99e44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f99e47 cmp dword ptr [ecx*4 + 0x11fc0b50], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11fc0b50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99e4f jne 0x11f99e6a */
  if (!C.zf) goto L_11f99e6a;
  /* 11f99e51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f99e54 push edx */
  push32((uint32_t)(EDX));
  /* 11f99e55 call dword ptr [0x11fc5354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5354))), 0x11f99e5bu);
  /* 11f99e5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f99e5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f99e61 mov dword ptr [eax*4 + 0x11fc0b50], ecx */
  w32((uint32_t)(EAX*4 + 0x11fc0b50), (ECX));
  /* 11f99e68 jmp 0x11f99e78 */
  goto L_11f99e78;
L_11f99e6a:;
  /* 11f99e6a push 2 */
  push32((uint32_t)(0x2u));
  /* 11f99e6c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f99e6f push edx */
  push32((uint32_t)(EDX));
  /* 11f99e70 call 0x11f96e90 */
  push32(0x11f99e75u); f_11f96e90();
  /* 11f99e75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f99e78:;
  /* 11f99e78 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f99e7a call 0x11f99ea0 */
  push32(0x11f99e7fu); f_11f99ea0();
  /* 11f99e7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f99e82:;
  /* 11f99e82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f99e85 mov ecx, dword ptr [eax*4 + 0x11fc0b50] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11fc0b50)));
  /* 11f99e8c push ecx */
  push32((uint32_t)(ECX));
  /* 11f99e8d call dword ptr [0x11fc5344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5344))), 0x11f99e93u);
  /* 11f99e93 mov esp, ebp */
  ESP = (EBP);
  /* 11f99e95 pop ebp */
  EBP = (pop32());
  /* 11f99e96 ret  */
  ESPCHK(0x11f99e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ea0 @ 0x11f99ea0 (22 bytes, 8 insns) */
void f_11f99ea0(void) {
  FTRACE(0x11f99ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f99ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f99ea1 mov ebp, esp */
  EBP = (ESP);
  /* 11f99ea3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f99ea6 mov ecx, dword ptr [eax*4 + 0x11fc0b50] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11fc0b50)));
  /* 11f99ead push ecx */
  push32((uint32_t)(ECX));
  /* 11f99eae call dword ptr [0x11fc5340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5340))), 0x11f99eb4u);
  /* 11f99eb4 pop ebp */
  EBP = (pop32());
  /* 11f99eb5 ret  */
  ESPCHK(0x11f99ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ec0 @ 0x11f99ec0 (26 bytes, 10 insns) */
void f_11f99ec0(void) {
  FTRACE(0x11f99ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f99ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f99ec1 mov ebp, esp */
  EBP = (ESP);
  /* 11f99ec3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f99ec6 push eax */
  push32((uint32_t)(EAX));
  /* 11f99ec7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f99ec9 call dword ptr [0x11fc5348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5348))), 0x11f99ecfu);
  /* 11f99ecf push 0xff */
  push32((uint32_t)(0xffu));
  /* 11f99ed4 call dword ptr [0x11fc53a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc53a4))), 0x11f99edau);
  /* 11f99eda pop ebp */
  EBP = (pop32());
  /* 11f99edb ret  */
  ESPCHK(0x11f99ec0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x11f99ee0 (446 bytes, 130 insns) */
void f_11f99ee0(void) {
  FTRACE(0x11f99ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f99ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f99ee1 mov ebp, esp */
  EBP = (ESP);
  /* 11f99ee3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f99ee6 call 0x11f95e40 */
  push32(0x11f99eebu); f_11f95e40();
  /* 11f99eeb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f99eee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f99ef1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11f99ef4 push ecx */
  push32((uint32_t)(ECX));
  /* 11f99ef5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f99ef8 push edx */
  push32((uint32_t)(EDX));
  /* 11f99ef9 call 0x11f9a0a0 */
  push32(0x11f99efeu); f_11f9a0a0();
  /* 11f99efe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f99f01 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11f99f04 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99f08 je 0x11f99f13 */
  if (C.zf) goto L_11f99f13;
  /* 11f99f0a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f99f0d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99f11 jne 0x11f99f22 */
  if (!C.zf) goto L_11f99f22;
L_11f99f13:;
  /* 11f99f13 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f99f16 push ecx */
  push32((uint32_t)(ECX));
  /* 11f99f17 call dword ptr [0x11fc5338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5338))), 0x11f99f1du);
  /* 11f99f1d jmp 0x11f9a09a */
  goto L_11f9a09a;
L_11f99f22:;
  /* 11f99f22 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f99f25 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99f29 jne 0x11f99f3f */
  if (!C.zf) goto L_11f99f3f;
  /* 11f99f2b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f99f2e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11f99f35 mov eax, 1 */
  EAX = (0x1u);
  /* 11f99f3a jmp 0x11f9a09a */
  goto L_11f9a09a;
L_11f99f3f:;
  /* 11f99f3f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f99f42 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99f46 jne 0x11f99f50 */
  if (!C.zf) goto L_11f99f50;
  /* 11f99f48 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f99f4b jmp 0x11f9a09a */
  goto L_11f9a09a;
L_11f99f50:;
  /* 11f99f50 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f99f53 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11f99f56 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f99f59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f99f5c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 11f99f5f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11f99f62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f99f65 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f99f68 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 11f99f6b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f99f6e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99f72 jne 0x11f9a077 */
  if (!C.zf) goto L_11f9a077;
  /* 11f99f78 mov eax, dword ptr [0x11fc0c88] */
  EAX = (r32((uint32_t)(0x11fc0c88)));
  /* 11f99f7d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11f99f80 jmp 0x11f99f8b */
  goto L_11f99f8b;
L_11f99f82:;
  /* 11f99f82 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f99f85 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f99f88 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11f99f8b:;
  /* 11f99f8b mov edx, dword ptr [0x11fc0c88] */
  EDX = (r32((uint32_t)(0x11fc0c88)));
  /* 11f99f91 add edx, dword ptr [0x11fc0c8c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11fc0c8c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f99f97 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99f9a jge 0x11f99fb2 */
  if ((C.sf==C.of)) goto L_11f99fb2;
  /* 11f99f9c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f99f9f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f99fa2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f99fa5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11f99fa8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11f99fb0 jmp 0x11f99f82 */
  goto L_11f99f82;
L_11f99fb2:;
  /* 11f99fb2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f99fb5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11f99fb8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f99fbb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f99fbe cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99fc4 jne 0x11f99fd5 */
  if (!C.zf) goto L_11f99fd5;
  /* 11f99fc6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f99fc9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 11f99fd0 jmp 0x11f9a05d */
  goto L_11f9a05d;
L_11f99fd5:;
  /* 11f99fd5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f99fd8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99fde jne 0x11f99fec */
  if (!C.zf) goto L_11f99fec;
  /* 11f99fe0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f99fe3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 11f99fea jmp 0x11f9a05d */
  goto L_11f9a05d;
L_11f99fec:;
  /* 11f99fec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f99fef cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f99ff5 jne 0x11f9a003 */
  if (!C.zf) goto L_11f9a003;
  /* 11f99ff7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f99ffa mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 11f9a001 jmp 0x11f9a05d */
  goto L_11f9a05d;
L_11f9a003:;
  /* 11f9a003 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9a006 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a00c jne 0x11f9a01a */
  if (!C.zf) goto L_11f9a01a;
  /* 11f9a00e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9a011 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 11f9a018 jmp 0x11f9a05d */
  goto L_11f9a05d;
L_11f9a01a:;
  /* 11f9a01a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9a01d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a023 jne 0x11f9a031 */
  if (!C.zf) goto L_11f9a031;
  /* 11f9a025 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9a028 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 11f9a02f jmp 0x11f9a05d */
  goto L_11f9a05d;
L_11f9a031:;
  /* 11f9a031 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9a034 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a03a jne 0x11f9a048 */
  if (!C.zf) goto L_11f9a048;
  /* 11f9a03c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9a03f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 11f9a046 jmp 0x11f9a05d */
  goto L_11f9a05d;
L_11f9a048:;
  /* 11f9a048 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9a04b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a051 jne 0x11f9a05d */
  if (!C.zf) goto L_11f9a05d;
  /* 11f9a053 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9a056 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_11f9a05d:;
  /* 11f9a05d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9a060 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11f9a063 push edx */
  push32((uint32_t)(EDX));
  /* 11f9a064 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f9a066 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11f9a069u);
  /* 11f9a069 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a06c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9a06f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9a072 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 11f9a075 jmp 0x11f9a08e */
  goto L_11f9a08e;
L_11f9a077:;
  /* 11f9a077 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9a07a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11f9a081 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9a084 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f9a087 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9a088 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11f9a08bu);
  /* 11f9a08b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f9a08e:;
  /* 11f9a08e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9a091 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9a094 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 11f9a097 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11f9a09a:;
  /* 11f9a09a mov esp, ebp */
  ESP = (EBP);
  /* 11f9a09c pop ebp */
  EBP = (pop32());
  /* 11f9a09d ret  */
  ESPCHK(0x11f99ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0a0 @ 0x11f9a0a0 (89 bytes, 35 insns) */
void f_11f9a0a0(void) {
  FTRACE(0x11f9a0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9a0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9a0a1 mov ebp, esp */
  EBP = (ESP);
  /* 11f9a0a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9a0a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9a0a7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f9a0aa:;
  /* 11f9a0aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9a0ad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f9a0af cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a0b2 je 0x11f9a0d2 */
  if (C.zf) goto L_11f9a0d2;
  /* 11f9a0b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9a0b7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a0ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f9a0bd mov ecx, dword ptr [0x11fc0c94] */
  ECX = (r32((uint32_t)(0x11fc0c94)));
  /* 11f9a0c3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9a0c6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9a0c9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a0cb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a0ce jae 0x11f9a0d2 */
  if (!C.cf) goto L_11f9a0d2;
  /* 11f9a0d0 jmp 0x11f9a0aa */
  goto L_11f9a0aa;
L_11f9a0d2:;
  /* 11f9a0d2 mov eax, dword ptr [0x11fc0c94] */
  EAX = (r32((uint32_t)(0x11fc0c94)));
  /* 11f9a0d7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9a0da mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9a0dd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a0df cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a0e2 jae 0x11f9a0ee */
  if (!C.cf) goto L_11f9a0ee;
  /* 11f9a0e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9a0e7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f9a0e9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a0ec je 0x11f9a0f2 */
  if (C.zf) goto L_11f9a0f2;
L_11f9a0ee:;
  /* 11f9a0ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9a0f0 jmp 0x11f9a0f5 */
  goto L_11f9a0f5;
L_11f9a0f2:;
  /* 11f9a0f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11f9a0f5:;
  /* 11f9a0f5 mov esp, ebp */
  ESP = (EBP);
  /* 11f9a0f7 pop ebp */
  EBP = (pop32());
  /* 11f9a0f8 ret  */
  ESPCHK(0x11f9a0a0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x11f9a100 (48 bytes, 17 insns) */
void f_11f9a100(void) {
  FTRACE(0x11f9a100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9a100 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9a101 mov ebp, esp */
  EBP = (ESP);
  /* 11f9a103 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9a104 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f9a106 call 0x11f99e00 */
  push32(0x11f9a10bu); f_11f99e00();
  /* 11f9a10b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a10e mov eax, dword ptr [0x11fc28ac] */
  EAX = (r32((uint32_t)(0x11fc28ac)));
  /* 11f9a113 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f9a116 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9a119 mov dword ptr [0x11fc28ac], ecx */
  w32((uint32_t)(0x11fc28ac), (ECX));
  /* 11f9a11f push 9 */
  push32((uint32_t)(0x9u));
  /* 11f9a121 call 0x11f99ea0 */
  push32(0x11f9a126u); f_11f99ea0();
  /* 11f9a126 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a129 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9a12c mov esp, ebp */
  ESP = (EBP);
  /* 11f9a12e pop ebp */
  EBP = (pop32());
  /* 11f9a12f ret  */
  ESPCHK(0x11f9a100u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a130 @ 0x11f9a130 (10 bytes, 5 insns) */
void f_11f9a130(void) {
  FTRACE(0x11f9a130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9a130 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9a131 mov ebp, esp */
  EBP = (ESP);
  /* 11f9a133 mov eax, dword ptr [0x11fc28ac] */
  EAX = (r32((uint32_t)(0x11fc28ac)));
  /* 11f9a138 pop ebp */
  EBP = (pop32());
  /* 11f9a139 ret  */
  ESPCHK(0x11f9a130u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x11f9a140 (45 bytes, 19 insns) */
void f_11f9a140(void) {
  FTRACE(0x11f9a140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9a140 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9a141 mov ebp, esp */
  EBP = (ESP);
  /* 11f9a143 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9a144 mov eax, dword ptr [0x11fc28ac] */
  EAX = (r32((uint32_t)(0x11fc28ac)));
  /* 11f9a149 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f9a14c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a150 je 0x11f9a160 */
  if (C.zf) goto L_11f9a160;
  /* 11f9a152 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9a155 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9a156 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11f9a159u);
  /* 11f9a159 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a15c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9a15e jne 0x11f9a164 */
  if (!C.zf) goto L_11f9a164;
L_11f9a160:;
  /* 11f9a160 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9a162 jmp 0x11f9a169 */
  goto L_11f9a169;
L_11f9a164:;
  /* 11f9a164 mov eax, 1 */
  EAX = (0x1u);
L_11f9a169:;
  /* 11f9a169 mov esp, ebp */
  ESP = (EBP);
  /* 11f9a16b pop ebp */
  EBP = (pop32());
  /* 11f9a16c ret  */
  ESPCHK(0x11f9a140u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11f9a170 (88 bytes, 40 insns) */
void f_11f9a170(void) {
  FTRACE(0x11f9a170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9a170 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11f9a174 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f9a178 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9a17a je 0x11f9a1c3 */
  if (C.zf) goto L_11f9a1c3;
  /* 11f9a17c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9a17e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11f9a182 push edi */
  push32((uint32_t)(EDI));
  /* 11f9a183 mov edi, ecx */
  EDI = (ECX);
  /* 11f9a185 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a188 jb 0x11f9a1b7 */
  if (C.cf) goto L_11f9a1b7;
  /* 11f9a18a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f9a18c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11f9a18f je 0x11f9a199 */
  if (C.zf) goto L_11f9a199;
  /* 11f9a191 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11f9a193:;
  /* 11f9a193 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f9a195 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f9a196 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f9a197 jne 0x11f9a193 */
  if (!C.zf) goto L_11f9a193;
L_11f9a199:;
  /* 11f9a199 mov ecx, eax */
  ECX = (EAX);
  /* 11f9a19b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11f9a19e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a1a0 mov ecx, eax */
  ECX = (EAX);
  /* 11f9a1a2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11f9a1a5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a1a7 mov ecx, edx */
  ECX = (EDX);
  /* 11f9a1a9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9a1ac shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f9a1af je 0x11f9a1b7 */
  if (C.zf) goto L_11f9a1b7;
  /* 11f9a1b1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11f9a1b3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9a1b5 je 0x11f9a1bd */
  if (C.zf) goto L_11f9a1bd;
L_11f9a1b7:;
  /* 11f9a1b7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f9a1b9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f9a1ba dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11f9a1bb jne 0x11f9a1b7 */
  if (!C.zf) goto L_11f9a1b7;
L_11f9a1bd:;
  /* 11f9a1bd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f9a1c1 pop edi */
  EDI = (pop32());
  /* 11f9a1c2 ret  */
  ESPCHK(0x11f9a170u, _esp0);
  ESP += 4; return;
L_11f9a1c3:;
  /* 11f9a1c3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f9a1c7 ret  */
  ESPCHK(0x11f9a170u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1d0 @ 0x11f9a1d0 (23 bytes, 10 insns) */
void f_11f9a1d0(void) {
  FTRACE(0x11f9a1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9a1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9a1d1 mov ebp, esp */
  EBP = (ESP);
  /* 11f9a1d3 mov eax, dword ptr [0x11fc28a8] */
  EAX = (r32((uint32_t)(0x11fc28a8)));
  /* 11f9a1d8 push eax */
  push32((uint32_t)(EAX));
  /* 11f9a1d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9a1dc push ecx */
  push32((uint32_t)(ECX));
  /* 11f9a1dd call 0x11f9a1f0 */
  push32(0x11f9a1e2u); f_11f9a1f0();
  /* 11f9a1e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a1e5 pop ebp */
  EBP = (pop32());
  /* 11f9a1e6 ret  */
  ESPCHK(0x11f9a1d0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x11f9a1f0 (87 bytes, 34 insns) */
void f_11f9a1f0(void) {
  FTRACE(0x11f9a1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9a1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9a1f1 mov ebp, esp */
  EBP = (ESP);
  /* 11f9a1f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9a1f4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a1f8 jbe 0x11f9a1fe */
  if ((C.cf||C.zf)) goto L_11f9a1fe;
  /* 11f9a1fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9a1fc jmp 0x11f9a243 */
  goto L_11f9a243;
L_11f9a1fe:;
  /* 11f9a1fe cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a202 ja 0x11f9a215 */
  if ((!C.cf&&!C.zf)) goto L_11f9a215;
  /* 11f9a204 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9a207 push eax */
  push32((uint32_t)(EAX));
  /* 11f9a208 call 0x11f9a250 */
  push32(0x11f9a20du); f_11f9a250();
  /* 11f9a20d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a210 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f9a213 jmp 0x11f9a21c */
  goto L_11f9a21c;
L_11f9a215:;
  /* 11f9a215 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11f9a21c:;
  /* 11f9a21c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a220 jne 0x11f9a228 */
  if (!C.zf) goto L_11f9a228;
  /* 11f9a222 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a226 jne 0x11f9a22d */
  if (!C.zf) goto L_11f9a22d;
L_11f9a228:;
  /* 11f9a228 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9a22b jmp 0x11f9a243 */
  goto L_11f9a243;
L_11f9a22d:;
  /* 11f9a22d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9a230 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9a231 call 0x11f9a140 */
  push32(0x11f9a236u); f_11f9a140();
  /* 11f9a236 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a239 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9a23b jne 0x11f9a241 */
  if (!C.zf) goto L_11f9a241;
  /* 11f9a23d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9a23f jmp 0x11f9a243 */
  goto L_11f9a243;
L_11f9a241:;
  /* 11f9a241 jmp 0x11f9a1fe */
  goto L_11f9a1fe;
L_11f9a243:;
  /* 11f9a243 mov esp, ebp */
  ESP = (EBP);
  /* 11f9a245 pop ebp */
  EBP = (pop32());
  /* 11f9a246 ret  */
  ESPCHK(0x11f9a1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a250 @ 0x11f9a250 (109 bytes, 37 insns) */
void f_11f9a250(void) {
  FTRACE(0x11f9a250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9a250 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9a251 mov ebp, esp */
  EBP = (ESP);
  /* 11f9a253 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9a254 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9a257 cmp eax, dword ptr [0x11fc0ca4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11fc0ca4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a25d ja 0x11f9a28d */
  if ((!C.cf&&!C.zf)) goto L_11f9a28d;
  /* 11f9a25f push 9 */
  push32((uint32_t)(0x9u));
  /* 11f9a261 call 0x11f99e00 */
  push32(0x11f9a266u); f_11f99e00();
  /* 11f9a266 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a269 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9a26c push ecx */
  push32((uint32_t)(ECX));
  /* 11f9a26d call 0x11f9ad90 */
  push32(0x11f9a272u); f_11f9ad90();
  /* 11f9a272 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a275 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f9a278 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f9a27a call 0x11f99ea0 */
  push32(0x11f9a27fu); f_11f99ea0();
  /* 11f9a27f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a282 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a286 je 0x11f9a28d */
  if (C.zf) goto L_11f9a28d;
  /* 11f9a288 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9a28b jmp 0x11f9a2b9 */
  goto L_11f9a2b9;
L_11f9a28d:;
  /* 11f9a28d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a291 jne 0x11f9a29a */
  if (!C.zf) goto L_11f9a29a;
  /* 11f9a293 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_11f9a29a:;
  /* 11f9a29a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9a29d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a2a0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9a2a3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11f9a2a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9a2a9 push eax */
  push32((uint32_t)(EAX));
  /* 11f9a2aa push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9a2ac mov ecx, dword ptr [0x11fc406c] */
  ECX = (r32((uint32_t)(0x11fc406c)));
  /* 11f9a2b2 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9a2b3 call dword ptr [0x11fc5334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5334))), 0x11f9a2b9u);
L_11f9a2b9:;
  /* 11f9a2b9 mov esp, ebp */
  ESP = (EBP);
  /* 11f9a2bb pop ebp */
  EBP = (pop32());
  /* 11f9a2bc ret  */
  ESPCHK(0x11f9a250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2c0 @ 0x11f9a2c0 (10 bytes, 5 insns) */
void f_11f9a2c0(void) {
  FTRACE(0x11f9a2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9a2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9a2c1 mov ebp, esp */
  EBP = (ESP);
  /* 11f9a2c3 mov eax, 1 */
  EAX = (0x1u);
  /* 11f9a2c8 pop ebp */
  EBP = (pop32());
  /* 11f9a2c9 ret  */
  ESPCHK(0x11f9a2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2d0 @ 0x11f9a2d0 (173 bytes, 59 insns) */
void f_11f9a2d0(void) {
  FTRACE(0x11f9a2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9a2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9a2d1 mov ebp, esp */
  EBP = (ESP);
  /* 11f9a2d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9a2d6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a2da jbe 0x11f9a2e3 */
  if ((C.cf||C.zf)) goto L_11f9a2e3;
  /* 11f9a2dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9a2de jmp 0x11f9a379 */
  goto L_11f9a379;
L_11f9a2e3:;
  /* 11f9a2e3 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f9a2e5 call 0x11f99e00 */
  push32(0x11f9a2eau); f_11f99e00();
  /* 11f9a2ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a2ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9a2f0 push eax */
  push32((uint32_t)(EAX));
  /* 11f9a2f1 call 0x11f9a700 */
  push32(0x11f9a2f6u); f_11f9a700();
  /* 11f9a2f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a2f9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f9a2fc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a300 je 0x11f9a341 */
  if (C.zf) goto L_11f9a341;
  /* 11f9a302 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f9a309 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9a30c cmp ecx, dword ptr [0x11fc0ca4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11fc0ca4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a312 ja 0x11f9a332 */
  if ((!C.cf&&!C.zf)) goto L_11f9a332;
  /* 11f9a314 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9a317 push edx */
  push32((uint32_t)(EDX));
  /* 11f9a318 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9a31b push eax */
  push32((uint32_t)(EAX));
  /* 11f9a31c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9a31f push ecx */
  push32((uint32_t)(ECX));
  /* 11f9a320 call 0x11f9b5d0 */
  push32(0x11f9a325u); f_11f9b5d0();
  /* 11f9a325 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a328 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9a32a je 0x11f9a332 */
  if (C.zf) goto L_11f9a332;
  /* 11f9a32c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9a32f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f9a332:;
  /* 11f9a332 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f9a334 call 0x11f99ea0 */
  push32(0x11f9a339u); f_11f99ea0();
  /* 11f9a339 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a33c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9a33f jmp 0x11f9a379 */
  goto L_11f9a379;
L_11f9a341:;
  /* 11f9a341 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f9a343 call 0x11f99ea0 */
  push32(0x11f9a348u); f_11f99ea0();
  /* 11f9a348 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a34b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a34f jne 0x11f9a358 */
  if (!C.zf) goto L_11f9a358;
  /* 11f9a351 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11f9a358:;
  /* 11f9a358 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9a35b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a35e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11f9a360 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11f9a363 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9a366 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9a367 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9a36a push edx */
  push32((uint32_t)(EDX));
  /* 11f9a36b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11f9a36d mov eax, dword ptr [0x11fc406c] */
  EAX = (r32((uint32_t)(0x11fc406c)));
  /* 11f9a372 push eax */
  push32((uint32_t)(EAX));
  /* 11f9a373 call dword ptr [0x11fc533c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc533c))), 0x11f9a379u);
L_11f9a379:;
  /* 11f9a379 mov esp, ebp */
  ESP = (EBP);
  /* 11f9a37b pop ebp */
  EBP = (pop32());
  /* 11f9a37c ret  */
  ESPCHK(0x11f9a2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a380 @ 0x11f9a380 (490 bytes, 165 insns) */
void f_11f9a380(void) {
  FTRACE(0x11f9a380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9a380 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9a381 mov ebp, esp */
  EBP = (ESP);
  /* 11f9a383 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9a386 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a38a jne 0x11f9a39d */
  if (!C.zf) goto L_11f9a39d;
  /* 11f9a38c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9a38f push eax */
  push32((uint32_t)(EAX));
  /* 11f9a390 call 0x11f9a1d0 */
  push32(0x11f9a395u); f_11f9a1d0();
  /* 11f9a395 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a398 jmp 0x11f9a566 */
  goto L_11f9a566;
L_11f9a39d:;
  /* 11f9a39d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a3a1 jne 0x11f9a3b6 */
  if (!C.zf) goto L_11f9a3b6;
  /* 11f9a3a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9a3a6 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9a3a7 call 0x11f9a570 */
  push32(0x11f9a3acu); f_11f9a570();
  /* 11f9a3ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a3af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9a3b1 jmp 0x11f9a566 */
  goto L_11f9a566;
L_11f9a3b6:;
  /* 11f9a3b6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11f9a3bd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a3c1 ja 0x11f9a539 */
  if ((!C.cf&&!C.zf)) goto L_11f9a539;
  /* 11f9a3c7 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f9a3c9 call 0x11f99e00 */
  push32(0x11f9a3ceu); f_11f99e00();
  /* 11f9a3ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a3d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9a3d4 push edx */
  push32((uint32_t)(EDX));
  /* 11f9a3d5 call 0x11f9a700 */
  push32(0x11f9a3dau); f_11f9a700();
  /* 11f9a3da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a3dd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f9a3e0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a3e4 je 0x11f9a4fc */
  if (C.zf) goto L_11f9a4fc;
  /* 11f9a3ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9a3ed cmp eax, dword ptr [0x11fc0ca4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11fc0ca4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a3f3 ja 0x11f9a470 */
  if ((!C.cf&&!C.zf)) goto L_11f9a470;
  /* 11f9a3f5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9a3f8 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9a3f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9a3fc push edx */
  push32((uint32_t)(EDX));
  /* 11f9a3fd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9a400 push eax */
  push32((uint32_t)(EAX));
  /* 11f9a401 call 0x11f9b5d0 */
  push32(0x11f9a406u); f_11f9b5d0();
  /* 11f9a406 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a409 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9a40b je 0x11f9a415 */
  if (C.zf) goto L_11f9a415;
  /* 11f9a40d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9a410 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f9a413 jmp 0x11f9a470 */
  goto L_11f9a470;
L_11f9a415:;
  /* 11f9a415 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9a418 push edx */
  push32((uint32_t)(EDX));
  /* 11f9a419 call 0x11f9ad90 */
  push32(0x11f9a41eu); f_11f9ad90();
  /* 11f9a41e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a421 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f9a424 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a428 je 0x11f9a470 */
  if (C.zf) goto L_11f9a470;
  /* 11f9a42a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9a42d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 11f9a430 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9a433 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f9a436 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9a439 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a43c jae 0x11f9a446 */
  if (!C.cf) goto L_11f9a446;
  /* 11f9a43e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9a441 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11f9a444 jmp 0x11f9a44c */
  goto L_11f9a44c;
L_11f9a446:;
  /* 11f9a446 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9a449 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11f9a44c:;
  /* 11f9a44c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9a44f push edx */
  push32((uint32_t)(EDX));
  /* 11f9a450 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9a453 push eax */
  push32((uint32_t)(EAX));
  /* 11f9a454 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9a457 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9a458 call 0x11f9cce0 */
  push32(0x11f9a45du); f_11f9cce0();
  /* 11f9a45d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a460 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9a463 push edx */
  push32((uint32_t)(EDX));
  /* 11f9a464 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9a467 push eax */
  push32((uint32_t)(EAX));
  /* 11f9a468 call 0x11f9a7c0 */
  push32(0x11f9a46du); f_11f9a7c0();
  /* 11f9a46d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f9a470:;
  /* 11f9a470 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a474 jne 0x11f9a4f0 */
  if (!C.zf) goto L_11f9a4f0;
  /* 11f9a476 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a47a jne 0x11f9a483 */
  if (!C.zf) goto L_11f9a483;
  /* 11f9a47c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11f9a483:;
  /* 11f9a483 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9a486 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a489 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11f9a48c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11f9a48f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9a492 push edx */
  push32((uint32_t)(EDX));
  /* 11f9a493 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9a495 mov eax, dword ptr [0x11fc406c] */
  EAX = (r32((uint32_t)(0x11fc406c)));
  /* 11f9a49a push eax */
  push32((uint32_t)(EAX));
  /* 11f9a49b call dword ptr [0x11fc5334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5334))), 0x11f9a4a1u);
  /* 11f9a4a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f9a4a4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a4a8 je 0x11f9a4f0 */
  if (C.zf) goto L_11f9a4f0;
  /* 11f9a4aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9a4ad mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11f9a4b0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9a4b3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f9a4b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9a4b9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a4bc jae 0x11f9a4c6 */
  if (!C.cf) goto L_11f9a4c6;
  /* 11f9a4be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9a4c1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11f9a4c4 jmp 0x11f9a4cc */
  goto L_11f9a4cc;
L_11f9a4c6:;
  /* 11f9a4c6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9a4c9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11f9a4cc:;
  /* 11f9a4cc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9a4cf push eax */
  push32((uint32_t)(EAX));
  /* 11f9a4d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9a4d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9a4d4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9a4d7 push edx */
  push32((uint32_t)(EDX));
  /* 11f9a4d8 call 0x11f9cce0 */
  push32(0x11f9a4ddu); f_11f9cce0();
  /* 11f9a4dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a4e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9a4e3 push eax */
  push32((uint32_t)(EAX));
  /* 11f9a4e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9a4e7 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9a4e8 call 0x11f9a7c0 */
  push32(0x11f9a4edu); f_11f9a7c0();
  /* 11f9a4ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f9a4f0:;
  /* 11f9a4f0 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f9a4f2 call 0x11f99ea0 */
  push32(0x11f9a4f7u); f_11f99ea0();
  /* 11f9a4f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a4fa jmp 0x11f9a539 */
  goto L_11f9a539;
L_11f9a4fc:;
  /* 11f9a4fc push 9 */
  push32((uint32_t)(0x9u));
  /* 11f9a4fe call 0x11f99ea0 */
  push32(0x11f9a503u); f_11f99ea0();
  /* 11f9a503 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a506 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a50a jne 0x11f9a513 */
  if (!C.zf) goto L_11f9a513;
  /* 11f9a50c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11f9a513:;
  /* 11f9a513 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9a516 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a519 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9a51c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11f9a51f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9a522 push eax */
  push32((uint32_t)(EAX));
  /* 11f9a523 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9a526 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9a527 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9a529 mov edx, dword ptr [0x11fc406c] */
  EDX = (r32((uint32_t)(0x11fc406c)));
  /* 11f9a52f push edx */
  push32((uint32_t)(EDX));
  /* 11f9a530 call dword ptr [0x11fc533c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc533c))), 0x11f9a536u);
  /* 11f9a536 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11f9a539:;
  /* 11f9a539 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a53d jne 0x11f9a548 */
  if (!C.zf) goto L_11f9a548;
  /* 11f9a53f cmp dword ptr [0x11fc28a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc28a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a546 jne 0x11f9a54d */
  if (!C.zf) goto L_11f9a54d;
L_11f9a548:;
  /* 11f9a548 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9a54b jmp 0x11f9a566 */
  goto L_11f9a566;
L_11f9a54d:;
  /* 11f9a54d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9a550 push eax */
  push32((uint32_t)(EAX));
  /* 11f9a551 call 0x11f9a140 */
  push32(0x11f9a556u); f_11f9a140();
  /* 11f9a556 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a559 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9a55b jne 0x11f9a561 */
  if (!C.zf) goto L_11f9a561;
  /* 11f9a55d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9a55f jmp 0x11f9a566 */
  goto L_11f9a566;
L_11f9a561:;
  /* 11f9a561 jmp 0x11f9a3b6 */
  goto L_11f9a3b6;
L_11f9a566:;
  /* 11f9a566 mov esp, ebp */
  ESP = (EBP);
  /* 11f9a568 pop ebp */
  EBP = (pop32());
  /* 11f9a569 ret  */
  ESPCHK(0x11f9a380u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a570 @ 0x11f9a570 (104 bytes, 38 insns) */
void f_11f9a570(void) {
  FTRACE(0x11f9a570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9a570 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9a571 mov ebp, esp */
  EBP = (ESP);
  /* 11f9a573 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9a574 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a578 jne 0x11f9a57c */
  if (!C.zf) goto L_11f9a57c;
  /* 11f9a57a jmp 0x11f9a5d4 */
  goto L_11f9a5d4;
L_11f9a57c:;
  /* 11f9a57c push 9 */
  push32((uint32_t)(0x9u));
  /* 11f9a57e call 0x11f99e00 */
  push32(0x11f9a583u); f_11f99e00();
  /* 11f9a583 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a586 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9a589 push eax */
  push32((uint32_t)(EAX));
  /* 11f9a58a call 0x11f9a700 */
  push32(0x11f9a58fu); f_11f9a700();
  /* 11f9a58f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a592 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f9a595 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a599 je 0x11f9a5b7 */
  if (C.zf) goto L_11f9a5b7;
  /* 11f9a59b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9a59e push ecx */
  push32((uint32_t)(ECX));
  /* 11f9a59f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9a5a2 push edx */
  push32((uint32_t)(EDX));
  /* 11f9a5a3 call 0x11f9a7c0 */
  push32(0x11f9a5a8u); f_11f9a7c0();
  /* 11f9a5a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a5ab push 9 */
  push32((uint32_t)(0x9u));
  /* 11f9a5ad call 0x11f99ea0 */
  push32(0x11f9a5b2u); f_11f99ea0();
  /* 11f9a5b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a5b5 jmp 0x11f9a5d4 */
  goto L_11f9a5d4;
L_11f9a5b7:;
  /* 11f9a5b7 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f9a5b9 call 0x11f99ea0 */
  push32(0x11f9a5beu); f_11f99ea0();
  /* 11f9a5be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a5c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9a5c4 push eax */
  push32((uint32_t)(EAX));
  /* 11f9a5c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9a5c7 mov ecx, dword ptr [0x11fc406c] */
  ECX = (r32((uint32_t)(0x11fc406c)));
  /* 11f9a5cd push ecx */
  push32((uint32_t)(ECX));
  /* 11f9a5ce call dword ptr [0x11fc5360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5360))), 0x11f9a5d4u);
L_11f9a5d4:;
  /* 11f9a5d4 mov esp, ebp */
  ESP = (EBP);
  /* 11f9a5d6 pop ebp */
  EBP = (pop32());
  /* 11f9a5d7 ret  */
  ESPCHK(0x11f9a570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5e0 @ 0x11f9a5e0 (116 bytes, 34 insns) */
void f_11f9a5e0(void) {
  FTRACE(0x11f9a5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9a5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9a5e1 mov ebp, esp */
  EBP = (ESP);
  /* 11f9a5e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9a5e4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 11f9a5eb push 9 */
  push32((uint32_t)(0x9u));
  /* 11f9a5ed call 0x11f99e00 */
  push32(0x11f9a5f2u); f_11f99e00();
  /* 11f9a5f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a5f5 call 0x11f9bcf0 */
  push32(0x11f9a5fau); f_11f9bcf0();
  /* 11f9a5fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9a5fc jge 0x11f9a605 */
  if ((C.sf==C.of)) goto L_11f9a605;
  /* 11f9a5fe mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_11f9a605:;
  /* 11f9a605 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f9a607 call 0x11f99ea0 */
  push32(0x11f9a60cu); f_11f99ea0();
  /* 11f9a60c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a60f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9a611 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9a613 mov eax, dword ptr [0x11fc406c] */
  EAX = (r32((uint32_t)(0x11fc406c)));
  /* 11f9a618 push eax */
  push32((uint32_t)(EAX));
  /* 11f9a619 call dword ptr [0x11fc5374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5374))), 0x11f9a61fu);
  /* 11f9a61f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9a621 jne 0x11f9a64d */
  if (!C.zf) goto L_11f9a64d;
  /* 11f9a623 call dword ptr [0x11fc53ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc53ac))), 0x11f9a629u);
  /* 11f9a629 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a62c jne 0x11f9a646 */
  if (!C.zf) goto L_11f9a646;
  /* 11f9a62e call 0x11f9e2e0 */
  push32(0x11f9a633u); f_11f9e2e0();
  /* 11f9a633 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 11f9a639 call 0x11f9e2d0 */
  push32(0x11f9a63eu); f_11f9e2d0();
  /* 11f9a63e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 11f9a644 jmp 0x11f9a64d */
  goto L_11f9a64d;
L_11f9a646:;
  /* 11f9a646 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_11f9a64d:;
  /* 11f9a64d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9a650 mov esp, ebp */
  ESP = (EBP);
  /* 11f9a652 pop ebp */
  EBP = (pop32());
  /* 11f9a653 ret  */
  ESPCHK(0x11f9a5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a660 @ 0x11f9a660 (10 bytes, 5 insns) */
void f_11f9a660(void) {
  FTRACE(0x11f9a660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9a660 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9a661 mov ebp, esp */
  EBP = (ESP);
  /* 11f9a663 call 0x11f9a5e0 */
  push32(0x11f9a668u); f_11f9a5e0();
  /* 11f9a668 pop ebp */
  EBP = (pop32());
  /* 11f9a669 ret  */
  ESPCHK(0x11f9a660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a670 @ 0x11f9a670 (10 bytes, 5 insns) */
void f_11f9a670(void) {
  FTRACE(0x11f9a670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9a670 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9a671 mov ebp, esp */
  EBP = (ESP);
  /* 11f9a673 mov eax, dword ptr [0x11fc0ca4] */
  EAX = (r32((uint32_t)(0x11fc0ca4)));
  /* 11f9a678 pop ebp */
  EBP = (pop32());
  /* 11f9a679 ret  */
  ESPCHK(0x11f9a670u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a680 @ 0x11f9a680 (31 bytes, 11 insns) */
void f_11f9a680(void) {
  FTRACE(0x11f9a680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9a680 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9a681 mov ebp, esp */
  EBP = (ESP);
  /* 11f9a683 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a68a jbe 0x11f9a690 */
  if ((C.cf||C.zf)) goto L_11f9a690;
  /* 11f9a68c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9a68e jmp 0x11f9a69d */
  goto L_11f9a69d;
L_11f9a690:;
  /* 11f9a690 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9a693 mov dword ptr [0x11fc0ca4], eax */
  w32((uint32_t)(0x11fc0ca4), (EAX));
  /* 11f9a698 mov eax, 1 */
  EAX = (0x1u);
L_11f9a69d:;
  /* 11f9a69d pop ebp */
  EBP = (pop32());
  /* 11f9a69e ret  */
  ESPCHK(0x11f9a680u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6a0 @ 0x11f9a6a0 (89 bytes, 20 insns) */
void f_11f9a6a0(void) {
  FTRACE(0x11f9a6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9a6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9a6a1 mov ebp, esp */
  EBP = (ESP);
  /* 11f9a6a3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11f9a6a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9a6aa mov eax, dword ptr [0x11fc406c] */
  EAX = (r32((uint32_t)(0x11fc406c)));
  /* 11f9a6af push eax */
  push32((uint32_t)(EAX));
  /* 11f9a6b0 call dword ptr [0x11fc5334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5334))), 0x11f9a6b6u);
  /* 11f9a6b6 mov dword ptr [0x11fc4068], eax */
  w32((uint32_t)(0x11fc4068), (EAX));
  /* 11f9a6bb cmp dword ptr [0x11fc4068], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc4068))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a6c2 jne 0x11f9a6c8 */
  if (!C.zf) goto L_11f9a6c8;
  /* 11f9a6c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9a6c6 jmp 0x11f9a6f7 */
  goto L_11f9a6f7;
L_11f9a6c8:;
  /* 11f9a6c8 mov ecx, dword ptr [0x11fc4068] */
  ECX = (r32((uint32_t)(0x11fc4068)));
  /* 11f9a6ce mov dword ptr [0x11fc405c], ecx */
  w32((uint32_t)(0x11fc405c), (ECX));
  /* 11f9a6d4 mov dword ptr [0x11fc4060], 0 */
  w32((uint32_t)(0x11fc4060), (0x0u));
  /* 11f9a6de mov dword ptr [0x11fc4064], 0 */
  w32((uint32_t)(0x11fc4064), (0x0u));
  /* 11f9a6e8 mov dword ptr [0x11fc4048], 0x10 */
  w32((uint32_t)(0x11fc4048), (0x10u));
  /* 11f9a6f2 mov eax, 1 */
  EAX = (0x1u);
L_11f9a6f7:;
  /* 11f9a6f7 pop ebp */
  EBP = (pop32());
  /* 11f9a6f8 ret  */
  ESPCHK(0x11f9a6a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a700 @ 0x11f9a700 (85 bytes, 29 insns) */
void f_11f9a700(void) {
  FTRACE(0x11f9a700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9a700 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9a701 mov ebp, esp */
  EBP = (ESP);
  /* 11f9a703 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9a706 mov eax, dword ptr [0x11fc4064] */
  EAX = (r32((uint32_t)(0x11fc4064)));
  /* 11f9a70b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9a70e mov ecx, dword ptr [0x11fc4068] */
  ECX = (r32((uint32_t)(0x11fc4068)));
  /* 11f9a714 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a716 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f9a719 mov edx, dword ptr [0x11fc4068] */
  EDX = (r32((uint32_t)(0x11fc4068)));
  /* 11f9a71f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11f9a722:;
  /* 11f9a722 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9a725 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a728 jae 0x11f9a74f */
  if (!C.cf) goto L_11f9a74f;
  /* 11f9a72a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9a72d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9a730 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9a733 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f9a736 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a73d jae 0x11f9a744 */
  if (!C.cf) goto L_11f9a744;
  /* 11f9a73f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9a742 jmp 0x11f9a751 */
  goto L_11f9a751;
L_11f9a744:;
  /* 11f9a744 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9a747 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a74a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f9a74d jmp 0x11f9a722 */
  goto L_11f9a722;
L_11f9a74f:;
  /* 11f9a74f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f9a751:;
  /* 11f9a751 mov esp, ebp */
  ESP = (EBP);
  /* 11f9a753 pop ebp */
  EBP = (pop32());
  /* 11f9a754 ret  */
  ESPCHK(0x11f9a700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a760 @ 0x11f9a760 (95 bytes, 33 insns) */
void f_11f9a760(void) {
  FTRACE(0x11f9a760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9a760 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9a761 mov ebp, esp */
  EBP = (ESP);
  /* 11f9a763 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9a766 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9a769 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9a76c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9a76f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f9a772 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9a775 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11f9a778 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f9a77b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f9a780 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9a783 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f9a785 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9a788 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f9a78b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11f9a78d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9a78f jne 0x11f9a7b1 */
  if (!C.zf) goto L_11f9a7b1;
  /* 11f9a791 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9a794 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 11f9a797 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9a799 jne 0x11f9a7b1 */
  if (!C.zf) goto L_11f9a7b1;
  /* 11f9a79b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9a79e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f9a7a4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9a7a6 je 0x11f9a7b1 */
  if (C.zf) goto L_11f9a7b1;
  /* 11f9a7a8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 11f9a7af jmp 0x11f9a7b8 */
  goto L_11f9a7b8;
L_11f9a7b1:;
  /* 11f9a7b1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11f9a7b8:;
  /* 11f9a7b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9a7bb mov esp, ebp */
  ESP = (EBP);
  /* 11f9a7bd pop ebp */
  EBP = (pop32());
  /* 11f9a7be ret  */
  ESPCHK(0x11f9a760u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7c0 @ 0x11f9a7c0 (1485 bytes, 453 insns) */
void f_11f9a7c0(void) {
  FTRACE(0x11f9a7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9a7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9a7c1 mov ebp, esp */
  EBP = (ESP);
  /* 11f9a7c3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9a7c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9a7c9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f9a7cc mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 11f9a7cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9a7d2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9a7d5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9a7d8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11f9a7db mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9a7de shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11f9a7e1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f9a7e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9a7e7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9a7ed mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f9a7f0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 11f9a7f7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f9a7fa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9a7fd sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9a800 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11f9a803 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f9a806 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f9a808 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9a80b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11f9a80e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f9a811 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a814 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11f9a817 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f9a81a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f9a81c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11f9a81f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f9a822 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11f9a825 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f9a828 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9a82b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11f9a82e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9a830 jne 0x11f9a958 */
  if (!C.zf) goto L_11f9a958;
  /* 11f9a836 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9a839 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11f9a83c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9a83f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11f9a842 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a846 jbe 0x11f9a84f */
  if ((C.cf||C.zf)) goto L_11f9a84f;
  /* 11f9a848 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11f9a84f:;
  /* 11f9a84f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f9a852 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f9a855 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f9a858 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a85b jne 0x11f9a931 */
  if (!C.zf) goto L_11f9a931;
  /* 11f9a861 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a865 jae 0x11f9a8c6 */
  if (!C.cf) goto L_11f9a8c6;
  /* 11f9a867 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f9a86c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9a86f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f9a871 not eax */
  EAX = (~(EAX));
  /* 11f9a873 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9a876 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f9a879 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11f9a87d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f9a87f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9a882 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f9a885 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11f9a889 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f9a88c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a88f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11f9a892 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f9a895 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f9a898 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a89b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11f9a89e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f9a8a1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a8a4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11f9a8a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9a8aa jne 0x11f9a8c4 */
  if (!C.zf) goto L_11f9a8c4;
  /* 11f9a8ac mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f9a8b1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9a8b4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f9a8b6 not eax */
  EAX = (~(EAX));
  /* 11f9a8b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9a8bb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f9a8bd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11f9a8bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9a8c2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11f9a8c4:;
  /* 11f9a8c4 jmp 0x11f9a931 */
  goto L_11f9a931;
L_11f9a8c6:;
  /* 11f9a8c6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9a8c9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9a8cc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f9a8d1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f9a8d3 not edx */
  EDX = (~(EDX));
  /* 11f9a8d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9a8d8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f9a8db mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11f9a8e2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9a8e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9a8e7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f9a8ea mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 11f9a8f1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f9a8f4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a8f7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11f9a8fa sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f9a8fd mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f9a900 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a903 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11f9a906 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f9a909 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a90c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11f9a910 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9a912 jne 0x11f9a931 */
  if (!C.zf) goto L_11f9a931;
  /* 11f9a914 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9a917 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9a91a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f9a91f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f9a921 not edx */
  EDX = (~(EDX));
  /* 11f9a923 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9a926 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f9a929 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11f9a92b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9a92e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11f9a931:;
  /* 11f9a931 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f9a934 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f9a937 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f9a93a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f9a93d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11f9a940 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f9a943 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f9a946 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f9a949 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f9a94c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11f9a94f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9a952 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a955 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_11f9a958:;
  /* 11f9a958 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9a95b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11f9a95e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9a961 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11f9a964 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a968 jbe 0x11f9a971 */
  if ((C.cf||C.zf)) goto L_11f9a971;
  /* 11f9a96a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11f9a971:;
  /* 11f9a971 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9a974 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11f9a977 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9a979 jne 0x11f9aad5 */
  if (!C.zf) goto L_11f9aad5;
  /* 11f9a97f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f9a982 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9a985 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11f9a988 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9a98b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11f9a98e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9a991 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11f9a994 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a998 jbe 0x11f9a9a1 */
  if ((C.cf||C.zf)) goto L_11f9a9a1;
  /* 11f9a99a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_11f9a9a1:;
  /* 11f9a9a1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9a9a4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9a9a7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11f9a9aa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9a9ad sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11f9a9b0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9a9b3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11f9a9b6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a9ba jbe 0x11f9a9c3 */
  if ((C.cf||C.zf)) goto L_11f9a9c3;
  /* 11f9a9bc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11f9a9c3:;
  /* 11f9a9c3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9a9c6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a9c9 je 0x11f9aacf */
  if (C.zf) goto L_11f9aacf;
  /* 11f9a9cf mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11f9a9d2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11f9a9d5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f9a9d8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a9db jne 0x11f9aab1 */
  if (!C.zf) goto L_11f9aab1;
  /* 11f9a9e1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9a9e5 jae 0x11f9aa46 */
  if (!C.cf) goto L_11f9aa46;
  /* 11f9a9e7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f9a9ec mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9a9ef shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f9a9f1 not edx */
  EDX = (~(EDX));
  /* 11f9a9f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9a9f6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f9a9f9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11f9a9fd and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9a9ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9aa02 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f9aa05 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11f9aa09 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f9aa0c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9aa0f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11f9aa12 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f9aa15 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f9aa18 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9aa1b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11f9aa1e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f9aa21 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9aa24 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11f9aa28 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9aa2a jne 0x11f9aa44 */
  if (!C.zf) goto L_11f9aa44;
  /* 11f9aa2c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f9aa31 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9aa34 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f9aa36 not edx */
  EDX = (~(EDX));
  /* 11f9aa38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9aa3b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f9aa3d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11f9aa3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9aa42 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11f9aa44:;
  /* 11f9aa44 jmp 0x11f9aab1 */
  goto L_11f9aab1;
L_11f9aa46:;
  /* 11f9aa46 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9aa49 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9aa4c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f9aa51 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f9aa53 not eax */
  EAX = (~(EAX));
  /* 11f9aa55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9aa58 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f9aa5b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11f9aa62 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f9aa64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9aa67 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f9aa6a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11f9aa71 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f9aa74 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9aa77 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11f9aa7a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f9aa7d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f9aa80 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9aa83 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11f9aa86 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f9aa89 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9aa8c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11f9aa90 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9aa92 jne 0x11f9aab1 */
  if (!C.zf) goto L_11f9aab1;
  /* 11f9aa94 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9aa97 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9aa9a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f9aa9f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f9aaa1 not eax */
  EAX = (~(EAX));
  /* 11f9aaa3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9aaa6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f9aaa9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11f9aaab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9aaae mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11f9aab1:;
  /* 11f9aab1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11f9aab4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f9aab7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11f9aaba mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f9aabd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11f9aac0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11f9aac3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f9aac6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11f9aac9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f9aacc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_11f9aacf:;
  /* 11f9aacf mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11f9aad2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_11f9aad5:;
  /* 11f9aad5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9aad8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11f9aadb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9aadd jne 0x11f9aaeb */
  if (!C.zf) goto L_11f9aaeb;
  /* 11f9aadf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9aae2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9aae5 je 0x11f9abfb */
  if (C.zf) goto L_11f9abfb;
L_11f9aaeb:;
  /* 11f9aaeb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f9aaee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9aaf1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 11f9aaf4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11f9aaf7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f9aafa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9aafd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f9ab00 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11f9ab03 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f9ab06 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9ab09 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11f9ab0c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9ab0f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f9ab12 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11f9ab15 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f9ab18 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f9ab1b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f9ab1e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11f9ab21 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f9ab24 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f9ab27 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f9ab2a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ab2d jne 0x11f9abfb */
  if (!C.zf) goto L_11f9abfb;
  /* 11f9ab33 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ab37 jae 0x11f9ab94 */
  if (!C.cf) goto L_11f9ab94;
  /* 11f9ab39 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f9ab3c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ab3f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11f9ab43 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f9ab46 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ab49 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11f9ab4c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11f9ab4f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f9ab52 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ab55 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11f9ab58 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9ab5a jne 0x11f9ab72 */
  if (!C.zf) goto L_11f9ab72;
  /* 11f9ab5c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f9ab61 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f9ab64 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f9ab66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9ab69 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f9ab6b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11f9ab6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9ab70 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11f9ab72:;
  /* 11f9ab72 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f9ab77 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f9ab7a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f9ab7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9ab7f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f9ab82 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11f9ab86 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f9ab88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9ab8b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f9ab8e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11f9ab92 jmp 0x11f9abfb */
  goto L_11f9abfb;
L_11f9ab94:;
  /* 11f9ab94 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f9ab97 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ab9a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11f9ab9e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f9aba1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9aba4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11f9aba7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11f9abaa mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f9abad add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9abb0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11f9abb3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9abb5 jne 0x11f9abd2 */
  if (!C.zf) goto L_11f9abd2;
  /* 11f9abb7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f9abba sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9abbd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f9abc2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f9abc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9abc7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f9abca or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11f9abcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9abcf mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11f9abd2:;
  /* 11f9abd2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f9abd5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9abd8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f9abdd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f9abdf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9abe2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f9abe5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11f9abec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f9abee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9abf1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f9abf4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11f9abfb:;
  /* 11f9abfb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f9abfe mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9ac01 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11f9ac03 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f9ac06 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ac09 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9ac0c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 11f9ac0f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9ac12 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f9ac14 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9ac17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9ac1a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11f9ac1c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9ac1f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ac22 jne 0x11f9ad89 */
  if (!C.zf) goto L_11f9ad89;
  /* 11f9ac28 cmp dword ptr [0x11fc4060], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc4060))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ac2f je 0x11f9ad78 */
  if (C.zf) goto L_11f9ad78;
  /* 11f9ac35 mov eax, dword ptr [0x11fc4058] */
  EAX = (r32((uint32_t)(0x11fc4058)));
  /* 11f9ac3a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11f9ac3d mov ecx, dword ptr [0x11fc4060] */
  ECX = (r32((uint32_t)(0x11fc4060)));
  /* 11f9ac43 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f9ac46 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ac48 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11f9ac4b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11f9ac50 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11f9ac55 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9ac58 push eax */
  push32((uint32_t)(EAX));
  /* 11f9ac59 call dword ptr [0x11fc5350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5350))), 0x11f9ac5fu);
  /* 11f9ac5f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f9ac64 mov ecx, dword ptr [0x11fc4058] */
  ECX = (r32((uint32_t)(0x11fc4058)));
  /* 11f9ac6a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f9ac6c mov eax, dword ptr [0x11fc4060] */
  EAX = (r32((uint32_t)(0x11fc4060)));
  /* 11f9ac71 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f9ac74 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11f9ac76 mov edx, dword ptr [0x11fc4060] */
  EDX = (r32((uint32_t)(0x11fc4060)));
  /* 11f9ac7c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11f9ac7f mov eax, dword ptr [0x11fc4060] */
  EAX = (r32((uint32_t)(0x11fc4060)));
  /* 11f9ac84 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f9ac87 mov edx, dword ptr [0x11fc4058] */
  EDX = (r32((uint32_t)(0x11fc4058)));
  /* 11f9ac8d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11f9ac98 mov eax, dword ptr [0x11fc4060] */
  EAX = (r32((uint32_t)(0x11fc4060)));
  /* 11f9ac9d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f9aca0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11f9aca3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f9aca6 mov eax, dword ptr [0x11fc4060] */
  EAX = (r32((uint32_t)(0x11fc4060)));
  /* 11f9acab mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f9acae mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11f9acb1 mov edx, dword ptr [0x11fc4060] */
  EDX = (r32((uint32_t)(0x11fc4060)));
  /* 11f9acb7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11f9acba movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11f9acbe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9acc0 jne 0x11f9acd6 */
  if (!C.zf) goto L_11f9acd6;
  /* 11f9acc2 mov edx, dword ptr [0x11fc4060] */
  EDX = (r32((uint32_t)(0x11fc4060)));
  /* 11f9acc8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f9accb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11f9accd mov ecx, dword ptr [0x11fc4060] */
  ECX = (r32((uint32_t)(0x11fc4060)));
  /* 11f9acd3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11f9acd6:;
  /* 11f9acd6 mov edx, dword ptr [0x11fc4060] */
  EDX = (r32((uint32_t)(0x11fc4060)));
  /* 11f9acdc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ace0 jne 0x11f9ad78 */
  if (!C.zf) goto L_11f9ad78;
  /* 11f9ace6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11f9aceb push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9aced mov eax, dword ptr [0x11fc4060] */
  EAX = (r32((uint32_t)(0x11fc4060)));
  /* 11f9acf2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11f9acf5 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9acf6 call dword ptr [0x11fc5350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5350))), 0x11f9acfcu);
  /* 11f9acfc mov edx, dword ptr [0x11fc4060] */
  EDX = (r32((uint32_t)(0x11fc4060)));
  /* 11f9ad02 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11f9ad05 push eax */
  push32((uint32_t)(EAX));
  /* 11f9ad06 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9ad08 mov ecx, dword ptr [0x11fc406c] */
  ECX = (r32((uint32_t)(0x11fc406c)));
  /* 11f9ad0e push ecx */
  push32((uint32_t)(ECX));
  /* 11f9ad0f call dword ptr [0x11fc5360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5360))), 0x11f9ad15u);
  /* 11f9ad15 mov edx, dword ptr [0x11fc4064] */
  EDX = (r32((uint32_t)(0x11fc4064)));
  /* 11f9ad1b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9ad1e mov eax, dword ptr [0x11fc4068] */
  EAX = (r32((uint32_t)(0x11fc4068)));
  /* 11f9ad23 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ad25 mov ecx, dword ptr [0x11fc4060] */
  ECX = (r32((uint32_t)(0x11fc4060)));
  /* 11f9ad2b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ad2e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9ad30 push eax */
  push32((uint32_t)(EAX));
  /* 11f9ad31 mov edx, dword ptr [0x11fc4060] */
  EDX = (r32((uint32_t)(0x11fc4060)));
  /* 11f9ad37 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ad3a push edx */
  push32((uint32_t)(EDX));
  /* 11f9ad3b mov eax, dword ptr [0x11fc4060] */
  EAX = (r32((uint32_t)(0x11fc4060)));
  /* 11f9ad40 push eax */
  push32((uint32_t)(EAX));
  /* 11f9ad41 call 0x11f9e2f0 */
  push32(0x11f9ad46u); f_11f9e2f0();
  /* 11f9ad46 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ad49 mov ecx, dword ptr [0x11fc4064] */
  ECX = (r32((uint32_t)(0x11fc4064)));
  /* 11f9ad4f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9ad52 mov dword ptr [0x11fc4064], ecx */
  w32((uint32_t)(0x11fc4064), (ECX));
  /* 11f9ad58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9ad5b cmp edx, dword ptr [0x11fc4060] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11fc4060))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ad61 jbe 0x11f9ad6c */
  if ((C.cf||C.zf)) goto L_11f9ad6c;
  /* 11f9ad63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9ad66 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9ad69 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11f9ad6c:;
  /* 11f9ad6c mov ecx, dword ptr [0x11fc4068] */
  ECX = (r32((uint32_t)(0x11fc4068)));
  /* 11f9ad72 mov dword ptr [0x11fc405c], ecx */
  w32((uint32_t)(0x11fc405c), (ECX));
L_11f9ad78:;
  /* 11f9ad78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9ad7b mov dword ptr [0x11fc4060], edx */
  w32((uint32_t)(0x11fc4060), (EDX));
  /* 11f9ad81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9ad84 mov dword ptr [0x11fc4058], eax */
  w32((uint32_t)(0x11fc4058), (EAX));
L_11f9ad89:;
  /* 11f9ad89 mov esp, ebp */
  ESP = (EBP);
  /* 11f9ad8b pop ebp */
  EBP = (pop32());
  /* 11f9ad8c ret  */
  ESPCHK(0x11f9a7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad90 @ 0x11f9ad90 (1334 bytes, 427 insns) */
void f_11f9ad90(void) {
  FTRACE(0x11f9ad90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9ad90 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9ad91 mov ebp, esp */
  EBP = (ESP);
  /* 11f9ad93 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9ad96 push esi */
  push32((uint32_t)(ESI));
  /* 11f9ad97 mov eax, dword ptr [0x11fc4064] */
  EAX = (r32((uint32_t)(0x11fc4064)));
  /* 11f9ad9c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9ad9f mov ecx, dword ptr [0x11fc4068] */
  ECX = (r32((uint32_t)(0x11fc4068)));
  /* 11f9ada5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ada7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11f9adaa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9adad add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9adb0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9adb3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11f9adb6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f9adb9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11f9adbc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9adbf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11f9adc2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9adc6 jge 0x11f9addc */
  if ((C.sf==C.of)) goto L_11f9addc;
  /* 11f9adc8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f9adcb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9adce shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f9add0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11f9add3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 11f9adda jmp 0x11f9adf1 */
  goto L_11f9adf1;
L_11f9addc:;
  /* 11f9addc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11f9ade3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9ade6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9ade9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f9adec shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f9adee mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11f9adf1:;
  /* 11f9adf1 mov ecx, dword ptr [0x11fc405c] */
  ECX = (r32((uint32_t)(0x11fc405c)));
  /* 11f9adf7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11f9adfa:;
  /* 11f9adfa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9adfd cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ae00 jae 0x11f9ae26 */
  if (!C.cf) goto L_11f9ae26;
  /* 11f9ae02 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9ae05 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9ae08 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 11f9ae0a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9ae0d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11f9ae10 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 11f9ae13 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f9ae15 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9ae17 je 0x11f9ae1b */
  if (C.zf) goto L_11f9ae1b;
  /* 11f9ae19 jmp 0x11f9ae26 */
  goto L_11f9ae26;
L_11f9ae1b:;
  /* 11f9ae1b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9ae1e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ae21 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11f9ae24 jmp 0x11f9adfa */
  goto L_11f9adfa;
L_11f9ae26:;
  /* 11f9ae26 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9ae29 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ae2c jne 0x11f9af0d */
  if (!C.zf) goto L_11f9af0d;
  /* 11f9ae32 mov eax, dword ptr [0x11fc4068] */
  EAX = (r32((uint32_t)(0x11fc4068)));
  /* 11f9ae37 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11f9ae3a:;
  /* 11f9ae3a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9ae3d cmp ecx, dword ptr [0x11fc405c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11fc405c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ae43 jae 0x11f9ae69 */
  if (!C.cf) goto L_11f9ae69;
  /* 11f9ae45 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9ae48 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9ae4b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 11f9ae4d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9ae50 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11f9ae53 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11f9ae56 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9ae58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9ae5a je 0x11f9ae5e */
  if (C.zf) goto L_11f9ae5e;
  /* 11f9ae5c jmp 0x11f9ae69 */
  goto L_11f9ae69;
L_11f9ae5e:;
  /* 11f9ae5e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9ae61 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ae64 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11f9ae67 jmp 0x11f9ae3a */
  goto L_11f9ae3a;
L_11f9ae69:;
  /* 11f9ae69 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9ae6c cmp ecx, dword ptr [0x11fc405c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11fc405c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ae72 jne 0x11f9af0d */
  if (!C.zf) goto L_11f9af0d;
L_11f9ae78:;
  /* 11f9ae78 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9ae7b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ae7e jae 0x11f9ae96 */
  if (!C.cf) goto L_11f9ae96;
  /* 11f9ae80 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9ae83 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ae87 je 0x11f9ae8b */
  if (C.zf) goto L_11f9ae8b;
  /* 11f9ae89 jmp 0x11f9ae96 */
  goto L_11f9ae96;
L_11f9ae8b:;
  /* 11f9ae8b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9ae8e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ae91 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11f9ae94 jmp 0x11f9ae78 */
  goto L_11f9ae78;
L_11f9ae96:;
  /* 11f9ae96 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9ae99 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ae9c jne 0x11f9aee7 */
  if (!C.zf) goto L_11f9aee7;
  /* 11f9ae9e mov eax, dword ptr [0x11fc4068] */
  EAX = (r32((uint32_t)(0x11fc4068)));
  /* 11f9aea3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11f9aea6:;
  /* 11f9aea6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9aea9 cmp ecx, dword ptr [0x11fc405c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11fc405c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9aeaf jae 0x11f9aec7 */
  if (!C.cf) goto L_11f9aec7;
  /* 11f9aeb1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9aeb4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9aeb8 je 0x11f9aebc */
  if (C.zf) goto L_11f9aebc;
  /* 11f9aeba jmp 0x11f9aec7 */
  goto L_11f9aec7;
L_11f9aebc:;
  /* 11f9aebc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9aebf add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9aec2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11f9aec5 jmp 0x11f9aea6 */
  goto L_11f9aea6;
L_11f9aec7:;
  /* 11f9aec7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9aeca cmp ecx, dword ptr [0x11fc405c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11fc405c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9aed0 jne 0x11f9aee7 */
  if (!C.zf) goto L_11f9aee7;
  /* 11f9aed2 call 0x11f9b2d0 */
  push32(0x11f9aed7u); f_11f9b2d0();
  /* 11f9aed7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11f9aeda cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9aede jne 0x11f9aee7 */
  if (!C.zf) goto L_11f9aee7;
  /* 11f9aee0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9aee2 jmp 0x11f9b2c1 */
  goto L_11f9b2c1;
L_11f9aee7:;
  /* 11f9aee7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9aeea push edx */
  push32((uint32_t)(EDX));
  /* 11f9aeeb call 0x11f9b3e0 */
  push32(0x11f9aef0u); f_11f9b3e0();
  /* 11f9aef0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9aef3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9aef6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11f9aef9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11f9aefb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9aefe mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f9af01 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9af04 jne 0x11f9af0d */
  if (!C.zf) goto L_11f9af0d;
  /* 11f9af06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9af08 jmp 0x11f9b2c1 */
  goto L_11f9b2c1;
L_11f9af0d:;
  /* 11f9af0d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9af10 mov dword ptr [0x11fc405c], edx */
  w32((uint32_t)(0x11fc405c), (EDX));
  /* 11f9af16 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9af19 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f9af1c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 11f9af1f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f9af22 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f9af24 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11f9af27 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9af2b je 0x11f9af50 */
  if (C.zf) goto L_11f9af50;
  /* 11f9af2d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9af30 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f9af33 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9af36 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 11f9af3a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9af3d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f9af40 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11f9af43 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11f9af4a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11f9af4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9af4e jne 0x11f9af85 */
  if (!C.zf) goto L_11f9af85;
L_11f9af50:;
  /* 11f9af50 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_11f9af57:;
  /* 11f9af57 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9af5a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f9af5d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9af60 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11f9af64 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9af67 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f9af6a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11f9af6d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11f9af74 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11f9af76 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9af78 jne 0x11f9af85 */
  if (!C.zf) goto L_11f9af85;
  /* 11f9af7a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9af7d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9af80 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11f9af83 jmp 0x11f9af57 */
  goto L_11f9af57;
L_11f9af85:;
  /* 11f9af85 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9af88 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9af8e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f9af91 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11f9af98 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f9af9b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11f9afa2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9afa5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f9afa8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9afab and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11f9afaf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11f9afb2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9afb6 jne 0x11f9afd2 */
  if (!C.zf) goto L_11f9afd2;
  /* 11f9afb8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 11f9afbf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9afc2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f9afc5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11f9afc8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 11f9afcf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_11f9afd2:;
  /* 11f9afd2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9afd6 jl 0x11f9afeb */
  if ((C.sf!=C.of)) goto L_11f9afeb;
  /* 11f9afd8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f9afdb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11f9afdd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11f9afe0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9afe3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9afe6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11f9afe9 jmp 0x11f9afd2 */
  goto L_11f9afd2;
L_11f9afeb:;
  /* 11f9afeb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9afee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9aff1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 11f9aff5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11f9aff8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9affb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f9affd sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9b000 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f9b003 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9b006 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11f9b009 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9b00c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11f9b00f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9b013 jle 0x11f9b01c */
  if ((C.zf||C.sf!=C.of)) goto L_11f9b01c;
  /* 11f9b015 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_11f9b01c:;
  /* 11f9b01c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9b01f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9b022 je 0x11f9b240 */
  if (C.zf) goto L_11f9b240;
  /* 11f9b028 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9b02b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9b02e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f9b031 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9b034 jne 0x11f9b10a */
  if (!C.zf) goto L_11f9b10a;
  /* 11f9b03a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9b03e jge 0x11f9b09f */
  if ((C.sf==C.of)) goto L_11f9b09f;
  /* 11f9b040 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f9b045 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9b048 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f9b04a not eax */
  EAX = (~(EAX));
  /* 11f9b04c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9b04f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f9b052 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11f9b056 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f9b058 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9b05b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f9b05e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11f9b062 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f9b065 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b068 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11f9b06b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f9b06e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f9b071 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b074 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11f9b077 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f9b07a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b07d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11f9b081 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9b083 jne 0x11f9b09d */
  if (!C.zf) goto L_11f9b09d;
  /* 11f9b085 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f9b08a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9b08d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f9b08f not eax */
  EAX = (~(EAX));
  /* 11f9b091 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9b094 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f9b096 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11f9b098 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9b09b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11f9b09d:;
  /* 11f9b09d jmp 0x11f9b10a */
  goto L_11f9b10a;
L_11f9b09f:;
  /* 11f9b09f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9b0a2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9b0a5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f9b0aa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f9b0ac not edx */
  EDX = (~(EDX));
  /* 11f9b0ae mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9b0b1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f9b0b4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11f9b0bb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9b0bd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9b0c0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f9b0c3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 11f9b0ca mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f9b0cd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b0d0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11f9b0d3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f9b0d6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f9b0d9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b0dc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11f9b0df mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f9b0e2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b0e5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11f9b0e9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9b0eb jne 0x11f9b10a */
  if (!C.zf) goto L_11f9b10a;
  /* 11f9b0ed mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9b0f0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9b0f3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f9b0f8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f9b0fa not edx */
  EDX = (~(EDX));
  /* 11f9b0fc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9b0ff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f9b102 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11f9b104 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9b107 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11f9b10a:;
  /* 11f9b10a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9b10d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f9b110 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9b113 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f9b116 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11f9b119 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9b11c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f9b11f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9b122 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f9b125 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11f9b128 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9b12c je 0x11f9b240 */
  if (C.zf) goto L_11f9b240;
  /* 11f9b132 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9b135 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9b138 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 11f9b13b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f9b13e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9b141 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9b144 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f9b147 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11f9b14a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9b14d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9b150 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11f9b153 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9b156 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9b159 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11f9b15c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9b15f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f9b162 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9b165 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11f9b168 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9b16b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9b16e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f9b171 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9b174 jne 0x11f9b240 */
  if (!C.zf) goto L_11f9b240;
  /* 11f9b17a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9b17e jge 0x11f9b1da */
  if ((C.sf==C.of)) goto L_11f9b1da;
  /* 11f9b180 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f9b183 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b186 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11f9b18a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f9b18d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b190 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11f9b193 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11f9b195 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f9b198 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b19b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11f9b19e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9b1a0 jne 0x11f9b1b8 */
  if (!C.zf) goto L_11f9b1b8;
  /* 11f9b1a2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f9b1a7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9b1aa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f9b1ac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9b1af mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f9b1b1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11f9b1b3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9b1b6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11f9b1b8:;
  /* 11f9b1b8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f9b1bd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9b1c0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f9b1c2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9b1c5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f9b1c8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11f9b1cc or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9b1ce mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9b1d1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f9b1d4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11f9b1d8 jmp 0x11f9b240 */
  goto L_11f9b240;
L_11f9b1da:;
  /* 11f9b1da mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f9b1dd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b1e0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11f9b1e4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f9b1e7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b1ea mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11f9b1ed add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11f9b1ef mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f9b1f2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b1f5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11f9b1f8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9b1fa jne 0x11f9b217 */
  if (!C.zf) goto L_11f9b217;
  /* 11f9b1fc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9b1ff sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9b202 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f9b207 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f9b209 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9b20c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f9b20f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11f9b211 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9b214 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11f9b217:;
  /* 11f9b217 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9b21a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9b21d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f9b222 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f9b224 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9b227 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f9b22a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11f9b231 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9b233 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9b236 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f9b239 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11f9b240:;
  /* 11f9b240 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9b244 je 0x11f9b25a */
  if (C.zf) goto L_11f9b25a;
  /* 11f9b246 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9b249 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9b24c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11f9b24e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9b251 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b254 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9b257 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_11f9b25a:;
  /* 11f9b25a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9b25d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b260 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11f9b263 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f9b266 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b269 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9b26c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11f9b26e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f9b271 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b274 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9b277 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b27a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 11f9b27d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9b280 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f9b282 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9b285 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f9b287 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b28a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9b28d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11f9b28f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9b291 jne 0x11f9b2b3 */
  if (!C.zf) goto L_11f9b2b3;
  /* 11f9b293 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9b296 cmp eax, dword ptr [0x11fc4060] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11fc4060))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9b29c jne 0x11f9b2b3 */
  if (!C.zf) goto L_11f9b2b3;
  /* 11f9b29e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9b2a1 cmp ecx, dword ptr [0x11fc4058] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11fc4058))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9b2a7 jne 0x11f9b2b3 */
  if (!C.zf) goto L_11f9b2b3;
  /* 11f9b2a9 mov dword ptr [0x11fc4060], 0 */
  w32((uint32_t)(0x11fc4060), (0x0u));
L_11f9b2b3:;
  /* 11f9b2b3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f9b2b6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9b2b9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11f9b2bb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9b2be add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11f9b2c1:;
  /* 11f9b2c1 pop esi */
  ESI = (pop32());
  /* 11f9b2c2 mov esp, ebp */
  ESP = (EBP);
  /* 11f9b2c4 pop ebp */
  EBP = (pop32());
  /* 11f9b2c5 ret  */
  ESPCHK(0x11f9ad90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2d0 @ 0x11f9b2d0 (271 bytes, 78 insns) */
void f_11f9b2d0(void) {
  FTRACE(0x11f9b2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9b2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9b2d1 mov ebp, esp */
  EBP = (ESP);
  /* 11f9b2d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9b2d4 mov eax, dword ptr [0x11fc4064] */
  EAX = (r32((uint32_t)(0x11fc4064)));
  /* 11f9b2d9 cmp eax, dword ptr [0x11fc4048] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11fc4048))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9b2df jne 0x11f9b32b */
  if (!C.zf) goto L_11f9b32b;
  /* 11f9b2e1 mov ecx, dword ptr [0x11fc4048] */
  ECX = (r32((uint32_t)(0x11fc4048)));
  /* 11f9b2e7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b2ea imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9b2ed push ecx */
  push32((uint32_t)(ECX));
  /* 11f9b2ee mov edx, dword ptr [0x11fc4068] */
  EDX = (r32((uint32_t)(0x11fc4068)));
  /* 11f9b2f4 push edx */
  push32((uint32_t)(EDX));
  /* 11f9b2f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9b2f7 mov eax, dword ptr [0x11fc406c] */
  EAX = (r32((uint32_t)(0x11fc406c)));
  /* 11f9b2fc push eax */
  push32((uint32_t)(EAX));
  /* 11f9b2fd call dword ptr [0x11fc533c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc533c))), 0x11f9b303u);
  /* 11f9b303 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f9b306 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9b30a jne 0x11f9b313 */
  if (!C.zf) goto L_11f9b313;
  /* 11f9b30c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9b30e jmp 0x11f9b3db */
  goto L_11f9b3db;
L_11f9b313:;
  /* 11f9b313 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9b316 mov dword ptr [0x11fc4068], ecx */
  w32((uint32_t)(0x11fc4068), (ECX));
  /* 11f9b31c mov edx, dword ptr [0x11fc4048] */
  EDX = (r32((uint32_t)(0x11fc4048)));
  /* 11f9b322 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b325 mov dword ptr [0x11fc4048], edx */
  w32((uint32_t)(0x11fc4048), (EDX));
L_11f9b32b:;
  /* 11f9b32b mov eax, dword ptr [0x11fc4064] */
  EAX = (r32((uint32_t)(0x11fc4064)));
  /* 11f9b330 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9b333 mov ecx, dword ptr [0x11fc4068] */
  ECX = (r32((uint32_t)(0x11fc4068)));
  /* 11f9b339 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b33b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f9b33e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11f9b343 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f9b345 mov edx, dword ptr [0x11fc406c] */
  EDX = (r32((uint32_t)(0x11fc406c)));
  /* 11f9b34b push edx */
  push32((uint32_t)(EDX));
  /* 11f9b34c call dword ptr [0x11fc5334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5334))), 0x11f9b352u);
  /* 11f9b352 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9b355 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 11f9b358 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9b35b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9b35f jne 0x11f9b365 */
  if (!C.zf) goto L_11f9b365;
  /* 11f9b361 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9b363 jmp 0x11f9b3db */
  goto L_11f9b3db;
L_11f9b365:;
  /* 11f9b365 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f9b367 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11f9b36c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11f9b371 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9b373 call dword ptr [0x11fc532c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc532c))), 0x11f9b379u);
  /* 11f9b379 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9b37c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 11f9b37f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9b382 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9b386 jne 0x11f9b3a2 */
  if (!C.zf) goto L_11f9b3a2;
  /* 11f9b388 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9b38b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f9b38e push ecx */
  push32((uint32_t)(ECX));
  /* 11f9b38f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9b391 mov edx, dword ptr [0x11fc406c] */
  EDX = (r32((uint32_t)(0x11fc406c)));
  /* 11f9b397 push edx */
  push32((uint32_t)(EDX));
  /* 11f9b398 call dword ptr [0x11fc5360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5360))), 0x11f9b39eu);
  /* 11f9b39e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9b3a0 jmp 0x11f9b3db */
  goto L_11f9b3db;
L_11f9b3a2:;
  /* 11f9b3a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9b3a5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11f9b3ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9b3ae mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11f9b3b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9b3b8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 11f9b3bf mov eax, dword ptr [0x11fc4064] */
  EAX = (r32((uint32_t)(0x11fc4064)));
  /* 11f9b3c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b3c7 mov dword ptr [0x11fc4064], eax */
  w32((uint32_t)(0x11fc4064), (EAX));
  /* 11f9b3cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9b3cf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11f9b3d2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 11f9b3d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11f9b3db:;
  /* 11f9b3db mov esp, ebp */
  ESP = (EBP);
  /* 11f9b3dd pop ebp */
  EBP = (pop32());
  /* 11f9b3de ret  */
  ESPCHK(0x11f9b2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b3e0 @ 0x11f9b3e0 (494 bytes, 149 insns) */
void f_11f9b3e0(void) {
  FTRACE(0x11f9b3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9b3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9b3e1 mov ebp, esp */
  EBP = (ESP);
  /* 11f9b3e3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9b3e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9b3e9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f9b3ec mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11f9b3ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9b3f2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11f9b3f5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f9b3f8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_11f9b3ff:;
  /* 11f9b3ff cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9b403 jl 0x11f9b418 */
  if ((C.sf!=C.of)) goto L_11f9b418;
  /* 11f9b405 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9b408 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11f9b40a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f9b40d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f9b410 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b413 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11f9b416 jmp 0x11f9b3ff */
  goto L_11f9b3ff;
L_11f9b418:;
  /* 11f9b418 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f9b41b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9b421 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9b424 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11f9b42b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11f9b42e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11f9b435 jmp 0x11f9b440 */
  goto L_11f9b440;
L_11f9b437:;
  /* 11f9b437 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9b43a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b43d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11f9b440:;
  /* 11f9b440 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9b444 jge 0x11f9b466 */
  if ((C.sf==C.of)) goto L_11f9b466;
  /* 11f9b446 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9b449 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9b44c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 11f9b44f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11f9b452 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9b455 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9b458 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11f9b45b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9b45e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9b461 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11f9b464 jmp 0x11f9b437 */
  goto L_11f9b437;
L_11f9b466:;
  /* 11f9b466 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f9b469 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11f9b46c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9b46f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11f9b472 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b474 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11f9b477 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f9b479 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11f9b47e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11f9b483 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9b486 push edx */
  push32((uint32_t)(EDX));
  /* 11f9b487 call dword ptr [0x11fc532c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc532c))), 0x11f9b48du);
  /* 11f9b48d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9b48f jne 0x11f9b499 */
  if (!C.zf) goto L_11f9b499;
  /* 11f9b491 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f9b494 jmp 0x11f9b5ca */
  goto L_11f9b5ca;
L_11f9b499:;
  /* 11f9b499 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9b49c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b4a1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11f9b4a4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9b4a7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f9b4aa jmp 0x11f9b4b8 */
  goto L_11f9b4b8;
L_11f9b4ac:;
  /* 11f9b4ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9b4af add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b4b5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f9b4b8:;
  /* 11f9b4b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9b4bb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9b4be ja 0x11f9b51d */
  if ((!C.cf&&!C.zf)) goto L_11f9b51d;
  /* 11f9b4c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9b4c3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 11f9b4ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9b4cd mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 11f9b4d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9b4da add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b4dd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11f9b4e0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9b4e3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 11f9b4e9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9b4ec add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b4f2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9b4f5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11f9b4f8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9b4fb sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9b501 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9b504 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11f9b507 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9b50a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b50f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11f9b512 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9b515 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 11f9b51b jmp 0x11f9b4ac */
  goto L_11f9b4ac;
L_11f9b51d:;
  /* 11f9b51d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9b520 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b526 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11f9b529 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9b52c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b52f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9b532 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11f9b535 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9b538 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f9b53b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11f9b53e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9b541 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9b544 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11f9b547 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f9b54a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b54d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9b550 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11f9b553 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9b556 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11f9b559 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11f9b55c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9b55f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9b562 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11f9b565 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f9b568 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9b56b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 11f9b573 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f9b576 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9b579 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 11f9b584 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9b587 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 11f9b58b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9b58e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 11f9b591 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11f9b594 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9b597 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 11f9b59a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9b59c jne 0x11f9b5ad */
  if (!C.zf) goto L_11f9b5ad;
  /* 11f9b59e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9b5a1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f9b5a4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9b5a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9b5aa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11f9b5ad:;
  /* 11f9b5ad mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f9b5b2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f9b5b5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f9b5b7 not edx */
  EDX = (~(EDX));
  /* 11f9b5b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9b5bc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f9b5bf and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11f9b5c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9b5c4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11f9b5c7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_11f9b5ca:;
  /* 11f9b5ca mov esp, ebp */
  ESP = (EBP);
  /* 11f9b5cc pop ebp */
  EBP = (pop32());
  /* 11f9b5cd ret  */
  ESPCHK(0x11f9b3e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5d0 @ 0x11f9b5d0 (1515 bytes, 489 insns) */
void f_11f9b5d0(void) {
  FTRACE(0x11f9b5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9b5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9b5d1 mov ebp, esp */
  EBP = (ESP);
  /* 11f9b5d3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9b5d6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f9b5d9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b5dc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11f9b5de mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11f9b5e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9b5e4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11f9b5e7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11f9b5ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9b5ed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9b5f0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9b5f3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f9b5f6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9b5f9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11f9b5fc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f9b5ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9b602 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9b608 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9b60b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11f9b612 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11f9b615 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9b618 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9b61b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11f9b61e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9b621 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f9b623 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9b626 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11f9b629 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9b62c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b62f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11f9b632 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9b635 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f9b637 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11f9b63a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f9b63d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9b640 jle 0x11f9b8f6 */
  if ((C.zf||C.sf!=C.of)) goto L_11f9b8f6;
  /* 11f9b646 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9b649 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11f9b64c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9b64e jne 0x11f9b65b */
  if (!C.zf) goto L_11f9b65b;
  /* 11f9b650 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f9b653 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b656 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9b659 jle 0x11f9b662 */
  if ((C.zf||C.sf!=C.of)) goto L_11f9b662;
L_11f9b65b:;
  /* 11f9b65b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9b65d jmp 0x11f9bbb7 */
  goto L_11f9bbb7;
L_11f9b662:;
  /* 11f9b662 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9b665 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11f9b668 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9b66b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11f9b66e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9b672 jbe 0x11f9b67b */
  if ((C.cf||C.zf)) goto L_11f9b67b;
  /* 11f9b674 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11f9b67b:;
  /* 11f9b67b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9b67e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9b681 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f9b684 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9b687 jne 0x11f9b75d */
  if (!C.zf) goto L_11f9b75d;
  /* 11f9b68d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9b691 jae 0x11f9b6f2 */
  if (!C.cf) goto L_11f9b6f2;
  /* 11f9b693 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f9b698 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9b69b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f9b69d not edx */
  EDX = (~(EDX));
  /* 11f9b69f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9b6a2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9b6a5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11f9b6a9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9b6ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9b6ae mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9b6b1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11f9b6b5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9b6b8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b6bb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11f9b6be sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f9b6c1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9b6c4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b6c7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11f9b6ca mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9b6cd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b6d0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11f9b6d4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9b6d6 jne 0x11f9b6f0 */
  if (!C.zf) goto L_11f9b6f0;
  /* 11f9b6d8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f9b6dd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9b6e0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f9b6e2 not edx */
  EDX = (~(EDX));
  /* 11f9b6e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9b6e7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f9b6e9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11f9b6eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9b6ee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11f9b6f0:;
  /* 11f9b6f0 jmp 0x11f9b75d */
  goto L_11f9b75d;
L_11f9b6f2:;
  /* 11f9b6f2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9b6f5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9b6f8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f9b6fd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f9b6ff not eax */
  EAX = (~(EAX));
  /* 11f9b701 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9b704 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9b707 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11f9b70e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f9b710 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9b713 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9b716 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11f9b71d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9b720 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b723 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11f9b726 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f9b729 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9b72c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b72f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11f9b732 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9b735 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b738 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11f9b73c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9b73e jne 0x11f9b75d */
  if (!C.zf) goto L_11f9b75d;
  /* 11f9b740 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9b743 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9b746 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f9b74b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f9b74d not eax */
  EAX = (~(EAX));
  /* 11f9b74f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9b752 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f9b755 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11f9b757 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9b75a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11f9b75d:;
  /* 11f9b75d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9b760 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f9b763 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9b766 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f9b769 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11f9b76c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9b76f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f9b772 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9b775 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f9b778 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11f9b77b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f9b77e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b781 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9b784 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11f9b787 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9b78b jle 0x11f9b8d7 */
  if ((C.zf||C.sf!=C.of)) goto L_11f9b8d7;
  /* 11f9b791 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9b794 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b797 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11f9b79a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9b79d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11f9b7a0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9b7a3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11f9b7a6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9b7aa jbe 0x11f9b7b3 */
  if ((C.cf||C.zf)) goto L_11f9b7b3;
  /* 11f9b7ac mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11f9b7b3:;
  /* 11f9b7b3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9b7b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9b7b9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 11f9b7bc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11f9b7bf mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9b7c2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9b7c5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f9b7c8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11f9b7cb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9b7ce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9b7d1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11f9b7d4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9b7d7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9b7da mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11f9b7dd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9b7e0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f9b7e3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9b7e6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11f9b7e9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9b7ec mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9b7ef mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f9b7f2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9b7f5 jne 0x11f9b8c3 */
  if (!C.zf) goto L_11f9b8c3;
  /* 11f9b7fb cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9b7ff jae 0x11f9b85c */
  if (!C.cf) goto L_11f9b85c;
  /* 11f9b801 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9b804 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b807 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11f9b80b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9b80e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b811 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11f9b814 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11f9b817 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9b81a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b81d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11f9b820 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9b822 jne 0x11f9b83a */
  if (!C.zf) goto L_11f9b83a;
  /* 11f9b824 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f9b829 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9b82c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f9b82e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9b831 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f9b833 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11f9b835 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9b838 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11f9b83a:;
  /* 11f9b83a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f9b83f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9b842 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f9b844 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9b847 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9b84a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11f9b84e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f9b850 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9b853 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9b856 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11f9b85a jmp 0x11f9b8c3 */
  goto L_11f9b8c3;
L_11f9b85c:;
  /* 11f9b85c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9b85f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b862 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11f9b866 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9b869 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b86c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11f9b86f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11f9b872 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9b875 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b878 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11f9b87b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9b87d jne 0x11f9b89a */
  if (!C.zf) goto L_11f9b89a;
  /* 11f9b87f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9b882 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9b885 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f9b88a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f9b88c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9b88f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f9b892 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11f9b894 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9b897 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11f9b89a:;
  /* 11f9b89a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9b89d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9b8a0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f9b8a5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f9b8a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9b8aa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9b8ad mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11f9b8b4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f9b8b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9b8b9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9b8bc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11f9b8c3:;
  /* 11f9b8c3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9b8c6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9b8c9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11f9b8cb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9b8ce add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b8d1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9b8d4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_11f9b8d7:;
  /* 11f9b8d7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f9b8da add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b8dd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9b8e0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11f9b8e2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f9b8e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b8e8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9b8eb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b8ee mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 11f9b8f1 jmp 0x11f9bbb2 */
  goto L_11f9bbb2;
L_11f9b8f6:;
  /* 11f9b8f6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f9b8f9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9b8fc jge 0x11f9bbb2 */
  if ((C.sf==C.of)) goto L_11f9bbb2;
  /* 11f9b902 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f9b905 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b908 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9b90b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11f9b90d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f9b910 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b913 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9b916 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b919 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 11f9b91c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9b91f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b922 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11f9b925 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f9b928 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9b92b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11f9b92e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f9b931 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11f9b934 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9b937 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11f9b93a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9b93e jbe 0x11f9b947 */
  if ((C.cf||C.zf)) goto L_11f9b947;
  /* 11f9b940 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11f9b947:;
  /* 11f9b947 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9b94a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9b94d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9b94f jne 0x11f9ba90 */
  if (!C.zf) goto L_11f9ba90;
  /* 11f9b955 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9b958 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11f9b95b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9b95e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11f9b961 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9b965 jbe 0x11f9b96e */
  if ((C.cf||C.zf)) goto L_11f9b96e;
  /* 11f9b967 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11f9b96e:;
  /* 11f9b96e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9b971 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9b974 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f9b977 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9b97a jne 0x11f9ba50 */
  if (!C.zf) goto L_11f9ba50;
  /* 11f9b980 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9b984 jae 0x11f9b9e5 */
  if (!C.cf) goto L_11f9b9e5;
  /* 11f9b986 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f9b98b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9b98e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f9b990 not edx */
  EDX = (~(EDX));
  /* 11f9b992 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9b995 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9b998 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11f9b99c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9b99e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9b9a1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9b9a4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11f9b9a8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9b9ab add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b9ae mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11f9b9b1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f9b9b4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9b9b7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b9ba mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11f9b9bd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9b9c0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9b9c3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11f9b9c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9b9c9 jne 0x11f9b9e3 */
  if (!C.zf) goto L_11f9b9e3;
  /* 11f9b9cb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f9b9d0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9b9d3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f9b9d5 not edx */
  EDX = (~(EDX));
  /* 11f9b9d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9b9da mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f9b9dc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11f9b9de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9b9e1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11f9b9e3:;
  /* 11f9b9e3 jmp 0x11f9ba50 */
  goto L_11f9ba50;
L_11f9b9e5:;
  /* 11f9b9e5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9b9e8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9b9eb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f9b9f0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f9b9f2 not eax */
  EAX = (~(EAX));
  /* 11f9b9f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9b9f7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9b9fa mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11f9ba01 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f9ba03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9ba06 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9ba09 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11f9ba10 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9ba13 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ba16 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11f9ba19 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f9ba1c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9ba1f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ba22 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11f9ba25 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9ba28 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ba2b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11f9ba2f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9ba31 jne 0x11f9ba50 */
  if (!C.zf) goto L_11f9ba50;
  /* 11f9ba33 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9ba36 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9ba39 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f9ba3e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f9ba40 not eax */
  EAX = (~(EAX));
  /* 11f9ba42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9ba45 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f9ba48 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11f9ba4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9ba4d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11f9ba50:;
  /* 11f9ba50 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9ba53 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f9ba56 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9ba59 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f9ba5c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11f9ba5f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9ba62 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f9ba65 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9ba68 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f9ba6b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11f9ba6e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f9ba71 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ba74 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11f9ba77 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f9ba7a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11f9ba7d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9ba80 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11f9ba83 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ba87 jbe 0x11f9ba90 */
  if ((C.cf||C.zf)) goto L_11f9ba90;
  /* 11f9ba89 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11f9ba90:;
  /* 11f9ba90 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9ba93 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9ba96 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 11f9ba99 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11f9ba9c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9ba9f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9baa2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f9baa5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11f9baa8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9baab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9baae mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11f9bab1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9bab4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9bab7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11f9baba mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9babd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f9bac0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9bac3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11f9bac6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9bac9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9bacc mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f9bacf cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9bad2 jne 0x11f9bb9e */
  if (!C.zf) goto L_11f9bb9e;
  /* 11f9bad8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9badc jae 0x11f9bb38 */
  if (!C.cf) goto L_11f9bb38;
  /* 11f9bade mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9bae1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9bae4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11f9bae8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9baeb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9baee mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11f9baf1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11f9baf3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9baf6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9baf9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11f9bafc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9bafe jne 0x11f9bb16 */
  if (!C.zf) goto L_11f9bb16;
  /* 11f9bb00 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f9bb05 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9bb08 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f9bb0a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9bb0d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f9bb0f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11f9bb11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9bb14 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11f9bb16:;
  /* 11f9bb16 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f9bb1b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9bb1e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f9bb20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9bb23 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9bb26 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11f9bb2a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9bb2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9bb2f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9bb32 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11f9bb36 jmp 0x11f9bb9e */
  goto L_11f9bb9e;
L_11f9bb38:;
  /* 11f9bb38 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9bb3b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9bb3e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11f9bb42 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9bb45 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9bb48 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11f9bb4b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11f9bb4d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9bb50 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9bb53 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11f9bb56 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9bb58 jne 0x11f9bb75 */
  if (!C.zf) goto L_11f9bb75;
  /* 11f9bb5a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9bb5d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9bb60 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f9bb65 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f9bb67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9bb6a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f9bb6d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11f9bb6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9bb72 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11f9bb75:;
  /* 11f9bb75 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9bb78 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9bb7b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f9bb80 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f9bb82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9bb85 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9bb88 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11f9bb8f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9bb91 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9bb94 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9bb97 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11f9bb9e:;
  /* 11f9bb9e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9bba1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f9bba4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11f9bba6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9bba9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9bbac mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f9bbaf mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_11f9bbb2:;
  /* 11f9bbb2 mov eax, 1 */
  EAX = (0x1u);
L_11f9bbb7:;
  /* 11f9bbb7 mov esp, ebp */
  ESP = (EBP);
  /* 11f9bbb9 pop ebp */
  EBP = (pop32());
  /* 11f9bbba ret  */
  ESPCHK(0x11f9b5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bbc0 @ 0x11f9bbc0 (304 bytes, 79 insns) */
void f_11f9bbc0(void) {
  FTRACE(0x11f9bbc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9bbc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9bbc1 mov ebp, esp */
  EBP = (ESP);
  /* 11f9bbc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9bbc4 cmp dword ptr [0x11fc4060], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc4060))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9bbcb je 0x11f9bcec */
  if (C.zf) goto L_11f9bcec;
  /* 11f9bbd1 mov eax, dword ptr [0x11fc4058] */
  EAX = (r32((uint32_t)(0x11fc4058)));
  /* 11f9bbd6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11f9bbd9 mov ecx, dword ptr [0x11fc4060] */
  ECX = (r32((uint32_t)(0x11fc4060)));
  /* 11f9bbdf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f9bbe2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9bbe4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f9bbe7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11f9bbec push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11f9bbf1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9bbf4 push eax */
  push32((uint32_t)(EAX));
  /* 11f9bbf5 call dword ptr [0x11fc5350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5350))), 0x11f9bbfbu);
  /* 11f9bbfb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f9bc00 mov ecx, dword ptr [0x11fc4058] */
  ECX = (r32((uint32_t)(0x11fc4058)));
  /* 11f9bc06 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f9bc08 mov eax, dword ptr [0x11fc4060] */
  EAX = (r32((uint32_t)(0x11fc4060)));
  /* 11f9bc0d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f9bc10 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11f9bc12 mov edx, dword ptr [0x11fc4060] */
  EDX = (r32((uint32_t)(0x11fc4060)));
  /* 11f9bc18 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11f9bc1b mov eax, dword ptr [0x11fc4060] */
  EAX = (r32((uint32_t)(0x11fc4060)));
  /* 11f9bc20 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f9bc23 mov edx, dword ptr [0x11fc4058] */
  EDX = (r32((uint32_t)(0x11fc4058)));
  /* 11f9bc29 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11f9bc34 mov eax, dword ptr [0x11fc4060] */
  EAX = (r32((uint32_t)(0x11fc4060)));
  /* 11f9bc39 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f9bc3c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11f9bc3f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f9bc42 mov eax, dword ptr [0x11fc4060] */
  EAX = (r32((uint32_t)(0x11fc4060)));
  /* 11f9bc47 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f9bc4a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11f9bc4d mov edx, dword ptr [0x11fc4060] */
  EDX = (r32((uint32_t)(0x11fc4060)));
  /* 11f9bc53 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11f9bc56 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11f9bc5a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9bc5c jne 0x11f9bc72 */
  if (!C.zf) goto L_11f9bc72;
  /* 11f9bc5e mov edx, dword ptr [0x11fc4060] */
  EDX = (r32((uint32_t)(0x11fc4060)));
  /* 11f9bc64 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f9bc67 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11f9bc69 mov ecx, dword ptr [0x11fc4060] */
  ECX = (r32((uint32_t)(0x11fc4060)));
  /* 11f9bc6f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11f9bc72:;
  /* 11f9bc72 mov edx, dword ptr [0x11fc4060] */
  EDX = (r32((uint32_t)(0x11fc4060)));
  /* 11f9bc78 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9bc7c jne 0x11f9bce2 */
  if (!C.zf) goto L_11f9bce2;
  /* 11f9bc7e cmp dword ptr [0x11fc4064], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11fc4064))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9bc85 jle 0x11f9bce2 */
  if ((C.zf||C.sf!=C.of)) goto L_11f9bce2;
  /* 11f9bc87 mov eax, dword ptr [0x11fc4060] */
  EAX = (r32((uint32_t)(0x11fc4060)));
  /* 11f9bc8c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f9bc8f push ecx */
  push32((uint32_t)(ECX));
  /* 11f9bc90 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9bc92 mov edx, dword ptr [0x11fc406c] */
  EDX = (r32((uint32_t)(0x11fc406c)));
  /* 11f9bc98 push edx */
  push32((uint32_t)(EDX));
  /* 11f9bc99 call dword ptr [0x11fc5360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5360))), 0x11f9bc9fu);
  /* 11f9bc9f mov eax, dword ptr [0x11fc4064] */
  EAX = (r32((uint32_t)(0x11fc4064)));
  /* 11f9bca4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9bca7 mov ecx, dword ptr [0x11fc4068] */
  ECX = (r32((uint32_t)(0x11fc4068)));
  /* 11f9bcad add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9bcaf mov edx, dword ptr [0x11fc4060] */
  EDX = (r32((uint32_t)(0x11fc4060)));
  /* 11f9bcb5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9bcb8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9bcba push ecx */
  push32((uint32_t)(ECX));
  /* 11f9bcbb mov eax, dword ptr [0x11fc4060] */
  EAX = (r32((uint32_t)(0x11fc4060)));
  /* 11f9bcc0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9bcc3 push eax */
  push32((uint32_t)(EAX));
  /* 11f9bcc4 mov ecx, dword ptr [0x11fc4060] */
  ECX = (r32((uint32_t)(0x11fc4060)));
  /* 11f9bcca push ecx */
  push32((uint32_t)(ECX));
  /* 11f9bccb call 0x11f9e2f0 */
  push32(0x11f9bcd0u); f_11f9e2f0();
  /* 11f9bcd0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9bcd3 mov edx, dword ptr [0x11fc4064] */
  EDX = (r32((uint32_t)(0x11fc4064)));
  /* 11f9bcd9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9bcdc mov dword ptr [0x11fc4064], edx */
  w32((uint32_t)(0x11fc4064), (EDX));
L_11f9bce2:;
  /* 11f9bce2 mov dword ptr [0x11fc4060], 0 */
  w32((uint32_t)(0x11fc4060), (0x0u));
L_11f9bcec:;
  /* 11f9bcec mov esp, ebp */
  ESP = (EBP);
  /* 11f9bcee pop ebp */
  EBP = (pop32());
  /* 11f9bcef ret  */
  ESPCHK(0x11f9bbc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bcf0 @ 0x11f9bcf0 (1565 bytes, 343 insns) */
void f_11f9bcf0(void) {
  FTRACE(0x11f9bcf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9bcf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9bcf1 mov ebp, esp */
  EBP = (ESP);
  /* 11f9bcf3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9bcf9 mov eax, dword ptr [0x11fc4064] */
  EAX = (r32((uint32_t)(0x11fc4064)));
  /* 11f9bcfe imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9bd01 push eax */
  push32((uint32_t)(EAX));
  /* 11f9bd02 mov ecx, dword ptr [0x11fc4068] */
  ECX = (r32((uint32_t)(0x11fc4068)));
  /* 11f9bd08 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9bd09 call dword ptr [0x11fc53dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc53dc))), 0x11f9bd0fu);
  /* 11f9bd0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9bd11 je 0x11f9bd1b */
  if (C.zf) goto L_11f9bd1b;
  /* 11f9bd13 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f9bd16 jmp 0x11f9c309 */
  goto L_11f9c309;
L_11f9bd1b:;
  /* 11f9bd1b mov edx, dword ptr [0x11fc4068] */
  EDX = (r32((uint32_t)(0x11fc4068)));
  /* 11f9bd21 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 11f9bd27 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 11f9bd31 jmp 0x11f9bd42 */
  goto L_11f9bd42;
L_11f9bd33:;
  /* 11f9bd33 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 11f9bd39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9bd3c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_11f9bd42:;
  /* 11f9bd42 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 11f9bd48 cmp ecx, dword ptr [0x11fc4064] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11fc4064))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9bd4e jge 0x11f9c307 */
  if ((C.sf==C.of)) goto L_11f9c307;
  /* 11f9bd54 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11f9bd5a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11f9bd5d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 11f9bd63 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11f9bd68 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11f9bd6e push ecx */
  push32((uint32_t)(ECX));
  /* 11f9bd6f call dword ptr [0x11fc53dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc53dc))), 0x11f9bd75u);
  /* 11f9bd75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9bd77 je 0x11f9bd83 */
  if (C.zf) goto L_11f9bd83;
  /* 11f9bd79 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11f9bd7e jmp 0x11f9c309 */
  goto L_11f9c309;
L_11f9bd83:;
  /* 11f9bd83 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11f9bd89 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11f9bd8c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 11f9bd92 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11f9bd98 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9bd9e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11f9bda1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11f9bda7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11f9bdaa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f9bdad mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 11f9bdb7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 11f9bdc1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11f9bdc8 jmp 0x11f9bdd3 */
  goto L_11f9bdd3;
L_11f9bdca:;
  /* 11f9bdca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9bdcd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9bdd0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11f9bdd3:;
  /* 11f9bdd3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9bdd7 jge 0x11f9c2cb */
  if ((C.sf==C.of)) goto L_11f9c2cb;
  /* 11f9bddd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 11f9bde7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 11f9bdf1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 11f9bdfb mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 11f9be05 jmp 0x11f9be16 */
  goto L_11f9be16;
L_11f9be07:;
  /* 11f9be07 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11f9be0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9be10 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_11f9be16:;
  /* 11f9be16 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9be1d jge 0x11f9be32 */
  if ((C.sf==C.of)) goto L_11f9be32;
  /* 11f9be1f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11f9be25 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 11f9be30 jmp 0x11f9be07 */
  goto L_11f9be07;
L_11f9be32:;
  /* 11f9be32 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9be36 jl 0x11f9c26d */
  if ((C.sf!=C.of)) goto L_11f9c26d;
  /* 11f9be3c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11f9be41 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 11f9be47 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9be48 call dword ptr [0x11fc53dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc53dc))), 0x11f9be4eu);
  /* 11f9be4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9be50 je 0x11f9be5c */
  if (C.zf) goto L_11f9be5c;
  /* 11f9be52 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 11f9be57 jmp 0x11f9c309 */
  goto L_11f9c309;
L_11f9be5c:;
  /* 11f9be5c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 11f9be62 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11f9be65 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 11f9be6f jmp 0x11f9be80 */
  goto L_11f9be80;
L_11f9be71:;
  /* 11f9be71 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 11f9be77 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9be7a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_11f9be80:;
  /* 11f9be80 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9be87 jge 0x11f9c004 */
  if ((C.sf==C.of)) goto L_11f9c004;
  /* 11f9be8d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9be90 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9be93 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 11f9be99 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11f9be9f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9bea5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 11f9beab mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11f9beb1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9beb5 jne 0x11f9bec2 */
  if (!C.zf) goto L_11f9bec2;
  /* 11f9beb7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 11f9bebd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9bec0 je 0x11f9becc */
  if (C.zf) goto L_11f9becc;
L_11f9bec2:;
  /* 11f9bec2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 11f9bec7 jmp 0x11f9c309 */
  goto L_11f9c309;
L_11f9becc:;
  /* 11f9becc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11f9bed2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f9bed4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 11f9beda mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 11f9bee0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 11f9bee6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 11f9beec and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9beef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9bef1 je 0x11f9bf29 */
  if (C.zf) goto L_11f9bf29;
  /* 11f9bef3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 11f9bef9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9befc mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 11f9bf02 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9bf0c jle 0x11f9bf18 */
  if ((C.zf||C.sf!=C.of)) goto L_11f9bf18;
  /* 11f9bf0e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 11f9bf13 jmp 0x11f9c309 */
  goto L_11f9c309;
L_11f9bf18:;
  /* 11f9bf18 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 11f9bf1e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9bf21 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 11f9bf27 jmp 0x11f9bf6b */
  goto L_11f9bf6b;
L_11f9bf29:;
  /* 11f9bf29 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 11f9bf2f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11f9bf32 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9bf35 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 11f9bf3b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9bf42 jle 0x11f9bf4e */
  if ((C.zf||C.sf!=C.of)) goto L_11f9bf4e;
  /* 11f9bf44 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_11f9bf4e:;
  /* 11f9bf4e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11f9bf54 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 11f9bf5b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9bf5e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11f9bf64 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_11f9bf6b:;
  /* 11f9bf6b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9bf72 jl 0x11f9bf8d */
  if ((C.sf!=C.of)) goto L_11f9bf8d;
  /* 11f9bf74 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 11f9bf7a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 11f9bf7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9bf7f jne 0x11f9bf8d */
  if (!C.zf) goto L_11f9bf8d;
  /* 11f9bf81 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9bf8b jle 0x11f9bf97 */
  if ((C.zf||C.sf!=C.of)) goto L_11f9bf97;
L_11f9bf8d:;
  /* 11f9bf8d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 11f9bf92 jmp 0x11f9c309 */
  goto L_11f9c309;
L_11f9bf97:;
  /* 11f9bf97 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11f9bf9d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9bfa3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11f9bfa6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9bfac je 0x11f9bfb8 */
  if (C.zf) goto L_11f9bfb8;
  /* 11f9bfae mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 11f9bfb3 jmp 0x11f9c309 */
  goto L_11f9c309;
L_11f9bfb8:;
  /* 11f9bfb8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11f9bfbe add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9bfc4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 11f9bfca mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11f9bfd0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9bfd6 jb 0x11f9becc */
  if (C.cf) goto L_11f9becc;
  /* 11f9bfdc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11f9bfe2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9bfe8 je 0x11f9bff4 */
  if (C.zf) goto L_11f9bff4;
  /* 11f9bfea mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 11f9bfef jmp 0x11f9c309 */
  goto L_11f9c309;
L_11f9bff4:;
  /* 11f9bff4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9bff7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9bffc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f9bfff jmp 0x11f9be71 */
  goto L_11f9be71;
L_11f9c004:;
  /* 11f9c004 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9c007 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f9c009 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c00f je 0x11f9c01b */
  if (C.zf) goto L_11f9c01b;
  /* 11f9c011 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 11f9c016 jmp 0x11f9c309 */
  goto L_11f9c309;
L_11f9c01b:;
  /* 11f9c01b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9c01e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 11f9c024 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11f9c02b jmp 0x11f9c036 */
  goto L_11f9c036;
L_11f9c02d:;
  /* 11f9c02d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9c030 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c033 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11f9c036:;
  /* 11f9c036 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c03a jge 0x11f9c26d */
  if ((C.sf==C.of)) goto L_11f9c26d;
  /* 11f9c040 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 11f9c04a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 11f9c050 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_11f9c056:;
  /* 11f9c056 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11f9c05c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f9c05f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 11f9c065 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11f9c06b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c071 je 0x11f9c19a */
  if (C.zf) goto L_11f9c19a;
  /* 11f9c077 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9c07a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11f9c080 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c087 je 0x11f9c19a */
  if (C.zf) goto L_11f9c19a;
  /* 11f9c08d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11f9c093 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c099 jb 0x11f9c0ae */
  if (C.cf) goto L_11f9c0ae;
  /* 11f9c09b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 11f9c0a1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c0a6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c0ac jb 0x11f9c0b8 */
  if (C.cf) goto L_11f9c0b8;
L_11f9c0ae:;
  /* 11f9c0ae mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 11f9c0b3 jmp 0x11f9c309 */
  goto L_11f9c309;
L_11f9c0b8:;
  /* 11f9c0b8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11f9c0be and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 11f9c0c4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 11f9c0ca mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 11f9c0d0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c0d3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11f9c0d6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9c0d9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c0de mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_11f9c0e4:;
  /* 11f9c0e4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9c0e7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c0ed je 0x11f9c10e */
  if (C.zf) goto L_11f9c10e;
  /* 11f9c0ef mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9c0f2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c0f8 jne 0x11f9c0fc */
  if (!C.zf) goto L_11f9c0fc;
  /* 11f9c0fa jmp 0x11f9c10e */
  goto L_11f9c10e;
L_11f9c0fc:;
  /* 11f9c0fc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9c0ff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f9c101 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11f9c104 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9c107 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c109 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11f9c10c jmp 0x11f9c0e4 */
  goto L_11f9c0e4;
L_11f9c10e:;
  /* 11f9c10e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9c111 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c117 jne 0x11f9c123 */
  if (!C.zf) goto L_11f9c123;
  /* 11f9c119 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 11f9c11e jmp 0x11f9c309 */
  goto L_11f9c309;
L_11f9c123:;
  /* 11f9c123 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11f9c129 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f9c12b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11f9c12e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9c131 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 11f9c137 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c13e jle 0x11f9c14a */
  if ((C.zf||C.sf!=C.of)) goto L_11f9c14a;
  /* 11f9c140 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_11f9c14a:;
  /* 11f9c14a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11f9c150 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c153 je 0x11f9c15f */
  if (C.zf) goto L_11f9c15f;
  /* 11f9c155 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 11f9c15a jmp 0x11f9c309 */
  goto L_11f9c309;
L_11f9c15f:;
  /* 11f9c15f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11f9c165 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f9c168 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c16e je 0x11f9c17a */
  if (C.zf) goto L_11f9c17a;
  /* 11f9c170 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 11f9c175 jmp 0x11f9c309 */
  goto L_11f9c309;
L_11f9c17a:;
  /* 11f9c17a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11f9c180 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 11f9c186 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11f9c18c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c18f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 11f9c195 jmp 0x11f9c056 */
  goto L_11f9c056;
L_11f9c19a:;
  /* 11f9c19a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c1a1 je 0x11f9c211 */
  if (C.zf) goto L_11f9c211;
  /* 11f9c1a3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c1a7 jge 0x11f9c1db */
  if ((C.sf==C.of)) goto L_11f9c1db;
  /* 11f9c1a9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f9c1ae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9c1b1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f9c1b3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 11f9c1b9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9c1bb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 11f9c1c1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f9c1c6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9c1c9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f9c1cb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 11f9c1d1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9c1d3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 11f9c1d9 jmp 0x11f9c211 */
  goto L_11f9c211;
L_11f9c1db:;
  /* 11f9c1db mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9c1de sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9c1e1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f9c1e6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f9c1e8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 11f9c1ee or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9c1f0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 11f9c1f6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9c1f9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9c1fc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f9c201 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f9c203 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 11f9c209 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9c20b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_11f9c211:;
  /* 11f9c211 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11f9c217 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f9c21a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c220 jne 0x11f9c234 */
  if (!C.zf) goto L_11f9c234;
  /* 11f9c222 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9c225 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11f9c22b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c232 je 0x11f9c23e */
  if (C.zf) goto L_11f9c23e;
L_11f9c234:;
  /* 11f9c234 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 11f9c239 jmp 0x11f9c309 */
  goto L_11f9c309;
L_11f9c23e:;
  /* 11f9c23e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 11f9c244 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11f9c247 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c24d je 0x11f9c259 */
  if (C.zf) goto L_11f9c259;
  /* 11f9c24f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 11f9c254 jmp 0x11f9c309 */
  goto L_11f9c309;
L_11f9c259:;
  /* 11f9c259 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 11f9c25f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c262 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 11f9c268 jmp 0x11f9c02d */
  goto L_11f9c02d;
L_11f9c26d:;
  /* 11f9c26d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9c270 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 11f9c276 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 11f9c27c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c280 jne 0x11f9c29a */
  if (!C.zf) goto L_11f9c29a;
  /* 11f9c282 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9c285 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 11f9c28b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 11f9c291 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c298 je 0x11f9c2a1 */
  if (C.zf) goto L_11f9c2a1;
L_11f9c29a:;
  /* 11f9c29a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 11f9c29f jmp 0x11f9c309 */
  goto L_11f9c309;
L_11f9c2a1:;
  /* 11f9c2a1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 11f9c2a7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c2ad mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 11f9c2b3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9c2b6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c2bb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11f9c2be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9c2c1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11f9c2c3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f9c2c6 jmp 0x11f9bdca */
  goto L_11f9bdca;
L_11f9c2cb:;
  /* 11f9c2cb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11f9c2d1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 11f9c2d7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c2d9 jne 0x11f9c2ec */
  if (!C.zf) goto L_11f9c2ec;
  /* 11f9c2db mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11f9c2e1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 11f9c2e7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c2ea je 0x11f9c2f3 */
  if (C.zf) goto L_11f9c2f3;
L_11f9c2ec:;
  /* 11f9c2ec mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 11f9c2f1 jmp 0x11f9c309 */
  goto L_11f9c309;
L_11f9c2f3:;
  /* 11f9c2f3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11f9c2f9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c2fc mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 11f9c302 jmp 0x11f9bd33 */
  goto L_11f9bd33;
L_11f9c307:;
  /* 11f9c307 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f9c309:;
  /* 11f9c309 mov esp, ebp */
  ESP = (EBP);
  /* 11f9c30b pop ebp */
  EBP = (pop32());
  /* 11f9c30c ret  */
  ESPCHK(0x11f9bcf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c310 @ 0x11f9c310 (250 bytes, 92 insns) */
void f_11f9c310(void) {
  FTRACE(0x11f9c310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9c310 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9c311 mov ebp, esp */
  EBP = (ESP);
  /* 11f9c313 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9c316 push ebx */
  push32((uint32_t)(EBX));
  /* 11f9c317 push esi */
  push32((uint32_t)(ESI));
  /* 11f9c318 push edi */
  push32((uint32_t)(EDI));
  /* 11f9c319 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11f9c31c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11f9c31f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11f9c322 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11f9c325:;
  /* 11f9c325 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c329 jne 0x11f9c349 */
  if (!C.zf) goto L_11f9c349;
  /* 11f9c32b push 0x11fbe034 */
  push32((uint32_t)(0x11fbe034u));
  /* 11f9c330 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9c332 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11f9c334 push 0x11fbe028 */
  push32((uint32_t)(0x11fbe028u));
  /* 11f9c339 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f9c33b call 0x11f954c0 */
  push32(0x11f9c340u); f_11f954c0();
  /* 11f9c340 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c343 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c346 jne 0x11f9c349 */
  if (!C.zf) goto L_11f9c349;
  /* 11f9c348 int3  */
  x86_unimpl("int3 @ 0x11f9c348");
L_11f9c349:;
  /* 11f9c349 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f9c34b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9c34d jne 0x11f9c325 */
  if (!C.zf) goto L_11f9c325;
L_11f9c34f:;
  /* 11f9c34f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c353 jne 0x11f9c373 */
  if (!C.zf) goto L_11f9c373;
  /* 11f9c355 push 0x11fbe018 */
  push32((uint32_t)(0x11fbe018u));
  /* 11f9c35a push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9c35c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11f9c35e push 0x11fbe028 */
  push32((uint32_t)(0x11fbe028u));
  /* 11f9c363 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f9c365 call 0x11f954c0 */
  push32(0x11f9c36au); f_11f954c0();
  /* 11f9c36a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c36d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c370 jne 0x11f9c373 */
  if (!C.zf) goto L_11f9c373;
  /* 11f9c372 int3  */
  x86_unimpl("int3 @ 0x11f9c372");
L_11f9c373:;
  /* 11f9c373 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9c375 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9c377 jne 0x11f9c34f */
  if (!C.zf) goto L_11f9c34f;
  /* 11f9c379 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9c37c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11f9c383 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9c386 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9c389 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11f9c38c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9c38f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9c392 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11f9c394 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9c397 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 11f9c39e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9c3a1 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9c3a2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9c3a5 push edx */
  push32((uint32_t)(EDX));
  /* 11f9c3a6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9c3a9 push eax */
  push32((uint32_t)(EAX));
  /* 11f9c3aa call 0x11f9d390 */
  push32(0x11f9c3afu); f_11f9d390();
  /* 11f9c3af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c3b2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11f9c3b5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9c3b8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f9c3bb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9c3be mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9c3c1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11f9c3c4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9c3c7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c3cb jl 0x11f9c3ef */
  if ((C.sf!=C.of)) goto L_11f9c3ef;
  /* 11f9c3cd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9c3d0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f9c3d2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11f9c3d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f9c3d7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f9c3dd mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11f9c3e0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9c3e3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f9c3e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c3e8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9c3eb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11f9c3ed jmp 0x11f9c400 */
  goto L_11f9c400;
L_11f9c3ef:;
  /* 11f9c3ef mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9c3f2 push edx */
  push32((uint32_t)(EDX));
  /* 11f9c3f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9c3f5 call 0x11f9d110 */
  push32(0x11f9c3fau); f_11f9d110();
  /* 11f9c3fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c3fd mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11f9c400:;
  /* 11f9c400 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f9c403 pop edi */
  EDI = (pop32());
  /* 11f9c404 pop esi */
  ESI = (pop32());
  /* 11f9c405 pop ebx */
  EBX = (pop32());
  /* 11f9c406 mov esp, ebp */
  ESP = (EBP);
  /* 11f9c408 pop ebp */
  EBP = (pop32());
  /* 11f9c409 ret  */
  ESPCHK(0x11f9c310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c410 @ 0x11f9c410 (183 bytes, 58 insns) */
void f_11f9c410(void) {
  FTRACE(0x11f9c410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9c410 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9c411 mov ebp, esp */
  EBP = (ESP);
  /* 11f9c413 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9c416 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9c419 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c41c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c421 ja 0x11f9c43a */
  if ((!C.cf&&!C.zf)) goto L_11f9c43a;
  /* 11f9c423 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9c426 mov edx, dword ptr [0x11fc0ca8] */
  EDX = (r32((uint32_t)(0x11fc0ca8)));
  /* 11f9c42c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9c42e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11f9c432 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11f9c435 jmp 0x11f9c4c3 */
  goto L_11f9c4c3;
L_11f9c43a:;
  /* 11f9c43a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9c43d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11f9c440 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f9c446 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f9c44c mov edx, dword ptr [0x11fc0ca8] */
  EDX = (r32((uint32_t)(0x11fc0ca8)));
  /* 11f9c452 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9c454 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11f9c458 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11f9c45d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9c45f je 0x11f9c483 */
  if (C.zf) goto L_11f9c483;
  /* 11f9c461 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9c464 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11f9c467 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f9c46d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11f9c470 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 11f9c473 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 11f9c476 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 11f9c47a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 11f9c481 jmp 0x11f9c494 */
  goto L_11f9c494;
L_11f9c483:;
  /* 11f9c483 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11f9c486 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 11f9c489 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 11f9c48d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11f9c494:;
  /* 11f9c494 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f9c496 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9c498 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9c49a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11f9c49d push ecx */
  push32((uint32_t)(ECX));
  /* 11f9c49e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9c4a1 push edx */
  push32((uint32_t)(EDX));
  /* 11f9c4a2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11f9c4a5 push eax */
  push32((uint32_t)(EAX));
  /* 11f9c4a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f9c4a8 call 0x11f9e630 */
  push32(0x11f9c4adu); f_11f9e630();
  /* 11f9c4ad add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c4b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9c4b2 jne 0x11f9c4b8 */
  if (!C.zf) goto L_11f9c4b8;
  /* 11f9c4b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9c4b6 jmp 0x11f9c4c3 */
  goto L_11f9c4c3;
L_11f9c4b8:;
  /* 11f9c4b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9c4bb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f9c4c0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_11f9c4c3:;
  /* 11f9c4c3 mov esp, ebp */
  ESP = (EBP);
  /* 11f9c4c5 pop ebp */
  EBP = (pop32());
  /* 11f9c4c6 ret  */
  ESPCHK(0x11f9c410u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c4d0 @ 0x11f9c4d0 (836 bytes, 238 insns) */
void f_11f9c4d0(void) {
  FTRACE(0x11f9c4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9c4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9c4d1 mov ebp, esp */
  EBP = (ESP);
  /* 11f9c4d3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9c4d6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11f9c4d8 call 0x11f99e00 */
  push32(0x11f9c4ddu); f_11f99e00();
  /* 11f9c4dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c4e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9c4e3 push eax */
  push32((uint32_t)(EAX));
  /* 11f9c4e4 call 0x11f9c820 */
  push32(0x11f9c4e9u); f_11f9c820();
  /* 11f9c4e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c4ec mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11f9c4ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9c4f2 cmp ecx, dword ptr [0x11fc3da4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11fc3da4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c4f8 jne 0x11f9c50b */
  if (!C.zf) goto L_11f9c50b;
  /* 11f9c4fa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11f9c4fc call 0x11f99ea0 */
  push32(0x11f9c501u); f_11f99ea0();
  /* 11f9c501 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c504 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9c506 jmp 0x11f9c810 */
  goto L_11f9c810;
L_11f9c50b:;
  /* 11f9c50b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c50f jne 0x11f9c52c */
  if (!C.zf) goto L_11f9c52c;
  /* 11f9c511 call 0x11f9c900 */
  push32(0x11f9c516u); f_11f9c900();
  /* 11f9c516 call 0x11f9c980 */
  push32(0x11f9c51bu); f_11f9c980();
  /* 11f9c51b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11f9c51d call 0x11f99ea0 */
  push32(0x11f9c522u); f_11f99ea0();
  /* 11f9c522 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c525 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9c527 jmp 0x11f9c810 */
  goto L_11f9c810;
L_11f9c52c:;
  /* 11f9c52c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f9c533 jmp 0x11f9c53e */
  goto L_11f9c53e;
L_11f9c535:;
  /* 11f9c535 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9c538 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c53b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f9c53e:;
  /* 11f9c53e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c542 jae 0x11f9c68f */
  if (!C.cf) goto L_11f9c68f;
  /* 11f9c548 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9c54b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9c54e mov ecx, dword ptr [eax + 0x11fc0ec8] */
  ECX = (r32((uint32_t)(EAX + 0x11fc0ec8)));
  /* 11f9c554 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c557 jne 0x11f9c68a */
  if (!C.zf) goto L_11f9c68a;
  /* 11f9c55d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11f9c564 jmp 0x11f9c56f */
  goto L_11f9c56f;
L_11f9c566:;
  /* 11f9c566 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9c569 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c56c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_11f9c56f:;
  /* 11f9c56f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c576 jae 0x11f9c584 */
  if (!C.cf) goto L_11f9c584;
  /* 11f9c578 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9c57b mov byte ptr [eax + 0x11fc3f40], 0 */
  w8((uint32_t)(EAX + 0x11fc3f40), (0x0u));
  /* 11f9c582 jmp 0x11f9c566 */
  goto L_11f9c566;
L_11f9c584:;
  /* 11f9c584 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11f9c58b jmp 0x11f9c596 */
  goto L_11f9c596;
L_11f9c58d:;
  /* 11f9c58d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9c590 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c593 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11f9c596:;
  /* 11f9c596 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c59a jae 0x11f9c617 */
  if (!C.cf) goto L_11f9c617;
  /* 11f9c59c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9c59f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9c5a2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9c5a5 lea ecx, [edx + eax*8 + 0x11fc0ed8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x11fc0ed8));
  /* 11f9c5ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f9c5af jmp 0x11f9c5ba */
  goto L_11f9c5ba;
L_11f9c5b1:;
  /* 11f9c5b1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9c5b4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c5b7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11f9c5ba:;
  /* 11f9c5ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9c5bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f9c5bf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11f9c5c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9c5c3 je 0x11f9c612 */
  if (C.zf) goto L_11f9c612;
  /* 11f9c5c5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9c5c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9c5ca mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11f9c5cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9c5cf je 0x11f9c612 */
  if (C.zf) goto L_11f9c612;
  /* 11f9c5d1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9c5d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f9c5d6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11f9c5d8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11f9c5db jmp 0x11f9c5e6 */
  goto L_11f9c5e6;
L_11f9c5dd:;
  /* 11f9c5dd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9c5e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c5e3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11f9c5e6:;
  /* 11f9c5e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9c5e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f9c5eb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11f9c5ee cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c5f1 ja 0x11f9c610 */
  if ((!C.cf&&!C.zf)) goto L_11f9c610;
  /* 11f9c5f3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9c5f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9c5f9 mov dl, byte ptr [eax + 0x11fc3f41] */
  DL = (r8((uint32_t)(EAX + 0x11fc3f41)));
  /* 11f9c5ff or dl, byte ptr [ecx + 0x11fc0ec0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x11fc0ec0))); DL = (_r); fl_logic(_r,8); }
  /* 11f9c605 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9c608 mov byte ptr [eax + 0x11fc3f41], dl */
  w8((uint32_t)(EAX + 0x11fc3f41), (DL));
  /* 11f9c60e jmp 0x11f9c5dd */
  goto L_11f9c5dd;
L_11f9c610:;
  /* 11f9c610 jmp 0x11f9c5b1 */
  goto L_11f9c5b1;
L_11f9c612:;
  /* 11f9c612 jmp 0x11f9c58d */
  goto L_11f9c58d;
L_11f9c617:;
  /* 11f9c617 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9c61a mov dword ptr [0x11fc3da4], ecx */
  w32((uint32_t)(0x11fc3da4), (ECX));
  /* 11f9c620 mov dword ptr [0x11fc3e2c], 1 */
  w32((uint32_t)(0x11fc3e2c), (0x1u));
  /* 11f9c62a mov edx, dword ptr [0x11fc3da4] */
  EDX = (r32((uint32_t)(0x11fc3da4)));
  /* 11f9c630 push edx */
  push32((uint32_t)(EDX));
  /* 11f9c631 call 0x11f9c880 */
  push32(0x11f9c636u); f_11f9c880();
  /* 11f9c636 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c639 mov dword ptr [0x11fc4044], eax */
  w32((uint32_t)(0x11fc4044), (EAX));
  /* 11f9c63e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11f9c645 jmp 0x11f9c650 */
  goto L_11f9c650;
L_11f9c647:;
  /* 11f9c647 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9c64a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c64d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11f9c650:;
  /* 11f9c650 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c654 jae 0x11f9c674 */
  if (!C.cf) goto L_11f9c674;
  /* 11f9c656 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9c659 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9c65c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9c65f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9c662 mov cx, word ptr [ecx + eax*2 + 0x11fc0ecc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x11fc0ecc)));
  /* 11f9c66a mov word ptr [edx*2 + 0x11fc3e20], cx */
  w16((uint32_t)(EDX*2 + 0x11fc3e20), (CX));
  /* 11f9c672 jmp 0x11f9c647 */
  goto L_11f9c647;
L_11f9c674:;
  /* 11f9c674 call 0x11f9c980 */
  push32(0x11f9c679u); f_11f9c980();
  /* 11f9c679 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11f9c67b call 0x11f99ea0 */
  push32(0x11f9c680u); f_11f99ea0();
  /* 11f9c680 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c683 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9c685 jmp 0x11f9c810 */
  goto L_11f9c810;
L_11f9c68a:;
  /* 11f9c68a jmp 0x11f9c535 */
  goto L_11f9c535;
L_11f9c68f:;
  /* 11f9c68f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 11f9c692 push edx */
  push32((uint32_t)(EDX));
  /* 11f9c693 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9c696 push eax */
  push32((uint32_t)(EAX));
  /* 11f9c697 call dword ptr [0x11fc5328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5328))), 0x11f9c69du);
  /* 11f9c69d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c6a0 jne 0x11f9c7e2 */
  if (!C.zf) goto L_11f9c7e2;
  /* 11f9c6a6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11f9c6ad jmp 0x11f9c6b8 */
  goto L_11f9c6b8;
L_11f9c6af:;
  /* 11f9c6af mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9c6b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c6b5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_11f9c6b8:;
  /* 11f9c6b8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c6bf jae 0x11f9c6cd */
  if (!C.cf) goto L_11f9c6cd;
  /* 11f9c6c1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9c6c4 mov byte ptr [edx + 0x11fc3f40], 0 */
  w8((uint32_t)(EDX + 0x11fc3f40), (0x0u));
  /* 11f9c6cb jmp 0x11f9c6af */
  goto L_11f9c6af;
L_11f9c6cd:;
  /* 11f9c6cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9c6d0 mov dword ptr [0x11fc3da4], eax */
  w32((uint32_t)(0x11fc3da4), (EAX));
  /* 11f9c6d5 mov dword ptr [0x11fc4044], 0 */
  w32((uint32_t)(0x11fc4044), (0x0u));
  /* 11f9c6df cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c6e3 jbe 0x11f9c79e */
  if ((C.cf||C.zf)) goto L_11f9c79e;
  /* 11f9c6e9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 11f9c6ec mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11f9c6ef jmp 0x11f9c6fa */
  goto L_11f9c6fa;
L_11f9c6f1:;
  /* 11f9c6f1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f9c6f4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c6f7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_11f9c6fa:;
  /* 11f9c6fa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f9c6fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f9c6ff mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11f9c701 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9c703 je 0x11f9c74c */
  if (C.zf) goto L_11f9c74c;
  /* 11f9c705 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f9c708 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9c70a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11f9c70d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9c70f je 0x11f9c74c */
  if (C.zf) goto L_11f9c74c;
  /* 11f9c711 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f9c714 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f9c716 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11f9c718 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11f9c71b jmp 0x11f9c726 */
  goto L_11f9c726;
L_11f9c71d:;
  /* 11f9c71d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9c720 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c723 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11f9c726:;
  /* 11f9c726 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f9c729 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f9c72b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11f9c72e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c731 ja 0x11f9c74a */
  if ((!C.cf&&!C.zf)) goto L_11f9c74a;
  /* 11f9c733 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9c736 mov cl, byte ptr [eax + 0x11fc3f41] */
  CL = (r8((uint32_t)(EAX + 0x11fc3f41)));
  /* 11f9c73c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 11f9c73f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9c742 mov byte ptr [edx + 0x11fc3f41], cl */
  w8((uint32_t)(EDX + 0x11fc3f41), (CL));
  /* 11f9c748 jmp 0x11f9c71d */
  goto L_11f9c71d;
L_11f9c74a:;
  /* 11f9c74a jmp 0x11f9c6f1 */
  goto L_11f9c6f1;
L_11f9c74c:;
  /* 11f9c74c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 11f9c753 jmp 0x11f9c75e */
  goto L_11f9c75e;
L_11f9c755:;
  /* 11f9c755 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9c758 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c75b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11f9c75e:;
  /* 11f9c75e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c765 jae 0x11f9c77e */
  if (!C.cf) goto L_11f9c77e;
  /* 11f9c767 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9c76a mov dl, byte ptr [ecx + 0x11fc3f41] */
  DL = (r8((uint32_t)(ECX + 0x11fc3f41)));
  /* 11f9c770 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11f9c773 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9c776 mov byte ptr [eax + 0x11fc3f41], dl */
  w8((uint32_t)(EAX + 0x11fc3f41), (DL));
  /* 11f9c77c jmp 0x11f9c755 */
  goto L_11f9c755;
L_11f9c77e:;
  /* 11f9c77e mov ecx, dword ptr [0x11fc3da4] */
  ECX = (r32((uint32_t)(0x11fc3da4)));
  /* 11f9c784 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9c785 call 0x11f9c880 */
  push32(0x11f9c78au); f_11f9c880();
  /* 11f9c78a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c78d mov dword ptr [0x11fc4044], eax */
  w32((uint32_t)(0x11fc4044), (EAX));
  /* 11f9c792 mov dword ptr [0x11fc3e2c], 1 */
  w32((uint32_t)(0x11fc3e2c), (0x1u));
  /* 11f9c79c jmp 0x11f9c7a8 */
  goto L_11f9c7a8;
L_11f9c79e:;
  /* 11f9c79e mov dword ptr [0x11fc3e2c], 0 */
  w32((uint32_t)(0x11fc3e2c), (0x0u));
L_11f9c7a8:;
  /* 11f9c7a8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11f9c7af jmp 0x11f9c7ba */
  goto L_11f9c7ba;
L_11f9c7b1:;
  /* 11f9c7b1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9c7b4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c7b7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11f9c7ba:;
  /* 11f9c7ba cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c7be jae 0x11f9c7cf */
  if (!C.cf) goto L_11f9c7cf;
  /* 11f9c7c0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9c7c3 mov word ptr [eax*2 + 0x11fc3e20], 0 */
  w16((uint32_t)(EAX*2 + 0x11fc3e20), (0x0u));
  /* 11f9c7cd jmp 0x11f9c7b1 */
  goto L_11f9c7b1;
L_11f9c7cf:;
  /* 11f9c7cf call 0x11f9c980 */
  push32(0x11f9c7d4u); f_11f9c980();
  /* 11f9c7d4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11f9c7d6 call 0x11f99ea0 */
  push32(0x11f9c7dbu); f_11f99ea0();
  /* 11f9c7db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c7de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9c7e0 jmp 0x11f9c810 */
  goto L_11f9c810;
L_11f9c7e2:;
  /* 11f9c7e2 cmp dword ptr [0x11fc28b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc28b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c7e9 je 0x11f9c803 */
  if (C.zf) goto L_11f9c803;
  /* 11f9c7eb call 0x11f9c900 */
  push32(0x11f9c7f0u); f_11f9c900();
  /* 11f9c7f0 call 0x11f9c980 */
  push32(0x11f9c7f5u); f_11f9c980();
  /* 11f9c7f5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11f9c7f7 call 0x11f99ea0 */
  push32(0x11f9c7fcu); f_11f99ea0();
  /* 11f9c7fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c7ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9c801 jmp 0x11f9c810 */
  goto L_11f9c810;
L_11f9c803:;
  /* 11f9c803 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11f9c805 call 0x11f99ea0 */
  push32(0x11f9c80au); f_11f99ea0();
  /* 11f9c80a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c80d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11f9c810:;
  /* 11f9c810 mov esp, ebp */
  ESP = (EBP);
  /* 11f9c812 pop ebp */
  EBP = (pop32());
  /* 11f9c813 ret  */
  ESPCHK(0x11f9c4d0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x11f9c820 (89 bytes, 21 insns) */
void f_11f9c820(void) {
  FTRACE(0x11f9c820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9c820 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9c821 mov ebp, esp */
  EBP = (ESP);
  /* 11f9c823 mov dword ptr [0x11fc28b0], 0 */
  w32((uint32_t)(0x11fc28b0), (0x0u));
  /* 11f9c82d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c831 jne 0x11f9c845 */
  if (!C.zf) goto L_11f9c845;
  /* 11f9c833 mov dword ptr [0x11fc28b0], 1 */
  w32((uint32_t)(0x11fc28b0), (0x1u));
  /* 11f9c83d call dword ptr [0x11fc5320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5320))), 0x11f9c843u);
  /* 11f9c843 jmp 0x11f9c877 */
  goto L_11f9c877;
L_11f9c845:;
  /* 11f9c845 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c849 jne 0x11f9c85d */
  if (!C.zf) goto L_11f9c85d;
  /* 11f9c84b mov dword ptr [0x11fc28b0], 1 */
  w32((uint32_t)(0x11fc28b0), (0x1u));
  /* 11f9c855 call dword ptr [0x11fc5330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5330))), 0x11f9c85bu);
  /* 11f9c85b jmp 0x11f9c877 */
  goto L_11f9c877;
L_11f9c85d:;
  /* 11f9c85d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c861 jne 0x11f9c874 */
  if (!C.zf) goto L_11f9c874;
  /* 11f9c863 mov dword ptr [0x11fc28b0], 1 */
  w32((uint32_t)(0x11fc28b0), (0x1u));
  /* 11f9c86d mov eax, dword ptr [0x11fc28d0] */
  EAX = (r32((uint32_t)(0x11fc28d0)));
  /* 11f9c872 jmp 0x11f9c877 */
  goto L_11f9c877;
L_11f9c874:;
  /* 11f9c874 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11f9c877:;
  /* 11f9c877 pop ebp */
  EBP = (pop32());
  /* 11f9c878 ret  */
  ESPCHK(0x11f9c820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c880 @ 0x11f9c880 (80 bytes, 26 insns) [1 switch table(s)] */
void f_11f9c880(void) {
  FTRACE(0x11f9c880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9c880 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9c881 mov ebp, esp */
  EBP = (ESP);
  /* 11f9c883 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9c884 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9c887 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f9c88a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9c88d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9c893 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f9c896 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c89a ja 0x11f9c8ca */
  if ((!C.cf&&!C.zf)) goto L_11f9c8ca;
  /* 11f9c89c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9c89f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f9c8a1 mov dl, byte ptr [eax + 0x11f9c8e4] */
  DL = (r8((uint32_t)(EAX + 0x11f9c8e4)));
  /* 11f9c8a7 jmp dword ptr [edx*4 + 0x11f9c8d0] */
  switch (EDX) {
    case 0: goto L_11f9c8ae;
    case 1: goto L_11f9c8b5;
    case 2: goto L_11f9c8bc;
    case 3: goto L_11f9c8c3;
    case 4: goto L_11f9c8ca;
    default: x86_unimpl("switch@0x11f9c8a7 out of table"); return;
  }
L_11f9c8ae:;
  /* 11f9c8ae mov eax, 0x411 */
  EAX = (0x411u);
  /* 11f9c8b3 jmp 0x11f9c8cc */
  goto L_11f9c8cc;
L_11f9c8b5:;
  /* 11f9c8b5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11f9c8ba jmp 0x11f9c8cc */
  goto L_11f9c8cc;
L_11f9c8bc:;
  /* 11f9c8bc mov eax, 0x412 */
  EAX = (0x412u);
  /* 11f9c8c1 jmp 0x11f9c8cc */
  goto L_11f9c8cc;
L_11f9c8c3:;
  /* 11f9c8c3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 11f9c8c8 jmp 0x11f9c8cc */
  goto L_11f9c8cc;
L_11f9c8ca:;
  /* 11f9c8ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f9c8cc:;
  /* 11f9c8cc mov esp, ebp */
  ESP = (EBP);
  /* 11f9c8ce pop ebp */
  EBP = (pop32());
  /* 11f9c8cf ret  */
  ESPCHK(0x11f9c880u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x11f9c900 (116 bytes, 29 insns) */
void f_11f9c900(void) {
  FTRACE(0x11f9c900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9c900 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9c901 mov ebp, esp */
  EBP = (ESP);
  /* 11f9c903 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9c904 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f9c90b jmp 0x11f9c916 */
  goto L_11f9c916;
L_11f9c90d:;
  /* 11f9c90d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9c910 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c913 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f9c916:;
  /* 11f9c916 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c91d jge 0x11f9c92b */
  if ((C.sf==C.of)) goto L_11f9c92b;
  /* 11f9c91f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9c922 mov byte ptr [ecx + 0x11fc3f40], 0 */
  w8((uint32_t)(ECX + 0x11fc3f40), (0x0u));
  /* 11f9c929 jmp 0x11f9c90d */
  goto L_11f9c90d;
L_11f9c92b:;
  /* 11f9c92b mov dword ptr [0x11fc3da4], 0 */
  w32((uint32_t)(0x11fc3da4), (0x0u));
  /* 11f9c935 mov dword ptr [0x11fc3e2c], 0 */
  w32((uint32_t)(0x11fc3e2c), (0x0u));
  /* 11f9c93f mov dword ptr [0x11fc4044], 0 */
  w32((uint32_t)(0x11fc4044), (0x0u));
  /* 11f9c949 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f9c950 jmp 0x11f9c95b */
  goto L_11f9c95b;
L_11f9c952:;
  /* 11f9c952 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9c955 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c958 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f9c95b:;
  /* 11f9c95b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c95f jge 0x11f9c970 */
  if ((C.sf==C.of)) goto L_11f9c970;
  /* 11f9c961 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9c964 mov word ptr [eax*2 + 0x11fc3e20], 0 */
  w16((uint32_t)(EAX*2 + 0x11fc3e20), (0x0u));
  /* 11f9c96e jmp 0x11f9c952 */
  goto L_11f9c952;
L_11f9c970:;
  /* 11f9c970 mov esp, ebp */
  ESP = (EBP);
  /* 11f9c972 pop ebp */
  EBP = (pop32());
  /* 11f9c973 ret  */
  ESPCHK(0x11f9c900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c980 @ 0x11f9c980 (770 bytes, 175 insns) */
void f_11f9c980(void) {
  FTRACE(0x11f9c980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9c980 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9c981 mov ebp, esp */
  EBP = (ESP);
  /* 11f9c983 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9c989 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 11f9c98f push eax */
  push32((uint32_t)(EAX));
  /* 11f9c990 mov ecx, dword ptr [0x11fc3da4] */
  ECX = (r32((uint32_t)(0x11fc3da4)));
  /* 11f9c996 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9c997 call dword ptr [0x11fc5328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5328))), 0x11f9c99du);
  /* 11f9c99d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c9a0 jne 0x11f9cbb9 */
  if (!C.zf) goto L_11f9cbb9;
  /* 11f9c9a6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11f9c9b0 jmp 0x11f9c9c1 */
  goto L_11f9c9c1;
L_11f9c9b2:;
  /* 11f9c9b2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f9c9b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c9bb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_11f9c9c1:;
  /* 11f9c9c1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9c9cb jae 0x11f9c9e2 */
  if (!C.cf) goto L_11f9c9e2;
  /* 11f9c9cd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f9c9d3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 11f9c9d9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 11f9c9e0 jmp 0x11f9c9b2 */
  goto L_11f9c9b2;
L_11f9c9e2:;
  /* 11f9c9e2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 11f9c9e9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 11f9c9ef mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f9c9f2 jmp 0x11f9c9fd */
  goto L_11f9c9fd;
L_11f9c9f4:;
  /* 11f9c9f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9c9f7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9c9fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f9c9fd:;
  /* 11f9c9fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9ca00 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f9ca02 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11f9ca04 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9ca06 je 0x11f9ca48 */
  if (C.zf) goto L_11f9ca48;
  /* 11f9ca08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9ca0b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f9ca0d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11f9ca0f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 11f9ca15 jmp 0x11f9ca26 */
  goto L_11f9ca26;
L_11f9ca17:;
  /* 11f9ca17 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f9ca1d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ca20 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_11f9ca26:;
  /* 11f9ca26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9ca29 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f9ca2b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11f9ca2e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ca34 ja 0x11f9ca46 */
  if ((!C.cf&&!C.zf)) goto L_11f9ca46;
  /* 11f9ca36 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f9ca3c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 11f9ca44 jmp 0x11f9ca17 */
  goto L_11f9ca17;
L_11f9ca46:;
  /* 11f9ca46 jmp 0x11f9c9f4 */
  goto L_11f9c9f4;
L_11f9ca48:;
  /* 11f9ca48 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9ca4a mov eax, dword ptr [0x11fc4044] */
  EAX = (r32((uint32_t)(0x11fc4044)));
  /* 11f9ca4f push eax */
  push32((uint32_t)(EAX));
  /* 11f9ca50 mov ecx, dword ptr [0x11fc3da4] */
  ECX = (r32((uint32_t)(0x11fc3da4)));
  /* 11f9ca56 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9ca57 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 11f9ca5d push edx */
  push32((uint32_t)(EDX));
  /* 11f9ca5e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11f9ca63 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 11f9ca69 push eax */
  push32((uint32_t)(EAX));
  /* 11f9ca6a push 1 */
  push32((uint32_t)(0x1u));
  /* 11f9ca6c call 0x11f9e630 */
  push32(0x11f9ca71u); f_11f9e630();
  /* 11f9ca71 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ca74 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9ca76 mov ecx, dword ptr [0x11fc3da4] */
  ECX = (r32((uint32_t)(0x11fc3da4)));
  /* 11f9ca7c push ecx */
  push32((uint32_t)(ECX));
  /* 11f9ca7d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11f9ca82 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 11f9ca88 push edx */
  push32((uint32_t)(EDX));
  /* 11f9ca89 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11f9ca8e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 11f9ca94 push eax */
  push32((uint32_t)(EAX));
  /* 11f9ca95 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11f9ca9a mov ecx, dword ptr [0x11fc4044] */
  ECX = (r32((uint32_t)(0x11fc4044)));
  /* 11f9caa0 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9caa1 call 0x11f9e7f0 */
  push32(0x11f9caa6u); f_11f9e7f0();
  /* 11f9caa6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9caa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9caab mov edx, dword ptr [0x11fc3da4] */
  EDX = (r32((uint32_t)(0x11fc3da4)));
  /* 11f9cab1 push edx */
  push32((uint32_t)(EDX));
  /* 11f9cab2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11f9cab7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 11f9cabd push eax */
  push32((uint32_t)(EAX));
  /* 11f9cabe push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11f9cac3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 11f9cac9 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9caca push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11f9cacf mov edx, dword ptr [0x11fc4044] */
  EDX = (r32((uint32_t)(0x11fc4044)));
  /* 11f9cad5 push edx */
  push32((uint32_t)(EDX));
  /* 11f9cad6 call 0x11f9e7f0 */
  push32(0x11f9cadbu); f_11f9e7f0();
  /* 11f9cadb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9cade mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11f9cae8 jmp 0x11f9caf9 */
  goto L_11f9caf9;
L_11f9caea:;
  /* 11f9caea mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f9caf0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9caf3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_11f9caf9:;
  /* 11f9caf9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9cb03 jae 0x11f9cbb4 */
  if (!C.cf) goto L_11f9cbb4;
  /* 11f9cb09 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f9cb0f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f9cb11 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 11f9cb19 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9cb1c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9cb1e je 0x11f9cb56 */
  if (C.zf) goto L_11f9cb56;
  /* 11f9cb20 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f9cb26 mov cl, byte ptr [eax + 0x11fc3f41] */
  CL = (r8((uint32_t)(EAX + 0x11fc3f41)));
  /* 11f9cb2c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 11f9cb2f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f9cb35 mov byte ptr [edx + 0x11fc3f41], cl */
  w8((uint32_t)(EDX + 0x11fc3f41), (CL));
  /* 11f9cb3b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f9cb41 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f9cb47 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 11f9cb4e mov byte ptr [eax + 0x11fc3e40], dl */
  w8((uint32_t)(EAX + 0x11fc3e40), (DL));
  /* 11f9cb54 jmp 0x11f9cbaf */
  goto L_11f9cbaf;
L_11f9cb56:;
  /* 11f9cb56 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f9cb5c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f9cb5e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 11f9cb66 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11f9cb69 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9cb6b je 0x11f9cba2 */
  if (C.zf) goto L_11f9cba2;
  /* 11f9cb6d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f9cb73 mov al, byte ptr [edx + 0x11fc3f41] */
  AL = (r8((uint32_t)(EDX + 0x11fc3f41)));
  /* 11f9cb79 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11f9cb7b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f9cb81 mov byte ptr [ecx + 0x11fc3f41], al */
  w8((uint32_t)(ECX + 0x11fc3f41), (AL));
  /* 11f9cb87 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f9cb8d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f9cb93 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 11f9cb9a mov byte ptr [edx + 0x11fc3e40], cl */
  w8((uint32_t)(EDX + 0x11fc3e40), (CL));
  /* 11f9cba0 jmp 0x11f9cbaf */
  goto L_11f9cbaf;
L_11f9cba2:;
  /* 11f9cba2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f9cba8 mov byte ptr [edx + 0x11fc3e40], 0 */
  w8((uint32_t)(EDX + 0x11fc3e40), (0x0u));
L_11f9cbaf:;
  /* 11f9cbaf jmp 0x11f9caea */
  goto L_11f9caea;
L_11f9cbb4:;
  /* 11f9cbb4 jmp 0x11f9cc7e */
  goto L_11f9cc7e;
L_11f9cbb9:;
  /* 11f9cbb9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11f9cbc3 jmp 0x11f9cbd4 */
  goto L_11f9cbd4;
L_11f9cbc5:;
  /* 11f9cbc5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f9cbcb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9cbce mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_11f9cbd4:;
  /* 11f9cbd4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9cbde jae 0x11f9cc7e */
  if (!C.cf) goto L_11f9cc7e;
  /* 11f9cbe4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9cbeb jb 0x11f9cc28 */
  if (C.cf) goto L_11f9cc28;
  /* 11f9cbed cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9cbf4 ja 0x11f9cc28 */
  if ((!C.cf&&!C.zf)) goto L_11f9cc28;
  /* 11f9cbf6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f9cbfc mov dl, byte ptr [ecx + 0x11fc3f41] */
  DL = (r8((uint32_t)(ECX + 0x11fc3f41)));
  /* 11f9cc02 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11f9cc05 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f9cc0b mov byte ptr [eax + 0x11fc3f41], dl */
  w8((uint32_t)(EAX + 0x11fc3f41), (DL));
  /* 11f9cc11 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f9cc17 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9cc1a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f9cc20 mov byte ptr [edx + 0x11fc3e40], cl */
  w8((uint32_t)(EDX + 0x11fc3e40), (CL));
  /* 11f9cc26 jmp 0x11f9cc79 */
  goto L_11f9cc79;
L_11f9cc28:;
  /* 11f9cc28 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9cc2f jb 0x11f9cc6c */
  if (C.cf) goto L_11f9cc6c;
  /* 11f9cc31 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9cc38 ja 0x11f9cc6c */
  if ((!C.cf&&!C.zf)) goto L_11f9cc6c;
  /* 11f9cc3a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f9cc40 mov cl, byte ptr [eax + 0x11fc3f41] */
  CL = (r8((uint32_t)(EAX + 0x11fc3f41)));
  /* 11f9cc46 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11f9cc49 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f9cc4f mov byte ptr [edx + 0x11fc3f41], cl */
  w8((uint32_t)(EDX + 0x11fc3f41), (CL));
  /* 11f9cc55 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f9cc5b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9cc5e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f9cc64 mov byte ptr [ecx + 0x11fc3e40], al */
  w8((uint32_t)(ECX + 0x11fc3e40), (AL));
  /* 11f9cc6a jmp 0x11f9cc79 */
  goto L_11f9cc79;
L_11f9cc6c:;
  /* 11f9cc6c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f9cc72 mov byte ptr [edx + 0x11fc3e40], 0 */
  w8((uint32_t)(EDX + 0x11fc3e40), (0x0u));
L_11f9cc79:;
  /* 11f9cc79 jmp 0x11f9cbc5 */
  goto L_11f9cbc5;
L_11f9cc7e:;
  /* 11f9cc7e mov esp, ebp */
  ESP = (EBP);
  /* 11f9cc80 pop ebp */
  EBP = (pop32());
  /* 11f9cc81 ret  */
  ESPCHK(0x11f9c980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc90 @ 0x11f9cc90 (23 bytes, 9 insns) */
void f_11f9cc90(void) {
  FTRACE(0x11f9cc90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9cc90 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9cc91 mov ebp, esp */
  EBP = (ESP);
  /* 11f9cc93 cmp dword ptr [0x11fc3e2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc3e2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9cc9a je 0x11f9cca3 */
  if (C.zf) goto L_11f9cca3;
  /* 11f9cc9c mov eax, dword ptr [0x11fc3da4] */
  EAX = (r32((uint32_t)(0x11fc3da4)));
  /* 11f9cca1 jmp 0x11f9cca5 */
  goto L_11f9cca5;
L_11f9cca3:;
  /* 11f9cca3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f9cca5:;
  /* 11f9cca5 pop ebp */
  EBP = (pop32());
  /* 11f9cca6 ret  */
  ESPCHK(0x11f9cc90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ccb0 @ 0x11f9ccb0 (34 bytes, 10 insns) */
void f_11f9ccb0(void) {
  FTRACE(0x11f9ccb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9ccb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9ccb1 mov ebp, esp */
  EBP = (ESP);
  /* 11f9ccb3 cmp dword ptr [0x11fc41f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc41f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ccba jne 0x11f9ccd0 */
  if (!C.zf) goto L_11f9ccd0;
  /* 11f9ccbc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11f9ccbe call 0x11f9c4d0 */
  push32(0x11f9ccc3u); f_11f9c4d0();
  /* 11f9ccc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ccc6 mov dword ptr [0x11fc41f0], 1 */
  w32((uint32_t)(0x11fc41f0), (0x1u));
L_11f9ccd0:;
  /* 11f9ccd0 pop ebp */
  EBP = (pop32());
  /* 11f9ccd1 ret  */
  ESPCHK(0x11f9ccb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cce0 @ 0x11f9cce0 (664 bytes, 261 insns) [15 switch table(s)] */
void f_11f9cce0(void) {
  FTRACE(0x11f9cce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9cce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9cce1 mov ebp, esp */
  EBP = (ESP);
  /* 11f9cce3 push edi */
  push32((uint32_t)(EDI));
  /* 11f9cce4 push esi */
  push32((uint32_t)(ESI));
  /* 11f9cce5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9cce8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f9cceb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9ccee mov eax, ecx */
  EAX = (ECX);
  /* 11f9ccf0 mov edx, ecx */
  EDX = (ECX);
  /* 11f9ccf2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ccf4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ccf6 jbe 0x11f9cd00 */
  if ((C.cf||C.zf)) goto L_11f9cd00;
  /* 11f9ccf8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ccfa jb 0x11f9ce78 */
  if (C.cf) goto L_11f9ce78;
L_11f9cd00:;
  /* 11f9cd00 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11f9cd06 jne 0x11f9cd1c */
  if (!C.zf) goto L_11f9cd1c;
  /* 11f9cd08 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f9cd0b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9cd0e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9cd11 jb 0x11f9cd3c */
  if (C.cf) goto L_11f9cd3c;
  /* 11f9cd13 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f9cd15 jmp dword ptr [edx*4 + 0x11f9ce28] */
  switch (EDX) {
    case 0: goto L_11f9ce38;
    case 1: goto L_11f9ce40;
    case 2: goto L_11f9ce4c;
    case 3: goto L_11f9ce60;
    default: x86_unimpl("switch@0x11f9cd15 out of table"); return;
  }
L_11f9cd1c:;
  /* 11f9cd1c mov eax, edi */
  EAX = (EDI);
  /* 11f9cd1e mov edx, 3 */
  EDX = (0x3u);
  /* 11f9cd23 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9cd26 jb 0x11f9cd34 */
  if (C.cf) goto L_11f9cd34;
  /* 11f9cd28 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11f9cd2b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9cd2d jmp dword ptr [eax*4 + 0x11f9cd40] */
  switch (EAX) {
    case 1: goto L_11f9cd50;
    case 2: goto L_11f9cd7c;
    case 3: goto L_11f9cda0;
    default: x86_unimpl("switch@0x11f9cd2d out of table"); return;
  }
L_11f9cd34:;
  /* 11f9cd34 jmp dword ptr [ecx*4 + 0x11f9ce38] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11f9ce38)))); return;
  /* 11f9cd3b nop  */
  /* nop */
L_11f9cd3c:;
  /* 11f9cd3c jmp dword ptr [ecx*4 + 0x11f9cdbc] */
  switch (ECX) {
    case 0: goto L_11f9ce1f;
    case 1: goto L_11f9ce0c;
    case 2: goto L_11f9ce04;
    case 3: goto L_11f9cdfc;
    case 4: goto L_11f9cdf4;
    case 5: goto L_11f9cdec;
    case 6: goto L_11f9cde4;
    case 7: goto L_11f9cddc;
    default: x86_unimpl("switch@0x11f9cd3c out of table"); return;
  }
  /* 11f9cd43 nop  */
  /* nop */
L_11f9cd50:;
  /* 11f9cd50 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f9cd52 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f9cd54 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f9cd56 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f9cd59 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f9cd5c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f9cd5f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f9cd62 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f9cd65 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9cd68 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9cd6b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9cd6e jb 0x11f9cd3c */
  if (C.cf) goto L_11f9cd3c;
  /* 11f9cd70 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f9cd72 jmp dword ptr [edx*4 + 0x11f9ce28] */
  switch (EDX) {
    case 0: goto L_11f9ce38;
    case 1: goto L_11f9ce40;
    case 2: goto L_11f9ce4c;
    case 3: goto L_11f9ce60;
    default: x86_unimpl("switch@0x11f9cd72 out of table"); return;
  }
  /* 11f9cd79 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f9cd7c:;
  /* 11f9cd7c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f9cd7e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f9cd80 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f9cd82 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f9cd85 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f9cd88 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f9cd8b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9cd8e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9cd91 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9cd94 jb 0x11f9cd3c */
  if (C.cf) goto L_11f9cd3c;
  /* 11f9cd96 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f9cd98 jmp dword ptr [edx*4 + 0x11f9ce28] */
  switch (EDX) {
    case 0: goto L_11f9ce38;
    case 1: goto L_11f9ce40;
    case 2: goto L_11f9ce4c;
    case 3: goto L_11f9ce60;
    default: x86_unimpl("switch@0x11f9cd98 out of table"); return;
  }
  /* 11f9cd9f nop  */
  /* nop */
L_11f9cda0:;
  /* 11f9cda0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f9cda2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f9cda4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f9cda6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f9cda7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f9cdaa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f9cdab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9cdae jb 0x11f9cd3c */
  if (C.cf) goto L_11f9cd3c;
  /* 11f9cdb0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f9cdb2 jmp dword ptr [edx*4 + 0x11f9ce28] */
  switch (EDX) {
    case 0: goto L_11f9ce38;
    case 1: goto L_11f9ce40;
    case 2: goto L_11f9ce4c;
    case 3: goto L_11f9ce60;
    default: x86_unimpl("switch@0x11f9cdb2 out of table"); return;
  }
  /* 11f9cdb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f9cddc:;
  /* 11f9cddc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11f9cde0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11f9cde4:;
  /* 11f9cde4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11f9cde8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11f9cdec:;
  /* 11f9cdec mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11f9cdf0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11f9cdf4:;
  /* 11f9cdf4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11f9cdf8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11f9cdfc:;
  /* 11f9cdfc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11f9ce00 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11f9ce04:;
  /* 11f9ce04 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11f9ce08 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11f9ce0c:;
  /* 11f9ce0c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11f9ce10 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11f9ce14 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11f9ce1b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ce1d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11f9ce1f:;
  /* 11f9ce1f jmp dword ptr [edx*4 + 0x11f9ce28] */
  switch (EDX) {
    case 0: goto L_11f9ce38;
    case 1: goto L_11f9ce40;
    case 2: goto L_11f9ce4c;
    case 3: goto L_11f9ce60;
    default: x86_unimpl("switch@0x11f9ce1f out of table"); return;
  }
  /* 11f9ce26 mov edi, edi */
  EDI = (EDI);
L_11f9ce38:;
  /* 11f9ce38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9ce3b pop esi */
  ESI = (pop32());
  /* 11f9ce3c pop edi */
  EDI = (pop32());
  /* 11f9ce3d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f9ce3e ret  */
  ESPCHK(0x11f9cce0u, _esp0);
  ESP += 4; return;
  /* 11f9ce3f nop  */
  /* nop */
L_11f9ce40:;
  /* 11f9ce40 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f9ce42 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f9ce44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9ce47 pop esi */
  ESI = (pop32());
  /* 11f9ce48 pop edi */
  EDI = (pop32());
  /* 11f9ce49 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f9ce4a ret  */
  ESPCHK(0x11f9cce0u, _esp0);
  ESP += 4; return;
  /* 11f9ce4b nop  */
  /* nop */
L_11f9ce4c:;
  /* 11f9ce4c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f9ce4e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f9ce50 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f9ce53 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f9ce56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9ce59 pop esi */
  ESI = (pop32());
  /* 11f9ce5a pop edi */
  EDI = (pop32());
  /* 11f9ce5b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f9ce5c ret  */
  ESPCHK(0x11f9cce0u, _esp0);
  ESP += 4; return;
  /* 11f9ce5d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f9ce60:;
  /* 11f9ce60 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f9ce62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f9ce64 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f9ce67 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f9ce6a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f9ce6d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f9ce70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9ce73 pop esi */
  ESI = (pop32());
  /* 11f9ce74 pop edi */
  EDI = (pop32());
  /* 11f9ce75 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f9ce76 ret  */
  ESPCHK(0x11f9cce0u, _esp0);
  ESP += 4; return;
  /* 11f9ce77 nop  */
  /* nop */
L_11f9ce78:;
  /* 11f9ce78 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11f9ce7c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11f9ce80 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11f9ce86 jne 0x11f9ceac */
  if (!C.zf) goto L_11f9ceac;
  /* 11f9ce88 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f9ce8b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9ce8e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ce91 jb 0x11f9cea0 */
  if (C.cf) goto L_11f9cea0;
  /* 11f9ce93 std  */
  C.df=1;
  /* 11f9ce94 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f9ce96 cld  */
  C.df=0;
  /* 11f9ce97 jmp dword ptr [edx*4 + 0x11f9cfc0] */
  switch (EDX) {
    case 0: goto L_11f9cfd0;
    case 1: goto L_11f9cfd8;
    case 2: goto L_11f9cfe8;
    case 3: goto L_11f9cffc;
    default: x86_unimpl("switch@0x11f9ce97 out of table"); return;
  }
  /* 11f9ce9e mov edi, edi */
  EDI = (EDI);
L_11f9cea0:;
  /* 11f9cea0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f9cea2 jmp dword ptr [ecx*4 + 0x11f9cf70] */
  switch (ECX) {
    case 0: goto L_11f9cfb7;
    default: x86_unimpl("switch@0x11f9cea2 out of table"); return;
  }
  /* 11f9cea9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f9ceac:;
  /* 11f9ceac mov eax, edi */
  EAX = (EDI);
  /* 11f9ceae mov edx, 3 */
  EDX = (0x3u);
  /* 11f9ceb3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ceb6 jb 0x11f9cec4 */
  if (C.cf) goto L_11f9cec4;
  /* 11f9ceb8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11f9cebb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9cebd jmp dword ptr [eax*4 + 0x11f9cec8] */
  switch (EAX) {
    case 1: goto L_11f9ced8;
    case 2: goto L_11f9cef8;
    case 3: goto L_11f9cf20;
    default: x86_unimpl("switch@0x11f9cebd out of table"); return;
  }
L_11f9cec4:;
  /* 11f9cec4 jmp dword ptr [ecx*4 + 0x11f9cfc0] */
  switch (ECX) {
    case 0: goto L_11f9cfd0;
    case 1: goto L_11f9cfd8;
    case 2: goto L_11f9cfe8;
    case 3: goto L_11f9cffc;
    default: x86_unimpl("switch@0x11f9cec4 out of table"); return;
  }
  /* 11f9cecb nop  */
  /* nop */
L_11f9ced8:;
  /* 11f9ced8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f9cedb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f9cedd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f9cee0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11f9cee1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f9cee4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11f9cee5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9cee8 jb 0x11f9cea0 */
  if (C.cf) goto L_11f9cea0;
  /* 11f9ceea std  */
  C.df=1;
  /* 11f9ceeb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f9ceed cld  */
  C.df=0;
  /* 11f9ceee jmp dword ptr [edx*4 + 0x11f9cfc0] */
  switch (EDX) {
    case 0: goto L_11f9cfd0;
    case 1: goto L_11f9cfd8;
    case 2: goto L_11f9cfe8;
    case 3: goto L_11f9cffc;
    default: x86_unimpl("switch@0x11f9ceee out of table"); return;
  }
  /* 11f9cef5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f9cef8:;
  /* 11f9cef8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f9cefb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f9cefd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f9cf00 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f9cf03 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f9cf06 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f9cf09 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9cf0c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9cf0f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9cf12 jb 0x11f9cea0 */
  if (C.cf) goto L_11f9cea0;
  /* 11f9cf14 std  */
  C.df=1;
  /* 11f9cf15 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f9cf17 cld  */
  C.df=0;
  /* 11f9cf18 jmp dword ptr [edx*4 + 0x11f9cfc0] */
  switch (EDX) {
    case 0: goto L_11f9cfd0;
    case 1: goto L_11f9cfd8;
    case 2: goto L_11f9cfe8;
    case 3: goto L_11f9cffc;
    default: x86_unimpl("switch@0x11f9cf18 out of table"); return;
  }
  /* 11f9cf1f nop  */
  /* nop */
L_11f9cf20:;
  /* 11f9cf20 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f9cf23 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
L_11f9cf25:;
  /* 11f9cf25 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f9cf28 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f9cf2b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f9cf2e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f9cf31 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f9cf34 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f9cf37 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9cf3a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9cf3d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9cf40 jb 0x11f9cea0 */
  if (C.cf) goto L_11f9cea0;
  /* 11f9cf46 std  */
  C.df=1;
  /* 11f9cf47 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f9cf49 cld  */
  C.df=0;
  /* 11f9cf4a jmp dword ptr [edx*4 + 0x11f9cfc0] */
  switch (EDX) {
    case 0: goto L_11f9cfd0;
    case 1: goto L_11f9cfd8;
    case 2: goto L_11f9cfe8;
    case 3: goto L_11f9cffc;
    default: x86_unimpl("switch@0x11f9cf4a out of table"); return;
  }
  /* 11f9cf51 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11f9cf54 je 0x11f9cf25 */
  if (C.zf) goto L_11f9cf25;
  /* 11f9cf56 stc  */
  x86_unimpl("stc @ 0x11f9cf56");
  /* 11f9cf57 adc dword ptr [edi + ecx*8 - 7], edi */
  { uint32_t _a=(r32((uint32_t)(EDI + ECX*8 + -0x7))),_b=(EDI),_r=_a+_b+C.cf; w32((uint32_t)(EDI + ECX*8 + -0x7), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f9cf5b adc dword ptr [edi + ecx*8 - 0x3073ee07], eax */
  { uint32_t _a=(r32((uint32_t)(EDI + ECX*8 + -0x3073ee07))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(EDI + ECX*8 + -0x3073ee07), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f9cf62 stc  */
  x86_unimpl("stc @ 0x11f9cf62");
  /* 11f9cf63 adc dword ptr [edi + ecx*8 - 0x3063ee07], edx */
  { uint32_t _a=(r32((uint32_t)(EDI + ECX*8 + -0x3063ee07))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EDI + ECX*8 + -0x3063ee07), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f9cf6a stc  */
  x86_unimpl("stc @ 0x11f9cf6a");
  /* 11f9cf6c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 11f9cf6d iretd  */
  x86_unimpl("iretd @ 0x11f9cf6d");
  /* 11f9cf6e stc  */
  x86_unimpl("stc @ 0x11f9cf6e");
  /* 11f9cf74 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11f9cf78 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11f9cf7c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11f9cf80 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11f9cf84 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11f9cf88 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11f9cf8c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11f9cf90 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11f9cf94 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11f9cf98 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11f9cf9c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11f9cfa0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11f9cfa4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11f9cfa8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11f9cfac lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11f9cfb3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9cfb5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11f9cfb7:;
  /* 11f9cfb7 jmp dword ptr [edx*4 + 0x11f9cfc0] */
  switch (EDX) {
    case 0: goto L_11f9cfd0;
    case 1: goto L_11f9cfd8;
    case 2: goto L_11f9cfe8;
    case 3: goto L_11f9cffc;
    default: x86_unimpl("switch@0x11f9cfb7 out of table"); return;
  }
  /* 11f9cfbe mov edi, edi */
  EDI = (EDI);
L_11f9cfd0:;
  /* 11f9cfd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9cfd3 pop esi */
  ESI = (pop32());
  /* 11f9cfd4 pop edi */
  EDI = (pop32());
  /* 11f9cfd5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f9cfd6 ret  */
  ESPCHK(0x11f9cce0u, _esp0);
  ESP += 4; return;
  /* 11f9cfd7 nop  */
  /* nop */
L_11f9cfd8:;
  /* 11f9cfd8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f9cfdb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f9cfde mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9cfe1 pop esi */
  ESI = (pop32());
  /* 11f9cfe2 pop edi */
  EDI = (pop32());
  /* 11f9cfe3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f9cfe4 ret  */
  ESPCHK(0x11f9cce0u, _esp0);
  ESP += 4; return;
  /* 11f9cfe5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f9cfe8:;
  /* 11f9cfe8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f9cfeb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f9cfee mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f9cff1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f9cff4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9cff7 pop esi */
  ESI = (pop32());
  /* 11f9cff8 pop edi */
  EDI = (pop32());
  /* 11f9cff9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f9cffa ret  */
  ESPCHK(0x11f9cce0u, _esp0);
  ESP += 4; return;
  /* 11f9cffb nop  */
  /* nop */
L_11f9cffc:;
  /* 11f9cffc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f9cfff mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f9d002 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f9d005 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f9d008 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f9d00b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f9d00e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9d011 pop esi */
  ESI = (pop32());
  /* 11f9d012 pop edi */
  EDI = (pop32());
  /* 11f9d013 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f9d014 ret  */
  ESPCHK(0x11f9cce0u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x11f9d020 (104 bytes, 43 insns) */
void f_11f9d020(void) {
  FTRACE(0x11f9d020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9d020 push ebx */
  push32((uint32_t)(EBX));
  /* 11f9d021 push esi */
  push32((uint32_t)(ESI));
  /* 11f9d022 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 11f9d026 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9d028 jne 0x11f9d042 */
  if (!C.zf) goto L_11f9d042;
  /* 11f9d02a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11f9d02e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11f9d032 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f9d034 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f9d036 mov ebx, eax */
  EBX = (EAX);
  /* 11f9d038 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11f9d03c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f9d03e mov edx, ebx */
  EDX = (EBX);
  /* 11f9d040 jmp 0x11f9d083 */
  goto L_11f9d083;
L_11f9d042:;
  /* 11f9d042 mov ecx, eax */
  ECX = (EAX);
  /* 11f9d044 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11f9d048 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 11f9d04c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_11f9d050:;
  /* 11f9d050 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11f9d052 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 11f9d054 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11f9d056 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 11f9d058 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f9d05a jne 0x11f9d050 */
  if (!C.zf) goto L_11f9d050;
  /* 11f9d05c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f9d05e mov esi, eax */
  ESI = (EAX);
  /* 11f9d060 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11f9d064 mov ecx, eax */
  ECX = (EAX);
  /* 11f9d066 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11f9d06a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11f9d06c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9d06e jb 0x11f9d07e */
  if (C.cf) goto L_11f9d07e;
  /* 11f9d070 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9d074 ja 0x11f9d07e */
  if ((!C.cf&&!C.zf)) goto L_11f9d07e;
  /* 11f9d076 jb 0x11f9d07f */
  if (C.cf) goto L_11f9d07f;
  /* 11f9d078 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9d07c jbe 0x11f9d07f */
  if ((C.cf||C.zf)) goto L_11f9d07f;
L_11f9d07e:;
  /* 11f9d07e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_11f9d07f:;
  /* 11f9d07f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f9d081 mov eax, esi */
  EAX = (ESI);
L_11f9d083:;
  /* 11f9d083 pop esi */
  ESI = (pop32());
  /* 11f9d084 pop ebx */
  EBX = (pop32());
  /* 11f9d085 ret 0x10 */
  ESPCHK(0x11f9d020u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x11f9d090 (117 bytes, 44 insns) */
void f_11f9d090(void) {
  FTRACE(0x11f9d090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9d090 push ebx */
  push32((uint32_t)(EBX));
  /* 11f9d091 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11f9d095 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9d097 jne 0x11f9d0b1 */
  if (!C.zf) goto L_11f9d0b1;
  /* 11f9d099 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11f9d09d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11f9d0a1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f9d0a3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f9d0a5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f9d0a9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f9d0ab mov eax, edx */
  EAX = (EDX);
  /* 11f9d0ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f9d0af jmp 0x11f9d101 */
  goto L_11f9d101;
L_11f9d0b1:;
  /* 11f9d0b1 mov ecx, eax */
  ECX = (EAX);
  /* 11f9d0b3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 11f9d0b7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11f9d0bb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_11f9d0bf:;
  /* 11f9d0bf shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11f9d0c1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 11f9d0c3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11f9d0c5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 11f9d0c7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f9d0c9 jne 0x11f9d0bf */
  if (!C.zf) goto L_11f9d0bf;
  /* 11f9d0cb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f9d0cd mov ecx, eax */
  ECX = (EAX);
  /* 11f9d0cf mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11f9d0d3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 11f9d0d4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11f9d0d8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9d0da jb 0x11f9d0ea */
  if (C.cf) goto L_11f9d0ea;
  /* 11f9d0dc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9d0e0 ja 0x11f9d0ea */
  if ((!C.cf&&!C.zf)) goto L_11f9d0ea;
  /* 11f9d0e2 jb 0x11f9d0f2 */
  if (C.cf) goto L_11f9d0f2;
  /* 11f9d0e4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9d0e8 jbe 0x11f9d0f2 */
  if ((C.cf||C.zf)) goto L_11f9d0f2;
L_11f9d0ea:;
  /* 11f9d0ea sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9d0ee sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11f9d0f2:;
  /* 11f9d0f2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9d0f6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9d0fa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f9d0fc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f9d0fe sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11f9d101:;
  /* 11f9d101 pop ebx */
  EBX = (pop32());
  /* 11f9d102 ret 0x10 */
  ESPCHK(0x11f9d090u, _esp0);
  ESP += 20; return;
}

/* FUN_1000d110 @ 0x11f9d110 (628 bytes, 214 insns) */
void f_11f9d110(void) {
  FTRACE(0x11f9d110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9d110 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9d111 mov ebp, esp */
  EBP = (ESP);
  /* 11f9d113 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9d116 push ebx */
  push32((uint32_t)(EBX));
  /* 11f9d117 push esi */
  push32((uint32_t)(ESI));
  /* 11f9d118 push edi */
  push32((uint32_t)(EDI));
L_11f9d119:;
  /* 11f9d119 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9d11d jne 0x11f9d13d */
  if (!C.zf) goto L_11f9d13d;
  /* 11f9d11f push 0x11fbe0e0 */
  push32((uint32_t)(0x11fbe0e0u));
  /* 11f9d124 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9d126 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 11f9d128 push 0x11fbe0d4 */
  push32((uint32_t)(0x11fbe0d4u));
  /* 11f9d12d push 2 */
  push32((uint32_t)(0x2u));
  /* 11f9d12f call 0x11f954c0 */
  push32(0x11f9d134u); f_11f954c0();
  /* 11f9d134 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9d137 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9d13a jne 0x11f9d13d */
  if (!C.zf) goto L_11f9d13d;
  /* 11f9d13c int3  */
  x86_unimpl("int3 @ 0x11f9d13c");
L_11f9d13d:;
  /* 11f9d13d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9d13f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9d141 jne 0x11f9d119 */
  if (!C.zf) goto L_11f9d119;
  /* 11f9d143 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9d146 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f9d149 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9d14c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11f9d14f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11f9d152 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9d155 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f9d158 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9d15e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9d160 je 0x11f9d16f */
  if (C.zf) goto L_11f9d16f;
  /* 11f9d162 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9d165 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11f9d168 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 11f9d16b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9d16d je 0x11f9d185 */
  if (C.zf) goto L_11f9d185;
L_11f9d16f:;
  /* 11f9d16f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9d172 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11f9d175 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11f9d177 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9d17a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 11f9d17d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f9d180 jmp 0x11f9d37d */
  goto L_11f9d37d;
L_11f9d185:;
  /* 11f9d185 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9d188 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11f9d18b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11f9d18e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9d190 je 0x11f9d1dc */
  if (C.zf) goto L_11f9d1dc;
  /* 11f9d192 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9d195 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11f9d19c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9d19f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11f9d1a2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11f9d1a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9d1a7 je 0x11f9d1c5 */
  if (C.zf) goto L_11f9d1c5;
  /* 11f9d1a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9d1ac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9d1af mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11f9d1b2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11f9d1b4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9d1b7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f9d1ba and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 11f9d1bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9d1c0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11f9d1c3 jmp 0x11f9d1dc */
  goto L_11f9d1dc;
L_11f9d1c5:;
  /* 11f9d1c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9d1c8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f9d1cb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9d1ce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9d1d1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11f9d1d4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f9d1d7 jmp 0x11f9d37d */
  goto L_11f9d37d;
L_11f9d1dc:;
  /* 11f9d1dc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9d1df mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f9d1e2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9d1e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9d1e8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11f9d1eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9d1ee mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f9d1f1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 11f9d1f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9d1f7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11f9d1fa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9d1fd mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11f9d204 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f9d20b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9d20e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11f9d211 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9d214 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11f9d217 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 11f9d21d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9d21f jne 0x11f9d24f */
  if (!C.zf) goto L_11f9d24f;
  /* 11f9d221 cmp dword ptr [ebp - 8], 0x11fc1150 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11fc1150u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9d228 je 0x11f9d233 */
  if (C.zf) goto L_11f9d233;
  /* 11f9d22a cmp dword ptr [ebp - 8], 0x11fc1170 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11fc1170u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9d231 jne 0x11f9d243 */
  if (!C.zf) goto L_11f9d243;
L_11f9d233:;
  /* 11f9d233 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9d236 push edx */
  push32((uint32_t)(EDX));
  /* 11f9d237 call 0x11f9f080 */
  push32(0x11f9d23cu); f_11f9f080();
  /* 11f9d23c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9d23f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9d241 jne 0x11f9d24f */
  if (!C.zf) goto L_11f9d24f;
L_11f9d243:;
  /* 11f9d243 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9d246 push eax */
  push32((uint32_t)(EAX));
  /* 11f9d247 call 0x11f9efb0 */
  push32(0x11f9d24cu); f_11f9efb0();
  /* 11f9d24c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f9d24f:;
  /* 11f9d24f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9d252 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f9d255 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9d25b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9d25d je 0x11f9d33b */
  if (C.zf) goto L_11f9d33b;
L_11f9d263:;
  /* 11f9d263 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9d266 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9d269 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11f9d26b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9d26e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9d270 jge 0x11f9d293 */
  if ((C.sf==C.of)) goto L_11f9d293;
  /* 11f9d272 push 0x11fbe094 */
  push32((uint32_t)(0x11fbe094u));
  /* 11f9d277 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9d279 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11f9d27e push 0x11fbe0d4 */
  push32((uint32_t)(0x11fbe0d4u));
  /* 11f9d283 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f9d285 call 0x11f954c0 */
  push32(0x11f9d28au); f_11f954c0();
  /* 11f9d28a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9d28d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9d290 jne 0x11f9d293 */
  if (!C.zf) goto L_11f9d293;
  /* 11f9d292 int3  */
  x86_unimpl("int3 @ 0x11f9d292");
L_11f9d293:;
  /* 11f9d293 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9d295 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9d297 jne 0x11f9d263 */
  if (!C.zf) goto L_11f9d263;
  /* 11f9d299 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9d29c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9d29f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11f9d2a1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9d2a4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f9d2a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9d2aa mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f9d2ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9d2b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9d2b3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11f9d2b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9d2b8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11f9d2bb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9d2be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9d2c1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11f9d2c4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9d2c8 jle 0x11f9d2e6 */
  if ((C.zf||C.sf!=C.of)) goto L_11f9d2e6;
  /* 11f9d2ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9d2cd push ecx */
  push32((uint32_t)(ECX));
  /* 11f9d2ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9d2d1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11f9d2d4 push eax */
  push32((uint32_t)(EAX));
  /* 11f9d2d5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9d2d8 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9d2d9 call 0x11f9eca0 */
  push32(0x11f9d2deu); f_11f9eca0();
  /* 11f9d2de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9d2e1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f9d2e4 jmp 0x11f9d32e */
  goto L_11f9d32e;
L_11f9d2e6:;
  /* 11f9d2e6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9d2ea je 0x11f9d309 */
  if (C.zf) goto L_11f9d309;
  /* 11f9d2ec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9d2ef sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11f9d2f2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9d2f5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11f9d2f8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9d2fb mov ecx, dword ptr [edx*4 + 0x11fc40a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11fc40a0)));
  /* 11f9d302 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9d304 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11f9d307 jmp 0x11f9d310 */
  goto L_11f9d310;
L_11f9d309:;
  /* 11f9d309 mov dword ptr [ebp - 0x14], 0x11fc0a70 */
  w32((uint32_t)(EBP + -0x14), (0x11fc0a70u));
L_11f9d310:;
  /* 11f9d310 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f9d313 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 11f9d317 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11f9d31a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9d31c je 0x11f9d32e */
  if (C.zf) goto L_11f9d32e;
  /* 11f9d31e push 2 */
  push32((uint32_t)(0x2u));
  /* 11f9d320 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9d322 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9d325 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9d326 call 0x11f9eb50 */
  push32(0x11f9d32bu); f_11f9eb50();
  /* 11f9d32b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f9d32e:;
  /* 11f9d32e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9d331 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11f9d334 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11f9d337 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11f9d339 jmp 0x11f9d359 */
  goto L_11f9d359;
L_11f9d33b:;
  /* 11f9d33b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11f9d342 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9d345 push edx */
  push32((uint32_t)(EDX));
  /* 11f9d346 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11f9d349 push eax */
  push32((uint32_t)(EAX));
  /* 11f9d34a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9d34d push ecx */
  push32((uint32_t)(ECX));
  /* 11f9d34e call 0x11f9eca0 */
  push32(0x11f9d353u); f_11f9eca0();
  /* 11f9d353 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9d356 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11f9d359:;
  /* 11f9d359 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9d35c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9d35f je 0x11f9d375 */
  if (C.zf) goto L_11f9d375;
  /* 11f9d361 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9d364 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11f9d367 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11f9d36a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9d36d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11f9d370 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f9d373 jmp 0x11f9d37d */
  goto L_11f9d37d;
L_11f9d375:;
  /* 11f9d375 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9d378 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_11f9d37d:;
  /* 11f9d37d pop edi */
  EDI = (pop32());
  /* 11f9d37e pop esi */
  ESI = (pop32());
  /* 11f9d37f pop ebx */
  EBX = (pop32());
  /* 11f9d380 mov esp, ebp */
  ESP = (EBP);
  /* 11f9d382 pop ebp */
  EBP = (pop32());
  /* 11f9d383 ret  */
  ESPCHK(0x11f9d110u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d390 @ 0x11f9d390 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_11f9d390(void) {
  FTRACE(0x11f9d390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9d390 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9d391 mov ebp, esp */
  EBP = (ESP);
  /* 11f9d393 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9d399 push ebx */
  push32((uint32_t)(EBX));
  /* 11f9d39a push esi */
  push32((uint32_t)(ESI));
  /* 11f9d39b push edi */
  push32((uint32_t)(EDI));
  /* 11f9d39c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11f9d3a3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 11f9d3ad mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_11f9d3b4:;
  /* 11f9d3b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9d3b7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11f9d3b9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 11f9d3bc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11f9d3c0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9d3c3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9d3c6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11f9d3c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9d3cb je 0x11f9dfa7 */
  if (C.zf) goto L_11f9dfa7;
  /* 11f9d3d1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9d3d8 jl 0x11f9dfa7 */
  if ((C.sf!=C.of)) goto L_11f9dfa7;
  /* 11f9d3de movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11f9d3e2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9d3e5 jl 0x11f9d406 */
  if ((C.sf!=C.of)) goto L_11f9d406;
  /* 11f9d3e7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11f9d3eb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9d3ee jg 0x11f9d406 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f9d406;
  /* 11f9d3f0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11f9d3f4 movsx ecx, byte ptr [eax + 0x11fbe0cc] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x11fbe0cc))));
  /* 11f9d3fb and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 11f9d3fe mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 11f9d404 jmp 0x11f9d410 */
  goto L_11f9d410;
L_11f9d406:;
  /* 11f9d406 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_11f9d410:;
  /* 11f9d410 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 11f9d416 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11f9d419 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9d41c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9d41f movsx edx, byte ptr [ecx + eax*8 + 0x11fbe0ec] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x11fbe0ec))));
  /* 11f9d427 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11f9d42a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11f9d42d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9d430 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 11f9d436 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9d43d ja 0x11f9dfa2 */
  if ((!C.cf&&!C.zf)) goto L_11f9dfa2;
  /* 11f9d443 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 11f9d449 jmp dword ptr [ecx*4 + 0x11f9dfb4] */
  switch (ECX) {
    case 0: goto L_11f9d450;
    case 1: goto L_11f9d4ea;
    case 2: goto L_11f9d52c;
    case 3: goto L_11f9d59b;
    case 4: goto L_11f9d5f3;
    case 5: goto L_11f9d602;
    case 6: goto L_11f9d64e;
    case 7: goto L_11f9d6e1;
    case 8: goto L_11f9d578;
    case 9: goto L_11f9d583;
    case 10: goto L_11f9d56e;
    case 11: goto L_11f9d563;
    case 12: goto L_11f9d58e;
    case 13: goto L_11f9d596;
    default: x86_unimpl("switch@0x11f9d449 out of table"); return;
  }
L_11f9d450:;
  /* 11f9d450 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11f9d457 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f9d45a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f9d460 mov eax, dword ptr [0x11fc0ca8] */
  EAX = (r32((uint32_t)(0x11fc0ca8)));
  /* 11f9d465 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f9d467 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11f9d46b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11f9d471 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9d473 je 0x11f9d4cd */
  if (C.zf) goto L_11f9d4cd;
  /* 11f9d475 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 11f9d47b push edx */
  push32((uint32_t)(EDX));
  /* 11f9d47c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9d47f push eax */
  push32((uint32_t)(EAX));
  /* 11f9d480 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11f9d484 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9d485 call 0x11f9e0c0 */
  push32(0x11f9d48au); f_11f9e0c0();
  /* 11f9d48a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9d48d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9d490 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11f9d492 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 11f9d495 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9d498 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9d49b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11f9d49e:;
  /* 11f9d49e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11f9d4a2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9d4a4 jne 0x11f9d4c7 */
  if (!C.zf) goto L_11f9d4c7;
  /* 11f9d4a6 push 0x11fbe16c */
  push32((uint32_t)(0x11fbe16cu));
  /* 11f9d4ab push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9d4ad push 0x186 */
  push32((uint32_t)(0x186u));
  /* 11f9d4b2 push 0x11fbe160 */
  push32((uint32_t)(0x11fbe160u));
  /* 11f9d4b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f9d4b9 call 0x11f954c0 */
  push32(0x11f9d4beu); f_11f954c0();
  /* 11f9d4be add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9d4c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9d4c4 jne 0x11f9d4c7 */
  if (!C.zf) goto L_11f9d4c7;
  /* 11f9d4c6 int3  */
  x86_unimpl("int3 @ 0x11f9d4c6");
L_11f9d4c7:;
  /* 11f9d4c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9d4c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9d4cb jne 0x11f9d49e */
  if (!C.zf) goto L_11f9d49e;
L_11f9d4cd:;
  /* 11f9d4cd lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 11f9d4d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9d4d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9d4d7 push edx */
  push32((uint32_t)(EDX));
  /* 11f9d4d8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11f9d4dc push eax */
  push32((uint32_t)(EAX));
  /* 11f9d4dd call 0x11f9e0c0 */
  push32(0x11f9d4e2u); f_11f9e0c0();
  /* 11f9d4e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9d4e5 jmp 0x11f9dfa2 */
  goto L_11f9dfa2;
L_11f9d4ea:;
  /* 11f9d4ea mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11f9d4f1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9d4f4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 11f9d4fa mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 11f9d500 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 11f9d506 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 11f9d50c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11f9d50f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f9d516 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 11f9d520 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11f9d527 jmp 0x11f9dfa2 */
  goto L_11f9dfa2;
L_11f9d52c:;
  /* 11f9d52c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11f9d530 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 11f9d536 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 11f9d53c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9d53f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 11f9d545 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9d54c ja 0x11f9d596 */
  if ((!C.cf&&!C.zf)) goto L_11f9d596;
  /* 11f9d54e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 11f9d554 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9d556 mov al, byte ptr [ecx + 0x11f9dfec] */
  AL = (r8((uint32_t)(ECX + 0x11f9dfec)));
  /* 11f9d55c jmp dword ptr [eax*4 + 0x11f9dfd4] */
  switch (EAX) {
    case 0: goto L_11f9d578;
    case 1: goto L_11f9d583;
    case 2: goto L_11f9d56e;
    case 3: goto L_11f9d563;
    case 4: goto L_11f9d58e;
    case 5: goto L_11f9d596;
    default: x86_unimpl("switch@0x11f9d55c out of table"); return;
  }
L_11f9d563:;
  /* 11f9d563 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9d566 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9d569 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f9d56c jmp 0x11f9d596 */
  goto L_11f9d596;
L_11f9d56e:;
  /* 11f9d56e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9d571 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11f9d573 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f9d576 jmp 0x11f9d596 */
  goto L_11f9d596;
L_11f9d578:;
  /* 11f9d578 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9d57b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11f9d57e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f9d581 jmp 0x11f9d596 */
  goto L_11f9d596;
L_11f9d583:;
  /* 11f9d583 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9d586 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 11f9d589 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f9d58c jmp 0x11f9d596 */
  goto L_11f9d596;
L_11f9d58e:;
  /* 11f9d58e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9d591 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11f9d593 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f9d596:;
  /* 11f9d596 jmp 0x11f9dfa2 */
  goto L_11f9dfa2;
L_11f9d59b:;
  /* 11f9d59b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11f9d59f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9d5a2 jne 0x11f9d5d7 */
  if (!C.zf) goto L_11f9d5d7;
  /* 11f9d5a4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11f9d5a7 push edx */
  push32((uint32_t)(EDX));
  /* 11f9d5a8 call 0x11f9e1d0 */
  push32(0x11f9d5adu); f_11f9e1d0();
  /* 11f9d5ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9d5b0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 11f9d5b6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9d5bd jge 0x11f9d5d5 */
  if ((C.sf==C.of)) goto L_11f9d5d5;
  /* 11f9d5bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9d5c2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11f9d5c4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f9d5c7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 11f9d5cd neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f9d5cf mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_11f9d5d5:;
  /* 11f9d5d5 jmp 0x11f9d5ee */
  goto L_11f9d5ee;
L_11f9d5d7:;
  /* 11f9d5d7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 11f9d5dd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9d5e0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11f9d5e4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 11f9d5e8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_11f9d5ee:;
  /* 11f9d5ee jmp 0x11f9dfa2 */
  goto L_11f9dfa2;
L_11f9d5f3:;
  /* 11f9d5f3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 11f9d5fd jmp 0x11f9dfa2 */
  goto L_11f9dfa2;
L_11f9d602:;
  /* 11f9d602 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11f9d606 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9d609 jne 0x11f9d632 */
  if (!C.zf) goto L_11f9d632;
  /* 11f9d60b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11f9d60e push eax */
  push32((uint32_t)(EAX));
  /* 11f9d60f call 0x11f9e1d0 */
  push32(0x11f9d614u); f_11f9e1d0();
  /* 11f9d614 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9d617 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 11f9d61d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9d624 jge 0x11f9d630 */
  if ((C.sf==C.of)) goto L_11f9d630;
  /* 11f9d626 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_11f9d630:;
  /* 11f9d630 jmp 0x11f9d649 */
  goto L_11f9d649;
L_11f9d632:;
  /* 11f9d632 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 11f9d638 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9d63b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11f9d63f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11f9d643 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_11f9d649:;
  /* 11f9d649 jmp 0x11f9dfa2 */
  goto L_11f9dfa2;
L_11f9d64e:;
  /* 11f9d64e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11f9d652 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 11f9d658 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 11f9d65e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9d661 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 11f9d667 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9d66e ja 0x11f9d6dc */
  if ((!C.cf&&!C.zf)) goto L_11f9d6dc;
  /* 11f9d670 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 11f9d676 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9d678 mov al, byte ptr [ecx + 0x11f9e011] */
  AL = (r8((uint32_t)(ECX + 0x11f9e011)));
  /* 11f9d67e jmp dword ptr [eax*4 + 0x11f9dffd] */
  switch (EAX) {
    case 0: goto L_11f9d690;
    case 1: goto L_11f9d6c9;
    case 2: goto L_11f9d685;
    case 3: goto L_11f9d6d3;
    case 4: goto L_11f9d6dc;
    default: x86_unimpl("switch@0x11f9d67e out of table"); return;
  }
L_11f9d685:;
  /* 11f9d685 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9d688 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9d68b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f9d68e jmp 0x11f9d6dc */
  goto L_11f9d6dc;
L_11f9d690:;
  /* 11f9d690 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9d693 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11f9d696 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9d699 jne 0x11f9d6bb */
  if (!C.zf) goto L_11f9d6bb;
  /* 11f9d69b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9d69e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11f9d6a2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9d6a5 jne 0x11f9d6bb */
  if (!C.zf) goto L_11f9d6bb;
  /* 11f9d6a7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9d6aa add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9d6ad mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11f9d6b0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9d6b3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11f9d6b6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f9d6b9 jmp 0x11f9d6c7 */
  goto L_11f9d6c7;
L_11f9d6bb:;
  /* 11f9d6bb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11f9d6c2 jmp 0x11f9d450 */
  goto L_11f9d450;
L_11f9d6c7:;
  /* 11f9d6c7 jmp 0x11f9d6dc */
  goto L_11f9d6dc;
L_11f9d6c9:;
  /* 11f9d6c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9d6cc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11f9d6ce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f9d6d1 jmp 0x11f9d6dc */
  goto L_11f9d6dc;
L_11f9d6d3:;
  /* 11f9d6d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9d6d6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11f9d6d9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11f9d6dc:;
  /* 11f9d6dc jmp 0x11f9dfa2 */
  goto L_11f9dfa2;
L_11f9d6e1:;
  /* 11f9d6e1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11f9d6e5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 11f9d6eb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 11f9d6f1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9d6f4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 11f9d6fa cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9d701 ja 0x11f9ddc7 */
  if ((!C.cf&&!C.zf)) goto L_11f9ddc7;
  /* 11f9d707 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 11f9d70d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f9d70f mov cl, byte ptr [edx + 0x11f9e07c] */
  CL = (r8((uint32_t)(EDX + 0x11f9e07c)));
  /* 11f9d715 jmp dword ptr [ecx*4 + 0x11f9e040] */
  switch (ECX) {
    case 0: goto L_11f9d71c;
    case 1: goto L_11f9d9b0;
    case 2: goto L_11f9d840;
    case 3: goto L_11f9dae9;
    case 4: goto L_11f9d7ab;
    case 5: goto L_11f9d731;
    case 6: goto L_11f9dabb;
    case 7: goto L_11f9d9c0;
    case 8: goto L_11f9d965;
    case 9: goto L_11f9db35;
    case 10: goto L_11f9dadf;
    case 11: goto L_11f9d856;
    case 12: goto L_11f9dad3;
    case 13: goto L_11f9daf5;
    case 14: goto L_11f9ddc7;
    default: x86_unimpl("switch@0x11f9d715 out of table"); return;
  }
L_11f9d71c:;
  /* 11f9d71c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9d71f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 11f9d724 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9d726 jne 0x11f9d731 */
  if (!C.zf) goto L_11f9d731;
  /* 11f9d728 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9d72b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11f9d72e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11f9d731:;
  /* 11f9d731 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9d734 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9d73a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9d73c je 0x11f9d777 */
  if (C.zf) goto L_11f9d777;
  /* 11f9d73e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11f9d741 push eax */
  push32((uint32_t)(EAX));
  /* 11f9d742 call 0x11f9e210 */
  push32(0x11f9d747u); f_11f9e210();
  /* 11f9d747 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9d74a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 11f9d74e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 11f9d752 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9d753 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 11f9d759 push edx */
  push32((uint32_t)(EDX));
  /* 11f9d75a call 0x11f9f2f0 */
  push32(0x11f9d75fu); f_11f9f2f0();
  /* 11f9d75f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9d762 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11f9d765 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9d769 jge 0x11f9d775 */
  if ((C.sf==C.of)) goto L_11f9d775;
  /* 11f9d76b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_11f9d775:;
  /* 11f9d775 jmp 0x11f9d79d */
  goto L_11f9d79d;
L_11f9d777:;
  /* 11f9d777 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11f9d77a push eax */
  push32((uint32_t)(EAX));
  /* 11f9d77b call 0x11f9e1d0 */
  push32(0x11f9d780u); f_11f9e1d0();
  /* 11f9d780 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9d783 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 11f9d78a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 11f9d790 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 11f9d796 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_11f9d79d:;
  /* 11f9d79d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 11f9d7a3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11f9d7a6 jmp 0x11f9ddc7 */
  goto L_11f9ddc7;
L_11f9d7ab:;
  /* 11f9d7ab lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11f9d7ae push eax */
  push32((uint32_t)(EAX));
  /* 11f9d7af call 0x11f9e1d0 */
  push32(0x11f9d7b4u); f_11f9e1d0();
  /* 11f9d7b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9d7b7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 11f9d7bd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9d7c4 je 0x11f9d7d2 */
  if (C.zf) goto L_11f9d7d2;
  /* 11f9d7c6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11f9d7cc cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9d7d0 jne 0x11f9d7ec */
  if (!C.zf) goto L_11f9d7ec;
L_11f9d7d2:;
  /* 11f9d7d2 mov edx, dword ptr [0x11fc0fc0] */
  EDX = (r32((uint32_t)(0x11fc0fc0)));
  /* 11f9d7d8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11f9d7db mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9d7de push eax */
  push32((uint32_t)(EAX));
  /* 11f9d7df call 0x11f99230 */
  push32(0x11f9d7e4u); f_11f99230();
  /* 11f9d7e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9d7e7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11f9d7ea jmp 0x11f9d83b */
  goto L_11f9d83b;
L_11f9d7ec:;
  /* 11f9d7ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9d7ef and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 11f9d7f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9d7f7 je 0x11f9d81c */
  if (C.zf) goto L_11f9d81c;
  /* 11f9d7f9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11f9d7ff mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f9d802 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11f9d805 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11f9d80b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 11f9d80e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11f9d810 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11f9d813 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11f9d81a jmp 0x11f9d83b */
  goto L_11f9d83b;
L_11f9d81c:;
  /* 11f9d81c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11f9d823 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11f9d829 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f9d82c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11f9d82f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11f9d835 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 11f9d838 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11f9d83b:;
  /* 11f9d83b jmp 0x11f9ddc7 */
  goto L_11f9ddc7;
L_11f9d840:;
  /* 11f9d840 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9d843 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 11f9d849 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9d84b jne 0x11f9d856 */
  if (!C.zf) goto L_11f9d856;
  /* 11f9d84d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9d850 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11f9d853 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f9d856:;
  /* 11f9d856 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9d85d jne 0x11f9d86b */
  if (!C.zf) goto L_11f9d86b;
  /* 11f9d85f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 11f9d869 jmp 0x11f9d877 */
  goto L_11f9d877;
L_11f9d86b:;
  /* 11f9d86b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 11f9d871 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_11f9d877:;
  /* 11f9d877 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 11f9d87d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 11f9d883 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11f9d886 push edx */
  push32((uint32_t)(EDX));
  /* 11f9d887 call 0x11f9e1d0 */
  push32(0x11f9d88cu); f_11f9e1d0();
  /* 11f9d88c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9d88f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11f9d892 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9d895 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 11f9d89a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9d89c je 0x11f9d906 */
  if (C.zf) goto L_11f9d906;
  /* 11f9d89e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9d8a2 jne 0x11f9d8ad */
  if (!C.zf) goto L_11f9d8ad;
  /* 11f9d8a4 mov ecx, dword ptr [0x11fc0fc4] */
  ECX = (r32((uint32_t)(0x11fc0fc4)));
  /* 11f9d8aa mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11f9d8ad:;
  /* 11f9d8ad mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11f9d8b4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9d8b7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_11f9d8bd:;
  /* 11f9d8bd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 11f9d8c3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 11f9d8c9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9d8cc mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 11f9d8d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9d8d4 je 0x11f9d8f6 */
  if (C.zf) goto L_11f9d8f6;
  /* 11f9d8d6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 11f9d8dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9d8de mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11f9d8e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9d8e3 je 0x11f9d8f6 */
  if (C.zf) goto L_11f9d8f6;
  /* 11f9d8e5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 11f9d8eb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9d8ee mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 11f9d8f4 jmp 0x11f9d8bd */
  goto L_11f9d8bd;
L_11f9d8f6:;
  /* 11f9d8f6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 11f9d8fc sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9d8ff sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11f9d901 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11f9d904 jmp 0x11f9d960 */
  goto L_11f9d960;
L_11f9d906:;
  /* 11f9d906 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9d90a jne 0x11f9d914 */
  if (!C.zf) goto L_11f9d914;
  /* 11f9d90c mov eax, dword ptr [0x11fc0fc0] */
  EAX = (r32((uint32_t)(0x11fc0fc0)));
  /* 11f9d911 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11f9d914:;
  /* 11f9d914 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9d917 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_11f9d91d:;
  /* 11f9d91d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 11f9d923 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 11f9d929 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9d92c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 11f9d932 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9d934 je 0x11f9d954 */
  if (C.zf) goto L_11f9d954;
  /* 11f9d936 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 11f9d93c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11f9d93f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9d941 je 0x11f9d954 */
  if (C.zf) goto L_11f9d954;
  /* 11f9d943 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 11f9d949 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9d94c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 11f9d952 jmp 0x11f9d91d */
  goto L_11f9d91d;
L_11f9d954:;
  /* 11f9d954 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 11f9d95a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9d95d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_11f9d960:;
  /* 11f9d960 jmp 0x11f9ddc7 */
  goto L_11f9ddc7;
L_11f9d965:;
  /* 11f9d965 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11f9d968 push edx */
  push32((uint32_t)(EDX));
  /* 11f9d969 call 0x11f9e1d0 */
  push32(0x11f9d96eu); f_11f9e1d0();
  /* 11f9d96e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9d971 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 11f9d977 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9d97a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11f9d97d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9d97f je 0x11f9d993 */
  if (C.zf) goto L_11f9d993;
  /* 11f9d981 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 11f9d987 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 11f9d98e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 11f9d991 jmp 0x11f9d9a1 */
  goto L_11f9d9a1;
L_11f9d993:;
  /* 11f9d993 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 11f9d999 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 11f9d99f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_11f9d9a1:;
  /* 11f9d9a1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 11f9d9ab jmp 0x11f9ddc7 */
  goto L_11f9ddc7;
L_11f9d9b0:;
  /* 11f9d9b0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11f9d9b7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 11f9d9ba add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 11f9d9bd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_11f9d9c0:;
  /* 11f9d9c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9d9c3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 11f9d9c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f9d9c8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 11f9d9ce mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11f9d9d1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9d9d8 jge 0x11f9d9e6 */
  if ((C.sf==C.of)) goto L_11f9d9e6;
  /* 11f9d9da mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 11f9d9e4 jmp 0x11f9da02 */
  goto L_11f9da02;
L_11f9d9e6:;
  /* 11f9d9e6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9d9ed jne 0x11f9da02 */
  if (!C.zf) goto L_11f9da02;
  /* 11f9d9ef movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11f9d9f3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9d9f6 jne 0x11f9da02 */
  if (!C.zf) goto L_11f9da02;
  /* 11f9d9f8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_11f9da02:;
  /* 11f9da02 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f9da05 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9da08 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11f9da0b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f9da0e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9da11 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f9da13 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f9da16 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 11f9da1c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 11f9da22 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9da25 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9da26 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 11f9da2c push edx */
  push32((uint32_t)(EDX));
  /* 11f9da2d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11f9da31 push eax */
  push32((uint32_t)(EAX));
  /* 11f9da32 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9da35 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9da36 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 11f9da3c push edx */
  push32((uint32_t)(EDX));
  /* 11f9da3d call dword ptr [0x11fc13b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc13b0))), 0x11f9da43u);
  /* 11f9da43 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9da46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9da49 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11f9da4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9da50 je 0x11f9da68 */
  if (C.zf) goto L_11f9da68;
  /* 11f9da52 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9da59 jne 0x11f9da68 */
  if (!C.zf) goto L_11f9da68;
  /* 11f9da5b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9da5e push ecx */
  push32((uint32_t)(ECX));
  /* 11f9da5f call dword ptr [0x11fc13bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc13bc))), 0x11f9da65u);
  /* 11f9da65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f9da68:;
  /* 11f9da68 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11f9da6c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9da6f jne 0x11f9da8a */
  if (!C.zf) goto L_11f9da8a;
  /* 11f9da71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9da74 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11f9da79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9da7b jne 0x11f9da8a */
  if (!C.zf) goto L_11f9da8a;
  /* 11f9da7d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9da80 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9da81 call dword ptr [0x11fc13b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc13b4))), 0x11f9da87u);
  /* 11f9da87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f9da8a:;
  /* 11f9da8a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9da8d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11f9da90 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9da93 jne 0x11f9daa7 */
  if (!C.zf) goto L_11f9daa7;
  /* 11f9da95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9da98 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11f9da9b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f9da9e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9daa1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9daa4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11f9daa7:;
  /* 11f9daa7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9daaa push eax */
  push32((uint32_t)(EAX));
  /* 11f9daab call 0x11f99230 */
  push32(0x11f9dab0u); f_11f99230();
  /* 11f9dab0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9dab3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11f9dab6 jmp 0x11f9ddc7 */
  goto L_11f9ddc7;
L_11f9dabb:;
  /* 11f9dabb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9dabe or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 11f9dac1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f9dac4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 11f9dace jmp 0x11f9db55 */
  goto L_11f9db55;
L_11f9dad3:;
  /* 11f9dad3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 11f9dadd jmp 0x11f9db55 */
  goto L_11f9db55;
L_11f9dadf:;
  /* 11f9dadf mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_11f9dae9:;
  /* 11f9dae9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 11f9daf3 jmp 0x11f9daff */
  goto L_11f9daff;
L_11f9daf5:;
  /* 11f9daf5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_11f9daff:;
  /* 11f9daff mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 11f9db09 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9db0c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9db12 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9db14 je 0x11f9db33 */
  if (C.zf) goto L_11f9db33;
  /* 11f9db16 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 11f9db1d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 11f9db23 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9db26 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 11f9db2c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_11f9db33:;
  /* 11f9db33 jmp 0x11f9db55 */
  goto L_11f9db55;
L_11f9db35:;
  /* 11f9db35 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 11f9db3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9db42 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 11f9db48 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9db4a je 0x11f9db55 */
  if (C.zf) goto L_11f9db55;
  /* 11f9db4c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9db4f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11f9db52 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f9db55:;
  /* 11f9db55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9db58 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11f9db5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9db5f je 0x11f9db7e */
  if (C.zf) goto L_11f9db7e;
  /* 11f9db61 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11f9db64 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9db65 call 0x11f9e1f0 */
  push32(0x11f9db6au); f_11f9e1f0();
  /* 11f9db6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9db6d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11f9db73 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11f9db79 jmp 0x11f9dc0f */
  goto L_11f9dc0f;
L_11f9db7e:;
  /* 11f9db7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9db81 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9db84 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9db86 je 0x11f9dbd0 */
  if (C.zf) goto L_11f9dbd0;
  /* 11f9db88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9db8b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11f9db8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9db90 je 0x11f9dbb0 */
  if (C.zf) goto L_11f9dbb0;
  /* 11f9db92 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11f9db95 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9db96 call 0x11f9e1d0 */
  push32(0x11f9db9bu); f_11f9e1d0();
  /* 11f9db9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9db9e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 11f9dba1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f9dba2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11f9dba8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11f9dbae jmp 0x11f9dbce */
  goto L_11f9dbce;
L_11f9dbb0:;
  /* 11f9dbb0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11f9dbb3 push edx */
  push32((uint32_t)(EDX));
  /* 11f9dbb4 call 0x11f9e1d0 */
  push32(0x11f9dbb9u); f_11f9e1d0();
  /* 11f9dbb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9dbbc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f9dbc1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f9dbc2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11f9dbc8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_11f9dbce:;
  /* 11f9dbce jmp 0x11f9dc0f */
  goto L_11f9dc0f;
L_11f9dbd0:;
  /* 11f9dbd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9dbd3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11f9dbd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9dbd8 je 0x11f9dbf5 */
  if (C.zf) goto L_11f9dbf5;
  /* 11f9dbda lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11f9dbdd push ecx */
  push32((uint32_t)(ECX));
  /* 11f9dbde call 0x11f9e1d0 */
  push32(0x11f9dbe3u); f_11f9e1d0();
  /* 11f9dbe3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9dbe6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f9dbe7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11f9dbed mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11f9dbf3 jmp 0x11f9dc0f */
  goto L_11f9dc0f;
L_11f9dbf5:;
  /* 11f9dbf5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11f9dbf8 push edx */
  push32((uint32_t)(EDX));
  /* 11f9dbf9 call 0x11f9e1d0 */
  push32(0x11f9dbfeu); f_11f9e1d0();
  /* 11f9dbfe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9dc01 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f9dc03 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11f9dc09 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_11f9dc0f:;
  /* 11f9dc0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9dc12 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9dc15 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9dc17 je 0x11f9dc57 */
  if (C.zf) goto L_11f9dc57;
  /* 11f9dc19 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9dc20 jg 0x11f9dc57 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f9dc57;
  /* 11f9dc22 jl 0x11f9dc2d */
  if ((C.sf!=C.of)) goto L_11f9dc2d;
  /* 11f9dc24 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9dc2b jae 0x11f9dc57 */
  if (!C.cf) goto L_11f9dc57;
L_11f9dc2d:;
  /* 11f9dc2d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 11f9dc33 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f9dc35 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 11f9dc3b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9dc3e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f9dc40 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11f9dc46 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 11f9dc4c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9dc4f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11f9dc52 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f9dc55 jmp 0x11f9dc6f */
  goto L_11f9dc6f;
L_11f9dc57:;
  /* 11f9dc57 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 11f9dc5d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11f9dc63 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 11f9dc69 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_11f9dc6f:;
  /* 11f9dc6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9dc72 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9dc78 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9dc7a jne 0x11f9dc97 */
  if (!C.zf) goto L_11f9dc97;
  /* 11f9dc7c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11f9dc82 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 11f9dc88 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 11f9dc8b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11f9dc91 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_11f9dc97:;
  /* 11f9dc97 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9dc9e jge 0x11f9dcac */
  if ((C.sf==C.of)) goto L_11f9dcac;
  /* 11f9dca0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 11f9dcaa jmp 0x11f9dcb5 */
  goto L_11f9dcb5;
L_11f9dcac:;
  /* 11f9dcac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9dcaf and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9dcb2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f9dcb5:;
  /* 11f9dcb5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11f9dcbb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 11f9dcc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9dcc3 jne 0x11f9dccc */
  if (!C.zf) goto L_11f9dccc;
  /* 11f9dcc5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11f9dccc:;
  /* 11f9dccc lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 11f9dccf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11f9dcd2:;
  /* 11f9dcd2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 11f9dcd8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 11f9dcde sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9dce1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 11f9dce7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9dce9 jg 0x11f9dcff */
  if ((!C.zf&&C.sf==C.of)) goto L_11f9dcff;
  /* 11f9dceb mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11f9dcf1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 11f9dcf7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9dcf9 je 0x11f9dd80 */
  if (C.zf) goto L_11f9dd80;
L_11f9dcff:;
  /* 11f9dcff mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 11f9dd05 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f9dd06 push edx */
  push32((uint32_t)(EDX));
  /* 11f9dd07 push eax */
  push32((uint32_t)(EAX));
  /* 11f9dd08 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 11f9dd0e push edx */
  push32((uint32_t)(EDX));
  /* 11f9dd0f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11f9dd15 push eax */
  push32((uint32_t)(EAX));
  /* 11f9dd16 call 0x11f9d090 */
  push32(0x11f9dd1bu); f_11f9d090();
  /* 11f9dd1b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9dd1e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 11f9dd24 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 11f9dd2a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f9dd2b push edx */
  push32((uint32_t)(EDX));
  /* 11f9dd2c push eax */
  push32((uint32_t)(EAX));
  /* 11f9dd2d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 11f9dd33 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9dd34 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11f9dd3a push edx */
  push32((uint32_t)(EDX));
  /* 11f9dd3b call 0x11f9d020 */
  push32(0x11f9dd40u); f_11f9d020();
  /* 11f9dd40 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11f9dd46 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 11f9dd4c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9dd53 jle 0x11f9dd67 */
  if ((C.zf||C.sf!=C.of)) goto L_11f9dd67;
  /* 11f9dd55 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 11f9dd5b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9dd61 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_11f9dd67:;
  /* 11f9dd67 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9dd6a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 11f9dd70 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11f9dd72 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9dd75 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9dd78 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11f9dd7b jmp 0x11f9dcd2 */
  goto L_11f9dcd2;
L_11f9dd80:;
  /* 11f9dd80 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 11f9dd83 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9dd86 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11f9dd89 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9dd8c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9dd8f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11f9dd92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9dd95 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 11f9dd9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9dd9c je 0x11f9ddc7 */
  if (C.zf) goto L_11f9ddc7;
  /* 11f9dd9e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9dda1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11f9dda4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9dda7 jne 0x11f9ddaf */
  if (!C.zf) goto L_11f9ddaf;
  /* 11f9dda9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ddad jne 0x11f9ddc7 */
  if (!C.zf) goto L_11f9ddc7;
L_11f9ddaf:;
  /* 11f9ddaf mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9ddb2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9ddb5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11f9ddb8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9ddbb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 11f9ddbe mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9ddc1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ddc4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_11f9ddc7:;
  /* 11f9ddc7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ddce jne 0x11f9dfa2 */
  if (!C.zf) goto L_11f9dfa2;
  /* 11f9ddd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9ddd7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11f9ddda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9dddc je 0x11f9de2d */
  if (C.zf) goto L_11f9de2d;
  /* 11f9ddde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9dde1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 11f9dde7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9dde9 je 0x11f9ddfb */
  if (C.zf) goto L_11f9ddfb;
  /* 11f9ddeb mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 11f9ddf2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11f9ddf9 jmp 0x11f9de2d */
  goto L_11f9de2d;
L_11f9ddfb:;
  /* 11f9ddfb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9ddfe and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9de01 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9de03 je 0x11f9de15 */
  if (C.zf) goto L_11f9de15;
  /* 11f9de05 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 11f9de0c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11f9de13 jmp 0x11f9de2d */
  goto L_11f9de2d;
L_11f9de15:;
  /* 11f9de15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9de18 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11f9de1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9de1d je 0x11f9de2d */
  if (C.zf) goto L_11f9de2d;
  /* 11f9de1f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 11f9de26 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_11f9de2d:;
  /* 11f9de2d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 11f9de33 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9de36 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9de39 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 11f9de3f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9de42 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 11f9de45 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9de47 jne 0x11f9de65 */
  if (!C.zf) goto L_11f9de65;
  /* 11f9de49 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11f9de4f push eax */
  push32((uint32_t)(EAX));
  /* 11f9de50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9de53 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9de54 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11f9de5a push edx */
  push32((uint32_t)(EDX));
  /* 11f9de5b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11f9de5d call 0x11f9e140 */
  push32(0x11f9de62u); f_11f9e140();
  /* 11f9de62 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f9de65:;
  /* 11f9de65 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11f9de6b push eax */
  push32((uint32_t)(EAX));
  /* 11f9de6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9de6f push ecx */
  push32((uint32_t)(ECX));
  /* 11f9de70 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9de73 push edx */
  push32((uint32_t)(EDX));
  /* 11f9de74 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 11f9de7a push eax */
  push32((uint32_t)(EAX));
  /* 11f9de7b call 0x11f9e180 */
  push32(0x11f9de80u); f_11f9e180();
  /* 11f9de80 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9de83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9de86 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11f9de89 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9de8b je 0x11f9deb3 */
  if (C.zf) goto L_11f9deb3;
  /* 11f9de8d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9de90 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9de93 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9de95 jne 0x11f9deb3 */
  if (!C.zf) goto L_11f9deb3;
  /* 11f9de97 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11f9de9d push eax */
  push32((uint32_t)(EAX));
  /* 11f9de9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9dea1 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9dea2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11f9dea8 push edx */
  push32((uint32_t)(EDX));
  /* 11f9dea9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11f9deab call 0x11f9e140 */
  push32(0x11f9deb0u); f_11f9e140();
  /* 11f9deb0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f9deb3:;
  /* 11f9deb3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9deb7 je 0x11f9df61 */
  if (C.zf) goto L_11f9df61;
  /* 11f9debd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9dec1 jle 0x11f9df61 */
  if ((C.zf||C.sf!=C.of)) goto L_11f9df61;
  /* 11f9dec7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9deca mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 11f9ded0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9ded3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_11f9ded9:;
  /* 11f9ded9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 11f9dedf mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 11f9dee5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9dee8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 11f9deee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9def0 je 0x11f9df5f */
  if (C.zf) goto L_11f9df5f;
  /* 11f9def2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 11f9def8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11f9defb mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 11f9df02 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 11f9df09 push eax */
  push32((uint32_t)(EAX));
  /* 11f9df0a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 11f9df10 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9df11 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 11f9df17 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9df1a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 11f9df20 call 0x11f9f2f0 */
  push32(0x11f9df25u); f_11f9f2f0();
  /* 11f9df25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9df28 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 11f9df2e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9df35 jg 0x11f9df39 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f9df39;
  /* 11f9df37 jmp 0x11f9df5f */
  goto L_11f9df5f;
L_11f9df39:;
  /* 11f9df39 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11f9df3f push eax */
  push32((uint32_t)(EAX));
  /* 11f9df40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9df43 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9df44 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 11f9df4a push edx */
  push32((uint32_t)(EDX));
  /* 11f9df4b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 11f9df51 push eax */
  push32((uint32_t)(EAX));
  /* 11f9df52 call 0x11f9e180 */
  push32(0x11f9df57u); f_11f9e180();
  /* 11f9df57 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9df5a jmp 0x11f9ded9 */
  goto L_11f9ded9;
L_11f9df5f:;
  /* 11f9df5f jmp 0x11f9df7c */
  goto L_11f9df7c;
L_11f9df61:;
  /* 11f9df61 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 11f9df67 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9df68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9df6b push edx */
  push32((uint32_t)(EDX));
  /* 11f9df6c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9df6f push eax */
  push32((uint32_t)(EAX));
  /* 11f9df70 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9df73 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9df74 call 0x11f9e180 */
  push32(0x11f9df79u); f_11f9e180();
  /* 11f9df79 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f9df7c:;
  /* 11f9df7c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9df7f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9df82 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9df84 je 0x11f9dfa2 */
  if (C.zf) goto L_11f9dfa2;
  /* 11f9df86 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11f9df8c push eax */
  push32((uint32_t)(EAX));
  /* 11f9df8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9df90 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9df91 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11f9df97 push edx */
  push32((uint32_t)(EDX));
  /* 11f9df98 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11f9df9a call 0x11f9e140 */
  push32(0x11f9df9fu); f_11f9e140();
  /* 11f9df9f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f9dfa2:;
  /* 11f9dfa2 jmp 0x11f9d3b4 */
  goto L_11f9d3b4;
L_11f9dfa7:;
  /* 11f9dfa7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 11f9dfad pop edi */
  EDI = (pop32());
  /* 11f9dfae pop esi */
  ESI = (pop32());
  /* 11f9dfaf pop ebx */
  EBX = (pop32());
  /* 11f9dfb0 mov esp, ebp */
  ESP = (EBP);
  /* 11f9dfb2 pop ebp */
  EBP = (pop32());
  /* 11f9dfb3 ret  */
  ESPCHK(0x11f9d390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0c0 @ 0x11f9e0c0 (119 bytes, 44 insns) */
void f_11f9e0c0(void) {
  FTRACE(0x11f9e0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9e0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9e0c1 mov ebp, esp */
  EBP = (ESP);
  /* 11f9e0c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9e0c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9e0c7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f9e0ca sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9e0cd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9e0d0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11f9e0d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9e0d6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e0da jl 0x11f9e102 */
  if ((C.sf!=C.of)) goto L_11f9e102;
  /* 11f9e0dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9e0df mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f9e0e1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11f9e0e4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11f9e0e6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11f9e0ea and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f9e0f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f9e0f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9e0f6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f9e0f8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9e0fb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9e0fe mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11f9e100 jmp 0x11f9e115 */
  goto L_11f9e115;
L_11f9e102:;
  /* 11f9e102 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9e105 push edx */
  push32((uint32_t)(EDX));
  /* 11f9e106 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9e109 push eax */
  push32((uint32_t)(EAX));
  /* 11f9e10a call 0x11f9d110 */
  push32(0x11f9e10fu); f_11f9d110();
  /* 11f9e10f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9e112 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f9e115:;
  /* 11f9e115 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e119 jne 0x11f9e126 */
  if (!C.zf) goto L_11f9e126;
  /* 11f9e11b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f9e11e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11f9e124 jmp 0x11f9e133 */
  goto L_11f9e133;
L_11f9e126:;
  /* 11f9e126 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f9e129 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f9e12b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9e12e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f9e131 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11f9e133:;
  /* 11f9e133 mov esp, ebp */
  ESP = (EBP);
  /* 11f9e135 pop ebp */
  EBP = (pop32());
  /* 11f9e136 ret  */
  ESPCHK(0x11f9e0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e140 @ 0x11f9e140 (53 bytes, 23 insns) */
void f_11f9e140(void) {
  FTRACE(0x11f9e140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9e140 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9e141 mov ebp, esp */
  EBP = (ESP);
L_11f9e143:;
  /* 11f9e143 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9e146 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9e149 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9e14c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11f9e14f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9e151 jle 0x11f9e173 */
  if ((C.zf||C.sf!=C.of)) goto L_11f9e173;
  /* 11f9e153 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f9e156 push edx */
  push32((uint32_t)(EDX));
  /* 11f9e157 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f9e15a push eax */
  push32((uint32_t)(EAX));
  /* 11f9e15b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9e15e push ecx */
  push32((uint32_t)(ECX));
  /* 11f9e15f call 0x11f9e0c0 */
  push32(0x11f9e164u); f_11f9e0c0();
  /* 11f9e164 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9e167 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f9e16a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e16d jne 0x11f9e171 */
  if (!C.zf) goto L_11f9e171;
  /* 11f9e16f jmp 0x11f9e173 */
  goto L_11f9e173;
L_11f9e171:;
  /* 11f9e171 jmp 0x11f9e143 */
  goto L_11f9e143;
L_11f9e173:;
  /* 11f9e173 pop ebp */
  EBP = (pop32());
  /* 11f9e174 ret  */
  ESPCHK(0x11f9e140u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e180 @ 0x11f9e180 (74 bytes, 31 insns) */
void f_11f9e180(void) {
  FTRACE(0x11f9e180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9e180 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9e181 mov ebp, esp */
  EBP = (ESP);
  /* 11f9e183 push ecx */
  push32((uint32_t)(ECX));
L_11f9e184:;
  /* 11f9e184 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9e187 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9e18a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9e18d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11f9e190 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9e192 jle 0x11f9e1c6 */
  if ((C.zf||C.sf!=C.of)) goto L_11f9e1c6;
  /* 11f9e194 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f9e197 push edx */
  push32((uint32_t)(EDX));
  /* 11f9e198 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f9e19b push eax */
  push32((uint32_t)(EAX));
  /* 11f9e19c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9e19f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11f9e1a2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f9e1a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9e1a8 push eax */
  push32((uint32_t)(EAX));
  /* 11f9e1a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9e1ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9e1af mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11f9e1b2 call 0x11f9e0c0 */
  push32(0x11f9e1b7u); f_11f9e0c0();
  /* 11f9e1b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9e1ba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f9e1bd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e1c0 jne 0x11f9e1c4 */
  if (!C.zf) goto L_11f9e1c4;
  /* 11f9e1c2 jmp 0x11f9e1c6 */
  goto L_11f9e1c6;
L_11f9e1c4:;
  /* 11f9e1c4 jmp 0x11f9e184 */
  goto L_11f9e184;
L_11f9e1c6:;
  /* 11f9e1c6 mov esp, ebp */
  ESP = (EBP);
  /* 11f9e1c8 pop ebp */
  EBP = (pop32());
  /* 11f9e1c9 ret  */
  ESPCHK(0x11f9e180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1d0 @ 0x11f9e1d0 (26 bytes, 12 insns) */
void f_11f9e1d0(void) {
  FTRACE(0x11f9e1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9e1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9e1d1 mov ebp, esp */
  EBP = (ESP);
  /* 11f9e1d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9e1d6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f9e1d8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9e1db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9e1de mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11f9e1e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9e1e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f9e1e5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11f9e1e8 pop ebp */
  EBP = (pop32());
  /* 11f9e1e9 ret  */
  ESPCHK(0x11f9e1d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1f0 @ 0x11f9e1f0 (31 bytes, 14 insns) */
void f_11f9e1f0(void) {
  FTRACE(0x11f9e1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9e1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9e1f1 mov ebp, esp */
  EBP = (ESP);
  /* 11f9e1f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9e1f6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f9e1f8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9e1fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9e1fe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11f9e200 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9e203 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f9e205 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9e208 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11f9e20a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f9e20d pop ebp */
  EBP = (pop32());
  /* 11f9e20e ret  */
  ESPCHK(0x11f9e1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e210 @ 0x11f9e210 (27 bytes, 12 insns) */
void f_11f9e210(void) {
  FTRACE(0x11f9e210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9e210 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9e211 mov ebp, esp */
  EBP = (ESP);
  /* 11f9e213 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9e216 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f9e218 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9e21b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9e21e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11f9e220 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9e223 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f9e225 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 11f9e229 pop ebp */
  EBP = (pop32());
  /* 11f9e22a ret  */
  ESPCHK(0x11f9e210u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x11f9e230 (145 bytes, 42 insns) */
void f_11f9e230(void) {
  FTRACE(0x11f9e230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9e230 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9e231 mov ebp, esp */
  EBP = (ESP);
  /* 11f9e233 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9e234 call 0x11f9e2e0 */
  push32(0x11f9e239u); f_11f9e2e0();
  /* 11f9e239 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9e23c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11f9e23e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f9e245 jmp 0x11f9e250 */
  goto L_11f9e250;
L_11f9e247:;
  /* 11f9e247 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9e24a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9e24d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f9e250:;
  /* 11f9e250 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e254 jae 0x11f9e27a */
  if (!C.cf) goto L_11f9e27a;
  /* 11f9e256 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9e259 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9e25c cmp ecx, dword ptr [eax*8 + 0x11fc0fc8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11fc0fc8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e263 jne 0x11f9e278 */
  if (!C.zf) goto L_11f9e278;
  /* 11f9e265 call 0x11f9e2d0 */
  push32(0x11f9e26au); f_11f9e2d0();
  /* 11f9e26a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9e26d mov ecx, dword ptr [edx*8 + 0x11fc0fcc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x11fc0fcc)));
  /* 11f9e274 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11f9e276 jmp 0x11f9e2bd */
  goto L_11f9e2bd;
L_11f9e278:;
  /* 11f9e278 jmp 0x11f9e247 */
  goto L_11f9e247;
L_11f9e27a:;
  /* 11f9e27a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e27e jb 0x11f9e293 */
  if (C.cf) goto L_11f9e293;
  /* 11f9e280 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e284 ja 0x11f9e293 */
  if ((!C.cf&&!C.zf)) goto L_11f9e293;
  /* 11f9e286 call 0x11f9e2d0 */
  push32(0x11f9e28bu); f_11f9e2d0();
  /* 11f9e28b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 11f9e291 jmp 0x11f9e2bd */
  goto L_11f9e2bd;
L_11f9e293:;
  /* 11f9e293 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e29a jb 0x11f9e2b2 */
  if (C.cf) goto L_11f9e2b2;
  /* 11f9e29c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e2a3 ja 0x11f9e2b2 */
  if ((!C.cf&&!C.zf)) goto L_11f9e2b2;
  /* 11f9e2a5 call 0x11f9e2d0 */
  push32(0x11f9e2aau); f_11f9e2d0();
  /* 11f9e2aa mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 11f9e2b0 jmp 0x11f9e2bd */
  goto L_11f9e2bd;
L_11f9e2b2:;
  /* 11f9e2b2 call 0x11f9e2d0 */
  push32(0x11f9e2b7u); f_11f9e2d0();
  /* 11f9e2b7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_11f9e2bd:;
  /* 11f9e2bd mov esp, ebp */
  ESP = (EBP);
  /* 11f9e2bf pop ebp */
  EBP = (pop32());
  /* 11f9e2c0 ret  */
  ESPCHK(0x11f9e230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2d0 @ 0x11f9e2d0 (13 bytes, 6 insns) */
void f_11f9e2d0(void) {
  FTRACE(0x11f9e2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9e2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9e2d1 mov ebp, esp */
  EBP = (ESP);
  /* 11f9e2d3 call 0x11f95e40 */
  push32(0x11f9e2d8u); f_11f95e40();
  /* 11f9e2d8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9e2db pop ebp */
  EBP = (pop32());
  /* 11f9e2dc ret  */
  ESPCHK(0x11f9e2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2e0 @ 0x11f9e2e0 (13 bytes, 6 insns) */
void f_11f9e2e0(void) {
  FTRACE(0x11f9e2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9e2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9e2e1 mov ebp, esp */
  EBP = (ESP);
  /* 11f9e2e3 call 0x11f95e40 */
  push32(0x11f9e2e8u); f_11f95e40();
  /* 11f9e2e8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9e2eb pop ebp */
  EBP = (pop32());
  /* 11f9e2ec ret  */
  ESPCHK(0x11f9e2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2f0 @ 0x11f9e2f0 (664 bytes, 259 insns) [15 switch table(s)] */
void f_11f9e2f0(void) {
  FTRACE(0x11f9e2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9e2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9e2f1 mov ebp, esp */
  EBP = (ESP);
  /* 11f9e2f3 push edi */
  push32((uint32_t)(EDI));
  /* 11f9e2f4 push esi */
  push32((uint32_t)(ESI));
  /* 11f9e2f5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9e2f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f9e2fb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9e2fe mov eax, ecx */
  EAX = (ECX);
  /* 11f9e300 mov edx, ecx */
  EDX = (ECX);
  /* 11f9e302 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9e304 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e306 jbe 0x11f9e310 */
  if ((C.cf||C.zf)) goto L_11f9e310;
  /* 11f9e308 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e30a jb 0x11f9e488 */
  if (C.cf) goto L_11f9e488;
L_11f9e310:;
  /* 11f9e310 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11f9e316 jne 0x11f9e32c */
  if (!C.zf) goto L_11f9e32c;
  /* 11f9e318 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f9e31b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9e31e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e321 jb 0x11f9e34c */
  if (C.cf) goto L_11f9e34c;
  /* 11f9e323 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f9e325 jmp dword ptr [edx*4 + 0x11f9e438] */
  switch (EDX) {
    case 0: goto L_11f9e448;
    case 1: goto L_11f9e450;
    case 2: goto L_11f9e45c;
    case 3: goto L_11f9e470;
    default: x86_unimpl("switch@0x11f9e325 out of table"); return;
  }
L_11f9e32c:;
  /* 11f9e32c mov eax, edi */
  EAX = (EDI);
  /* 11f9e32e mov edx, 3 */
  EDX = (0x3u);
  /* 11f9e333 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9e336 jb 0x11f9e344 */
  if (C.cf) goto L_11f9e344;
  /* 11f9e338 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11f9e33b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9e33d jmp dword ptr [eax*4 + 0x11f9e350] */
  switch (EAX) {
    case 1: goto L_11f9e360;
    case 2: goto L_11f9e38c;
    case 3: goto L_11f9e3b0;
    default: x86_unimpl("switch@0x11f9e33d out of table"); return;
  }
L_11f9e344:;
  /* 11f9e344 jmp dword ptr [ecx*4 + 0x11f9e448] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11f9e448)))); return;
  /* 11f9e34b nop  */
  /* nop */
L_11f9e34c:;
  /* 11f9e34c jmp dword ptr [ecx*4 + 0x11f9e3cc] */
  switch (ECX) {
    case 0: goto L_11f9e42f;
    case 1: goto L_11f9e41c;
    case 2: goto L_11f9e414;
    case 3: goto L_11f9e40c;
    case 4: goto L_11f9e404;
    case 5: goto L_11f9e3fc;
    case 6: goto L_11f9e3f4;
    case 7: goto L_11f9e3ec;
    default: x86_unimpl("switch@0x11f9e34c out of table"); return;
  }
  /* 11f9e353 nop  */
  /* nop */
L_11f9e360:;
  /* 11f9e360 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f9e362 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f9e364 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f9e366 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f9e369 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f9e36c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f9e36f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f9e372 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f9e375 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9e378 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9e37b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e37e jb 0x11f9e34c */
  if (C.cf) goto L_11f9e34c;
  /* 11f9e380 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f9e382 jmp dword ptr [edx*4 + 0x11f9e438] */
  switch (EDX) {
    case 0: goto L_11f9e448;
    case 1: goto L_11f9e450;
    case 2: goto L_11f9e45c;
    case 3: goto L_11f9e470;
    default: x86_unimpl("switch@0x11f9e382 out of table"); return;
  }
  /* 11f9e389 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f9e38c:;
  /* 11f9e38c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f9e38e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f9e390 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f9e392 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f9e395 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f9e398 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f9e39b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9e39e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9e3a1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e3a4 jb 0x11f9e34c */
  if (C.cf) goto L_11f9e34c;
  /* 11f9e3a6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f9e3a8 jmp dword ptr [edx*4 + 0x11f9e438] */
  switch (EDX) {
    case 0: goto L_11f9e448;
    case 1: goto L_11f9e450;
    case 2: goto L_11f9e45c;
    case 3: goto L_11f9e470;
    default: x86_unimpl("switch@0x11f9e3a8 out of table"); return;
  }
  /* 11f9e3af nop  */
  /* nop */
L_11f9e3b0:;
  /* 11f9e3b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f9e3b2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f9e3b4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f9e3b6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f9e3b7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f9e3ba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f9e3bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e3be jb 0x11f9e34c */
  if (C.cf) goto L_11f9e34c;
  /* 11f9e3c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f9e3c2 jmp dword ptr [edx*4 + 0x11f9e438] */
  switch (EDX) {
    case 0: goto L_11f9e448;
    case 1: goto L_11f9e450;
    case 2: goto L_11f9e45c;
    case 3: goto L_11f9e470;
    default: x86_unimpl("switch@0x11f9e3c2 out of table"); return;
  }
  /* 11f9e3c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f9e3ec:;
  /* 11f9e3ec mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11f9e3f0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11f9e3f4:;
  /* 11f9e3f4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11f9e3f8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11f9e3fc:;
  /* 11f9e3fc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11f9e400 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11f9e404:;
  /* 11f9e404 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11f9e408 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11f9e40c:;
  /* 11f9e40c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11f9e410 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11f9e414:;
  /* 11f9e414 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11f9e418 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11f9e41c:;
  /* 11f9e41c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11f9e420 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11f9e424 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11f9e42b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9e42d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11f9e42f:;
  /* 11f9e42f jmp dword ptr [edx*4 + 0x11f9e438] */
  switch (EDX) {
    case 0: goto L_11f9e448;
    case 1: goto L_11f9e450;
    case 2: goto L_11f9e45c;
    case 3: goto L_11f9e470;
    default: x86_unimpl("switch@0x11f9e42f out of table"); return;
  }
  /* 11f9e436 mov edi, edi */
  EDI = (EDI);
L_11f9e448:;
  /* 11f9e448 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9e44b pop esi */
  ESI = (pop32());
  /* 11f9e44c pop edi */
  EDI = (pop32());
  /* 11f9e44d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f9e44e ret  */
  ESPCHK(0x11f9e2f0u, _esp0);
  ESP += 4; return;
  /* 11f9e44f nop  */
  /* nop */
L_11f9e450:;
  /* 11f9e450 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f9e452 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f9e454 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9e457 pop esi */
  ESI = (pop32());
  /* 11f9e458 pop edi */
  EDI = (pop32());
  /* 11f9e459 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f9e45a ret  */
  ESPCHK(0x11f9e2f0u, _esp0);
  ESP += 4; return;
  /* 11f9e45b nop  */
  /* nop */
L_11f9e45c:;
  /* 11f9e45c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f9e45e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f9e460 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f9e463 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f9e466 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9e469 pop esi */
  ESI = (pop32());
  /* 11f9e46a pop edi */
  EDI = (pop32());
  /* 11f9e46b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f9e46c ret  */
  ESPCHK(0x11f9e2f0u, _esp0);
  ESP += 4; return;
  /* 11f9e46d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f9e470:;
  /* 11f9e470 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f9e472 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f9e474 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f9e477 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f9e47a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f9e47d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f9e480 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9e483 pop esi */
  ESI = (pop32());
  /* 11f9e484 pop edi */
  EDI = (pop32());
  /* 11f9e485 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f9e486 ret  */
  ESPCHK(0x11f9e2f0u, _esp0);
  ESP += 4; return;
  /* 11f9e487 nop  */
  /* nop */
L_11f9e488:;
  /* 11f9e488 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11f9e48c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11f9e490 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11f9e496 jne 0x11f9e4bc */
  if (!C.zf) goto L_11f9e4bc;
  /* 11f9e498 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f9e49b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9e49e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e4a1 jb 0x11f9e4b0 */
  if (C.cf) goto L_11f9e4b0;
  /* 11f9e4a3 std  */
  C.df=1;
  /* 11f9e4a4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f9e4a6 cld  */
  C.df=0;
  /* 11f9e4a7 jmp dword ptr [edx*4 + 0x11f9e5d0] */
  switch (EDX) {
    case 0: goto L_11f9e5e0;
    case 1: goto L_11f9e5e8;
    case 2: goto L_11f9e5f8;
    case 3: goto L_11f9e60c;
    default: x86_unimpl("switch@0x11f9e4a7 out of table"); return;
  }
  /* 11f9e4ae mov edi, edi */
  EDI = (EDI);
L_11f9e4b0:;
  /* 11f9e4b0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f9e4b2 jmp dword ptr [ecx*4 + 0x11f9e580] */
  switch (ECX) {
    case 0: goto L_11f9e5c7;
    default: x86_unimpl("switch@0x11f9e4b2 out of table"); return;
  }
  /* 11f9e4b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f9e4bc:;
  /* 11f9e4bc mov eax, edi */
  EAX = (EDI);
  /* 11f9e4be mov edx, 3 */
  EDX = (0x3u);
  /* 11f9e4c3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e4c6 jb 0x11f9e4d4 */
  if (C.cf) goto L_11f9e4d4;
  /* 11f9e4c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11f9e4cb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9e4cd jmp dword ptr [eax*4 + 0x11f9e4d8] */
  switch (EAX) {
    case 1: goto L_11f9e4e8;
    case 2: goto L_11f9e508;
    case 3: goto L_11f9e530;
    default: x86_unimpl("switch@0x11f9e4cd out of table"); return;
  }
L_11f9e4d4:;
  /* 11f9e4d4 jmp dword ptr [ecx*4 + 0x11f9e5d0] */
  switch (ECX) {
    case 0: goto L_11f9e5e0;
    case 1: goto L_11f9e5e8;
    case 2: goto L_11f9e5f8;
    case 3: goto L_11f9e60c;
    default: x86_unimpl("switch@0x11f9e4d4 out of table"); return;
  }
  /* 11f9e4db nop  */
  /* nop */
L_11f9e4e8:;
  /* 11f9e4e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f9e4eb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f9e4ed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f9e4f0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11f9e4f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f9e4f4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11f9e4f5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e4f8 jb 0x11f9e4b0 */
  if (C.cf) goto L_11f9e4b0;
  /* 11f9e4fa std  */
  C.df=1;
  /* 11f9e4fb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f9e4fd cld  */
  C.df=0;
  /* 11f9e4fe jmp dword ptr [edx*4 + 0x11f9e5d0] */
  switch (EDX) {
    case 0: goto L_11f9e5e0;
    case 1: goto L_11f9e5e8;
    case 2: goto L_11f9e5f8;
    case 3: goto L_11f9e60c;
    default: x86_unimpl("switch@0x11f9e4fe out of table"); return;
  }
  /* 11f9e505 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f9e508:;
  /* 11f9e508 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f9e50b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f9e50d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f9e510 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f9e513 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f9e516 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f9e519 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9e51c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9e51f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e522 jb 0x11f9e4b0 */
  if (C.cf) goto L_11f9e4b0;
  /* 11f9e524 std  */
  C.df=1;
  /* 11f9e525 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f9e527 cld  */
  C.df=0;
  /* 11f9e528 jmp dword ptr [edx*4 + 0x11f9e5d0] */
  switch (EDX) {
    case 0: goto L_11f9e5e0;
    case 1: goto L_11f9e5e8;
    case 2: goto L_11f9e5f8;
    case 3: goto L_11f9e60c;
    default: x86_unimpl("switch@0x11f9e528 out of table"); return;
  }
  /* 11f9e52f nop  */
  /* nop */
L_11f9e530:;
  /* 11f9e530 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f9e533 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f9e535 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f9e538 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f9e53b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f9e53e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f9e541 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f9e544 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f9e547 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9e54a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9e54d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e550 jb 0x11f9e4b0 */
  if (C.cf) goto L_11f9e4b0;
  /* 11f9e556 std  */
  C.df=1;
  /* 11f9e557 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f9e559 cld  */
  C.df=0;
  /* 11f9e55a jmp dword ptr [edx*4 + 0x11f9e5d0] */
  switch (EDX) {
    case 0: goto L_11f9e5e0;
    case 1: goto L_11f9e5e8;
    case 2: goto L_11f9e5f8;
    case 3: goto L_11f9e60c;
    default: x86_unimpl("switch@0x11f9e55a out of table"); return;
  }
  /* 11f9e561 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11f9e564 test ch, ah */
  { uint32_t _r=(C.c.b.h)&(AH); fl_logic(_r,8); }
  /* 11f9e566 stc  */
  x86_unimpl("stc @ 0x11f9e566");
  /* 11f9e567 adc dword ptr [ebp - 0x1a6bee07], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1a6bee07))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(EBP + -0x1a6bee07), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f9e56e stc  */
  x86_unimpl("stc @ 0x11f9e56e");
  /* 11f9e56f adc dword ptr [ebp - 0x1a5bee07], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1a5bee07))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(EBP + -0x1a5bee07), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f9e576 stc  */
  x86_unimpl("stc @ 0x11f9e576");
  /* 11f9e577 adc dword ptr [ebp - 0x1a4bee07], ebp */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1a4bee07))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(EBP + -0x1a4bee07), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f9e57e stc  */
  x86_unimpl("stc @ 0x11f9e57e");
  /* 11f9e584 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11f9e588 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11f9e58c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11f9e590 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11f9e594 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11f9e598 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11f9e59c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11f9e5a0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11f9e5a4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11f9e5a8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11f9e5ac mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11f9e5b0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11f9e5b4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11f9e5b8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11f9e5bc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11f9e5c3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9e5c5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11f9e5c7:;
  /* 11f9e5c7 jmp dword ptr [edx*4 + 0x11f9e5d0] */
  switch (EDX) {
    case 0: goto L_11f9e5e0;
    case 1: goto L_11f9e5e8;
    case 2: goto L_11f9e5f8;
    case 3: goto L_11f9e60c;
    default: x86_unimpl("switch@0x11f9e5c7 out of table"); return;
  }
  /* 11f9e5ce mov edi, edi */
  EDI = (EDI);
L_11f9e5e0:;
  /* 11f9e5e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9e5e3 pop esi */
  ESI = (pop32());
  /* 11f9e5e4 pop edi */
  EDI = (pop32());
  /* 11f9e5e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f9e5e6 ret  */
  ESPCHK(0x11f9e2f0u, _esp0);
  ESP += 4; return;
  /* 11f9e5e7 nop  */
  /* nop */
L_11f9e5e8:;
  /* 11f9e5e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f9e5eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f9e5ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9e5f1 pop esi */
  ESI = (pop32());
  /* 11f9e5f2 pop edi */
  EDI = (pop32());
  /* 11f9e5f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f9e5f4 ret  */
  ESPCHK(0x11f9e2f0u, _esp0);
  ESP += 4; return;
  /* 11f9e5f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f9e5f8:;
  /* 11f9e5f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f9e5fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f9e5fe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f9e601 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f9e604 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9e607 pop esi */
  ESI = (pop32());
  /* 11f9e608 pop edi */
  EDI = (pop32());
  /* 11f9e609 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f9e60a ret  */
  ESPCHK(0x11f9e2f0u, _esp0);
  ESP += 4; return;
  /* 11f9e60b nop  */
  /* nop */
L_11f9e60c:;
  /* 11f9e60c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f9e60f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f9e612 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f9e615 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f9e618 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f9e61b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f9e61e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9e621 pop esi */
  ESI = (pop32());
  /* 11f9e622 pop edi */
  EDI = (pop32());
  /* 11f9e623 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f9e624 ret  */
  ESPCHK(0x11f9e2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e630 @ 0x11f9e630 (421 bytes, 148 insns) */
void f_11f9e630(void) {
  FTRACE(0x11f9e630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9e630 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9e631 mov ebp, esp */
  EBP = (ESP);
  /* 11f9e633 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f9e635 push 0x11fbe188 */
  push32((uint32_t)(0x11fbe188u));
  /* 11f9e63a push 0x11f9f508 */
  push32((uint32_t)(0x11f9f508u));
  /* 11f9e63f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11f9e645 push eax */
  push32((uint32_t)(EAX));
  /* 11f9e646 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11f9e64d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9e650 push ebx */
  push32((uint32_t)(EBX));
  /* 11f9e651 push esi */
  push32((uint32_t)(ESI));
  /* 11f9e652 push edi */
  push32((uint32_t)(EDI));
  /* 11f9e653 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f9e656 cmp dword ptr [0x11fc28b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc28b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e65d jne 0x11f9e6ae */
  if (!C.zf) goto L_11f9e6ae;
  /* 11f9e65f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11f9e662 push eax */
  push32((uint32_t)(EAX));
  /* 11f9e663 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f9e665 push 0x11fbe180 */
  push32((uint32_t)(0x11fbe180u));
  /* 11f9e66a push 1 */
  push32((uint32_t)(0x1u));
  /* 11f9e66c call dword ptr [0x11fc5314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5314))), 0x11f9e672u);
  /* 11f9e672 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9e674 je 0x11f9e682 */
  if (C.zf) goto L_11f9e682;
  /* 11f9e676 mov dword ptr [0x11fc28b4], 1 */
  w32((uint32_t)(0x11fc28b4), (0x1u));
  /* 11f9e680 jmp 0x11f9e6ae */
  goto L_11f9e6ae;
L_11f9e682:;
  /* 11f9e682 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11f9e685 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9e686 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f9e688 push 0x11fbe17c */
  push32((uint32_t)(0x11fbe17cu));
  /* 11f9e68d push 1 */
  push32((uint32_t)(0x1u));
  /* 11f9e68f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9e691 call dword ptr [0x11fc5324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5324))), 0x11f9e697u);
  /* 11f9e697 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9e699 je 0x11f9e6a7 */
  if (C.zf) goto L_11f9e6a7;
  /* 11f9e69b mov dword ptr [0x11fc28b4], 2 */
  w32((uint32_t)(0x11fc28b4), (0x2u));
  /* 11f9e6a5 jmp 0x11f9e6ae */
  goto L_11f9e6ae;
L_11f9e6a7:;
  /* 11f9e6a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9e6a9 jmp 0x11f9e7d8 */
  goto L_11f9e7d8;
L_11f9e6ae:;
  /* 11f9e6ae cmp dword ptr [0x11fc28b4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11fc28b4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e6b5 jne 0x11f9e6e5 */
  if (!C.zf) goto L_11f9e6e5;
  /* 11f9e6b7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e6bb jne 0x11f9e6c6 */
  if (!C.zf) goto L_11f9e6c6;
  /* 11f9e6bd mov edx, dword ptr [0x11fc28c0] */
  EDX = (r32((uint32_t)(0x11fc28c0)));
  /* 11f9e6c3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11f9e6c6:;
  /* 11f9e6c6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f9e6c9 push eax */
  push32((uint32_t)(EAX));
  /* 11f9e6ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f9e6cd push ecx */
  push32((uint32_t)(ECX));
  /* 11f9e6ce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9e6d1 push edx */
  push32((uint32_t)(EDX));
  /* 11f9e6d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9e6d5 push eax */
  push32((uint32_t)(EAX));
  /* 11f9e6d6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f9e6d9 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9e6da call dword ptr [0x11fc5324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5324))), 0x11f9e6e0u);
  /* 11f9e6e0 jmp 0x11f9e7d8 */
  goto L_11f9e7d8;
L_11f9e6e5:;
  /* 11f9e6e5 cmp dword ptr [0x11fc28b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11fc28b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e6ec jne 0x11f9e7d6 */
  if (!C.zf) goto L_11f9e7d6;
  /* 11f9e6f2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e6f6 jne 0x11f9e701 */
  if (!C.zf) goto L_11f9e701;
  /* 11f9e6f8 mov edx, dword ptr [0x11fc28d0] */
  EDX = (r32((uint32_t)(0x11fc28d0)));
  /* 11f9e6fe mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11f9e701:;
  /* 11f9e701 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9e703 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9e705 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f9e708 push eax */
  push32((uint32_t)(EAX));
  /* 11f9e709 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9e70c push ecx */
  push32((uint32_t)(ECX));
  /* 11f9e70d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11f9e710 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f9e712 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9e714 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9e717 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9e71a push edx */
  push32((uint32_t)(EDX));
  /* 11f9e71b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f9e71e push eax */
  push32((uint32_t)(EAX));
  /* 11f9e71f call dword ptr [0x11fc531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc531c))), 0x11f9e725u);
  /* 11f9e725 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11f9e728 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e72c jne 0x11f9e735 */
  if (!C.zf) goto L_11f9e735;
  /* 11f9e72e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9e730 jmp 0x11f9e7d8 */
  goto L_11f9e7d8;
L_11f9e735:;
  /* 11f9e735 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f9e73c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9e73f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11f9e741 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9e744 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11f9e746 call 0x11f995a0 */
  push32(0x11f9e74bu); f_11f995a0();
  /* 11f9e74b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 11f9e74e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f9e751 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9e754 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11f9e757 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9e75a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11f9e75c push edx */
  push32((uint32_t)(EDX));
  /* 11f9e75d push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9e75f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9e762 push eax */
  push32((uint32_t)(EAX));
  /* 11f9e763 call 0x11f9a170 */
  push32(0x11f9e768u); f_11f9a170();
  /* 11f9e768 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9e76b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11f9e772 jmp 0x11f9e78b */
  goto L_11f9e78b;
  /* 11f9e774 mov eax, 1 */
  EAX = (0x1u);
  /* 11f9e779 ret  */
  ESPCHK(0x11f9e630u, _esp0);
  ESP += 4; return;
  /* 11f9e77a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9e77d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11f9e784 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11f9e78b:;
  /* 11f9e78b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e78f jne 0x11f9e795 */
  if (!C.zf) goto L_11f9e795;
  /* 11f9e791 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9e793 jmp 0x11f9e7d8 */
  goto L_11f9e7d8;
L_11f9e795:;
  /* 11f9e795 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9e798 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9e799 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9e79c push edx */
  push32((uint32_t)(EDX));
  /* 11f9e79d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f9e7a0 push eax */
  push32((uint32_t)(EAX));
  /* 11f9e7a1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9e7a4 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9e7a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f9e7a7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f9e7aa push edx */
  push32((uint32_t)(EDX));
  /* 11f9e7ab call dword ptr [0x11fc531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc531c))), 0x11f9e7b1u);
  /* 11f9e7b1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11f9e7b4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e7b8 jne 0x11f9e7be */
  if (!C.zf) goto L_11f9e7be;
  /* 11f9e7ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9e7bc jmp 0x11f9e7d8 */
  goto L_11f9e7d8;
L_11f9e7be:;
  /* 11f9e7be mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f9e7c1 push eax */
  push32((uint32_t)(EAX));
  /* 11f9e7c2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f9e7c5 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9e7c6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9e7c9 push edx */
  push32((uint32_t)(EDX));
  /* 11f9e7ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9e7cd push eax */
  push32((uint32_t)(EAX));
  /* 11f9e7ce call dword ptr [0x11fc5314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5314))), 0x11f9e7d4u);
  /* 11f9e7d4 jmp 0x11f9e7d8 */
  goto L_11f9e7d8;
L_11f9e7d6:;
  /* 11f9e7d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f9e7d8:;
  /* 11f9e7d8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11f9e7db mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9e7de mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11f9e7e5 pop edi */
  EDI = (pop32());
  /* 11f9e7e6 pop esi */
  ESI = (pop32());
  /* 11f9e7e7 pop ebx */
  EBX = (pop32());
  /* 11f9e7e8 mov esp, ebp */
  ESP = (EBP);
  /* 11f9e7ea pop ebp */
  EBP = (pop32());
  /* 11f9e7eb ret  */
  ESPCHK(0x11f9e630u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7f0 @ 0x11f9e7f0 (727 bytes, 263 insns) */
void f_11f9e7f0(void) {
  FTRACE(0x11f9e7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9e7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9e7f1 mov ebp, esp */
  EBP = (ESP);
  /* 11f9e7f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f9e7f5 push 0x11fbe198 */
  push32((uint32_t)(0x11fbe198u));
  /* 11f9e7fa push 0x11f9f508 */
  push32((uint32_t)(0x11f9f508u));
  /* 11f9e7ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11f9e805 push eax */
  push32((uint32_t)(EAX));
  /* 11f9e806 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11f9e80d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9e810 push ebx */
  push32((uint32_t)(EBX));
  /* 11f9e811 push esi */
  push32((uint32_t)(ESI));
  /* 11f9e812 push edi */
  push32((uint32_t)(EDI));
  /* 11f9e813 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f9e816 cmp dword ptr [0x11fc28d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc28d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e81d jne 0x11f9e876 */
  if (!C.zf) goto L_11f9e876;
  /* 11f9e81f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9e821 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9e823 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f9e825 push 0x11fbe180 */
  push32((uint32_t)(0x11fbe180u));
  /* 11f9e82a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11f9e82f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9e831 call dword ptr [0x11fc5318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5318))), 0x11f9e837u);
  /* 11f9e837 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9e839 je 0x11f9e847 */
  if (C.zf) goto L_11f9e847;
  /* 11f9e83b mov dword ptr [0x11fc28d8], 1 */
  w32((uint32_t)(0x11fc28d8), (0x1u));
  /* 11f9e845 jmp 0x11f9e876 */
  goto L_11f9e876;
L_11f9e847:;
  /* 11f9e847 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9e849 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9e84b push 1 */
  push32((uint32_t)(0x1u));
  /* 11f9e84d push 0x11fbe17c */
  push32((uint32_t)(0x11fbe17cu));
  /* 11f9e852 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11f9e857 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9e859 call dword ptr [0x11fc5310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5310))), 0x11f9e85fu);
  /* 11f9e85f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9e861 je 0x11f9e86f */
  if (C.zf) goto L_11f9e86f;
  /* 11f9e863 mov dword ptr [0x11fc28d8], 2 */
  w32((uint32_t)(0x11fc28d8), (0x2u));
  /* 11f9e86d jmp 0x11f9e876 */
  goto L_11f9e876;
L_11f9e86f:;
  /* 11f9e86f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9e871 jmp 0x11f9eae1 */
  goto L_11f9eae1;
L_11f9e876:;
  /* 11f9e876 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e87a jle 0x11f9e88f */
  if ((C.zf||C.sf!=C.of)) goto L_11f9e88f;
  /* 11f9e87c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f9e87f push eax */
  push32((uint32_t)(EAX));
  /* 11f9e880 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f9e883 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9e884 call 0x11f9eb00 */
  push32(0x11f9e889u); f_11f9eb00();
  /* 11f9e889 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9e88c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11f9e88f:;
  /* 11f9e88f cmp dword ptr [0x11fc28d8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11fc28d8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e896 jne 0x11f9e8bb */
  if (!C.zf) goto L_11f9e8bb;
  /* 11f9e898 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f9e89b push edx */
  push32((uint32_t)(EDX));
  /* 11f9e89c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f9e89f push eax */
  push32((uint32_t)(EAX));
  /* 11f9e8a0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f9e8a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9e8a4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f9e8a7 push edx */
  push32((uint32_t)(EDX));
  /* 11f9e8a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9e8ab push eax */
  push32((uint32_t)(EAX));
  /* 11f9e8ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9e8af push ecx */
  push32((uint32_t)(ECX));
  /* 11f9e8b0 call dword ptr [0x11fc5310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5310))), 0x11f9e8b6u);
  /* 11f9e8b6 jmp 0x11f9eae1 */
  goto L_11f9eae1;
L_11f9e8bb:;
  /* 11f9e8bb cmp dword ptr [0x11fc28d8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11fc28d8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e8c2 jne 0x11f9eadf */
  if (!C.zf) goto L_11f9eadf;
  /* 11f9e8c8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e8cc jne 0x11f9e8d7 */
  if (!C.zf) goto L_11f9e8d7;
  /* 11f9e8ce mov edx, dword ptr [0x11fc28d0] */
  EDX = (r32((uint32_t)(0x11fc28d0)));
  /* 11f9e8d4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_11f9e8d7:;
  /* 11f9e8d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9e8d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9e8db mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f9e8de push eax */
  push32((uint32_t)(EAX));
  /* 11f9e8df mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f9e8e2 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9e8e3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 11f9e8e6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f9e8e8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9e8ea and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9e8ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9e8f0 push edx */
  push32((uint32_t)(EDX));
  /* 11f9e8f1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11f9e8f4 push eax */
  push32((uint32_t)(EAX));
  /* 11f9e8f5 call dword ptr [0x11fc531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc531c))), 0x11f9e8fbu);
  /* 11f9e8fb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11f9e8fe cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e902 jne 0x11f9e90b */
  if (!C.zf) goto L_11f9e90b;
  /* 11f9e904 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9e906 jmp 0x11f9eae1 */
  goto L_11f9eae1;
L_11f9e90b:;
  /* 11f9e90b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f9e912 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f9e915 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11f9e917 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9e91a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11f9e91c call 0x11f995a0 */
  push32(0x11f9e921u); f_11f995a0();
  /* 11f9e921 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11f9e924 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f9e927 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f9e92a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11f9e92d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11f9e934 jmp 0x11f9e94d */
  goto L_11f9e94d;
  /* 11f9e936 mov eax, 1 */
  EAX = (0x1u);
  /* 11f9e93b ret  */
  ESPCHK(0x11f9e7f0u, _esp0);
  ESP += 4; return;
  /* 11f9e93c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9e93f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11f9e946 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11f9e94d:;
  /* 11f9e94d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e951 jne 0x11f9e95a */
  if (!C.zf) goto L_11f9e95a;
  /* 11f9e953 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9e955 jmp 0x11f9eae1 */
  goto L_11f9eae1;
L_11f9e95a:;
  /* 11f9e95a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f9e95d push edx */
  push32((uint32_t)(EDX));
  /* 11f9e95e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9e961 push eax */
  push32((uint32_t)(EAX));
  /* 11f9e962 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f9e965 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9e966 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f9e969 push edx */
  push32((uint32_t)(EDX));
  /* 11f9e96a push 1 */
  push32((uint32_t)(0x1u));
  /* 11f9e96c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11f9e96f push eax */
  push32((uint32_t)(EAX));
  /* 11f9e970 call dword ptr [0x11fc531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc531c))), 0x11f9e976u);
  /* 11f9e976 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9e978 jne 0x11f9e981 */
  if (!C.zf) goto L_11f9e981;
  /* 11f9e97a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9e97c jmp 0x11f9eae1 */
  goto L_11f9eae1;
L_11f9e981:;
  /* 11f9e981 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9e983 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9e985 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f9e988 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9e989 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9e98c push edx */
  push32((uint32_t)(EDX));
  /* 11f9e98d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9e990 push eax */
  push32((uint32_t)(EAX));
  /* 11f9e991 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9e994 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9e995 call dword ptr [0x11fc5318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5318))), 0x11f9e99bu);
  /* 11f9e99b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11f9e99e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e9a2 jne 0x11f9e9ab */
  if (!C.zf) goto L_11f9e9ab;
  /* 11f9e9a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9e9a6 jmp 0x11f9eae1 */
  goto L_11f9eae1;
L_11f9e9ab:;
  /* 11f9e9ab mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9e9ae and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9e9b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9e9b6 je 0x11f9e9fb */
  if (C.zf) goto L_11f9e9fb;
  /* 11f9e9b8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e9bc je 0x11f9e9f6 */
  if (C.zf) goto L_11f9e9f6;
  /* 11f9e9be mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f9e9c1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9e9c4 jle 0x11f9e9cd */
  if ((C.zf||C.sf!=C.of)) goto L_11f9e9cd;
  /* 11f9e9c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9e9c8 jmp 0x11f9eae1 */
  goto L_11f9eae1;
L_11f9e9cd:;
  /* 11f9e9cd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f9e9d0 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9e9d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f9e9d4 push edx */
  push32((uint32_t)(EDX));
  /* 11f9e9d5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f9e9d8 push eax */
  push32((uint32_t)(EAX));
  /* 11f9e9d9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9e9dc push ecx */
  push32((uint32_t)(ECX));
  /* 11f9e9dd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9e9e0 push edx */
  push32((uint32_t)(EDX));
  /* 11f9e9e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9e9e4 push eax */
  push32((uint32_t)(EAX));
  /* 11f9e9e5 call dword ptr [0x11fc5318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5318))), 0x11f9e9ebu);
  /* 11f9e9eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9e9ed jne 0x11f9e9f6 */
  if (!C.zf) goto L_11f9e9f6;
  /* 11f9e9ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9e9f1 jmp 0x11f9eae1 */
  goto L_11f9eae1;
L_11f9e9f6:;
  /* 11f9e9f6 jmp 0x11f9eada */
  goto L_11f9eada;
L_11f9e9fb:;
  /* 11f9e9fb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f9e9fe mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11f9ea01 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11f9ea08 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9ea0b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11f9ea0d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ea10 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11f9ea12 call 0x11f995a0 */
  push32(0x11f9ea17u); f_11f995a0();
  /* 11f9ea17 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11f9ea1a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f9ea1d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11f9ea20 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11f9ea23 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11f9ea2a jmp 0x11f9ea43 */
  goto L_11f9ea43;
  /* 11f9ea2c mov eax, 1 */
  EAX = (0x1u);
  /* 11f9ea31 ret  */
  ESPCHK(0x11f9e7f0u, _esp0);
  ESP += 4; return;
  /* 11f9ea32 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11f9ea35 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11f9ea3c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11f9ea43:;
  /* 11f9ea43 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ea47 jne 0x11f9ea50 */
  if (!C.zf) goto L_11f9ea50;
  /* 11f9ea49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9ea4b jmp 0x11f9eae1 */
  goto L_11f9eae1;
L_11f9ea50:;
  /* 11f9ea50 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9ea53 push eax */
  push32((uint32_t)(EAX));
  /* 11f9ea54 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9ea57 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9ea58 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f9ea5b push edx */
  push32((uint32_t)(EDX));
  /* 11f9ea5c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f9ea5f push eax */
  push32((uint32_t)(EAX));
  /* 11f9ea60 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9ea63 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9ea64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9ea67 push edx */
  push32((uint32_t)(EDX));
  /* 11f9ea68 call dword ptr [0x11fc5318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5318))), 0x11f9ea6eu);
  /* 11f9ea6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9ea70 jne 0x11f9ea76 */
  if (!C.zf) goto L_11f9ea76;
  /* 11f9ea72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9ea74 jmp 0x11f9eae1 */
  goto L_11f9eae1;
L_11f9ea76:;
  /* 11f9ea76 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ea7a jne 0x11f9eaaa */
  if (!C.zf) goto L_11f9eaaa;
  /* 11f9ea7c push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9ea7e push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9ea80 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9ea82 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9ea84 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9ea87 push eax */
  push32((uint32_t)(EAX));
  /* 11f9ea88 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9ea8b push ecx */
  push32((uint32_t)(ECX));
  /* 11f9ea8c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11f9ea91 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11f9ea94 push edx */
  push32((uint32_t)(EDX));
  /* 11f9ea95 call dword ptr [0x11fc5368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5368))), 0x11f9ea9bu);
  /* 11f9ea9b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11f9ea9e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9eaa2 jne 0x11f9eaa8 */
  if (!C.zf) goto L_11f9eaa8;
  /* 11f9eaa4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9eaa6 jmp 0x11f9eae1 */
  goto L_11f9eae1;
L_11f9eaa8:;
  /* 11f9eaa8 jmp 0x11f9eada */
  goto L_11f9eada;
L_11f9eaaa:;
  /* 11f9eaaa push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9eaac push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9eaae mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f9eab1 push eax */
  push32((uint32_t)(EAX));
  /* 11f9eab2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f9eab5 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9eab6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f9eab9 push edx */
  push32((uint32_t)(EDX));
  /* 11f9eaba mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f9eabd push eax */
  push32((uint32_t)(EAX));
  /* 11f9eabe push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11f9eac3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11f9eac6 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9eac7 call dword ptr [0x11fc5368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5368))), 0x11f9eacdu);
  /* 11f9eacd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11f9ead0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ead4 jne 0x11f9eada */
  if (!C.zf) goto L_11f9eada;
  /* 11f9ead6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9ead8 jmp 0x11f9eae1 */
  goto L_11f9eae1;
L_11f9eada:;
  /* 11f9eada mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f9eadd jmp 0x11f9eae1 */
  goto L_11f9eae1;
L_11f9eadf:;
  /* 11f9eadf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f9eae1:;
  /* 11f9eae1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11f9eae4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9eae7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11f9eaee pop edi */
  EDI = (pop32());
  /* 11f9eaef pop esi */
  ESI = (pop32());
  /* 11f9eaf0 pop ebx */
  EBX = (pop32());
  /* 11f9eaf1 mov esp, ebp */
  ESP = (EBP);
  /* 11f9eaf3 pop ebp */
  EBP = (pop32());
  /* 11f9eaf4 ret  */
  ESPCHK(0x11f9e7f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb00 @ 0x11f9eb00 (80 bytes, 32 insns) */
void f_11f9eb00(void) {
  FTRACE(0x11f9eb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9eb00 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9eb01 mov ebp, esp */
  EBP = (ESP);
  /* 11f9eb03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9eb06 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9eb09 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f9eb0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9eb0f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11f9eb12:;
  /* 11f9eb12 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9eb15 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9eb18 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9eb1b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f9eb1e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9eb20 je 0x11f9eb37 */
  if (C.zf) goto L_11f9eb37;
  /* 11f9eb22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9eb25 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11f9eb28 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9eb2a je 0x11f9eb37 */
  if (C.zf) goto L_11f9eb37;
  /* 11f9eb2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9eb2f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9eb32 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f9eb35 jmp 0x11f9eb12 */
  goto L_11f9eb12;
L_11f9eb37:;
  /* 11f9eb37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9eb3a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11f9eb3d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9eb3f jne 0x11f9eb49 */
  if (!C.zf) goto L_11f9eb49;
  /* 11f9eb41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9eb44 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9eb47 jmp 0x11f9eb4c */
  goto L_11f9eb4c;
L_11f9eb49:;
  /* 11f9eb49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11f9eb4c:;
  /* 11f9eb4c mov esp, ebp */
  ESP = (EBP);
  /* 11f9eb4e pop ebp */
  EBP = (pop32());
  /* 11f9eb4f ret  */
  ESPCHK(0x11f9eb00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb50 @ 0x11f9eb50 (130 bytes, 43 insns) */
void f_11f9eb50(void) {
  FTRACE(0x11f9eb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9eb50 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9eb51 mov ebp, esp */
  EBP = (ESP);
  /* 11f9eb53 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9eb54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9eb57 cmp eax, dword ptr [0x11fc41dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11fc41dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9eb5d jae 0x11f9eb81 */
  if (!C.cf) goto L_11f9eb81;
  /* 11f9eb5f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9eb62 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f9eb65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9eb68 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11f9eb6b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9eb6e mov eax, dword ptr [ecx*4 + 0x11fc40a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11fc40a0)));
  /* 11f9eb75 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11f9eb7a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11f9eb7d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9eb7f jne 0x11f9eb9c */
  if (!C.zf) goto L_11f9eb9c;
L_11f9eb81:;
  /* 11f9eb81 call 0x11f9e2d0 */
  push32(0x11f9eb86u); f_11f9e2d0();
  /* 11f9eb86 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11f9eb8c call 0x11f9e2e0 */
  push32(0x11f9eb91u); f_11f9e2e0();
  /* 11f9eb91 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11f9eb97 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f9eb9a jmp 0x11f9ebce */
  goto L_11f9ebce;
L_11f9eb9c:;
  /* 11f9eb9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9eb9f push edx */
  push32((uint32_t)(EDX));
  /* 11f9eba0 call 0x11f9faf0 */
  push32(0x11f9eba5u); f_11f9faf0();
  /* 11f9eba5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9eba8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f9ebab push eax */
  push32((uint32_t)(EAX));
  /* 11f9ebac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9ebaf push ecx */
  push32((uint32_t)(ECX));
  /* 11f9ebb0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9ebb3 push edx */
  push32((uint32_t)(EDX));
  /* 11f9ebb4 call 0x11f9ebe0 */
  push32(0x11f9ebb9u); f_11f9ebe0();
  /* 11f9ebb9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ebbc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f9ebbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9ebc2 push eax */
  push32((uint32_t)(EAX));
  /* 11f9ebc3 call 0x11f9fb80 */
  push32(0x11f9ebc8u); f_11f9fb80();
  /* 11f9ebc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ebcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11f9ebce:;
  /* 11f9ebce mov esp, ebp */
  ESP = (EBP);
  /* 11f9ebd0 pop ebp */
  EBP = (pop32());
  /* 11f9ebd1 ret  */
  ESPCHK(0x11f9eb50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ebe0 @ 0x11f9ebe0 (178 bytes, 56 insns) */
void f_11f9ebe0(void) {
  FTRACE(0x11f9ebe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9ebe0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9ebe1 mov ebp, esp */
  EBP = (ESP);
  /* 11f9ebe3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9ebe6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9ebe9 push eax */
  push32((uint32_t)(EAX));
  /* 11f9ebea call 0x11f9f970 */
  push32(0x11f9ebefu); f_11f9f970();
  /* 11f9ebef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ebf2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f9ebf5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ebf9 jne 0x11f9ec0e */
  if (!C.zf) goto L_11f9ec0e;
  /* 11f9ebfb call 0x11f9e2d0 */
  push32(0x11f9ec00u); f_11f9e2d0();
  /* 11f9ec00 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11f9ec06 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f9ec09 jmp 0x11f9ec8e */
  goto L_11f9ec8e;
L_11f9ec0e:;
  /* 11f9ec0e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f9ec11 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9ec12 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9ec14 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9ec17 push edx */
  push32((uint32_t)(EDX));
  /* 11f9ec18 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9ec1b push eax */
  push32((uint32_t)(EAX));
  /* 11f9ec1c call dword ptr [0x11fc5308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5308))), 0x11f9ec22u);
  /* 11f9ec22 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f9ec25 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ec29 jne 0x11f9ec36 */
  if (!C.zf) goto L_11f9ec36;
  /* 11f9ec2b call dword ptr [0x11fc53ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc53ac))), 0x11f9ec31u);
  /* 11f9ec31 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f9ec34 jmp 0x11f9ec3d */
  goto L_11f9ec3d;
L_11f9ec36:;
  /* 11f9ec36 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11f9ec3d:;
  /* 11f9ec3d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ec41 je 0x11f9ec54 */
  if (C.zf) goto L_11f9ec54;
  /* 11f9ec43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9ec46 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9ec47 call 0x11f9e230 */
  push32(0x11f9ec4cu); f_11f9e230();
  /* 11f9ec4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ec4f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f9ec52 jmp 0x11f9ec8e */
  goto L_11f9ec8e;
L_11f9ec54:;
  /* 11f9ec54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9ec57 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11f9ec5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9ec5d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11f9ec60 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9ec63 mov ecx, dword ptr [edx*4 + 0x11fc40a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11fc40a0)));
  /* 11f9ec6a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 11f9ec6e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 11f9ec71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9ec74 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11f9ec77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9ec7a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11f9ec7d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9ec80 mov eax, dword ptr [eax*4 + 0x11fc40a0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11fc40a0)));
  /* 11f9ec87 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 11f9ec8b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11f9ec8e:;
  /* 11f9ec8e mov esp, ebp */
  ESP = (EBP);
  /* 11f9ec90 pop ebp */
  EBP = (pop32());
  /* 11f9ec91 ret  */
  ESPCHK(0x11f9ebe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eca0 @ 0x11f9eca0 (130 bytes, 43 insns) */
void f_11f9eca0(void) {
  FTRACE(0x11f9eca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9eca0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9eca1 mov ebp, esp */
  EBP = (ESP);
  /* 11f9eca3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9eca4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9eca7 cmp eax, dword ptr [0x11fc41dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11fc41dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ecad jae 0x11f9ecd1 */
  if (!C.cf) goto L_11f9ecd1;
  /* 11f9ecaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9ecb2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f9ecb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9ecb8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11f9ecbb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9ecbe mov eax, dword ptr [ecx*4 + 0x11fc40a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11fc40a0)));
  /* 11f9ecc5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11f9ecca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11f9eccd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9eccf jne 0x11f9ecec */
  if (!C.zf) goto L_11f9ecec;
L_11f9ecd1:;
  /* 11f9ecd1 call 0x11f9e2d0 */
  push32(0x11f9ecd6u); f_11f9e2d0();
  /* 11f9ecd6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11f9ecdc call 0x11f9e2e0 */
  push32(0x11f9ece1u); f_11f9e2e0();
  /* 11f9ece1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11f9ece7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f9ecea jmp 0x11f9ed1e */
  goto L_11f9ed1e;
L_11f9ecec:;
  /* 11f9ecec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9ecef push edx */
  push32((uint32_t)(EDX));
  /* 11f9ecf0 call 0x11f9faf0 */
  push32(0x11f9ecf5u); f_11f9faf0();
  /* 11f9ecf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ecf8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f9ecfb push eax */
  push32((uint32_t)(EAX));
  /* 11f9ecfc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9ecff push ecx */
  push32((uint32_t)(ECX));
  /* 11f9ed00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9ed03 push edx */
  push32((uint32_t)(EDX));
  /* 11f9ed04 call 0x11f9ed30 */
  push32(0x11f9ed09u); f_11f9ed30();
  /* 11f9ed09 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ed0c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f9ed0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9ed12 push eax */
  push32((uint32_t)(EAX));
  /* 11f9ed13 call 0x11f9fb80 */
  push32(0x11f9ed18u); f_11f9fb80();
  /* 11f9ed18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ed1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11f9ed1e:;
  /* 11f9ed1e mov esp, ebp */
  ESP = (EBP);
  /* 11f9ed20 pop ebp */
  EBP = (pop32());
  /* 11f9ed21 ret  */
  ESPCHK(0x11f9eca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed30 @ 0x11f9ed30 (627 bytes, 182 insns) */
void f_11f9ed30(void) {
  FTRACE(0x11f9ed30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9ed30 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9ed31 mov ebp, esp */
  EBP = (ESP);
  /* 11f9ed33 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9ed39 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11f9ed40 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9ed43 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 11f9ed49 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ed4d jne 0x11f9ed56 */
  if (!C.zf) goto L_11f9ed56;
  /* 11f9ed4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9ed51 jmp 0x11f9ef9f */
  goto L_11f9ef9f;
L_11f9ed56:;
  /* 11f9ed56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9ed59 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f9ed5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9ed5f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11f9ed62 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9ed65 mov eax, dword ptr [ecx*4 + 0x11fc40a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11fc40a0)));
  /* 11f9ed6c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11f9ed71 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11f9ed74 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9ed76 je 0x11f9ed88 */
  if (C.zf) goto L_11f9ed88;
  /* 11f9ed78 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f9ed7a push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9ed7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9ed7f push edx */
  push32((uint32_t)(EDX));
  /* 11f9ed80 call 0x11f9ebe0 */
  push32(0x11f9ed85u); f_11f9ebe0();
  /* 11f9ed85 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f9ed88:;
  /* 11f9ed88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9ed8b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11f9ed8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9ed91 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11f9ed94 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9ed97 mov edx, dword ptr [eax*4 + 0x11fc40a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11fc40a0)));
  /* 11f9ed9e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11f9eda3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11f9eda8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9edaa je 0x11f9eebc */
  if (C.zf) goto L_11f9eebc;
  /* 11f9edb0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9edb3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f9edb6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11f9edbd:;
  /* 11f9edbd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9edc0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9edc3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9edc6 jae 0x11f9eeba */
  if (!C.cf) goto L_11f9eeba;
  /* 11f9edcc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11f9edd2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11f9edd5:;
  /* 11f9edd5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9edd8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11f9edde sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9ede0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ede6 jge 0x11f9ee47 */
  if ((C.sf==C.of)) goto L_11f9ee47;
  /* 11f9ede8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9edeb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9edee cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9edf1 jae 0x11f9ee47 */
  if (!C.cf) goto L_11f9ee47;
  /* 11f9edf3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9edf6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11f9edf8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 11f9edfe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9ee01 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ee04 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f9ee07 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 11f9ee0e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ee11 jne 0x11f9ee31 */
  if (!C.zf) goto L_11f9ee31;
  /* 11f9ee13 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 11f9ee19 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ee1c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 11f9ee22 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9ee25 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 11f9ee28 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9ee2b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ee2e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11f9ee31:;
  /* 11f9ee31 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9ee34 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 11f9ee3a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11f9ee3c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9ee3f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ee42 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f9ee45 jmp 0x11f9edd5 */
  goto L_11f9edd5;
L_11f9ee47:;
  /* 11f9ee47 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9ee49 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 11f9ee4f push edx */
  push32((uint32_t)(EDX));
  /* 11f9ee50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9ee53 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 11f9ee59 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9ee5b push eax */
  push32((uint32_t)(EAX));
  /* 11f9ee5c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11f9ee62 push edx */
  push32((uint32_t)(EDX));
  /* 11f9ee63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9ee66 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11f9ee69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9ee6c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11f9ee6f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9ee72 mov edx, dword ptr [eax*4 + 0x11fc40a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11fc40a0)));
  /* 11f9ee79 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 11f9ee7c push eax */
  push32((uint32_t)(EAX));
  /* 11f9ee7d call dword ptr [0x11fc5388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5388))), 0x11f9ee83u);
  /* 11f9ee83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9ee85 je 0x11f9eeaa */
  if (C.zf) goto L_11f9eeaa;
  /* 11f9ee87 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9ee8a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ee90 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11f9ee93 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9ee96 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11f9ee9c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9ee9e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9eea4 jge 0x11f9eea8 */
  if ((C.sf==C.of)) goto L_11f9eea8;
  /* 11f9eea6 jmp 0x11f9eeba */
  goto L_11f9eeba;
L_11f9eea8:;
  /* 11f9eea8 jmp 0x11f9eeb5 */
  goto L_11f9eeb5;
L_11f9eeaa:;
  /* 11f9eeaa call dword ptr [0x11fc53ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc53ac))), 0x11f9eeb0u);
  /* 11f9eeb0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f9eeb3 jmp 0x11f9eeba */
  goto L_11f9eeba;
L_11f9eeb5:;
  /* 11f9eeb5 jmp 0x11f9edbd */
  goto L_11f9edbd;
L_11f9eeba:;
  /* 11f9eeba jmp 0x11f9ef0c */
  goto L_11f9ef0c;
L_11f9eebc:;
  /* 11f9eebc push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9eebe lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 11f9eec4 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9eec5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f9eec8 push edx */
  push32((uint32_t)(EDX));
  /* 11f9eec9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9eecc push eax */
  push32((uint32_t)(EAX));
  /* 11f9eecd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9eed0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f9eed3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9eed6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11f9eed9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9eedc mov eax, dword ptr [ecx*4 + 0x11fc40a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11fc40a0)));
  /* 11f9eee3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 11f9eee6 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9eee7 call dword ptr [0x11fc5388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5388))), 0x11f9eeedu);
  /* 11f9eeed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9eeef je 0x11f9ef03 */
  if (C.zf) goto L_11f9ef03;
  /* 11f9eef1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11f9eef8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 11f9eefe mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11f9ef01 jmp 0x11f9ef0c */
  goto L_11f9ef0c;
L_11f9ef03:;
  /* 11f9ef03 call dword ptr [0x11fc53ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc53ac))), 0x11f9ef09u);
  /* 11f9ef09 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11f9ef0c:;
  /* 11f9ef0c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ef10 jne 0x11f9ef96 */
  if (!C.zf) goto L_11f9ef96;
  /* 11f9ef16 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ef1a je 0x11f9ef4a */
  if (C.zf) goto L_11f9ef4a;
  /* 11f9ef1c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ef20 jne 0x11f9ef39 */
  if (!C.zf) goto L_11f9ef39;
  /* 11f9ef22 call 0x11f9e2d0 */
  push32(0x11f9ef27u); f_11f9e2d0();
  /* 11f9ef27 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11f9ef2d call 0x11f9e2e0 */
  push32(0x11f9ef32u); f_11f9e2e0();
  /* 11f9ef32 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9ef35 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11f9ef37 jmp 0x11f9ef45 */
  goto L_11f9ef45;
L_11f9ef39:;
  /* 11f9ef39 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9ef3c push edx */
  push32((uint32_t)(EDX));
  /* 11f9ef3d call 0x11f9e230 */
  push32(0x11f9ef42u); f_11f9e230();
  /* 11f9ef42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f9ef45:;
  /* 11f9ef45 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f9ef48 jmp 0x11f9ef9f */
  goto L_11f9ef9f;
L_11f9ef4a:;
  /* 11f9ef4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9ef4d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11f9ef50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9ef53 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11f9ef56 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9ef59 mov edx, dword ptr [eax*4 + 0x11fc40a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11fc40a0)));
  /* 11f9ef60 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11f9ef65 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11f9ef68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9ef6a je 0x11f9ef7b */
  if (C.zf) goto L_11f9ef7b;
  /* 11f9ef6c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9ef6f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11f9ef72 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ef75 jne 0x11f9ef7b */
  if (!C.zf) goto L_11f9ef7b;
  /* 11f9ef77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9ef79 jmp 0x11f9ef9f */
  goto L_11f9ef9f;
L_11f9ef7b:;
  /* 11f9ef7b call 0x11f9e2d0 */
  push32(0x11f9ef80u); f_11f9e2d0();
  /* 11f9ef80 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 11f9ef86 call 0x11f9e2e0 */
  push32(0x11f9ef8bu); f_11f9e2e0();
  /* 11f9ef8b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11f9ef91 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f9ef94 jmp 0x11f9ef9f */
  goto L_11f9ef9f;
L_11f9ef96:;
  /* 11f9ef96 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f9ef99 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11f9ef9f:;
  /* 11f9ef9f mov esp, ebp */
  ESP = (EBP);
  /* 11f9efa1 pop ebp */
  EBP = (pop32());
  /* 11f9efa2 ret  */
  ESPCHK(0x11f9ed30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000efb0 @ 0x11f9efb0 (199 bytes, 68 insns) */
void f_11f9efb0(void) {
  FTRACE(0x11f9efb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9efb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9efb1 mov ebp, esp */
  EBP = (ESP);
  /* 11f9efb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9efb4 push ebx */
  push32((uint32_t)(EBX));
  /* 11f9efb5 push esi */
  push32((uint32_t)(ESI));
  /* 11f9efb6 push edi */
  push32((uint32_t)(EDI));
L_11f9efb7:;
  /* 11f9efb7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9efbb jne 0x11f9efdb */
  if (!C.zf) goto L_11f9efdb;
  /* 11f9efbd push 0x11fbe0e0 */
  push32((uint32_t)(0x11fbe0e0u));
  /* 11f9efc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9efc4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11f9efc6 push 0x11fbe1b0 */
  push32((uint32_t)(0x11fbe1b0u));
  /* 11f9efcb push 2 */
  push32((uint32_t)(0x2u));
  /* 11f9efcd call 0x11f954c0 */
  push32(0x11f9efd2u); f_11f954c0();
  /* 11f9efd2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9efd5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9efd8 jne 0x11f9efdb */
  if (!C.zf) goto L_11f9efdb;
  /* 11f9efda int3  */
  x86_unimpl("int3 @ 0x11f9efda");
L_11f9efdb:;
  /* 11f9efdb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9efdd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9efdf jne 0x11f9efb7 */
  if (!C.zf) goto L_11f9efb7;
  /* 11f9efe1 mov ecx, dword ptr [0x11fc28dc] */
  ECX = (r32((uint32_t)(0x11fc28dc)));
  /* 11f9efe7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9efea mov dword ptr [0x11fc28dc], ecx */
  w32((uint32_t)(0x11fc28dc), (ECX));
  /* 11f9eff0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9eff3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f9eff6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11f9eff8 push 0x11fbe1b0 */
  push32((uint32_t)(0x11fbe1b0u));
  /* 11f9effd push 2 */
  push32((uint32_t)(0x2u));
  /* 11f9efff push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11f9f004 call 0x11f96400 */
  push32(0x11f9f009u); f_11f96400();
  /* 11f9f009 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f00c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f00f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11f9f012 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f015 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f019 je 0x11f9f036 */
  if (C.zf) goto L_11f9f036;
  /* 11f9f01b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f01e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11f9f021 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11f9f024 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f027 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11f9f02a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f02d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 11f9f034 jmp 0x11f9f05b */
  goto L_11f9f05b;
L_11f9f036:;
  /* 11f9f036 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f039 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f9f03c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9f03f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f042 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11f9f045 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f048 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f04b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f04e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11f9f051 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f054 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_11f9f05b:;
  /* 11f9f05b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f05e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f061 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11f9f064 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11f9f066 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f069 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11f9f070 pop edi */
  EDI = (pop32());
  /* 11f9f071 pop esi */
  ESI = (pop32());
  /* 11f9f072 pop ebx */
  EBX = (pop32());
  /* 11f9f073 mov esp, ebp */
  ESP = (EBP);
  /* 11f9f075 pop ebp */
  EBP = (pop32());
  /* 11f9f076 ret  */
  ESPCHK(0x11f9efb0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x11f9f080 (50 bytes, 17 insns) */
void f_11f9f080(void) {
  FTRACE(0x11f9f080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9f080 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9f081 mov ebp, esp */
  EBP = (ESP);
  /* 11f9f083 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9f086 cmp eax, dword ptr [0x11fc41dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11fc41dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f08c jb 0x11f9f092 */
  if (C.cf) goto L_11f9f092;
  /* 11f9f08e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9f090 jmp 0x11f9f0b0 */
  goto L_11f9f0b0;
L_11f9f092:;
  /* 11f9f092 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9f095 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f9f098 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9f09b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11f9f09e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9f0a1 mov eax, dword ptr [ecx*4 + 0x11fc40a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11fc40a0)));
  /* 11f9f0a8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11f9f0ad and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_11f9f0b0:;
  /* 11f9f0b0 pop ebp */
  EBP = (pop32());
  /* 11f9f0b1 ret  */
  ESPCHK(0x11f9f080u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0c0 @ 0x11f9f0c0 (300 bytes, 80 insns) */
void f_11f9f0c0(void) {
  FTRACE(0x11f9f0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9f0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9f0c1 mov ebp, esp */
  EBP = (ESP);
  /* 11f9f0c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9f0c4 cmp dword ptr [0x11fc3da0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc3da0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f0cb jne 0x11f9f0d9 */
  if (!C.zf) goto L_11f9f0d9;
  /* 11f9f0cd mov dword ptr [0x11fc3da0], 0x200 */
  w32((uint32_t)(0x11fc3da0), (0x200u));
  /* 11f9f0d7 jmp 0x11f9f0ec */
  goto L_11f9f0ec;
L_11f9f0d9:;
  /* 11f9f0d9 cmp dword ptr [0x11fc3da0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x11fc3da0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f0e0 jge 0x11f9f0ec */
  if ((C.sf==C.of)) goto L_11f9f0ec;
  /* 11f9f0e2 mov dword ptr [0x11fc3da0], 0x14 */
  w32((uint32_t)(0x11fc3da0), (0x14u));
L_11f9f0ec:;
  /* 11f9f0ec push 0x83 */
  push32((uint32_t)(0x83u));
  /* 11f9f0f1 push 0x11fbe1bc */
  push32((uint32_t)(0x11fbe1bcu));
  /* 11f9f0f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f9f0f8 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f9f0fa mov eax, dword ptr [0x11fc3da0] */
  EAX = (r32((uint32_t)(0x11fc3da0)));
  /* 11f9f0ff push eax */
  push32((uint32_t)(EAX));
  /* 11f9f100 call 0x11f96810 */
  push32(0x11f9f105u); f_11f96810();
  /* 11f9f105 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f108 mov dword ptr [0x11fc2a50], eax */
  w32((uint32_t)(0x11fc2a50), (EAX));
  /* 11f9f10d cmp dword ptr [0x11fc2a50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2a50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f114 jne 0x11f9f155 */
  if (!C.zf) goto L_11f9f155;
  /* 11f9f116 mov dword ptr [0x11fc3da0], 0x14 */
  w32((uint32_t)(0x11fc3da0), (0x14u));
  /* 11f9f120 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 11f9f125 push 0x11fbe1bc */
  push32((uint32_t)(0x11fbe1bcu));
  /* 11f9f12a push 2 */
  push32((uint32_t)(0x2u));
  /* 11f9f12c push 4 */
  push32((uint32_t)(0x4u));
  /* 11f9f12e mov ecx, dword ptr [0x11fc3da0] */
  ECX = (r32((uint32_t)(0x11fc3da0)));
  /* 11f9f134 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9f135 call 0x11f96810 */
  push32(0x11f9f13au); f_11f96810();
  /* 11f9f13a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f13d mov dword ptr [0x11fc2a50], eax */
  w32((uint32_t)(0x11fc2a50), (EAX));
  /* 11f9f142 cmp dword ptr [0x11fc2a50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2a50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f149 jne 0x11f9f155 */
  if (!C.zf) goto L_11f9f155;
  /* 11f9f14b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11f9f14d call 0x11f95370 */
  push32(0x11f9f152u); f_11f95370();
  /* 11f9f152 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f9f155:;
  /* 11f9f155 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f9f15c jmp 0x11f9f167 */
  goto L_11f9f167;
L_11f9f15e:;
  /* 11f9f15e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f161 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f164 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f9f167:;
  /* 11f9f167 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f16b jge 0x11f9f186 */
  if ((C.sf==C.of)) goto L_11f9f186;
  /* 11f9f16d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f170 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11f9f173 add eax, 0x11fc1130 */
  { uint32_t _a=(EAX),_b=(0x11fc1130u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f178 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f17b mov edx, dword ptr [0x11fc2a50] */
  EDX = (r32((uint32_t)(0x11fc2a50)));
  /* 11f9f181 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11f9f184 jmp 0x11f9f15e */
  goto L_11f9f15e;
L_11f9f186:;
  /* 11f9f186 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f9f18d jmp 0x11f9f198 */
  goto L_11f9f198;
L_11f9f18f:;
  /* 11f9f18f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f192 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f195 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f9f198:;
  /* 11f9f198 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f19c jge 0x11f9f1e8 */
  if ((C.sf==C.of)) goto L_11f9f1e8;
  /* 11f9f19e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f1a1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f9f1a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f1a7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11f9f1aa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9f1ad mov eax, dword ptr [ecx*4 + 0x11fc40a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11fc40a0)));
  /* 11f9f1b4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f1b8 je 0x11f9f1d6 */
  if (C.zf) goto L_11f9f1d6;
  /* 11f9f1ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f1bd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f9f1c0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f1c3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11f9f1c6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9f1c9 mov eax, dword ptr [ecx*4 + 0x11fc40a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11fc40a0)));
  /* 11f9f1d0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f1d4 jne 0x11f9f1e6 */
  if (!C.zf) goto L_11f9f1e6;
L_11f9f1d6:;
  /* 11f9f1d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f1d9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f9f1dc mov dword ptr [ecx + 0x11fc1140], 0xffffffff */
  w32((uint32_t)(ECX + 0x11fc1140), (0xffffffffu));
L_11f9f1e6:;
  /* 11f9f1e6 jmp 0x11f9f18f */
  goto L_11f9f18f;
L_11f9f1e8:;
  /* 11f9f1e8 mov esp, ebp */
  ESP = (EBP);
  /* 11f9f1ea pop ebp */
  EBP = (pop32());
  /* 11f9f1eb ret  */
  ESPCHK(0x11f9f0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f1f0 @ 0x11f9f1f0 (26 bytes, 9 insns) */
void f_11f9f1f0(void) {
  FTRACE(0x11f9f1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9f1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9f1f1 mov ebp, esp */
  EBP = (ESP);
  /* 11f9f1f3 call 0x11f9fdf0 */
  push32(0x11f9f1f8u); f_11f9fdf0();
  /* 11f9f1f8 movsx eax, byte ptr [0x11fc26f8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11fc26f8))));
  /* 11f9f1ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9f201 je 0x11f9f208 */
  if (C.zf) goto L_11f9f208;
  /* 11f9f203 call 0x11f9fbb0 */
  push32(0x11f9f208u); f_11f9fbb0();
L_11f9f208:;
  /* 11f9f208 pop ebp */
  EBP = (pop32());
  /* 11f9f209 ret  */
  ESPCHK(0x11f9f1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f210 @ 0x11f9f210 (61 bytes, 20 insns) */
void f_11f9f210(void) {
  FTRACE(0x11f9f210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9f210 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9f211 mov ebp, esp */
  EBP = (ESP);
  /* 11f9f213 cmp dword ptr [ebp + 8], 0x11fc1130 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11fc1130u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f21a jb 0x11f9f23e */
  if (C.cf) goto L_11f9f23e;
  /* 11f9f21c cmp dword ptr [ebp + 8], 0x11fc1390 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11fc1390u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f223 ja 0x11f9f23e */
  if ((!C.cf&&!C.zf)) goto L_11f9f23e;
  /* 11f9f225 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9f228 sub eax, 0x11fc1130 */
  { uint32_t _a=(EAX),_b=(0x11fc1130u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9f22d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11f9f230 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f233 push eax */
  push32((uint32_t)(EAX));
  /* 11f9f234 call 0x11f99e00 */
  push32(0x11f9f239u); f_11f99e00();
  /* 11f9f239 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f23c jmp 0x11f9f24b */
  goto L_11f9f24b;
L_11f9f23e:;
  /* 11f9f23e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9f241 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f244 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9f245 call dword ptr [0x11fc5344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5344))), 0x11f9f24bu);
L_11f9f24b:;
  /* 11f9f24b pop ebp */
  EBP = (pop32());
  /* 11f9f24c ret  */
  ESPCHK(0x11f9f210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f250 @ 0x11f9f250 (41 bytes, 16 insns) */
void f_11f9f250(void) {
  FTRACE(0x11f9f250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9f250 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9f251 mov ebp, esp */
  EBP = (ESP);
  /* 11f9f253 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f257 jge 0x11f9f26a */
  if ((C.sf==C.of)) goto L_11f9f26a;
  /* 11f9f259 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9f25c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f25f push eax */
  push32((uint32_t)(EAX));
  /* 11f9f260 call 0x11f99e00 */
  push32(0x11f9f265u); f_11f99e00();
  /* 11f9f265 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f268 jmp 0x11f9f277 */
  goto L_11f9f277;
L_11f9f26a:;
  /* 11f9f26a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9f26d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f270 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9f271 call dword ptr [0x11fc5344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5344))), 0x11f9f277u);
L_11f9f277:;
  /* 11f9f277 pop ebp */
  EBP = (pop32());
  /* 11f9f278 ret  */
  ESPCHK(0x11f9f250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f280 @ 0x11f9f280 (61 bytes, 20 insns) */
void f_11f9f280(void) {
  FTRACE(0x11f9f280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9f280 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9f281 mov ebp, esp */
  EBP = (ESP);
  /* 11f9f283 cmp dword ptr [ebp + 8], 0x11fc1130 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11fc1130u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f28a jb 0x11f9f2ae */
  if (C.cf) goto L_11f9f2ae;
  /* 11f9f28c cmp dword ptr [ebp + 8], 0x11fc1390 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11fc1390u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f293 ja 0x11f9f2ae */
  if ((!C.cf&&!C.zf)) goto L_11f9f2ae;
  /* 11f9f295 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9f298 sub eax, 0x11fc1130 */
  { uint32_t _a=(EAX),_b=(0x11fc1130u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9f29d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11f9f2a0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f2a3 push eax */
  push32((uint32_t)(EAX));
  /* 11f9f2a4 call 0x11f99ea0 */
  push32(0x11f9f2a9u); f_11f99ea0();
  /* 11f9f2a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f2ac jmp 0x11f9f2bb */
  goto L_11f9f2bb;
L_11f9f2ae:;
  /* 11f9f2ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9f2b1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f2b4 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9f2b5 call dword ptr [0x11fc5340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5340))), 0x11f9f2bbu);
L_11f9f2bb:;
  /* 11f9f2bb pop ebp */
  EBP = (pop32());
  /* 11f9f2bc ret  */
  ESPCHK(0x11f9f280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f2c0 @ 0x11f9f2c0 (41 bytes, 16 insns) */
void f_11f9f2c0(void) {
  FTRACE(0x11f9f2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9f2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9f2c1 mov ebp, esp */
  EBP = (ESP);
  /* 11f9f2c3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f2c7 jge 0x11f9f2da */
  if ((C.sf==C.of)) goto L_11f9f2da;
  /* 11f9f2c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9f2cc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f2cf push eax */
  push32((uint32_t)(EAX));
  /* 11f9f2d0 call 0x11f99ea0 */
  push32(0x11f9f2d5u); f_11f99ea0();
  /* 11f9f2d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f2d8 jmp 0x11f9f2e7 */
  goto L_11f9f2e7;
L_11f9f2da:;
  /* 11f9f2da mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9f2dd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f2e0 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9f2e1 call dword ptr [0x11fc5340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5340))), 0x11f9f2e7u);
L_11f9f2e7:;
  /* 11f9f2e7 pop ebp */
  EBP = (pop32());
  /* 11f9f2e8 ret  */
  ESPCHK(0x11f9f2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f2f0 @ 0x11f9f2f0 (119 bytes, 34 insns) */
void f_11f9f2f0(void) {
  FTRACE(0x11f9f2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9f2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9f2f1 mov ebp, esp */
  EBP = (ESP);
  /* 11f9f2f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9f2f6 push 0x11fc2a4c */
  push32((uint32_t)(0x11fc2a4cu));
  /* 11f9f2fb call dword ptr [0x11fc539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc539c))), 0x11f9f301u);
  /* 11f9f301 cmp dword ptr [0x11fc2a3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2a3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f308 je 0x11f9f328 */
  if (C.zf) goto L_11f9f328;
  /* 11f9f30a push 0x11fc2a4c */
  push32((uint32_t)(0x11fc2a4cu));
  /* 11f9f30f call dword ptr [0x11fc538c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc538c))), 0x11f9f315u);
  /* 11f9f315 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11f9f317 call 0x11f99e00 */
  push32(0x11f9f31cu); f_11f99e00();
  /* 11f9f31c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f31f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11f9f326 jmp 0x11f9f32f */
  goto L_11f9f32f;
L_11f9f328:;
  /* 11f9f328 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11f9f32f:;
  /* 11f9f32f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 11f9f333 push eax */
  push32((uint32_t)(EAX));
  /* 11f9f334 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9f337 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9f338 call 0x11f9f370 */
  push32(0x11f9f33du); f_11f9f370();
  /* 11f9f33d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f340 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f9f343 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f347 je 0x11f9f355 */
  if (C.zf) goto L_11f9f355;
  /* 11f9f349 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11f9f34b call 0x11f99ea0 */
  push32(0x11f9f350u); f_11f99ea0();
  /* 11f9f350 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f353 jmp 0x11f9f360 */
  goto L_11f9f360;
L_11f9f355:;
  /* 11f9f355 push 0x11fc2a4c */
  push32((uint32_t)(0x11fc2a4cu));
  /* 11f9f35a call dword ptr [0x11fc538c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc538c))), 0x11f9f360u);
L_11f9f360:;
  /* 11f9f360 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9f363 mov esp, ebp */
  ESP = (EBP);
  /* 11f9f365 pop ebp */
  EBP = (pop32());
  /* 11f9f366 ret  */
  ESPCHK(0x11f9f2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f370 @ 0x11f9f370 (160 bytes, 50 insns) */
void f_11f9f370(void) {
  FTRACE(0x11f9f370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9f370 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9f371 mov ebp, esp */
  EBP = (ESP);
  /* 11f9f373 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9f376 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f37a jne 0x11f9f383 */
  if (!C.zf) goto L_11f9f383;
  /* 11f9f37c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9f37e jmp 0x11f9f40c */
  goto L_11f9f40c;
L_11f9f383:;
  /* 11f9f383 cmp dword ptr [0x11fc28c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc28c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f38a jne 0x11f9f3ba */
  if (!C.zf) goto L_11f9f3ba;
  /* 11f9f38c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9f38f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f9f394 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f399 jle 0x11f9f3ab */
  if ((C.zf||C.sf!=C.of)) goto L_11f9f3ab;
  /* 11f9f39b call 0x11f9e2d0 */
  push32(0x11f9f3a0u); f_11f9e2d0();
  /* 11f9f3a0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11f9f3a6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f9f3a9 jmp 0x11f9f40c */
  goto L_11f9f40c;
L_11f9f3ab:;
  /* 11f9f3ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9f3ae mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 11f9f3b1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11f9f3b3 mov eax, 1 */
  EAX = (0x1u);
  /* 11f9f3b8 jmp 0x11f9f40c */
  goto L_11f9f40c;
L_11f9f3ba:;
  /* 11f9f3ba mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11f9f3c1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11f9f3c4 push eax */
  push32((uint32_t)(EAX));
  /* 11f9f3c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9f3c7 mov ecx, dword ptr [0x11fc0eb4] */
  ECX = (r32((uint32_t)(0x11fc0eb4)));
  /* 11f9f3cd push ecx */
  push32((uint32_t)(ECX));
  /* 11f9f3ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9f3d1 push edx */
  push32((uint32_t)(EDX));
  /* 11f9f3d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f9f3d4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 11f9f3d7 push eax */
  push32((uint32_t)(EAX));
  /* 11f9f3d8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11f9f3dd mov ecx, dword ptr [0x11fc28d0] */
  ECX = (r32((uint32_t)(0x11fc28d0)));
  /* 11f9f3e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9f3e4 call dword ptr [0x11fc5368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5368))), 0x11f9f3eau);
  /* 11f9f3ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f9f3ed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f3f1 je 0x11f9f3f9 */
  if (C.zf) goto L_11f9f3f9;
  /* 11f9f3f3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f3f7 je 0x11f9f409 */
  if (C.zf) goto L_11f9f409;
L_11f9f3f9:;
  /* 11f9f3f9 call 0x11f9e2d0 */
  push32(0x11f9f3feu); f_11f9e2d0();
  /* 11f9f3fe mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11f9f404 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f9f407 jmp 0x11f9f40c */
  goto L_11f9f40c;
L_11f9f409:;
  /* 11f9f409 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11f9f40c:;
  /* 11f9f40c mov esp, ebp */
  ESP = (EBP);
  /* 11f9f40e pop ebp */
  EBP = (pop32());
  /* 11f9f40f ret  */
  ESPCHK(0x11f9f370u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11f9f410 (32 bytes, 18 insns) */
void f_11f9f410(void) {
  FTRACE(0x11f9f410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9f410 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9f411 mov ebp, esp */
  EBP = (ESP);
  /* 11f9f413 push ebx */
  push32((uint32_t)(EBX));
  /* 11f9f414 push esi */
  push32((uint32_t)(ESI));
  /* 11f9f415 push edi */
  push32((uint32_t)(EDI));
  /* 11f9f416 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9f417 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9f419 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9f41b push 0x11f9f428 */
  push32((uint32_t)(0x11f9f428u));
  /* 11f9f420 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f9f423 call 0x11fa6b5c */
  push32(0x11f9f428u); f_11fa6b5c();
  /* 11f9f428 pop ebp */
  EBP = (pop32());
  /* 11f9f429 pop edi */
  EDI = (pop32());
  /* 11f9f42a pop esi */
  ESI = (pop32());
  /* 11f9f42b pop ebx */
  EBX = (pop32());
  /* 11f9f42c mov esp, ebp */
  ESP = (EBP);
  /* 11f9f42e pop ebp */
  EBP = (pop32());
  /* 11f9f42f ret  */
  ESPCHK(0x11f9f410u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11f9f452 (104 bytes, 33 insns) */
void f_11f9f452(void) {
  FTRACE(0x11f9f452u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9f452 push ebx */
  push32((uint32_t)(EBX));
  /* 11f9f453 push esi */
  push32((uint32_t)(ESI));
  /* 11f9f454 push edi */
  push32((uint32_t)(EDI));
  /* 11f9f455 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11f9f459 push eax */
  push32((uint32_t)(EAX));
  /* 11f9f45a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11f9f45c push 0x11f9f430 */
  push32((uint32_t)(0x11f9f430u));
  /* 11f9f461 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11f9f468 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11f9f46f:;
  /* 11f9f46f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11f9f473 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f9f476 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11f9f479 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f47c je 0x11f9f4ac */
  if (C.zf) goto L_11f9f4ac;
  /* 11f9f47e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f482 je 0x11f9f4ac */
  if (C.zf) goto L_11f9f4ac;
  /* 11f9f484 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11f9f487 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11f9f48a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11f9f48e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11f9f491 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f496 jne 0x11f9f4aa */
  if (!C.zf) goto L_11f9f4aa;
  /* 11f9f498 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11f9f49d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11f9f4a1 call 0x11f9f4e6 */
  push32(0x11f9f4a6u); f_11f9f4e6();
  /* 11f9f4a6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11f9f4aau);
L_11f9f4aa:;
  /* 11f9f4aa jmp 0x11f9f46f */
  goto L_11f9f46f;
L_11f9f4ac:;
  /* 11f9f4ac pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11f9f4b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f4b6 pop edi */
  EDI = (pop32());
  /* 11f9f4b7 pop esi */
  ESI = (pop32());
  /* 11f9f4b8 pop ebx */
  EBX = (pop32());
  /* 11f9f4b9 ret  */
  ESPCHK(0x11f9f452u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f4e6 @ 0x11f9f4e6 (24 bytes, 10 insns) */
void f_11f9f4e6(void) {
  FTRACE(0x11f9f4e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9f4e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11f9f4e7 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9f4e8 mov ebx, 0x11fc13c8 */
  EBX = (0x11fc13c8u);
  /* 11f9f4ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9f4f0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11f9f4f3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11f9f4f6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11f9f4f9 pop ecx */
  ECX = (pop32());
  /* 11f9f4fa pop ebx */
  EBX = (pop32());
  /* 11f9f4fb ret 4 */
  ESPCHK(0x11f9f4e6u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f5c5 @ 0x11f9f5c5 (27 bytes, 11 insns) */
void f_11f9f5c5(void) {
  FTRACE(0x11f9f5c5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9f5c5 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9f5c6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f9f5ca mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11f9f5cc mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11f9f5cf push eax */
  push32((uint32_t)(EAX));
  /* 11f9f5d0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11f9f5d3 push eax */
  push32((uint32_t)(EAX));
  /* 11f9f5d4 call 0x11f9f452 */
  push32(0x11f9f5d9u); f_11f9f452();
  /* 11f9f5d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f5dc pop ebp */
  EBP = (pop32());
  /* 11f9f5dd ret 4 */
  ESPCHK(0x11f9f5c5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f5e0 @ 0x11f9f5e0 (482 bytes, 138 insns) */
void f_11f9f5e0(void) {
  FTRACE(0x11f9f5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9f5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9f5e1 mov ebp, esp */
  EBP = (ESP);
  /* 11f9f5e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9f5e6 push esi */
  push32((uint32_t)(ESI));
  /* 11f9f5e7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 11f9f5ee push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11f9f5f0 call 0x11f99e00 */
  push32(0x11f9f5f5u); f_11f99e00();
  /* 11f9f5f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f5f8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11f9f5ff jmp 0x11f9f60a */
  goto L_11f9f60a;
L_11f9f601:;
  /* 11f9f601 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9f604 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f607 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11f9f60a:;
  /* 11f9f60a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f60e jge 0x11f9f7b0 */
  if ((C.sf==C.of)) goto L_11f9f7b0;
  /* 11f9f614 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9f617 cmp dword ptr [ecx*4 + 0x11fc40a0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11fc40a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f61f je 0x11f9f716 */
  if (C.zf) goto L_11f9f716;
  /* 11f9f625 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9f628 mov eax, dword ptr [edx*4 + 0x11fc40a0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11fc40a0)));
  /* 11f9f62f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f9f632 jmp 0x11f9f63d */
  goto L_11f9f63d;
L_11f9f634:;
  /* 11f9f634 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f637 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f63a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11f9f63d:;
  /* 11f9f63d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9f640 mov eax, dword ptr [edx*4 + 0x11fc40a0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11fc40a0)));
  /* 11f9f647 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f64c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f64f jae 0x11f9f706 */
  if (!C.cf) goto L_11f9f706;
  /* 11f9f655 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f658 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11f9f65c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9f65f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9f661 jne 0x11f9f701 */
  if (!C.zf) goto L_11f9f701;
  /* 11f9f667 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f66a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f66e jne 0x11f9f6a9 */
  if (!C.zf) goto L_11f9f6a9;
  /* 11f9f670 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f9f672 call 0x11f99e00 */
  push32(0x11f9f677u); f_11f99e00();
  /* 11f9f677 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f67a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f67d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f681 jne 0x11f9f69f */
  if (!C.zf) goto L_11f9f69f;
  /* 11f9f683 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f686 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f689 push edx */
  push32((uint32_t)(EDX));
  /* 11f9f68a call dword ptr [0x11fc5354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5354))), 0x11f9f690u);
  /* 11f9f690 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f693 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f9f696 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f699 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f69c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11f9f69f:;
  /* 11f9f69f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f9f6a1 call 0x11f99ea0 */
  push32(0x11f9f6a6u); f_11f99ea0();
  /* 11f9f6a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f9f6a9:;
  /* 11f9f6a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f6ac add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f6af push eax */
  push32((uint32_t)(EAX));
  /* 11f9f6b0 call dword ptr [0x11fc5344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5344))), 0x11f9f6b6u);
  /* 11f9f6b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f6b9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11f9f6bd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9f6c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9f6c2 je 0x11f9f6d6 */
  if (C.zf) goto L_11f9f6d6;
  /* 11f9f6c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f6c7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f6ca push eax */
  push32((uint32_t)(EAX));
  /* 11f9f6cb call dword ptr [0x11fc5340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5340))), 0x11f9f6d1u);
  /* 11f9f6d1 jmp 0x11f9f634 */
  goto L_11f9f634;
L_11f9f6d6:;
  /* 11f9f6d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f6d9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11f9f6df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9f6e2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f9f6e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9f6e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f6eb sub eax, dword ptr [edx*4 + 0x11fc40a0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x11fc40a0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9f6f2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f9f6f3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 11f9f6f8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f9f6fa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f6fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f9f6ff jmp 0x11f9f706 */
  goto L_11f9f706;
L_11f9f701:;
  /* 11f9f701 jmp 0x11f9f634 */
  goto L_11f9f634;
L_11f9f706:;
  /* 11f9f706 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f70a je 0x11f9f711 */
  if (C.zf) goto L_11f9f711;
  /* 11f9f70c jmp 0x11f9f7b0 */
  goto L_11f9f7b0;
L_11f9f711:;
  /* 11f9f711 jmp 0x11f9f7ab */
  goto L_11f9f7ab;
L_11f9f716:;
  /* 11f9f716 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11f9f718 push 0x11fbe1c4 */
  push32((uint32_t)(0x11fbe1c4u));
  /* 11f9f71d push 2 */
  push32((uint32_t)(0x2u));
  /* 11f9f71f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11f9f724 call 0x11f96400 */
  push32(0x11f9f729u); f_11f96400();
  /* 11f9f729 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f72c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f9f72f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f733 je 0x11f9f7a9 */
  if (C.zf) goto L_11f9f7a9;
  /* 11f9f735 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9f738 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f73b mov dword ptr [eax*4 + 0x11fc40a0], ecx */
  w32((uint32_t)(EAX*4 + 0x11fc40a0), (ECX));
  /* 11f9f742 mov edx, dword ptr [0x11fc41dc] */
  EDX = (r32((uint32_t)(0x11fc41dc)));
  /* 11f9f748 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f74b mov dword ptr [0x11fc41dc], edx */
  w32((uint32_t)(0x11fc41dc), (EDX));
  /* 11f9f751 jmp 0x11f9f75c */
  goto L_11f9f75c;
L_11f9f753:;
  /* 11f9f753 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f756 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f759 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f9f75c:;
  /* 11f9f75c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9f75f mov edx, dword ptr [ecx*4 + 0x11fc40a0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11fc40a0)));
  /* 11f9f766 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f76c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f76f jae 0x11f9f794 */
  if (!C.cf) goto L_11f9f794;
  /* 11f9f771 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f774 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11f9f778 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f77b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11f9f781 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f784 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11f9f788 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9f78b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11f9f792 jmp 0x11f9f753 */
  goto L_11f9f753;
L_11f9f794:;
  /* 11f9f794 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9f797 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f9f79a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f9f79d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9f7a0 push edx */
  push32((uint32_t)(EDX));
  /* 11f9f7a1 call 0x11f9faf0 */
  push32(0x11f9f7a6u); f_11f9faf0();
  /* 11f9f7a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f9f7a9:;
  /* 11f9f7a9 jmp 0x11f9f7b0 */
  goto L_11f9f7b0;
L_11f9f7ab:;
  /* 11f9f7ab jmp 0x11f9f601 */
  goto L_11f9f601;
L_11f9f7b0:;
  /* 11f9f7b0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11f9f7b2 call 0x11f99ea0 */
  push32(0x11f9f7b7u); f_11f99ea0();
  /* 11f9f7b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9f7ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9f7bd pop esi */
  ESI = (pop32());
  /* 11f9f7be mov esp, ebp */
  ESP = (EBP);
  /* 11f9f7c0 pop ebp */
  EBP = (pop32());
  /* 11f9f7c1 ret  */
  ESPCHK(0x11f9f5e0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x11f9f7d0 (183 bytes, 57 insns) */
void f_11f9f7d0(void) {
  FTRACE(0x11f9f7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9f7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9f7d1 mov ebp, esp */
  EBP = (ESP);
  /* 11f9f7d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9f7d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9f7d7 cmp eax, dword ptr [0x11fc41dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11fc41dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f7dd jae 0x11f9f86a */
  if (!C.cf) goto L_11f9f86a;
  /* 11f9f7e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9f7e6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f9f7e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9f7ec and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11f9f7ef imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9f7f2 mov eax, dword ptr [ecx*4 + 0x11fc40a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11fc40a0)));
  /* 11f9f7f9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f7fd jne 0x11f9f86a */
  if (!C.zf) goto L_11f9f86a;
  /* 11f9f7ff cmp dword ptr [0x11fc26b8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11fc26b8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f806 jne 0x11f9f84a */
  if (!C.zf) goto L_11f9f84a;
  /* 11f9f808 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9f80b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f9f80e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f812 je 0x11f9f822 */
  if (C.zf) goto L_11f9f822;
  /* 11f9f814 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f818 je 0x11f9f830 */
  if (C.zf) goto L_11f9f830;
  /* 11f9f81a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f81e je 0x11f9f83e */
  if (C.zf) goto L_11f9f83e;
  /* 11f9f820 jmp 0x11f9f84a */
  goto L_11f9f84a;
L_11f9f822:;
  /* 11f9f822 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9f825 push edx */
  push32((uint32_t)(EDX));
  /* 11f9f826 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11f9f828 call dword ptr [0x11fc530c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc530c))), 0x11f9f82eu);
  /* 11f9f82e jmp 0x11f9f84a */
  goto L_11f9f84a;
L_11f9f830:;
  /* 11f9f830 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9f833 push eax */
  push32((uint32_t)(EAX));
  /* 11f9f834 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11f9f836 call dword ptr [0x11fc530c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc530c))), 0x11f9f83cu);
  /* 11f9f83c jmp 0x11f9f84a */
  goto L_11f9f84a;
L_11f9f83e:;
  /* 11f9f83e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9f841 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9f842 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11f9f844 call dword ptr [0x11fc530c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc530c))), 0x11f9f84au);
L_11f9f84a:;
  /* 11f9f84a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9f84d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11f9f850 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9f853 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11f9f856 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9f859 mov ecx, dword ptr [edx*4 + 0x11fc40a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11fc40a0)));
  /* 11f9f860 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9f863 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 11f9f866 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9f868 jmp 0x11f9f883 */
  goto L_11f9f883;
L_11f9f86a:;
  /* 11f9f86a call 0x11f9e2d0 */
  push32(0x11f9f86fu); f_11f9e2d0();
  /* 11f9f86f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11f9f875 call 0x11f9e2e0 */
  push32(0x11f9f87au); f_11f9e2e0();
  /* 11f9f87a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11f9f880 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11f9f883:;
  /* 11f9f883 mov esp, ebp */
  ESP = (EBP);
  /* 11f9f885 pop ebp */
  EBP = (pop32());
  /* 11f9f886 ret  */
  ESPCHK(0x11f9f7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f890 @ 0x11f9f890 (216 bytes, 63 insns) */
void f_11f9f890(void) {
  FTRACE(0x11f9f890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9f890 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9f891 mov ebp, esp */
  EBP = (ESP);
  /* 11f9f893 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9f894 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9f897 cmp eax, dword ptr [0x11fc41dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11fc41dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f89d jae 0x11f9f94b */
  if (!C.cf) goto L_11f9f94b;
  /* 11f9f8a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9f8a6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f9f8a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9f8ac and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11f9f8af imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9f8b2 mov eax, dword ptr [ecx*4 + 0x11fc40a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11fc40a0)));
  /* 11f9f8b9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11f9f8be and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11f9f8c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9f8c3 je 0x11f9f94b */
  if (C.zf) goto L_11f9f94b;
  /* 11f9f8c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9f8cc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11f9f8cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9f8d2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11f9f8d5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9f8d8 mov ecx, dword ptr [edx*4 + 0x11fc40a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11fc40a0)));
  /* 11f9f8df cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f8e3 je 0x11f9f94b */
  if (C.zf) goto L_11f9f94b;
  /* 11f9f8e5 cmp dword ptr [0x11fc26b8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11fc26b8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f8ec jne 0x11f9f92a */
  if (!C.zf) goto L_11f9f92a;
  /* 11f9f8ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9f8f1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f9f8f4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f8f8 je 0x11f9f908 */
  if (C.zf) goto L_11f9f908;
  /* 11f9f8fa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f8fe je 0x11f9f914 */
  if (C.zf) goto L_11f9f914;
  /* 11f9f900 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f904 je 0x11f9f920 */
  if (C.zf) goto L_11f9f920;
  /* 11f9f906 jmp 0x11f9f92a */
  goto L_11f9f92a;
L_11f9f908:;
  /* 11f9f908 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9f90a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11f9f90c call dword ptr [0x11fc530c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc530c))), 0x11f9f912u);
  /* 11f9f912 jmp 0x11f9f92a */
  goto L_11f9f92a;
L_11f9f914:;
  /* 11f9f914 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9f916 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11f9f918 call dword ptr [0x11fc530c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc530c))), 0x11f9f91eu);
  /* 11f9f91e jmp 0x11f9f92a */
  goto L_11f9f92a;
L_11f9f920:;
  /* 11f9f920 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9f922 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11f9f924 call dword ptr [0x11fc530c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc530c))), 0x11f9f92au);
L_11f9f92a:;
  /* 11f9f92a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9f92d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11f9f930 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9f933 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11f9f936 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9f939 mov edx, dword ptr [eax*4 + 0x11fc40a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11fc40a0)));
  /* 11f9f940 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 11f9f947 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9f949 jmp 0x11f9f964 */
  goto L_11f9f964;
L_11f9f94b:;
  /* 11f9f94b call 0x11f9e2d0 */
  push32(0x11f9f950u); f_11f9e2d0();
  /* 11f9f950 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11f9f956 call 0x11f9e2e0 */
  push32(0x11f9f95bu); f_11f9e2e0();
  /* 11f9f95b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11f9f961 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11f9f964:;
  /* 11f9f964 mov esp, ebp */
  ESP = (EBP);
  /* 11f9f966 pop ebp */
  EBP = (pop32());
  /* 11f9f967 ret  */
  ESPCHK(0x11f9f890u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f970 @ 0x11f9f970 (102 bytes, 30 insns) */
void f_11f9f970(void) {
  FTRACE(0x11f9f970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9f970 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9f971 mov ebp, esp */
  EBP = (ESP);
  /* 11f9f973 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9f976 cmp eax, dword ptr [0x11fc41dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11fc41dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9f97c jae 0x11f9f9bb */
  if (!C.cf) goto L_11f9f9bb;
  /* 11f9f97e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9f981 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f9f984 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9f987 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11f9f98a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9f98d mov eax, dword ptr [ecx*4 + 0x11fc40a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11fc40a0)));
  /* 11f9f994 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11f9f999 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11f9f99c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9f99e je 0x11f9f9bb */
  if (C.zf) goto L_11f9f9bb;
  /* 11f9f9a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9f9a3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11f9f9a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9f9a9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11f9f9ac imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9f9af mov ecx, dword ptr [edx*4 + 0x11fc40a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11fc40a0)));
  /* 11f9f9b6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 11f9f9b9 jmp 0x11f9f9d4 */
  goto L_11f9f9d4;
L_11f9f9bb:;
  /* 11f9f9bb call 0x11f9e2d0 */
  push32(0x11f9f9c0u); f_11f9e2d0();
  /* 11f9f9c0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11f9f9c6 call 0x11f9e2e0 */
  push32(0x11f9f9cbu); f_11f9e2e0();
  /* 11f9f9cb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11f9f9d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11f9f9d4:;
  /* 11f9f9d4 pop ebp */
  EBP = (pop32());
  /* 11f9f9d5 ret  */
  ESPCHK(0x11f9f970u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9e0 @ 0x11f9f9e0 (260 bytes, 83 insns) */
void f_11f9f9e0(void) {
  FTRACE(0x11f9f9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9f9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9f9e1 mov ebp, esp */
  EBP = (ESP);
  /* 11f9f9e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9f9e6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 11f9f9ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9f9ed and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11f9f9f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9f9f2 je 0x11f9f9fd */
  if (C.zf) goto L_11f9f9fd;
  /* 11f9f9f4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11f9f9f7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11f9f9fa mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_11f9f9fd:;
  /* 11f9f9fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9fa00 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9fa06 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9fa08 je 0x11f9fa12 */
  if (C.zf) goto L_11f9fa12;
  /* 11f9fa0a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11f9fa0d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 11f9fa0f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_11f9fa12:;
  /* 11f9fa12 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9fa15 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 11f9fa1b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9fa1d je 0x11f9fa28 */
  if (C.zf) goto L_11f9fa28;
  /* 11f9fa1f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11f9fa22 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11f9fa25 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11f9fa28:;
  /* 11f9fa28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9fa2b push eax */
  push32((uint32_t)(EAX));
  /* 11f9fa2c call dword ptr [0x11fc53d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc53d0))), 0x11f9fa32u);
  /* 11f9fa32 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f9fa35 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9fa39 jne 0x11f9fa52 */
  if (!C.zf) goto L_11f9fa52;
  /* 11f9fa3b call dword ptr [0x11fc53ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc53ac))), 0x11f9fa41u);
  /* 11f9fa41 push eax */
  push32((uint32_t)(EAX));
  /* 11f9fa42 call 0x11f9e230 */
  push32(0x11f9fa47u); f_11f9e230();
  /* 11f9fa47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9fa4a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f9fa4d jmp 0x11f9fae0 */
  goto L_11f9fae0;
L_11f9fa52:;
  /* 11f9fa52 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9fa56 jne 0x11f9fa63 */
  if (!C.zf) goto L_11f9fa63;
  /* 11f9fa58 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11f9fa5b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11f9fa5e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11f9fa61 jmp 0x11f9fa72 */
  goto L_11f9fa72;
L_11f9fa63:;
  /* 11f9fa63 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9fa67 jne 0x11f9fa72 */
  if (!C.zf) goto L_11f9fa72;
  /* 11f9fa69 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11f9fa6c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11f9fa6f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11f9fa72:;
  /* 11f9fa72 call 0x11f9f5e0 */
  push32(0x11f9fa77u); f_11f9f5e0();
  /* 11f9fa77 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f9fa7a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9fa7e jne 0x11f9fa9b */
  if (!C.zf) goto L_11f9fa9b;
  /* 11f9fa80 call 0x11f9e2d0 */
  push32(0x11f9fa85u); f_11f9e2d0();
  /* 11f9fa85 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 11f9fa8b call 0x11f9e2e0 */
  push32(0x11f9fa90u); f_11f9e2e0();
  /* 11f9fa90 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11f9fa96 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f9fa99 jmp 0x11f9fae0 */
  goto L_11f9fae0;
L_11f9fa9b:;
  /* 11f9fa9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9fa9e push eax */
  push32((uint32_t)(EAX));
  /* 11f9fa9f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9faa2 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9faa3 call 0x11f9f7d0 */
  push32(0x11f9faa8u); f_11f9f7d0();
  /* 11f9faa8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9faab mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11f9faae or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 11f9fab1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 11f9fab4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9fab7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11f9faba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9fabd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11f9fac0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9fac3 mov edx, dword ptr [eax*4 + 0x11fc40a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11fc40a0)));
  /* 11f9faca mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11f9facd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 11f9fad1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9fad4 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9fad5 call 0x11f9fb80 */
  push32(0x11f9fadau); f_11f9fb80();
  /* 11f9fada add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9fadd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11f9fae0:;
  /* 11f9fae0 mov esp, ebp */
  ESP = (EBP);
  /* 11f9fae2 pop ebp */
  EBP = (pop32());
  /* 11f9fae3 ret  */
  ESPCHK(0x11f9f9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000faf0 @ 0x11f9faf0 (134 bytes, 44 insns) */
void f_11f9faf0(void) {
  FTRACE(0x11f9faf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9faf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9faf1 mov ebp, esp */
  EBP = (ESP);
  /* 11f9faf3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9faf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9faf7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11f9fafa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9fafd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11f9fb00 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9fb03 mov edx, dword ptr [eax*4 + 0x11fc40a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11fc40a0)));
  /* 11f9fb0a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9fb0c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f9fb0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9fb12 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9fb16 jne 0x11f9fb51 */
  if (!C.zf) goto L_11f9fb51;
  /* 11f9fb18 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f9fb1a call 0x11f99e00 */
  push32(0x11f9fb1fu); f_11f99e00();
  /* 11f9fb1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9fb22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9fb25 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9fb29 jne 0x11f9fb47 */
  if (!C.zf) goto L_11f9fb47;
  /* 11f9fb2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9fb2e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9fb31 push edx */
  push32((uint32_t)(EDX));
  /* 11f9fb32 call dword ptr [0x11fc5354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5354))), 0x11f9fb38u);
  /* 11f9fb38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9fb3b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f9fb3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9fb41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9fb44 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11f9fb47:;
  /* 11f9fb47 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f9fb49 call 0x11f99ea0 */
  push32(0x11f9fb4eu); f_11f99ea0();
  /* 11f9fb4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f9fb51:;
  /* 11f9fb51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9fb54 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11f9fb57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9fb5a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11f9fb5d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9fb60 mov edx, dword ptr [eax*4 + 0x11fc40a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11fc40a0)));
  /* 11f9fb67 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 11f9fb6b push eax */
  push32((uint32_t)(EAX));
  /* 11f9fb6c call dword ptr [0x11fc5344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5344))), 0x11f9fb72u);
  /* 11f9fb72 mov esp, ebp */
  ESP = (EBP);
  /* 11f9fb74 pop ebp */
  EBP = (pop32());
  /* 11f9fb75 ret  */
  ESPCHK(0x11f9faf0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x11f9fb80 (38 bytes, 13 insns) */
void f_11f9fb80(void) {
  FTRACE(0x11f9fb80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9fb80 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9fb81 mov ebp, esp */
  EBP = (ESP);
  /* 11f9fb83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9fb86 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11f9fb89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9fb8c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11f9fb8f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9fb92 mov edx, dword ptr [eax*4 + 0x11fc40a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11fc40a0)));
  /* 11f9fb99 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 11f9fb9d push eax */
  push32((uint32_t)(EAX));
  /* 11f9fb9e call dword ptr [0x11fc5340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5340))), 0x11f9fba4u);
  /* 11f9fba4 pop ebp */
  EBP = (pop32());
  /* 11f9fba5 ret  */
  ESPCHK(0x11f9fb80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fbb0 @ 0x11f9fbb0 (218 bytes, 63 insns) */
void f_11f9fbb0(void) {
  FTRACE(0x11f9fbb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9fbb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9fbb1 mov ebp, esp */
  EBP = (ESP);
  /* 11f9fbb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9fbb6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f9fbbd push 2 */
  push32((uint32_t)(0x2u));
  /* 11f9fbbf call 0x11f99e00 */
  push32(0x11f9fbc4u); f_11f99e00();
  /* 11f9fbc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9fbc7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 11f9fbce jmp 0x11f9fbd9 */
  goto L_11f9fbd9;
L_11f9fbd0:;
  /* 11f9fbd0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9fbd3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9fbd6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11f9fbd9:;
  /* 11f9fbd9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9fbdc cmp ecx, dword ptr [0x11fc3da0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11fc3da0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9fbe2 jge 0x11f9fc79 */
  if ((C.sf==C.of)) goto L_11f9fc79;
  /* 11f9fbe8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9fbeb mov eax, dword ptr [0x11fc2a50] */
  EAX = (r32((uint32_t)(0x11fc2a50)));
  /* 11f9fbf0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9fbf4 je 0x11f9fc74 */
  if (C.zf) goto L_11f9fc74;
  /* 11f9fbf6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9fbf9 mov edx, dword ptr [0x11fc2a50] */
  EDX = (r32((uint32_t)(0x11fc2a50)));
  /* 11f9fbff mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11f9fc02 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11f9fc05 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11f9fc0b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9fc0d je 0x11f9fc31 */
  if (C.zf) goto L_11f9fc31;
  /* 11f9fc0f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9fc12 mov eax, dword ptr [0x11fc2a50] */
  EAX = (r32((uint32_t)(0x11fc2a50)));
  /* 11f9fc17 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11f9fc1a push ecx */
  push32((uint32_t)(ECX));
  /* 11f9fc1b call 0x11fa09a0 */
  push32(0x11f9fc20u); f_11fa09a0();
  /* 11f9fc20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9fc23 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9fc26 je 0x11f9fc31 */
  if (C.zf) goto L_11f9fc31;
  /* 11f9fc28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9fc2b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9fc2e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f9fc31:;
  /* 11f9fc31 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9fc35 jl 0x11f9fc74 */
  if ((C.sf!=C.of)) goto L_11f9fc74;
  /* 11f9fc37 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9fc3a mov ecx, dword ptr [0x11fc2a50] */
  ECX = (r32((uint32_t)(0x11fc2a50)));
  /* 11f9fc40 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11f9fc43 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9fc46 push edx */
  push32((uint32_t)(EDX));
  /* 11f9fc47 call dword ptr [0x11fc53d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc53d8))), 0x11f9fc4du);
  /* 11f9fc4d push 2 */
  push32((uint32_t)(0x2u));
  /* 11f9fc4f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9fc52 mov ecx, dword ptr [0x11fc2a50] */
  ECX = (r32((uint32_t)(0x11fc2a50)));
  /* 11f9fc58 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11f9fc5b push edx */
  push32((uint32_t)(EDX));
  /* 11f9fc5c call 0x11f96e90 */
  push32(0x11f9fc61u); f_11f96e90();
  /* 11f9fc61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9fc64 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9fc67 mov ecx, dword ptr [0x11fc2a50] */
  ECX = (r32((uint32_t)(0x11fc2a50)));
  /* 11f9fc6d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_11f9fc74:;
  /* 11f9fc74 jmp 0x11f9fbd0 */
  goto L_11f9fbd0;
L_11f9fc79:;
  /* 11f9fc79 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f9fc7b call 0x11f99ea0 */
  push32(0x11f9fc80u); f_11f99ea0();
  /* 11f9fc80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9fc83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9fc86 mov esp, ebp */
  ESP = (EBP);
  /* 11f9fc88 pop ebp */
  EBP = (pop32());
  /* 11f9fc89 ret  */
  ESPCHK(0x11f9fbb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc90 @ 0x11f9fc90 (68 bytes, 26 insns) */
void f_11f9fc90(void) {
  FTRACE(0x11f9fc90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9fc90 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9fc91 mov ebp, esp */
  EBP = (ESP);
  /* 11f9fc93 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9fc94 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9fc98 jne 0x11f9fca6 */
  if (!C.zf) goto L_11f9fca6;
  /* 11f9fc9a push 0 */
  push32((uint32_t)(0x0u));
  /* 11f9fc9c call 0x11f9fe00 */
  push32(0x11f9fca1u); f_11f9fe00();
  /* 11f9fca1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9fca4 jmp 0x11f9fcd0 */
  goto L_11f9fcd0;
L_11f9fca6:;
  /* 11f9fca6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9fca9 push eax */
  push32((uint32_t)(EAX));
  /* 11f9fcaa call 0x11f9f210 */
  push32(0x11f9fcafu); f_11f9f210();
  /* 11f9fcaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9fcb2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9fcb5 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9fcb6 call 0x11f9fce0 */
  push32(0x11f9fcbbu); f_11f9fce0();
  /* 11f9fcbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9fcbe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f9fcc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9fcc4 push edx */
  push32((uint32_t)(EDX));
  /* 11f9fcc5 call 0x11f9f280 */
  push32(0x11f9fccau); f_11f9f280();
  /* 11f9fcca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9fccd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11f9fcd0:;
  /* 11f9fcd0 mov esp, ebp */
  ESP = (EBP);
  /* 11f9fcd2 pop ebp */
  EBP = (pop32());
  /* 11f9fcd3 ret  */
  ESPCHK(0x11f9fc90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fce0 @ 0x11f9fce0 (65 bytes, 26 insns) */
void f_11f9fce0(void) {
  FTRACE(0x11f9fce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9fce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9fce1 mov ebp, esp */
  EBP = (ESP);
  /* 11f9fce3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9fce6 push eax */
  push32((uint32_t)(EAX));
  /* 11f9fce7 call 0x11f9fd30 */
  push32(0x11f9fcecu); f_11f9fd30();
  /* 11f9fcec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9fcef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9fcf1 je 0x11f9fcf8 */
  if (C.zf) goto L_11f9fcf8;
  /* 11f9fcf3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f9fcf6 jmp 0x11f9fd1f */
  goto L_11f9fd1f;
L_11f9fcf8:;
  /* 11f9fcf8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9fcfb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f9fcfe and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9fd04 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9fd06 je 0x11f9fd1d */
  if (C.zf) goto L_11f9fd1d;
  /* 11f9fd08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9fd0b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f9fd0e push ecx */
  push32((uint32_t)(ECX));
  /* 11f9fd0f call 0x11fa0af0 */
  push32(0x11f9fd14u); f_11fa0af0();
  /* 11f9fd14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9fd17 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f9fd19 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9fd1b jmp 0x11f9fd1f */
  goto L_11f9fd1f;
L_11f9fd1d:;
  /* 11f9fd1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f9fd1f:;
  /* 11f9fd1f pop ebp */
  EBP = (pop32());
  /* 11f9fd20 ret  */
  ESPCHK(0x11f9fce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd30 @ 0x11f9fd30 (183 bytes, 62 insns) */
void f_11f9fd30(void) {
  FTRACE(0x11f9fd30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9fd30 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9fd31 mov ebp, esp */
  EBP = (ESP);
  /* 11f9fd33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9fd36 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f9fd3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9fd40 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f9fd43 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9fd46 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f9fd49 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9fd4c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9fd4f jne 0x11f9fdcb */
  if (!C.zf) goto L_11f9fdcb;
  /* 11f9fd51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9fd54 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11f9fd57 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 11f9fd5d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9fd5f je 0x11f9fdcb */
  if (C.zf) goto L_11f9fdcb;
  /* 11f9fd61 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9fd64 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9fd67 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11f9fd69 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9fd6c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f9fd6f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9fd73 jle 0x11f9fdcb */
  if ((C.zf||C.sf!=C.of)) goto L_11f9fdcb;
  /* 11f9fd75 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9fd78 push edx */
  push32((uint32_t)(EDX));
  /* 11f9fd79 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9fd7c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f9fd7f push ecx */
  push32((uint32_t)(ECX));
  /* 11f9fd80 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9fd83 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11f9fd86 push eax */
  push32((uint32_t)(EAX));
  /* 11f9fd87 call 0x11f9eca0 */
  push32(0x11f9fd8cu); f_11f9eca0();
  /* 11f9fd8c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9fd8f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9fd92 jne 0x11f9fdb5 */
  if (!C.zf) goto L_11f9fdb5;
  /* 11f9fd94 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9fd97 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f9fd9a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9fda0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9fda2 je 0x11f9fdb3 */
  if (C.zf) goto L_11f9fdb3;
  /* 11f9fda4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9fda7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11f9fdaa and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 11f9fdad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9fdb0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_11f9fdb3:;
  /* 11f9fdb3 jmp 0x11f9fdcb */
  goto L_11f9fdcb;
L_11f9fdb5:;
  /* 11f9fdb5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9fdb8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11f9fdbb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11f9fdbe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9fdc1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11f9fdc4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11f9fdcb:;
  /* 11f9fdcb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9fdce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9fdd1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f9fdd4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11f9fdd6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f9fdd9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11f9fde0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9fde3 mov esp, ebp */
  ESP = (EBP);
  /* 11f9fde5 pop ebp */
  EBP = (pop32());
  /* 11f9fde6 ret  */
  ESPCHK(0x11f9fd30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fdf0 @ 0x11f9fdf0 (15 bytes, 7 insns) */
void f_11f9fdf0(void) {
  FTRACE(0x11f9fdf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9fdf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9fdf1 mov ebp, esp */
  EBP = (ESP);
  /* 11f9fdf3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f9fdf5 call 0x11f9fe00 */
  push32(0x11f9fdfau); f_11f9fe00();
  /* 11f9fdfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9fdfd pop ebp */
  EBP = (pop32());
  /* 11f9fdfe ret  */
  ESPCHK(0x11f9fdf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe00 @ 0x11f9fe00 (319 bytes, 94 insns) */
void f_11f9fe00(void) {
  FTRACE(0x11f9fe00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9fe00 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9fe01 mov ebp, esp */
  EBP = (ESP);
  /* 11f9fe03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9fe06 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f9fe0d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11f9fe14 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f9fe16 call 0x11f99e00 */
  push32(0x11f9fe1bu); f_11f99e00();
  /* 11f9fe1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9fe1e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11f9fe25 jmp 0x11f9fe30 */
  goto L_11f9fe30;
L_11f9fe27:;
  /* 11f9fe27 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9fe2a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9fe2d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11f9fe30:;
  /* 11f9fe30 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9fe33 cmp ecx, dword ptr [0x11fc3da0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11fc3da0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9fe39 jge 0x11f9ff23 */
  if ((C.sf==C.of)) goto L_11f9ff23;
  /* 11f9fe3f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9fe42 mov eax, dword ptr [0x11fc2a50] */
  EAX = (r32((uint32_t)(0x11fc2a50)));
  /* 11f9fe47 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9fe4b je 0x11f9ff1e */
  if (C.zf) goto L_11f9ff1e;
  /* 11f9fe51 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9fe54 mov edx, dword ptr [0x11fc2a50] */
  EDX = (r32((uint32_t)(0x11fc2a50)));
  /* 11f9fe5a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11f9fe5d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11f9fe60 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11f9fe66 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f9fe68 je 0x11f9ff1e */
  if (C.zf) goto L_11f9ff1e;
  /* 11f9fe6e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9fe71 mov eax, dword ptr [0x11fc2a50] */
  EAX = (r32((uint32_t)(0x11fc2a50)));
  /* 11f9fe76 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11f9fe79 push ecx */
  push32((uint32_t)(ECX));
  /* 11f9fe7a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9fe7d push edx */
  push32((uint32_t)(EDX));
  /* 11f9fe7e call 0x11f9f250 */
  push32(0x11f9fe83u); f_11f9f250();
  /* 11f9fe83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9fe86 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9fe89 mov ecx, dword ptr [0x11fc2a50] */
  ECX = (r32((uint32_t)(0x11fc2a50)));
  /* 11f9fe8f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11f9fe92 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11f9fe95 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11f9fe9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f9fe9c je 0x11f9ff05 */
  if (C.zf) goto L_11f9ff05;
  /* 11f9fe9e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9fea2 jne 0x11f9fec9 */
  if (!C.zf) goto L_11f9fec9;
  /* 11f9fea4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9fea7 mov edx, dword ptr [0x11fc2a50] */
  EDX = (r32((uint32_t)(0x11fc2a50)));
  /* 11f9fead mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11f9feb0 push eax */
  push32((uint32_t)(EAX));
  /* 11f9feb1 call 0x11f9fce0 */
  push32(0x11f9feb6u); f_11f9fce0();
  /* 11f9feb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9feb9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9febc je 0x11f9fec7 */
  if (C.zf) goto L_11f9fec7;
  /* 11f9febe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9fec1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9fec4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11f9fec7:;
  /* 11f9fec7 jmp 0x11f9ff05 */
  goto L_11f9ff05;
L_11f9fec9:;
  /* 11f9fec9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9fecd jne 0x11f9ff05 */
  if (!C.zf) goto L_11f9ff05;
  /* 11f9fecf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9fed2 mov eax, dword ptr [0x11fc2a50] */
  EAX = (r32((uint32_t)(0x11fc2a50)));
  /* 11f9fed7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11f9feda mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f9fedd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11f9fee0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f9fee2 je 0x11f9ff05 */
  if (C.zf) goto L_11f9ff05;
  /* 11f9fee4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9fee7 mov ecx, dword ptr [0x11fc2a50] */
  ECX = (r32((uint32_t)(0x11fc2a50)));
  /* 11f9feed mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11f9fef0 push edx */
  push32((uint32_t)(EDX));
  /* 11f9fef1 call 0x11f9fce0 */
  push32(0x11f9fef6u); f_11f9fce0();
  /* 11f9fef6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9fef9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9fefc jne 0x11f9ff05 */
  if (!C.zf) goto L_11f9ff05;
  /* 11f9fefe mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_11f9ff05:;
  /* 11f9ff05 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9ff08 mov ecx, dword ptr [0x11fc2a50] */
  ECX = (r32((uint32_t)(0x11fc2a50)));
  /* 11f9ff0e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11f9ff11 push edx */
  push32((uint32_t)(EDX));
  /* 11f9ff12 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f9ff15 push eax */
  push32((uint32_t)(EAX));
  /* 11f9ff16 call 0x11f9f2c0 */
  push32(0x11f9ff1bu); f_11f9f2c0();
  /* 11f9ff1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f9ff1e:;
  /* 11f9ff1e jmp 0x11f9fe27 */
  goto L_11f9fe27;
L_11f9ff23:;
  /* 11f9ff23 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f9ff25 call 0x11f99ea0 */
  push32(0x11f9ff2au); f_11f99ea0();
  /* 11f9ff2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ff2d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ff31 jne 0x11f9ff38 */
  if (!C.zf) goto L_11f9ff38;
  /* 11f9ff33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f9ff36 jmp 0x11f9ff3b */
  goto L_11f9ff3b;
L_11f9ff38:;
  /* 11f9ff38 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11f9ff3b:;
  /* 11f9ff3b mov esp, ebp */
  ESP = (EBP);
  /* 11f9ff3d pop ebp */
  EBP = (pop32());
  /* 11f9ff3e ret  */
  ESPCHK(0x11f9fe00u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x11f9ff40 (15 bytes, 7 insns) */
void f_11f9ff40(void) {
  FTRACE(0x11f9ff40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9ff40 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9ff41 mov ebp, esp */
  EBP = (ESP);
  /* 11f9ff43 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f9ff45 call 0x11f95370 */
  push32(0x11f9ff4au); f_11f95370();
  /* 11f9ff4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ff4d pop ebp */
  EBP = (pop32());
  /* 11f9ff4e ret  */
  ESPCHK(0x11f9ff40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff50 @ 0x11f9ff50 (1007 bytes, 269 insns) */
void f_11f9ff50(void) {
  FTRACE(0x11f9ff50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f9ff50 push ebp */
  push32((uint32_t)(EBP));
  /* 11f9ff51 mov ebp, esp */
  EBP = (ESP);
  /* 11f9ff53 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f9ff59 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ff5d jl 0x11f9ff65 */
  if ((C.sf!=C.of)) goto L_11f9ff65;
  /* 11f9ff5f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ff63 jle 0x11f9ff6c */
  if ((C.zf||C.sf!=C.of)) goto L_11f9ff6c;
L_11f9ff65:;
  /* 11f9ff65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f9ff67 jmp 0x11fa033b */
  goto L_11fa033b;
L_11f9ff6c:;
  /* 11f9ff6c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11f9ff6e call 0x11f99e00 */
  push32(0x11f9ff73u); f_11f99e00();
  /* 11f9ff73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ff76 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11f9ff7d mov eax, dword ptr [0x11fc2a3c] */
  EAX = (r32((uint32_t)(0x11fc2a3c)));
  /* 11f9ff82 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ff85 mov dword ptr [0x11fc2a3c], eax */
  w32((uint32_t)(0x11fc2a3c), (EAX));
L_11f9ff8a:;
  /* 11f9ff8a cmp dword ptr [0x11fc2a4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2a4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ff91 je 0x11f9ff9d */
  if (C.zf) goto L_11f9ff9d;
  /* 11f9ff93 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f9ff95 call dword ptr [0x11fc52fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc52fc))), 0x11f9ff9bu);
  /* 11f9ff9b jmp 0x11f9ff8a */
  goto L_11f9ff8a;
L_11f9ff9d:;
  /* 11f9ff9d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ffa1 je 0x11f9ffe1 */
  if (C.zf) goto L_11f9ffe1;
  /* 11f9ffa3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9ffa7 je 0x11f9ffc1 */
  if (C.zf) goto L_11f9ffc1;
  /* 11f9ffa9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9ffac push ecx */
  push32((uint32_t)(ECX));
  /* 11f9ffad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9ffb0 push edx */
  push32((uint32_t)(EDX));
  /* 11f9ffb1 call 0x11fa0340 */
  push32(0x11f9ffb6u); f_11fa0340();
  /* 11f9ffb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f9ffb9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11f9ffbf jmp 0x11f9ffd3 */
  goto L_11f9ffd3;
L_11f9ffc1:;
  /* 11f9ffc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f9ffc4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f9ffc7 mov ecx, dword ptr [eax + 0x11fc14ec] */
  ECX = (r32((uint32_t)(EAX + 0x11fc14ec)));
  /* 11f9ffcd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_11f9ffd3:;
  /* 11f9ffd3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11f9ffd9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11f9ffdc jmp 0x11fa031b */
  goto L_11fa031b;
L_11f9ffe1:;
  /* 11f9ffe1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 11f9ffe8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11f9ffef cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f9fff3 je 0x11fa0313 */
  if (C.zf) goto L_11fa0313;
  /* 11f9fff9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f9fffc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11f9ffff cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa0002 jne 0x11fa0224 */
  if (!C.zf) goto L_11fa0224;
  /* 11fa0008 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa000b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11fa000f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa0012 jne 0x11fa0224 */
  if (!C.zf) goto L_11fa0224;
  /* 11fa0018 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa001b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 11fa001f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa0022 jne 0x11fa0224 */
  if (!C.zf) goto L_11fa0224;
  /* 11fa0028 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa002b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_11fa0031:;
  /* 11fa0031 push 0x11fbe214 */
  push32((uint32_t)(0x11fbe214u));
  /* 11fa0036 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11fa003c push ecx */
  push32((uint32_t)(ECX));
  /* 11fa003d call 0x11fa21a0 */
  push32(0x11fa0042u); f_11fa21a0();
  /* 11fa0042 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0045 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 11fa004b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa0052 je 0x11fa007d */
  if (C.zf) goto L_11fa007d;
  /* 11fa0054 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11fa005a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa0060 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 11fa0066 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa006d je 0x11fa007d */
  if (C.zf) goto L_11fa007d;
  /* 11fa006f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11fa0075 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fa0078 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa007b jne 0x11fa00a3 */
  if (!C.zf) goto L_11fa00a3;
L_11fa007d:;
  /* 11fa007d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa0081 je 0x11fa009c */
  if (C.zf) goto L_11fa009c;
  /* 11fa0083 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11fa0085 call 0x11f99ea0 */
  push32(0x11fa008au); f_11f99ea0();
  /* 11fa008a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa008d mov edx, dword ptr [0x11fc2a3c] */
  EDX = (r32((uint32_t)(0x11fc2a3c)));
  /* 11fa0093 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa0096 mov dword ptr [0x11fc2a3c], edx */
  w32((uint32_t)(0x11fc2a3c), (EDX));
L_11fa009c:;
  /* 11fa009c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa009e jmp 0x11fa033b */
  goto L_11fa033b;
L_11fa00a3:;
  /* 11fa00a3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11fa00aa jmp 0x11fa00b5 */
  goto L_11fa00b5;
L_11fa00ac:;
  /* 11fa00ac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa00af add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa00b2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11fa00b5:;
  /* 11fa00b5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa00b9 jg 0x11fa0103 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fa0103;
  /* 11fa00bb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11fa00c1 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa00c2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11fa00c8 push edx */
  push32((uint32_t)(EDX));
  /* 11fa00c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa00cc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa00cf mov ecx, dword ptr [eax + 0x11fc14e8] */
  ECX = (r32((uint32_t)(EAX + 0x11fc14e8)));
  /* 11fa00d5 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa00d6 call 0x11fa2160 */
  push32(0x11fa00dbu); f_11fa2160();
  /* 11fa00db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa00de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa00e0 jne 0x11fa0101 */
  if (!C.zf) goto L_11fa0101;
  /* 11fa00e2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa00e5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa00e8 mov eax, dword ptr [edx + 0x11fc14e8] */
  EAX = (r32((uint32_t)(EDX + 0x11fc14e8)));
  /* 11fa00ee push eax */
  push32((uint32_t)(EAX));
  /* 11fa00ef call 0x11f99230 */
  push32(0x11fa00f4u); f_11f99230();
  /* 11fa00f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa00f7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa00fd jne 0x11fa0101 */
  if (!C.zf) goto L_11fa0101;
  /* 11fa00ff jmp 0x11fa0103 */
  goto L_11fa0103;
L_11fa0101:;
  /* 11fa0101 jmp 0x11fa00ac */
  goto L_11fa00ac;
L_11fa0103:;
  /* 11fa0103 push 0x11fbe210 */
  push32((uint32_t)(0x11fbe210u));
  /* 11fa0108 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11fa010e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0111 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 11fa0117 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11fa011d push edx */
  push32((uint32_t)(EDX));
  /* 11fa011e call 0x11fa2120 */
  push32(0x11fa0123u); f_11fa2120();
  /* 11fa0123 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0126 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 11fa012c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa0133 jne 0x11fa0169 */
  if (!C.zf) goto L_11fa0169;
  /* 11fa0135 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11fa013b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fa013e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa0141 je 0x11fa0169 */
  if (C.zf) goto L_11fa0169;
  /* 11fa0143 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa0147 je 0x11fa0162 */
  if (C.zf) goto L_11fa0162;
  /* 11fa0149 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11fa014b call 0x11f99ea0 */
  push32(0x11fa0150u); f_11f99ea0();
  /* 11fa0150 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0153 mov edx, dword ptr [0x11fc2a3c] */
  EDX = (r32((uint32_t)(0x11fc2a3c)));
  /* 11fa0159 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa015c mov dword ptr [0x11fc2a3c], edx */
  w32((uint32_t)(0x11fc2a3c), (EDX));
L_11fa0162:;
  /* 11fa0162 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa0164 jmp 0x11fa033b */
  goto L_11fa033b;
L_11fa0169:;
  /* 11fa0169 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa016d jg 0x11fa01ba */
  if ((!C.zf&&C.sf==C.of)) goto L_11fa01ba;
  /* 11fa016f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11fa0175 push eax */
  push32((uint32_t)(EAX));
  /* 11fa0176 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11fa017c push ecx */
  push32((uint32_t)(ECX));
  /* 11fa017d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 11fa0183 push edx */
  push32((uint32_t)(EDX));
  /* 11fa0184 call 0x11f99c20 */
  push32(0x11fa0189u); f_11f99c20();
  /* 11fa0189 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa018c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11fa0192 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 11fa019a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 11fa01a0 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa01a1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa01a4 push edx */
  push32((uint32_t)(EDX));
  /* 11fa01a5 call 0x11fa0340 */
  push32(0x11fa01aau); f_11fa0340();
  /* 11fa01aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa01ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa01af je 0x11fa01ba */
  if (C.zf) goto L_11fa01ba;
  /* 11fa01b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa01b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa01b7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11fa01ba:;
  /* 11fa01ba mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11fa01c0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa01c6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11fa01cc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11fa01d2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11fa01d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa01d7 je 0x11fa01e8 */
  if (C.zf) goto L_11fa01e8;
  /* 11fa01d9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11fa01df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa01e2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_11fa01e8:;
  /* 11fa01e8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11fa01ee movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11fa01f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa01f3 jne 0x11fa0031 */
  if (!C.zf) goto L_11fa0031;
  /* 11fa01f9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa01fd je 0x11fa020c */
  if (C.zf) goto L_11fa020c;
  /* 11fa01ff call 0x11fa04e0 */
  push32(0x11fa0204u); f_11fa04e0();
  /* 11fa0204 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 11fa020a jmp 0x11fa0216 */
  goto L_11fa0216;
L_11fa020c:;
  /* 11fa020c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_11fa0216:;
  /* 11fa0216 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 11fa021c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fa021f jmp 0x11fa0311 */
  goto L_11fa0311;
L_11fa0224:;
  /* 11fa0224 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0227 push edx */
  push32((uint32_t)(EDX));
  /* 11fa0228 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa022a push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa022c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11fa0232 push eax */
  push32((uint32_t)(EAX));
  /* 11fa0233 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa0236 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa0237 call 0x11fa05e0 */
  push32(0x11fa023cu); f_11fa05e0();
  /* 11fa023c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa023f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fa0242 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa0246 je 0x11fa0311 */
  if (C.zf) goto L_11fa0311;
  /* 11fa024c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11fa0253 jmp 0x11fa025e */
  goto L_11fa025e;
L_11fa0255:;
  /* 11fa0255 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa0258 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa025b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11fa025e:;
  /* 11fa025e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa0262 jg 0x11fa02c0 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fa02c0;
  /* 11fa0264 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa0268 je 0x11fa02be */
  if (C.zf) goto L_11fa02be;
  /* 11fa026a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa026d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa0270 mov ecx, dword ptr [eax + 0x11fc14ec] */
  ECX = (r32((uint32_t)(EAX + 0x11fc14ec)));
  /* 11fa0276 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa0277 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 11fa027d push edx */
  push32((uint32_t)(EDX));
  /* 11fa027e call 0x11fa2090 */
  push32(0x11fa0283u); f_11fa2090();
  /* 11fa0283 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0286 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa0288 je 0x11fa02b5 */
  if (C.zf) goto L_11fa02b5;
  /* 11fa028a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11fa0290 push eax */
  push32((uint32_t)(EAX));
  /* 11fa0291 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa0294 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa0295 call 0x11fa0340 */
  push32(0x11fa029au); f_11fa0340();
  /* 11fa029a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa029d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa029f je 0x11fa02ac */
  if (C.zf) goto L_11fa02ac;
  /* 11fa02a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa02a4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa02a7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11fa02aa jmp 0x11fa02b3 */
  goto L_11fa02b3;
L_11fa02ac:;
  /* 11fa02ac mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11fa02b3:;
  /* 11fa02b3 jmp 0x11fa02be */
  goto L_11fa02be;
L_11fa02b5:;
  /* 11fa02b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa02b8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa02bb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11fa02be:;
  /* 11fa02be jmp 0x11fa0255 */
  goto L_11fa0255;
L_11fa02c0:;
  /* 11fa02c0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa02c4 je 0x11fa02eb */
  if (C.zf) goto L_11fa02eb;
  /* 11fa02c6 call 0x11fa04e0 */
  push32(0x11fa02cbu); f_11fa04e0();
  /* 11fa02cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fa02ce push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa02d0 mov ecx, dword ptr [0x11fc14ec] */
  ECX = (r32((uint32_t)(0x11fc14ec)));
  /* 11fa02d6 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa02d7 call 0x11f96e90 */
  push32(0x11fa02dcu); f_11f96e90();
  /* 11fa02dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa02df mov dword ptr [0x11fc14ec], 0 */
  w32((uint32_t)(0x11fc14ec), (0x0u));
  /* 11fa02e9 jmp 0x11fa0311 */
  goto L_11fa0311;
L_11fa02eb:;
  /* 11fa02eb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa02ef je 0x11fa02fe */
  if (C.zf) goto L_11fa02fe;
  /* 11fa02f1 call 0x11fa04e0 */
  push32(0x11fa02f6u); f_11fa04e0();
  /* 11fa02f6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 11fa02fc jmp 0x11fa0308 */
  goto L_11fa0308;
L_11fa02fe:;
  /* 11fa02fe mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_11fa0308:;
  /* 11fa0308 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 11fa030e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11fa0311:;
  /* 11fa0311 jmp 0x11fa031b */
  goto L_11fa031b;
L_11fa0313:;
  /* 11fa0313 call 0x11fa04e0 */
  push32(0x11fa0318u); f_11fa04e0();
  /* 11fa0318 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11fa031b:;
  /* 11fa031b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa031f je 0x11fa0338 */
  if (C.zf) goto L_11fa0338;
  /* 11fa0321 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11fa0323 call 0x11f99ea0 */
  push32(0x11fa0328u); f_11f99ea0();
  /* 11fa0328 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa032b mov eax, dword ptr [0x11fc2a3c] */
  EAX = (r32((uint32_t)(0x11fc2a3c)));
  /* 11fa0330 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa0333 mov dword ptr [0x11fc2a3c], eax */
  w32((uint32_t)(0x11fc2a3c), (EAX));
L_11fa0338:;
  /* 11fa0338 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11fa033b:;
  /* 11fa033b mov esp, ebp */
  ESP = (EBP);
  /* 11fa033d pop ebp */
  EBP = (pop32());
  /* 11fa033e ret  */
  ESPCHK(0x11f9ff50u, _esp0);
  ESP += 4; return;
}

/* FUN_10010340 @ 0x11fa0340 (403 bytes, 117 insns) */
void f_11fa0340(void) {
  FTRACE(0x11fa0340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa0340 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa0341 mov ebp, esp */
  EBP = (ESP);
  /* 11fa0343 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa0349 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa034c push eax */
  push32((uint32_t)(EAX));
  /* 11fa034d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 11fa0353 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa0354 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 11fa035a push edx */
  push32((uint32_t)(EDX));
  /* 11fa035b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 11fa0361 push eax */
  push32((uint32_t)(EAX));
  /* 11fa0362 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa0365 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa0366 call 0x11fa05e0 */
  push32(0x11fa036bu); f_11fa05e0();
  /* 11fa036b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa036e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa0370 jne 0x11fa0379 */
  if (!C.zf) goto L_11fa0379;
  /* 11fa0372 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa0374 jmp 0x11fa04cf */
  goto L_11fa04cf;
L_11fa0379:;
  /* 11fa0379 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 11fa037e push 0x11fbe218 */
  push32((uint32_t)(0x11fbe218u));
  /* 11fa0383 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa0385 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 11fa038b push edx */
  push32((uint32_t)(EDX));
  /* 11fa038c call 0x11f99230 */
  push32(0x11fa0391u); f_11f99230();
  /* 11fa0391 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0394 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0397 push eax */
  push32((uint32_t)(EAX));
  /* 11fa0398 call 0x11f96400 */
  push32(0x11fa039du); f_11f96400();
  /* 11fa039d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa03a0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fa03a3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa03a7 jne 0x11fa03b0 */
  if (!C.zf) goto L_11fa03b0;
  /* 11fa03a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa03ab jmp 0x11fa04cf */
  goto L_11fa04cf;
L_11fa03b0:;
  /* 11fa03b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa03b3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa03b6 mov ecx, dword ptr [eax + 0x11fc14ec] */
  ECX = (r32((uint32_t)(EAX + 0x11fc14ec)));
  /* 11fa03bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa03bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa03c2 mov eax, dword ptr [edx*4 + 0x11fc28b8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11fc28b8)));
  /* 11fa03c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fa03cc push 6 */
  push32((uint32_t)(0x6u));
  /* 11fa03ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa03d1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa03d4 add ecx, 0x11fc2908 */
  { uint32_t _a=(ECX),_b=(0x11fc2908u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa03da push ecx */
  push32((uint32_t)(ECX));
  /* 11fa03db lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11fa03de push edx */
  push32((uint32_t)(EDX));
  /* 11fa03df call 0x11f9cce0 */
  push32(0x11fa03e4u); f_11f9cce0();
  /* 11fa03e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa03e7 mov eax, dword ptr [0x11fc28d0] */
  EAX = (r32((uint32_t)(0x11fc28d0)));
  /* 11fa03ec mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11fa03ef lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 11fa03f5 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa03f6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa03f9 push edx */
  push32((uint32_t)(EDX));
  /* 11fa03fa call 0x11f993b0 */
  push32(0x11fa03ffu); f_11f993b0();
  /* 11fa03ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0402 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0405 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa0408 mov dword ptr [ecx + 0x11fc14ec], eax */
  w32((uint32_t)(ECX + 0x11fc14ec), (EAX));
  /* 11fa040e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11fa0414 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fa041a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa041d mov dword ptr [eax*4 + 0x11fc28b8], edx */
  w32((uint32_t)(EAX*4 + 0x11fc28b8), (EDX));
  /* 11fa0424 push 6 */
  push32((uint32_t)(0x6u));
  /* 11fa0426 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 11fa042c push ecx */
  push32((uint32_t)(ECX));
  /* 11fa042d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0430 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa0433 add edx, 0x11fc2908 */
  { uint32_t _a=(EDX),_b=(0x11fc2908u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0439 push edx */
  push32((uint32_t)(EDX));
  /* 11fa043a call 0x11f9cce0 */
  push32(0x11fa043fu); f_11f9cce0();
  /* 11fa043f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0442 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa0446 jne 0x11fa0453 */
  if (!C.zf) goto L_11fa0453;
  /* 11fa0448 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11fa044e mov dword ptr [0x11fc28d0], eax */
  w32((uint32_t)(0x11fc28d0), (EAX));
L_11fa0453:;
  /* 11fa0453 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa0457 jne 0x11fa0465 */
  if (!C.zf) goto L_11fa0465;
  /* 11fa0459 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11fa045f mov dword ptr [0x11fc28d4], ecx */
  w32((uint32_t)(0x11fc28d4), (ECX));
L_11fa0465:;
  /* 11fa0465 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0468 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa046b call dword ptr [edx + 0x11fc14f0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x11fc14f0))), 0x11fa0471u);
  /* 11fa0471 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa0473 je 0x11fa04ac */
  if (C.zf) goto L_11fa04ac;
  /* 11fa0475 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0478 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa047b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa047e mov dword ptr [eax + 0x11fc14ec], ecx */
  w32((uint32_t)(EAX + 0x11fc14ec), (ECX));
  /* 11fa0484 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa0486 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa0489 push edx */
  push32((uint32_t)(EDX));
  /* 11fa048a call 0x11f96e90 */
  push32(0x11fa048fu); f_11f96e90();
  /* 11fa048f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0492 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0495 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0498 mov dword ptr [eax*4 + 0x11fc28b8], ecx */
  w32((uint32_t)(EAX*4 + 0x11fc28b8), (ECX));
  /* 11fa049f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fa04a2 mov dword ptr [0x11fc28d0], edx */
  w32((uint32_t)(0x11fc28d0), (EDX));
  /* 11fa04a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa04aa jmp 0x11fa04cf */
  goto L_11fa04cf;
L_11fa04ac:;
  /* 11fa04ac cmp dword ptr [ebp - 0xc], 0x11fc13d8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x11fc13d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa04b3 je 0x11fa04c3 */
  if (C.zf) goto L_11fa04c3;
  /* 11fa04b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa04b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa04ba push eax */
  push32((uint32_t)(EAX));
  /* 11fa04bb call 0x11f96e90 */
  push32(0x11fa04c0u); f_11f96e90();
  /* 11fa04c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fa04c3:;
  /* 11fa04c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa04c6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa04c9 mov eax, dword ptr [ecx + 0x11fc14ec] */
  EAX = (r32((uint32_t)(ECX + 0x11fc14ec)));
L_11fa04cf:;
  /* 11fa04cf mov esp, ebp */
  ESP = (EBP);
  /* 11fa04d1 pop ebp */
  EBP = (pop32());
  /* 11fa04d2 ret  */
  ESPCHK(0x11fa0340u, _esp0);
  ESP += 4; return;
}

/* FUN_100104e0 @ 0x11fa04e0 (256 bytes, 72 insns) */
void f_11fa04e0(void) {
  FTRACE(0x11fa04e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa04e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa04e1 mov ebp, esp */
  EBP = (ESP);
  /* 11fa04e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa04e6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11fa04ed cmp dword ptr [0x11fc14ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc14ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa04f4 jne 0x11fa0514 */
  if (!C.zf) goto L_11fa0514;
  /* 11fa04f6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 11fa04fb push 0x11fbe218 */
  push32((uint32_t)(0x11fbe218u));
  /* 11fa0500 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa0502 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 11fa0507 call 0x11f96400 */
  push32(0x11fa050cu); f_11f96400();
  /* 11fa050c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa050f mov dword ptr [0x11fc14ec], eax */
  w32((uint32_t)(0x11fc14ec), (EAX));
L_11fa0514:;
  /* 11fa0514 mov eax, dword ptr [0x11fc14ec] */
  EAX = (r32((uint32_t)(0x11fc14ec)));
  /* 11fa0519 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11fa051c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11fa0523 jmp 0x11fa052e */
  goto L_11fa052e;
L_11fa0525:;
  /* 11fa0525 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0528 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa052b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fa052e:;
  /* 11fa052e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0531 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa0534 mov eax, dword ptr [edx + 0x11fc14ec] */
  EAX = (r32((uint32_t)(EDX + 0x11fc14ec)));
  /* 11fa053a push eax */
  push32((uint32_t)(EAX));
  /* 11fa053b push 0x11fbe224 */
  push32((uint32_t)(0x11fbe224u));
  /* 11fa0540 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0543 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa0546 mov edx, dword ptr [ecx + 0x11fc14e8] */
  EDX = (r32((uint32_t)(ECX + 0x11fc14e8)));
  /* 11fa054c push edx */
  push32((uint32_t)(EDX));
  /* 11fa054d push 3 */
  push32((uint32_t)(0x3u));
  /* 11fa054f mov eax, dword ptr [0x11fc14ec] */
  EAX = (r32((uint32_t)(0x11fc14ec)));
  /* 11fa0554 push eax */
  push32((uint32_t)(EAX));
  /* 11fa0555 call 0x11fa0780 */
  push32(0x11fa055au); f_11fa0780();
  /* 11fa055a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa055d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa0561 jge 0x11fa05a9 */
  if ((C.sf==C.of)) goto L_11fa05a9;
  /* 11fa0563 push 0x11fbe210 */
  push32((uint32_t)(0x11fbe210u));
  /* 11fa0568 mov ecx, dword ptr [0x11fc14ec] */
  ECX = (r32((uint32_t)(0x11fc14ec)));
  /* 11fa056e push ecx */
  push32((uint32_t)(ECX));
  /* 11fa056f call 0x11f993c0 */
  push32(0x11fa0574u); f_11f993c0();
  /* 11fa0574 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0577 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa057a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa057d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa0580 mov eax, dword ptr [edx + 0x11fc14ec] */
  EAX = (r32((uint32_t)(EDX + 0x11fc14ec)));
  /* 11fa0586 push eax */
  push32((uint32_t)(EAX));
  /* 11fa0587 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa058a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa058d mov edx, dword ptr [ecx + 0x11fc14ec] */
  EDX = (r32((uint32_t)(ECX + 0x11fc14ec)));
  /* 11fa0593 push edx */
  push32((uint32_t)(EDX));
  /* 11fa0594 call 0x11fa2090 */
  push32(0x11fa0599u); f_11fa2090();
  /* 11fa0599 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa059c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa059e je 0x11fa05a7 */
  if (C.zf) goto L_11fa05a7;
  /* 11fa05a0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11fa05a7:;
  /* 11fa05a7 jmp 0x11fa05d7 */
  goto L_11fa05d7;
L_11fa05a9:;
  /* 11fa05a9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa05ad jne 0x11fa05b6 */
  if (!C.zf) goto L_11fa05b6;
  /* 11fa05af mov eax, dword ptr [0x11fc14ec] */
  EAX = (r32((uint32_t)(0x11fc14ec)));
  /* 11fa05b4 jmp 0x11fa05dc */
  goto L_11fa05dc;
L_11fa05b6:;
  /* 11fa05b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa05b8 mov eax, dword ptr [0x11fc14ec] */
  EAX = (r32((uint32_t)(0x11fc14ec)));
  /* 11fa05bd push eax */
  push32((uint32_t)(EAX));
  /* 11fa05be call 0x11f96e90 */
  push32(0x11fa05c3u); f_11f96e90();
  /* 11fa05c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa05c6 mov dword ptr [0x11fc14ec], 0 */
  w32((uint32_t)(0x11fc14ec), (0x0u));
  /* 11fa05d0 mov eax, dword ptr [0x11fc1504] */
  EAX = (r32((uint32_t)(0x11fc1504)));
  /* 11fa05d5 jmp 0x11fa05dc */
  goto L_11fa05dc;
L_11fa05d7:;
  /* 11fa05d7 jmp 0x11fa0525 */
  goto L_11fa0525;
L_11fa05dc:;
  /* 11fa05dc mov esp, ebp */
  ESP = (EBP);
  /* 11fa05de pop ebp */
  EBP = (pop32());
  /* 11fa05df ret  */
  ESPCHK(0x11fa04e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100105e0 @ 0x11fa05e0 (388 bytes, 115 insns) */
void f_11fa05e0(void) {
  FTRACE(0x11fa05e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa05e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa05e1 mov ebp, esp */
  EBP = (ESP);
  /* 11fa05e3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa05e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa05ed jne 0x11fa05f6 */
  if (!C.zf) goto L_11fa05f6;
  /* 11fa05ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa05f1 jmp 0x11fa0760 */
  goto L_11fa0760;
L_11fa05f6:;
  /* 11fa05f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa05f9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fa05fc cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa05ff jne 0x11fa0650 */
  if (!C.zf) goto L_11fa0650;
  /* 11fa0601 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0604 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11fa0608 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa060a jne 0x11fa0650 */
  if (!C.zf) goto L_11fa0650;
  /* 11fa060c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa060f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 11fa0612 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa0615 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 11fa0619 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa061d je 0x11fa0639 */
  if (C.zf) goto L_11fa0639;
  /* 11fa061f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa0622 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 11fa0627 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa062a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 11fa0630 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa0633 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_11fa0639:;
  /* 11fa0639 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa063d je 0x11fa0648 */
  if (C.zf) goto L_11fa0648;
  /* 11fa063f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa0642 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11fa0648:;
  /* 11fa0648 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa064b jmp 0x11fa0760 */
  goto L_11fa0760;
L_11fa0650:;
  /* 11fa0650 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0653 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa0654 push 0x11fc1460 */
  push32((uint32_t)(0x11fc1460u));
  /* 11fa0659 call 0x11fa2090 */
  push32(0x11fa065eu); f_11fa2090();
  /* 11fa065e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0661 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa0663 je 0x11fa0718 */
  if (C.zf) goto L_11fa0718;
  /* 11fa0669 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa066c push edx */
  push32((uint32_t)(EDX));
  /* 11fa066d push 0x11fc13dc */
  push32((uint32_t)(0x11fc13dcu));
  /* 11fa0672 call 0x11fa2090 */
  push32(0x11fa0677u); f_11fa2090();
  /* 11fa0677 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa067a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa067c je 0x11fa0718 */
  if (C.zf) goto L_11fa0718;
  /* 11fa0682 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0685 push eax */
  push32((uint32_t)(EAX));
  /* 11fa0686 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 11fa068c push ecx */
  push32((uint32_t)(ECX));
  /* 11fa068d call 0x11fa07d0 */
  push32(0x11fa0692u); f_11fa07d0();
  /* 11fa0692 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0695 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa0697 je 0x11fa06a0 */
  if (C.zf) goto L_11fa06a0;
  /* 11fa0699 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa069b jmp 0x11fa0760 */
  goto L_11fa0760;
L_11fa06a0:;
  /* 11fa06a0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11fa06a6 push edx */
  push32((uint32_t)(EDX));
  /* 11fa06a7 push 0x11fc28e0 */
  push32((uint32_t)(0x11fc28e0u));
  /* 11fa06ac lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 11fa06b2 push eax */
  push32((uint32_t)(EAX));
  /* 11fa06b3 call 0x11fa21e0 */
  push32(0x11fa06b8u); f_11fa21e0();
  /* 11fa06b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa06bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa06bd jne 0x11fa06c6 */
  if (!C.zf) goto L_11fa06c6;
  /* 11fa06bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa06c1 jmp 0x11fa0760 */
  goto L_11fa0760;
L_11fa06c6:;
  /* 11fa06c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa06c8 mov cx, word ptr [0x11fc28e4] */
  CX = (r16((uint32_t)(0x11fc28e4)));
  /* 11fa06cf mov dword ptr [0x11fc28e8], ecx */
  w32((uint32_t)(0x11fc28e8), (ECX));
  /* 11fa06d5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11fa06db push edx */
  push32((uint32_t)(EDX));
  /* 11fa06dc push 0x11fc1460 */
  push32((uint32_t)(0x11fc1460u));
  /* 11fa06e1 call 0x11fa0930 */
  push32(0x11fa06e6u); f_11fa0930();
  /* 11fa06e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa06e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa06ec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fa06ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fa06f1 je 0x11fa0706 */
  if (C.zf) goto L_11fa0706;
  /* 11fa06f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa06f6 push edx */
  push32((uint32_t)(EDX));
  /* 11fa06f7 push 0x11fc13dc */
  push32((uint32_t)(0x11fc13dcu));
  /* 11fa06fc call 0x11f993b0 */
  push32(0x11fa0701u); f_11f993b0();
  /* 11fa0701 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0704 jmp 0x11fa0718 */
  goto L_11fa0718;
L_11fa0706:;
  /* 11fa0706 push 0x11fc1460 */
  push32((uint32_t)(0x11fc1460u));
  /* 11fa070b push 0x11fc13dc */
  push32((uint32_t)(0x11fc13dcu));
  /* 11fa0710 call 0x11f993b0 */
  push32(0x11fa0715u); f_11f993b0();
  /* 11fa0715 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fa0718:;
  /* 11fa0718 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa071c je 0x11fa0731 */
  if (C.zf) goto L_11fa0731;
  /* 11fa071e push 6 */
  push32((uint32_t)(0x6u));
  /* 11fa0720 push 0x11fc28e0 */
  push32((uint32_t)(0x11fc28e0u));
  /* 11fa0725 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa0728 push eax */
  push32((uint32_t)(EAX));
  /* 11fa0729 call 0x11f9cce0 */
  push32(0x11fa072eu); f_11f9cce0();
  /* 11fa072e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fa0731:;
  /* 11fa0731 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa0735 je 0x11fa074a */
  if (C.zf) goto L_11fa074a;
  /* 11fa0737 push 4 */
  push32((uint32_t)(0x4u));
  /* 11fa0739 push 0x11fc28e8 */
  push32((uint32_t)(0x11fc28e8u));
  /* 11fa073e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa0741 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa0742 call 0x11f9cce0 */
  push32(0x11fa0747u); f_11f9cce0();
  /* 11fa0747 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fa074a:;
  /* 11fa074a push 0x11fc1460 */
  push32((uint32_t)(0x11fc1460u));
  /* 11fa074f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa0752 push edx */
  push32((uint32_t)(EDX));
  /* 11fa0753 call 0x11f993b0 */
  push32(0x11fa0758u); f_11f993b0();
  /* 11fa0758 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa075b mov eax, 0x11fc1460 */
  EAX = (0x11fc1460u);
L_11fa0760:;
  /* 11fa0760 mov esp, ebp */
  ESP = (EBP);
  /* 11fa0762 pop ebp */
  EBP = (pop32());
  /* 11fa0763 ret  */
  ESPCHK(0x11fa05e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010770 @ 0x11fa0770 (7 bytes, 5 insns) */
void f_11fa0770(void) {
  FTRACE(0x11fa0770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa0770 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa0771 mov ebp, esp */
  EBP = (ESP);
  /* 11fa0773 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa0775 pop ebp */
  EBP = (pop32());
  /* 11fa0776 ret  */
  ESPCHK(0x11fa0770u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x11fa0780 (79 bytes, 28 insns) */
void f_11fa0780(void) {
  FTRACE(0x11fa0780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa0780 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa0781 mov ebp, esp */
  EBP = (ESP);
  /* 11fa0783 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa0786 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11fa0789 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fa078c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fa0793 jmp 0x11fa079e */
  goto L_11fa079e;
L_11fa0795:;
  /* 11fa0795 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa0798 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa079b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11fa079e:;
  /* 11fa079e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa07a1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa07a4 jge 0x11fa07c4 */
  if ((C.sf==C.of)) goto L_11fa07c4;
  /* 11fa07a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa07a9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa07ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fa07af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa07b2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11fa07b5 push edx */
  push32((uint32_t)(EDX));
  /* 11fa07b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa07b9 push eax */
  push32((uint32_t)(EAX));
  /* 11fa07ba call 0x11f993c0 */
  push32(0x11fa07bfu); f_11f993c0();
  /* 11fa07bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa07c2 jmp 0x11fa0795 */
  goto L_11fa0795;
L_11fa07c4:;
  /* 11fa07c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fa07cb mov esp, ebp */
  ESP = (EBP);
  /* 11fa07cd pop ebp */
  EBP = (pop32());
  /* 11fa07ce ret  */
  ESPCHK(0x11fa0780u, _esp0);
  ESP += 4; return;
}

/* FUN_100107d0 @ 0x11fa07d0 (349 bytes, 122 insns) */
void f_11fa07d0(void) {
  FTRACE(0x11fa07d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa07d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa07d1 mov ebp, esp */
  EBP = (ESP);
  /* 11fa07d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa07d6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 11fa07db push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa07dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa07e0 push eax */
  push32((uint32_t)(EAX));
  /* 11fa07e1 call 0x11f9a170 */
  push32(0x11fa07e6u); f_11f9a170();
  /* 11fa07e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa07e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa07ec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fa07ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fa07f1 jne 0x11fa07fa */
  if (!C.zf) goto L_11fa07fa;
  /* 11fa07f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa07f5 jmp 0x11fa0929 */
  goto L_11fa0929;
L_11fa07fa:;
  /* 11fa07fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa07fd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fa0800 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa0803 jne 0x11fa0830 */
  if (!C.zf) goto L_11fa0830;
  /* 11fa0805 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa0808 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11fa080c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa080e je 0x11fa0830 */
  if (C.zf) goto L_11fa0830;
  /* 11fa0810 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa0813 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0816 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa0817 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa081a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0820 push edx */
  push32((uint32_t)(EDX));
  /* 11fa0821 call 0x11f993b0 */
  push32(0x11fa0826u); f_11f993b0();
  /* 11fa0826 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0829 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa082b jmp 0x11fa0929 */
  goto L_11fa0929;
L_11fa0830:;
  /* 11fa0830 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fa0837 jmp 0x11fa0842 */
  goto L_11fa0842;
L_11fa0839:;
  /* 11fa0839 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa083c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa083f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fa0842:;
  /* 11fa0842 push 0x11fbe228 */
  push32((uint32_t)(0x11fbe228u));
  /* 11fa0847 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa084a push ecx */
  push32((uint32_t)(ECX));
  /* 11fa084b call 0x11fa2120 */
  push32(0x11fa0850u); f_11fa2120();
  /* 11fa0850 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0853 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fa0856 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa085a jne 0x11fa0864 */
  if (!C.zf) goto L_11fa0864;
  /* 11fa085c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fa085f jmp 0x11fa0929 */
  goto L_11fa0929;
L_11fa0864:;
  /* 11fa0864 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa0867 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa086a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fa086c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11fa086f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa0873 jne 0x11fa089a */
  if (!C.zf) goto L_11fa089a;
  /* 11fa0875 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa0879 jge 0x11fa089a */
  if ((C.sf==C.of)) goto L_11fa089a;
  /* 11fa087b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11fa087f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa0882 je 0x11fa089a */
  if (C.zf) goto L_11fa089a;
  /* 11fa0884 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa0887 push edx */
  push32((uint32_t)(EDX));
  /* 11fa0888 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa088b push eax */
  push32((uint32_t)(EAX));
  /* 11fa088c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa088f push ecx */
  push32((uint32_t)(ECX));
  /* 11fa0890 call 0x11f99c20 */
  push32(0x11fa0895u); f_11f99c20();
  /* 11fa0895 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0898 jmp 0x11fa0900 */
  goto L_11fa0900;
L_11fa089a:;
  /* 11fa089a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa089e jne 0x11fa08c8 */
  if (!C.zf) goto L_11fa08c8;
  /* 11fa08a0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa08a4 jge 0x11fa08c8 */
  if ((C.sf==C.of)) goto L_11fa08c8;
  /* 11fa08a6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11fa08aa cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa08ad je 0x11fa08c8 */
  if (C.zf) goto L_11fa08c8;
  /* 11fa08af mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa08b2 push eax */
  push32((uint32_t)(EAX));
  /* 11fa08b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa08b6 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa08b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa08ba add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa08bd push edx */
  push32((uint32_t)(EDX));
  /* 11fa08be call 0x11f99c20 */
  push32(0x11fa08c3u); f_11f99c20();
  /* 11fa08c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa08c6 jmp 0x11fa0900 */
  goto L_11fa0900;
L_11fa08c8:;
  /* 11fa08c8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa08cc jne 0x11fa08fb */
  if (!C.zf) goto L_11fa08fb;
  /* 11fa08ce movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11fa08d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa08d4 je 0x11fa08df */
  if (C.zf) goto L_11fa08df;
  /* 11fa08d6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11fa08da cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa08dd jne 0x11fa08fb */
  if (!C.zf) goto L_11fa08fb;
L_11fa08df:;
  /* 11fa08df mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa08e2 push edx */
  push32((uint32_t)(EDX));
  /* 11fa08e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa08e6 push eax */
  push32((uint32_t)(EAX));
  /* 11fa08e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa08ea add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa08f0 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa08f1 call 0x11f99c20 */
  push32(0x11fa08f6u); f_11f99c20();
  /* 11fa08f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa08f9 jmp 0x11fa0900 */
  goto L_11fa0900;
L_11fa08fb:;
  /* 11fa08fb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fa08fe jmp 0x11fa0929 */
  goto L_11fa0929;
L_11fa0900:;
  /* 11fa0900 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11fa0904 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa0907 jne 0x11fa090b */
  if (!C.zf) goto L_11fa090b;
  /* 11fa0909 jmp 0x11fa0927 */
  goto L_11fa0927;
L_11fa090b:;
  /* 11fa090b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11fa090f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa0911 jne 0x11fa0915 */
  if (!C.zf) goto L_11fa0915;
  /* 11fa0913 jmp 0x11fa0927 */
  goto L_11fa0927;
L_11fa0915:;
  /* 11fa0915 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa0918 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa091b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 11fa091f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11fa0922 jmp 0x11fa0839 */
  goto L_11fa0839;
L_11fa0927:;
  /* 11fa0927 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fa0929:;
  /* 11fa0929 mov esp, ebp */
  ESP = (EBP);
  /* 11fa092b pop ebp */
  EBP = (pop32());
  /* 11fa092c ret  */
  ESPCHK(0x11fa07d0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x11fa0930 (101 bytes, 36 insns) */
void f_11fa0930(void) {
  FTRACE(0x11fa0930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa0930 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa0931 mov ebp, esp */
  EBP = (ESP);
  /* 11fa0933 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa0936 push eax */
  push32((uint32_t)(EAX));
  /* 11fa0937 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa093a push ecx */
  push32((uint32_t)(ECX));
  /* 11fa093b call 0x11f993b0 */
  push32(0x11fa0940u); f_11f993b0();
  /* 11fa0940 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0943 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa0946 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 11fa094a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa094c je 0x11fa0968 */
  if (C.zf) goto L_11fa0968;
  /* 11fa094e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa0951 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0954 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa0955 push 0x11fbe230 */
  push32((uint32_t)(0x11fbe230u));
  /* 11fa095a push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa095c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa095f push edx */
  push32((uint32_t)(EDX));
  /* 11fa0960 call 0x11fa0780 */
  push32(0x11fa0965u); f_11fa0780();
  /* 11fa0965 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fa0968:;
  /* 11fa0968 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa096b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 11fa0972 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fa0974 je 0x11fa0993 */
  if (C.zf) goto L_11fa0993;
  /* 11fa0976 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa0979 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa097f push edx */
  push32((uint32_t)(EDX));
  /* 11fa0980 push 0x11fbe22c */
  push32((uint32_t)(0x11fbe22cu));
  /* 11fa0985 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa0987 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa098a push eax */
  push32((uint32_t)(EAX));
  /* 11fa098b call 0x11fa0780 */
  push32(0x11fa0990u); f_11fa0780();
  /* 11fa0990 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fa0993:;
  /* 11fa0993 pop ebp */
  EBP = (pop32());
  /* 11fa0994 ret  */
  ESPCHK(0x11fa0930u, _esp0);
  ESP += 4; return;
}

/* FUN_100109a0 @ 0x11fa09a0 (130 bytes, 50 insns) */
void f_11fa09a0(void) {
  FTRACE(0x11fa09a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa09a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa09a1 mov ebp, esp */
  EBP = (ESP);
  /* 11fa09a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa09a4 push ebx */
  push32((uint32_t)(EBX));
  /* 11fa09a5 push esi */
  push32((uint32_t)(ESI));
  /* 11fa09a6 push edi */
  push32((uint32_t)(EDI));
  /* 11fa09a7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11fa09ae:;
  /* 11fa09ae cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa09b2 jne 0x11fa09d2 */
  if (!C.zf) goto L_11fa09d2;
  /* 11fa09b4 push 0x11fbe240 */
  push32((uint32_t)(0x11fbe240u));
  /* 11fa09b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa09bb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11fa09bd push 0x11fbe234 */
  push32((uint32_t)(0x11fbe234u));
  /* 11fa09c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa09c4 call 0x11f954c0 */
  push32(0x11fa09c9u); f_11f954c0();
  /* 11fa09c9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa09cc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa09cf jne 0x11fa09d2 */
  if (!C.zf) goto L_11fa09d2;
  /* 11fa09d1 int3  */
  x86_unimpl("int3 @ 0x11fa09d1");
L_11fa09d2:;
  /* 11fa09d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa09d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa09d6 jne 0x11fa09ae */
  if (!C.zf) goto L_11fa09ae;
  /* 11fa09d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa09db mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11fa09de and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11fa09e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fa09e3 je 0x11fa09f1 */
  if (C.zf) goto L_11fa09f1;
  /* 11fa09e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa09e8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11fa09ef jmp 0x11fa0a18 */
  goto L_11fa0a18;
L_11fa09f1:;
  /* 11fa09f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa09f4 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa09f5 call 0x11f9f210 */
  push32(0x11fa09fau); f_11f9f210();
  /* 11fa09fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa09fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0a00 push edx */
  push32((uint32_t)(EDX));
  /* 11fa0a01 call 0x11fa0a30 */
  push32(0x11fa0a06u); f_11fa0a30();
  /* 11fa0a06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0a09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fa0a0c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0a0f push eax */
  push32((uint32_t)(EAX));
  /* 11fa0a10 call 0x11f9f280 */
  push32(0x11fa0a15u); f_11f9f280();
  /* 11fa0a15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fa0a18:;
  /* 11fa0a18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0a1b pop edi */
  EDI = (pop32());
  /* 11fa0a1c pop esi */
  ESI = (pop32());
  /* 11fa0a1d pop ebx */
  EBX = (pop32());
  /* 11fa0a1e mov esp, ebp */
  ESP = (EBP);
  /* 11fa0a20 pop ebp */
  EBP = (pop32());
  /* 11fa0a21 ret  */
  ESPCHK(0x11fa09a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a30 @ 0x11fa0a30 (190 bytes, 67 insns) */
void f_11fa0a30(void) {
  FTRACE(0x11fa0a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa0a30 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa0a31 mov ebp, esp */
  EBP = (ESP);
  /* 11fa0a33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa0a36 push ebx */
  push32((uint32_t)(EBX));
  /* 11fa0a37 push esi */
  push32((uint32_t)(ESI));
  /* 11fa0a38 push edi */
  push32((uint32_t)(EDI));
  /* 11fa0a39 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11fa0a40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0a43 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11fa0a46:;
  /* 11fa0a46 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa0a4a jne 0x11fa0a6a */
  if (!C.zf) goto L_11fa0a6a;
  /* 11fa0a4c push 0x11fbe0e0 */
  push32((uint32_t)(0x11fbe0e0u));
  /* 11fa0a51 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa0a53 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 11fa0a55 push 0x11fbe234 */
  push32((uint32_t)(0x11fbe234u));
  /* 11fa0a5a push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa0a5c call 0x11f954c0 */
  push32(0x11fa0a61u); f_11f954c0();
  /* 11fa0a61 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0a64 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa0a67 jne 0x11fa0a6a */
  if (!C.zf) goto L_11fa0a6a;
  /* 11fa0a69 int3  */
  x86_unimpl("int3 @ 0x11fa0a69");
L_11fa0a6a:;
  /* 11fa0a6a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa0a6c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fa0a6e jne 0x11fa0a46 */
  if (!C.zf) goto L_11fa0a46;
  /* 11fa0a70 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa0a73 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11fa0a76 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11fa0a7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa0a7d je 0x11fa0ada */
  if (C.zf) goto L_11fa0ada;
  /* 11fa0a7f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa0a82 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa0a83 call 0x11f9fd30 */
  push32(0x11fa0a88u); f_11f9fd30();
  /* 11fa0a88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0a8b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fa0a8e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa0a91 push edx */
  push32((uint32_t)(EDX));
  /* 11fa0a92 call 0x11fa30b0 */
  push32(0x11fa0a97u); f_11fa30b0();
  /* 11fa0a97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0a9a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa0a9d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11fa0aa0 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa0aa1 call 0x11fa2f80 */
  push32(0x11fa0aa6u); f_11fa2f80();
  /* 11fa0aa6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0aa9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa0aab jge 0x11fa0ab6 */
  if ((C.sf==C.of)) goto L_11fa0ab6;
  /* 11fa0aad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11fa0ab4 jmp 0x11fa0ada */
  goto L_11fa0ada;
L_11fa0ab6:;
  /* 11fa0ab6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa0ab9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa0abd je 0x11fa0ada */
  if (C.zf) goto L_11fa0ada;
  /* 11fa0abf push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa0ac1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa0ac4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11fa0ac7 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa0ac8 call 0x11f96e90 */
  push32(0x11fa0acdu); f_11f96e90();
  /* 11fa0acd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0ad0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa0ad3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_11fa0ada:;
  /* 11fa0ada mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa0add mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11fa0ae4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0ae7 pop edi */
  EDI = (pop32());
  /* 11fa0ae8 pop esi */
  ESI = (pop32());
  /* 11fa0ae9 pop ebx */
  EBX = (pop32());
  /* 11fa0aea mov esp, ebp */
  ESP = (EBP);
  /* 11fa0aec pop ebp */
  EBP = (pop32());
  /* 11fa0aed ret  */
  ESPCHK(0x11fa0a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10010af0 @ 0x11fa0af0 (210 bytes, 63 insns) */
void f_11fa0af0(void) {
  FTRACE(0x11fa0af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa0af0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa0af1 mov ebp, esp */
  EBP = (ESP);
  /* 11fa0af3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa0af4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0af7 cmp eax, dword ptr [0x11fc41dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11fc41dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa0afd jae 0x11fa0b21 */
  if (!C.cf) goto L_11fa0b21;
  /* 11fa0aff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0b02 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11fa0b05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0b08 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11fa0b0b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa0b0e mov eax, dword ptr [ecx*4 + 0x11fc40a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11fc40a0)));
  /* 11fa0b15 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11fa0b1a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11fa0b1d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fa0b1f jne 0x11fa0b34 */
  if (!C.zf) goto L_11fa0b34;
L_11fa0b21:;
  /* 11fa0b21 call 0x11f9e2d0 */
  push32(0x11fa0b26u); f_11f9e2d0();
  /* 11fa0b26 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11fa0b2c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fa0b2f jmp 0x11fa0bbe */
  goto L_11fa0bbe;
L_11fa0b34:;
  /* 11fa0b34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0b37 push edx */
  push32((uint32_t)(EDX));
  /* 11fa0b38 call 0x11f9faf0 */
  push32(0x11fa0b3du); f_11f9faf0();
  /* 11fa0b3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0b40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0b43 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11fa0b46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0b49 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11fa0b4c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa0b4f mov edx, dword ptr [eax*4 + 0x11fc40a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11fc40a0)));
  /* 11fa0b56 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11fa0b5b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11fa0b5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa0b60 je 0x11fa0b9d */
  if (C.zf) goto L_11fa0b9d;
  /* 11fa0b62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0b65 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa0b66 call 0x11f9f970 */
  push32(0x11fa0b6bu); f_11f9f970();
  /* 11fa0b6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0b6e push eax */
  push32((uint32_t)(EAX));
  /* 11fa0b6f call dword ptr [0x11fc52f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc52f8))), 0x11fa0b75u);
  /* 11fa0b75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa0b77 jne 0x11fa0b84 */
  if (!C.zf) goto L_11fa0b84;
  /* 11fa0b79 call dword ptr [0x11fc53ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc53ac))), 0x11fa0b7fu);
  /* 11fa0b7f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fa0b82 jmp 0x11fa0b8b */
  goto L_11fa0b8b;
L_11fa0b84:;
  /* 11fa0b84 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11fa0b8b:;
  /* 11fa0b8b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa0b8f jne 0x11fa0b93 */
  if (!C.zf) goto L_11fa0b93;
  /* 11fa0b91 jmp 0x11fa0baf */
  goto L_11fa0baf;
L_11fa0b93:;
  /* 11fa0b93 call 0x11f9e2e0 */
  push32(0x11fa0b98u); f_11f9e2e0();
  /* 11fa0b98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0b9b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11fa0b9d:;
  /* 11fa0b9d call 0x11f9e2d0 */
  push32(0x11fa0ba2u); f_11f9e2d0();
  /* 11fa0ba2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11fa0ba8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11fa0baf:;
  /* 11fa0baf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0bb2 push eax */
  push32((uint32_t)(EAX));
  /* 11fa0bb3 call 0x11f9fb80 */
  push32(0x11fa0bb8u); f_11f9fb80();
  /* 11fa0bb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0bbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11fa0bbe:;
  /* 11fa0bbe mov esp, ebp */
  ESP = (EBP);
  /* 11fa0bc0 pop ebp */
  EBP = (pop32());
  /* 11fa0bc1 ret  */
  ESPCHK(0x11fa0af0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x11fa0bd0 (219 bytes, 64 insns) */
void f_11fa0bd0(void) {
  FTRACE(0x11fa0bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa0bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa0bd1 mov ebp, esp */
  EBP = (ESP);
  /* 11fa0bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa0bd4 cmp dword ptr [0x11fc28cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc28cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa0bdb je 0x11fa0c71 */
  if (C.zf) goto L_11fa0c71;
  /* 11fa0be1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11fa0be3 push 0x11fbe250 */
  push32((uint32_t)(0x11fbe250u));
  /* 11fa0be8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa0bea push 0xac */
  push32((uint32_t)(0xacu));
  /* 11fa0bef push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa0bf1 call 0x11f96810 */
  push32(0x11fa0bf6u); f_11f96810();
  /* 11fa0bf6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0bf9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fa0bfc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa0c00 jne 0x11fa0c0c */
  if (!C.zf) goto L_11fa0c0c;
  /* 11fa0c02 mov eax, 1 */
  EAX = (0x1u);
  /* 11fa0c07 jmp 0x11fa0ca7 */
  goto L_11fa0ca7;
L_11fa0c0c:;
  /* 11fa0c0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0c0f push eax */
  push32((uint32_t)(EAX));
  /* 11fa0c10 call 0x11fa0cb0 */
  push32(0x11fa0c15u); f_11fa0cb0();
  /* 11fa0c15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0c18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa0c1a je 0x11fa0c3d */
  if (C.zf) goto L_11fa0c3d;
  /* 11fa0c1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0c1f push ecx */
  push32((uint32_t)(ECX));
  /* 11fa0c20 call 0x11fa1240 */
  push32(0x11fa0c25u); f_11fa1240();
  /* 11fa0c25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0c28 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa0c2a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0c2d push edx */
  push32((uint32_t)(EDX));
  /* 11fa0c2e call 0x11f96e90 */
  push32(0x11fa0c33u); f_11f96e90();
  /* 11fa0c33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0c36 mov eax, 1 */
  EAX = (0x1u);
  /* 11fa0c3b jmp 0x11fa0ca7 */
  goto L_11fa0ca7;
L_11fa0c3d:;
  /* 11fa0c3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0c40 mov dword ptr [0x11fc1ca8], eax */
  w32((uint32_t)(0x11fc1ca8), (EAX));
  /* 11fa0c45 mov ecx, dword ptr [0x11fc28ec] */
  ECX = (r32((uint32_t)(0x11fc28ec)));
  /* 11fa0c4b push ecx */
  push32((uint32_t)(ECX));
  /* 11fa0c4c call 0x11fa1240 */
  push32(0x11fa0c51u); f_11fa1240();
  /* 11fa0c51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0c54 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa0c56 mov edx, dword ptr [0x11fc28ec] */
  EDX = (r32((uint32_t)(0x11fc28ec)));
  /* 11fa0c5c push edx */
  push32((uint32_t)(EDX));
  /* 11fa0c5d call 0x11f96e90 */
  push32(0x11fa0c62u); f_11f96e90();
  /* 11fa0c62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0c65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0c68 mov dword ptr [0x11fc28ec], eax */
  w32((uint32_t)(0x11fc28ec), (EAX));
  /* 11fa0c6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa0c6f jmp 0x11fa0ca7 */
  goto L_11fa0ca7;
L_11fa0c71:;
  /* 11fa0c71 mov dword ptr [0x11fc1ca8], 0x11fc1cb0 */
  w32((uint32_t)(0x11fc1ca8), (0x11fc1cb0u));
  /* 11fa0c7b mov ecx, dword ptr [0x11fc28ec] */
  ECX = (r32((uint32_t)(0x11fc28ec)));
  /* 11fa0c81 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa0c82 call 0x11fa1240 */
  push32(0x11fa0c87u); f_11fa1240();
  /* 11fa0c87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0c8a push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa0c8c mov edx, dword ptr [0x11fc28ec] */
  EDX = (r32((uint32_t)(0x11fc28ec)));
  /* 11fa0c92 push edx */
  push32((uint32_t)(EDX));
  /* 11fa0c93 call 0x11f96e90 */
  push32(0x11fa0c98u); f_11f96e90();
  /* 11fa0c98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0c9b mov dword ptr [0x11fc28ec], 0 */
  w32((uint32_t)(0x11fc28ec), (0x0u));
  /* 11fa0ca5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fa0ca7:;
  /* 11fa0ca7 mov esp, ebp */
  ESP = (EBP);
  /* 11fa0ca9 pop ebp */
  EBP = (pop32());
  /* 11fa0caa ret  */
  ESPCHK(0x11fa0bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010cb0 @ 0x11fa0cb0 (1423 bytes, 533 insns) */
void f_11fa0cb0(void) {
  FTRACE(0x11fa0cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa0cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa0cb1 mov ebp, esp */
  EBP = (ESP);
  /* 11fa0cb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa0cb6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11fa0cbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa0cbf mov ax, word ptr [0x11fc2926] */
  AX = (r16((uint32_t)(0x11fc2926)));
  /* 11fa0cc5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fa0cc8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa0cca mov cx, word ptr [0x11fc2928] */
  CX = (r16((uint32_t)(0x11fc2928)));
  /* 11fa0cd1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fa0cd4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa0cd8 jne 0x11fa0ce2 */
  if (!C.zf) goto L_11fa0ce2;
  /* 11fa0cda or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fa0cdd jmp 0x11fa123b */
  goto L_11fa123b;
L_11fa0ce2:;
  /* 11fa0ce2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0ce5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0ce8 push edx */
  push32((uint32_t)(EDX));
  /* 11fa0ce9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 11fa0ceb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0cee push eax */
  push32((uint32_t)(EAX));
  /* 11fa0cef push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa0cf1 call 0x11fa45c0 */
  push32(0x11fa0cf6u); f_11fa45c0();
  /* 11fa0cf6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0cf9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa0cfc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa0cfe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa0d01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0d04 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0d07 push edx */
  push32((uint32_t)(EDX));
  /* 11fa0d08 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11fa0d0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0d0d push eax */
  push32((uint32_t)(EAX));
  /* 11fa0d0e push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa0d10 call 0x11fa45c0 */
  push32(0x11fa0d15u); f_11fa45c0();
  /* 11fa0d15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0d18 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa0d1b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa0d1d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa0d20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0d23 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0d26 push edx */
  push32((uint32_t)(EDX));
  /* 11fa0d27 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11fa0d29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0d2c push eax */
  push32((uint32_t)(EAX));
  /* 11fa0d2d push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa0d2f call 0x11fa45c0 */
  push32(0x11fa0d34u); f_11fa45c0();
  /* 11fa0d34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0d37 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa0d3a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa0d3c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa0d3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0d42 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0d45 push edx */
  push32((uint32_t)(EDX));
  /* 11fa0d46 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11fa0d48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0d4b push eax */
  push32((uint32_t)(EAX));
  /* 11fa0d4c push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa0d4e call 0x11fa45c0 */
  push32(0x11fa0d53u); f_11fa45c0();
  /* 11fa0d53 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0d56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa0d59 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa0d5b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa0d5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0d61 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0d64 push edx */
  push32((uint32_t)(EDX));
  /* 11fa0d65 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 11fa0d67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0d6a push eax */
  push32((uint32_t)(EAX));
  /* 11fa0d6b push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa0d6d call 0x11fa45c0 */
  push32(0x11fa0d72u); f_11fa45c0();
  /* 11fa0d72 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0d75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa0d78 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa0d7a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa0d7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0d80 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0d83 push edx */
  push32((uint32_t)(EDX));
  /* 11fa0d84 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 11fa0d86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0d89 push eax */
  push32((uint32_t)(EAX));
  /* 11fa0d8a push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa0d8c call 0x11fa45c0 */
  push32(0x11fa0d91u); f_11fa45c0();
  /* 11fa0d91 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0d94 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa0d97 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa0d99 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa0d9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0d9f push edx */
  push32((uint32_t)(EDX));
  /* 11fa0da0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11fa0da2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0da5 push eax */
  push32((uint32_t)(EAX));
  /* 11fa0da6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa0da8 call 0x11fa45c0 */
  push32(0x11fa0dadu); f_11fa45c0();
  /* 11fa0dad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0db0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa0db3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa0db5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa0db8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0dbb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0dbe push edx */
  push32((uint32_t)(EDX));
  /* 11fa0dbf push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11fa0dc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0dc4 push eax */
  push32((uint32_t)(EAX));
  /* 11fa0dc5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa0dc7 call 0x11fa45c0 */
  push32(0x11fa0dccu); f_11fa45c0();
  /* 11fa0dcc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0dcf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa0dd2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa0dd4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa0dd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0dda add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0ddd push edx */
  push32((uint32_t)(EDX));
  /* 11fa0dde push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 11fa0de0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0de3 push eax */
  push32((uint32_t)(EAX));
  /* 11fa0de4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa0de6 call 0x11fa45c0 */
  push32(0x11fa0debu); f_11fa45c0();
  /* 11fa0deb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0dee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa0df1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa0df3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa0df6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0df9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0dfc push edx */
  push32((uint32_t)(EDX));
  /* 11fa0dfd push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11fa0dff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0e02 push eax */
  push32((uint32_t)(EAX));
  /* 11fa0e03 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa0e05 call 0x11fa45c0 */
  push32(0x11fa0e0au); f_11fa45c0();
  /* 11fa0e0a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0e0d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa0e10 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa0e12 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa0e15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0e18 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0e1b push edx */
  push32((uint32_t)(EDX));
  /* 11fa0e1c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 11fa0e1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0e21 push eax */
  push32((uint32_t)(EAX));
  /* 11fa0e22 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa0e24 call 0x11fa45c0 */
  push32(0x11fa0e29u); f_11fa45c0();
  /* 11fa0e29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0e2c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa0e2f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa0e31 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa0e34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0e37 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0e3a push edx */
  push32((uint32_t)(EDX));
  /* 11fa0e3b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11fa0e3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0e40 push eax */
  push32((uint32_t)(EAX));
  /* 11fa0e41 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa0e43 call 0x11fa45c0 */
  push32(0x11fa0e48u); f_11fa45c0();
  /* 11fa0e48 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0e4b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa0e4e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa0e50 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa0e53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0e56 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0e59 push edx */
  push32((uint32_t)(EDX));
  /* 11fa0e5a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 11fa0e5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0e5f push eax */
  push32((uint32_t)(EAX));
  /* 11fa0e60 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa0e62 call 0x11fa45c0 */
  push32(0x11fa0e67u); f_11fa45c0();
  /* 11fa0e67 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0e6a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa0e6d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa0e6f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa0e72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0e75 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0e78 push edx */
  push32((uint32_t)(EDX));
  /* 11fa0e79 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11fa0e7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0e7e push eax */
  push32((uint32_t)(EAX));
  /* 11fa0e7f push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa0e81 call 0x11fa45c0 */
  push32(0x11fa0e86u); f_11fa45c0();
  /* 11fa0e86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0e89 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa0e8c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa0e8e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa0e91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0e94 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0e97 push edx */
  push32((uint32_t)(EDX));
  /* 11fa0e98 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11fa0e9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0e9d push eax */
  push32((uint32_t)(EAX));
  /* 11fa0e9e push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa0ea0 call 0x11fa45c0 */
  push32(0x11fa0ea5u); f_11fa45c0();
  /* 11fa0ea5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0ea8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa0eab or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa0ead mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa0eb0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0eb3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0eb6 push edx */
  push32((uint32_t)(EDX));
  /* 11fa0eb7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11fa0eb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0ebc push eax */
  push32((uint32_t)(EAX));
  /* 11fa0ebd push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa0ebf call 0x11fa45c0 */
  push32(0x11fa0ec4u); f_11fa45c0();
  /* 11fa0ec4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0ec7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa0eca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa0ecc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa0ecf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0ed2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0ed5 push edx */
  push32((uint32_t)(EDX));
  /* 11fa0ed6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11fa0ed8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0edb push eax */
  push32((uint32_t)(EAX));
  /* 11fa0edc push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa0ede call 0x11fa45c0 */
  push32(0x11fa0ee3u); f_11fa45c0();
  /* 11fa0ee3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0ee6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa0ee9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa0eeb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa0eee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0ef1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0ef4 push edx */
  push32((uint32_t)(EDX));
  /* 11fa0ef5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11fa0ef7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0efa push eax */
  push32((uint32_t)(EAX));
  /* 11fa0efb push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa0efd call 0x11fa45c0 */
  push32(0x11fa0f02u); f_11fa45c0();
  /* 11fa0f02 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0f05 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa0f08 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa0f0a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa0f0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0f10 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0f13 push edx */
  push32((uint32_t)(EDX));
  /* 11fa0f14 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11fa0f16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0f19 push eax */
  push32((uint32_t)(EAX));
  /* 11fa0f1a push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa0f1c call 0x11fa45c0 */
  push32(0x11fa0f21u); f_11fa45c0();
  /* 11fa0f21 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0f24 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa0f27 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa0f29 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa0f2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0f2f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0f32 push edx */
  push32((uint32_t)(EDX));
  /* 11fa0f33 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 11fa0f35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0f38 push eax */
  push32((uint32_t)(EAX));
  /* 11fa0f39 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa0f3b call 0x11fa45c0 */
  push32(0x11fa0f40u); f_11fa45c0();
  /* 11fa0f40 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0f43 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa0f46 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa0f48 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa0f4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0f4e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0f51 push edx */
  push32((uint32_t)(EDX));
  /* 11fa0f52 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11fa0f54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0f57 push eax */
  push32((uint32_t)(EAX));
  /* 11fa0f58 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa0f5a call 0x11fa45c0 */
  push32(0x11fa0f5fu); f_11fa45c0();
  /* 11fa0f5f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0f62 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa0f65 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa0f67 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa0f6a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0f6d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0f70 push edx */
  push32((uint32_t)(EDX));
  /* 11fa0f71 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11fa0f73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0f76 push eax */
  push32((uint32_t)(EAX));
  /* 11fa0f77 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa0f79 call 0x11fa45c0 */
  push32(0x11fa0f7eu); f_11fa45c0();
  /* 11fa0f7e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0f81 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa0f84 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa0f86 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa0f89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0f8c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0f8f push edx */
  push32((uint32_t)(EDX));
  /* 11fa0f90 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11fa0f92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0f95 push eax */
  push32((uint32_t)(EAX));
  /* 11fa0f96 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa0f98 call 0x11fa45c0 */
  push32(0x11fa0f9du); f_11fa45c0();
  /* 11fa0f9d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0fa0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa0fa3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa0fa5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa0fa8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0fab add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0fae push edx */
  push32((uint32_t)(EDX));
  /* 11fa0faf push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11fa0fb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0fb4 push eax */
  push32((uint32_t)(EAX));
  /* 11fa0fb5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa0fb7 call 0x11fa45c0 */
  push32(0x11fa0fbcu); f_11fa45c0();
  /* 11fa0fbc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0fbf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa0fc2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa0fc4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa0fc7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0fca add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0fcd push edx */
  push32((uint32_t)(EDX));
  /* 11fa0fce push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11fa0fd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0fd3 push eax */
  push32((uint32_t)(EAX));
  /* 11fa0fd4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa0fd6 call 0x11fa45c0 */
  push32(0x11fa0fdbu); f_11fa45c0();
  /* 11fa0fdb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0fde mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa0fe1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa0fe3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa0fe6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa0fe9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0fec push edx */
  push32((uint32_t)(EDX));
  /* 11fa0fed push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 11fa0fef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa0ff2 push eax */
  push32((uint32_t)(EAX));
  /* 11fa0ff3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa0ff5 call 0x11fa45c0 */
  push32(0x11fa0ffau); f_11fa45c0();
  /* 11fa0ffa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa0ffd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa1000 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa1002 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa1005 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1008 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa100b push edx */
  push32((uint32_t)(EDX));
  /* 11fa100c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 11fa100e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa1011 push eax */
  push32((uint32_t)(EAX));
  /* 11fa1012 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa1014 call 0x11fa45c0 */
  push32(0x11fa1019u); f_11fa45c0();
  /* 11fa1019 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa101c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa101f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa1021 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa1024 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1027 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa102a push edx */
  push32((uint32_t)(EDX));
  /* 11fa102b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 11fa102d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa1030 push eax */
  push32((uint32_t)(EAX));
  /* 11fa1031 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa1033 call 0x11fa45c0 */
  push32(0x11fa1038u); f_11fa45c0();
  /* 11fa1038 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa103b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa103e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa1040 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa1043 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1046 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1049 push edx */
  push32((uint32_t)(EDX));
  /* 11fa104a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11fa104c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa104f push eax */
  push32((uint32_t)(EAX));
  /* 11fa1050 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa1052 call 0x11fa45c0 */
  push32(0x11fa1057u); f_11fa45c0();
  /* 11fa1057 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa105a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa105d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa105f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa1062 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1065 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1068 push edx */
  push32((uint32_t)(EDX));
  /* 11fa1069 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11fa106b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa106e push eax */
  push32((uint32_t)(EAX));
  /* 11fa106f push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa1071 call 0x11fa45c0 */
  push32(0x11fa1076u); f_11fa45c0();
  /* 11fa1076 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1079 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa107c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa107e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa1081 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1084 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1087 push edx */
  push32((uint32_t)(EDX));
  /* 11fa1088 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11fa108a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa108d push eax */
  push32((uint32_t)(EAX));
  /* 11fa108e push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa1090 call 0x11fa45c0 */
  push32(0x11fa1095u); f_11fa45c0();
  /* 11fa1095 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1098 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa109b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa109d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa10a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa10a3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa10a6 push edx */
  push32((uint32_t)(EDX));
  /* 11fa10a7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11fa10a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa10ac push eax */
  push32((uint32_t)(EAX));
  /* 11fa10ad push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa10af call 0x11fa45c0 */
  push32(0x11fa10b4u); f_11fa45c0();
  /* 11fa10b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa10b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa10ba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa10bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa10bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa10c2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa10c8 push edx */
  push32((uint32_t)(EDX));
  /* 11fa10c9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 11fa10cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa10ce push eax */
  push32((uint32_t)(EAX));
  /* 11fa10cf push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa10d1 call 0x11fa45c0 */
  push32(0x11fa10d6u); f_11fa45c0();
  /* 11fa10d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa10d9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa10dc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa10de mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa10e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa10e4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa10ea push edx */
  push32((uint32_t)(EDX));
  /* 11fa10eb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11fa10ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa10f0 push eax */
  push32((uint32_t)(EAX));
  /* 11fa10f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa10f3 call 0x11fa45c0 */
  push32(0x11fa10f8u); f_11fa45c0();
  /* 11fa10f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa10fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa10fe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa1100 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa1103 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1106 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa110c push edx */
  push32((uint32_t)(EDX));
  /* 11fa110d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11fa110f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa1112 push eax */
  push32((uint32_t)(EAX));
  /* 11fa1113 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa1115 call 0x11fa45c0 */
  push32(0x11fa111au); f_11fa45c0();
  /* 11fa111a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa111d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa1120 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa1122 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa1125 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1128 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa112e push edx */
  push32((uint32_t)(EDX));
  /* 11fa112f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11fa1131 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa1134 push eax */
  push32((uint32_t)(EAX));
  /* 11fa1135 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa1137 call 0x11fa45c0 */
  push32(0x11fa113cu); f_11fa45c0();
  /* 11fa113c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa113f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa1142 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa1144 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa1147 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa114a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1150 push edx */
  push32((uint32_t)(EDX));
  /* 11fa1151 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11fa1153 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa1156 push eax */
  push32((uint32_t)(EAX));
  /* 11fa1157 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa1159 call 0x11fa45c0 */
  push32(0x11fa115eu); f_11fa45c0();
  /* 11fa115e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1161 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa1164 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa1166 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa1169 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa116c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1172 push edx */
  push32((uint32_t)(EDX));
  /* 11fa1173 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11fa1175 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa1178 push eax */
  push32((uint32_t)(EAX));
  /* 11fa1179 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa117b call 0x11fa45c0 */
  push32(0x11fa1180u); f_11fa45c0();
  /* 11fa1180 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1183 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa1186 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa1188 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa118b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa118e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1194 push edx */
  push32((uint32_t)(EDX));
  /* 11fa1195 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11fa1197 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa119a push eax */
  push32((uint32_t)(EAX));
  /* 11fa119b push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa119d call 0x11fa45c0 */
  push32(0x11fa11a2u); f_11fa45c0();
  /* 11fa11a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa11a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa11a8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa11aa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa11ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa11b0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa11b6 push edx */
  push32((uint32_t)(EDX));
  /* 11fa11b7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 11fa11b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa11bc push eax */
  push32((uint32_t)(EAX));
  /* 11fa11bd push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa11bf call 0x11fa45c0 */
  push32(0x11fa11c4u); f_11fa45c0();
  /* 11fa11c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa11c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa11ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa11cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa11cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa11d2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa11d8 push edx */
  push32((uint32_t)(EDX));
  /* 11fa11d9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11fa11db mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa11de push eax */
  push32((uint32_t)(EAX));
  /* 11fa11df push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa11e1 call 0x11fa45c0 */
  push32(0x11fa11e6u); f_11fa45c0();
  /* 11fa11e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa11e9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa11ec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa11ee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa11f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa11f4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa11fa push edx */
  push32((uint32_t)(EDX));
  /* 11fa11fb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11fa11fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa1200 push eax */
  push32((uint32_t)(EAX));
  /* 11fa1201 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa1203 call 0x11fa45c0 */
  push32(0x11fa1208u); f_11fa45c0();
  /* 11fa1208 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa120b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa120e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa1210 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa1213 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1216 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa121c push edx */
  push32((uint32_t)(EDX));
  /* 11fa121d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 11fa1222 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa1225 push eax */
  push32((uint32_t)(EAX));
  /* 11fa1226 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa1228 call 0x11fa45c0 */
  push32(0x11fa122du); f_11fa45c0();
  /* 11fa122d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1230 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa1233 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa1235 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa1238 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_11fa123b:;
  /* 11fa123b mov esp, ebp */
  ESP = (EBP);
  /* 11fa123d pop ebp */
  EBP = (pop32());
  /* 11fa123e ret  */
  ESPCHK(0x11fa0cb0u, _esp0);
  ESP += 4; return;
}

