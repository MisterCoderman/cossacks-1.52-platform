#include "recomp.h"

/* FUN_10010eb0 @ 0x11ad0eb0 (304 bytes, 79 insns) */
void f_11ad0eb0(void) {
  FTRACE(0x11ad0eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad0eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad0eb1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad0eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad0eb4 cmp dword ptr [0x11af9900], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9900))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad0ebb je 0x11ad0fdc */
  if (C.zf) goto L_11ad0fdc;
  /* 11ad0ec1 mov eax, dword ptr [0x11af98f8] */
  EAX = (r32((uint32_t)(0x11af98f8)));
  /* 11ad0ec6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11ad0ec9 mov ecx, dword ptr [0x11af9900] */
  ECX = (r32((uint32_t)(0x11af9900)));
  /* 11ad0ecf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ad0ed2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0ed4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ad0ed7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11ad0edc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11ad0ee1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad0ee4 push eax */
  push32((uint32_t)(EAX));
  /* 11ad0ee5 call dword ptr [0x11afb368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb368))), 0x11ad0eebu);
  /* 11ad0eeb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ad0ef0 mov ecx, dword ptr [0x11af98f8] */
  ECX = (r32((uint32_t)(0x11af98f8)));
  /* 11ad0ef6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ad0ef8 mov eax, dword ptr [0x11af9900] */
  EAX = (r32((uint32_t)(0x11af9900)));
  /* 11ad0efd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ad0f00 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad0f02 mov edx, dword ptr [0x11af9900] */
  EDX = (r32((uint32_t)(0x11af9900)));
  /* 11ad0f08 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11ad0f0b mov eax, dword ptr [0x11af9900] */
  EAX = (r32((uint32_t)(0x11af9900)));
  /* 11ad0f10 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ad0f13 mov edx, dword ptr [0x11af98f8] */
  EDX = (r32((uint32_t)(0x11af98f8)));
  /* 11ad0f19 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11ad0f24 mov eax, dword ptr [0x11af9900] */
  EAX = (r32((uint32_t)(0x11af9900)));
  /* 11ad0f29 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ad0f2c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11ad0f2f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ad0f32 mov eax, dword ptr [0x11af9900] */
  EAX = (r32((uint32_t)(0x11af9900)));
  /* 11ad0f37 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ad0f3a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11ad0f3d mov edx, dword ptr [0x11af9900] */
  EDX = (r32((uint32_t)(0x11af9900)));
  /* 11ad0f43 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11ad0f46 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11ad0f4a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad0f4c jne 0x11ad0f62 */
  if (!C.zf) goto L_11ad0f62;
  /* 11ad0f4e mov edx, dword ptr [0x11af9900] */
  EDX = (r32((uint32_t)(0x11af9900)));
  /* 11ad0f54 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ad0f57 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11ad0f59 mov ecx, dword ptr [0x11af9900] */
  ECX = (r32((uint32_t)(0x11af9900)));
  /* 11ad0f5f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11ad0f62:;
  /* 11ad0f62 mov edx, dword ptr [0x11af9900] */
  EDX = (r32((uint32_t)(0x11af9900)));
  /* 11ad0f68 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad0f6c jne 0x11ad0fd2 */
  if (!C.zf) goto L_11ad0fd2;
  /* 11ad0f6e cmp dword ptr [0x11af9904], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11af9904))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad0f75 jle 0x11ad0fd2 */
  if ((C.zf||C.sf!=C.of)) goto L_11ad0fd2;
  /* 11ad0f77 mov eax, dword ptr [0x11af9900] */
  EAX = (r32((uint32_t)(0x11af9900)));
  /* 11ad0f7c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ad0f7f push ecx */
  push32((uint32_t)(ECX));
  /* 11ad0f80 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad0f82 mov edx, dword ptr [0x11afac64] */
  EDX = (r32((uint32_t)(0x11afac64)));
  /* 11ad0f88 push edx */
  push32((uint32_t)(EDX));
  /* 11ad0f89 call dword ptr [0x11afb360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb360))), 0x11ad0f8fu);
  /* 11ad0f8f mov eax, dword ptr [0x11af9904] */
  EAX = (r32((uint32_t)(0x11af9904)));
  /* 11ad0f94 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad0f97 mov ecx, dword ptr [0x11af9908] */
  ECX = (r32((uint32_t)(0x11af9908)));
  /* 11ad0f9d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0f9f mov edx, dword ptr [0x11af9900] */
  EDX = (r32((uint32_t)(0x11af9900)));
  /* 11ad0fa5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0fa8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad0faa push ecx */
  push32((uint32_t)(ECX));
  /* 11ad0fab mov eax, dword ptr [0x11af9900] */
  EAX = (r32((uint32_t)(0x11af9900)));
  /* 11ad0fb0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0fb3 push eax */
  push32((uint32_t)(EAX));
  /* 11ad0fb4 mov ecx, dword ptr [0x11af9900] */
  ECX = (r32((uint32_t)(0x11af9900)));
  /* 11ad0fba push ecx */
  push32((uint32_t)(ECX));
  /* 11ad0fbb call 0x11acef80 */
  push32(0x11ad0fc0u); f_11acef80();
  /* 11ad0fc0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0fc3 mov edx, dword ptr [0x11af9904] */
  EDX = (r32((uint32_t)(0x11af9904)));
  /* 11ad0fc9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad0fcc mov dword ptr [0x11af9904], edx */
  w32((uint32_t)(0x11af9904), (EDX));
L_11ad0fd2:;
  /* 11ad0fd2 mov dword ptr [0x11af9900], 0 */
  w32((uint32_t)(0x11af9900), (0x0u));
L_11ad0fdc:;
  /* 11ad0fdc mov esp, ebp */
  ESP = (EBP);
  /* 11ad0fde pop ebp */
  EBP = (pop32());
  /* 11ad0fdf ret  */
  ESPCHK(0x11ad0eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010fe0 @ 0x11ad0fe0 (1565 bytes, 343 insns) */
void f_11ad0fe0(void) {
  FTRACE(0x11ad0fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad0fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad0fe1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad0fe3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad0fe9 mov eax, dword ptr [0x11af9904] */
  EAX = (r32((uint32_t)(0x11af9904)));
  /* 11ad0fee imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad0ff1 push eax */
  push32((uint32_t)(EAX));
  /* 11ad0ff2 mov ecx, dword ptr [0x11af9908] */
  ECX = (r32((uint32_t)(0x11af9908)));
  /* 11ad0ff8 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad0ff9 call dword ptr [0x11afb3e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3e8))), 0x11ad0fffu);
  /* 11ad0fff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad1001 je 0x11ad100b */
  if (C.zf) goto L_11ad100b;
  /* 11ad1003 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad1006 jmp 0x11ad15f9 */
  goto L_11ad15f9;
L_11ad100b:;
  /* 11ad100b mov edx, dword ptr [0x11af9908] */
  EDX = (r32((uint32_t)(0x11af9908)));
  /* 11ad1011 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 11ad1017 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 11ad1021 jmp 0x11ad1032 */
  goto L_11ad1032;
L_11ad1023:;
  /* 11ad1023 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 11ad1029 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad102c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_11ad1032:;
  /* 11ad1032 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 11ad1038 cmp ecx, dword ptr [0x11af9904] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11af9904))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad103e jge 0x11ad15f7 */
  if ((C.sf==C.of)) goto L_11ad15f7;
  /* 11ad1044 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11ad104a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11ad104d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 11ad1053 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11ad1058 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11ad105e push ecx */
  push32((uint32_t)(ECX));
  /* 11ad105f call dword ptr [0x11afb3e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3e8))), 0x11ad1065u);
  /* 11ad1065 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad1067 je 0x11ad1073 */
  if (C.zf) goto L_11ad1073;
  /* 11ad1069 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11ad106e jmp 0x11ad15f9 */
  goto L_11ad15f9;
L_11ad1073:;
  /* 11ad1073 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11ad1079 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11ad107c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 11ad1082 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11ad1088 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad108e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11ad1091 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11ad1097 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ad109a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad109d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 11ad10a7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 11ad10b1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ad10b8 jmp 0x11ad10c3 */
  goto L_11ad10c3;
L_11ad10ba:;
  /* 11ad10ba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad10bd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad10c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11ad10c3:;
  /* 11ad10c3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad10c7 jge 0x11ad15bb */
  if ((C.sf==C.of)) goto L_11ad15bb;
  /* 11ad10cd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 11ad10d7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 11ad10e1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 11ad10eb mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 11ad10f5 jmp 0x11ad1106 */
  goto L_11ad1106;
L_11ad10f7:;
  /* 11ad10f7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11ad10fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad1100 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_11ad1106:;
  /* 11ad1106 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad110d jge 0x11ad1122 */
  if ((C.sf==C.of)) goto L_11ad1122;
  /* 11ad110f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11ad1115 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 11ad1120 jmp 0x11ad10f7 */
  goto L_11ad10f7;
L_11ad1122:;
  /* 11ad1122 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1126 jl 0x11ad155d */
  if ((C.sf!=C.of)) goto L_11ad155d;
  /* 11ad112c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11ad1131 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 11ad1137 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad1138 call dword ptr [0x11afb3e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3e8))), 0x11ad113eu);
  /* 11ad113e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad1140 je 0x11ad114c */
  if (C.zf) goto L_11ad114c;
  /* 11ad1142 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 11ad1147 jmp 0x11ad15f9 */
  goto L_11ad15f9;
L_11ad114c:;
  /* 11ad114c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 11ad1152 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ad1155 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 11ad115f jmp 0x11ad1170 */
  goto L_11ad1170;
L_11ad1161:;
  /* 11ad1161 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 11ad1167 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad116a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_11ad1170:;
  /* 11ad1170 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1177 jge 0x11ad12f4 */
  if ((C.sf==C.of)) goto L_11ad12f4;
  /* 11ad117d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad1180 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad1183 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 11ad1189 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11ad118f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad1195 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 11ad119b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11ad11a1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad11a5 jne 0x11ad11b2 */
  if (!C.zf) goto L_11ad11b2;
  /* 11ad11a7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 11ad11ad cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad11b0 je 0x11ad11bc */
  if (C.zf) goto L_11ad11bc;
L_11ad11b2:;
  /* 11ad11b2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 11ad11b7 jmp 0x11ad15f9 */
  goto L_11ad15f9;
L_11ad11bc:;
  /* 11ad11bc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11ad11c2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ad11c4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 11ad11ca mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 11ad11d0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 11ad11d6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 11ad11dc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad11df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad11e1 je 0x11ad1219 */
  if (C.zf) goto L_11ad1219;
  /* 11ad11e3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 11ad11e9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad11ec mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 11ad11f2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad11fc jle 0x11ad1208 */
  if ((C.zf||C.sf!=C.of)) goto L_11ad1208;
  /* 11ad11fe mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 11ad1203 jmp 0x11ad15f9 */
  goto L_11ad15f9;
L_11ad1208:;
  /* 11ad1208 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 11ad120e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad1211 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 11ad1217 jmp 0x11ad125b */
  goto L_11ad125b;
L_11ad1219:;
  /* 11ad1219 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 11ad121f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11ad1222 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad1225 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 11ad122b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1232 jle 0x11ad123e */
  if ((C.zf||C.sf!=C.of)) goto L_11ad123e;
  /* 11ad1234 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_11ad123e:;
  /* 11ad123e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11ad1244 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 11ad124b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad124e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11ad1254 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_11ad125b:;
  /* 11ad125b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1262 jl 0x11ad127d */
  if ((C.sf!=C.of)) goto L_11ad127d;
  /* 11ad1264 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 11ad126a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad126d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad126f jne 0x11ad127d */
  if (!C.zf) goto L_11ad127d;
  /* 11ad1271 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad127b jle 0x11ad1287 */
  if ((C.zf||C.sf!=C.of)) goto L_11ad1287;
L_11ad127d:;
  /* 11ad127d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 11ad1282 jmp 0x11ad15f9 */
  goto L_11ad15f9;
L_11ad1287:;
  /* 11ad1287 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11ad128d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad1293 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11ad1296 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad129c je 0x11ad12a8 */
  if (C.zf) goto L_11ad12a8;
  /* 11ad129e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 11ad12a3 jmp 0x11ad15f9 */
  goto L_11ad15f9;
L_11ad12a8:;
  /* 11ad12a8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11ad12ae add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad12b4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 11ad12ba mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11ad12c0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad12c6 jb 0x11ad11bc */
  if (C.cf) goto L_11ad11bc;
  /* 11ad12cc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11ad12d2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad12d8 je 0x11ad12e4 */
  if (C.zf) goto L_11ad12e4;
  /* 11ad12da mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 11ad12df jmp 0x11ad15f9 */
  goto L_11ad15f9;
L_11ad12e4:;
  /* 11ad12e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad12e7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad12ec mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ad12ef jmp 0x11ad1161 */
  goto L_11ad1161;
L_11ad12f4:;
  /* 11ad12f4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad12f7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad12f9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad12ff je 0x11ad130b */
  if (C.zf) goto L_11ad130b;
  /* 11ad1301 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 11ad1306 jmp 0x11ad15f9 */
  goto L_11ad15f9;
L_11ad130b:;
  /* 11ad130b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad130e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 11ad1314 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11ad131b jmp 0x11ad1326 */
  goto L_11ad1326;
L_11ad131d:;
  /* 11ad131d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad1320 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad1323 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11ad1326:;
  /* 11ad1326 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad132a jge 0x11ad155d */
  if ((C.sf==C.of)) goto L_11ad155d;
  /* 11ad1330 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 11ad133a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 11ad1340 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_11ad1346:;
  /* 11ad1346 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11ad134c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ad134f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 11ad1355 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11ad135b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1361 je 0x11ad148a */
  if (C.zf) goto L_11ad148a;
  /* 11ad1367 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad136a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11ad1370 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1377 je 0x11ad148a */
  if (C.zf) goto L_11ad148a;
  /* 11ad137d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11ad1383 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1389 jb 0x11ad139e */
  if (C.cf) goto L_11ad139e;
  /* 11ad138b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 11ad1391 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad1396 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad139c jb 0x11ad13a8 */
  if (C.cf) goto L_11ad13a8;
L_11ad139e:;
  /* 11ad139e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 11ad13a3 jmp 0x11ad15f9 */
  goto L_11ad15f9;
L_11ad13a8:;
  /* 11ad13a8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11ad13ae and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad13b4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 11ad13ba mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 11ad13c0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad13c3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11ad13c6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad13c9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad13ce mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_11ad13d4:;
  /* 11ad13d4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad13d7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad13dd je 0x11ad13fe */
  if (C.zf) goto L_11ad13fe;
  /* 11ad13df mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad13e2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad13e8 jne 0x11ad13ec */
  if (!C.zf) goto L_11ad13ec;
  /* 11ad13ea jmp 0x11ad13fe */
  goto L_11ad13fe;
L_11ad13ec:;
  /* 11ad13ec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad13ef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ad13f1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11ad13f4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad13f7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad13f9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11ad13fc jmp 0x11ad13d4 */
  goto L_11ad13d4;
L_11ad13fe:;
  /* 11ad13fe mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad1401 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1407 jne 0x11ad1413 */
  if (!C.zf) goto L_11ad1413;
  /* 11ad1409 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 11ad140e jmp 0x11ad15f9 */
  goto L_11ad15f9;
L_11ad1413:;
  /* 11ad1413 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11ad1419 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad141b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11ad141e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad1421 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 11ad1427 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad142e jle 0x11ad143a */
  if ((C.zf||C.sf!=C.of)) goto L_11ad143a;
  /* 11ad1430 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_11ad143a:;
  /* 11ad143a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11ad1440 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1443 je 0x11ad144f */
  if (C.zf) goto L_11ad144f;
  /* 11ad1445 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 11ad144a jmp 0x11ad15f9 */
  goto L_11ad15f9;
L_11ad144f:;
  /* 11ad144f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11ad1455 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ad1458 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad145e je 0x11ad146a */
  if (C.zf) goto L_11ad146a;
  /* 11ad1460 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 11ad1465 jmp 0x11ad15f9 */
  goto L_11ad15f9;
L_11ad146a:;
  /* 11ad146a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11ad1470 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 11ad1476 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11ad147c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad147f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 11ad1485 jmp 0x11ad1346 */
  goto L_11ad1346;
L_11ad148a:;
  /* 11ad148a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1491 je 0x11ad1501 */
  if (C.zf) goto L_11ad1501;
  /* 11ad1493 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1497 jge 0x11ad14cb */
  if ((C.sf==C.of)) goto L_11ad14cb;
  /* 11ad1499 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ad149e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad14a1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ad14a3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 11ad14a9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad14ab mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 11ad14b1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ad14b6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad14b9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ad14bb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 11ad14c1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad14c3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 11ad14c9 jmp 0x11ad1501 */
  goto L_11ad1501;
L_11ad14cb:;
  /* 11ad14cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad14ce sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad14d1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ad14d6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ad14d8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 11ad14de or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad14e0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 11ad14e6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad14e9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad14ec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ad14f1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ad14f3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 11ad14f9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad14fb mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_11ad1501:;
  /* 11ad1501 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11ad1507 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ad150a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1510 jne 0x11ad1524 */
  if (!C.zf) goto L_11ad1524;
  /* 11ad1512 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad1515 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11ad151b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1522 je 0x11ad152e */
  if (C.zf) goto L_11ad152e;
L_11ad1524:;
  /* 11ad1524 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 11ad1529 jmp 0x11ad15f9 */
  goto L_11ad15f9;
L_11ad152e:;
  /* 11ad152e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 11ad1534 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ad1537 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad153d je 0x11ad1549 */
  if (C.zf) goto L_11ad1549;
  /* 11ad153f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 11ad1544 jmp 0x11ad15f9 */
  goto L_11ad15f9;
L_11ad1549:;
  /* 11ad1549 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 11ad154f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad1552 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 11ad1558 jmp 0x11ad131d */
  goto L_11ad131d;
L_11ad155d:;
  /* 11ad155d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad1560 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 11ad1566 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 11ad156c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1570 jne 0x11ad158a */
  if (!C.zf) goto L_11ad158a;
  /* 11ad1572 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad1575 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 11ad157b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 11ad1581 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1588 je 0x11ad1591 */
  if (C.zf) goto L_11ad1591;
L_11ad158a:;
  /* 11ad158a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 11ad158f jmp 0x11ad15f9 */
  goto L_11ad15f9;
L_11ad1591:;
  /* 11ad1591 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 11ad1597 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad159d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 11ad15a3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad15a6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad15ab mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ad15ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad15b1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11ad15b3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ad15b6 jmp 0x11ad10ba */
  goto L_11ad10ba;
L_11ad15bb:;
  /* 11ad15bb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11ad15c1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 11ad15c7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad15c9 jne 0x11ad15dc */
  if (!C.zf) goto L_11ad15dc;
  /* 11ad15cb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11ad15d1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 11ad15d7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad15da je 0x11ad15e3 */
  if (C.zf) goto L_11ad15e3;
L_11ad15dc:;
  /* 11ad15dc mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 11ad15e1 jmp 0x11ad15f9 */
  goto L_11ad15f9;
L_11ad15e3:;
  /* 11ad15e3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11ad15e9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad15ec mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 11ad15f2 jmp 0x11ad1023 */
  goto L_11ad1023;
L_11ad15f7:;
  /* 11ad15f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ad15f9:;
  /* 11ad15f9 mov esp, ebp */
  ESP = (EBP);
  /* 11ad15fb pop ebp */
  EBP = (pop32());
  /* 11ad15fc ret  */
  ESPCHK(0x11ad0fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011600 @ 0x11ad1600 (836 bytes, 238 insns) */
void f_11ad1600(void) {
  FTRACE(0x11ad1600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad1600 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad1601 mov ebp, esp */
  EBP = (ESP);
  /* 11ad1603 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad1606 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ad1608 call 0x11acd060 */
  push32(0x11ad160du); f_11acd060();
  /* 11ad160d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad1610 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad1613 push eax */
  push32((uint32_t)(EAX));
  /* 11ad1614 call 0x11ad1950 */
  push32(0x11ad1619u); f_11ad1950();
  /* 11ad1619 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad161c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ad161f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad1622 cmp ecx, dword ptr [0x11af9658] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11af9658))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1628 jne 0x11ad163b */
  if (!C.zf) goto L_11ad163b;
  /* 11ad162a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ad162c call 0x11acd100 */
  push32(0x11ad1631u); f_11acd100();
  /* 11ad1631 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad1634 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad1636 jmp 0x11ad1940 */
  goto L_11ad1940;
L_11ad163b:;
  /* 11ad163b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad163f jne 0x11ad165c */
  if (!C.zf) goto L_11ad165c;
  /* 11ad1641 call 0x11ad1a30 */
  push32(0x11ad1646u); f_11ad1a30();
  /* 11ad1646 call 0x11ad1ab0 */
  push32(0x11ad164bu); f_11ad1ab0();
  /* 11ad164b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ad164d call 0x11acd100 */
  push32(0x11ad1652u); f_11acd100();
  /* 11ad1652 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad1655 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad1657 jmp 0x11ad1940 */
  goto L_11ad1940;
L_11ad165c:;
  /* 11ad165c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ad1663 jmp 0x11ad166e */
  goto L_11ad166e;
L_11ad1665:;
  /* 11ad1665 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad1668 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad166b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ad166e:;
  /* 11ad166e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1672 jae 0x11ad17bf */
  if (!C.cf) goto L_11ad17bf;
  /* 11ad1678 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad167b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad167e mov ecx, dword ptr [eax + 0x11af7220] */
  ECX = (r32((uint32_t)(EAX + 0x11af7220)));
  /* 11ad1684 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1687 jne 0x11ad17ba */
  if (!C.zf) goto L_11ad17ba;
  /* 11ad168d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11ad1694 jmp 0x11ad169f */
  goto L_11ad169f;
L_11ad1696:;
  /* 11ad1696 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad1699 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad169c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_11ad169f:;
  /* 11ad169f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad16a6 jae 0x11ad16b4 */
  if (!C.cf) goto L_11ad16b4;
  /* 11ad16a8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad16ab mov byte ptr [eax + 0x11af97e0], 0 */
  w8((uint32_t)(EAX + 0x11af97e0), (0x0u));
  /* 11ad16b2 jmp 0x11ad1696 */
  goto L_11ad1696;
L_11ad16b4:;
  /* 11ad16b4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ad16bb jmp 0x11ad16c6 */
  goto L_11ad16c6;
L_11ad16bd:;
  /* 11ad16bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad16c0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad16c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11ad16c6:;
  /* 11ad16c6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad16ca jae 0x11ad1747 */
  if (!C.cf) goto L_11ad1747;
  /* 11ad16cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad16cf imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad16d2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad16d5 lea ecx, [edx + eax*8 + 0x11af7230] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x11af7230));
  /* 11ad16dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ad16df jmp 0x11ad16ea */
  goto L_11ad16ea;
L_11ad16e1:;
  /* 11ad16e1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad16e4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad16e7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11ad16ea:;
  /* 11ad16ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad16ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad16ef mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ad16f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad16f3 je 0x11ad1742 */
  if (C.zf) goto L_11ad1742;
  /* 11ad16f5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad16f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad16fa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11ad16fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad16ff je 0x11ad1742 */
  if (C.zf) goto L_11ad1742;
  /* 11ad1701 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad1704 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ad1706 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ad1708 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11ad170b jmp 0x11ad1716 */
  goto L_11ad1716;
L_11ad170d:;
  /* 11ad170d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad1710 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad1713 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11ad1716:;
  /* 11ad1716 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad1719 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ad171b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11ad171e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1721 ja 0x11ad1740 */
  if ((!C.cf&&!C.zf)) goto L_11ad1740;
  /* 11ad1723 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad1726 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad1729 mov dl, byte ptr [eax + 0x11af97e1] */
  DL = (r8((uint32_t)(EAX + 0x11af97e1)));
  /* 11ad172f or dl, byte ptr [ecx + 0x11af7218] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x11af7218))); DL = (_r); fl_logic(_r,8); }
  /* 11ad1735 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad1738 mov byte ptr [eax + 0x11af97e1], dl */
  w8((uint32_t)(EAX + 0x11af97e1), (DL));
  /* 11ad173e jmp 0x11ad170d */
  goto L_11ad170d;
L_11ad1740:;
  /* 11ad1740 jmp 0x11ad16e1 */
  goto L_11ad16e1;
L_11ad1742:;
  /* 11ad1742 jmp 0x11ad16bd */
  goto L_11ad16bd;
L_11ad1747:;
  /* 11ad1747 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad174a mov dword ptr [0x11af9658], ecx */
  w32((uint32_t)(0x11af9658), (ECX));
  /* 11ad1750 mov dword ptr [0x11af96dc], 1 */
  w32((uint32_t)(0x11af96dc), (0x1u));
  /* 11ad175a mov edx, dword ptr [0x11af9658] */
  EDX = (r32((uint32_t)(0x11af9658)));
  /* 11ad1760 push edx */
  push32((uint32_t)(EDX));
  /* 11ad1761 call 0x11ad19b0 */
  push32(0x11ad1766u); f_11ad19b0();
  /* 11ad1766 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad1769 mov dword ptr [0x11af98e4], eax */
  w32((uint32_t)(0x11af98e4), (EAX));
  /* 11ad176e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ad1775 jmp 0x11ad1780 */
  goto L_11ad1780;
L_11ad1777:;
  /* 11ad1777 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad177a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad177d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11ad1780:;
  /* 11ad1780 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1784 jae 0x11ad17a4 */
  if (!C.cf) goto L_11ad17a4;
  /* 11ad1786 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad1789 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad178c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad178f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad1792 mov cx, word ptr [ecx + eax*2 + 0x11af7224] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x11af7224)));
  /* 11ad179a mov word ptr [edx*2 + 0x11af96d0], cx */
  w16((uint32_t)(EDX*2 + 0x11af96d0), (CX));
  /* 11ad17a2 jmp 0x11ad1777 */
  goto L_11ad1777;
L_11ad17a4:;
  /* 11ad17a4 call 0x11ad1ab0 */
  push32(0x11ad17a9u); f_11ad1ab0();
  /* 11ad17a9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ad17ab call 0x11acd100 */
  push32(0x11ad17b0u); f_11acd100();
  /* 11ad17b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad17b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad17b5 jmp 0x11ad1940 */
  goto L_11ad1940;
L_11ad17ba:;
  /* 11ad17ba jmp 0x11ad1665 */
  goto L_11ad1665;
L_11ad17bf:;
  /* 11ad17bf lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 11ad17c2 push edx */
  push32((uint32_t)(EDX));
  /* 11ad17c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad17c6 push eax */
  push32((uint32_t)(EAX));
  /* 11ad17c7 call dword ptr [0x11afb330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb330))), 0x11ad17cdu);
  /* 11ad17cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad17d0 jne 0x11ad1912 */
  if (!C.zf) goto L_11ad1912;
  /* 11ad17d6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11ad17dd jmp 0x11ad17e8 */
  goto L_11ad17e8;
L_11ad17df:;
  /* 11ad17df mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad17e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad17e5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_11ad17e8:;
  /* 11ad17e8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad17ef jae 0x11ad17fd */
  if (!C.cf) goto L_11ad17fd;
  /* 11ad17f1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad17f4 mov byte ptr [edx + 0x11af97e0], 0 */
  w8((uint32_t)(EDX + 0x11af97e0), (0x0u));
  /* 11ad17fb jmp 0x11ad17df */
  goto L_11ad17df;
L_11ad17fd:;
  /* 11ad17fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad1800 mov dword ptr [0x11af9658], eax */
  w32((uint32_t)(0x11af9658), (EAX));
  /* 11ad1805 mov dword ptr [0x11af98e4], 0 */
  w32((uint32_t)(0x11af98e4), (0x0u));
  /* 11ad180f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1813 jbe 0x11ad18ce */
  if ((C.cf||C.zf)) goto L_11ad18ce;
  /* 11ad1819 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 11ad181c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11ad181f jmp 0x11ad182a */
  goto L_11ad182a;
L_11ad1821:;
  /* 11ad1821 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ad1824 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad1827 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_11ad182a:;
  /* 11ad182a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ad182d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad182f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ad1831 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad1833 je 0x11ad187c */
  if (C.zf) goto L_11ad187c;
  /* 11ad1835 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ad1838 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad183a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11ad183d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad183f je 0x11ad187c */
  if (C.zf) goto L_11ad187c;
  /* 11ad1841 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ad1844 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ad1846 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ad1848 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11ad184b jmp 0x11ad1856 */
  goto L_11ad1856;
L_11ad184d:;
  /* 11ad184d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad1850 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad1853 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11ad1856:;
  /* 11ad1856 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ad1859 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ad185b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11ad185e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1861 ja 0x11ad187a */
  if ((!C.cf&&!C.zf)) goto L_11ad187a;
  /* 11ad1863 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad1866 mov cl, byte ptr [eax + 0x11af97e1] */
  CL = (r8((uint32_t)(EAX + 0x11af97e1)));
  /* 11ad186c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 11ad186f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad1872 mov byte ptr [edx + 0x11af97e1], cl */
  w8((uint32_t)(EDX + 0x11af97e1), (CL));
  /* 11ad1878 jmp 0x11ad184d */
  goto L_11ad184d;
L_11ad187a:;
  /* 11ad187a jmp 0x11ad1821 */
  goto L_11ad1821;
L_11ad187c:;
  /* 11ad187c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 11ad1883 jmp 0x11ad188e */
  goto L_11ad188e;
L_11ad1885:;
  /* 11ad1885 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad1888 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad188b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11ad188e:;
  /* 11ad188e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1895 jae 0x11ad18ae */
  if (!C.cf) goto L_11ad18ae;
  /* 11ad1897 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad189a mov dl, byte ptr [ecx + 0x11af97e1] */
  DL = (r8((uint32_t)(ECX + 0x11af97e1)));
  /* 11ad18a0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11ad18a3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad18a6 mov byte ptr [eax + 0x11af97e1], dl */
  w8((uint32_t)(EAX + 0x11af97e1), (DL));
  /* 11ad18ac jmp 0x11ad1885 */
  goto L_11ad1885;
L_11ad18ae:;
  /* 11ad18ae mov ecx, dword ptr [0x11af9658] */
  ECX = (r32((uint32_t)(0x11af9658)));
  /* 11ad18b4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad18b5 call 0x11ad19b0 */
  push32(0x11ad18bau); f_11ad19b0();
  /* 11ad18ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad18bd mov dword ptr [0x11af98e4], eax */
  w32((uint32_t)(0x11af98e4), (EAX));
  /* 11ad18c2 mov dword ptr [0x11af96dc], 1 */
  w32((uint32_t)(0x11af96dc), (0x1u));
  /* 11ad18cc jmp 0x11ad18d8 */
  goto L_11ad18d8;
L_11ad18ce:;
  /* 11ad18ce mov dword ptr [0x11af96dc], 0 */
  w32((uint32_t)(0x11af96dc), (0x0u));
L_11ad18d8:;
  /* 11ad18d8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ad18df jmp 0x11ad18ea */
  goto L_11ad18ea;
L_11ad18e1:;
  /* 11ad18e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad18e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad18e7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11ad18ea:;
  /* 11ad18ea cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad18ee jae 0x11ad18ff */
  if (!C.cf) goto L_11ad18ff;
  /* 11ad18f0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad18f3 mov word ptr [eax*2 + 0x11af96d0], 0 */
  w16((uint32_t)(EAX*2 + 0x11af96d0), (0x0u));
  /* 11ad18fd jmp 0x11ad18e1 */
  goto L_11ad18e1;
L_11ad18ff:;
  /* 11ad18ff call 0x11ad1ab0 */
  push32(0x11ad1904u); f_11ad1ab0();
  /* 11ad1904 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ad1906 call 0x11acd100 */
  push32(0x11ad190bu); f_11acd100();
  /* 11ad190b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad190e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad1910 jmp 0x11ad1940 */
  goto L_11ad1940;
L_11ad1912:;
  /* 11ad1912 cmp dword ptr [0x11af94bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af94bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1919 je 0x11ad1933 */
  if (C.zf) goto L_11ad1933;
  /* 11ad191b call 0x11ad1a30 */
  push32(0x11ad1920u); f_11ad1a30();
  /* 11ad1920 call 0x11ad1ab0 */
  push32(0x11ad1925u); f_11ad1ab0();
  /* 11ad1925 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ad1927 call 0x11acd100 */
  push32(0x11ad192cu); f_11acd100();
  /* 11ad192c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad192f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad1931 jmp 0x11ad1940 */
  goto L_11ad1940;
L_11ad1933:;
  /* 11ad1933 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ad1935 call 0x11acd100 */
  push32(0x11ad193au); f_11acd100();
  /* 11ad193a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad193d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11ad1940:;
  /* 11ad1940 mov esp, ebp */
  ESP = (EBP);
  /* 11ad1942 pop ebp */
  EBP = (pop32());
  /* 11ad1943 ret  */
  ESPCHK(0x11ad1600u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x11ad1950 (89 bytes, 21 insns) */
void f_11ad1950(void) {
  FTRACE(0x11ad1950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad1950 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad1951 mov ebp, esp */
  EBP = (ESP);
  /* 11ad1953 mov dword ptr [0x11af94bc], 0 */
  w32((uint32_t)(0x11af94bc), (0x0u));
  /* 11ad195d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1961 jne 0x11ad1975 */
  if (!C.zf) goto L_11ad1975;
  /* 11ad1963 mov dword ptr [0x11af94bc], 1 */
  w32((uint32_t)(0x11af94bc), (0x1u));
  /* 11ad196d call dword ptr [0x11afb328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb328))), 0x11ad1973u);
  /* 11ad1973 jmp 0x11ad19a7 */
  goto L_11ad19a7;
L_11ad1975:;
  /* 11ad1975 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1979 jne 0x11ad198d */
  if (!C.zf) goto L_11ad198d;
  /* 11ad197b mov dword ptr [0x11af94bc], 1 */
  w32((uint32_t)(0x11af94bc), (0x1u));
  /* 11ad1985 call dword ptr [0x11afb338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb338))), 0x11ad198bu);
  /* 11ad198b jmp 0x11ad19a7 */
  goto L_11ad19a7;
L_11ad198d:;
  /* 11ad198d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1991 jne 0x11ad19a4 */
  if (!C.zf) goto L_11ad19a4;
  /* 11ad1993 mov dword ptr [0x11af94bc], 1 */
  w32((uint32_t)(0x11af94bc), (0x1u));
  /* 11ad199d mov eax, dword ptr [0x11af94e4] */
  EAX = (r32((uint32_t)(0x11af94e4)));
  /* 11ad19a2 jmp 0x11ad19a7 */
  goto L_11ad19a7;
L_11ad19a4:;
  /* 11ad19a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11ad19a7:;
  /* 11ad19a7 pop ebp */
  EBP = (pop32());
  /* 11ad19a8 ret  */
  ESPCHK(0x11ad1950u, _esp0);
  ESP += 4; return;
}

/* FUN_100119b0 @ 0x11ad19b0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_11ad19b0(void) {
  FTRACE(0x11ad19b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad19b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad19b1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad19b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad19b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad19b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad19ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad19bd sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad19c3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ad19c6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad19ca ja 0x11ad19fa */
  if ((!C.cf&&!C.zf)) goto L_11ad19fa;
  /* 11ad19cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad19cf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ad19d1 mov dl, byte ptr [eax + 0x11ad1a14] */
  DL = (r8((uint32_t)(EAX + 0x11ad1a14)));
  /* 11ad19d7 jmp dword ptr [edx*4 + 0x11ad1a00] */
  switch (EDX) {
    case 0: goto L_11ad19de;
    case 1: goto L_11ad19e5;
    case 2: goto L_11ad19ec;
    case 3: goto L_11ad19f3;
    case 4: goto L_11ad19fa;
    default: x86_unimpl("switch@0x11ad19d7 out of table"); return;
  }
L_11ad19de:;
  /* 11ad19de mov eax, 0x411 */
  EAX = (0x411u);
  /* 11ad19e3 jmp 0x11ad19fc */
  goto L_11ad19fc;
L_11ad19e5:;
  /* 11ad19e5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11ad19ea jmp 0x11ad19fc */
  goto L_11ad19fc;
L_11ad19ec:;
  /* 11ad19ec mov eax, 0x412 */
  EAX = (0x412u);
  /* 11ad19f1 jmp 0x11ad19fc */
  goto L_11ad19fc;
L_11ad19f3:;
  /* 11ad19f3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 11ad19f8 jmp 0x11ad19fc */
  goto L_11ad19fc;
L_11ad19fa:;
  /* 11ad19fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ad19fc:;
  /* 11ad19fc mov esp, ebp */
  ESP = (EBP);
  /* 11ad19fe pop ebp */
  EBP = (pop32());
  /* 11ad19ff ret  */
  ESPCHK(0x11ad19b0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x11ad1a30 (116 bytes, 29 insns) */
void f_11ad1a30(void) {
  FTRACE(0x11ad1a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad1a30 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad1a31 mov ebp, esp */
  EBP = (ESP);
  /* 11ad1a33 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad1a34 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ad1a3b jmp 0x11ad1a46 */
  goto L_11ad1a46;
L_11ad1a3d:;
  /* 11ad1a3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad1a40 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad1a43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ad1a46:;
  /* 11ad1a46 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1a4d jge 0x11ad1a5b */
  if ((C.sf==C.of)) goto L_11ad1a5b;
  /* 11ad1a4f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad1a52 mov byte ptr [ecx + 0x11af97e0], 0 */
  w8((uint32_t)(ECX + 0x11af97e0), (0x0u));
  /* 11ad1a59 jmp 0x11ad1a3d */
  goto L_11ad1a3d;
L_11ad1a5b:;
  /* 11ad1a5b mov dword ptr [0x11af9658], 0 */
  w32((uint32_t)(0x11af9658), (0x0u));
  /* 11ad1a65 mov dword ptr [0x11af96dc], 0 */
  w32((uint32_t)(0x11af96dc), (0x0u));
  /* 11ad1a6f mov dword ptr [0x11af98e4], 0 */
  w32((uint32_t)(0x11af98e4), (0x0u));
  /* 11ad1a79 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ad1a80 jmp 0x11ad1a8b */
  goto L_11ad1a8b;
L_11ad1a82:;
  /* 11ad1a82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad1a85 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad1a88 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ad1a8b:;
  /* 11ad1a8b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1a8f jge 0x11ad1aa0 */
  if ((C.sf==C.of)) goto L_11ad1aa0;
  /* 11ad1a91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad1a94 mov word ptr [eax*2 + 0x11af96d0], 0 */
  w16((uint32_t)(EAX*2 + 0x11af96d0), (0x0u));
  /* 11ad1a9e jmp 0x11ad1a82 */
  goto L_11ad1a82;
L_11ad1aa0:;
  /* 11ad1aa0 mov esp, ebp */
  ESP = (EBP);
  /* 11ad1aa2 pop ebp */
  EBP = (pop32());
  /* 11ad1aa3 ret  */
  ESPCHK(0x11ad1a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ab0 @ 0x11ad1ab0 (770 bytes, 175 insns) */
void f_11ad1ab0(void) {
  FTRACE(0x11ad1ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad1ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad1ab1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad1ab3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad1ab9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 11ad1abf push eax */
  push32((uint32_t)(EAX));
  /* 11ad1ac0 mov ecx, dword ptr [0x11af9658] */
  ECX = (r32((uint32_t)(0x11af9658)));
  /* 11ad1ac6 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad1ac7 call dword ptr [0x11afb330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb330))), 0x11ad1acdu);
  /* 11ad1acd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1ad0 jne 0x11ad1ce9 */
  if (!C.zf) goto L_11ad1ce9;
  /* 11ad1ad6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11ad1ae0 jmp 0x11ad1af1 */
  goto L_11ad1af1;
L_11ad1ae2:;
  /* 11ad1ae2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ad1ae8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad1aeb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_11ad1af1:;
  /* 11ad1af1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1afb jae 0x11ad1b12 */
  if (!C.cf) goto L_11ad1b12;
  /* 11ad1afd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ad1b03 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 11ad1b09 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 11ad1b10 jmp 0x11ad1ae2 */
  goto L_11ad1ae2;
L_11ad1b12:;
  /* 11ad1b12 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 11ad1b19 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 11ad1b1f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ad1b22 jmp 0x11ad1b2d */
  goto L_11ad1b2d;
L_11ad1b24:;
  /* 11ad1b24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad1b27 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad1b2a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ad1b2d:;
  /* 11ad1b2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad1b30 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ad1b32 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ad1b34 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad1b36 je 0x11ad1b78 */
  if (C.zf) goto L_11ad1b78;
  /* 11ad1b38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad1b3b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad1b3d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ad1b3f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 11ad1b45 jmp 0x11ad1b56 */
  goto L_11ad1b56;
L_11ad1b47:;
  /* 11ad1b47 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ad1b4d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad1b50 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_11ad1b56:;
  /* 11ad1b56 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad1b59 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad1b5b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11ad1b5e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1b64 ja 0x11ad1b76 */
  if ((!C.cf&&!C.zf)) goto L_11ad1b76;
  /* 11ad1b66 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ad1b6c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 11ad1b74 jmp 0x11ad1b47 */
  goto L_11ad1b47;
L_11ad1b76:;
  /* 11ad1b76 jmp 0x11ad1b24 */
  goto L_11ad1b24;
L_11ad1b78:;
  /* 11ad1b78 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad1b7a mov eax, dword ptr [0x11af98e4] */
  EAX = (r32((uint32_t)(0x11af98e4)));
  /* 11ad1b7f push eax */
  push32((uint32_t)(EAX));
  /* 11ad1b80 mov ecx, dword ptr [0x11af9658] */
  ECX = (r32((uint32_t)(0x11af9658)));
  /* 11ad1b86 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad1b87 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 11ad1b8d push edx */
  push32((uint32_t)(EDX));
  /* 11ad1b8e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11ad1b93 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 11ad1b99 push eax */
  push32((uint32_t)(EAX));
  /* 11ad1b9a push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad1b9c call 0x11ad35c0 */
  push32(0x11ad1ba1u); f_11ad35c0();
  /* 11ad1ba1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad1ba4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad1ba6 mov ecx, dword ptr [0x11af9658] */
  ECX = (r32((uint32_t)(0x11af9658)));
  /* 11ad1bac push ecx */
  push32((uint32_t)(ECX));
  /* 11ad1bad push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11ad1bb2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 11ad1bb8 push edx */
  push32((uint32_t)(EDX));
  /* 11ad1bb9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11ad1bbe lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 11ad1bc4 push eax */
  push32((uint32_t)(EAX));
  /* 11ad1bc5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11ad1bca mov ecx, dword ptr [0x11af98e4] */
  ECX = (r32((uint32_t)(0x11af98e4)));
  /* 11ad1bd0 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad1bd1 call 0x11ad3780 */
  push32(0x11ad1bd6u); f_11ad3780();
  /* 11ad1bd6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad1bd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad1bdb mov edx, dword ptr [0x11af9658] */
  EDX = (r32((uint32_t)(0x11af9658)));
  /* 11ad1be1 push edx */
  push32((uint32_t)(EDX));
  /* 11ad1be2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11ad1be7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 11ad1bed push eax */
  push32((uint32_t)(EAX));
  /* 11ad1bee push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11ad1bf3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 11ad1bf9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad1bfa push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11ad1bff mov edx, dword ptr [0x11af98e4] */
  EDX = (r32((uint32_t)(0x11af98e4)));
  /* 11ad1c05 push edx */
  push32((uint32_t)(EDX));
  /* 11ad1c06 call 0x11ad3780 */
  push32(0x11ad1c0bu); f_11ad3780();
  /* 11ad1c0b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad1c0e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11ad1c18 jmp 0x11ad1c29 */
  goto L_11ad1c29;
L_11ad1c1a:;
  /* 11ad1c1a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ad1c20 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad1c23 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_11ad1c29:;
  /* 11ad1c29 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1c33 jae 0x11ad1ce4 */
  if (!C.cf) goto L_11ad1ce4;
  /* 11ad1c39 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ad1c3f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ad1c41 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 11ad1c49 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad1c4c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad1c4e je 0x11ad1c86 */
  if (C.zf) goto L_11ad1c86;
  /* 11ad1c50 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ad1c56 mov cl, byte ptr [eax + 0x11af97e1] */
  CL = (r8((uint32_t)(EAX + 0x11af97e1)));
  /* 11ad1c5c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 11ad1c5f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ad1c65 mov byte ptr [edx + 0x11af97e1], cl */
  w8((uint32_t)(EDX + 0x11af97e1), (CL));
  /* 11ad1c6b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ad1c71 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ad1c77 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 11ad1c7e mov byte ptr [eax + 0x11af96e0], dl */
  w8((uint32_t)(EAX + 0x11af96e0), (DL));
  /* 11ad1c84 jmp 0x11ad1cdf */
  goto L_11ad1cdf;
L_11ad1c86:;
  /* 11ad1c86 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ad1c8c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad1c8e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 11ad1c96 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad1c99 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad1c9b je 0x11ad1cd2 */
  if (C.zf) goto L_11ad1cd2;
  /* 11ad1c9d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ad1ca3 mov al, byte ptr [edx + 0x11af97e1] */
  AL = (r8((uint32_t)(EDX + 0x11af97e1)));
  /* 11ad1ca9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11ad1cab mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ad1cb1 mov byte ptr [ecx + 0x11af97e1], al */
  w8((uint32_t)(ECX + 0x11af97e1), (AL));
  /* 11ad1cb7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ad1cbd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ad1cc3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 11ad1cca mov byte ptr [edx + 0x11af96e0], cl */
  w8((uint32_t)(EDX + 0x11af96e0), (CL));
  /* 11ad1cd0 jmp 0x11ad1cdf */
  goto L_11ad1cdf;
L_11ad1cd2:;
  /* 11ad1cd2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ad1cd8 mov byte ptr [edx + 0x11af96e0], 0 */
  w8((uint32_t)(EDX + 0x11af96e0), (0x0u));
L_11ad1cdf:;
  /* 11ad1cdf jmp 0x11ad1c1a */
  goto L_11ad1c1a;
L_11ad1ce4:;
  /* 11ad1ce4 jmp 0x11ad1dae */
  goto L_11ad1dae;
L_11ad1ce9:;
  /* 11ad1ce9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11ad1cf3 jmp 0x11ad1d04 */
  goto L_11ad1d04;
L_11ad1cf5:;
  /* 11ad1cf5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ad1cfb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad1cfe mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_11ad1d04:;
  /* 11ad1d04 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1d0e jae 0x11ad1dae */
  if (!C.cf) goto L_11ad1dae;
  /* 11ad1d14 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1d1b jb 0x11ad1d58 */
  if (C.cf) goto L_11ad1d58;
  /* 11ad1d1d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1d24 ja 0x11ad1d58 */
  if ((!C.cf&&!C.zf)) goto L_11ad1d58;
  /* 11ad1d26 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ad1d2c mov dl, byte ptr [ecx + 0x11af97e1] */
  DL = (r8((uint32_t)(ECX + 0x11af97e1)));
  /* 11ad1d32 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11ad1d35 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ad1d3b mov byte ptr [eax + 0x11af97e1], dl */
  w8((uint32_t)(EAX + 0x11af97e1), (DL));
  /* 11ad1d41 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ad1d47 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad1d4a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ad1d50 mov byte ptr [edx + 0x11af96e0], cl */
  w8((uint32_t)(EDX + 0x11af96e0), (CL));
  /* 11ad1d56 jmp 0x11ad1da9 */
  goto L_11ad1da9;
L_11ad1d58:;
  /* 11ad1d58 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1d5f jb 0x11ad1d9c */
  if (C.cf) goto L_11ad1d9c;
  /* 11ad1d61 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1d68 ja 0x11ad1d9c */
  if ((!C.cf&&!C.zf)) goto L_11ad1d9c;
  /* 11ad1d6a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ad1d70 mov cl, byte ptr [eax + 0x11af97e1] */
  CL = (r8((uint32_t)(EAX + 0x11af97e1)));
  /* 11ad1d76 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11ad1d79 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ad1d7f mov byte ptr [edx + 0x11af97e1], cl */
  w8((uint32_t)(EDX + 0x11af97e1), (CL));
  /* 11ad1d85 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ad1d8b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad1d8e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ad1d94 mov byte ptr [ecx + 0x11af96e0], al */
  w8((uint32_t)(ECX + 0x11af96e0), (AL));
  /* 11ad1d9a jmp 0x11ad1da9 */
  goto L_11ad1da9;
L_11ad1d9c:;
  /* 11ad1d9c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ad1da2 mov byte ptr [edx + 0x11af96e0], 0 */
  w8((uint32_t)(EDX + 0x11af96e0), (0x0u));
L_11ad1da9:;
  /* 11ad1da9 jmp 0x11ad1cf5 */
  goto L_11ad1cf5;
L_11ad1dae:;
  /* 11ad1dae mov esp, ebp */
  ESP = (EBP);
  /* 11ad1db0 pop ebp */
  EBP = (pop32());
  /* 11ad1db1 ret  */
  ESPCHK(0x11ad1ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011dc0 @ 0x11ad1dc0 (23 bytes, 9 insns) */
void f_11ad1dc0(void) {
  FTRACE(0x11ad1dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad1dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad1dc1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad1dc3 cmp dword ptr [0x11af96dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af96dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1dca je 0x11ad1dd3 */
  if (C.zf) goto L_11ad1dd3;
  /* 11ad1dcc mov eax, dword ptr [0x11af9658] */
  EAX = (r32((uint32_t)(0x11af9658)));
  /* 11ad1dd1 jmp 0x11ad1dd5 */
  goto L_11ad1dd5;
L_11ad1dd3:;
  /* 11ad1dd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ad1dd5:;
  /* 11ad1dd5 pop ebp */
  EBP = (pop32());
  /* 11ad1dd6 ret  */
  ESPCHK(0x11ad1dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011de0 @ 0x11ad1de0 (34 bytes, 10 insns) */
void f_11ad1de0(void) {
  FTRACE(0x11ad1de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad1de0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad1de1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad1de3 cmp dword ptr [0x11afadd0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11afadd0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1dea jne 0x11ad1e00 */
  if (!C.zf) goto L_11ad1e00;
  /* 11ad1dec push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11ad1dee call 0x11ad1600 */
  push32(0x11ad1df3u); f_11ad1600();
  /* 11ad1df3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad1df6 mov dword ptr [0x11afadd0], 1 */
  w32((uint32_t)(0x11afadd0), (0x1u));
L_11ad1e00:;
  /* 11ad1e00 pop ebp */
  EBP = (pop32());
  /* 11ad1e01 ret  */
  ESPCHK(0x11ad1de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e10 @ 0x11ad1e10 (664 bytes, 259 insns) [15 switch table(s)] */
void f_11ad1e10(void) {
  FTRACE(0x11ad1e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad1e10 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad1e11 mov ebp, esp */
  EBP = (ESP);
  /* 11ad1e13 push edi */
  push32((uint32_t)(EDI));
  /* 11ad1e14 push esi */
  push32((uint32_t)(ESI));
  /* 11ad1e15 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad1e18 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad1e1b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad1e1e mov eax, ecx */
  EAX = (ECX);
  /* 11ad1e20 mov edx, ecx */
  EDX = (ECX);
  /* 11ad1e22 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad1e24 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1e26 jbe 0x11ad1e30 */
  if ((C.cf||C.zf)) goto L_11ad1e30;
  /* 11ad1e28 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1e2a jb 0x11ad1fa8 */
  if (C.cf) goto L_11ad1fa8;
L_11ad1e30:;
  /* 11ad1e30 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11ad1e36 jne 0x11ad1e4c */
  if (!C.zf) goto L_11ad1e4c;
  /* 11ad1e38 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ad1e3b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad1e3e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1e41 jb 0x11ad1e6c */
  if (C.cf) goto L_11ad1e6c;
  /* 11ad1e43 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ad1e45 jmp dword ptr [edx*4 + 0x11ad1f58] */
  switch (EDX) {
    case 0: goto L_11ad1f68;
    case 1: goto L_11ad1f70;
    case 2: goto L_11ad1f7c;
    case 3: goto L_11ad1f90;
    default: x86_unimpl("switch@0x11ad1e45 out of table"); return;
  }
L_11ad1e4c:;
  /* 11ad1e4c mov eax, edi */
  EAX = (EDI);
  /* 11ad1e4e mov edx, 3 */
  EDX = (0x3u);
  /* 11ad1e53 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad1e56 jb 0x11ad1e64 */
  if (C.cf) goto L_11ad1e64;
  /* 11ad1e58 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad1e5b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad1e5d jmp dword ptr [eax*4 + 0x11ad1e70] */
  switch (EAX) {
    case 1: goto L_11ad1e80;
    case 2: goto L_11ad1eac;
    case 3: goto L_11ad1ed0;
    default: x86_unimpl("switch@0x11ad1e5d out of table"); return;
  }
L_11ad1e64:;
  /* 11ad1e64 jmp dword ptr [ecx*4 + 0x11ad1f68] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11ad1f68)))); return;
  /* 11ad1e6b nop  */
  /* nop */
L_11ad1e6c:;
  /* 11ad1e6c jmp dword ptr [ecx*4 + 0x11ad1eec] */
  switch (ECX) {
    case 0: goto L_11ad1f4f;
    case 1: goto L_11ad1f3c;
    case 2: goto L_11ad1f34;
    case 3: goto L_11ad1f2c;
    case 4: goto L_11ad1f24;
    case 5: goto L_11ad1f1c;
    case 6: goto L_11ad1f14;
    case 7: goto L_11ad1f0c;
    default: x86_unimpl("switch@0x11ad1e6c out of table"); return;
  }
  /* 11ad1e73 nop  */
  /* nop */
L_11ad1e80:;
  /* 11ad1e80 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ad1e82 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ad1e84 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ad1e86 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ad1e89 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ad1e8c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ad1e8f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ad1e92 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ad1e95 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad1e98 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad1e9b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1e9e jb 0x11ad1e6c */
  if (C.cf) goto L_11ad1e6c;
  /* 11ad1ea0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ad1ea2 jmp dword ptr [edx*4 + 0x11ad1f58] */
  switch (EDX) {
    case 0: goto L_11ad1f68;
    case 1: goto L_11ad1f70;
    case 2: goto L_11ad1f7c;
    case 3: goto L_11ad1f90;
    default: x86_unimpl("switch@0x11ad1ea2 out of table"); return;
  }
  /* 11ad1ea9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ad1eac:;
  /* 11ad1eac and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ad1eae mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ad1eb0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ad1eb2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ad1eb5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ad1eb8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ad1ebb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad1ebe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad1ec1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1ec4 jb 0x11ad1e6c */
  if (C.cf) goto L_11ad1e6c;
  /* 11ad1ec6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ad1ec8 jmp dword ptr [edx*4 + 0x11ad1f58] */
  switch (EDX) {
    case 0: goto L_11ad1f68;
    case 1: goto L_11ad1f70;
    case 2: goto L_11ad1f7c;
    case 3: goto L_11ad1f90;
    default: x86_unimpl("switch@0x11ad1ec8 out of table"); return;
  }
  /* 11ad1ecf nop  */
  /* nop */
L_11ad1ed0:;
  /* 11ad1ed0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ad1ed2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ad1ed4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ad1ed6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ad1ed7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ad1eda inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ad1edb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1ede jb 0x11ad1e6c */
  if (C.cf) goto L_11ad1e6c;
  /* 11ad1ee0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ad1ee2 jmp dword ptr [edx*4 + 0x11ad1f58] */
  switch (EDX) {
    case 0: goto L_11ad1f68;
    case 1: goto L_11ad1f70;
    case 2: goto L_11ad1f7c;
    case 3: goto L_11ad1f90;
    default: x86_unimpl("switch@0x11ad1ee2 out of table"); return;
  }
  /* 11ad1ee9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ad1f0c:;
  /* 11ad1f0c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11ad1f10 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11ad1f14:;
  /* 11ad1f14 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11ad1f18 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11ad1f1c:;
  /* 11ad1f1c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11ad1f20 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11ad1f24:;
  /* 11ad1f24 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11ad1f28 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11ad1f2c:;
  /* 11ad1f2c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11ad1f30 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11ad1f34:;
  /* 11ad1f34 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11ad1f38 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11ad1f3c:;
  /* 11ad1f3c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11ad1f40 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11ad1f44 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11ad1f4b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad1f4d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11ad1f4f:;
  /* 11ad1f4f jmp dword ptr [edx*4 + 0x11ad1f58] */
  switch (EDX) {
    case 0: goto L_11ad1f68;
    case 1: goto L_11ad1f70;
    case 2: goto L_11ad1f7c;
    case 3: goto L_11ad1f90;
    default: x86_unimpl("switch@0x11ad1f4f out of table"); return;
  }
  /* 11ad1f56 mov edi, edi */
  EDI = (EDI);
L_11ad1f68:;
  /* 11ad1f68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad1f6b pop esi */
  ESI = (pop32());
  /* 11ad1f6c pop edi */
  EDI = (pop32());
  /* 11ad1f6d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ad1f6e ret  */
  ESPCHK(0x11ad1e10u, _esp0);
  ESP += 4; return;
  /* 11ad1f6f nop  */
  /* nop */
L_11ad1f70:;
  /* 11ad1f70 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ad1f72 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ad1f74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad1f77 pop esi */
  ESI = (pop32());
  /* 11ad1f78 pop edi */
  EDI = (pop32());
  /* 11ad1f79 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ad1f7a ret  */
  ESPCHK(0x11ad1e10u, _esp0);
  ESP += 4; return;
  /* 11ad1f7b nop  */
  /* nop */
L_11ad1f7c:;
  /* 11ad1f7c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ad1f7e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ad1f80 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ad1f83 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ad1f86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad1f89 pop esi */
  ESI = (pop32());
  /* 11ad1f8a pop edi */
  EDI = (pop32());
  /* 11ad1f8b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ad1f8c ret  */
  ESPCHK(0x11ad1e10u, _esp0);
  ESP += 4; return;
  /* 11ad1f8d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ad1f90:;
  /* 11ad1f90 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ad1f92 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ad1f94 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ad1f97 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ad1f9a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ad1f9d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ad1fa0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad1fa3 pop esi */
  ESI = (pop32());
  /* 11ad1fa4 pop edi */
  EDI = (pop32());
  /* 11ad1fa5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ad1fa6 ret  */
  ESPCHK(0x11ad1e10u, _esp0);
  ESP += 4; return;
  /* 11ad1fa7 nop  */
  /* nop */
L_11ad1fa8:;
  /* 11ad1fa8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11ad1fac lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11ad1fb0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11ad1fb6 jne 0x11ad1fdc */
  if (!C.zf) goto L_11ad1fdc;
  /* 11ad1fb8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ad1fbb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad1fbe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1fc1 jb 0x11ad1fd0 */
  if (C.cf) goto L_11ad1fd0;
  /* 11ad1fc3 std  */
  C.df=1;
  /* 11ad1fc4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ad1fc6 cld  */
  C.df=0;
  /* 11ad1fc7 jmp dword ptr [edx*4 + 0x11ad20f0] */
  switch (EDX) {
    case 0: goto L_11ad2100;
    case 1: goto L_11ad2108;
    case 2: goto L_11ad2118;
    case 3: goto L_11ad212c;
    default: x86_unimpl("switch@0x11ad1fc7 out of table"); return;
  }
  /* 11ad1fce mov edi, edi */
  EDI = (EDI);
L_11ad1fd0:;
  /* 11ad1fd0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ad1fd2 jmp dword ptr [ecx*4 + 0x11ad20a0] */
  switch (ECX) {
    case 0: goto L_11ad20e7;
    default: x86_unimpl("switch@0x11ad1fd2 out of table"); return;
  }
  /* 11ad1fd9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ad1fdc:;
  /* 11ad1fdc mov eax, edi */
  EAX = (EDI);
  /* 11ad1fde mov edx, 3 */
  EDX = (0x3u);
  /* 11ad1fe3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad1fe6 jb 0x11ad1ff4 */
  if (C.cf) goto L_11ad1ff4;
  /* 11ad1fe8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad1feb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad1fed jmp dword ptr [eax*4 + 0x11ad1ff8] */
  switch (EAX) {
    case 1: goto L_11ad2008;
    case 2: goto L_11ad2028;
    case 3: goto L_11ad2050;
    default: x86_unimpl("switch@0x11ad1fed out of table"); return;
  }
L_11ad1ff4:;
  /* 11ad1ff4 jmp dword ptr [ecx*4 + 0x11ad20f0] */
  switch (ECX) {
    case 0: goto L_11ad2100;
    case 1: goto L_11ad2108;
    case 2: goto L_11ad2118;
    case 3: goto L_11ad212c;
    default: x86_unimpl("switch@0x11ad1ff4 out of table"); return;
  }
  /* 11ad1ffb nop  */
  /* nop */
L_11ad2008:;
  /* 11ad2008 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ad200b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ad200d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ad2010 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11ad2011 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ad2014 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11ad2015 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2018 jb 0x11ad1fd0 */
  if (C.cf) goto L_11ad1fd0;
  /* 11ad201a std  */
  C.df=1;
  /* 11ad201b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ad201d cld  */
  C.df=0;
  /* 11ad201e jmp dword ptr [edx*4 + 0x11ad20f0] */
  switch (EDX) {
    case 0: goto L_11ad2100;
    case 1: goto L_11ad2108;
    case 2: goto L_11ad2118;
    case 3: goto L_11ad212c;
    default: x86_unimpl("switch@0x11ad201e out of table"); return;
  }
  /* 11ad2025 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ad2028:;
  /* 11ad2028 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ad202b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ad202d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ad2030 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ad2033 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ad2036 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ad2039 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad203c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad203f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2042 jb 0x11ad1fd0 */
  if (C.cf) goto L_11ad1fd0;
  /* 11ad2044 std  */
  C.df=1;
  /* 11ad2045 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ad2047 cld  */
  C.df=0;
  /* 11ad2048 jmp dword ptr [edx*4 + 0x11ad20f0] */
  switch (EDX) {
    case 0: goto L_11ad2100;
    case 1: goto L_11ad2108;
    case 2: goto L_11ad2118;
    case 3: goto L_11ad212c;
    default: x86_unimpl("switch@0x11ad2048 out of table"); return;
  }
  /* 11ad204f nop  */
  /* nop */
L_11ad2050:;
  /* 11ad2050 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ad2053 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ad2055 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ad2058 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ad205b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ad205e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ad2061 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ad2064 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ad2067 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad206a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad206d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2070 jb 0x11ad1fd0 */
  if (C.cf) goto L_11ad1fd0;
  /* 11ad2076 std  */
  C.df=1;
  /* 11ad2077 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ad2079 cld  */
  C.df=0;
  /* 11ad207a jmp dword ptr [edx*4 + 0x11ad20f0] */
  switch (EDX) {
    case 0: goto L_11ad2100;
    case 1: goto L_11ad2108;
    case 2: goto L_11ad2118;
    case 3: goto L_11ad212c;
    default: x86_unimpl("switch@0x11ad207a out of table"); return;
  }
  /* 11ad2081 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11ad2084 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 11ad2085 and byte ptr [ebp - 0x52df53ef], ch */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x52df53ef)))&(C.c.b.h); w8((uint32_t)(EBP + -0x52df53ef), (_r)); fl_logic(_r,8); }
  /* 11ad208b adc dword ptr [eax + 0x20bc11ad], esi */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x20bc11ad))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(EAX + 0x20bc11ad), (_r)); fl_add(_a,_b,_r,32); }
  /* 11ad2092 lodsd eax, dword ptr [esi] */
  EAX = r32(ESI); ESI+=(C.df?-4:4);
  /* 11ad2093 adc esp, eax */
  { uint32_t _a=(ESP),_b=(EAX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2095 and byte ptr [ebp - 0x52df33ef], ch */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x52df33ef)))&(C.c.b.h); w8((uint32_t)(EBP + -0x52df33ef), (_r)); fl_logic(_r,8); }
  /* 11ad209b adc esp, edx */
  { uint32_t _a=(ESP),_b=(EDX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad209e lodsd eax, dword ptr [esi] */
  EAX = r32(ESI); ESI+=(C.df?-4:4);
  /* 11ad20a4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11ad20a8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11ad20ac mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11ad20b0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11ad20b4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11ad20b8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11ad20bc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11ad20c0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11ad20c4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11ad20c8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11ad20cc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11ad20d0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11ad20d4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11ad20d8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11ad20dc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11ad20e3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad20e5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11ad20e7:;
  /* 11ad20e7 jmp dword ptr [edx*4 + 0x11ad20f0] */
  switch (EDX) {
    case 0: goto L_11ad2100;
    case 1: goto L_11ad2108;
    case 2: goto L_11ad2118;
    case 3: goto L_11ad212c;
    default: x86_unimpl("switch@0x11ad20e7 out of table"); return;
  }
  /* 11ad20ee mov edi, edi */
  EDI = (EDI);
L_11ad2100:;
  /* 11ad2100 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad2103 pop esi */
  ESI = (pop32());
  /* 11ad2104 pop edi */
  EDI = (pop32());
  /* 11ad2105 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ad2106 ret  */
  ESPCHK(0x11ad1e10u, _esp0);
  ESP += 4; return;
  /* 11ad2107 nop  */
  /* nop */
L_11ad2108:;
  /* 11ad2108 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ad210b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ad210e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad2111 pop esi */
  ESI = (pop32());
  /* 11ad2112 pop edi */
  EDI = (pop32());
  /* 11ad2113 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ad2114 ret  */
  ESPCHK(0x11ad1e10u, _esp0);
  ESP += 4; return;
  /* 11ad2115 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ad2118:;
  /* 11ad2118 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ad211b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ad211e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ad2121 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ad2124 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad2127 pop esi */
  ESI = (pop32());
  /* 11ad2128 pop edi */
  EDI = (pop32());
  /* 11ad2129 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ad212a ret  */
  ESPCHK(0x11ad1e10u, _esp0);
  ESP += 4; return;
  /* 11ad212b nop  */
  /* nop */
L_11ad212c:;
  /* 11ad212c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ad212f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ad2132 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ad2135 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ad2138 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ad213b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ad213e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad2141 pop esi */
  ESI = (pop32());
  /* 11ad2142 pop edi */
  EDI = (pop32());
  /* 11ad2143 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ad2144 ret  */
  ESPCHK(0x11ad1e10u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x11ad2150 (145 bytes, 42 insns) */
void f_11ad2150(void) {
  FTRACE(0x11ad2150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad2150 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad2151 mov ebp, esp */
  EBP = (ESP);
  /* 11ad2153 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad2154 call 0x11ad2200 */
  push32(0x11ad2159u); f_11ad2200();
  /* 11ad2159 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad215c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11ad215e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ad2165 jmp 0x11ad2170 */
  goto L_11ad2170;
L_11ad2167:;
  /* 11ad2167 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad216a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad216d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ad2170:;
  /* 11ad2170 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2174 jae 0x11ad219a */
  if (!C.cf) goto L_11ad219a;
  /* 11ad2176 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad2179 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad217c cmp ecx, dword ptr [eax*8 + 0x11af7310] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11af7310))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2183 jne 0x11ad2198 */
  if (!C.zf) goto L_11ad2198;
  /* 11ad2185 call 0x11ad21f0 */
  push32(0x11ad218au); f_11ad21f0();
  /* 11ad218a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad218d mov ecx, dword ptr [edx*8 + 0x11af7314] */
  ECX = (r32((uint32_t)(EDX*8 + 0x11af7314)));
  /* 11ad2194 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11ad2196 jmp 0x11ad21dd */
  goto L_11ad21dd;
L_11ad2198:;
  /* 11ad2198 jmp 0x11ad2167 */
  goto L_11ad2167;
L_11ad219a:;
  /* 11ad219a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad219e jb 0x11ad21b3 */
  if (C.cf) goto L_11ad21b3;
  /* 11ad21a0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad21a4 ja 0x11ad21b3 */
  if ((!C.cf&&!C.zf)) goto L_11ad21b3;
  /* 11ad21a6 call 0x11ad21f0 */
  push32(0x11ad21abu); f_11ad21f0();
  /* 11ad21ab mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 11ad21b1 jmp 0x11ad21dd */
  goto L_11ad21dd;
L_11ad21b3:;
  /* 11ad21b3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad21ba jb 0x11ad21d2 */
  if (C.cf) goto L_11ad21d2;
  /* 11ad21bc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad21c3 ja 0x11ad21d2 */
  if ((!C.cf&&!C.zf)) goto L_11ad21d2;
  /* 11ad21c5 call 0x11ad21f0 */
  push32(0x11ad21cau); f_11ad21f0();
  /* 11ad21ca mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 11ad21d0 jmp 0x11ad21dd */
  goto L_11ad21dd;
L_11ad21d2:;
  /* 11ad21d2 call 0x11ad21f0 */
  push32(0x11ad21d7u); f_11ad21f0();
  /* 11ad21d7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_11ad21dd:;
  /* 11ad21dd mov esp, ebp */
  ESP = (EBP);
  /* 11ad21df pop ebp */
  EBP = (pop32());
  /* 11ad21e0 ret  */
  ESPCHK(0x11ad2150u, _esp0);
  ESP += 4; return;
}

/* FUN_100121f0 @ 0x11ad21f0 (13 bytes, 6 insns) */
void f_11ad21f0(void) {
  FTRACE(0x11ad21f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad21f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad21f1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad21f3 call 0x11ac71c0 */
  push32(0x11ad21f8u); f_11ac71c0();
  /* 11ad21f8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad21fb pop ebp */
  EBP = (pop32());
  /* 11ad21fc ret  */
  ESPCHK(0x11ad21f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012200 @ 0x11ad2200 (13 bytes, 6 insns) */
void f_11ad2200(void) {
  FTRACE(0x11ad2200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad2200 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad2201 mov ebp, esp */
  EBP = (ESP);
  /* 11ad2203 call 0x11ac71c0 */
  push32(0x11ad2208u); f_11ac71c0();
  /* 11ad2208 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad220b pop ebp */
  EBP = (pop32());
  /* 11ad220c ret  */
  ESPCHK(0x11ad2200u, _esp0);
  ESP += 4; return;
}

/* FUN_10012210 @ 0x11ad2210 (482 bytes, 138 insns) */
void f_11ad2210(void) {
  FTRACE(0x11ad2210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad2210 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad2211 mov ebp, esp */
  EBP = (ESP);
  /* 11ad2213 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad2216 push esi */
  push32((uint32_t)(ESI));
  /* 11ad2217 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 11ad221e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11ad2220 call 0x11acd060 */
  push32(0x11ad2225u); f_11acd060();
  /* 11ad2225 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2228 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ad222f jmp 0x11ad223a */
  goto L_11ad223a;
L_11ad2231:;
  /* 11ad2231 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad2234 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2237 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11ad223a:;
  /* 11ad223a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad223e jge 0x11ad23e0 */
  if ((C.sf==C.of)) goto L_11ad23e0;
  /* 11ad2244 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad2247 cmp dword ptr [ecx*4 + 0x11afac80], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11afac80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad224f je 0x11ad2346 */
  if (C.zf) goto L_11ad2346;
  /* 11ad2255 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad2258 mov eax, dword ptr [edx*4 + 0x11afac80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11afac80)));
  /* 11ad225f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad2262 jmp 0x11ad226d */
  goto L_11ad226d;
L_11ad2264:;
  /* 11ad2264 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad2267 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad226a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ad226d:;
  /* 11ad226d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad2270 mov eax, dword ptr [edx*4 + 0x11afac80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11afac80)));
  /* 11ad2277 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad227c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad227f jae 0x11ad2336 */
  if (!C.cf) goto L_11ad2336;
  /* 11ad2285 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad2288 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11ad228c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad228f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad2291 jne 0x11ad2331 */
  if (!C.zf) goto L_11ad2331;
  /* 11ad2297 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad229a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad229e jne 0x11ad22d9 */
  if (!C.zf) goto L_11ad22d9;
  /* 11ad22a0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11ad22a2 call 0x11acd060 */
  push32(0x11ad22a7u); f_11acd060();
  /* 11ad22a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad22aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad22ad cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad22b1 jne 0x11ad22cf */
  if (!C.zf) goto L_11ad22cf;
  /* 11ad22b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad22b6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad22b9 push edx */
  push32((uint32_t)(EDX));
  /* 11ad22ba call dword ptr [0x11afb354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb354))), 0x11ad22c0u);
  /* 11ad22c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad22c3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ad22c6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad22c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad22cc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11ad22cf:;
  /* 11ad22cf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11ad22d1 call 0x11acd100 */
  push32(0x11ad22d6u); f_11acd100();
  /* 11ad22d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ad22d9:;
  /* 11ad22d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad22dc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad22df push eax */
  push32((uint32_t)(EAX));
  /* 11ad22e0 call dword ptr [0x11afb35c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb35c))), 0x11ad22e6u);
  /* 11ad22e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad22e9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11ad22ed and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad22f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad22f2 je 0x11ad2306 */
  if (C.zf) goto L_11ad2306;
  /* 11ad22f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad22f7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad22fa push eax */
  push32((uint32_t)(EAX));
  /* 11ad22fb call dword ptr [0x11afb34c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb34c))), 0x11ad2301u);
  /* 11ad2301 jmp 0x11ad2264 */
  goto L_11ad2264;
L_11ad2306:;
  /* 11ad2306 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad2309 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11ad230f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad2312 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ad2315 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad2318 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad231b sub eax, dword ptr [edx*4 + 0x11afac80] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x11afac80))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad2322 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ad2323 mov esi, 0x24 */
  ESI = (0x24u);
  /* 11ad2328 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ad232a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad232c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ad232f jmp 0x11ad2336 */
  goto L_11ad2336;
L_11ad2331:;
  /* 11ad2331 jmp 0x11ad2264 */
  goto L_11ad2264;
L_11ad2336:;
  /* 11ad2336 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad233a je 0x11ad2341 */
  if (C.zf) goto L_11ad2341;
  /* 11ad233c jmp 0x11ad23e0 */
  goto L_11ad23e0;
L_11ad2341:;
  /* 11ad2341 jmp 0x11ad23db */
  goto L_11ad23db;
L_11ad2346:;
  /* 11ad2346 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11ad2348 push 0x11af4140 */
  push32((uint32_t)(0x11af4140u));
  /* 11ad234d push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad234f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11ad2354 call 0x11ac9660 */
  push32(0x11ad2359u); f_11ac9660();
  /* 11ad2359 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad235c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad235f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2363 je 0x11ad23d9 */
  if (C.zf) goto L_11ad23d9;
  /* 11ad2365 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad2368 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad236b mov dword ptr [eax*4 + 0x11afac80], ecx */
  w32((uint32_t)(EAX*4 + 0x11afac80), (ECX));
  /* 11ad2372 mov edx, dword ptr [0x11afadbc] */
  EDX = (r32((uint32_t)(0x11afadbc)));
  /* 11ad2378 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad237b mov dword ptr [0x11afadbc], edx */
  w32((uint32_t)(0x11afadbc), (EDX));
  /* 11ad2381 jmp 0x11ad238c */
  goto L_11ad238c;
L_11ad2383:;
  /* 11ad2383 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad2386 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2389 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ad238c:;
  /* 11ad238c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad238f mov edx, dword ptr [ecx*4 + 0x11afac80] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11afac80)));
  /* 11ad2396 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad239c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad239f jae 0x11ad23c4 */
  if (!C.cf) goto L_11ad23c4;
  /* 11ad23a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad23a4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11ad23a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad23ab mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11ad23b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad23b4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11ad23b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad23bb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11ad23c2 jmp 0x11ad2383 */
  goto L_11ad2383;
L_11ad23c4:;
  /* 11ad23c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad23c7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ad23ca mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ad23cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad23d0 push edx */
  push32((uint32_t)(EDX));
  /* 11ad23d1 call 0x11ad2720 */
  push32(0x11ad23d6u); f_11ad2720();
  /* 11ad23d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ad23d9:;
  /* 11ad23d9 jmp 0x11ad23e0 */
  goto L_11ad23e0;
L_11ad23db:;
  /* 11ad23db jmp 0x11ad2231 */
  goto L_11ad2231;
L_11ad23e0:;
  /* 11ad23e0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11ad23e2 call 0x11acd100 */
  push32(0x11ad23e7u); f_11acd100();
  /* 11ad23e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad23ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad23ed pop esi */
  ESI = (pop32());
  /* 11ad23ee mov esp, ebp */
  ESP = (EBP);
  /* 11ad23f0 pop ebp */
  EBP = (pop32());
  /* 11ad23f1 ret  */
  ESPCHK(0x11ad2210u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x11ad2400 (183 bytes, 57 insns) */
void f_11ad2400(void) {
  FTRACE(0x11ad2400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad2400 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad2401 mov ebp, esp */
  EBP = (ESP);
  /* 11ad2403 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad2404 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad2407 cmp eax, dword ptr [0x11afadbc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11afadbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad240d jae 0x11ad249a */
  if (!C.cf) goto L_11ad249a;
  /* 11ad2413 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad2416 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ad2419 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad241c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ad241f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad2422 mov eax, dword ptr [ecx*4 + 0x11afac80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11afac80)));
  /* 11ad2429 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad242d jne 0x11ad249a */
  if (!C.zf) goto L_11ad249a;
  /* 11ad242f cmp dword ptr [0x11af92bc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11af92bc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2436 jne 0x11ad247a */
  if (!C.zf) goto L_11ad247a;
  /* 11ad2438 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad243b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ad243e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2442 je 0x11ad2452 */
  if (C.zf) goto L_11ad2452;
  /* 11ad2444 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2448 je 0x11ad2460 */
  if (C.zf) goto L_11ad2460;
  /* 11ad244a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad244e je 0x11ad246e */
  if (C.zf) goto L_11ad246e;
  /* 11ad2450 jmp 0x11ad247a */
  goto L_11ad247a;
L_11ad2452:;
  /* 11ad2452 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad2455 push edx */
  push32((uint32_t)(EDX));
  /* 11ad2456 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11ad2458 call dword ptr [0x11afb324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb324))), 0x11ad245eu);
  /* 11ad245e jmp 0x11ad247a */
  goto L_11ad247a;
L_11ad2460:;
  /* 11ad2460 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad2463 push eax */
  push32((uint32_t)(EAX));
  /* 11ad2464 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11ad2466 call dword ptr [0x11afb324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb324))), 0x11ad246cu);
  /* 11ad246c jmp 0x11ad247a */
  goto L_11ad247a;
L_11ad246e:;
  /* 11ad246e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad2471 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad2472 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11ad2474 call dword ptr [0x11afb324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb324))), 0x11ad247au);
L_11ad247a:;
  /* 11ad247a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad247d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11ad2480 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad2483 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad2486 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad2489 mov ecx, dword ptr [edx*4 + 0x11afac80] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11afac80)));
  /* 11ad2490 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad2493 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 11ad2496 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad2498 jmp 0x11ad24b3 */
  goto L_11ad24b3;
L_11ad249a:;
  /* 11ad249a call 0x11ad21f0 */
  push32(0x11ad249fu); f_11ad21f0();
  /* 11ad249f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11ad24a5 call 0x11ad2200 */
  push32(0x11ad24aau); f_11ad2200();
  /* 11ad24aa mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11ad24b0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11ad24b3:;
  /* 11ad24b3 mov esp, ebp */
  ESP = (EBP);
  /* 11ad24b5 pop ebp */
  EBP = (pop32());
  /* 11ad24b6 ret  */
  ESPCHK(0x11ad2400u, _esp0);
  ESP += 4; return;
}

/* FUN_100124c0 @ 0x11ad24c0 (216 bytes, 63 insns) */
void f_11ad24c0(void) {
  FTRACE(0x11ad24c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad24c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad24c1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad24c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad24c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad24c7 cmp eax, dword ptr [0x11afadbc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11afadbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad24cd jae 0x11ad257b */
  if (!C.cf) goto L_11ad257b;
  /* 11ad24d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad24d6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ad24d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad24dc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ad24df imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad24e2 mov eax, dword ptr [ecx*4 + 0x11afac80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11afac80)));
  /* 11ad24e9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11ad24ee and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad24f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad24f3 je 0x11ad257b */
  if (C.zf) goto L_11ad257b;
  /* 11ad24f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad24fc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11ad24ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad2502 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad2505 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad2508 mov ecx, dword ptr [edx*4 + 0x11afac80] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11afac80)));
  /* 11ad250f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2513 je 0x11ad257b */
  if (C.zf) goto L_11ad257b;
  /* 11ad2515 cmp dword ptr [0x11af92bc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11af92bc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad251c jne 0x11ad255a */
  if (!C.zf) goto L_11ad255a;
  /* 11ad251e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad2521 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ad2524 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2528 je 0x11ad2538 */
  if (C.zf) goto L_11ad2538;
  /* 11ad252a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad252e je 0x11ad2544 */
  if (C.zf) goto L_11ad2544;
  /* 11ad2530 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2534 je 0x11ad2550 */
  if (C.zf) goto L_11ad2550;
  /* 11ad2536 jmp 0x11ad255a */
  goto L_11ad255a;
L_11ad2538:;
  /* 11ad2538 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad253a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11ad253c call dword ptr [0x11afb324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb324))), 0x11ad2542u);
  /* 11ad2542 jmp 0x11ad255a */
  goto L_11ad255a;
L_11ad2544:;
  /* 11ad2544 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad2546 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11ad2548 call dword ptr [0x11afb324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb324))), 0x11ad254eu);
  /* 11ad254e jmp 0x11ad255a */
  goto L_11ad255a;
L_11ad2550:;
  /* 11ad2550 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad2552 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11ad2554 call dword ptr [0x11afb324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb324))), 0x11ad255au);
L_11ad255a:;
  /* 11ad255a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad255d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ad2560 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad2563 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11ad2566 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad2569 mov edx, dword ptr [eax*4 + 0x11afac80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11afac80)));
  /* 11ad2570 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 11ad2577 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad2579 jmp 0x11ad2594 */
  goto L_11ad2594;
L_11ad257b:;
  /* 11ad257b call 0x11ad21f0 */
  push32(0x11ad2580u); f_11ad21f0();
  /* 11ad2580 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11ad2586 call 0x11ad2200 */
  push32(0x11ad258bu); f_11ad2200();
  /* 11ad258b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11ad2591 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11ad2594:;
  /* 11ad2594 mov esp, ebp */
  ESP = (EBP);
  /* 11ad2596 pop ebp */
  EBP = (pop32());
  /* 11ad2597 ret  */
  ESPCHK(0x11ad24c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100125a0 @ 0x11ad25a0 (102 bytes, 30 insns) */
void f_11ad25a0(void) {
  FTRACE(0x11ad25a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad25a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad25a1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad25a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad25a6 cmp eax, dword ptr [0x11afadbc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11afadbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad25ac jae 0x11ad25eb */
  if (!C.cf) goto L_11ad25eb;
  /* 11ad25ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad25b1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ad25b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad25b7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ad25ba imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad25bd mov eax, dword ptr [ecx*4 + 0x11afac80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11afac80)));
  /* 11ad25c4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11ad25c9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad25cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad25ce je 0x11ad25eb */
  if (C.zf) goto L_11ad25eb;
  /* 11ad25d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad25d3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11ad25d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad25d9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad25dc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad25df mov ecx, dword ptr [edx*4 + 0x11afac80] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11afac80)));
  /* 11ad25e6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 11ad25e9 jmp 0x11ad2604 */
  goto L_11ad2604;
L_11ad25eb:;
  /* 11ad25eb call 0x11ad21f0 */
  push32(0x11ad25f0u); f_11ad21f0();
  /* 11ad25f0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11ad25f6 call 0x11ad2200 */
  push32(0x11ad25fbu); f_11ad2200();
  /* 11ad25fb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11ad2601 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11ad2604:;
  /* 11ad2604 pop ebp */
  EBP = (pop32());
  /* 11ad2605 ret  */
  ESPCHK(0x11ad25a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012610 @ 0x11ad2610 (260 bytes, 83 insns) */
void f_11ad2610(void) {
  FTRACE(0x11ad2610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad2610 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad2611 mov ebp, esp */
  EBP = (ESP);
  /* 11ad2613 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad2616 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ad261a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad261d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad2620 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad2622 je 0x11ad262d */
  if (C.zf) goto L_11ad262d;
  /* 11ad2624 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11ad2627 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11ad262a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_11ad262d:;
  /* 11ad262d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad2630 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad2636 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad2638 je 0x11ad2642 */
  if (C.zf) goto L_11ad2642;
  /* 11ad263a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11ad263d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 11ad263f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_11ad2642:;
  /* 11ad2642 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad2645 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad264b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad264d je 0x11ad2658 */
  if (C.zf) goto L_11ad2658;
  /* 11ad264f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11ad2652 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11ad2655 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11ad2658:;
  /* 11ad2658 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad265b push eax */
  push32((uint32_t)(EAX));
  /* 11ad265c call dword ptr [0x11afb3dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3dc))), 0x11ad2662u);
  /* 11ad2662 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad2665 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2669 jne 0x11ad2682 */
  if (!C.zf) goto L_11ad2682;
  /* 11ad266b call dword ptr [0x11afb3c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3c4))), 0x11ad2671u);
  /* 11ad2671 push eax */
  push32((uint32_t)(EAX));
  /* 11ad2672 call 0x11ad2150 */
  push32(0x11ad2677u); f_11ad2150();
  /* 11ad2677 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad267a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad267d jmp 0x11ad2710 */
  goto L_11ad2710;
L_11ad2682:;
  /* 11ad2682 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2686 jne 0x11ad2693 */
  if (!C.zf) goto L_11ad2693;
  /* 11ad2688 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11ad268b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11ad268e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11ad2691 jmp 0x11ad26a2 */
  goto L_11ad26a2;
L_11ad2693:;
  /* 11ad2693 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2697 jne 0x11ad26a2 */
  if (!C.zf) goto L_11ad26a2;
  /* 11ad2699 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11ad269c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11ad269f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11ad26a2:;
  /* 11ad26a2 call 0x11ad2210 */
  push32(0x11ad26a7u); f_11ad2210();
  /* 11ad26a7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ad26aa cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad26ae jne 0x11ad26cb */
  if (!C.zf) goto L_11ad26cb;
  /* 11ad26b0 call 0x11ad21f0 */
  push32(0x11ad26b5u); f_11ad21f0();
  /* 11ad26b5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 11ad26bb call 0x11ad2200 */
  push32(0x11ad26c0u); f_11ad2200();
  /* 11ad26c0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11ad26c6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad26c9 jmp 0x11ad2710 */
  goto L_11ad2710;
L_11ad26cb:;
  /* 11ad26cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad26ce push eax */
  push32((uint32_t)(EAX));
  /* 11ad26cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad26d2 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad26d3 call 0x11ad2400 */
  push32(0x11ad26d8u); f_11ad2400();
  /* 11ad26d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad26db mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11ad26de or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 11ad26e1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 11ad26e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad26e7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ad26ea mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad26ed and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11ad26f0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad26f3 mov edx, dword ptr [eax*4 + 0x11afac80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11afac80)));
  /* 11ad26fa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11ad26fd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 11ad2701 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad2704 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad2705 call 0x11ad27b0 */
  push32(0x11ad270au); f_11ad27b0();
  /* 11ad270a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad270d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11ad2710:;
  /* 11ad2710 mov esp, ebp */
  ESP = (EBP);
  /* 11ad2712 pop ebp */
  EBP = (pop32());
  /* 11ad2713 ret  */
  ESPCHK(0x11ad2610u, _esp0);
  ESP += 4; return;
}

/* FUN_10012720 @ 0x11ad2720 (134 bytes, 44 insns) */
void f_11ad2720(void) {
  FTRACE(0x11ad2720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad2720 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad2721 mov ebp, esp */
  EBP = (ESP);
  /* 11ad2723 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad2724 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad2727 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ad272a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad272d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11ad2730 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad2733 mov edx, dword ptr [eax*4 + 0x11afac80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11afac80)));
  /* 11ad273a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad273c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ad273f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad2742 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2746 jne 0x11ad2781 */
  if (!C.zf) goto L_11ad2781;
  /* 11ad2748 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11ad274a call 0x11acd060 */
  push32(0x11ad274fu); f_11acd060();
  /* 11ad274f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2752 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad2755 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2759 jne 0x11ad2777 */
  if (!C.zf) goto L_11ad2777;
  /* 11ad275b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad275e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2761 push edx */
  push32((uint32_t)(EDX));
  /* 11ad2762 call dword ptr [0x11afb354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb354))), 0x11ad2768u);
  /* 11ad2768 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad276b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ad276e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2771 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad2774 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11ad2777:;
  /* 11ad2777 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11ad2779 call 0x11acd100 */
  push32(0x11ad277eu); f_11acd100();
  /* 11ad277e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ad2781:;
  /* 11ad2781 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad2784 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ad2787 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad278a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11ad278d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad2790 mov edx, dword ptr [eax*4 + 0x11afac80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11afac80)));
  /* 11ad2797 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 11ad279b push eax */
  push32((uint32_t)(EAX));
  /* 11ad279c call dword ptr [0x11afb35c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb35c))), 0x11ad27a2u);
  /* 11ad27a2 mov esp, ebp */
  ESP = (EBP);
  /* 11ad27a4 pop ebp */
  EBP = (pop32());
  /* 11ad27a5 ret  */
  ESPCHK(0x11ad2720u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x11ad27b0 (38 bytes, 13 insns) */
void f_11ad27b0(void) {
  FTRACE(0x11ad27b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad27b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad27b1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad27b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad27b6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ad27b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad27bc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11ad27bf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad27c2 mov edx, dword ptr [eax*4 + 0x11afac80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11afac80)));
  /* 11ad27c9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 11ad27cd push eax */
  push32((uint32_t)(EAX));
  /* 11ad27ce call dword ptr [0x11afb34c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb34c))), 0x11ad27d4u);
  /* 11ad27d4 pop ebp */
  EBP = (pop32());
  /* 11ad27d5 ret  */
  ESPCHK(0x11ad27b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100127e0 @ 0x11ad27e0 (218 bytes, 63 insns) */
void f_11ad27e0(void) {
  FTRACE(0x11ad27e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad27e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad27e1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad27e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad27e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ad27ed push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad27ef call 0x11acd060 */
  push32(0x11ad27f4u); f_11acd060();
  /* 11ad27f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad27f7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 11ad27fe jmp 0x11ad2809 */
  goto L_11ad2809;
L_11ad2800:;
  /* 11ad2800 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad2803 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2806 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11ad2809:;
  /* 11ad2809 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad280c cmp ecx, dword ptr [0x11afac60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11afac60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2812 jge 0x11ad28a9 */
  if ((C.sf==C.of)) goto L_11ad28a9;
  /* 11ad2818 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad281b mov eax, dword ptr [0x11af990c] */
  EAX = (r32((uint32_t)(0x11af990c)));
  /* 11ad2820 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2824 je 0x11ad28a4 */
  if (C.zf) goto L_11ad28a4;
  /* 11ad2826 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad2829 mov edx, dword ptr [0x11af990c] */
  EDX = (r32((uint32_t)(0x11af990c)));
  /* 11ad282f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11ad2832 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11ad2835 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad283b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad283d je 0x11ad2861 */
  if (C.zf) goto L_11ad2861;
  /* 11ad283f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad2842 mov eax, dword ptr [0x11af990c] */
  EAX = (r32((uint32_t)(0x11af990c)));
  /* 11ad2847 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11ad284a push ecx */
  push32((uint32_t)(ECX));
  /* 11ad284b call 0x11ad5be0 */
  push32(0x11ad2850u); f_11ad5be0();
  /* 11ad2850 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2853 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2856 je 0x11ad2861 */
  if (C.zf) goto L_11ad2861;
  /* 11ad2858 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad285b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad285e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ad2861:;
  /* 11ad2861 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2865 jl 0x11ad28a4 */
  if ((C.sf!=C.of)) goto L_11ad28a4;
  /* 11ad2867 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad286a mov ecx, dword ptr [0x11af990c] */
  ECX = (r32((uint32_t)(0x11af990c)));
  /* 11ad2870 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11ad2873 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2876 push edx */
  push32((uint32_t)(EDX));
  /* 11ad2877 call dword ptr [0x11afb3e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3e4))), 0x11ad287du);
  /* 11ad287d push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad287f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad2882 mov ecx, dword ptr [0x11af990c] */
  ECX = (r32((uint32_t)(0x11af990c)));
  /* 11ad2888 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11ad288b push edx */
  push32((uint32_t)(EDX));
  /* 11ad288c call 0x11aca0f0 */
  push32(0x11ad2891u); f_11aca0f0();
  /* 11ad2891 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2894 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad2897 mov ecx, dword ptr [0x11af990c] */
  ECX = (r32((uint32_t)(0x11af990c)));
  /* 11ad289d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_11ad28a4:;
  /* 11ad28a4 jmp 0x11ad2800 */
  goto L_11ad2800;
L_11ad28a9:;
  /* 11ad28a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad28ab call 0x11acd100 */
  push32(0x11ad28b0u); f_11acd100();
  /* 11ad28b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad28b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad28b6 mov esp, ebp */
  ESP = (EBP);
  /* 11ad28b8 pop ebp */
  EBP = (pop32());
  /* 11ad28b9 ret  */
  ESPCHK(0x11ad27e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100128c0 @ 0x11ad28c0 (68 bytes, 26 insns) */
void f_11ad28c0(void) {
  FTRACE(0x11ad28c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad28c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad28c1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad28c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad28c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad28c8 jne 0x11ad28d6 */
  if (!C.zf) goto L_11ad28d6;
  /* 11ad28ca push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad28cc call 0x11ad2a30 */
  push32(0x11ad28d1u); f_11ad2a30();
  /* 11ad28d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad28d4 jmp 0x11ad2900 */
  goto L_11ad2900;
L_11ad28d6:;
  /* 11ad28d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad28d9 push eax */
  push32((uint32_t)(EAX));
  /* 11ad28da call 0x11acda20 */
  push32(0x11ad28dfu); f_11acda20();
  /* 11ad28df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad28e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad28e5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad28e6 call 0x11ad2910 */
  push32(0x11ad28ebu); f_11ad2910();
  /* 11ad28eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad28ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad28f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad28f4 push edx */
  push32((uint32_t)(EDX));
  /* 11ad28f5 call 0x11acda90 */
  push32(0x11ad28fau); f_11acda90();
  /* 11ad28fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad28fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11ad2900:;
  /* 11ad2900 mov esp, ebp */
  ESP = (EBP);
  /* 11ad2902 pop ebp */
  EBP = (pop32());
  /* 11ad2903 ret  */
  ESPCHK(0x11ad28c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012910 @ 0x11ad2910 (65 bytes, 26 insns) */
void f_11ad2910(void) {
  FTRACE(0x11ad2910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad2910 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad2911 mov ebp, esp */
  EBP = (ESP);
  /* 11ad2913 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad2916 push eax */
  push32((uint32_t)(EAX));
  /* 11ad2917 call 0x11ad2960 */
  push32(0x11ad291cu); f_11ad2960();
  /* 11ad291c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad291f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad2921 je 0x11ad2928 */
  if (C.zf) goto L_11ad2928;
  /* 11ad2923 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad2926 jmp 0x11ad294f */
  goto L_11ad294f;
L_11ad2928:;
  /* 11ad2928 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad292b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ad292e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad2934 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad2936 je 0x11ad294d */
  if (C.zf) goto L_11ad294d;
  /* 11ad2938 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad293b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ad293e push ecx */
  push32((uint32_t)(ECX));
  /* 11ad293f call 0x11ad5d30 */
  push32(0x11ad2944u); f_11ad5d30();
  /* 11ad2944 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2947 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ad2949 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad294b jmp 0x11ad294f */
  goto L_11ad294f;
L_11ad294d:;
  /* 11ad294d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ad294f:;
  /* 11ad294f pop ebp */
  EBP = (pop32());
  /* 11ad2950 ret  */
  ESPCHK(0x11ad2910u, _esp0);
  ESP += 4; return;
}

/* FUN_10012960 @ 0x11ad2960 (183 bytes, 62 insns) */
void f_11ad2960(void) {
  FTRACE(0x11ad2960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad2960 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad2961 mov ebp, esp */
  EBP = (ESP);
  /* 11ad2963 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad2966 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ad296d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad2970 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ad2973 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad2976 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ad2979 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad297c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad297f jne 0x11ad29fb */
  if (!C.zf) goto L_11ad29fb;
  /* 11ad2981 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad2984 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11ad2987 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad298d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad298f je 0x11ad29fb */
  if (C.zf) goto L_11ad29fb;
  /* 11ad2991 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad2994 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad2997 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11ad2999 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad299c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad299f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad29a3 jle 0x11ad29fb */
  if ((C.zf||C.sf!=C.of)) goto L_11ad29fb;
  /* 11ad29a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad29a8 push edx */
  push32((uint32_t)(EDX));
  /* 11ad29a9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad29ac mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ad29af push ecx */
  push32((uint32_t)(ECX));
  /* 11ad29b0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad29b3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11ad29b6 push eax */
  push32((uint32_t)(EAX));
  /* 11ad29b7 call 0x11acd4b0 */
  push32(0x11ad29bcu); f_11acd4b0();
  /* 11ad29bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad29bf cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad29c2 jne 0x11ad29e5 */
  if (!C.zf) goto L_11ad29e5;
  /* 11ad29c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad29c7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ad29ca and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad29d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad29d2 je 0x11ad29e3 */
  if (C.zf) goto L_11ad29e3;
  /* 11ad29d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad29d7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11ad29da and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 11ad29dd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad29e0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_11ad29e3:;
  /* 11ad29e3 jmp 0x11ad29fb */
  goto L_11ad29fb;
L_11ad29e5:;
  /* 11ad29e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad29e8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11ad29eb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad29ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad29f1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11ad29f4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11ad29fb:;
  /* 11ad29fb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad29fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad2a01 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ad2a04 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ad2a06 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad2a09 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11ad2a10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad2a13 mov esp, ebp */
  ESP = (EBP);
  /* 11ad2a15 pop ebp */
  EBP = (pop32());
  /* 11ad2a16 ret  */
  ESPCHK(0x11ad2960u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a20 @ 0x11ad2a20 (15 bytes, 7 insns) */
void f_11ad2a20(void) {
  FTRACE(0x11ad2a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad2a20 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad2a21 mov ebp, esp */
  EBP = (ESP);
  /* 11ad2a23 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad2a25 call 0x11ad2a30 */
  push32(0x11ad2a2au); f_11ad2a30();
  /* 11ad2a2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2a2d pop ebp */
  EBP = (pop32());
  /* 11ad2a2e ret  */
  ESPCHK(0x11ad2a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a30 @ 0x11ad2a30 (319 bytes, 94 insns) */
void f_11ad2a30(void) {
  FTRACE(0x11ad2a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad2a30 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad2a31 mov ebp, esp */
  EBP = (ESP);
  /* 11ad2a33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad2a36 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ad2a3d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ad2a44 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad2a46 call 0x11acd060 */
  push32(0x11ad2a4bu); f_11acd060();
  /* 11ad2a4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2a4e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ad2a55 jmp 0x11ad2a60 */
  goto L_11ad2a60;
L_11ad2a57:;
  /* 11ad2a57 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad2a5a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2a5d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11ad2a60:;
  /* 11ad2a60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad2a63 cmp ecx, dword ptr [0x11afac60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11afac60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2a69 jge 0x11ad2b53 */
  if ((C.sf==C.of)) goto L_11ad2b53;
  /* 11ad2a6f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad2a72 mov eax, dword ptr [0x11af990c] */
  EAX = (r32((uint32_t)(0x11af990c)));
  /* 11ad2a77 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2a7b je 0x11ad2b4e */
  if (C.zf) goto L_11ad2b4e;
  /* 11ad2a81 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad2a84 mov edx, dword ptr [0x11af990c] */
  EDX = (r32((uint32_t)(0x11af990c)));
  /* 11ad2a8a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11ad2a8d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11ad2a90 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad2a96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad2a98 je 0x11ad2b4e */
  if (C.zf) goto L_11ad2b4e;
  /* 11ad2a9e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad2aa1 mov eax, dword ptr [0x11af990c] */
  EAX = (r32((uint32_t)(0x11af990c)));
  /* 11ad2aa6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11ad2aa9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad2aaa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad2aad push edx */
  push32((uint32_t)(EDX));
  /* 11ad2aae call 0x11acda60 */
  push32(0x11ad2ab3u); f_11acda60();
  /* 11ad2ab3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2ab6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad2ab9 mov ecx, dword ptr [0x11af990c] */
  ECX = (r32((uint32_t)(0x11af990c)));
  /* 11ad2abf mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11ad2ac2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11ad2ac5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad2aca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad2acc je 0x11ad2b35 */
  if (C.zf) goto L_11ad2b35;
  /* 11ad2ace cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2ad2 jne 0x11ad2af9 */
  if (!C.zf) goto L_11ad2af9;
  /* 11ad2ad4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad2ad7 mov edx, dword ptr [0x11af990c] */
  EDX = (r32((uint32_t)(0x11af990c)));
  /* 11ad2add mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11ad2ae0 push eax */
  push32((uint32_t)(EAX));
  /* 11ad2ae1 call 0x11ad2910 */
  push32(0x11ad2ae6u); f_11ad2910();
  /* 11ad2ae6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2ae9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2aec je 0x11ad2af7 */
  if (C.zf) goto L_11ad2af7;
  /* 11ad2aee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad2af1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2af4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ad2af7:;
  /* 11ad2af7 jmp 0x11ad2b35 */
  goto L_11ad2b35;
L_11ad2af9:;
  /* 11ad2af9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2afd jne 0x11ad2b35 */
  if (!C.zf) goto L_11ad2b35;
  /* 11ad2aff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad2b02 mov eax, dword ptr [0x11af990c] */
  EAX = (r32((uint32_t)(0x11af990c)));
  /* 11ad2b07 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11ad2b0a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ad2b0d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad2b10 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad2b12 je 0x11ad2b35 */
  if (C.zf) goto L_11ad2b35;
  /* 11ad2b14 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad2b17 mov ecx, dword ptr [0x11af990c] */
  ECX = (r32((uint32_t)(0x11af990c)));
  /* 11ad2b1d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11ad2b20 push edx */
  push32((uint32_t)(EDX));
  /* 11ad2b21 call 0x11ad2910 */
  push32(0x11ad2b26u); f_11ad2910();
  /* 11ad2b26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2b29 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2b2c jne 0x11ad2b35 */
  if (!C.zf) goto L_11ad2b35;
  /* 11ad2b2e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_11ad2b35:;
  /* 11ad2b35 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad2b38 mov ecx, dword ptr [0x11af990c] */
  ECX = (r32((uint32_t)(0x11af990c)));
  /* 11ad2b3e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11ad2b41 push edx */
  push32((uint32_t)(EDX));
  /* 11ad2b42 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad2b45 push eax */
  push32((uint32_t)(EAX));
  /* 11ad2b46 call 0x11acdad0 */
  push32(0x11ad2b4bu); f_11acdad0();
  /* 11ad2b4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ad2b4e:;
  /* 11ad2b4e jmp 0x11ad2a57 */
  goto L_11ad2a57;
L_11ad2b53:;
  /* 11ad2b53 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad2b55 call 0x11acd100 */
  push32(0x11ad2b5au); f_11acd100();
  /* 11ad2b5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2b5d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2b61 jne 0x11ad2b68 */
  if (!C.zf) goto L_11ad2b68;
  /* 11ad2b63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad2b66 jmp 0x11ad2b6b */
  goto L_11ad2b6b;
L_11ad2b68:;
  /* 11ad2b68 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11ad2b6b:;
  /* 11ad2b6b mov esp, ebp */
  ESP = (EBP);
  /* 11ad2b6d pop ebp */
  EBP = (pop32());
  /* 11ad2b6e ret  */
  ESPCHK(0x11ad2a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b70 @ 0x11ad2b70 (1007 bytes, 269 insns) */
void f_11ad2b70(void) {
  FTRACE(0x11ad2b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad2b70 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad2b71 mov ebp, esp */
  EBP = (ESP);
  /* 11ad2b73 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad2b79 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2b7d jl 0x11ad2b85 */
  if ((C.sf!=C.of)) goto L_11ad2b85;
  /* 11ad2b7f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2b83 jle 0x11ad2b8c */
  if ((C.zf||C.sf!=C.of)) goto L_11ad2b8c;
L_11ad2b85:;
  /* 11ad2b85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad2b87 jmp 0x11ad2f5b */
  goto L_11ad2f5b;
L_11ad2b8c:;
  /* 11ad2b8c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ad2b8e call 0x11acd060 */
  push32(0x11ad2b93u); f_11acd060();
  /* 11ad2b93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2b96 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ad2b9d mov eax, dword ptr [0x11af9644] */
  EAX = (r32((uint32_t)(0x11af9644)));
  /* 11ad2ba2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2ba5 mov dword ptr [0x11af9644], eax */
  w32((uint32_t)(0x11af9644), (EAX));
L_11ad2baa:;
  /* 11ad2baa cmp dword ptr [0x11af9654], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9654))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2bb1 je 0x11ad2bbd */
  if (C.zf) goto L_11ad2bbd;
  /* 11ad2bb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad2bb5 call dword ptr [0x11afb32c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb32c))), 0x11ad2bbbu);
  /* 11ad2bbb jmp 0x11ad2baa */
  goto L_11ad2baa;
L_11ad2bbd:;
  /* 11ad2bbd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2bc1 je 0x11ad2c01 */
  if (C.zf) goto L_11ad2c01;
  /* 11ad2bc3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2bc7 je 0x11ad2be1 */
  if (C.zf) goto L_11ad2be1;
  /* 11ad2bc9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad2bcc push ecx */
  push32((uint32_t)(ECX));
  /* 11ad2bcd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad2bd0 push edx */
  push32((uint32_t)(EDX));
  /* 11ad2bd1 call 0x11ad2f60 */
  push32(0x11ad2bd6u); f_11ad2f60();
  /* 11ad2bd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2bd9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11ad2bdf jmp 0x11ad2bf3 */
  goto L_11ad2bf3;
L_11ad2be1:;
  /* 11ad2be1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad2be4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad2be7 mov ecx, dword ptr [eax + 0x11af758c] */
  ECX = (r32((uint32_t)(EAX + 0x11af758c)));
  /* 11ad2bed mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_11ad2bf3:;
  /* 11ad2bf3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11ad2bf9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ad2bfc jmp 0x11ad2f3b */
  goto L_11ad2f3b;
L_11ad2c01:;
  /* 11ad2c01 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 11ad2c08 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ad2c0f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2c13 je 0x11ad2f33 */
  if (C.zf) goto L_11ad2f33;
  /* 11ad2c19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad2c1c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ad2c1f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2c22 jne 0x11ad2e44 */
  if (!C.zf) goto L_11ad2e44;
  /* 11ad2c28 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad2c2b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11ad2c2f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2c32 jne 0x11ad2e44 */
  if (!C.zf) goto L_11ad2e44;
  /* 11ad2c38 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad2c3b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 11ad2c3f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2c42 jne 0x11ad2e44 */
  if (!C.zf) goto L_11ad2e44;
  /* 11ad2c48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad2c4b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_11ad2c51:;
  /* 11ad2c51 push 0x11af4190 */
  push32((uint32_t)(0x11af4190u));
  /* 11ad2c56 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11ad2c5c push ecx */
  push32((uint32_t)(ECX));
  /* 11ad2c5d call 0x11ad73e0 */
  push32(0x11ad2c62u); f_11ad73e0();
  /* 11ad2c62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2c65 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 11ad2c6b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2c72 je 0x11ad2c9d */
  if (C.zf) goto L_11ad2c9d;
  /* 11ad2c74 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11ad2c7a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad2c80 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 11ad2c86 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2c8d je 0x11ad2c9d */
  if (C.zf) goto L_11ad2c9d;
  /* 11ad2c8f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11ad2c95 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ad2c98 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2c9b jne 0x11ad2cc3 */
  if (!C.zf) goto L_11ad2cc3;
L_11ad2c9d:;
  /* 11ad2c9d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2ca1 je 0x11ad2cbc */
  if (C.zf) goto L_11ad2cbc;
  /* 11ad2ca3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ad2ca5 call 0x11acd100 */
  push32(0x11ad2caau); f_11acd100();
  /* 11ad2caa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2cad mov edx, dword ptr [0x11af9644] */
  EDX = (r32((uint32_t)(0x11af9644)));
  /* 11ad2cb3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad2cb6 mov dword ptr [0x11af9644], edx */
  w32((uint32_t)(0x11af9644), (EDX));
L_11ad2cbc:;
  /* 11ad2cbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad2cbe jmp 0x11ad2f5b */
  goto L_11ad2f5b;
L_11ad2cc3:;
  /* 11ad2cc3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11ad2cca jmp 0x11ad2cd5 */
  goto L_11ad2cd5;
L_11ad2ccc:;
  /* 11ad2ccc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad2ccf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2cd2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11ad2cd5:;
  /* 11ad2cd5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2cd9 jg 0x11ad2d23 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ad2d23;
  /* 11ad2cdb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11ad2ce1 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad2ce2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11ad2ce8 push edx */
  push32((uint32_t)(EDX));
  /* 11ad2ce9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad2cec imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad2cef mov ecx, dword ptr [eax + 0x11af7588] */
  ECX = (r32((uint32_t)(EAX + 0x11af7588)));
  /* 11ad2cf5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad2cf6 call 0x11ad73a0 */
  push32(0x11ad2cfbu); f_11ad73a0();
  /* 11ad2cfb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2cfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad2d00 jne 0x11ad2d21 */
  if (!C.zf) goto L_11ad2d21;
  /* 11ad2d02 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad2d05 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad2d08 mov eax, dword ptr [edx + 0x11af7588] */
  EAX = (r32((uint32_t)(EDX + 0x11af7588)));
  /* 11ad2d0e push eax */
  push32((uint32_t)(EAX));
  /* 11ad2d0f call 0x11acc490 */
  push32(0x11ad2d14u); f_11acc490();
  /* 11ad2d14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2d17 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2d1d jne 0x11ad2d21 */
  if (!C.zf) goto L_11ad2d21;
  /* 11ad2d1f jmp 0x11ad2d23 */
  goto L_11ad2d23;
L_11ad2d21:;
  /* 11ad2d21 jmp 0x11ad2ccc */
  goto L_11ad2ccc;
L_11ad2d23:;
  /* 11ad2d23 push 0x11af418c */
  push32((uint32_t)(0x11af418cu));
  /* 11ad2d28 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11ad2d2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2d31 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 11ad2d37 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11ad2d3d push edx */
  push32((uint32_t)(EDX));
  /* 11ad2d3e call 0x11ad7360 */
  push32(0x11ad2d43u); f_11ad7360();
  /* 11ad2d43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2d46 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 11ad2d4c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2d53 jne 0x11ad2d89 */
  if (!C.zf) goto L_11ad2d89;
  /* 11ad2d55 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11ad2d5b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ad2d5e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2d61 je 0x11ad2d89 */
  if (C.zf) goto L_11ad2d89;
  /* 11ad2d63 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2d67 je 0x11ad2d82 */
  if (C.zf) goto L_11ad2d82;
  /* 11ad2d69 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ad2d6b call 0x11acd100 */
  push32(0x11ad2d70u); f_11acd100();
  /* 11ad2d70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2d73 mov edx, dword ptr [0x11af9644] */
  EDX = (r32((uint32_t)(0x11af9644)));
  /* 11ad2d79 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad2d7c mov dword ptr [0x11af9644], edx */
  w32((uint32_t)(0x11af9644), (EDX));
L_11ad2d82:;
  /* 11ad2d82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad2d84 jmp 0x11ad2f5b */
  goto L_11ad2f5b;
L_11ad2d89:;
  /* 11ad2d89 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2d8d jg 0x11ad2dda */
  if ((!C.zf&&C.sf==C.of)) goto L_11ad2dda;
  /* 11ad2d8f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11ad2d95 push eax */
  push32((uint32_t)(EAX));
  /* 11ad2d96 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11ad2d9c push ecx */
  push32((uint32_t)(ECX));
  /* 11ad2d9d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 11ad2da3 push edx */
  push32((uint32_t)(EDX));
  /* 11ad2da4 call 0x11acce80 */
  push32(0x11ad2da9u); f_11acce80();
  /* 11ad2da9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2dac mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11ad2db2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 11ad2dba lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 11ad2dc0 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad2dc1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad2dc4 push edx */
  push32((uint32_t)(EDX));
  /* 11ad2dc5 call 0x11ad2f60 */
  push32(0x11ad2dcau); f_11ad2f60();
  /* 11ad2dca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2dcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad2dcf je 0x11ad2dda */
  if (C.zf) goto L_11ad2dda;
  /* 11ad2dd1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad2dd4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2dd7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11ad2dda:;
  /* 11ad2dda mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11ad2de0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2de6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11ad2dec mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11ad2df2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ad2df5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad2df7 je 0x11ad2e08 */
  if (C.zf) goto L_11ad2e08;
  /* 11ad2df9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11ad2dff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2e02 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_11ad2e08:;
  /* 11ad2e08 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11ad2e0e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ad2e11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad2e13 jne 0x11ad2c51 */
  if (!C.zf) goto L_11ad2c51;
  /* 11ad2e19 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2e1d je 0x11ad2e2c */
  if (C.zf) goto L_11ad2e2c;
  /* 11ad2e1f call 0x11ad3100 */
  push32(0x11ad2e24u); f_11ad3100();
  /* 11ad2e24 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 11ad2e2a jmp 0x11ad2e36 */
  goto L_11ad2e36;
L_11ad2e2c:;
  /* 11ad2e2c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_11ad2e36:;
  /* 11ad2e36 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 11ad2e3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ad2e3f jmp 0x11ad2f31 */
  goto L_11ad2f31;
L_11ad2e44:;
  /* 11ad2e44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad2e47 push edx */
  push32((uint32_t)(EDX));
  /* 11ad2e48 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad2e4a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad2e4c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11ad2e52 push eax */
  push32((uint32_t)(EAX));
  /* 11ad2e53 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad2e56 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad2e57 call 0x11ad3200 */
  push32(0x11ad2e5cu); f_11ad3200();
  /* 11ad2e5c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2e5f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ad2e62 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2e66 je 0x11ad2f31 */
  if (C.zf) goto L_11ad2f31;
  /* 11ad2e6c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11ad2e73 jmp 0x11ad2e7e */
  goto L_11ad2e7e;
L_11ad2e75:;
  /* 11ad2e75 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad2e78 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2e7b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11ad2e7e:;
  /* 11ad2e7e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2e82 jg 0x11ad2ee0 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ad2ee0;
  /* 11ad2e84 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2e88 je 0x11ad2ede */
  if (C.zf) goto L_11ad2ede;
  /* 11ad2e8a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad2e8d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad2e90 mov ecx, dword ptr [eax + 0x11af758c] */
  ECX = (r32((uint32_t)(EAX + 0x11af758c)));
  /* 11ad2e96 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad2e97 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 11ad2e9d push edx */
  push32((uint32_t)(EDX));
  /* 11ad2e9e call 0x11ad72d0 */
  push32(0x11ad2ea3u); f_11ad72d0();
  /* 11ad2ea3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2ea6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad2ea8 je 0x11ad2ed5 */
  if (C.zf) goto L_11ad2ed5;
  /* 11ad2eaa lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11ad2eb0 push eax */
  push32((uint32_t)(EAX));
  /* 11ad2eb1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad2eb4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad2eb5 call 0x11ad2f60 */
  push32(0x11ad2ebau); f_11ad2f60();
  /* 11ad2eba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2ebd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad2ebf je 0x11ad2ecc */
  if (C.zf) goto L_11ad2ecc;
  /* 11ad2ec1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad2ec4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2ec7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11ad2eca jmp 0x11ad2ed3 */
  goto L_11ad2ed3;
L_11ad2ecc:;
  /* 11ad2ecc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11ad2ed3:;
  /* 11ad2ed3 jmp 0x11ad2ede */
  goto L_11ad2ede;
L_11ad2ed5:;
  /* 11ad2ed5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad2ed8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2edb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11ad2ede:;
  /* 11ad2ede jmp 0x11ad2e75 */
  goto L_11ad2e75;
L_11ad2ee0:;
  /* 11ad2ee0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2ee4 je 0x11ad2f0b */
  if (C.zf) goto L_11ad2f0b;
  /* 11ad2ee6 call 0x11ad3100 */
  push32(0x11ad2eebu); f_11ad3100();
  /* 11ad2eeb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ad2eee push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad2ef0 mov ecx, dword ptr [0x11af758c] */
  ECX = (r32((uint32_t)(0x11af758c)));
  /* 11ad2ef6 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad2ef7 call 0x11aca0f0 */
  push32(0x11ad2efcu); f_11aca0f0();
  /* 11ad2efc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2eff mov dword ptr [0x11af758c], 0 */
  w32((uint32_t)(0x11af758c), (0x0u));
  /* 11ad2f09 jmp 0x11ad2f31 */
  goto L_11ad2f31;
L_11ad2f0b:;
  /* 11ad2f0b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2f0f je 0x11ad2f1e */
  if (C.zf) goto L_11ad2f1e;
  /* 11ad2f11 call 0x11ad3100 */
  push32(0x11ad2f16u); f_11ad3100();
  /* 11ad2f16 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 11ad2f1c jmp 0x11ad2f28 */
  goto L_11ad2f28;
L_11ad2f1e:;
  /* 11ad2f1e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_11ad2f28:;
  /* 11ad2f28 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 11ad2f2e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11ad2f31:;
  /* 11ad2f31 jmp 0x11ad2f3b */
  goto L_11ad2f3b;
L_11ad2f33:;
  /* 11ad2f33 call 0x11ad3100 */
  push32(0x11ad2f38u); f_11ad3100();
  /* 11ad2f38 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11ad2f3b:;
  /* 11ad2f3b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2f3f je 0x11ad2f58 */
  if (C.zf) goto L_11ad2f58;
  /* 11ad2f41 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ad2f43 call 0x11acd100 */
  push32(0x11ad2f48u); f_11acd100();
  /* 11ad2f48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2f4b mov eax, dword ptr [0x11af9644] */
  EAX = (r32((uint32_t)(0x11af9644)));
  /* 11ad2f50 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad2f53 mov dword ptr [0x11af9644], eax */
  w32((uint32_t)(0x11af9644), (EAX));
L_11ad2f58:;
  /* 11ad2f58 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11ad2f5b:;
  /* 11ad2f5b mov esp, ebp */
  ESP = (EBP);
  /* 11ad2f5d pop ebp */
  EBP = (pop32());
  /* 11ad2f5e ret  */
  ESPCHK(0x11ad2b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f60 @ 0x11ad2f60 (403 bytes, 117 insns) */
void f_11ad2f60(void) {
  FTRACE(0x11ad2f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad2f60 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad2f61 mov ebp, esp */
  EBP = (ESP);
  /* 11ad2f63 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad2f69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad2f6c push eax */
  push32((uint32_t)(EAX));
  /* 11ad2f6d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 11ad2f73 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad2f74 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 11ad2f7a push edx */
  push32((uint32_t)(EDX));
  /* 11ad2f7b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 11ad2f81 push eax */
  push32((uint32_t)(EAX));
  /* 11ad2f82 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad2f85 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad2f86 call 0x11ad3200 */
  push32(0x11ad2f8bu); f_11ad3200();
  /* 11ad2f8b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2f8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad2f90 jne 0x11ad2f99 */
  if (!C.zf) goto L_11ad2f99;
  /* 11ad2f92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad2f94 jmp 0x11ad30ef */
  goto L_11ad30ef;
L_11ad2f99:;
  /* 11ad2f99 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 11ad2f9e push 0x11af4194 */
  push32((uint32_t)(0x11af4194u));
  /* 11ad2fa3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad2fa5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 11ad2fab push edx */
  push32((uint32_t)(EDX));
  /* 11ad2fac call 0x11acc490 */
  push32(0x11ad2fb1u); f_11acc490();
  /* 11ad2fb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2fb4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2fb7 push eax */
  push32((uint32_t)(EAX));
  /* 11ad2fb8 call 0x11ac9660 */
  push32(0x11ad2fbdu); f_11ac9660();
  /* 11ad2fbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2fc0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ad2fc3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad2fc7 jne 0x11ad2fd0 */
  if (!C.zf) goto L_11ad2fd0;
  /* 11ad2fc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad2fcb jmp 0x11ad30ef */
  goto L_11ad30ef;
L_11ad2fd0:;
  /* 11ad2fd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad2fd3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad2fd6 mov ecx, dword ptr [eax + 0x11af758c] */
  ECX = (r32((uint32_t)(EAX + 0x11af758c)));
  /* 11ad2fdc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad2fdf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad2fe2 mov eax, dword ptr [edx*4 + 0x11af94cc] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11af94cc)));
  /* 11ad2fe9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad2fec push 6 */
  push32((uint32_t)(0x6u));
  /* 11ad2fee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad2ff1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad2ff4 add ecx, 0x11af9510 */
  { uint32_t _a=(ECX),_b=(0x11af9510u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad2ffa push ecx */
  push32((uint32_t)(ECX));
  /* 11ad2ffb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11ad2ffe push edx */
  push32((uint32_t)(EDX));
  /* 11ad2fff call 0x11ad1e10 */
  push32(0x11ad3004u); f_11ad1e10();
  /* 11ad3004 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3007 mov eax, dword ptr [0x11af94e4] */
  EAX = (r32((uint32_t)(0x11af94e4)));
  /* 11ad300c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ad300f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 11ad3015 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad3016 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad3019 push edx */
  push32((uint32_t)(EDX));
  /* 11ad301a call 0x11acc610 */
  push32(0x11ad301fu); f_11acc610();
  /* 11ad301f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3022 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3025 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad3028 mov dword ptr [ecx + 0x11af758c], eax */
  w32((uint32_t)(ECX + 0x11af758c), (EAX));
  /* 11ad302e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11ad3034 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ad303a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad303d mov dword ptr [eax*4 + 0x11af94cc], edx */
  w32((uint32_t)(EAX*4 + 0x11af94cc), (EDX));
  /* 11ad3044 push 6 */
  push32((uint32_t)(0x6u));
  /* 11ad3046 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 11ad304c push ecx */
  push32((uint32_t)(ECX));
  /* 11ad304d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3050 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad3053 add edx, 0x11af9510 */
  { uint32_t _a=(EDX),_b=(0x11af9510u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3059 push edx */
  push32((uint32_t)(EDX));
  /* 11ad305a call 0x11ad1e10 */
  push32(0x11ad305fu); f_11ad1e10();
  /* 11ad305f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3062 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3066 jne 0x11ad3073 */
  if (!C.zf) goto L_11ad3073;
  /* 11ad3068 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11ad306e mov dword ptr [0x11af94e4], eax */
  w32((uint32_t)(0x11af94e4), (EAX));
L_11ad3073:;
  /* 11ad3073 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3077 jne 0x11ad3085 */
  if (!C.zf) goto L_11ad3085;
  /* 11ad3079 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11ad307f mov dword ptr [0x11af94e8], ecx */
  w32((uint32_t)(0x11af94e8), (ECX));
L_11ad3085:;
  /* 11ad3085 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3088 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad308b call dword ptr [edx + 0x11af7590] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x11af7590))), 0x11ad3091u);
  /* 11ad3091 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad3093 je 0x11ad30cc */
  if (C.zf) goto L_11ad30cc;
  /* 11ad3095 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3098 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad309b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad309e mov dword ptr [eax + 0x11af758c], ecx */
  w32((uint32_t)(EAX + 0x11af758c), (ECX));
  /* 11ad30a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad30a6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad30a9 push edx */
  push32((uint32_t)(EDX));
  /* 11ad30aa call 0x11aca0f0 */
  push32(0x11ad30afu); f_11aca0f0();
  /* 11ad30af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad30b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad30b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad30b8 mov dword ptr [eax*4 + 0x11af94cc], ecx */
  w32((uint32_t)(EAX*4 + 0x11af94cc), (ECX));
  /* 11ad30bf mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad30c2 mov dword ptr [0x11af94e4], edx */
  w32((uint32_t)(0x11af94e4), (EDX));
  /* 11ad30c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad30ca jmp 0x11ad30ef */
  goto L_11ad30ef;
L_11ad30cc:;
  /* 11ad30cc cmp dword ptr [ebp - 0xc], 0x11af7478 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x11af7478u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad30d3 je 0x11ad30e3 */
  if (C.zf) goto L_11ad30e3;
  /* 11ad30d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad30d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad30da push eax */
  push32((uint32_t)(EAX));
  /* 11ad30db call 0x11aca0f0 */
  push32(0x11ad30e0u); f_11aca0f0();
  /* 11ad30e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ad30e3:;
  /* 11ad30e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad30e6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad30e9 mov eax, dword ptr [ecx + 0x11af758c] */
  EAX = (r32((uint32_t)(ECX + 0x11af758c)));
L_11ad30ef:;
  /* 11ad30ef mov esp, ebp */
  ESP = (EBP);
  /* 11ad30f1 pop ebp */
  EBP = (pop32());
  /* 11ad30f2 ret  */
  ESPCHK(0x11ad2f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10013100 @ 0x11ad3100 (256 bytes, 72 insns) */
void f_11ad3100(void) {
  FTRACE(0x11ad3100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad3100 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad3101 mov ebp, esp */
  EBP = (ESP);
  /* 11ad3103 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad3106 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11ad310d cmp dword ptr [0x11af758c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af758c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3114 jne 0x11ad3134 */
  if (!C.zf) goto L_11ad3134;
  /* 11ad3116 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 11ad311b push 0x11af4194 */
  push32((uint32_t)(0x11af4194u));
  /* 11ad3120 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad3122 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 11ad3127 call 0x11ac9660 */
  push32(0x11ad312cu); f_11ac9660();
  /* 11ad312c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad312f mov dword ptr [0x11af758c], eax */
  w32((uint32_t)(0x11af758c), (EAX));
L_11ad3134:;
  /* 11ad3134 mov eax, dword ptr [0x11af758c] */
  EAX = (r32((uint32_t)(0x11af758c)));
  /* 11ad3139 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11ad313c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ad3143 jmp 0x11ad314e */
  goto L_11ad314e;
L_11ad3145:;
  /* 11ad3145 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad3148 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad314b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ad314e:;
  /* 11ad314e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad3151 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad3154 mov eax, dword ptr [edx + 0x11af758c] */
  EAX = (r32((uint32_t)(EDX + 0x11af758c)));
  /* 11ad315a push eax */
  push32((uint32_t)(EAX));
  /* 11ad315b push 0x11af41a0 */
  push32((uint32_t)(0x11af41a0u));
  /* 11ad3160 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad3163 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad3166 mov edx, dword ptr [ecx + 0x11af7588] */
  EDX = (r32((uint32_t)(ECX + 0x11af7588)));
  /* 11ad316c push edx */
  push32((uint32_t)(EDX));
  /* 11ad316d push 3 */
  push32((uint32_t)(0x3u));
  /* 11ad316f mov eax, dword ptr [0x11af758c] */
  EAX = (r32((uint32_t)(0x11af758c)));
  /* 11ad3174 push eax */
  push32((uint32_t)(EAX));
  /* 11ad3175 call 0x11ad33a0 */
  push32(0x11ad317au); f_11ad33a0();
  /* 11ad317a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad317d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3181 jge 0x11ad31c9 */
  if ((C.sf==C.of)) goto L_11ad31c9;
  /* 11ad3183 push 0x11af418c */
  push32((uint32_t)(0x11af418cu));
  /* 11ad3188 mov ecx, dword ptr [0x11af758c] */
  ECX = (r32((uint32_t)(0x11af758c)));
  /* 11ad318e push ecx */
  push32((uint32_t)(ECX));
  /* 11ad318f call 0x11acc620 */
  push32(0x11ad3194u); f_11acc620();
  /* 11ad3194 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3197 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad319a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad319d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad31a0 mov eax, dword ptr [edx + 0x11af758c] */
  EAX = (r32((uint32_t)(EDX + 0x11af758c)));
  /* 11ad31a6 push eax */
  push32((uint32_t)(EAX));
  /* 11ad31a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad31aa imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad31ad mov edx, dword ptr [ecx + 0x11af758c] */
  EDX = (r32((uint32_t)(ECX + 0x11af758c)));
  /* 11ad31b3 push edx */
  push32((uint32_t)(EDX));
  /* 11ad31b4 call 0x11ad72d0 */
  push32(0x11ad31b9u); f_11ad72d0();
  /* 11ad31b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad31bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad31be je 0x11ad31c7 */
  if (C.zf) goto L_11ad31c7;
  /* 11ad31c0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11ad31c7:;
  /* 11ad31c7 jmp 0x11ad31f7 */
  goto L_11ad31f7;
L_11ad31c9:;
  /* 11ad31c9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad31cd jne 0x11ad31d6 */
  if (!C.zf) goto L_11ad31d6;
  /* 11ad31cf mov eax, dword ptr [0x11af758c] */
  EAX = (r32((uint32_t)(0x11af758c)));
  /* 11ad31d4 jmp 0x11ad31fc */
  goto L_11ad31fc;
L_11ad31d6:;
  /* 11ad31d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad31d8 mov eax, dword ptr [0x11af758c] */
  EAX = (r32((uint32_t)(0x11af758c)));
  /* 11ad31dd push eax */
  push32((uint32_t)(EAX));
  /* 11ad31de call 0x11aca0f0 */
  push32(0x11ad31e3u); f_11aca0f0();
  /* 11ad31e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad31e6 mov dword ptr [0x11af758c], 0 */
  w32((uint32_t)(0x11af758c), (0x0u));
  /* 11ad31f0 mov eax, dword ptr [0x11af75a4] */
  EAX = (r32((uint32_t)(0x11af75a4)));
  /* 11ad31f5 jmp 0x11ad31fc */
  goto L_11ad31fc;
L_11ad31f7:;
  /* 11ad31f7 jmp 0x11ad3145 */
  goto L_11ad3145;
L_11ad31fc:;
  /* 11ad31fc mov esp, ebp */
  ESP = (EBP);
  /* 11ad31fe pop ebp */
  EBP = (pop32());
  /* 11ad31ff ret  */
  ESPCHK(0x11ad3100u, _esp0);
  ESP += 4; return;
}

/* FUN_10013200 @ 0x11ad3200 (388 bytes, 115 insns) */
void f_11ad3200(void) {
  FTRACE(0x11ad3200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad3200 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad3201 mov ebp, esp */
  EBP = (ESP);
  /* 11ad3203 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad3209 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad320d jne 0x11ad3216 */
  if (!C.zf) goto L_11ad3216;
  /* 11ad320f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad3211 jmp 0x11ad3380 */
  goto L_11ad3380;
L_11ad3216:;
  /* 11ad3216 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3219 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ad321c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad321f jne 0x11ad3270 */
  if (!C.zf) goto L_11ad3270;
  /* 11ad3221 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3224 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11ad3228 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad322a jne 0x11ad3270 */
  if (!C.zf) goto L_11ad3270;
  /* 11ad322c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad322f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 11ad3232 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad3235 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 11ad3239 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad323d je 0x11ad3259 */
  if (C.zf) goto L_11ad3259;
  /* 11ad323f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad3242 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 11ad3247 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad324a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 11ad3250 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad3253 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_11ad3259:;
  /* 11ad3259 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad325d je 0x11ad3268 */
  if (C.zf) goto L_11ad3268;
  /* 11ad325f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad3262 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11ad3268:;
  /* 11ad3268 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad326b jmp 0x11ad3380 */
  goto L_11ad3380;
L_11ad3270:;
  /* 11ad3270 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3273 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad3274 push 0x11af7500 */
  push32((uint32_t)(0x11af7500u));
  /* 11ad3279 call 0x11ad72d0 */
  push32(0x11ad327eu); f_11ad72d0();
  /* 11ad327e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3281 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad3283 je 0x11ad3338 */
  if (C.zf) goto L_11ad3338;
  /* 11ad3289 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad328c push edx */
  push32((uint32_t)(EDX));
  /* 11ad328d push 0x11af747c */
  push32((uint32_t)(0x11af747cu));
  /* 11ad3292 call 0x11ad72d0 */
  push32(0x11ad3297u); f_11ad72d0();
  /* 11ad3297 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad329a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad329c je 0x11ad3338 */
  if (C.zf) goto L_11ad3338;
  /* 11ad32a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad32a5 push eax */
  push32((uint32_t)(EAX));
  /* 11ad32a6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 11ad32ac push ecx */
  push32((uint32_t)(ECX));
  /* 11ad32ad call 0x11ad33f0 */
  push32(0x11ad32b2u); f_11ad33f0();
  /* 11ad32b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad32b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad32b7 je 0x11ad32c0 */
  if (C.zf) goto L_11ad32c0;
  /* 11ad32b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad32bb jmp 0x11ad3380 */
  goto L_11ad3380;
L_11ad32c0:;
  /* 11ad32c0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11ad32c6 push edx */
  push32((uint32_t)(EDX));
  /* 11ad32c7 push 0x11af94c0 */
  push32((uint32_t)(0x11af94c0u));
  /* 11ad32cc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 11ad32d2 push eax */
  push32((uint32_t)(EAX));
  /* 11ad32d3 call 0x11ad7420 */
  push32(0x11ad32d8u); f_11ad7420();
  /* 11ad32d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad32db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad32dd jne 0x11ad32e6 */
  if (!C.zf) goto L_11ad32e6;
  /* 11ad32df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad32e1 jmp 0x11ad3380 */
  goto L_11ad3380;
L_11ad32e6:;
  /* 11ad32e6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad32e8 mov cx, word ptr [0x11af94c4] */
  CX = (r16((uint32_t)(0x11af94c4)));
  /* 11ad32ef mov dword ptr [0x11af94c8], ecx */
  w32((uint32_t)(0x11af94c8), (ECX));
  /* 11ad32f5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11ad32fb push edx */
  push32((uint32_t)(EDX));
  /* 11ad32fc push 0x11af7500 */
  push32((uint32_t)(0x11af7500u));
  /* 11ad3301 call 0x11ad3550 */
  push32(0x11ad3306u); f_11ad3550();
  /* 11ad3306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3309 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad330c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ad330f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad3311 je 0x11ad3326 */
  if (C.zf) goto L_11ad3326;
  /* 11ad3313 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3316 push edx */
  push32((uint32_t)(EDX));
  /* 11ad3317 push 0x11af747c */
  push32((uint32_t)(0x11af747cu));
  /* 11ad331c call 0x11acc610 */
  push32(0x11ad3321u); f_11acc610();
  /* 11ad3321 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3324 jmp 0x11ad3338 */
  goto L_11ad3338;
L_11ad3326:;
  /* 11ad3326 push 0x11af7500 */
  push32((uint32_t)(0x11af7500u));
  /* 11ad332b push 0x11af747c */
  push32((uint32_t)(0x11af747cu));
  /* 11ad3330 call 0x11acc610 */
  push32(0x11ad3335u); f_11acc610();
  /* 11ad3335 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ad3338:;
  /* 11ad3338 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad333c je 0x11ad3351 */
  if (C.zf) goto L_11ad3351;
  /* 11ad333e push 6 */
  push32((uint32_t)(0x6u));
  /* 11ad3340 push 0x11af94c0 */
  push32((uint32_t)(0x11af94c0u));
  /* 11ad3345 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad3348 push eax */
  push32((uint32_t)(EAX));
  /* 11ad3349 call 0x11ad1e10 */
  push32(0x11ad334eu); f_11ad1e10();
  /* 11ad334e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ad3351:;
  /* 11ad3351 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3355 je 0x11ad336a */
  if (C.zf) goto L_11ad336a;
  /* 11ad3357 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ad3359 push 0x11af94c8 */
  push32((uint32_t)(0x11af94c8u));
  /* 11ad335e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad3361 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad3362 call 0x11ad1e10 */
  push32(0x11ad3367u); f_11ad1e10();
  /* 11ad3367 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ad336a:;
  /* 11ad336a push 0x11af7500 */
  push32((uint32_t)(0x11af7500u));
  /* 11ad336f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad3372 push edx */
  push32((uint32_t)(EDX));
  /* 11ad3373 call 0x11acc610 */
  push32(0x11ad3378u); f_11acc610();
  /* 11ad3378 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad337b mov eax, 0x11af7500 */
  EAX = (0x11af7500u);
L_11ad3380:;
  /* 11ad3380 mov esp, ebp */
  ESP = (EBP);
  /* 11ad3382 pop ebp */
  EBP = (pop32());
  /* 11ad3383 ret  */
  ESPCHK(0x11ad3200u, _esp0);
  ESP += 4; return;
}

/* FUN_10013390 @ 0x11ad3390 (7 bytes, 5 insns) */
void f_11ad3390(void) {
  FTRACE(0x11ad3390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad3390 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad3391 mov ebp, esp */
  EBP = (ESP);
  /* 11ad3393 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad3395 pop ebp */
  EBP = (pop32());
  /* 11ad3396 ret  */
  ESPCHK(0x11ad3390u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x11ad33a0 (79 bytes, 28 insns) */
void f_11ad33a0(void) {
  FTRACE(0x11ad33a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad33a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad33a1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad33a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad33a6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11ad33a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad33ac mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ad33b3 jmp 0x11ad33be */
  goto L_11ad33be;
L_11ad33b5:;
  /* 11ad33b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad33b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad33bb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11ad33be:;
  /* 11ad33be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad33c1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad33c4 jge 0x11ad33e4 */
  if ((C.sf==C.of)) goto L_11ad33e4;
  /* 11ad33c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad33c9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad33cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad33cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad33d2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11ad33d5 push edx */
  push32((uint32_t)(EDX));
  /* 11ad33d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad33d9 push eax */
  push32((uint32_t)(EAX));
  /* 11ad33da call 0x11acc620 */
  push32(0x11ad33dfu); f_11acc620();
  /* 11ad33df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad33e2 jmp 0x11ad33b5 */
  goto L_11ad33b5;
L_11ad33e4:;
  /* 11ad33e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ad33eb mov esp, ebp */
  ESP = (EBP);
  /* 11ad33ed pop ebp */
  EBP = (pop32());
  /* 11ad33ee ret  */
  ESPCHK(0x11ad33a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100133f0 @ 0x11ad33f0 (349 bytes, 122 insns) */
void f_11ad33f0(void) {
  FTRACE(0x11ad33f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad33f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad33f1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad33f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad33f6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 11ad33fb push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad33fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3400 push eax */
  push32((uint32_t)(EAX));
  /* 11ad3401 call 0x11acef20 */
  push32(0x11ad3406u); f_11acef20();
  /* 11ad3406 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3409 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad340c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ad340f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad3411 jne 0x11ad341a */
  if (!C.zf) goto L_11ad341a;
  /* 11ad3413 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad3415 jmp 0x11ad3549 */
  goto L_11ad3549;
L_11ad341a:;
  /* 11ad341a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad341d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ad3420 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3423 jne 0x11ad3450 */
  if (!C.zf) goto L_11ad3450;
  /* 11ad3425 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad3428 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11ad342c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad342e je 0x11ad3450 */
  if (C.zf) goto L_11ad3450;
  /* 11ad3430 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad3433 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3436 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad3437 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad343a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3440 push edx */
  push32((uint32_t)(EDX));
  /* 11ad3441 call 0x11acc610 */
  push32(0x11ad3446u); f_11acc610();
  /* 11ad3446 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3449 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad344b jmp 0x11ad3549 */
  goto L_11ad3549;
L_11ad3450:;
  /* 11ad3450 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ad3457 jmp 0x11ad3462 */
  goto L_11ad3462;
L_11ad3459:;
  /* 11ad3459 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad345c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad345f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ad3462:;
  /* 11ad3462 push 0x11af41a4 */
  push32((uint32_t)(0x11af41a4u));
  /* 11ad3467 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad346a push ecx */
  push32((uint32_t)(ECX));
  /* 11ad346b call 0x11ad7360 */
  push32(0x11ad3470u); f_11ad7360();
  /* 11ad3470 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3473 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ad3476 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad347a jne 0x11ad3484 */
  if (!C.zf) goto L_11ad3484;
  /* 11ad347c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad347f jmp 0x11ad3549 */
  goto L_11ad3549;
L_11ad3484:;
  /* 11ad3484 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad3487 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad348a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ad348c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11ad348f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3493 jne 0x11ad34ba */
  if (!C.zf) goto L_11ad34ba;
  /* 11ad3495 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3499 jge 0x11ad34ba */
  if ((C.sf==C.of)) goto L_11ad34ba;
  /* 11ad349b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11ad349f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad34a2 je 0x11ad34ba */
  if (C.zf) goto L_11ad34ba;
  /* 11ad34a4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad34a7 push edx */
  push32((uint32_t)(EDX));
  /* 11ad34a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad34ab push eax */
  push32((uint32_t)(EAX));
  /* 11ad34ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad34af push ecx */
  push32((uint32_t)(ECX));
  /* 11ad34b0 call 0x11acce80 */
  push32(0x11ad34b5u); f_11acce80();
  /* 11ad34b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad34b8 jmp 0x11ad3520 */
  goto L_11ad3520;
L_11ad34ba:;
  /* 11ad34ba cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad34be jne 0x11ad34e8 */
  if (!C.zf) goto L_11ad34e8;
  /* 11ad34c0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad34c4 jge 0x11ad34e8 */
  if ((C.sf==C.of)) goto L_11ad34e8;
  /* 11ad34c6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11ad34ca cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad34cd je 0x11ad34e8 */
  if (C.zf) goto L_11ad34e8;
  /* 11ad34cf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad34d2 push eax */
  push32((uint32_t)(EAX));
  /* 11ad34d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad34d6 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad34d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad34da add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad34dd push edx */
  push32((uint32_t)(EDX));
  /* 11ad34de call 0x11acce80 */
  push32(0x11ad34e3u); f_11acce80();
  /* 11ad34e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad34e6 jmp 0x11ad3520 */
  goto L_11ad3520;
L_11ad34e8:;
  /* 11ad34e8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad34ec jne 0x11ad351b */
  if (!C.zf) goto L_11ad351b;
  /* 11ad34ee movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11ad34f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad34f4 je 0x11ad34ff */
  if (C.zf) goto L_11ad34ff;
  /* 11ad34f6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11ad34fa cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad34fd jne 0x11ad351b */
  if (!C.zf) goto L_11ad351b;
L_11ad34ff:;
  /* 11ad34ff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad3502 push edx */
  push32((uint32_t)(EDX));
  /* 11ad3503 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad3506 push eax */
  push32((uint32_t)(EAX));
  /* 11ad3507 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad350a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3510 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad3511 call 0x11acce80 */
  push32(0x11ad3516u); f_11acce80();
  /* 11ad3516 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3519 jmp 0x11ad3520 */
  goto L_11ad3520;
L_11ad351b:;
  /* 11ad351b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad351e jmp 0x11ad3549 */
  goto L_11ad3549;
L_11ad3520:;
  /* 11ad3520 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11ad3524 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3527 jne 0x11ad352b */
  if (!C.zf) goto L_11ad352b;
  /* 11ad3529 jmp 0x11ad3547 */
  goto L_11ad3547;
L_11ad352b:;
  /* 11ad352b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11ad352f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad3531 jne 0x11ad3535 */
  if (!C.zf) goto L_11ad3535;
  /* 11ad3533 jmp 0x11ad3547 */
  goto L_11ad3547;
L_11ad3535:;
  /* 11ad3535 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad3538 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad353b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 11ad353f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11ad3542 jmp 0x11ad3459 */
  goto L_11ad3459;
L_11ad3547:;
  /* 11ad3547 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ad3549:;
  /* 11ad3549 mov esp, ebp */
  ESP = (EBP);
  /* 11ad354b pop ebp */
  EBP = (pop32());
  /* 11ad354c ret  */
  ESPCHK(0x11ad33f0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x11ad3550 (101 bytes, 36 insns) */
void f_11ad3550(void) {
  FTRACE(0x11ad3550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad3550 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad3551 mov ebp, esp */
  EBP = (ESP);
  /* 11ad3553 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad3556 push eax */
  push32((uint32_t)(EAX));
  /* 11ad3557 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad355a push ecx */
  push32((uint32_t)(ECX));
  /* 11ad355b call 0x11acc610 */
  push32(0x11ad3560u); f_11acc610();
  /* 11ad3560 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3563 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad3566 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 11ad356a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad356c je 0x11ad3588 */
  if (C.zf) goto L_11ad3588;
  /* 11ad356e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad3571 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3574 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad3575 push 0x11af41ac */
  push32((uint32_t)(0x11af41acu));
  /* 11ad357a push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad357c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad357f push edx */
  push32((uint32_t)(EDX));
  /* 11ad3580 call 0x11ad33a0 */
  push32(0x11ad3585u); f_11ad33a0();
  /* 11ad3585 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ad3588:;
  /* 11ad3588 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad358b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 11ad3592 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad3594 je 0x11ad35b3 */
  if (C.zf) goto L_11ad35b3;
  /* 11ad3596 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad3599 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad359f push edx */
  push32((uint32_t)(EDX));
  /* 11ad35a0 push 0x11af41a8 */
  push32((uint32_t)(0x11af41a8u));
  /* 11ad35a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad35a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad35aa push eax */
  push32((uint32_t)(EAX));
  /* 11ad35ab call 0x11ad33a0 */
  push32(0x11ad35b0u); f_11ad33a0();
  /* 11ad35b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ad35b3:;
  /* 11ad35b3 pop ebp */
  EBP = (pop32());
  /* 11ad35b4 ret  */
  ESPCHK(0x11ad3550u, _esp0);
  ESP += 4; return;
}

/* FUN_100135c0 @ 0x11ad35c0 (421 bytes, 148 insns) */
void f_11ad35c0(void) {
  FTRACE(0x11ad35c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad35c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad35c1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad35c3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ad35c5 push 0x11af41b8 */
  push32((uint32_t)(0x11af41b8u));
  /* 11ad35ca push 0x11ad82b0 */
  push32((uint32_t)(0x11ad82b0u));
  /* 11ad35cf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11ad35d5 push eax */
  push32((uint32_t)(EAX));
  /* 11ad35d6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11ad35dd add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad35e0 push ebx */
  push32((uint32_t)(EBX));
  /* 11ad35e1 push esi */
  push32((uint32_t)(ESI));
  /* 11ad35e2 push edi */
  push32((uint32_t)(EDI));
  /* 11ad35e3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ad35e6 cmp dword ptr [0x11af94ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af94ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad35ed jne 0x11ad363e */
  if (!C.zf) goto L_11ad363e;
  /* 11ad35ef lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11ad35f2 push eax */
  push32((uint32_t)(EAX));
  /* 11ad35f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad35f5 push 0x11af41b4 */
  push32((uint32_t)(0x11af41b4u));
  /* 11ad35fa push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad35fc call dword ptr [0x11afb320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb320))), 0x11ad3602u);
  /* 11ad3602 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad3604 je 0x11ad3612 */
  if (C.zf) goto L_11ad3612;
  /* 11ad3606 mov dword ptr [0x11af94ec], 1 */
  w32((uint32_t)(0x11af94ec), (0x1u));
  /* 11ad3610 jmp 0x11ad363e */
  goto L_11ad363e;
L_11ad3612:;
  /* 11ad3612 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11ad3615 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad3616 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad3618 push 0x11af41b0 */
  push32((uint32_t)(0x11af41b0u));
  /* 11ad361d push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad361f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad3621 call dword ptr [0x11afb318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb318))), 0x11ad3627u);
  /* 11ad3627 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad3629 je 0x11ad3637 */
  if (C.zf) goto L_11ad3637;
  /* 11ad362b mov dword ptr [0x11af94ec], 2 */
  w32((uint32_t)(0x11af94ec), (0x2u));
  /* 11ad3635 jmp 0x11ad363e */
  goto L_11ad363e;
L_11ad3637:;
  /* 11ad3637 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad3639 jmp 0x11ad3768 */
  goto L_11ad3768;
L_11ad363e:;
  /* 11ad363e cmp dword ptr [0x11af94ec], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11af94ec))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3645 jne 0x11ad3675 */
  if (!C.zf) goto L_11ad3675;
  /* 11ad3647 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad364b jne 0x11ad3656 */
  if (!C.zf) goto L_11ad3656;
  /* 11ad364d mov edx, dword ptr [0x11af94d4] */
  EDX = (r32((uint32_t)(0x11af94d4)));
  /* 11ad3653 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11ad3656:;
  /* 11ad3656 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad3659 push eax */
  push32((uint32_t)(EAX));
  /* 11ad365a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad365d push ecx */
  push32((uint32_t)(ECX));
  /* 11ad365e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad3661 push edx */
  push32((uint32_t)(EDX));
  /* 11ad3662 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3665 push eax */
  push32((uint32_t)(EAX));
  /* 11ad3666 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad3669 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad366a call dword ptr [0x11afb318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb318))), 0x11ad3670u);
  /* 11ad3670 jmp 0x11ad3768 */
  goto L_11ad3768;
L_11ad3675:;
  /* 11ad3675 cmp dword ptr [0x11af94ec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11af94ec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad367c jne 0x11ad3766 */
  if (!C.zf) goto L_11ad3766;
  /* 11ad3682 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3686 jne 0x11ad3691 */
  if (!C.zf) goto L_11ad3691;
  /* 11ad3688 mov edx, dword ptr [0x11af94e4] */
  EDX = (r32((uint32_t)(0x11af94e4)));
  /* 11ad368e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11ad3691:;
  /* 11ad3691 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad3693 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad3695 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad3698 push eax */
  push32((uint32_t)(EAX));
  /* 11ad3699 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad369c push ecx */
  push32((uint32_t)(ECX));
  /* 11ad369d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ad36a0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ad36a2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad36a4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad36a7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad36aa push edx */
  push32((uint32_t)(EDX));
  /* 11ad36ab mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ad36ae push eax */
  push32((uint32_t)(EAX));
  /* 11ad36af call dword ptr [0x11afb31c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb31c))), 0x11ad36b5u);
  /* 11ad36b5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ad36b8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad36bc jne 0x11ad36c5 */
  if (!C.zf) goto L_11ad36c5;
  /* 11ad36be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad36c0 jmp 0x11ad3768 */
  goto L_11ad3768;
L_11ad36c5:;
  /* 11ad36c5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ad36cc mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad36cf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11ad36d1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad36d4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11ad36d6 call 0x11acc800 */
  push32(0x11ad36dbu); f_11acc800();
  /* 11ad36db mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 11ad36de mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ad36e1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad36e4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11ad36e7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad36ea shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11ad36ec push edx */
  push32((uint32_t)(EDX));
  /* 11ad36ed push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad36ef mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad36f2 push eax */
  push32((uint32_t)(EAX));
  /* 11ad36f3 call 0x11acef20 */
  push32(0x11ad36f8u); f_11acef20();
  /* 11ad36f8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad36fb mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11ad3702 jmp 0x11ad371b */
  goto L_11ad371b;
  /* 11ad3704 mov eax, 1 */
  EAX = (0x1u);
  /* 11ad3709 ret  */
  ESPCHK(0x11ad35c0u, _esp0);
  ESP += 4; return;
  /* 11ad370a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad370d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11ad3714 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11ad371b:;
  /* 11ad371b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad371f jne 0x11ad3725 */
  if (!C.zf) goto L_11ad3725;
  /* 11ad3721 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad3723 jmp 0x11ad3768 */
  goto L_11ad3768;
L_11ad3725:;
  /* 11ad3725 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad3728 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad3729 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad372c push edx */
  push32((uint32_t)(EDX));
  /* 11ad372d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad3730 push eax */
  push32((uint32_t)(EAX));
  /* 11ad3731 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad3734 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad3735 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad3737 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ad373a push edx */
  push32((uint32_t)(EDX));
  /* 11ad373b call dword ptr [0x11afb31c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb31c))), 0x11ad3741u);
  /* 11ad3741 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11ad3744 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3748 jne 0x11ad374e */
  if (!C.zf) goto L_11ad374e;
  /* 11ad374a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad374c jmp 0x11ad3768 */
  goto L_11ad3768;
L_11ad374e:;
  /* 11ad374e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad3751 push eax */
  push32((uint32_t)(EAX));
  /* 11ad3752 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ad3755 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad3756 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad3759 push edx */
  push32((uint32_t)(EDX));
  /* 11ad375a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad375d push eax */
  push32((uint32_t)(EAX));
  /* 11ad375e call dword ptr [0x11afb320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb320))), 0x11ad3764u);
  /* 11ad3764 jmp 0x11ad3768 */
  goto L_11ad3768;
L_11ad3766:;
  /* 11ad3766 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ad3768:;
  /* 11ad3768 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11ad376b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad376e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11ad3775 pop edi */
  EDI = (pop32());
  /* 11ad3776 pop esi */
  ESI = (pop32());
  /* 11ad3777 pop ebx */
  EBX = (pop32());
  /* 11ad3778 mov esp, ebp */
  ESP = (EBP);
  /* 11ad377a pop ebp */
  EBP = (pop32());
  /* 11ad377b ret  */
  ESPCHK(0x11ad35c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013780 @ 0x11ad3780 (727 bytes, 263 insns) */
void f_11ad3780(void) {
  FTRACE(0x11ad3780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad3780 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad3781 mov ebp, esp */
  EBP = (ESP);
  /* 11ad3783 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ad3785 push 0x11af41c8 */
  push32((uint32_t)(0x11af41c8u));
  /* 11ad378a push 0x11ad82b0 */
  push32((uint32_t)(0x11ad82b0u));
  /* 11ad378f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11ad3795 push eax */
  push32((uint32_t)(EAX));
  /* 11ad3796 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11ad379d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad37a0 push ebx */
  push32((uint32_t)(EBX));
  /* 11ad37a1 push esi */
  push32((uint32_t)(ESI));
  /* 11ad37a2 push edi */
  push32((uint32_t)(EDI));
  /* 11ad37a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ad37a6 cmp dword ptr [0x11af94f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af94f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad37ad jne 0x11ad3806 */
  if (!C.zf) goto L_11ad3806;
  /* 11ad37af push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad37b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad37b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad37b5 push 0x11af41b4 */
  push32((uint32_t)(0x11af41b4u));
  /* 11ad37ba push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11ad37bf push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad37c1 call dword ptr [0x11afb30c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb30c))), 0x11ad37c7u);
  /* 11ad37c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad37c9 je 0x11ad37d7 */
  if (C.zf) goto L_11ad37d7;
  /* 11ad37cb mov dword ptr [0x11af94f0], 1 */
  w32((uint32_t)(0x11af94f0), (0x1u));
  /* 11ad37d5 jmp 0x11ad3806 */
  goto L_11ad3806;
L_11ad37d7:;
  /* 11ad37d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad37d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad37db push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad37dd push 0x11af41b0 */
  push32((uint32_t)(0x11af41b0u));
  /* 11ad37e2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11ad37e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad37e9 call dword ptr [0x11afb310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb310))), 0x11ad37efu);
  /* 11ad37ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad37f1 je 0x11ad37ff */
  if (C.zf) goto L_11ad37ff;
  /* 11ad37f3 mov dword ptr [0x11af94f0], 2 */
  w32((uint32_t)(0x11af94f0), (0x2u));
  /* 11ad37fd jmp 0x11ad3806 */
  goto L_11ad3806;
L_11ad37ff:;
  /* 11ad37ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad3801 jmp 0x11ad3a71 */
  goto L_11ad3a71;
L_11ad3806:;
  /* 11ad3806 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad380a jle 0x11ad381f */
  if ((C.zf||C.sf!=C.of)) goto L_11ad381f;
  /* 11ad380c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad380f push eax */
  push32((uint32_t)(EAX));
  /* 11ad3810 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad3813 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad3814 call 0x11ad3a90 */
  push32(0x11ad3819u); f_11ad3a90();
  /* 11ad3819 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad381c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11ad381f:;
  /* 11ad381f cmp dword ptr [0x11af94f0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11af94f0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3826 jne 0x11ad384b */
  if (!C.zf) goto L_11ad384b;
  /* 11ad3828 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad382b push edx */
  push32((uint32_t)(EDX));
  /* 11ad382c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ad382f push eax */
  push32((uint32_t)(EAX));
  /* 11ad3830 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad3833 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad3834 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad3837 push edx */
  push32((uint32_t)(EDX));
  /* 11ad3838 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad383b push eax */
  push32((uint32_t)(EAX));
  /* 11ad383c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad383f push ecx */
  push32((uint32_t)(ECX));
  /* 11ad3840 call dword ptr [0x11afb310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb310))), 0x11ad3846u);
  /* 11ad3846 jmp 0x11ad3a71 */
  goto L_11ad3a71;
L_11ad384b:;
  /* 11ad384b cmp dword ptr [0x11af94f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11af94f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3852 jne 0x11ad3a6f */
  if (!C.zf) goto L_11ad3a6f;
  /* 11ad3858 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad385c jne 0x11ad3867 */
  if (!C.zf) goto L_11ad3867;
  /* 11ad385e mov edx, dword ptr [0x11af94e4] */
  EDX = (r32((uint32_t)(0x11af94e4)));
  /* 11ad3864 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_11ad3867:;
  /* 11ad3867 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad3869 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad386b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad386e push eax */
  push32((uint32_t)(EAX));
  /* 11ad386f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad3872 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad3873 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 11ad3876 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ad3878 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad387a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad387d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3880 push edx */
  push32((uint32_t)(EDX));
  /* 11ad3881 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ad3884 push eax */
  push32((uint32_t)(EAX));
  /* 11ad3885 call dword ptr [0x11afb31c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb31c))), 0x11ad388bu);
  /* 11ad388b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11ad388e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3892 jne 0x11ad389b */
  if (!C.zf) goto L_11ad389b;
  /* 11ad3894 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad3896 jmp 0x11ad3a71 */
  goto L_11ad3a71;
L_11ad389b:;
  /* 11ad389b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ad38a2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ad38a5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11ad38a7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad38aa and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11ad38ac call 0x11acc800 */
  push32(0x11ad38b1u); f_11acc800();
  /* 11ad38b1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11ad38b4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ad38b7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad38ba mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11ad38bd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11ad38c4 jmp 0x11ad38dd */
  goto L_11ad38dd;
  /* 11ad38c6 mov eax, 1 */
  EAX = (0x1u);
  /* 11ad38cb ret  */
  ESPCHK(0x11ad3780u, _esp0);
  ESP += 4; return;
  /* 11ad38cc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad38cf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11ad38d6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11ad38dd:;
  /* 11ad38dd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad38e1 jne 0x11ad38ea */
  if (!C.zf) goto L_11ad38ea;
  /* 11ad38e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad38e5 jmp 0x11ad3a71 */
  goto L_11ad3a71;
L_11ad38ea:;
  /* 11ad38ea mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ad38ed push edx */
  push32((uint32_t)(EDX));
  /* 11ad38ee mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad38f1 push eax */
  push32((uint32_t)(EAX));
  /* 11ad38f2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad38f5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad38f6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad38f9 push edx */
  push32((uint32_t)(EDX));
  /* 11ad38fa push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad38fc mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ad38ff push eax */
  push32((uint32_t)(EAX));
  /* 11ad3900 call dword ptr [0x11afb31c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb31c))), 0x11ad3906u);
  /* 11ad3906 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad3908 jne 0x11ad3911 */
  if (!C.zf) goto L_11ad3911;
  /* 11ad390a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad390c jmp 0x11ad3a71 */
  goto L_11ad3a71;
L_11ad3911:;
  /* 11ad3911 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad3913 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad3915 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ad3918 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad3919 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad391c push edx */
  push32((uint32_t)(EDX));
  /* 11ad391d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad3920 push eax */
  push32((uint32_t)(EAX));
  /* 11ad3921 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3924 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad3925 call dword ptr [0x11afb30c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb30c))), 0x11ad392bu);
  /* 11ad392b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11ad392e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3932 jne 0x11ad393b */
  if (!C.zf) goto L_11ad393b;
  /* 11ad3934 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad3936 jmp 0x11ad3a71 */
  goto L_11ad3a71;
L_11ad393b:;
  /* 11ad393b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad393e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad3944 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad3946 je 0x11ad398b */
  if (C.zf) goto L_11ad398b;
  /* 11ad3948 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad394c je 0x11ad3986 */
  if (C.zf) goto L_11ad3986;
  /* 11ad394e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ad3951 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3954 jle 0x11ad395d */
  if ((C.zf||C.sf!=C.of)) goto L_11ad395d;
  /* 11ad3956 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad3958 jmp 0x11ad3a71 */
  goto L_11ad3a71;
L_11ad395d:;
  /* 11ad395d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad3960 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad3961 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ad3964 push edx */
  push32((uint32_t)(EDX));
  /* 11ad3965 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ad3968 push eax */
  push32((uint32_t)(EAX));
  /* 11ad3969 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad396c push ecx */
  push32((uint32_t)(ECX));
  /* 11ad396d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad3970 push edx */
  push32((uint32_t)(EDX));
  /* 11ad3971 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3974 push eax */
  push32((uint32_t)(EAX));
  /* 11ad3975 call dword ptr [0x11afb30c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb30c))), 0x11ad397bu);
  /* 11ad397b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad397d jne 0x11ad3986 */
  if (!C.zf) goto L_11ad3986;
  /* 11ad397f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad3981 jmp 0x11ad3a71 */
  goto L_11ad3a71;
L_11ad3986:;
  /* 11ad3986 jmp 0x11ad3a6a */
  goto L_11ad3a6a;
L_11ad398b:;
  /* 11ad398b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ad398e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11ad3991 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ad3998 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad399b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11ad399d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad39a0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11ad39a2 call 0x11acc800 */
  push32(0x11ad39a7u); f_11acc800();
  /* 11ad39a7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11ad39aa mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ad39ad mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ad39b0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11ad39b3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11ad39ba jmp 0x11ad39d3 */
  goto L_11ad39d3;
  /* 11ad39bc mov eax, 1 */
  EAX = (0x1u);
  /* 11ad39c1 ret  */
  ESPCHK(0x11ad3780u, _esp0);
  ESP += 4; return;
  /* 11ad39c2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad39c5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11ad39cc mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11ad39d3:;
  /* 11ad39d3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad39d7 jne 0x11ad39e0 */
  if (!C.zf) goto L_11ad39e0;
  /* 11ad39d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad39db jmp 0x11ad3a71 */
  goto L_11ad3a71;
L_11ad39e0:;
  /* 11ad39e0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad39e3 push eax */
  push32((uint32_t)(EAX));
  /* 11ad39e4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad39e7 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad39e8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ad39eb push edx */
  push32((uint32_t)(EDX));
  /* 11ad39ec mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad39ef push eax */
  push32((uint32_t)(EAX));
  /* 11ad39f0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad39f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad39f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad39f7 push edx */
  push32((uint32_t)(EDX));
  /* 11ad39f8 call dword ptr [0x11afb30c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb30c))), 0x11ad39feu);
  /* 11ad39fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad3a00 jne 0x11ad3a06 */
  if (!C.zf) goto L_11ad3a06;
  /* 11ad3a02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad3a04 jmp 0x11ad3a71 */
  goto L_11ad3a71;
L_11ad3a06:;
  /* 11ad3a06 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3a0a jne 0x11ad3a3a */
  if (!C.zf) goto L_11ad3a3a;
  /* 11ad3a0c push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad3a0e push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad3a10 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad3a12 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad3a14 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad3a17 push eax */
  push32((uint32_t)(EAX));
  /* 11ad3a18 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad3a1b push ecx */
  push32((uint32_t)(ECX));
  /* 11ad3a1c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11ad3a21 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ad3a24 push edx */
  push32((uint32_t)(EDX));
  /* 11ad3a25 call dword ptr [0x11afb3bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3bc))), 0x11ad3a2bu);
  /* 11ad3a2b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11ad3a2e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3a32 jne 0x11ad3a38 */
  if (!C.zf) goto L_11ad3a38;
  /* 11ad3a34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad3a36 jmp 0x11ad3a71 */
  goto L_11ad3a71;
L_11ad3a38:;
  /* 11ad3a38 jmp 0x11ad3a6a */
  goto L_11ad3a6a;
L_11ad3a3a:;
  /* 11ad3a3a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad3a3c push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad3a3e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad3a41 push eax */
  push32((uint32_t)(EAX));
  /* 11ad3a42 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ad3a45 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad3a46 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad3a49 push edx */
  push32((uint32_t)(EDX));
  /* 11ad3a4a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad3a4d push eax */
  push32((uint32_t)(EAX));
  /* 11ad3a4e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11ad3a53 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ad3a56 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad3a57 call dword ptr [0x11afb3bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3bc))), 0x11ad3a5du);
  /* 11ad3a5d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11ad3a60 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3a64 jne 0x11ad3a6a */
  if (!C.zf) goto L_11ad3a6a;
  /* 11ad3a66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad3a68 jmp 0x11ad3a71 */
  goto L_11ad3a71;
L_11ad3a6a:;
  /* 11ad3a6a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ad3a6d jmp 0x11ad3a71 */
  goto L_11ad3a71;
L_11ad3a6f:;
  /* 11ad3a6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ad3a71:;
  /* 11ad3a71 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11ad3a74 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad3a77 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11ad3a7e pop edi */
  EDI = (pop32());
  /* 11ad3a7f pop esi */
  ESI = (pop32());
  /* 11ad3a80 pop ebx */
  EBX = (pop32());
  /* 11ad3a81 mov esp, ebp */
  ESP = (EBP);
  /* 11ad3a83 pop ebp */
  EBP = (pop32());
  /* 11ad3a84 ret  */
  ESPCHK(0x11ad3780u, _esp0);
  ESP += 4; return;
}

/* FUN_10013a90 @ 0x11ad3a90 (80 bytes, 32 insns) */
void f_11ad3a90(void) {
  FTRACE(0x11ad3a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad3a90 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad3a91 mov ebp, esp */
  EBP = (ESP);
  /* 11ad3a93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad3a96 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad3a99 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ad3a9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3a9f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ad3aa2:;
  /* 11ad3aa2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad3aa5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad3aa8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad3aab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ad3aae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad3ab0 je 0x11ad3ac7 */
  if (C.zf) goto L_11ad3ac7;
  /* 11ad3ab2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad3ab5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ad3ab8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad3aba je 0x11ad3ac7 */
  if (C.zf) goto L_11ad3ac7;
  /* 11ad3abc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad3abf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3ac2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad3ac5 jmp 0x11ad3aa2 */
  goto L_11ad3aa2;
L_11ad3ac7:;
  /* 11ad3ac7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad3aca movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ad3acd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad3acf jne 0x11ad3ad9 */
  if (!C.zf) goto L_11ad3ad9;
  /* 11ad3ad1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad3ad4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad3ad7 jmp 0x11ad3adc */
  goto L_11ad3adc;
L_11ad3ad9:;
  /* 11ad3ad9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11ad3adc:;
  /* 11ad3adc mov esp, ebp */
  ESP = (EBP);
  /* 11ad3ade pop ebp */
  EBP = (pop32());
  /* 11ad3adf ret  */
  ESPCHK(0x11ad3a90u, _esp0);
  ESP += 4; return;
}

/* ___addl @ 0x11ad3ae0 (62 bytes, 23 insns) */
void f_11ad3ae0(void) {
  FTRACE(0x11ad3ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad3ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad3ae1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad3ae3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad3ae6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ad3aed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3af0 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3af3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad3af6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad3af9 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3afc jb 0x11ad3b06 */
  if (C.cf) goto L_11ad3b06;
  /* 11ad3afe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad3b01 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3b04 jae 0x11ad3b0f */
  if (!C.cf) goto L_11ad3b0f;
L_11ad3b06:;
  /* 11ad3b06 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad3b09 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3b0c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11ad3b0f:;
  /* 11ad3b0f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad3b12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad3b15 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11ad3b17 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad3b1a mov esp, ebp */
  ESP = (EBP);
  /* 11ad3b1c pop ebp */
  EBP = (pop32());
  /* 11ad3b1d ret  */
  ESPCHK(0x11ad3ae0u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x11ad3b20 (173 bytes, 66 insns) */
void f_11ad3b20(void) {
  FTRACE(0x11ad3b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad3b20 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad3b21 mov ebp, esp */
  EBP = (ESP);
  /* 11ad3b23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad3b26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3b29 push eax */
  push32((uint32_t)(EAX));
  /* 11ad3b2a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad3b2d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad3b2f push edx */
  push32((uint32_t)(EDX));
  /* 11ad3b30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3b33 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ad3b35 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad3b36 call 0x11ad3ae0 */
  push32(0x11ad3b3bu); f_11ad3ae0();
  /* 11ad3b3b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3b3e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad3b41 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3b45 je 0x11ad3b77 */
  if (C.zf) goto L_11ad3b77;
  /* 11ad3b47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3b4a add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3b4d push edx */
  push32((uint32_t)(EDX));
  /* 11ad3b4e push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad3b50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3b53 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ad3b56 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad3b57 call 0x11ad3ae0 */
  push32(0x11ad3b5cu); f_11ad3ae0();
  /* 11ad3b5c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3b5f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ad3b62 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3b66 je 0x11ad3b77 */
  if (C.zf) goto L_11ad3b77;
  /* 11ad3b68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3b6b mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ad3b6e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3b71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3b74 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
L_11ad3b77:;
  /* 11ad3b77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3b7a add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3b7d push edx */
  push32((uint32_t)(EDX));
  /* 11ad3b7e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad3b81 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ad3b84 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad3b85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3b88 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ad3b8b push eax */
  push32((uint32_t)(EAX));
  /* 11ad3b8c call 0x11ad3ae0 */
  push32(0x11ad3b91u); f_11ad3ae0();
  /* 11ad3b91 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3b94 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ad3b97 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3b9b je 0x11ad3bac */
  if (C.zf) goto L_11ad3bac;
  /* 11ad3b9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3ba0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ad3ba3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3ba6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3ba9 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_11ad3bac:;
  /* 11ad3bac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3baf add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3bb2 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad3bb3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad3bb6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ad3bb9 push eax */
  push32((uint32_t)(EAX));
  /* 11ad3bba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3bbd mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ad3bc0 push edx */
  push32((uint32_t)(EDX));
  /* 11ad3bc1 call 0x11ad3ae0 */
  push32(0x11ad3bc6u); f_11ad3ae0();
  /* 11ad3bc6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3bc9 mov esp, ebp */
  ESP = (EBP);
  /* 11ad3bcb pop ebp */
  EBP = (pop32());
  /* 11ad3bcc ret  */
  ESPCHK(0x11ad3b20u, _esp0);
  ESP += 4; return;
}

/* ___shl_12 @ 0x11ad3bd0 (96 bytes, 37 insns) */
void f_11ad3bd0(void) {
  FTRACE(0x11ad3bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad3bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad3bd1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad3bd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad3bd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3bd9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ad3bdb and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad3be1 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ad3be3 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad3be5 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ad3be7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ad3bea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3bed mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ad3bf0 and eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad3bf5 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ad3bf7 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad3bf9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ad3bfb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ad3bfe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3c01 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad3c03 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11ad3c05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3c08 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ad3c0a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3c0d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ad3c10 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11ad3c12 or edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11ad3c15 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3c18 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11ad3c1b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3c1e mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ad3c21 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11ad3c23 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11ad3c26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3c29 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11ad3c2c mov esp, ebp */
  ESP = (EBP);
  /* 11ad3c2e pop ebp */
  EBP = (pop32());
  /* 11ad3c2f ret  */
  ESPCHK(0x11ad3bd0u, _esp0);
  ESP += 4; return;
}

/* ___shr_12 @ 0x11ad3c30 (99 bytes, 37 insns) */
void f_11ad3c30(void) {
  FTRACE(0x11ad3c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad3c30 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad3c31 mov ebp, esp */
  EBP = (ESP);
  /* 11ad3c33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad3c36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3c39 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ad3c3c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad3c3f neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ad3c41 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad3c43 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad3c49 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ad3c4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3c4f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ad3c52 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad3c55 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ad3c57 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad3c59 and eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad3c5e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad3c61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3c64 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ad3c67 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11ad3c69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3c6c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11ad3c6f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3c72 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ad3c75 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11ad3c77 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11ad3c7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3c7d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11ad3c80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3c83 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad3c85 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11ad3c87 or edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11ad3c8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3c8d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ad3c8f mov esp, ebp */
  ESP = (EBP);
  /* 11ad3c91 pop ebp */
  EBP = (pop32());
  /* 11ad3c92 ret  */
  ESPCHK(0x11ad3c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ca0 @ 0x11ad3ca0 (315 bytes, 101 insns) */
void f_11ad3ca0(void) {
  FTRACE(0x11ad3ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad3ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad3ca1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad3ca3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad3ca6 mov word ptr [ebp - 0x10], 0x404e */
  w16((uint32_t)(EBP + -0x10), (0x404eu));
  /* 11ad3cac mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad3caf mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11ad3cb5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad3cb8 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11ad3cbf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad3cc2 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11ad3cc9 jmp 0x11ad3cdd */
  goto L_11ad3cdd;
L_11ad3ccb:;
  /* 11ad3ccb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad3cce sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad3cd1 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11ad3cd4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3cd7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3cda mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11ad3cdd:;
  /* 11ad3cdd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3ce1 jbe 0x11ad3d57 */
  if ((C.cf||C.zf)) goto L_11ad3d57;
  /* 11ad3ce3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad3ce6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ad3ce8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ad3ceb mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ad3cee mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ad3cf1 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ad3cf4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ad3cf7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad3cfa push eax */
  push32((uint32_t)(EAX));
  /* 11ad3cfb call 0x11ad3bd0 */
  push32(0x11ad3d00u); f_11ad3bd0();
  /* 11ad3d00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3d03 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad3d06 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad3d07 call 0x11ad3bd0 */
  push32(0x11ad3d0cu); f_11ad3bd0();
  /* 11ad3d0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3d0f lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11ad3d12 push edx */
  push32((uint32_t)(EDX));
  /* 11ad3d13 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad3d16 push eax */
  push32((uint32_t)(EAX));
  /* 11ad3d17 call 0x11ad3b20 */
  push32(0x11ad3d1cu); f_11ad3b20();
  /* 11ad3d1c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3d1f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad3d22 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad3d23 call 0x11ad3bd0 */
  push32(0x11ad3d28u); f_11ad3bd0();
  /* 11ad3d28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3d2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad3d2e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ad3d31 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ad3d34 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ad3d3b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ad3d42 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11ad3d45 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad3d46 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad3d49 push edx */
  push32((uint32_t)(EDX));
  /* 11ad3d4a call 0x11ad3b20 */
  push32(0x11ad3d4fu); f_11ad3b20();
  /* 11ad3d4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3d52 jmp 0x11ad3ccb */
  goto L_11ad3ccb;
L_11ad3d57:;
  /* 11ad3d57 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad3d5a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3d5e jne 0x11ad3da3 */
  if (!C.zf) goto L_11ad3da3;
  /* 11ad3d60 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad3d63 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ad3d66 shr edx, 0x10 */
  EDX = (sh_shr((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 11ad3d69 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad3d6c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11ad3d6f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad3d72 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ad3d75 shl edx, 0x10 */
  EDX = (sh_shl((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 11ad3d78 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad3d7b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ad3d7d shr ecx, 0x10 */
  ECX = (sh_shr((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 11ad3d80 or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ad3d82 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad3d85 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11ad3d88 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad3d8b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad3d8d shl edx, 0x10 */
  EDX = (sh_shl((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 11ad3d90 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad3d93 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ad3d95 mov cx, word ptr [ebp - 0x10] */
  CX = (r16((uint32_t)(EBP + -0x10)));
  /* 11ad3d99 sub cx, 0x10 */
  { uint32_t _a=(CX),_b=(0x10u),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11ad3d9d mov word ptr [ebp - 0x10], cx */
  w16((uint32_t)(EBP + -0x10), (CX));
  /* 11ad3da1 jmp 0x11ad3d57 */
  goto L_11ad3d57;
L_11ad3da3:;
  /* 11ad3da3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad3da6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ad3da9 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad3dae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad3db0 jne 0x11ad3dcc */
  if (!C.zf) goto L_11ad3dcc;
  /* 11ad3db2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad3db5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad3db6 call 0x11ad3bd0 */
  push32(0x11ad3dbbu); f_11ad3bd0();
  /* 11ad3dbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3dbe mov dx, word ptr [ebp - 0x10] */
  DX = (r16((uint32_t)(EBP + -0x10)));
  /* 11ad3dc2 sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11ad3dc6 mov word ptr [ebp - 0x10], dx */
  w16((uint32_t)(EBP + -0x10), (DX));
  /* 11ad3dca jmp 0x11ad3da3 */
  goto L_11ad3da3;
L_11ad3dcc:;
  /* 11ad3dcc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad3dcf mov cx, word ptr [ebp - 0x10] */
  CX = (r16((uint32_t)(EBP + -0x10)));
  /* 11ad3dd3 mov word ptr [eax + 0xa], cx */
  w16((uint32_t)(EAX + 0xa), (CX));
  /* 11ad3dd7 mov esp, ebp */
  ESP = (EBP);
  /* 11ad3dd9 pop ebp */
  EBP = (pop32());
  /* 11ad3dda ret  */
  ESPCHK(0x11ad3ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013de0 @ 0x11ad3de0 (2586 bytes, 690 insns) [4 switch table(s)] */
void f_11ad3de0(void) {
  FTRACE(0x11ad3de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad3de0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad3de1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad3de3 sub esp, 0xb4 */
  { uint32_t _a=(ESP),_b=(0xb4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad3de9 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11ad3dec mov dword ptr [ebp - 0x68], eax */
  w32((uint32_t)(EBP + -0x68), (EAX));
  /* 11ad3def mov word ptr [ebp - 0x1c], 0 */
  w16((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11ad3df5 mov dword ptr [ebp - 0x74], 1 */
  w32((uint32_t)(EBP + -0x74), (0x1u));
  /* 11ad3dfc mov dword ptr [ebp - 0x70], 0 */
  w32((uint32_t)(EBP + -0x70), (0x0u));
  /* 11ad3e03 mov dword ptr [ebp - 0x54], 0 */
  w32((uint32_t)(EBP + -0x54), (0x0u));
  /* 11ad3e0a mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ad3e11 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11ad3e18 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 11ad3e1f mov dword ptr [ebp - 0x78], 0 */
  w32((uint32_t)(EBP + -0x78), (0x0u));
  /* 11ad3e26 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11ad3e2d mov dword ptr [ebp - 0x6c], 0 */
  w32((uint32_t)(EBP + -0x6c), (0x0u));
  /* 11ad3e34 mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11ad3e3b mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 11ad3e42 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad3e45 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ad3e48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad3e4b mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11ad3e4e jmp 0x11ad3e59 */
  goto L_11ad3e59;
L_11ad3e50:;
  /* 11ad3e50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad3e53 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3e56 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ad3e59:;
  /* 11ad3e59 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad3e5c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ad3e5f cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3e62 je 0x11ad3e85 */
  if (C.zf) goto L_11ad3e85;
  /* 11ad3e64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad3e67 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ad3e6a cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3e6d je 0x11ad3e85 */
  if (C.zf) goto L_11ad3e85;
  /* 11ad3e6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad3e72 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ad3e75 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3e78 je 0x11ad3e85 */
  if (C.zf) goto L_11ad3e85;
  /* 11ad3e7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad3e7d movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ad3e80 cmp edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3e83 jne 0x11ad3e87 */
  if (!C.zf) goto L_11ad3e87;
L_11ad3e85:;
  /* 11ad3e85 jmp 0x11ad3e50 */
  goto L_11ad3e50;
L_11ad3e87:;
  /* 11ad3e87 cmp dword ptr [ebp - 0x4c], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3e8b je 0x11ad45e8 */
  if (C.zf) goto L_11ad45e8;
  /* 11ad3e91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad3e94 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ad3e96 mov byte ptr [ebp - 0x3c], cl */
  w8((uint32_t)(EBP + -0x3c), (CL));
  /* 11ad3e99 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad3e9c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad3e9f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ad3ea2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11ad3ea5 mov dword ptr [ebp - 0x80], eax */
  w32((uint32_t)(EBP + -0x80), (EAX));
  /* 11ad3ea8 cmp dword ptr [ebp - 0x80], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x80))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3eac ja 0x11ad45e3 */
  if ((!C.cf&&!C.zf)) goto L_11ad45e3;
  /* 11ad3eb2 mov ecx, dword ptr [ebp - 0x80] */
  ECX = (r32((uint32_t)(EBP + -0x80)));
  /* 11ad3eb5 jmp dword ptr [ecx*4 + 0x11ad47fa] */
  switch (ECX) {
    case 0: goto L_11ad3ebc;
    case 1: goto L_11ad3f5a;
    case 2: goto L_11ad4010;
    case 3: goto L_11ad407b;
    case 4: goto L_11ad4193;
    case 5: goto L_11ad42c5;
    case 6: goto L_11ad433b;
    case 7: goto L_11ad4420;
    case 8: goto L_11ad43c2;
    case 9: goto L_11ad4473;
    case 10: goto L_11ad45e3;
    case 11: goto L_11ad457f;
    case 12: goto L_11ad3fe9;
    case 13: goto L_11ad3fd7;
    case 14: goto L_11ad3fe0;
    case 15: goto L_11ad3ffb;
    default: x86_unimpl("switch@0x11ad3eb5 out of table"); return;
  }
L_11ad3ebc:;
  /* 11ad3ebc movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ad3ec0 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3ec3 jl 0x11ad3ee0 */
  if ((C.sf!=C.of)) goto L_11ad3ee0;
  /* 11ad3ec5 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ad3ec9 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3ecc jg 0x11ad3ee0 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ad3ee0;
  /* 11ad3ece mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 11ad3ed5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad3ed8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad3edb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ad3ede jmp 0x11ad3f55 */
  goto L_11ad3f55;
L_11ad3ee0:;
  /* 11ad3ee0 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ad3ee4 movsx eax, byte ptr [0x11af71d4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11af71d4))));
  /* 11ad3eeb cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3eed jne 0x11ad3ef8 */
  if (!C.zf) goto L_11ad3ef8;
  /* 11ad3eef mov dword ptr [ebp - 0x4c], 5 */
  w32((uint32_t)(EBP + -0x4c), (0x5u));
  /* 11ad3ef6 jmp 0x11ad3f55 */
  goto L_11ad3f55;
L_11ad3ef8:;
  /* 11ad3ef8 mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11ad3efb mov byte ptr [ebp - 0x84], cl */
  w8((uint32_t)(EBP + -0x84), (CL));
  /* 11ad3f01 cmp byte ptr [ebp - 0x84], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ad3f08 je 0x11ad3f27 */
  if (C.zf) goto L_11ad3f27;
  /* 11ad3f0a cmp byte ptr [ebp - 0x84], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ad3f11 je 0x11ad3f36 */
  if (C.zf) goto L_11ad3f36;
  /* 11ad3f13 cmp byte ptr [ebp - 0x84], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ad3f1a je 0x11ad3f1e */
  if (C.zf) goto L_11ad3f1e;
  /* 11ad3f1c jmp 0x11ad3f45 */
  goto L_11ad3f45;
L_11ad3f1e:;
  /* 11ad3f1e mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 11ad3f25 jmp 0x11ad3f55 */
  goto L_11ad3f55;
L_11ad3f27:;
  /* 11ad3f27 mov dword ptr [ebp - 0x4c], 2 */
  w32((uint32_t)(EBP + -0x4c), (0x2u));
  /* 11ad3f2e mov word ptr [ebp - 0x1c], 0 */
  w16((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11ad3f34 jmp 0x11ad3f55 */
  goto L_11ad3f55;
L_11ad3f36:;
  /* 11ad3f36 mov dword ptr [ebp - 0x4c], 2 */
  w32((uint32_t)(EBP + -0x4c), (0x2u));
  /* 11ad3f3d mov word ptr [ebp - 0x1c], 0x8000 */
  w16((uint32_t)(EBP + -0x1c), (0x8000u));
  /* 11ad3f43 jmp 0x11ad3f55 */
  goto L_11ad3f55;
L_11ad3f45:;
  /* 11ad3f45 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11ad3f4c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad3f4f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad3f52 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ad3f55:;
  /* 11ad3f55 jmp 0x11ad45e3 */
  goto L_11ad45e3;
L_11ad3f5a:;
  /* 11ad3f5a mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 11ad3f61 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ad3f65 cmp eax, 0x31 */
  { uint32_t _a=(EAX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3f68 jl 0x11ad3f88 */
  if ((C.sf!=C.of)) goto L_11ad3f88;
  /* 11ad3f6a movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ad3f6e cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3f71 jg 0x11ad3f88 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ad3f88;
  /* 11ad3f73 mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 11ad3f7a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad3f7d sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad3f80 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ad3f83 jmp 0x11ad400b */
  goto L_11ad400b;
L_11ad3f88:;
  /* 11ad3f88 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ad3f8c movsx ecx, byte ptr [0x11af71d4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11af71d4))));
  /* 11ad3f93 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3f95 jne 0x11ad3fa0 */
  if (!C.zf) goto L_11ad3fa0;
  /* 11ad3f97 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 11ad3f9e jmp 0x11ad400b */
  goto L_11ad400b;
L_11ad3fa0:;
  /* 11ad3fa0 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ad3fa4 mov dword ptr [ebp - 0x88], edx */
  w32((uint32_t)(EBP + -0x88), (EDX));
  /* 11ad3faa mov eax, dword ptr [ebp - 0x88] */
  EAX = (r32((uint32_t)(EBP + -0x88)));
  /* 11ad3fb0 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad3fb3 mov dword ptr [ebp - 0x88], eax */
  w32((uint32_t)(EBP + -0x88), (EAX));
  /* 11ad3fb9 cmp dword ptr [ebp - 0x88], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad3fc0 ja 0x11ad3ffb */
  if ((!C.cf&&!C.zf)) goto L_11ad3ffb;
  /* 11ad3fc2 mov edx, dword ptr [ebp - 0x88] */
  EDX = (r32((uint32_t)(EBP + -0x88)));
  /* 11ad3fc8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad3fca mov cl, byte ptr [edx + 0x11ad483a] */
  CL = (r8((uint32_t)(EDX + 0x11ad483a)));
  /* 11ad3fd0 jmp dword ptr [ecx*4 + 0x11ad482a] */
  switch (ECX) {
    case 0: goto L_11ad3fe9;
    case 1: goto L_11ad3fd7;
    case 2: goto L_11ad3fe0;
    case 3: goto L_11ad3ffb;
    default: x86_unimpl("switch@0x11ad3fd0 out of table"); return;
  }
L_11ad3fd7:;
  /* 11ad3fd7 mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 11ad3fde jmp 0x11ad400b */
  goto L_11ad400b;
L_11ad3fe0:;
  /* 11ad3fe0 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 11ad3fe7 jmp 0x11ad400b */
  goto L_11ad400b;
L_11ad3fe9:;
  /* 11ad3fe9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad3fec sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad3fef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad3ff2 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 11ad3ff9 jmp 0x11ad400b */
  goto L_11ad400b;
L_11ad3ffb:;
  /* 11ad3ffb mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11ad4002 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad4005 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad4008 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ad400b:;
  /* 11ad400b jmp 0x11ad45e3 */
  goto L_11ad45e3;
L_11ad4010:;
  /* 11ad4010 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ad4014 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4017 jl 0x11ad4034 */
  if ((C.sf!=C.of)) goto L_11ad4034;
  /* 11ad4019 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ad401d cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4020 jg 0x11ad4034 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ad4034;
  /* 11ad4022 mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 11ad4029 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad402c sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad402f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ad4032 jmp 0x11ad4076 */
  goto L_11ad4076;
L_11ad4034:;
  /* 11ad4034 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ad4038 movsx eax, byte ptr [0x11af71d4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11af71d4))));
  /* 11ad403f cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4041 jne 0x11ad404c */
  if (!C.zf) goto L_11ad404c;
  /* 11ad4043 mov dword ptr [ebp - 0x4c], 5 */
  w32((uint32_t)(EBP + -0x4c), (0x5u));
  /* 11ad404a jmp 0x11ad4076 */
  goto L_11ad4076;
L_11ad404c:;
  /* 11ad404c mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11ad404f mov byte ptr [ebp - 0x8c], cl */
  w8((uint32_t)(EBP + -0x8c), (CL));
  /* 11ad4055 cmp byte ptr [ebp - 0x8c], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8c))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ad405c je 0x11ad4060 */
  if (C.zf) goto L_11ad4060;
  /* 11ad405e jmp 0x11ad4069 */
  goto L_11ad4069;
L_11ad4060:;
  /* 11ad4060 mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 11ad4067 jmp 0x11ad4076 */
  goto L_11ad4076;
L_11ad4069:;
  /* 11ad4069 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11ad4070 mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 11ad4073 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ad4076:;
  /* 11ad4076 jmp 0x11ad45e3 */
  goto L_11ad45e3;
L_11ad407b:;
  /* 11ad407b mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 11ad4082 jmp 0x11ad4095 */
  goto L_11ad4095;
L_11ad4084:;
  /* 11ad4084 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad4087 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ad4089 mov byte ptr [ebp - 0x3c], cl */
  w8((uint32_t)(EBP + -0x3c), (CL));
  /* 11ad408c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad408f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4092 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ad4095:;
  /* 11ad4095 cmp dword ptr [0x11af71d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11af71d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad409c jle 0x11ad40b9 */
  if ((C.zf||C.sf!=C.of)) goto L_11ad40b9;
  /* 11ad409e push 4 */
  push32((uint32_t)(0x4u));
  /* 11ad40a0 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ad40a3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad40a8 push eax */
  push32((uint32_t)(EAX));
  /* 11ad40a9 call 0x11ace1b0 */
  push32(0x11ad40aeu); f_11ace1b0();
  /* 11ad40ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad40b1 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 11ad40b7 jmp 0x11ad40d7 */
  goto L_11ad40d7;
L_11ad40b9:;
  /* 11ad40b9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ad40bc and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ad40c2 mov edx, dword ptr [0x11af6fb8] */
  EDX = (r32((uint32_t)(0x11af6fb8)));
  /* 11ad40c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad40ca mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11ad40ce and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad40d1 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
L_11ad40d7:;
  /* 11ad40d7 cmp dword ptr [ebp - 0x90], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad40de je 0x11ad4114 */
  if (C.zf) goto L_11ad4114;
  /* 11ad40e0 cmp dword ptr [ebp - 0x70], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad40e4 jae 0x11ad4106 */
  if (!C.cf) goto L_11ad4106;
  /* 11ad40e6 mov ecx, dword ptr [ebp - 0x70] */
  ECX = (r32((uint32_t)(EBP + -0x70)));
  /* 11ad40e9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad40ec mov dword ptr [ebp - 0x70], ecx */
  w32((uint32_t)(EBP + -0x70), (ECX));
  /* 11ad40ef movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ad40f3 sub edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad40f6 mov eax, dword ptr [ebp - 0x68] */
  EAX = (r32((uint32_t)(EBP + -0x68)));
  /* 11ad40f9 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11ad40fb mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 11ad40fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4101 mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11ad4104 jmp 0x11ad410f */
  goto L_11ad410f;
L_11ad4106:;
  /* 11ad4106 mov edx, dword ptr [ebp - 0x6c] */
  EDX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11ad4109 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad410c mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_11ad410f:;
  /* 11ad410f jmp 0x11ad4084 */
  goto L_11ad4084;
L_11ad4114:;
  /* 11ad4114 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ad4118 movsx ecx, byte ptr [0x11af71d4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11af71d4))));
  /* 11ad411f cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4121 jne 0x11ad412c */
  if (!C.zf) goto L_11ad412c;
  /* 11ad4123 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 11ad412a jmp 0x11ad418e */
  goto L_11ad418e;
L_11ad412c:;
  /* 11ad412c movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ad4130 mov dword ptr [ebp - 0x94], edx */
  w32((uint32_t)(EBP + -0x94), (EDX));
  /* 11ad4136 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 11ad413c sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad413f mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 11ad4145 cmp dword ptr [ebp - 0x94], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad414c ja 0x11ad417e */
  if ((!C.cf&&!C.zf)) goto L_11ad417e;
  /* 11ad414e mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11ad4154 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad4156 mov cl, byte ptr [edx + 0x11ad4881] */
  CL = (r8((uint32_t)(EDX + 0x11ad4881)));
  /* 11ad415c jmp dword ptr [ecx*4 + 0x11ad4875] */
  switch (ECX) {
    case 0: goto L_11ad416c;
    case 1: goto L_11ad4163;
    case 2: goto L_11ad417e;
    default: x86_unimpl("switch@0x11ad415c out of table"); return;
  }
L_11ad4163:;
  /* 11ad4163 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 11ad416a jmp 0x11ad418e */
  goto L_11ad418e;
L_11ad416c:;
  /* 11ad416c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad416f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad4172 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad4175 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 11ad417c jmp 0x11ad418e */
  goto L_11ad418e;
L_11ad417e:;
  /* 11ad417e mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11ad4185 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad4188 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad418b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ad418e:;
  /* 11ad418e jmp 0x11ad45e3 */
  goto L_11ad45e3;
L_11ad4193:;
  /* 11ad4193 mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 11ad419a mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 11ad41a1 cmp dword ptr [ebp - 0x70], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad41a5 jne 0x11ad41ce */
  if (!C.zf) goto L_11ad41ce;
  /* 11ad41a7 jmp 0x11ad41ba */
  goto L_11ad41ba;
L_11ad41a9:;
  /* 11ad41a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad41ac mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ad41ae mov byte ptr [ebp - 0x3c], al */
  w8((uint32_t)(EBP + -0x3c), (AL));
  /* 11ad41b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad41b4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad41b7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ad41ba:;
  /* 11ad41ba movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ad41be cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad41c1 jne 0x11ad41ce */
  if (!C.zf) goto L_11ad41ce;
  /* 11ad41c3 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11ad41c6 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad41c9 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
  /* 11ad41cc jmp 0x11ad41a9 */
  goto L_11ad41a9;
L_11ad41ce:;
  /* 11ad41ce jmp 0x11ad41e1 */
  goto L_11ad41e1;
L_11ad41d0:;
  /* 11ad41d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad41d3 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ad41d5 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 11ad41d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad41db add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad41de mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ad41e1:;
  /* 11ad41e1 cmp dword ptr [0x11af71d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11af71d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad41e8 jle 0x11ad4206 */
  if ((C.zf||C.sf!=C.of)) goto L_11ad4206;
  /* 11ad41ea push 4 */
  push32((uint32_t)(0x4u));
  /* 11ad41ec mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ad41ef and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ad41f5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad41f6 call 0x11ace1b0 */
  push32(0x11ad41fbu); f_11ace1b0();
  /* 11ad41fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad41fe mov dword ptr [ebp - 0x98], eax */
  w32((uint32_t)(EBP + -0x98), (EAX));
  /* 11ad4204 jmp 0x11ad4223 */
  goto L_11ad4223;
L_11ad4206:;
  /* 11ad4206 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ad4209 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ad420f mov eax, dword ptr [0x11af6fb8] */
  EAX = (r32((uint32_t)(0x11af6fb8)));
  /* 11ad4214 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad4216 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11ad421a and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad421d mov dword ptr [ebp - 0x98], ecx */
  w32((uint32_t)(EBP + -0x98), (ECX));
L_11ad4223:;
  /* 11ad4223 cmp dword ptr [ebp - 0x98], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad422a je 0x11ad425e */
  if (C.zf) goto L_11ad425e;
  /* 11ad422c cmp dword ptr [ebp - 0x70], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4230 jae 0x11ad4259 */
  if (!C.cf) goto L_11ad4259;
  /* 11ad4232 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11ad4235 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4238 mov dword ptr [ebp - 0x70], edx */
  w32((uint32_t)(EBP + -0x70), (EDX));
  /* 11ad423b movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ad423f sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad4242 mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 11ad4245 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11ad4247 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11ad424a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad424d mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
  /* 11ad4250 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11ad4253 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad4256 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
L_11ad4259:;
  /* 11ad4259 jmp 0x11ad41d0 */
  goto L_11ad41d0;
L_11ad425e:;
  /* 11ad425e movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ad4262 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11ad4268 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11ad426e sub edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad4271 mov dword ptr [ebp - 0x9c], edx */
  w32((uint32_t)(EBP + -0x9c), (EDX));
  /* 11ad4277 cmp dword ptr [ebp - 0x9c], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x9c))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad427e ja 0x11ad42b0 */
  if ((!C.cf&&!C.zf)) goto L_11ad42b0;
  /* 11ad4280 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11ad4286 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad4288 mov al, byte ptr [ecx + 0x11ad48c8] */
  AL = (r8((uint32_t)(ECX + 0x11ad48c8)));
  /* 11ad428e jmp dword ptr [eax*4 + 0x11ad48bc] */
  switch (EAX) {
    case 0: goto L_11ad429e;
    case 1: goto L_11ad4295;
    case 2: goto L_11ad42b0;
    default: x86_unimpl("switch@0x11ad428e out of table"); return;
  }
L_11ad4295:;
  /* 11ad4295 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 11ad429c jmp 0x11ad42c0 */
  goto L_11ad42c0;
L_11ad429e:;
  /* 11ad429e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad42a1 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad42a4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ad42a7 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 11ad42ae jmp 0x11ad42c0 */
  goto L_11ad42c0;
L_11ad42b0:;
  /* 11ad42b0 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11ad42b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad42ba sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad42bd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ad42c0:;
  /* 11ad42c0 jmp 0x11ad45e3 */
  goto L_11ad45e3;
L_11ad42c5:;
  /* 11ad42c5 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 11ad42cc cmp dword ptr [0x11af71d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11af71d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad42d3 jle 0x11ad42f1 */
  if ((C.zf||C.sf!=C.of)) goto L_11ad42f1;
  /* 11ad42d5 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ad42d7 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ad42da and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ad42e0 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad42e1 call 0x11ace1b0 */
  push32(0x11ad42e6u); f_11ace1b0();
  /* 11ad42e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad42e9 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 11ad42ef jmp 0x11ad430e */
  goto L_11ad430e;
L_11ad42f1:;
  /* 11ad42f1 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ad42f4 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ad42fa mov eax, dword ptr [0x11af6fb8] */
  EAX = (r32((uint32_t)(0x11af6fb8)));
  /* 11ad42ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad4301 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11ad4305 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad4308 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
L_11ad430e:;
  /* 11ad430e cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4315 je 0x11ad4329 */
  if (C.zf) goto L_11ad4329;
  /* 11ad4317 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 11ad431e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad4321 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad4324 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ad4327 jmp 0x11ad4336 */
  goto L_11ad4336;
L_11ad4329:;
  /* 11ad4329 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11ad4330 mov eax, dword ptr [ebp - 0x64] */
  EAX = (r32((uint32_t)(EBP + -0x64)));
  /* 11ad4333 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ad4336:;
  /* 11ad4336 jmp 0x11ad45e3 */
  goto L_11ad45e3;
L_11ad433b:;
  /* 11ad433b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad433e sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad4341 mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 11ad4344 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ad4348 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad434b jl 0x11ad4368 */
  if ((C.sf!=C.of)) goto L_11ad4368;
  /* 11ad434d movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ad4351 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4354 jg 0x11ad4368 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ad4368;
  /* 11ad4356 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 11ad435d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad4360 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad4363 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ad4366 jmp 0x11ad43bd */
  goto L_11ad43bd;
L_11ad4368:;
  /* 11ad4368 mov dl, byte ptr [ebp - 0x3c] */
  DL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11ad436b mov byte ptr [ebp - 0xa4], dl */
  w8((uint32_t)(EBP + -0xa4), (DL));
  /* 11ad4371 cmp byte ptr [ebp - 0xa4], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ad4378 je 0x11ad43a7 */
  if (C.zf) goto L_11ad43a7;
  /* 11ad437a cmp byte ptr [ebp - 0xa4], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ad4381 je 0x11ad4397 */
  if (C.zf) goto L_11ad4397;
  /* 11ad4383 cmp byte ptr [ebp - 0xa4], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ad438a je 0x11ad438e */
  if (C.zf) goto L_11ad438e;
  /* 11ad438c jmp 0x11ad43b0 */
  goto L_11ad43b0;
L_11ad438e:;
  /* 11ad438e mov dword ptr [ebp - 0x4c], 8 */
  w32((uint32_t)(EBP + -0x4c), (0x8u));
  /* 11ad4395 jmp 0x11ad43bd */
  goto L_11ad43bd;
L_11ad4397:;
  /* 11ad4397 mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 11ad439e mov dword ptr [ebp - 0x74], 0xffffffff */
  w32((uint32_t)(EBP + -0x74), (0xffffffffu));
  /* 11ad43a5 jmp 0x11ad43bd */
  goto L_11ad43bd;
L_11ad43a7:;
  /* 11ad43a7 mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 11ad43ae jmp 0x11ad43bd */
  goto L_11ad43bd;
L_11ad43b0:;
  /* 11ad43b0 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11ad43b7 mov eax, dword ptr [ebp - 0x64] */
  EAX = (r32((uint32_t)(EBP + -0x64)));
  /* 11ad43ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ad43bd:;
  /* 11ad43bd jmp 0x11ad45e3 */
  goto L_11ad45e3;
L_11ad43c2:;
  /* 11ad43c2 mov dword ptr [ebp - 0x18], 1 */
  w32((uint32_t)(EBP + -0x18), (0x1u));
  /* 11ad43c9 jmp 0x11ad43dc */
  goto L_11ad43dc;
L_11ad43cb:;
  /* 11ad43cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad43ce mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ad43d0 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 11ad43d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad43d6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad43d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ad43dc:;
  /* 11ad43dc movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ad43e0 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad43e3 jne 0x11ad43e7 */
  if (!C.zf) goto L_11ad43e7;
  /* 11ad43e5 jmp 0x11ad43cb */
  goto L_11ad43cb;
L_11ad43e7:;
  /* 11ad43e7 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ad43eb cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad43ee jl 0x11ad440b */
  if ((C.sf!=C.of)) goto L_11ad440b;
  /* 11ad43f0 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ad43f4 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad43f7 jg 0x11ad440b */
  if ((!C.zf&&C.sf==C.of)) goto L_11ad440b;
  /* 11ad43f9 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 11ad4400 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad4403 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad4406 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ad4409 jmp 0x11ad441b */
  goto L_11ad441b;
L_11ad440b:;
  /* 11ad440b mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11ad4412 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad4415 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad4418 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ad441b:;
  /* 11ad441b jmp 0x11ad45e3 */
  goto L_11ad45e3;
L_11ad4420:;
  /* 11ad4420 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ad4424 cmp eax, 0x31 */
  { uint32_t _a=(EAX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4427 jl 0x11ad4444 */
  if ((C.sf!=C.of)) goto L_11ad4444;
  /* 11ad4429 movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ad442d cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4430 jg 0x11ad4444 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ad4444;
  /* 11ad4432 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 11ad4439 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad443c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad443f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ad4442 jmp 0x11ad446e */
  goto L_11ad446e;
L_11ad4444:;
  /* 11ad4444 mov al, byte ptr [ebp - 0x3c] */
  AL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11ad4447 mov byte ptr [ebp - 0xa8], al */
  w8((uint32_t)(EBP + -0xa8), (AL));
  /* 11ad444d cmp byte ptr [ebp - 0xa8], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa8))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ad4454 je 0x11ad4458 */
  if (C.zf) goto L_11ad4458;
  /* 11ad4456 jmp 0x11ad4461 */
  goto L_11ad4461;
L_11ad4458:;
  /* 11ad4458 mov dword ptr [ebp - 0x4c], 8 */
  w32((uint32_t)(EBP + -0x4c), (0x8u));
  /* 11ad445f jmp 0x11ad446e */
  goto L_11ad446e;
L_11ad4461:;
  /* 11ad4461 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11ad4468 mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 11ad446b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ad446e:;
  /* 11ad446e jmp 0x11ad45e3 */
  goto L_11ad45e3;
L_11ad4473:;
  /* 11ad4473 mov dword ptr [ebp - 0x18], 1 */
  w32((uint32_t)(EBP + -0x18), (0x1u));
  /* 11ad447a mov dword ptr [ebp - 0x7c], 0 */
  w32((uint32_t)(EBP + -0x7c), (0x0u));
  /* 11ad4481 jmp 0x11ad4494 */
  goto L_11ad4494;
L_11ad4483:;
  /* 11ad4483 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad4486 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ad4488 mov byte ptr [ebp - 0x3c], al */
  w8((uint32_t)(EBP + -0x3c), (AL));
  /* 11ad448b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad448e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4491 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ad4494:;
  /* 11ad4494 cmp dword ptr [0x11af71d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11af71d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad449b jle 0x11ad44b9 */
  if ((C.zf||C.sf!=C.of)) goto L_11ad44b9;
  /* 11ad449d push 4 */
  push32((uint32_t)(0x4u));
  /* 11ad449f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ad44a2 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ad44a8 push edx */
  push32((uint32_t)(EDX));
  /* 11ad44a9 call 0x11ace1b0 */
  push32(0x11ad44aeu); f_11ace1b0();
  /* 11ad44ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad44b1 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 11ad44b7 jmp 0x11ad44d6 */
  goto L_11ad44d6;
L_11ad44b9:;
  /* 11ad44b9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ad44bc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad44c1 mov ecx, dword ptr [0x11af6fb8] */
  ECX = (r32((uint32_t)(0x11af6fb8)));
  /* 11ad44c7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ad44c9 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11ad44cd and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad44d0 mov dword ptr [ebp - 0xac], edx */
  w32((uint32_t)(EBP + -0xac), (EDX));
L_11ad44d6:;
  /* 11ad44d6 cmp dword ptr [ebp - 0xac], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad44dd je 0x11ad4507 */
  if (C.zf) goto L_11ad4507;
  /* 11ad44df mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ad44e2 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad44e5 movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11ad44e9 lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 11ad44ed mov dword ptr [ebp - 0x7c], edx */
  w32((uint32_t)(EBP + -0x7c), (EDX));
  /* 11ad44f0 cmp dword ptr [ebp - 0x7c], 0x1450 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x7c))),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad44f7 jle 0x11ad4502 */
  if ((C.zf||C.sf!=C.of)) goto L_11ad4502;
  /* 11ad44f9 mov dword ptr [ebp - 0x7c], 0x1451 */
  w32((uint32_t)(EBP + -0x7c), (0x1451u));
  /* 11ad4500 jmp 0x11ad4507 */
  goto L_11ad4507;
L_11ad4502:;
  /* 11ad4502 jmp 0x11ad4483 */
  goto L_11ad4483;
L_11ad4507:;
  /* 11ad4507 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ad450a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ad450d jmp 0x11ad4520 */
  goto L_11ad4520;
L_11ad450f:;
  /* 11ad450f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad4512 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ad4514 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 11ad4517 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad451a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad451d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ad4520:;
  /* 11ad4520 cmp dword ptr [0x11af71d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11af71d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4527 jle 0x11ad4545 */
  if ((C.zf||C.sf!=C.of)) goto L_11ad4545;
  /* 11ad4529 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ad452b mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ad452e and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ad4534 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad4535 call 0x11ace1b0 */
  push32(0x11ad453au); f_11ace1b0();
  /* 11ad453a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad453d mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 11ad4543 jmp 0x11ad4562 */
  goto L_11ad4562;
L_11ad4545:;
  /* 11ad4545 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ad4548 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ad454e mov eax, dword ptr [0x11af6fb8] */
  EAX = (r32((uint32_t)(0x11af6fb8)));
  /* 11ad4553 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad4555 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11ad4559 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad455c mov dword ptr [ebp - 0xb0], ecx */
  w32((uint32_t)(EBP + -0xb0), (ECX));
L_11ad4562:;
  /* 11ad4562 cmp dword ptr [ebp - 0xb0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4569 je 0x11ad456d */
  if (C.zf) goto L_11ad456d;
  /* 11ad456b jmp 0x11ad450f */
  goto L_11ad450f;
L_11ad456d:;
  /* 11ad456d mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11ad4574 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad4577 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad457a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ad457d jmp 0x11ad45e3 */
  goto L_11ad45e3;
L_11ad457f:;
  /* 11ad457f cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4583 je 0x11ad45d3 */
  if (C.zf) goto L_11ad45d3;
  /* 11ad4585 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad4588 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad458b mov dword ptr [ebp - 0x64], eax */
  w32((uint32_t)(EBP + -0x64), (EAX));
  /* 11ad458e mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11ad4591 mov byte ptr [ebp - 0xb4], cl */
  w8((uint32_t)(EBP + -0xb4), (CL));
  /* 11ad4597 cmp byte ptr [ebp - 0xb4], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xb4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ad459e je 0x11ad45bb */
  if (C.zf) goto L_11ad45bb;
  /* 11ad45a0 cmp byte ptr [ebp - 0xb4], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xb4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ad45a7 je 0x11ad45ab */
  if (C.zf) goto L_11ad45ab;
  /* 11ad45a9 jmp 0x11ad45c4 */
  goto L_11ad45c4;
L_11ad45ab:;
  /* 11ad45ab mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 11ad45b2 mov dword ptr [ebp - 0x74], 0xffffffff */
  w32((uint32_t)(EBP + -0x74), (0xffffffffu));
  /* 11ad45b9 jmp 0x11ad45d1 */
  goto L_11ad45d1;
L_11ad45bb:;
  /* 11ad45bb mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 11ad45c2 jmp 0x11ad45d1 */
  goto L_11ad45d1;
L_11ad45c4:;
  /* 11ad45c4 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11ad45cb mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 11ad45ce mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ad45d1:;
  /* 11ad45d1 jmp 0x11ad45e3 */
  goto L_11ad45e3;
L_11ad45d3:;
  /* 11ad45d3 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11ad45da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad45dd sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad45e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ad45e3:;
  /* 11ad45e3 jmp 0x11ad3e87 */
  goto L_11ad3e87;
L_11ad45e8:;
  /* 11ad45e8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad45eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad45ee mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11ad45f0 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad45f4 je 0x11ad4737 */
  if (C.zf) goto L_11ad4737;
  /* 11ad45fa cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad45fe jne 0x11ad4737 */
  if (!C.zf) goto L_11ad4737;
  /* 11ad4604 cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4608 jne 0x11ad4737 */
  if (!C.zf) goto L_11ad4737;
  /* 11ad460e cmp dword ptr [ebp - 0x70], 0x18 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x18u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4612 jbe 0x11ad463f */
  if ((C.cf||C.zf)) goto L_11ad463f;
  /* 11ad4614 movsx eax, byte ptr [ebp - 0x21] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x21))));
  /* 11ad4618 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad461b jl 0x11ad4626 */
  if ((C.sf!=C.of)) goto L_11ad4626;
  /* 11ad461d mov cl, byte ptr [ebp - 0x21] */
  CL = (r8((uint32_t)(EBP + -0x21)));
  /* 11ad4620 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ad4623 mov byte ptr [ebp - 0x21], cl */
  w8((uint32_t)(EBP + -0x21), (CL));
L_11ad4626:;
  /* 11ad4626 mov dword ptr [ebp - 0x70], 0x18 */
  w32((uint32_t)(EBP + -0x70), (0x18u));
  /* 11ad462d mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11ad4630 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad4633 mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
  /* 11ad4636 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11ad4639 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad463c mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
L_11ad463f:;
  /* 11ad463f cmp dword ptr [ebp - 0x70], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4643 jbe 0x11ad471a */
  if ((C.cf||C.zf)) goto L_11ad471a;
  /* 11ad4649 mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 11ad464c sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad464f mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11ad4652 jmp 0x11ad465d */
  goto L_11ad465d;
L_11ad4654:;
  /* 11ad4654 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11ad4657 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad465a mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
L_11ad465d:;
  /* 11ad465d mov eax, dword ptr [ebp - 0x68] */
  EAX = (r32((uint32_t)(EBP + -0x68)));
  /* 11ad4660 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ad4663 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad4665 jne 0x11ad467b */
  if (!C.zf) goto L_11ad467b;
  /* 11ad4667 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11ad466a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad466d mov dword ptr [ebp - 0x70], edx */
  w32((uint32_t)(EBP + -0x70), (EDX));
  /* 11ad4670 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11ad4673 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4676 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
  /* 11ad4679 jmp 0x11ad4654 */
  goto L_11ad4654;
L_11ad467b:;
  /* 11ad467b lea ecx, [ebp - 0x60] */
  ECX = ((uint32_t)(EBP + -0x60));
  /* 11ad467e push ecx */
  push32((uint32_t)(ECX));
  /* 11ad467f mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11ad4682 push edx */
  push32((uint32_t)(EDX));
  /* 11ad4683 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11ad4686 push eax */
  push32((uint32_t)(EAX));
  /* 11ad4687 call 0x11ad3ca0 */
  push32(0x11ad468cu); f_11ad3ca0();
  /* 11ad468c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad468f cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4693 jge 0x11ad469d */
  if ((C.sf==C.of)) goto L_11ad469d;
  /* 11ad4695 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad4698 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ad469a mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11ad469d:;
  /* 11ad469d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad46a0 add edx, dword ptr [ebp - 0x6c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x6c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad46a3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11ad46a6 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad46aa jne 0x11ad46b5 */
  if (!C.zf) goto L_11ad46b5;
  /* 11ad46ac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad46af add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad46b2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11ad46b5:;
  /* 11ad46b5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad46b9 jne 0x11ad46c4 */
  if (!C.zf) goto L_11ad46c4;
  /* 11ad46bb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad46be sub ecx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad46c1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11ad46c4:;
  /* 11ad46c4 cmp dword ptr [ebp - 0x14], 0x1450 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad46cb jle 0x11ad46d6 */
  if ((C.zf||C.sf!=C.of)) goto L_11ad46d6;
  /* 11ad46cd mov dword ptr [ebp - 0x40], 1 */
  w32((uint32_t)(EBP + -0x40), (0x1u));
  /* 11ad46d4 jmp 0x11ad4718 */
  goto L_11ad4718;
L_11ad46d6:;
  /* 11ad46d6 cmp dword ptr [ebp - 0x14], 0xffffebb0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad46dd jge 0x11ad46e8 */
  if ((C.sf==C.of)) goto L_11ad46e8;
  /* 11ad46df mov dword ptr [ebp - 0x78], 1 */
  w32((uint32_t)(EBP + -0x78), (0x1u));
  /* 11ad46e6 jmp 0x11ad4718 */
  goto L_11ad4718;
L_11ad46e8:;
  /* 11ad46e8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad46eb push edx */
  push32((uint32_t)(EDX));
  /* 11ad46ec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad46ef push eax */
  push32((uint32_t)(EAX));
  /* 11ad46f0 lea ecx, [ebp - 0x60] */
  ECX = ((uint32_t)(EBP + -0x60));
  /* 11ad46f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad46f4 call 0x11ad87d0 */
  push32(0x11ad46f9u); f_11ad87d0();
  /* 11ad46f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad46fc mov dx, word ptr [ebp - 0x60] */
  DX = (r16((uint32_t)(EBP + -0x60)));
  /* 11ad4700 mov word ptr [ebp - 0x48], dx */
  w16((uint32_t)(EBP + -0x48), (DX));
  /* 11ad4704 mov eax, dword ptr [ebp - 0x5e] */
  EAX = (r32((uint32_t)(EBP + -0x5e)));
  /* 11ad4707 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ad470a mov ecx, dword ptr [ebp - 0x5a] */
  ECX = (r32((uint32_t)(EBP + -0x5a)));
  /* 11ad470d mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ad4710 mov dx, word ptr [ebp - 0x56] */
  DX = (r16((uint32_t)(EBP + -0x56)));
  /* 11ad4714 mov word ptr [ebp - 0x50], dx */
  w16((uint32_t)(EBP + -0x50), (DX));
L_11ad4718:;
  /* 11ad4718 jmp 0x11ad4737 */
  goto L_11ad4737;
L_11ad471a:;
  /* 11ad471a mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 11ad4720 mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 11ad4726 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ad4729 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad472e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ad4731 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad4734 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11ad4737:;
  /* 11ad4737 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad473b jne 0x11ad4766 */
  if (!C.zf) goto L_11ad4766;
  /* 11ad473d mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 11ad4743 mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 11ad4749 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ad474c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ad4752 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11ad4755 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad4758 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ad475b mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11ad475e or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad4761 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 11ad4764 jmp 0x11ad47bd */
  goto L_11ad47bd;
L_11ad4766:;
  /* 11ad4766 cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad476a je 0x11ad4791 */
  if (C.zf) goto L_11ad4791;
  /* 11ad476c mov word ptr [ebp - 0x50], 0x7fff */
  w16((uint32_t)(EBP + -0x50), (0x7fffu));
  /* 11ad4772 mov dword ptr [ebp - 0x10], 0x80000000 */
  w32((uint32_t)(EBP + -0x10), (0x80000000u));
  /* 11ad4779 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ad4780 mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 11ad4786 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11ad4789 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad478c mov dword ptr [ebp - 0x44], edx */
  w32((uint32_t)(EBP + -0x44), (EDX));
  /* 11ad478f jmp 0x11ad47bd */
  goto L_11ad47bd;
L_11ad4791:;
  /* 11ad4791 cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4795 je 0x11ad47bd */
  if (C.zf) goto L_11ad47bd;
  /* 11ad4797 mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 11ad479d mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 11ad47a3 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ad47a6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad47ab mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ad47ae mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad47b1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ad47b4 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11ad47b7 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad47ba mov dword ptr [ebp - 0x44], edx */
  w32((uint32_t)(EBP + -0x44), (EDX));
L_11ad47bd:;
  /* 11ad47bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad47c0 mov cx, word ptr [ebp - 0x48] */
  CX = (r16((uint32_t)(EBP + -0x48)));
  /* 11ad47c4 mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 11ad47c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad47ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad47cd mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 11ad47d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad47d3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad47d6 mov dword ptr [ecx + 6], edx */
  w32((uint32_t)(ECX + 0x6), (EDX));
  /* 11ad47d9 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ad47dc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad47e1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ad47e4 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ad47ea or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad47ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad47ef mov word ptr [edx + 0xa], ax */
  w16((uint32_t)(EDX + 0xa), (AX));
  /* 11ad47f3 mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 11ad47f6 mov esp, ebp */
  ESP = (EBP);
  /* 11ad47f8 pop ebp */
  EBP = (pop32());
  /* 11ad47f9 ret  */
  ESPCHK(0x11ad3de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014910 @ 0x11ad4910 (79 bytes, 33 insns) */
void f_11ad4910(void) {
  FTRACE(0x11ad4910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad4910 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad4911 mov ebp, esp */
  EBP = (ESP);
  /* 11ad4913 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad4916 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad4918 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad491a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad491c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad491f push eax */
  push32((uint32_t)(EAX));
  /* 11ad4920 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad4923 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad4924 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad4927 push edx */
  push32((uint32_t)(EDX));
  /* 11ad4928 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11ad492b push eax */
  push32((uint32_t)(EAX));
  /* 11ad492c call 0x11ad3de0 */
  push32(0x11ad4931u); f_11ad3de0();
  /* 11ad4931 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4934 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ad4937 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad493a push ecx */
  push32((uint32_t)(ECX));
  /* 11ad493b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11ad493e push edx */
  push32((uint32_t)(EDX));
  /* 11ad493f call 0x11aceab0 */
  push32(0x11ad4944u); f_11aceab0();
  /* 11ad4944 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4947 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ad494a cmp dword ptr [ebp - 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad494e jne 0x11ad4958 */
  if (!C.zf) goto L_11ad4958;
  /* 11ad4950 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad4953 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11ad4955 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11ad4958:;
  /* 11ad4958 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad495b mov esp, ebp */
  ESP = (EBP);
  /* 11ad495d pop ebp */
  EBP = (pop32());
  /* 11ad495e ret  */
  ESPCHK(0x11ad4910u, _esp0);
  ESP += 4; return;
}

/* FUN_10014960 @ 0x11ad4960 (1302 bytes, 386 insns) */
void f_11ad4960(void) {
  FTRACE(0x11ad4960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad4960 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad4961 mov ebp, esp */
  EBP = (ESP);
  /* 11ad4963 sub esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad4966 mov word ptr [ebp - 0x64], 0x4d10 */
  w16((uint32_t)(EBP + -0x64), (0x4d10u));
  /* 11ad496c mov word ptr [ebp - 0x3c], 0x4d */
  w16((uint32_t)(EBP + -0x3c), (0x4du));
  /* 11ad4972 mov word ptr [ebp - 0x60], 0x9a */
  w16((uint32_t)(EBP + -0x60), (0x9au));
  /* 11ad4978 mov dword ptr [ebp - 0x20], 0x134312f4 */
  w32((uint32_t)(EBP + -0x20), (0x134312f4u));
  /* 11ad497f mov byte ptr [ebp - 0x54], 0xcc */
  w8((uint32_t)(EBP + -0x54), (0xccu));
  /* 11ad4983 mov byte ptr [ebp - 0x53], 0xcc */
  w8((uint32_t)(EBP + -0x53), (0xccu));
  /* 11ad4987 mov byte ptr [ebp - 0x52], 0xcc */
  w8((uint32_t)(EBP + -0x52), (0xccu));
  /* 11ad498b mov byte ptr [ebp - 0x51], 0xcc */
  w8((uint32_t)(EBP + -0x51), (0xccu));
  /* 11ad498f mov byte ptr [ebp - 0x50], 0xcc */
  w8((uint32_t)(EBP + -0x50), (0xccu));
  /* 11ad4993 mov byte ptr [ebp - 0x4f], 0xcc */
  w8((uint32_t)(EBP + -0x4f), (0xccu));
  /* 11ad4997 mov byte ptr [ebp - 0x4e], 0xcc */
  w8((uint32_t)(EBP + -0x4e), (0xccu));
  /* 11ad499b mov byte ptr [ebp - 0x4d], 0xcc */
  w8((uint32_t)(EBP + -0x4d), (0xccu));
  /* 11ad499f mov byte ptr [ebp - 0x4c], 0xcc */
  w8((uint32_t)(EBP + -0x4c), (0xccu));
  /* 11ad49a3 mov byte ptr [ebp - 0x4b], 0xcc */
  w8((uint32_t)(EBP + -0x4b), (0xccu));
  /* 11ad49a7 mov byte ptr [ebp - 0x4a], 0xfb */
  w8((uint32_t)(EBP + -0x4a), (0xfbu));
  /* 11ad49ab mov byte ptr [ebp - 0x49], 0x3f */
  w8((uint32_t)(EBP + -0x49), (0x3fu));
  /* 11ad49af mov dword ptr [ebp - 0x58], 1 */
  w32((uint32_t)(EBP + -0x58), (0x1u));
  /* 11ad49b6 mov ax, word ptr [ebp + 0x10] */
  AX = (r16((uint32_t)(EBP + 0x10)));
  /* 11ad49ba mov word ptr [ebp - 0x70], ax */
  w16((uint32_t)(EBP + -0x70), (AX));
  /* 11ad49be mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad49c1 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11ad49c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad49c7 mov dword ptr [ebp - 0x48], edx */
  w32((uint32_t)(EBP + -0x48), (EDX));
  /* 11ad49ca mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 11ad49cd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad49d2 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad49d7 mov word ptr [ebp - 0x68], ax */
  w16((uint32_t)(EBP + -0x68), (AX));
  /* 11ad49db mov cx, word ptr [ebp - 0x70] */
  CX = (r16((uint32_t)(EBP + -0x70)));
  /* 11ad49df and cx, 0x7fff */
  { uint32_t _r=(CX)&(0x7fffu); CX = (_r); fl_logic(_r,16); }
  /* 11ad49e4 mov word ptr [ebp - 0x70], cx */
  w16((uint32_t)(EBP + -0x70), (CX));
  /* 11ad49e8 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11ad49eb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ad49f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad49f3 je 0x11ad49fe */
  if (C.zf) goto L_11ad49fe;
  /* 11ad49f5 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad49f8 mov byte ptr [eax + 2], 0x2d */
  w8((uint32_t)(EAX + 0x2), (0x2du));
  /* 11ad49fc jmp 0x11ad4a05 */
  goto L_11ad4a05;
L_11ad49fe:;
  /* 11ad49fe mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4a01 mov byte ptr [ecx + 2], 0x20 */
  w8((uint32_t)(ECX + 0x2), (0x20u));
L_11ad4a05:;
  /* 11ad4a05 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11ad4a08 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ad4a0e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad4a10 jne 0x11ad4a4c */
  if (!C.zf) goto L_11ad4a4c;
  /* 11ad4a12 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4a16 jne 0x11ad4a4c */
  if (!C.zf) goto L_11ad4a4c;
  /* 11ad4a18 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4a1c jne 0x11ad4a4c */
  if (!C.zf) goto L_11ad4a4c;
  /* 11ad4a1e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4a21 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 11ad4a26 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4a29 mov byte ptr [ecx + 2], 0x20 */
  w8((uint32_t)(ECX + 0x2), (0x20u));
  /* 11ad4a2d mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4a30 mov byte ptr [edx + 3], 1 */
  w8((uint32_t)(EDX + 0x3), (0x1u));
  /* 11ad4a34 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4a37 mov byte ptr [eax + 4], 0x30 */
  w8((uint32_t)(EAX + 0x4), (0x30u));
  /* 11ad4a3b mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4a3e mov byte ptr [ecx + 5], 0 */
  w8((uint32_t)(ECX + 0x5), (0x0u));
  /* 11ad4a42 mov eax, 1 */
  EAX = (0x1u);
  /* 11ad4a47 jmp 0x11ad4e72 */
  goto L_11ad4e72;
L_11ad4a4c:;
  /* 11ad4a4c mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11ad4a4f and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ad4a55 cmp edx, 0x7fff */
  { uint32_t _a=(EDX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4a5b jne 0x11ad4b46 */
  if (!C.zf) goto L_11ad4b46;
  /* 11ad4a61 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4a64 mov word ptr [eax], 1 */
  w16((uint32_t)(EAX), (0x1u));
  /* 11ad4a69 cmp dword ptr [ebp - 0x24], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4a70 jne 0x11ad4a78 */
  if (!C.zf) goto L_11ad4a78;
  /* 11ad4a72 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4a76 je 0x11ad4aac */
  if (C.zf) goto L_11ad4aac;
L_11ad4a78:;
  /* 11ad4a78 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad4a7b and ecx, 0x40000000 */
  { uint32_t _r=(ECX)&(0x40000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad4a81 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad4a83 jne 0x11ad4aac */
  if (!C.zf) goto L_11ad4aac;
  /* 11ad4a85 push 0x11af41f8 */
  push32((uint32_t)(0x11af41f8u));
  /* 11ad4a8a mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4a8d add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4a90 push edx */
  push32((uint32_t)(EDX));
  /* 11ad4a91 call 0x11acc610 */
  push32(0x11ad4a96u); f_11acc610();
  /* 11ad4a96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4a99 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4a9c mov byte ptr [eax + 3], 6 */
  w8((uint32_t)(EAX + 0x3), (0x6u));
  /* 11ad4aa0 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11ad4aa7 jmp 0x11ad4b41 */
  goto L_11ad4b41;
L_11ad4aac:;
  /* 11ad4aac mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 11ad4aaf and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ad4ab5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad4ab7 je 0x11ad4aec */
  if (C.zf) goto L_11ad4aec;
  /* 11ad4ab9 cmp dword ptr [ebp - 0x24], 0xc0000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4ac0 jne 0x11ad4aec */
  if (!C.zf) goto L_11ad4aec;
  /* 11ad4ac2 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4ac6 jne 0x11ad4aec */
  if (!C.zf) goto L_11ad4aec;
  /* 11ad4ac8 push 0x11af41f0 */
  push32((uint32_t)(0x11af41f0u));
  /* 11ad4acd mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4ad0 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4ad3 push edx */
  push32((uint32_t)(EDX));
  /* 11ad4ad4 call 0x11acc610 */
  push32(0x11ad4ad9u); f_11acc610();
  /* 11ad4ad9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4adc mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4adf mov byte ptr [eax + 3], 5 */
  w8((uint32_t)(EAX + 0x3), (0x5u));
  /* 11ad4ae3 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11ad4aea jmp 0x11ad4b41 */
  goto L_11ad4b41;
L_11ad4aec:;
  /* 11ad4aec cmp dword ptr [ebp - 0x24], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4af3 jne 0x11ad4b1f */
  if (!C.zf) goto L_11ad4b1f;
  /* 11ad4af5 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4af9 jne 0x11ad4b1f */
  if (!C.zf) goto L_11ad4b1f;
  /* 11ad4afb push 0x11af41e8 */
  push32((uint32_t)(0x11af41e8u));
  /* 11ad4b00 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4b03 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4b06 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad4b07 call 0x11acc610 */
  push32(0x11ad4b0cu); f_11acc610();
  /* 11ad4b0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4b0f mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4b12 mov byte ptr [edx + 3], 5 */
  w8((uint32_t)(EDX + 0x3), (0x5u));
  /* 11ad4b16 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11ad4b1d jmp 0x11ad4b41 */
  goto L_11ad4b41;
L_11ad4b1f:;
  /* 11ad4b1f push 0x11af41e0 */
  push32((uint32_t)(0x11af41e0u));
  /* 11ad4b24 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4b27 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4b2a push eax */
  push32((uint32_t)(EAX));
  /* 11ad4b2b call 0x11acc610 */
  push32(0x11ad4b30u); f_11acc610();
  /* 11ad4b30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4b33 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4b36 mov byte ptr [ecx + 3], 6 */
  w8((uint32_t)(ECX + 0x3), (0x6u));
  /* 11ad4b3a mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
L_11ad4b41:;
  /* 11ad4b41 jmp 0x11ad4e6f */
  goto L_11ad4e6f;
L_11ad4b46:;
  /* 11ad4b46 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11ad4b49 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ad4b4f sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11ad4b52 mov word ptr [ebp - 0x6c], dx */
  w16((uint32_t)(EBP + -0x6c), (DX));
  /* 11ad4b56 mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 11ad4b59 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad4b5e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad4b63 mov word ptr [ebp - 0xc], ax */
  w16((uint32_t)(EBP + -0xc), (AX));
  /* 11ad4b67 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad4b6a shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 11ad4b6d mov word ptr [ebp - 0x40], cx */
  w16((uint32_t)(EBP + -0x40), (CX));
  /* 11ad4b71 mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 11ad4b74 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ad4b7a mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 11ad4b7d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad4b82 imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad4b85 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ad4b88 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ad4b8e mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11ad4b91 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad4b96 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad4b99 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4b9b mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11ad4b9e and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ad4ba4 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11ad4ba7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad4bac imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad4baf add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4bb1 sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad4bb4 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ad4bb7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad4bba sar ecx, 0x10 */
  ECX = (sh_sar((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 11ad4bbd mov word ptr [ebp - 0x5c], cx */
  w16((uint32_t)(EBP + -0x5c), (CX));
  /* 11ad4bc1 mov dx, word ptr [ebp - 0x70] */
  DX = (r16((uint32_t)(EBP + -0x70)));
  /* 11ad4bc5 mov word ptr [ebp - 0x2e], dx */
  w16((uint32_t)(EBP + -0x2e), (DX));
  /* 11ad4bc9 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad4bcc mov dword ptr [ebp - 0x32], eax */
  w32((uint32_t)(EBP + -0x32), (EAX));
  /* 11ad4bcf mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11ad4bd2 mov dword ptr [ebp - 0x36], ecx */
  w32((uint32_t)(EBP + -0x36), (ECX));
  /* 11ad4bd5 mov word ptr [ebp - 0x38], 0 */
  w16((uint32_t)(EBP + -0x38), (0x0u));
  /* 11ad4bdb push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad4bdd movsx edx, word ptr [ebp - 0x5c] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x5c))));
  /* 11ad4be1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ad4be3 push edx */
  push32((uint32_t)(EDX));
  /* 11ad4be4 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11ad4be7 push eax */
  push32((uint32_t)(EAX));
  /* 11ad4be8 call 0x11ad87d0 */
  push32(0x11ad4bedu); f_11ad87d0();
  /* 11ad4bed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4bf0 mov ecx, dword ptr [ebp - 0x2e] */
  ECX = (r32((uint32_t)(EBP + -0x2e)));
  /* 11ad4bf3 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ad4bf9 cmp ecx, 0x3fff */
  { uint32_t _a=(ECX),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4bff jl 0x11ad4c1d */
  if ((C.sf!=C.of)) goto L_11ad4c1d;
  /* 11ad4c01 mov dx, word ptr [ebp - 0x5c] */
  DX = (r16((uint32_t)(EBP + -0x5c)));
  /* 11ad4c05 add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 11ad4c09 mov word ptr [ebp - 0x5c], dx */
  w16((uint32_t)(EBP + -0x5c), (DX));
  /* 11ad4c0d lea eax, [ebp - 0x54] */
  EAX = ((uint32_t)(EBP + -0x54));
  /* 11ad4c10 push eax */
  push32((uint32_t)(EAX));
  /* 11ad4c11 lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 11ad4c14 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad4c15 call 0x11ad8390 */
  push32(0x11ad4c1au); f_11ad8390();
  /* 11ad4c1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ad4c1d:;
  /* 11ad4c1d mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4c20 mov ax, word ptr [ebp - 0x5c] */
  AX = (r16((uint32_t)(EBP + -0x5c)));
  /* 11ad4c24 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11ad4c27 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ad4c2a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad4c2d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad4c2f je 0x11ad4c71 */
  if (C.zf) goto L_11ad4c71;
  /* 11ad4c31 movsx edx, word ptr [ebp - 0x5c] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x5c))));
  /* 11ad4c35 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad4c38 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4c3a mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
  /* 11ad4c3d cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4c41 jg 0x11ad4c71 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ad4c71;
  /* 11ad4c43 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4c46 mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11ad4c4b mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4c4e mov byte ptr [edx + 2], 0x20 */
  w8((uint32_t)(EDX + 0x2), (0x20u));
  /* 11ad4c52 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4c55 mov byte ptr [eax + 3], 1 */
  w8((uint32_t)(EAX + 0x3), (0x1u));
  /* 11ad4c59 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4c5c mov byte ptr [ecx + 4], 0x30 */
  w8((uint32_t)(ECX + 0x4), (0x30u));
  /* 11ad4c60 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4c63 mov byte ptr [edx + 5], 0 */
  w8((uint32_t)(EDX + 0x5), (0x0u));
  /* 11ad4c67 mov eax, 1 */
  EAX = (0x1u);
  /* 11ad4c6c jmp 0x11ad4e72 */
  goto L_11ad4e72;
L_11ad4c71:;
  /* 11ad4c71 cmp dword ptr [ebp + 0x14], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4c75 jle 0x11ad4c7e */
  if ((C.zf||C.sf!=C.of)) goto L_11ad4c7e;
  /* 11ad4c77 mov dword ptr [ebp + 0x14], 0x15 */
  w32((uint32_t)(EBP + 0x14), (0x15u));
L_11ad4c7e:;
  /* 11ad4c7e mov eax, dword ptr [ebp - 0x2e] */
  EAX = (r32((uint32_t)(EBP + -0x2e)));
  /* 11ad4c81 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad4c86 sub eax, 0x3ffe */
  { uint32_t _a=(EAX),_b=(0x3ffeu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad4c8b mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11ad4c8e mov word ptr [ebp - 0x2e], 0 */
  w16((uint32_t)(EBP + -0x2e), (0x0u));
  /* 11ad4c94 mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11ad4c9b jmp 0x11ad4ca6 */
  goto L_11ad4ca6;
L_11ad4c9d:;
  /* 11ad4c9d mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11ad4ca0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4ca3 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
L_11ad4ca6:;
  /* 11ad4ca6 cmp dword ptr [ebp - 0x44], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x44))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4caa jge 0x11ad4cba */
  if ((C.sf==C.of)) goto L_11ad4cba;
  /* 11ad4cac lea edx, [ebp - 0x38] */
  EDX = ((uint32_t)(EBP + -0x38));
  /* 11ad4caf push edx */
  push32((uint32_t)(EDX));
  /* 11ad4cb0 call 0x11ad3bd0 */
  push32(0x11ad4cb5u); f_11ad3bd0();
  /* 11ad4cb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4cb8 jmp 0x11ad4c9d */
  goto L_11ad4c9d;
L_11ad4cba:;
  /* 11ad4cba cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4cbe jge 0x11ad4cec */
  if ((C.sf==C.of)) goto L_11ad4cec;
  /* 11ad4cc0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad4cc3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ad4cc5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad4cca mov dword ptr [ebp - 0x74], eax */
  w32((uint32_t)(EBP + -0x74), (EAX));
  /* 11ad4ccd jmp 0x11ad4cd8 */
  goto L_11ad4cd8;
L_11ad4ccf:;
  /* 11ad4ccf mov ecx, dword ptr [ebp - 0x74] */
  ECX = (r32((uint32_t)(EBP + -0x74)));
  /* 11ad4cd2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad4cd5 mov dword ptr [ebp - 0x74], ecx */
  w32((uint32_t)(EBP + -0x74), (ECX));
L_11ad4cd8:;
  /* 11ad4cd8 cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4cdc jle 0x11ad4cec */
  if ((C.zf||C.sf!=C.of)) goto L_11ad4cec;
  /* 11ad4cde lea edx, [ebp - 0x38] */
  EDX = ((uint32_t)(EBP + -0x38));
  /* 11ad4ce1 push edx */
  push32((uint32_t)(EDX));
  /* 11ad4ce2 call 0x11ad3c30 */
  push32(0x11ad4ce7u); f_11ad3c30();
  /* 11ad4ce7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4cea jmp 0x11ad4ccf */
  goto L_11ad4ccf;
L_11ad4cec:;
  /* 11ad4cec mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4cef add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4cf2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad4cf5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad4cf8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4cfb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ad4cfe jmp 0x11ad4d09 */
  goto L_11ad4d09;
L_11ad4d00:;
  /* 11ad4d00 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad4d03 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad4d06 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11ad4d09:;
  /* 11ad4d09 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4d0d jle 0x11ad4d75 */
  if ((C.zf||C.sf!=C.of)) goto L_11ad4d75;
  /* 11ad4d0f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ad4d12 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11ad4d15 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ad4d18 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11ad4d1b mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad4d1e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11ad4d21 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11ad4d24 push eax */
  push32((uint32_t)(EAX));
  /* 11ad4d25 call 0x11ad3bd0 */
  push32(0x11ad4d2au); f_11ad3bd0();
  /* 11ad4d2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4d2d lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 11ad4d30 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad4d31 call 0x11ad3bd0 */
  push32(0x11ad4d36u); f_11ad3bd0();
  /* 11ad4d36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4d39 lea edx, [ebp - 0x1c] */
  EDX = ((uint32_t)(EBP + -0x1c));
  /* 11ad4d3c push edx */
  push32((uint32_t)(EDX));
  /* 11ad4d3d lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11ad4d40 push eax */
  push32((uint32_t)(EAX));
  /* 11ad4d41 call 0x11ad3b20 */
  push32(0x11ad4d46u); f_11ad3b20();
  /* 11ad4d46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4d49 lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 11ad4d4c push ecx */
  push32((uint32_t)(ECX));
  /* 11ad4d4d call 0x11ad3bd0 */
  push32(0x11ad4d52u); f_11ad3bd0();
  /* 11ad4d52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4d55 mov edx, dword ptr [ebp - 0x2d] */
  EDX = (r32((uint32_t)(EBP + -0x2d)));
  /* 11ad4d58 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ad4d5e add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4d61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad4d64 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11ad4d66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad4d69 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4d6c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ad4d6f mov byte ptr [ebp - 0x2d], 0 */
  w8((uint32_t)(EBP + -0x2d), (0x0u));
  /* 11ad4d73 jmp 0x11ad4d00 */
  goto L_11ad4d00;
L_11ad4d75:;
  /* 11ad4d75 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad4d78 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad4d7b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ad4d7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad4d81 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ad4d83 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 11ad4d86 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad4d89 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad4d8c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ad4d8f movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ad4d93 cmp eax, 0x35 */
  { uint32_t _a=(EAX),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4d96 jl 0x11ad4df3 */
  if ((C.sf!=C.of)) goto L_11ad4df3;
  /* 11ad4d98 jmp 0x11ad4da3 */
  goto L_11ad4da3;
L_11ad4d9a:;
  /* 11ad4d9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad4d9d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad4da0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ad4da3:;
  /* 11ad4da3 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4da6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4da9 cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4dac jb 0x11ad4dc1 */
  if (C.cf) goto L_11ad4dc1;
  /* 11ad4dae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad4db1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ad4db4 cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4db7 jne 0x11ad4dc1 */
  if (!C.zf) goto L_11ad4dc1;
  /* 11ad4db9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad4dbc mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 11ad4dbf jmp 0x11ad4d9a */
  goto L_11ad4d9a;
L_11ad4dc1:;
  /* 11ad4dc1 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4dc4 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4dc7 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4dca jae 0x11ad4de5 */
  if (!C.cf) goto L_11ad4de5;
  /* 11ad4dcc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad4dcf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4dd2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ad4dd5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4dd8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11ad4ddb add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 11ad4ddf mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4de2 mov word ptr [ecx], ax */
  w16((uint32_t)(ECX), (AX));
L_11ad4de5:;
  /* 11ad4de5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad4de8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ad4dea add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ad4dec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad4def mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11ad4df1 jmp 0x11ad4e4c */
  goto L_11ad4e4c;
L_11ad4df3:;
  /* 11ad4df3 jmp 0x11ad4dfe */
  goto L_11ad4dfe;
L_11ad4df5:;
  /* 11ad4df5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad4df8 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad4dfb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ad4dfe:;
  /* 11ad4dfe mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4e01 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4e04 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4e07 jb 0x11ad4e16 */
  if (C.cf) goto L_11ad4e16;
  /* 11ad4e09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad4e0c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ad4e0f cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4e12 jne 0x11ad4e16 */
  if (!C.zf) goto L_11ad4e16;
  /* 11ad4e14 jmp 0x11ad4df5 */
  goto L_11ad4df5;
L_11ad4e16:;
  /* 11ad4e16 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4e19 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4e1c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4e1f jae 0x11ad4e4c */
  if (!C.cf) goto L_11ad4e4c;
  /* 11ad4e21 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4e24 mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11ad4e29 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4e2c mov byte ptr [edx + 2], 0x20 */
  w8((uint32_t)(EDX + 0x2), (0x20u));
  /* 11ad4e30 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4e33 mov byte ptr [eax + 3], 1 */
  w8((uint32_t)(EAX + 0x3), (0x1u));
  /* 11ad4e37 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4e3a mov byte ptr [ecx + 4], 0x30 */
  w8((uint32_t)(ECX + 0x4), (0x30u));
  /* 11ad4e3e mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4e41 mov byte ptr [edx + 5], 0 */
  w8((uint32_t)(EDX + 0x5), (0x0u));
  /* 11ad4e45 mov eax, 1 */
  EAX = (0x1u);
  /* 11ad4e4a jmp 0x11ad4e72 */
  goto L_11ad4e72;
L_11ad4e4c:;
  /* 11ad4e4c mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4e4f add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4e52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad4e55 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad4e57 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4e5a mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4e5d mov byte ptr [edx + 3], cl */
  w8((uint32_t)(EDX + 0x3), (CL));
  /* 11ad4e60 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4e63 movsx ecx, byte ptr [eax + 3] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x3))));
  /* 11ad4e67 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4e6a mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
L_11ad4e6f:;
  /* 11ad4e6f mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
L_11ad4e72:;
  /* 11ad4e72 mov esp, ebp */
  ESP = (EBP);
  /* 11ad4e74 pop ebp */
  EBP = (pop32());
  /* 11ad4e75 ret  */
  ESPCHK(0x11ad4960u, _esp0);
  ESP += 4; return;
}

/* FUN_10014e80 @ 0x11ad4e80 (85 bytes, 32 insns) */
void f_11ad4e80(void) {
  FTRACE(0x11ad4e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad4e80 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad4e81 mov ebp, esp */
  EBP = (ESP);
  /* 11ad4e83 cmp dword ptr [0x11af76a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af76a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4e8a jne 0x11ad4eb4 */
  if (!C.zf) goto L_11ad4eb4;
  /* 11ad4e8c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad4e8f push eax */
  push32((uint32_t)(EAX));
  /* 11ad4e90 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad4e93 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad4e94 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad4e97 push edx */
  push32((uint32_t)(EDX));
  /* 11ad4e98 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad4e9a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad4e9c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad4e9f push eax */
  push32((uint32_t)(EAX));
  /* 11ad4ea0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad4ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad4ea4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad4ea7 push edx */
  push32((uint32_t)(EDX));
  /* 11ad4ea8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad4eaa call 0x11ad5930 */
  push32(0x11ad4eafu); f_11ad5930();
  /* 11ad4eaf add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4eb2 jmp 0x11ad4ed3 */
  goto L_11ad4ed3;
L_11ad4eb4:;
  /* 11ad4eb4 call 0x11ad21f0 */
  push32(0x11ad4eb9u); f_11ad21f0();
  /* 11ad4eb9 mov dword ptr [eax], 0x21 */
  w32((uint32_t)(EAX), (0x21u));
  /* 11ad4ebf push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11ad4ec4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad4ec7 push eax */
  push32((uint32_t)(EAX));
  /* 11ad4ec8 call 0x11ad5b20 */
  push32(0x11ad4ecdu); f_11ad5b20();
  /* 11ad4ecd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4ed0 fld qword ptr [ebp + 0xc] */
  fpu_push(rf64((uint32_t)(EBP + 0xc)));
L_11ad4ed3:;
  /* 11ad4ed3 pop ebp */
  EBP = (pop32());
  /* 11ad4ed4 ret  */
  ESPCHK(0x11ad4e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ee0 @ 0x11ad4ee0 (103 bytes, 39 insns) */
void f_11ad4ee0(void) {
  FTRACE(0x11ad4ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad4ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad4ee1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad4ee3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad4ee6 fld qword ptr [ebp + 0xc] */
  fpu_push(rf64((uint32_t)(EBP + 0xc)));
  /* 11ad4ee9 fadd qword ptr [ebp + 0x14] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(EBP + 0x14)));
  /* 11ad4eec fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11ad4eef cmp dword ptr [0x11af76a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af76a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4ef6 jne 0x11ad4f24 */
  if (!C.zf) goto L_11ad4f24;
  /* 11ad4ef8 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4efb push eax */
  push32((uint32_t)(EAX));
  /* 11ad4efc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad4eff push ecx */
  push32((uint32_t)(ECX));
  /* 11ad4f00 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad4f03 push edx */
  push32((uint32_t)(EDX));
  /* 11ad4f04 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ad4f07 push eax */
  push32((uint32_t)(EAX));
  /* 11ad4f08 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad4f0b push ecx */
  push32((uint32_t)(ECX));
  /* 11ad4f0c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad4f0f push edx */
  push32((uint32_t)(EDX));
  /* 11ad4f10 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad4f13 push eax */
  push32((uint32_t)(EAX));
  /* 11ad4f14 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad4f17 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad4f18 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad4f1a call 0x11ad5930 */
  push32(0x11ad4f1fu); f_11ad5930();
  /* 11ad4f1f add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4f22 jmp 0x11ad4f43 */
  goto L_11ad4f43;
L_11ad4f24:;
  /* 11ad4f24 call 0x11ad21f0 */
  push32(0x11ad4f29u); f_11ad21f0();
  /* 11ad4f29 mov dword ptr [eax], 0x21 */
  w32((uint32_t)(EAX), (0x21u));
  /* 11ad4f2f push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11ad4f34 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4f37 push edx */
  push32((uint32_t)(EDX));
  /* 11ad4f38 call 0x11ad5b20 */
  push32(0x11ad4f3du); f_11ad5b20();
  /* 11ad4f3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4f40 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
L_11ad4f43:;
  /* 11ad4f43 mov esp, ebp */
  ESP = (EBP);
  /* 11ad4f45 pop ebp */
  EBP = (pop32());
  /* 11ad4f46 ret  */
  ESPCHK(0x11ad4ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014f50 @ 0x11ad4f50 (178 bytes, 71 insns) */
void f_11ad4f50(void) {
  FTRACE(0x11ad4f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad4f50 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad4f51 mov ebp, esp */
  EBP = (ESP);
  /* 11ad4f53 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad4f56 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ad4f59 push eax */
  push32((uint32_t)(EAX));
  /* 11ad4f5a lea ecx, [ebp + 0x18] */
  ECX = ((uint32_t)(EBP + 0x18));
  /* 11ad4f5d push ecx */
  push32((uint32_t)(ECX));
  /* 11ad4f5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad4f61 push edx */
  push32((uint32_t)(EDX));
  /* 11ad4f62 call 0x11ad55b0 */
  push32(0x11ad4f67u); f_11ad55b0();
  /* 11ad4f67 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4f6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad4f6c jne 0x11ad4f96 */
  if (!C.zf) goto L_11ad4f96;
  /* 11ad4f6e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad4f71 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11ad4f73 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ad4f76 lea ecx, [ebp + 0x18] */
  ECX = ((uint32_t)(EBP + 0x18));
  /* 11ad4f79 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad4f7a lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11ad4f7d push edx */
  push32((uint32_t)(EDX));
  /* 11ad4f7e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad4f81 push eax */
  push32((uint32_t)(EAX));
  /* 11ad4f82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad4f85 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad4f86 lea edx, [ebp + 0x20] */
  EDX = ((uint32_t)(EBP + 0x20));
  /* 11ad4f89 push edx */
  push32((uint32_t)(EDX));
  /* 11ad4f8a lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 11ad4f8d push eax */
  push32((uint32_t)(EAX));
  /* 11ad4f8e call 0x11ad50e0 */
  push32(0x11ad4f93u); f_11ad50e0();
  /* 11ad4f93 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ad4f96:;
  /* 11ad4f96 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad4f99 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad4f9a call 0x11ad5a50 */
  push32(0x11ad4f9fu); f_11ad5a50();
  /* 11ad4f9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4fa2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad4fa5 cmp dword ptr [0x11af76a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af76a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4fac jne 0x11ad4fde */
  if (!C.zf) goto L_11ad4fde;
  /* 11ad4fae cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad4fb2 je 0x11ad4fde */
  if (C.zf) goto L_11ad4fde;
  /* 11ad4fb4 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ad4fb7 push edx */
  push32((uint32_t)(EDX));
  /* 11ad4fb8 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad4fbb push eax */
  push32((uint32_t)(EAX));
  /* 11ad4fbc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ad4fbf push ecx */
  push32((uint32_t)(ECX));
  /* 11ad4fc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad4fc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad4fc4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad4fc7 push edx */
  push32((uint32_t)(EDX));
  /* 11ad4fc8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad4fcb push eax */
  push32((uint32_t)(EAX));
  /* 11ad4fcc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad4fcf push ecx */
  push32((uint32_t)(ECX));
  /* 11ad4fd0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad4fd3 push edx */
  push32((uint32_t)(EDX));
  /* 11ad4fd4 call 0x11ad5930 */
  push32(0x11ad4fd9u); f_11ad5930();
  /* 11ad4fd9 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4fdc jmp 0x11ad4ffe */
  goto L_11ad4ffe;
L_11ad4fde:;
  /* 11ad4fde mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad4fe1 push eax */
  push32((uint32_t)(EAX));
  /* 11ad4fe2 call 0x11ad59d0 */
  push32(0x11ad4fe7u); f_11ad59d0();
  /* 11ad4fe7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4fea push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11ad4fef mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ad4ff2 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad4ff3 call 0x11ad5b20 */
  push32(0x11ad4ff8u); f_11ad5b20();
  /* 11ad4ff8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad4ffb fld qword ptr [ebp + 0x18] */
  fpu_push(rf64((uint32_t)(EBP + 0x18)));
L_11ad4ffe:;
  /* 11ad4ffe mov esp, ebp */
  ESP = (EBP);
  /* 11ad5000 pop ebp */
  EBP = (pop32());
  /* 11ad5001 ret  */
  ESPCHK(0x11ad4f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10015010 @ 0x11ad5010 (206 bytes, 81 insns) */
void f_11ad5010(void) {
  FTRACE(0x11ad5010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad5010 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad5011 mov ebp, esp */
  EBP = (ESP);
  /* 11ad5013 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad5016 mov eax, dword ptr [ebp + 0x28] */
  EAX = (r32((uint32_t)(EBP + 0x28)));
  /* 11ad5019 push eax */
  push32((uint32_t)(EAX));
  /* 11ad501a lea ecx, [ebp + 0x20] */
  ECX = ((uint32_t)(EBP + 0x20));
  /* 11ad501d push ecx */
  push32((uint32_t)(ECX));
  /* 11ad501e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5021 push edx */
  push32((uint32_t)(EDX));
  /* 11ad5022 call 0x11ad55b0 */
  push32(0x11ad5027u); f_11ad55b0();
  /* 11ad5027 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad502a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad502c jne 0x11ad506e */
  if (!C.zf) goto L_11ad506e;
  /* 11ad502e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad5031 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11ad5033 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ad5036 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad5039 and ecx, 0xffffffe1 */
  { uint32_t _r=(ECX)&(0xffffffe1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad503c or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad503f mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11ad5042 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ad5045 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11ad5048 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad504b mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11ad504e lea ecx, [ebp + 0x20] */
  ECX = ((uint32_t)(EBP + 0x20));
  /* 11ad5051 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad5052 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11ad5055 push edx */
  push32((uint32_t)(EDX));
  /* 11ad5056 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad5059 push eax */
  push32((uint32_t)(EAX));
  /* 11ad505a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad505d push ecx */
  push32((uint32_t)(ECX));
  /* 11ad505e lea edx, [ebp + 0x28] */
  EDX = ((uint32_t)(EBP + 0x28));
  /* 11ad5061 push edx */
  push32((uint32_t)(EDX));
  /* 11ad5062 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 11ad5065 push eax */
  push32((uint32_t)(EAX));
  /* 11ad5066 call 0x11ad50e0 */
  push32(0x11ad506bu); f_11ad50e0();
  /* 11ad506b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ad506e:;
  /* 11ad506e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5071 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad5072 call 0x11ad5a50 */
  push32(0x11ad5077u); f_11ad5a50();
  /* 11ad5077 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad507a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad507d cmp dword ptr [0x11af76a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af76a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad5084 jne 0x11ad50ba */
  if (!C.zf) goto L_11ad50ba;
  /* 11ad5086 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad508a je 0x11ad50ba */
  if (C.zf) goto L_11ad50ba;
  /* 11ad508c mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11ad508f push edx */
  push32((uint32_t)(EDX));
  /* 11ad5090 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11ad5093 push eax */
  push32((uint32_t)(EAX));
  /* 11ad5094 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ad5097 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad5098 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad509b push edx */
  push32((uint32_t)(EDX));
  /* 11ad509c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ad509f push eax */
  push32((uint32_t)(EAX));
  /* 11ad50a0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad50a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad50a4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad50a7 push edx */
  push32((uint32_t)(EDX));
  /* 11ad50a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad50ab push eax */
  push32((uint32_t)(EAX));
  /* 11ad50ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad50af push ecx */
  push32((uint32_t)(ECX));
  /* 11ad50b0 call 0x11ad5930 */
  push32(0x11ad50b5u); f_11ad5930();
  /* 11ad50b5 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad50b8 jmp 0x11ad50da */
  goto L_11ad50da;
L_11ad50ba:;
  /* 11ad50ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad50bd push edx */
  push32((uint32_t)(EDX));
  /* 11ad50be call 0x11ad59d0 */
  push32(0x11ad50c3u); f_11ad59d0();
  /* 11ad50c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad50c6 push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11ad50cb mov eax, dword ptr [ebp + 0x28] */
  EAX = (r32((uint32_t)(EBP + 0x28)));
  /* 11ad50ce push eax */
  push32((uint32_t)(EAX));
  /* 11ad50cf call 0x11ad5b20 */
  push32(0x11ad50d4u); f_11ad5b20();
  /* 11ad50d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad50d7 fld qword ptr [ebp + 0x20] */
  fpu_push(rf64((uint32_t)(EBP + 0x20)));
L_11ad50da:;
  /* 11ad50da mov esp, ebp */
  ESP = (EBP);
  /* 11ad50dc pop ebp */
  EBP = (pop32());
  /* 11ad50dd ret  */
  ESPCHK(0x11ad5010u, _esp0);
  ESP += 4; return;
}

/* FUN_100150e0 @ 0x11ad50e0 (1201 bytes, 425 insns) [1 switch table(s)] */
void f_11ad50e0(void) {
  FTRACE(0x11ad50e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad50e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad50e1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad50e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad50e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad50e9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11ad50f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad50f3 mov dword ptr [ecx + 8], 0 */
  w32((uint32_t)(ECX + 0x8), (0x0u));
  /* 11ad50fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad50fd mov dword ptr [edx + 0xc], 0 */
  w32((uint32_t)(EDX + 0xc), (0x0u));
  /* 11ad5104 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad5107 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad510a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad510c je 0x11ad5124 */
  if (C.zf) goto L_11ad5124;
  /* 11ad510e mov dword ptr [ebp - 4], 0xc000008f */
  w32((uint32_t)(EBP + -0x4), (0xc000008fu));
  /* 11ad5115 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5118 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ad511b or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad511e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5121 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11ad5124:;
  /* 11ad5124 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad5127 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad512a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad512c je 0x11ad5143 */
  if (C.zf) goto L_11ad5143;
  /* 11ad512e mov dword ptr [ebp - 4], 0xc0000093 */
  w32((uint32_t)(EBP + -0x4), (0xc0000093u));
  /* 11ad5135 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5138 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ad513b or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11ad513d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5140 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11ad5143:;
  /* 11ad5143 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad5146 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad5149 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad514b je 0x11ad5163 */
  if (C.zf) goto L_11ad5163;
  /* 11ad514d mov dword ptr [ebp - 4], 0xc0000091 */
  w32((uint32_t)(EBP + -0x4), (0xc0000091u));
  /* 11ad5154 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5157 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ad515a or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad515d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5160 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11ad5163:;
  /* 11ad5163 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad5166 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad5169 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad516b je 0x11ad5183 */
  if (C.zf) goto L_11ad5183;
  /* 11ad516d mov dword ptr [ebp - 4], 0xc000008e */
  w32((uint32_t)(EBP + -0x4), (0xc000008eu));
  /* 11ad5174 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5177 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ad517a or edx, 8 */
  { uint32_t _r=(EDX)|(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad517d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5180 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11ad5183:;
  /* 11ad5183 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad5186 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad5189 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad518b je 0x11ad51a2 */
  if (C.zf) goto L_11ad51a2;
  /* 11ad518d mov dword ptr [ebp - 4], 0xc0000090 */
  w32((uint32_t)(EBP + -0x4), (0xc0000090u));
  /* 11ad5194 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5197 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ad519a or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
  /* 11ad519c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad519f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11ad51a2:;
  /* 11ad51a2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad51a5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ad51a7 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad51aa neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ad51ac sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad51ae inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ad51af and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad51b2 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11ad51b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad51b8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ad51bb and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 11ad51be or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11ad51c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad51c3 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11ad51c6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad51c9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad51cb and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad51ce neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ad51d0 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad51d2 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11ad51d3 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad51d6 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 11ad51d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad51dc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ad51df and ecx, 0xfffffff7 */
  { uint32_t _r=(ECX)&(0xfffffff7u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad51e2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad51e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad51e7 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11ad51ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad51ed mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ad51ef and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad51f2 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ad51f4 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad51f6 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ad51f7 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad51fa shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ad51fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5200 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ad5203 and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
  /* 11ad5205 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad5207 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad520a mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11ad520d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad5210 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ad5212 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad5215 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ad5217 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad5219 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ad521a and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad521d shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11ad521f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5222 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ad5225 and edx, 0xfffffffd */
  { uint32_t _r=(EDX)&(0xfffffffdu); EDX = (_r); fl_logic(_r,32); }
  /* 11ad5228 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11ad522a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad522d mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11ad5230 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad5233 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad5235 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad5238 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ad523a sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad523c inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11ad523d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad5240 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5243 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ad5246 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11ad5249 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad524b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad524e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11ad5251 call 0x11ad5ae0 */
  push32(0x11ad5256u); f_11ad5ae0();
  /* 11ad5256 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ad5259 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad525c and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad525f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad5261 je 0x11ad5272 */
  if (C.zf) goto L_11ad5272;
  /* 11ad5263 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5266 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ad5269 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad526c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad526f mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
L_11ad5272:;
  /* 11ad5272 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad5275 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad5278 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad527a je 0x11ad528a */
  if (C.zf) goto L_11ad528a;
  /* 11ad527c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad527f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11ad5282 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11ad5284 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5287 mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
L_11ad528a:;
  /* 11ad528a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad528d and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad5290 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad5292 je 0x11ad52a3 */
  if (C.zf) goto L_11ad52a3;
  /* 11ad5294 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5297 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11ad529a or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad529d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad52a0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_11ad52a3:;
  /* 11ad52a3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad52a6 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad52a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad52ab je 0x11ad52bc */
  if (C.zf) goto L_11ad52bc;
  /* 11ad52ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad52b0 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ad52b3 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad52b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad52b9 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
L_11ad52bc:;
  /* 11ad52bc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad52bf and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad52c2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad52c4 je 0x11ad52d4 */
  if (C.zf) goto L_11ad52d4;
  /* 11ad52c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad52c9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11ad52cc or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11ad52ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad52d1 mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
L_11ad52d4:;
  /* 11ad52d4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad52d7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ad52d9 and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad52de mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ad52e1 cmp dword ptr [ebp - 0xc], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad52e8 ja 0x11ad5304 */
  if ((!C.cf&&!C.zf)) goto L_11ad5304;
  /* 11ad52ea cmp dword ptr [ebp - 0xc], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad52f1 je 0x11ad531e */
  if (C.zf) goto L_11ad531e;
  /* 11ad52f3 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad52f7 je 0x11ad5342 */
  if (C.zf) goto L_11ad5342;
  /* 11ad52f9 cmp dword ptr [ebp - 0xc], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad5300 je 0x11ad5330 */
  if (C.zf) goto L_11ad5330;
  /* 11ad5302 jmp 0x11ad534f */
  goto L_11ad534f;
L_11ad5304:;
  /* 11ad5304 cmp dword ptr [ebp - 0xc], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad530b je 0x11ad530f */
  if (C.zf) goto L_11ad530f;
  /* 11ad530d jmp 0x11ad534f */
  goto L_11ad534f;
L_11ad530f:;
  /* 11ad530f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5312 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad5314 or edx, 3 */
  { uint32_t _r=(EDX)|(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad5317 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad531a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ad531c jmp 0x11ad534f */
  goto L_11ad534f;
L_11ad531e:;
  /* 11ad531e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5321 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad5323 and edx, 0xfffffffc */
  { uint32_t _r=(EDX)&(0xfffffffcu); EDX = (_r); fl_logic(_r,32); }
  /* 11ad5326 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad5329 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad532c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ad532e jmp 0x11ad534f */
  goto L_11ad534f;
L_11ad5330:;
  /* 11ad5330 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5333 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad5335 and edx, 0xfffffffc */
  { uint32_t _r=(EDX)&(0xfffffffcu); EDX = (_r); fl_logic(_r,32); }
  /* 11ad5338 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad533b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad533e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ad5340 jmp 0x11ad534f */
  goto L_11ad534f;
L_11ad5342:;
  /* 11ad5342 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5345 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad5347 and edx, 0xfffffffc */
  { uint32_t _r=(EDX)&(0xfffffffcu); EDX = (_r); fl_logic(_r,32); }
  /* 11ad534a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad534d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11ad534f:;
  /* 11ad534f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad5352 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad5354 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad535a mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11ad535d cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad5361 je 0x11ad5398 */
  if (C.zf) goto L_11ad5398;
  /* 11ad5363 cmp dword ptr [ebp - 0x10], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad536a je 0x11ad5386 */
  if (C.zf) goto L_11ad5386;
  /* 11ad536c cmp dword ptr [ebp - 0x10], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad5373 je 0x11ad5377 */
  if (C.zf) goto L_11ad5377;
  /* 11ad5375 jmp 0x11ad53a8 */
  goto L_11ad53a8;
L_11ad5377:;
  /* 11ad5377 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad537a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ad537c and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad537f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5382 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11ad5384 jmp 0x11ad53a8 */
  goto L_11ad53a8;
L_11ad5386:;
  /* 11ad5386 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5389 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ad538b and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad538e or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad5391 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5394 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11ad5396 jmp 0x11ad53a8 */
  goto L_11ad53a8;
L_11ad5398:;
  /* 11ad5398 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad539b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ad539d and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad53a0 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad53a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad53a6 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11ad53a8:;
  /* 11ad53a8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad53ab and eax, 0xfff */
  { uint32_t _r=(EAX)&(0xfffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad53b0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ad53b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad53b6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad53b8 and edx, 0xfffe001f */
  { uint32_t _r=(EDX)&(0xfffe001fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ad53be or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11ad53c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad53c3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ad53c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad53c8 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11ad53cb or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad53ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad53d1 mov dword ptr [eax + 0x20], edx */
  w32((uint32_t)(EAX + 0x20), (EDX));
  /* 11ad53d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad53d7 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11ad53da and edx, 0xffffffe1 */
  { uint32_t _r=(EDX)&(0xffffffe1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad53dd or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad53e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad53e3 mov dword ptr [eax + 0x20], edx */
  w32((uint32_t)(EAX + 0x20), (EDX));
  /* 11ad53e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad53e9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ad53ec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ad53ee mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 11ad53f1 mov edx, dword ptr [edx + 4] */
  EDX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ad53f4 mov dword ptr [ecx + 0x14], edx */
  w32((uint32_t)(ECX + 0x14), (EDX));
  /* 11ad53f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad53fa mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11ad53fd or ecx, 1 */
  { uint32_t _r=(ECX)|(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad5400 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5403 mov dword ptr [edx + 0x50], ecx */
  w32((uint32_t)(EDX + 0x50), (ECX));
  /* 11ad5406 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5409 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11ad540c and ecx, 0xffffffe1 */
  { uint32_t _r=(ECX)&(0xffffffe1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad540f or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad5412 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5415 mov dword ptr [edx + 0x50], ecx */
  w32((uint32_t)(EDX + 0x50), (ECX));
  /* 11ad5418 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad541b mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad541e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad5420 mov dword ptr [eax + 0x40], edx */
  w32((uint32_t)(EAX + 0x40), (EDX));
  /* 11ad5423 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ad5426 mov dword ptr [eax + 0x44], ecx */
  w32((uint32_t)(EAX + 0x44), (ECX));
  /* 11ad5429 call 0x11ad5b00 */
  push32(0x11ad542eu); f_11ad5b00();
  /* 11ad542e lea edx, [ebp + 8] */
  EDX = ((uint32_t)(EBP + 0x8));
  /* 11ad5431 push edx */
  push32((uint32_t)(EDX));
  /* 11ad5432 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad5434 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad5436 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad5439 push eax */
  push32((uint32_t)(EAX));
  /* 11ad543a call dword ptr [0x11afb314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb314))), 0x11ad5440u);
  /* 11ad5440 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5443 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ad5446 shr edx, 4 */
  EDX = (sh_shr((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11ad5449 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad544c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad544e je 0x11ad545d */
  if (C.zf) goto L_11ad545d;
  /* 11ad5450 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad5453 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ad5455 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11ad5458 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad545b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11ad545d:;
  /* 11ad545d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5460 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ad5463 shr ecx, 3 */
  ECX = (sh_shr((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 11ad5466 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad5469 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad546b je 0x11ad5479 */
  if (C.zf) goto L_11ad5479;
  /* 11ad546d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad5470 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ad5472 and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
  /* 11ad5474 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad5477 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11ad5479:;
  /* 11ad5479 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad547c mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ad547f shr eax, 2 */
  EAX = (sh_shr((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11ad5482 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad5485 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad5487 je 0x11ad5496 */
  if (C.zf) goto L_11ad5496;
  /* 11ad5489 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad548c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad548e and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad5491 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad5494 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11ad5496:;
  /* 11ad5496 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5499 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ad549c shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11ad549e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad54a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad54a3 je 0x11ad54b2 */
  if (C.zf) goto L_11ad54b2;
  /* 11ad54a5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad54a8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ad54aa and ecx, 0xffffffef */
  { uint32_t _r=(ECX)&(0xffffffefu); ECX = (_r); fl_logic(_r,32); }
  /* 11ad54ad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad54b0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11ad54b2:;
  /* 11ad54b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad54b5 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ad54b8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad54bb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad54bd je 0x11ad54cb */
  if (C.zf) goto L_11ad54cb;
  /* 11ad54bf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad54c2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ad54c4 and al, 0xdf */
  { uint32_t _r=(AL)&(0xdfu); AL = (_r); fl_logic(_r,8); }
  /* 11ad54c6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad54c9 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11ad54cb:;
  /* 11ad54cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad54ce mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ad54d0 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad54d3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ad54d6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad54da ja 0x11ad5529 */
  if ((!C.cf&&!C.zf)) goto L_11ad5529;
  /* 11ad54dc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad54df jmp dword ptr [ecx*4 + 0x11ad5591] */
  switch (ECX) {
    case 0: goto L_11ad551c;
    case 1: goto L_11ad550a;
    case 2: goto L_11ad54f8;
    case 3: goto L_11ad54e6;
    default: x86_unimpl("switch@0x11ad54df out of table"); return;
  }
L_11ad54e6:;
  /* 11ad54e6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad54e9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ad54eb and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 11ad54ee or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 11ad54f1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad54f4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ad54f6 jmp 0x11ad5529 */
  goto L_11ad5529;
L_11ad54f8:;
  /* 11ad54f8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad54fb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ad54fd and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 11ad5500 or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 11ad5503 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad5506 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ad5508 jmp 0x11ad5529 */
  goto L_11ad5529;
L_11ad550a:;
  /* 11ad550a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad550d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ad550f and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 11ad5512 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 11ad5515 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad5518 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ad551a jmp 0x11ad5529 */
  goto L_11ad5529;
L_11ad551c:;
  /* 11ad551c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad551f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ad5521 and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 11ad5524 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad5527 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11ad5529:;
  /* 11ad5529 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad552c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ad552e shr eax, 2 */
  EAX = (sh_shr((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11ad5531 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad5534 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ad5537 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad553b je 0x11ad554b */
  if (C.zf) goto L_11ad554b;
  /* 11ad553d cmp dword ptr [ebp - 0x18], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad5541 je 0x11ad555d */
  if (C.zf) goto L_11ad555d;
  /* 11ad5543 cmp dword ptr [ebp - 0x18], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad5547 je 0x11ad556f */
  if (C.zf) goto L_11ad556f;
  /* 11ad5549 jmp 0x11ad557c */
  goto L_11ad557c;
L_11ad554b:;
  /* 11ad554b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad554e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad5550 and dh, 0xf3 */
  { uint32_t _r=(C.d.b.h)&(0xf3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11ad5553 or dh, 3 */
  { uint32_t _r=(C.d.b.h)|(0x3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11ad5556 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad5559 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ad555b jmp 0x11ad557c */
  goto L_11ad557c;
L_11ad555d:;
  /* 11ad555d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad5560 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad5562 and dh, 0xf3 */
  { uint32_t _r=(C.d.b.h)&(0xf3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11ad5565 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11ad5568 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad556b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ad556d jmp 0x11ad557c */
  goto L_11ad557c;
L_11ad556f:;
  /* 11ad556f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad5572 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad5574 and dh, 0xf3 */
  { uint32_t _r=(C.d.b.h)&(0xf3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11ad5577 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad557a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11ad557c:;
  /* 11ad557c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad557f mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad5582 mov eax, dword ptr [ecx + 0x40] */
  EAX = (r32((uint32_t)(ECX + 0x40)));
  /* 11ad5585 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11ad5587 mov ecx, dword ptr [ecx + 0x44] */
  ECX = (r32((uint32_t)(ECX + 0x44)));
  /* 11ad558a mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11ad558d mov esp, ebp */
  ESP = (EBP);
  /* 11ad558f pop ebp */
  EBP = (pop32());
  /* 11ad5590 ret  */
  ESPCHK(0x11ad50e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100155b0 @ 0x11ad55b0 (882 bytes, 268 insns) */
void f_11ad55b0(void) {
  FTRACE(0x11ad55b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad55b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad55b1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad55b3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad55b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad55b9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad55bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad55bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad55c2 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad55c5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad55c7 je 0x11ad55ea */
  if (C.zf) goto L_11ad55ea;
  /* 11ad55c9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad55cc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad55cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad55d1 je 0x11ad55ea */
  if (C.zf) goto L_11ad55ea;
  /* 11ad55d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad55d5 call 0x11ad5b60 */
  push32(0x11ad55dau); f_11ad5b60();
  /* 11ad55da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad55dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad55e0 and al, 0xf7 */
  { uint32_t _r=(AL)&(0xf7u); AL = (_r); fl_logic(_r,8); }
  /* 11ad55e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad55e5 jmp 0x11ad58ee */
  goto L_11ad58ee;
L_11ad55ea:;
  /* 11ad55ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad55ed and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad55f0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad55f2 je 0x11ad5615 */
  if (C.zf) goto L_11ad5615;
  /* 11ad55f4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad55f7 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad55fa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad55fc je 0x11ad5615 */
  if (C.zf) goto L_11ad5615;
  /* 11ad55fe push 4 */
  push32((uint32_t)(0x4u));
  /* 11ad5600 call 0x11ad5b60 */
  push32(0x11ad5605u); f_11ad5b60();
  /* 11ad5605 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5608 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad560b and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
  /* 11ad560d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad5610 jmp 0x11ad58ee */
  goto L_11ad58ee;
L_11ad5615:;
  /* 11ad5615 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5618 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad561b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad561d je 0x11ad5791 */
  if (C.zf) goto L_11ad5791;
  /* 11ad5623 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad5626 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad5629 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad562b je 0x11ad5791 */
  if (C.zf) goto L_11ad5791;
  /* 11ad5631 push 8 */
  push32((uint32_t)(0x8u));
  /* 11ad5633 call 0x11ad5b60 */
  push32(0x11ad5638u); f_11ad5b60();
  /* 11ad5638 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad563b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad563e and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad5643 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ad5646 cmp dword ptr [ebp - 0x20], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad564d ja 0x11ad5670 */
  if ((!C.cf&&!C.zf)) goto L_11ad5670;
  /* 11ad564f cmp dword ptr [ebp - 0x20], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad5656 je 0x11ad56c5 */
  if (C.zf) goto L_11ad56c5;
  /* 11ad5658 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad565c je 0x11ad5682 */
  if (C.zf) goto L_11ad5682;
  /* 11ad565e cmp dword ptr [ebp - 0x20], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad5665 je 0x11ad5705 */
  if (C.zf) goto L_11ad5705;
  /* 11ad566b jmp 0x11ad5783 */
  goto L_11ad5783;
L_11ad5670:;
  /* 11ad5670 cmp dword ptr [ebp - 0x20], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad5677 je 0x11ad5745 */
  if (C.zf) goto L_11ad5745;
  /* 11ad567d jmp 0x11ad5783 */
  goto L_11ad5783;
L_11ad5682:;
  /* 11ad5682 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad5685 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 11ad5687 fcomp qword ptr [0x11af3660] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11af3660)));
  (void)fpu_pop();
  /* 11ad568d fnstsw ax */
  AX = fpu_status();
  /* 11ad568f test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11ad5692 jne 0x11ad56a7 */
  if (!C.zf) goto L_11ad56a7;
  /* 11ad5694 mov edx, dword ptr [0x11af7e58] */
  EDX = (r32((uint32_t)(0x11af7e58)));
  /* 11ad569a mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11ad569d mov eax, dword ptr [0x11af7e5c] */
  EAX = (r32((uint32_t)(0x11af7e5c)));
  /* 11ad56a2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ad56a5 jmp 0x11ad56b2 */
  goto L_11ad56b2;
L_11ad56a7:;
  /* 11ad56a7 fld qword ptr [0x11af7e58] */
  fpu_push(rf64((uint32_t)(0x11af7e58)));
  /* 11ad56ad fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11ad56af fstp qword ptr [ebp - 0x28] */
  wf64((uint32_t)(EBP + -0x28), FPU_ST(0));
  (void)fpu_pop();
L_11ad56b2:;
  /* 11ad56b2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad56b5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ad56b8 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11ad56ba mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad56bd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11ad56c0 jmp 0x11ad5783 */
  goto L_11ad5783;
L_11ad56c5:;
  /* 11ad56c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad56c8 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 11ad56ca fcomp qword ptr [0x11af3660] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11af3660)));
  (void)fpu_pop();
  /* 11ad56d0 fnstsw ax */
  AX = fpu_status();
  /* 11ad56d2 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11ad56d5 jne 0x11ad56ea */
  if (!C.zf) goto L_11ad56ea;
  /* 11ad56d7 mov edx, dword ptr [0x11af7e58] */
  EDX = (r32((uint32_t)(0x11af7e58)));
  /* 11ad56dd mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11ad56e0 mov eax, dword ptr [0x11af7e5c] */
  EAX = (r32((uint32_t)(0x11af7e5c)));
  /* 11ad56e5 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11ad56e8 jmp 0x11ad56f5 */
  goto L_11ad56f5;
L_11ad56ea:;
  /* 11ad56ea fld qword ptr [0x11af7e68] */
  fpu_push(rf64((uint32_t)(0x11af7e68)));
  /* 11ad56f0 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11ad56f2 fstp qword ptr [ebp - 0x30] */
  wf64((uint32_t)(EBP + -0x30), FPU_ST(0));
  (void)fpu_pop();
L_11ad56f5:;
  /* 11ad56f5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad56f8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad56fb mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11ad56fd mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad5700 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11ad5703 jmp 0x11ad5783 */
  goto L_11ad5783;
L_11ad5705:;
  /* 11ad5705 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad5708 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 11ad570a fcomp qword ptr [0x11af3660] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11af3660)));
  (void)fpu_pop();
  /* 11ad5710 fnstsw ax */
  AX = fpu_status();
  /* 11ad5712 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11ad5715 jne 0x11ad572a */
  if (!C.zf) goto L_11ad572a;
  /* 11ad5717 mov edx, dword ptr [0x11af7e68] */
  EDX = (r32((uint32_t)(0x11af7e68)));
  /* 11ad571d mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11ad5720 mov eax, dword ptr [0x11af7e6c] */
  EAX = (r32((uint32_t)(0x11af7e6c)));
  /* 11ad5725 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11ad5728 jmp 0x11ad5735 */
  goto L_11ad5735;
L_11ad572a:;
  /* 11ad572a fld qword ptr [0x11af7e58] */
  fpu_push(rf64((uint32_t)(0x11af7e58)));
  /* 11ad5730 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11ad5732 fstp qword ptr [ebp - 0x38] */
  wf64((uint32_t)(EBP + -0x38), FPU_ST(0));
  (void)fpu_pop();
L_11ad5735:;
  /* 11ad5735 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad5738 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ad573b mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11ad573d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ad5740 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11ad5743 jmp 0x11ad5783 */
  goto L_11ad5783;
L_11ad5745:;
  /* 11ad5745 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad5748 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 11ad574a fcomp qword ptr [0x11af3660] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11af3660)));
  (void)fpu_pop();
  /* 11ad5750 fnstsw ax */
  AX = fpu_status();
  /* 11ad5752 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11ad5755 jne 0x11ad576a */
  if (!C.zf) goto L_11ad576a;
  /* 11ad5757 mov edx, dword ptr [0x11af7e68] */
  EDX = (r32((uint32_t)(0x11af7e68)));
  /* 11ad575d mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 11ad5760 mov eax, dword ptr [0x11af7e6c] */
  EAX = (r32((uint32_t)(0x11af7e6c)));
  /* 11ad5765 mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 11ad5768 jmp 0x11ad5775 */
  goto L_11ad5775;
L_11ad576a:;
  /* 11ad576a fld qword ptr [0x11af7e68] */
  fpu_push(rf64((uint32_t)(0x11af7e68)));
  /* 11ad5770 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11ad5772 fstp qword ptr [ebp - 0x40] */
  wf64((uint32_t)(EBP + -0x40), FPU_ST(0));
  (void)fpu_pop();
L_11ad5775:;
  /* 11ad5775 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad5778 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11ad577b mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11ad577d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ad5780 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11ad5783:;
  /* 11ad5783 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad5786 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11ad5789 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ad578c jmp 0x11ad58ee */
  goto L_11ad58ee;
L_11ad5791:;
  /* 11ad5791 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5794 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad5797 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad5799 je 0x11ad58ee */
  if (C.zf) goto L_11ad58ee;
  /* 11ad579f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad57a2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad57a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad57a7 je 0x11ad58ee */
  if (C.zf) goto L_11ad58ee;
  /* 11ad57ad mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ad57b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad57b7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad57ba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad57bc je 0x11ad57c5 */
  if (C.zf) goto L_11ad57c5;
  /* 11ad57be mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11ad57c5:;
  /* 11ad57c5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad57c8 fld qword ptr [edx] */
  fpu_push(rf64((uint32_t)(EDX)));
  /* 11ad57ca fcomp qword ptr [0x11af3660] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11af3660)));
  (void)fpu_pop();
  /* 11ad57d0 fnstsw ax */
  AX = fpu_status();
  /* 11ad57d2 test ah, 0x40 */
  { uint32_t _r=(AH)&(0x40u); fl_logic(_r,8); }
  /* 11ad57d5 jne 0x11ad58ce */
  if (!C.zf) goto L_11ad58ce;
  /* 11ad57db lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11ad57de push eax */
  push32((uint32_t)(EAX));
  /* 11ad57df mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad57e2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ad57e5 push edx */
  push32((uint32_t)(EDX));
  /* 11ad57e6 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11ad57e8 push eax */
  push32((uint32_t)(EAX));
  /* 11ad57e9 call 0x11ad8a10 */
  push32(0x11ad57eeu); f_11ad8a10();
  /* 11ad57ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad57f1 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 11ad57f4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad57f7 sub ecx, 0x600 */
  { uint32_t _a=(ECX),_b=(0x600u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad57fd mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11ad5800 cmp dword ptr [ebp - 0x14], 0xfffffbce */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xfffffbceu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad5807 jge 0x11ad5821 */
  if ((C.sf==C.of)) goto L_11ad5821;
  /* 11ad5809 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11ad580c fmul qword ptr [0x11af3660] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x11af3660)));
  /* 11ad5812 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 11ad5815 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11ad581c jmp 0x11ad58be */
  goto L_11ad58be;
L_11ad5821:;
  /* 11ad5821 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11ad5824 fcomp qword ptr [0x11af3660] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11af3660)));
  (void)fpu_pop();
  /* 11ad582a fnstsw ax */
  AX = fpu_status();
  /* 11ad582c test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 11ad582f je 0x11ad583a */
  if (C.zf) goto L_11ad583a;
  /* 11ad5831 mov dword ptr [ebp - 0x44], 1 */
  w32((uint32_t)(EBP + -0x44), (0x1u));
  /* 11ad5838 jmp 0x11ad5841 */
  goto L_11ad5841;
L_11ad583a:;
  /* 11ad583a mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
L_11ad5841:;
  /* 11ad5841 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11ad5844 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11ad5847 mov ax, word ptr [ebp - 0xa] */
  AX = (r16((uint32_t)(EBP + -0xa)));
  /* 11ad584b and ax, 0xf */
  { uint32_t _r=(AX)&(0xfu); AX = (_r); fl_logic(_r,16); }
  /* 11ad584f mov word ptr [ebp - 0xa], ax */
  w16((uint32_t)(EBP + -0xa), (AX));
  /* 11ad5853 mov cx, word ptr [ebp - 0xa] */
  CX = (r16((uint32_t)(EBP + -0xa)));
  /* 11ad5857 or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 11ad585a mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
  /* 11ad585e jmp 0x11ad5869 */
  goto L_11ad5869;
L_11ad5860:;
  /* 11ad5860 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad5863 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5866 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11ad5869:;
  /* 11ad5869 cmp dword ptr [ebp - 0x14], 0xfffffc03 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xfffffc03u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad5870 jge 0x11ad58b0 */
  if ((C.sf==C.of)) goto L_11ad58b0;
  /* 11ad5872 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad5875 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad5878 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad587a je 0x11ad5889 */
  if (C.zf) goto L_11ad5889;
  /* 11ad587c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad5880 jne 0x11ad5889 */
  if (!C.zf) goto L_11ad5889;
  /* 11ad5882 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11ad5889:;
  /* 11ad5889 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad588c shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11ad588e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ad5891 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad5894 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad5897 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad5899 je 0x11ad58a6 */
  if (C.zf) goto L_11ad58a6;
  /* 11ad589b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad589e or eax, 0x80000000 */
  { uint32_t _r=(EAX)|(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad58a3 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11ad58a6:;
  /* 11ad58a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad58a9 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11ad58ab mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad58ae jmp 0x11ad5860 */
  goto L_11ad5860;
L_11ad58b0:;
  /* 11ad58b0 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad58b4 je 0x11ad58be */
  if (C.zf) goto L_11ad58be;
  /* 11ad58b6 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11ad58b9 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11ad58bb fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
L_11ad58be:;
  /* 11ad58be mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad58c1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad58c4 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11ad58c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad58c9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11ad58cc jmp 0x11ad58d5 */
  goto L_11ad58d5;
L_11ad58ce:;
  /* 11ad58ce mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11ad58d5:;
  /* 11ad58d5 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad58d9 je 0x11ad58e5 */
  if (C.zf) goto L_11ad58e5;
  /* 11ad58db push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11ad58dd call 0x11ad5b60 */
  push32(0x11ad58e2u); f_11ad5b60();
  /* 11ad58e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ad58e5:;
  /* 11ad58e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad58e8 and edx, 0xfffffffd */
  { uint32_t _r=(EDX)&(0xfffffffdu); EDX = (_r); fl_logic(_r,32); }
  /* 11ad58eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ad58ee:;
  /* 11ad58ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad58f1 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad58f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad58f6 je 0x11ad5915 */
  if (C.zf) goto L_11ad5915;
  /* 11ad58f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad58fb and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad58fe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad5900 je 0x11ad5915 */
  if (C.zf) goto L_11ad5915;
  /* 11ad5902 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11ad5904 call 0x11ad5b60 */
  push32(0x11ad5909u); f_11ad5b60();
  /* 11ad5909 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad590c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad590f and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 11ad5912 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ad5915:;
  /* 11ad5915 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad5917 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad591b sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11ad591e mov esp, ebp */
  ESP = (EBP);
  /* 11ad5920 pop ebp */
  EBP = (pop32());
  /* 11ad5921 ret  */
  ESPCHK(0x11ad55b0u, _esp0);
  ESP += 4; return;
}

/* __umatherr @ 0x11ad5930 (155 bytes, 54 insns) */
void f_11ad5930(void) {
  FTRACE(0x11ad5930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad5930 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad5931 mov ebp, esp */
  EBP = (ESP);
  /* 11ad5933 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad5936 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad5939 push eax */
  push32((uint32_t)(EAX));
  /* 11ad593a call 0x11ad5a10 */
  push32(0x11ad593fu); f_11ad5a10();
  /* 11ad593f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5942 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11ad5945 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad5949 je 0x11ad59a7 */
  if (C.zf) goto L_11ad59a7;
  /* 11ad594b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad594e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11ad5951 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad5954 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11ad5957 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad595a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ad595d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ad5960 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ad5963 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ad5966 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11ad5969 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ad596c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ad596f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11ad5972 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ad5975 push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11ad597a mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11ad597d push edx */
  push32((uint32_t)(EDX));
  /* 11ad597e call 0x11ad5b20 */
  push32(0x11ad5983u); f_11ad5b20();
  /* 11ad5983 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5986 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11ad5989 push eax */
  push32((uint32_t)(EAX));
  /* 11ad598a call 0x11ad5ad0 */
  push32(0x11ad598fu); f_11ad5ad0();
  /* 11ad598f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5992 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad5994 jne 0x11ad59a2 */
  if (!C.zf) goto L_11ad59a2;
  /* 11ad5996 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5999 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad599a call 0x11ad59d0 */
  push32(0x11ad599fu); f_11ad59d0();
  /* 11ad599f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ad59a2:;
  /* 11ad59a2 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 11ad59a5 jmp 0x11ad59c7 */
  goto L_11ad59c7;
L_11ad59a7:;
  /* 11ad59a7 push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11ad59ac mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11ad59af push edx */
  push32((uint32_t)(EDX));
  /* 11ad59b0 call 0x11ad5b20 */
  push32(0x11ad59b5u); f_11ad5b20();
  /* 11ad59b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad59b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad59bb push eax */
  push32((uint32_t)(EAX));
  /* 11ad59bc call 0x11ad59d0 */
  push32(0x11ad59c1u); f_11ad59d0();
  /* 11ad59c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad59c4 fld qword ptr [ebp + 0x20] */
  fpu_push(rf64((uint32_t)(EBP + 0x20)));
L_11ad59c7:;
  /* 11ad59c7 mov esp, ebp */
  ESP = (EBP);
  /* 11ad59c9 pop ebp */
  EBP = (pop32());
  /* 11ad59ca ret  */
  ESPCHK(0x11ad5930u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__set_errno_from_matherr @ 0x11ad59d0 (58 bytes, 20 insns) */
void f_11ad59d0(void) {
  FTRACE(0x11ad59d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad59d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad59d1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad59d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad59d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad59d7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad59da cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad59de je 0x11ad59ee */
  if (C.zf) goto L_11ad59ee;
  /* 11ad59e0 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad59e4 jle 0x11ad5a06 */
  if ((C.zf||C.sf!=C.of)) goto L_11ad5a06;
  /* 11ad59e6 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad59ea jle 0x11ad59fb */
  if ((C.zf||C.sf!=C.of)) goto L_11ad59fb;
  /* 11ad59ec jmp 0x11ad5a06 */
  goto L_11ad5a06;
L_11ad59ee:;
  /* 11ad59ee call 0x11ad21f0 */
  push32(0x11ad59f3u); f_11ad21f0();
  /* 11ad59f3 mov dword ptr [eax], 0x21 */
  w32((uint32_t)(EAX), (0x21u));
  /* 11ad59f9 jmp 0x11ad5a06 */
  goto L_11ad5a06;
L_11ad59fb:;
  /* 11ad59fb call 0x11ad21f0 */
  push32(0x11ad5a00u); f_11ad21f0();
  /* 11ad5a00 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
L_11ad5a06:;
  /* 11ad5a06 mov esp, ebp */
  ESP = (EBP);
  /* 11ad5a08 pop ebp */
  EBP = (pop32());
  /* 11ad5a09 ret  */
  ESPCHK(0x11ad59d0u, _esp0);
  ESP += 4; return;
}

/* __get_fname @ 0x11ad5a10 (63 bytes, 22 insns) */
void f_11ad5a10(void) {
  FTRACE(0x11ad5a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad5a10 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad5a11 mov ebp, esp */
  EBP = (ESP);
  /* 11ad5a13 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad5a14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ad5a1b jmp 0x11ad5a26 */
  goto L_11ad5a26;
L_11ad5a1d:;
  /* 11ad5a1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad5a20 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5a23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ad5a26:;
  /* 11ad5a26 cmp dword ptr [ebp - 4], 0x1b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad5a2a jge 0x11ad5a49 */
  if ((C.sf==C.of)) goto L_11ad5a49;
  /* 11ad5a2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad5a2f mov edx, dword ptr [ecx*8 + 0x11af75d0] */
  EDX = (r32((uint32_t)(ECX*8 + 0x11af75d0)));
  /* 11ad5a36 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad5a39 jne 0x11ad5a47 */
  if (!C.zf) goto L_11ad5a47;
  /* 11ad5a3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad5a3e mov eax, dword ptr [eax*8 + 0x11af75d4] */
  EAX = (r32((uint32_t)(EAX*8 + 0x11af75d4)));
  /* 11ad5a45 jmp 0x11ad5a4b */
  goto L_11ad5a4b;
L_11ad5a47:;
  /* 11ad5a47 jmp 0x11ad5a1d */
  goto L_11ad5a1d;
L_11ad5a49:;
  /* 11ad5a49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ad5a4b:;
  /* 11ad5a4b mov esp, ebp */
  ESP = (EBP);
  /* 11ad5a4d pop ebp */
  EBP = (pop32());
  /* 11ad5a4e ret  */
  ESPCHK(0x11ad5a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10015a50 @ 0x11ad5a50 (113 bytes, 38 insns) */
void f_11ad5a50(void) {
  FTRACE(0x11ad5a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad5a50 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad5a51 mov ebp, esp */
  EBP = (ESP);
  /* 11ad5a53 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad5a54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5a57 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad5a5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad5a5c je 0x11ad5a67 */
  if (C.zf) goto L_11ad5a67;
  /* 11ad5a5e mov dword ptr [ebp - 4], 5 */
  w32((uint32_t)(EBP + -0x4), (0x5u));
  /* 11ad5a65 jmp 0x11ad5aba */
  goto L_11ad5aba;
L_11ad5a67:;
  /* 11ad5a67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5a6a and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad5a6d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad5a6f je 0x11ad5a7a */
  if (C.zf) goto L_11ad5a7a;
  /* 11ad5a71 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ad5a78 jmp 0x11ad5aba */
  goto L_11ad5aba;
L_11ad5a7a:;
  /* 11ad5a7a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5a7d and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad5a80 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad5a82 je 0x11ad5a8d */
  if (C.zf) goto L_11ad5a8d;
  /* 11ad5a84 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11ad5a8b jmp 0x11ad5aba */
  goto L_11ad5aba;
L_11ad5a8d:;
  /* 11ad5a8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5a90 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad5a93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad5a95 je 0x11ad5aa0 */
  if (C.zf) goto L_11ad5aa0;
  /* 11ad5a97 mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 11ad5a9e jmp 0x11ad5aba */
  goto L_11ad5aba;
L_11ad5aa0:;
  /* 11ad5aa0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5aa3 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad5aa6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad5aa8 je 0x11ad5ab3 */
  if (C.zf) goto L_11ad5ab3;
  /* 11ad5aaa mov dword ptr [ebp - 4], 4 */
  w32((uint32_t)(EBP + -0x4), (0x4u));
  /* 11ad5ab1 jmp 0x11ad5aba */
  goto L_11ad5aba;
L_11ad5ab3:;
  /* 11ad5ab3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11ad5aba:;
  /* 11ad5aba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad5abd mov esp, ebp */
  ESP = (EBP);
  /* 11ad5abf pop ebp */
  EBP = (pop32());
  /* 11ad5ac0 ret  */
  ESPCHK(0x11ad5a50u, _esp0);
  ESP += 4; return;
}

/* __matherr @ 0x11ad5ad0 (7 bytes, 5 insns) */
void f_11ad5ad0(void) {
  FTRACE(0x11ad5ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad5ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad5ad1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad5ad3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad5ad5 pop ebp */
  EBP = (pop32());
  /* 11ad5ad6 ret  */
  ESPCHK(0x11ad5ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015ae0 @ 0x11ad5ae0 (22 bytes, 15 insns) */
void f_11ad5ae0(void) {
  FTRACE(0x11ad5ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad5ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad5ae1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad5ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad5ae4 push ebx */
  push32((uint32_t)(EBX));
  /* 11ad5ae5 push esi */
  push32((uint32_t)(ESI));
  /* 11ad5ae6 push edi */
  push32((uint32_t)(EDI));
  /* 11ad5ae7 wait  */
  /* wait (no observable integer/reg state) */
  /* 11ad5ae8 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 11ad5aeb movsx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x4))));
  /* 11ad5aef pop edi */
  EDI = (pop32());
  /* 11ad5af0 pop esi */
  ESI = (pop32());
  /* 11ad5af1 pop ebx */
  EBX = (pop32());
  /* 11ad5af2 mov esp, ebp */
  ESP = (EBP);
  /* 11ad5af4 pop ebp */
  EBP = (pop32());
  /* 11ad5af5 ret  */
  ESPCHK(0x11ad5ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015b00 @ 0x11ad5b00 (23 bytes, 15 insns) */
void f_11ad5b00(void) {
  FTRACE(0x11ad5b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad5b00 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad5b01 mov ebp, esp */
  EBP = (ESP);
  /* 11ad5b03 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad5b04 push ebx */
  push32((uint32_t)(EBX));
  /* 11ad5b05 push esi */
  push32((uint32_t)(ESI));
  /* 11ad5b06 push edi */
  push32((uint32_t)(EDI));
  /* 11ad5b07 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 11ad5b0a fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 11ad5b0c movsx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x4))));
  /* 11ad5b10 pop edi */
  EDI = (pop32());
  /* 11ad5b11 pop esi */
  ESI = (pop32());
  /* 11ad5b12 pop ebx */
  EBX = (pop32());
  /* 11ad5b13 mov esp, ebp */
  ESP = (EBP);
  /* 11ad5b15 pop ebp */
  EBP = (pop32());
  /* 11ad5b16 ret  */
  ESPCHK(0x11ad5b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10015b20 @ 0x11ad5b20 (50 bytes, 24 insns) */
void f_11ad5b20(void) {
  FTRACE(0x11ad5b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad5b20 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad5b21 mov ebp, esp */
  EBP = (ESP);
  /* 11ad5b23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad5b26 push ebx */
  push32((uint32_t)(EBX));
  /* 11ad5b27 push esi */
  push32((uint32_t)(ESI));
  /* 11ad5b28 push edi */
  push32((uint32_t)(EDI));
  /* 11ad5b29 wait  */
  /* wait (no observable integer/reg state) */
  /* 11ad5b2a fnstcw word ptr [ebp - 8] */
  w16((uint32_t)(EBP + -0x8), C.fcw);
  /* 11ad5b2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5b30 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11ad5b33 movsx ecx, word ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x8))));
  /* 11ad5b37 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad5b3a not edx */
  EDX = (~(EDX));
  /* 11ad5b3c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad5b3e or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad5b40 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11ad5b44 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 11ad5b47 movsx eax, word ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x8))));
  /* 11ad5b4b pop edi */
  EDI = (pop32());
  /* 11ad5b4c pop esi */
  ESI = (pop32());
  /* 11ad5b4d pop ebx */
  EBX = (pop32());
  /* 11ad5b4e mov esp, ebp */
  ESP = (EBP);
  /* 11ad5b50 pop ebp */
  EBP = (pop32());
  /* 11ad5b51 ret  */
  ESPCHK(0x11ad5b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10015b60 @ 0x11ad5b60 (117 bytes, 53 insns) */
void f_11ad5b60(void) {
  FTRACE(0x11ad5b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad5b60 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad5b61 mov ebp, esp */
  EBP = (ESP);
  /* 11ad5b63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad5b66 push ebx */
  push32((uint32_t)(EBX));
  /* 11ad5b67 push esi */
  push32((uint32_t)(ESI));
  /* 11ad5b68 push edi */
  push32((uint32_t)(EDI));
  /* 11ad5b69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5b6c and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad5b6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad5b71 je 0x11ad5b7d */
  if (C.zf) goto L_11ad5b7d;
  /* 11ad5b73 fld xword ptr [0x11af76ac] */
  fpu_push(rf80((uint32_t)(0x11af76ac)));
  /* 11ad5b79 fistp dword ptr [ebp - 0xc] */
  w32((uint32_t)(EBP + -0xc), (uint32_t)fpu_to_i32(FPU_ST(0)));
  (void)fpu_pop();
  /* 11ad5b7c wait  */
  /* wait (no observable integer/reg state) */
L_11ad5b7d:;
  /* 11ad5b7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5b80 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad5b83 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad5b85 je 0x11ad5b97 */
  if (C.zf) goto L_11ad5b97;
  /* 11ad5b87 wait  */
  /* wait (no observable integer/reg state) */
  /* 11ad5b88 fnstsw ax */
  AX = fpu_status();
  /* 11ad5b8a fld xword ptr [0x11af76ac] */
  fpu_push(rf80((uint32_t)(0x11af76ac)));
  /* 11ad5b90 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11ad5b93 wait  */
  /* wait (no observable integer/reg state) */
  /* 11ad5b94 wait  */
  /* wait (no observable integer/reg state) */
  /* 11ad5b95 fnstsw ax */
  AX = fpu_status();
L_11ad5b97:;
  /* 11ad5b97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5b9a and edx, 0x10 */
  { uint32_t _r=(EDX)&(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad5b9d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad5b9f je 0x11ad5bab */
  if (C.zf) goto L_11ad5bab;
  /* 11ad5ba1 fld xword ptr [0x11af76b8] */
  fpu_push(rf80((uint32_t)(0x11af76b8)));
  /* 11ad5ba7 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11ad5baa wait  */
  /* wait (no observable integer/reg state) */
L_11ad5bab:;
  /* 11ad5bab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5bae and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad5bb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad5bb3 je 0x11ad5bbe */
  if (C.zf) goto L_11ad5bbe;
  /* 11ad5bb5 fldz  */
  fpu_push(0.0);
  /* 11ad5bb7 fld1  */
  fpu_push(1.0);
  /* 11ad5bb9 fdivrp st(1) */
  FPU_ST(1) = FPU_ST(0) / FPU_ST(1);
  (void)fpu_pop();
  /* 11ad5bbb fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 11ad5bbd wait  */
  /* wait (no observable integer/reg state) */
L_11ad5bbe:;
  /* 11ad5bbe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5bc1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad5bc4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad5bc6 je 0x11ad5bce */
  if (C.zf) goto L_11ad5bce;
  /* 11ad5bc8 fldpi  */
  fpu_push(3.14159265358979311599796346854);
  /* 11ad5bca fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11ad5bcd wait  */
  /* wait (no observable integer/reg state) */
L_11ad5bce:;
  /* 11ad5bce pop edi */
  EDI = (pop32());
  /* 11ad5bcf pop esi */
  ESI = (pop32());
  /* 11ad5bd0 pop ebx */
  EBX = (pop32());
  /* 11ad5bd1 mov esp, ebp */
  ESP = (EBP);
  /* 11ad5bd3 pop ebp */
  EBP = (pop32());
  /* 11ad5bd4 ret  */
  ESPCHK(0x11ad5b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10015be0 @ 0x11ad5be0 (130 bytes, 50 insns) */
void f_11ad5be0(void) {
  FTRACE(0x11ad5be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad5be0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad5be1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad5be3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad5be4 push ebx */
  push32((uint32_t)(EBX));
  /* 11ad5be5 push esi */
  push32((uint32_t)(ESI));
  /* 11ad5be6 push edi */
  push32((uint32_t)(EDI));
  /* 11ad5be7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11ad5bee:;
  /* 11ad5bee cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad5bf2 jne 0x11ad5c12 */
  if (!C.zf) goto L_11ad5c12;
  /* 11ad5bf4 push 0x11af42c0 */
  push32((uint32_t)(0x11af42c0u));
  /* 11ad5bf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad5bfb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11ad5bfd push 0x11af42b4 */
  push32((uint32_t)(0x11af42b4u));
  /* 11ad5c02 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad5c04 call 0x11ac6a40 */
  push32(0x11ad5c09u); f_11ac6a40();
  /* 11ad5c09 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5c0c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad5c0f jne 0x11ad5c12 */
  if (!C.zf) goto L_11ad5c12;
  /* 11ad5c11 int3  */
  x86_unimpl("int3 @ 0x11ad5c11");
L_11ad5c12:;
  /* 11ad5c12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad5c14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad5c16 jne 0x11ad5bee */
  if (!C.zf) goto L_11ad5bee;
  /* 11ad5c18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5c1b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ad5c1e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad5c21 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad5c23 je 0x11ad5c31 */
  if (C.zf) goto L_11ad5c31;
  /* 11ad5c25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5c28 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11ad5c2f jmp 0x11ad5c58 */
  goto L_11ad5c58;
L_11ad5c31:;
  /* 11ad5c31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5c34 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad5c35 call 0x11acda20 */
  push32(0x11ad5c3au); f_11acda20();
  /* 11ad5c3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5c3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5c40 push edx */
  push32((uint32_t)(EDX));
  /* 11ad5c41 call 0x11ad5c70 */
  push32(0x11ad5c46u); f_11ad5c70();
  /* 11ad5c46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5c49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad5c4c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5c4f push eax */
  push32((uint32_t)(EAX));
  /* 11ad5c50 call 0x11acda90 */
  push32(0x11ad5c55u); f_11acda90();
  /* 11ad5c55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ad5c58:;
  /* 11ad5c58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad5c5b pop edi */
  EDI = (pop32());
  /* 11ad5c5c pop esi */
  ESI = (pop32());
  /* 11ad5c5d pop ebx */
  EBX = (pop32());
  /* 11ad5c5e mov esp, ebp */
  ESP = (EBP);
  /* 11ad5c60 pop ebp */
  EBP = (pop32());
  /* 11ad5c61 ret  */
  ESPCHK(0x11ad5be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015c70 @ 0x11ad5c70 (190 bytes, 67 insns) */
void f_11ad5c70(void) {
  FTRACE(0x11ad5c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad5c70 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad5c71 mov ebp, esp */
  EBP = (ESP);
  /* 11ad5c73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad5c76 push ebx */
  push32((uint32_t)(EBX));
  /* 11ad5c77 push esi */
  push32((uint32_t)(ESI));
  /* 11ad5c78 push edi */
  push32((uint32_t)(EDI));
  /* 11ad5c79 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11ad5c80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5c83 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11ad5c86:;
  /* 11ad5c86 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad5c8a jne 0x11ad5caa */
  if (!C.zf) goto L_11ad5caa;
  /* 11ad5c8c push 0x11af3594 */
  push32((uint32_t)(0x11af3594u));
  /* 11ad5c91 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad5c93 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 11ad5c95 push 0x11af42b4 */
  push32((uint32_t)(0x11af42b4u));
  /* 11ad5c9a push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad5c9c call 0x11ac6a40 */
  push32(0x11ad5ca1u); f_11ac6a40();
  /* 11ad5ca1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5ca4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad5ca7 jne 0x11ad5caa */
  if (!C.zf) goto L_11ad5caa;
  /* 11ad5ca9 int3  */
  x86_unimpl("int3 @ 0x11ad5ca9");
L_11ad5caa:;
  /* 11ad5caa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad5cac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad5cae jne 0x11ad5c86 */
  if (!C.zf) goto L_11ad5c86;
  /* 11ad5cb0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad5cb3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11ad5cb6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad5cbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad5cbd je 0x11ad5d1a */
  if (C.zf) goto L_11ad5d1a;
  /* 11ad5cbf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad5cc2 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad5cc3 call 0x11ad2960 */
  push32(0x11ad5cc8u); f_11ad2960();
  /* 11ad5cc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5ccb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad5cce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad5cd1 push edx */
  push32((uint32_t)(EDX));
  /* 11ad5cd2 call 0x11ad8c80 */
  push32(0x11ad5cd7u); f_11ad8c80();
  /* 11ad5cd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5cda mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad5cdd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ad5ce0 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad5ce1 call 0x11ad8b50 */
  push32(0x11ad5ce6u); f_11ad8b50();
  /* 11ad5ce6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5ce9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad5ceb jge 0x11ad5cf6 */
  if ((C.sf==C.of)) goto L_11ad5cf6;
  /* 11ad5ced mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11ad5cf4 jmp 0x11ad5d1a */
  goto L_11ad5d1a;
L_11ad5cf6:;
  /* 11ad5cf6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad5cf9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad5cfd je 0x11ad5d1a */
  if (C.zf) goto L_11ad5d1a;
  /* 11ad5cff push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad5d01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad5d04 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11ad5d07 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad5d08 call 0x11aca0f0 */
  push32(0x11ad5d0du); f_11aca0f0();
  /* 11ad5d0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5d10 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad5d13 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_11ad5d1a:;
  /* 11ad5d1a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad5d1d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11ad5d24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad5d27 pop edi */
  EDI = (pop32());
  /* 11ad5d28 pop esi */
  ESI = (pop32());
  /* 11ad5d29 pop ebx */
  EBX = (pop32());
  /* 11ad5d2a mov esp, ebp */
  ESP = (EBP);
  /* 11ad5d2c pop ebp */
  EBP = (pop32());
  /* 11ad5d2d ret  */
  ESPCHK(0x11ad5c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10015d30 @ 0x11ad5d30 (210 bytes, 63 insns) */
void f_11ad5d30(void) {
  FTRACE(0x11ad5d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad5d30 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad5d31 mov ebp, esp */
  EBP = (ESP);
  /* 11ad5d33 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad5d34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5d37 cmp eax, dword ptr [0x11afadbc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11afadbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad5d3d jae 0x11ad5d61 */
  if (!C.cf) goto L_11ad5d61;
  /* 11ad5d3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5d42 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ad5d45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5d48 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ad5d4b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad5d4e mov eax, dword ptr [ecx*4 + 0x11afac80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11afac80)));
  /* 11ad5d55 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11ad5d5a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad5d5d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad5d5f jne 0x11ad5d74 */
  if (!C.zf) goto L_11ad5d74;
L_11ad5d61:;
  /* 11ad5d61 call 0x11ad21f0 */
  push32(0x11ad5d66u); f_11ad21f0();
  /* 11ad5d66 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11ad5d6c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad5d6f jmp 0x11ad5dfe */
  goto L_11ad5dfe;
L_11ad5d74:;
  /* 11ad5d74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5d77 push edx */
  push32((uint32_t)(EDX));
  /* 11ad5d78 call 0x11ad2720 */
  push32(0x11ad5d7du); f_11ad2720();
  /* 11ad5d7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5d80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5d83 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ad5d86 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5d89 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11ad5d8c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad5d8f mov edx, dword ptr [eax*4 + 0x11afac80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11afac80)));
  /* 11ad5d96 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11ad5d9b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad5d9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad5da0 je 0x11ad5ddd */
  if (C.zf) goto L_11ad5ddd;
  /* 11ad5da2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5da5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad5da6 call 0x11ad25a0 */
  push32(0x11ad5dabu); f_11ad25a0();
  /* 11ad5dab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5dae push eax */
  push32((uint32_t)(EAX));
  /* 11ad5daf call dword ptr [0x11afb304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb304))), 0x11ad5db5u);
  /* 11ad5db5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad5db7 jne 0x11ad5dc4 */
  if (!C.zf) goto L_11ad5dc4;
  /* 11ad5db9 call dword ptr [0x11afb3c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3c4))), 0x11ad5dbfu);
  /* 11ad5dbf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad5dc2 jmp 0x11ad5dcb */
  goto L_11ad5dcb;
L_11ad5dc4:;
  /* 11ad5dc4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11ad5dcb:;
  /* 11ad5dcb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad5dcf jne 0x11ad5dd3 */
  if (!C.zf) goto L_11ad5dd3;
  /* 11ad5dd1 jmp 0x11ad5def */
  goto L_11ad5def;
L_11ad5dd3:;
  /* 11ad5dd3 call 0x11ad2200 */
  push32(0x11ad5dd8u); f_11ad2200();
  /* 11ad5dd8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad5ddb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11ad5ddd:;
  /* 11ad5ddd call 0x11ad21f0 */
  push32(0x11ad5de2u); f_11ad21f0();
  /* 11ad5de2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11ad5de8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11ad5def:;
  /* 11ad5def mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5df2 push eax */
  push32((uint32_t)(EAX));
  /* 11ad5df3 call 0x11ad27b0 */
  push32(0x11ad5df8u); f_11ad27b0();
  /* 11ad5df8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5dfb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11ad5dfe:;
  /* 11ad5dfe mov esp, ebp */
  ESP = (EBP);
  /* 11ad5e00 pop ebp */
  EBP = (pop32());
  /* 11ad5e01 ret  */
  ESPCHK(0x11ad5d30u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x11ad5e10 (219 bytes, 64 insns) */
void f_11ad5e10(void) {
  FTRACE(0x11ad5e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad5e10 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad5e11 mov ebp, esp */
  EBP = (ESP);
  /* 11ad5e13 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad5e14 cmp dword ptr [0x11af94e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af94e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad5e1b je 0x11ad5eb1 */
  if (C.zf) goto L_11ad5eb1;
  /* 11ad5e21 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11ad5e23 push 0x11af42d0 */
  push32((uint32_t)(0x11af42d0u));
  /* 11ad5e28 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad5e2a push 0xac */
  push32((uint32_t)(0xacu));
  /* 11ad5e2f push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad5e31 call 0x11ac9a70 */
  push32(0x11ad5e36u); f_11ac9a70();
  /* 11ad5e36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5e39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad5e3c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad5e40 jne 0x11ad5e4c */
  if (!C.zf) goto L_11ad5e4c;
  /* 11ad5e42 mov eax, 1 */
  EAX = (0x1u);
  /* 11ad5e47 jmp 0x11ad5ee7 */
  goto L_11ad5ee7;
L_11ad5e4c:;
  /* 11ad5e4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad5e4f push eax */
  push32((uint32_t)(EAX));
  /* 11ad5e50 call 0x11ad5ef0 */
  push32(0x11ad5e55u); f_11ad5ef0();
  /* 11ad5e55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5e58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad5e5a je 0x11ad5e7d */
  if (C.zf) goto L_11ad5e7d;
  /* 11ad5e5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad5e5f push ecx */
  push32((uint32_t)(ECX));
  /* 11ad5e60 call 0x11ad6480 */
  push32(0x11ad5e65u); f_11ad6480();
  /* 11ad5e65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5e68 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad5e6a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad5e6d push edx */
  push32((uint32_t)(EDX));
  /* 11ad5e6e call 0x11aca0f0 */
  push32(0x11ad5e73u); f_11aca0f0();
  /* 11ad5e73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5e76 mov eax, 1 */
  EAX = (0x1u);
  /* 11ad5e7b jmp 0x11ad5ee7 */
  goto L_11ad5ee7;
L_11ad5e7d:;
  /* 11ad5e7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad5e80 mov dword ptr [0x11af7e80], eax */
  w32((uint32_t)(0x11af7e80), (EAX));
  /* 11ad5e85 mov ecx, dword ptr [0x11af94f4] */
  ECX = (r32((uint32_t)(0x11af94f4)));
  /* 11ad5e8b push ecx */
  push32((uint32_t)(ECX));
  /* 11ad5e8c call 0x11ad6480 */
  push32(0x11ad5e91u); f_11ad6480();
  /* 11ad5e91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5e94 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad5e96 mov edx, dword ptr [0x11af94f4] */
  EDX = (r32((uint32_t)(0x11af94f4)));
  /* 11ad5e9c push edx */
  push32((uint32_t)(EDX));
  /* 11ad5e9d call 0x11aca0f0 */
  push32(0x11ad5ea2u); f_11aca0f0();
  /* 11ad5ea2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5ea5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad5ea8 mov dword ptr [0x11af94f4], eax */
  w32((uint32_t)(0x11af94f4), (EAX));
  /* 11ad5ead xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad5eaf jmp 0x11ad5ee7 */
  goto L_11ad5ee7;
L_11ad5eb1:;
  /* 11ad5eb1 mov dword ptr [0x11af7e80], 0x11af7e88 */
  w32((uint32_t)(0x11af7e80), (0x11af7e88u));
  /* 11ad5ebb mov ecx, dword ptr [0x11af94f4] */
  ECX = (r32((uint32_t)(0x11af94f4)));
  /* 11ad5ec1 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad5ec2 call 0x11ad6480 */
  push32(0x11ad5ec7u); f_11ad6480();
  /* 11ad5ec7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5eca push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad5ecc mov edx, dword ptr [0x11af94f4] */
  EDX = (r32((uint32_t)(0x11af94f4)));
  /* 11ad5ed2 push edx */
  push32((uint32_t)(EDX));
  /* 11ad5ed3 call 0x11aca0f0 */
  push32(0x11ad5ed8u); f_11aca0f0();
  /* 11ad5ed8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5edb mov dword ptr [0x11af94f4], 0 */
  w32((uint32_t)(0x11af94f4), (0x0u));
  /* 11ad5ee5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ad5ee7:;
  /* 11ad5ee7 mov esp, ebp */
  ESP = (EBP);
  /* 11ad5ee9 pop ebp */
  EBP = (pop32());
  /* 11ad5eea ret  */
  ESPCHK(0x11ad5e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10015ef0 @ 0x11ad5ef0 (1423 bytes, 533 insns) */
void f_11ad5ef0(void) {
  FTRACE(0x11ad5ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad5ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad5ef1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad5ef3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad5ef6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ad5efd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad5eff mov ax, word ptr [0x11af952e] */
  AX = (r16((uint32_t)(0x11af952e)));
  /* 11ad5f05 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad5f08 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad5f0a mov cx, word ptr [0x11af9530] */
  CX = (r16((uint32_t)(0x11af9530)));
  /* 11ad5f11 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ad5f14 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad5f18 jne 0x11ad5f22 */
  if (!C.zf) goto L_11ad5f22;
  /* 11ad5f1a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad5f1d jmp 0x11ad647b */
  goto L_11ad647b;
L_11ad5f22:;
  /* 11ad5f22 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5f25 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5f28 push edx */
  push32((uint32_t)(EDX));
  /* 11ad5f29 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 11ad5f2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad5f2e push eax */
  push32((uint32_t)(EAX));
  /* 11ad5f2f push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad5f31 call 0x11ada190 */
  push32(0x11ad5f36u); f_11ada190();
  /* 11ad5f36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5f39 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad5f3c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad5f3e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad5f41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5f44 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5f47 push edx */
  push32((uint32_t)(EDX));
  /* 11ad5f48 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11ad5f4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad5f4d push eax */
  push32((uint32_t)(EAX));
  /* 11ad5f4e push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad5f50 call 0x11ada190 */
  push32(0x11ad5f55u); f_11ada190();
  /* 11ad5f55 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5f58 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad5f5b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad5f5d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad5f60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5f63 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5f66 push edx */
  push32((uint32_t)(EDX));
  /* 11ad5f67 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11ad5f69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad5f6c push eax */
  push32((uint32_t)(EAX));
  /* 11ad5f6d push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad5f6f call 0x11ada190 */
  push32(0x11ad5f74u); f_11ada190();
  /* 11ad5f74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5f77 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad5f7a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad5f7c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad5f7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5f82 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5f85 push edx */
  push32((uint32_t)(EDX));
  /* 11ad5f86 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11ad5f88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad5f8b push eax */
  push32((uint32_t)(EAX));
  /* 11ad5f8c push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad5f8e call 0x11ada190 */
  push32(0x11ad5f93u); f_11ada190();
  /* 11ad5f93 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5f96 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad5f99 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad5f9b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad5f9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5fa1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5fa4 push edx */
  push32((uint32_t)(EDX));
  /* 11ad5fa5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 11ad5fa7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad5faa push eax */
  push32((uint32_t)(EAX));
  /* 11ad5fab push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad5fad call 0x11ada190 */
  push32(0x11ad5fb2u); f_11ada190();
  /* 11ad5fb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5fb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad5fb8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad5fba mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad5fbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5fc0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5fc3 push edx */
  push32((uint32_t)(EDX));
  /* 11ad5fc4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 11ad5fc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad5fc9 push eax */
  push32((uint32_t)(EAX));
  /* 11ad5fca push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad5fcc call 0x11ada190 */
  push32(0x11ad5fd1u); f_11ada190();
  /* 11ad5fd1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5fd4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad5fd7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad5fd9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad5fdc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5fdf push edx */
  push32((uint32_t)(EDX));
  /* 11ad5fe0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11ad5fe2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad5fe5 push eax */
  push32((uint32_t)(EAX));
  /* 11ad5fe6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad5fe8 call 0x11ada190 */
  push32(0x11ad5fedu); f_11ada190();
  /* 11ad5fed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5ff0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad5ff3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad5ff5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad5ff8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad5ffb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad5ffe push edx */
  push32((uint32_t)(EDX));
  /* 11ad5fff push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11ad6001 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6004 push eax */
  push32((uint32_t)(EAX));
  /* 11ad6005 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad6007 call 0x11ada190 */
  push32(0x11ad600cu); f_11ada190();
  /* 11ad600c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad600f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad6012 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad6014 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad6017 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad601a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad601d push edx */
  push32((uint32_t)(EDX));
  /* 11ad601e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 11ad6020 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6023 push eax */
  push32((uint32_t)(EAX));
  /* 11ad6024 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad6026 call 0x11ada190 */
  push32(0x11ad602bu); f_11ada190();
  /* 11ad602b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad602e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad6031 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad6033 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad6036 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6039 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad603c push edx */
  push32((uint32_t)(EDX));
  /* 11ad603d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11ad603f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6042 push eax */
  push32((uint32_t)(EAX));
  /* 11ad6043 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad6045 call 0x11ada190 */
  push32(0x11ad604au); f_11ada190();
  /* 11ad604a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad604d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad6050 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad6052 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad6055 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6058 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad605b push edx */
  push32((uint32_t)(EDX));
  /* 11ad605c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 11ad605e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6061 push eax */
  push32((uint32_t)(EAX));
  /* 11ad6062 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad6064 call 0x11ada190 */
  push32(0x11ad6069u); f_11ada190();
  /* 11ad6069 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad606c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad606f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad6071 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad6074 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6077 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad607a push edx */
  push32((uint32_t)(EDX));
  /* 11ad607b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11ad607d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6080 push eax */
  push32((uint32_t)(EAX));
  /* 11ad6081 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad6083 call 0x11ada190 */
  push32(0x11ad6088u); f_11ada190();
  /* 11ad6088 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad608b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad608e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad6090 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad6093 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6096 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6099 push edx */
  push32((uint32_t)(EDX));
  /* 11ad609a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 11ad609c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad609f push eax */
  push32((uint32_t)(EAX));
  /* 11ad60a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad60a2 call 0x11ada190 */
  push32(0x11ad60a7u); f_11ada190();
  /* 11ad60a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad60aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad60ad or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad60af mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad60b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad60b5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad60b8 push edx */
  push32((uint32_t)(EDX));
  /* 11ad60b9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11ad60bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad60be push eax */
  push32((uint32_t)(EAX));
  /* 11ad60bf push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad60c1 call 0x11ada190 */
  push32(0x11ad60c6u); f_11ada190();
  /* 11ad60c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad60c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad60cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad60ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad60d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad60d4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad60d7 push edx */
  push32((uint32_t)(EDX));
  /* 11ad60d8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11ad60da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad60dd push eax */
  push32((uint32_t)(EAX));
  /* 11ad60de push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad60e0 call 0x11ada190 */
  push32(0x11ad60e5u); f_11ada190();
  /* 11ad60e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad60e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad60eb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad60ed mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad60f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad60f3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad60f6 push edx */
  push32((uint32_t)(EDX));
  /* 11ad60f7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11ad60f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad60fc push eax */
  push32((uint32_t)(EAX));
  /* 11ad60fd push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad60ff call 0x11ada190 */
  push32(0x11ad6104u); f_11ada190();
  /* 11ad6104 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6107 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad610a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad610c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad610f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6112 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6115 push edx */
  push32((uint32_t)(EDX));
  /* 11ad6116 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11ad6118 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad611b push eax */
  push32((uint32_t)(EAX));
  /* 11ad611c push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad611e call 0x11ada190 */
  push32(0x11ad6123u); f_11ada190();
  /* 11ad6123 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6126 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad6129 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad612b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad612e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6131 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6134 push edx */
  push32((uint32_t)(EDX));
  /* 11ad6135 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11ad6137 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad613a push eax */
  push32((uint32_t)(EAX));
  /* 11ad613b push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad613d call 0x11ada190 */
  push32(0x11ad6142u); f_11ada190();
  /* 11ad6142 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6145 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad6148 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad614a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad614d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6150 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6153 push edx */
  push32((uint32_t)(EDX));
  /* 11ad6154 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11ad6156 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6159 push eax */
  push32((uint32_t)(EAX));
  /* 11ad615a push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad615c call 0x11ada190 */
  push32(0x11ad6161u); f_11ada190();
  /* 11ad6161 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6164 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad6167 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad6169 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad616c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad616f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6172 push edx */
  push32((uint32_t)(EDX));
  /* 11ad6173 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 11ad6175 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6178 push eax */
  push32((uint32_t)(EAX));
  /* 11ad6179 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad617b call 0x11ada190 */
  push32(0x11ad6180u); f_11ada190();
  /* 11ad6180 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6183 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad6186 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad6188 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad618b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad618e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6191 push edx */
  push32((uint32_t)(EDX));
  /* 11ad6192 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11ad6194 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6197 push eax */
  push32((uint32_t)(EAX));
  /* 11ad6198 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad619a call 0x11ada190 */
  push32(0x11ad619fu); f_11ada190();
  /* 11ad619f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad61a2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad61a5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad61a7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad61aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad61ad add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad61b0 push edx */
  push32((uint32_t)(EDX));
  /* 11ad61b1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11ad61b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad61b6 push eax */
  push32((uint32_t)(EAX));
  /* 11ad61b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad61b9 call 0x11ada190 */
  push32(0x11ad61beu); f_11ada190();
  /* 11ad61be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad61c1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad61c4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad61c6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad61c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad61cc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad61cf push edx */
  push32((uint32_t)(EDX));
  /* 11ad61d0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11ad61d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad61d5 push eax */
  push32((uint32_t)(EAX));
  /* 11ad61d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad61d8 call 0x11ada190 */
  push32(0x11ad61ddu); f_11ada190();
  /* 11ad61dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad61e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad61e3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad61e5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad61e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad61eb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad61ee push edx */
  push32((uint32_t)(EDX));
  /* 11ad61ef push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11ad61f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad61f4 push eax */
  push32((uint32_t)(EAX));
  /* 11ad61f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad61f7 call 0x11ada190 */
  push32(0x11ad61fcu); f_11ada190();
  /* 11ad61fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad61ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad6202 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad6204 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad6207 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad620a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad620d push edx */
  push32((uint32_t)(EDX));
  /* 11ad620e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11ad6210 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6213 push eax */
  push32((uint32_t)(EAX));
  /* 11ad6214 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad6216 call 0x11ada190 */
  push32(0x11ad621bu); f_11ada190();
  /* 11ad621b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad621e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad6221 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad6223 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad6226 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6229 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad622c push edx */
  push32((uint32_t)(EDX));
  /* 11ad622d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 11ad622f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6232 push eax */
  push32((uint32_t)(EAX));
  /* 11ad6233 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad6235 call 0x11ada190 */
  push32(0x11ad623au); f_11ada190();
  /* 11ad623a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad623d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad6240 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad6242 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad6245 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6248 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad624b push edx */
  push32((uint32_t)(EDX));
  /* 11ad624c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 11ad624e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6251 push eax */
  push32((uint32_t)(EAX));
  /* 11ad6252 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad6254 call 0x11ada190 */
  push32(0x11ad6259u); f_11ada190();
  /* 11ad6259 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad625c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad625f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad6261 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad6264 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6267 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad626a push edx */
  push32((uint32_t)(EDX));
  /* 11ad626b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 11ad626d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6270 push eax */
  push32((uint32_t)(EAX));
  /* 11ad6271 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad6273 call 0x11ada190 */
  push32(0x11ad6278u); f_11ada190();
  /* 11ad6278 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad627b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad627e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad6280 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad6283 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6286 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6289 push edx */
  push32((uint32_t)(EDX));
  /* 11ad628a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11ad628c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad628f push eax */
  push32((uint32_t)(EAX));
  /* 11ad6290 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad6292 call 0x11ada190 */
  push32(0x11ad6297u); f_11ada190();
  /* 11ad6297 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad629a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad629d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad629f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad62a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad62a5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad62a8 push edx */
  push32((uint32_t)(EDX));
  /* 11ad62a9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11ad62ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad62ae push eax */
  push32((uint32_t)(EAX));
  /* 11ad62af push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad62b1 call 0x11ada190 */
  push32(0x11ad62b6u); f_11ada190();
  /* 11ad62b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad62b9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad62bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad62be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad62c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad62c4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad62c7 push edx */
  push32((uint32_t)(EDX));
  /* 11ad62c8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11ad62ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad62cd push eax */
  push32((uint32_t)(EAX));
  /* 11ad62ce push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad62d0 call 0x11ada190 */
  push32(0x11ad62d5u); f_11ada190();
  /* 11ad62d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad62d8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad62db or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad62dd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad62e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad62e3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad62e6 push edx */
  push32((uint32_t)(EDX));
  /* 11ad62e7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11ad62e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad62ec push eax */
  push32((uint32_t)(EAX));
  /* 11ad62ed push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad62ef call 0x11ada190 */
  push32(0x11ad62f4u); f_11ada190();
  /* 11ad62f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad62f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad62fa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad62fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad62ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6302 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6308 push edx */
  push32((uint32_t)(EDX));
  /* 11ad6309 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 11ad630b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad630e push eax */
  push32((uint32_t)(EAX));
  /* 11ad630f push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad6311 call 0x11ada190 */
  push32(0x11ad6316u); f_11ada190();
  /* 11ad6316 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6319 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad631c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad631e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad6321 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6324 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad632a push edx */
  push32((uint32_t)(EDX));
  /* 11ad632b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11ad632d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6330 push eax */
  push32((uint32_t)(EAX));
  /* 11ad6331 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad6333 call 0x11ada190 */
  push32(0x11ad6338u); f_11ada190();
  /* 11ad6338 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad633b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad633e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad6340 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad6343 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6346 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad634c push edx */
  push32((uint32_t)(EDX));
  /* 11ad634d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11ad634f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6352 push eax */
  push32((uint32_t)(EAX));
  /* 11ad6353 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad6355 call 0x11ada190 */
  push32(0x11ad635au); f_11ada190();
  /* 11ad635a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad635d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad6360 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad6362 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad6365 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6368 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad636e push edx */
  push32((uint32_t)(EDX));
  /* 11ad636f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11ad6371 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6374 push eax */
  push32((uint32_t)(EAX));
  /* 11ad6375 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad6377 call 0x11ada190 */
  push32(0x11ad637cu); f_11ada190();
  /* 11ad637c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad637f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad6382 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad6384 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad6387 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad638a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6390 push edx */
  push32((uint32_t)(EDX));
  /* 11ad6391 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11ad6393 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6396 push eax */
  push32((uint32_t)(EAX));
  /* 11ad6397 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad6399 call 0x11ada190 */
  push32(0x11ad639eu); f_11ada190();
  /* 11ad639e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad63a1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad63a4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad63a6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad63a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad63ac add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad63b2 push edx */
  push32((uint32_t)(EDX));
  /* 11ad63b3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11ad63b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad63b8 push eax */
  push32((uint32_t)(EAX));
  /* 11ad63b9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad63bb call 0x11ada190 */
  push32(0x11ad63c0u); f_11ada190();
  /* 11ad63c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad63c3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad63c6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad63c8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad63cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad63ce add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad63d4 push edx */
  push32((uint32_t)(EDX));
  /* 11ad63d5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11ad63d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad63da push eax */
  push32((uint32_t)(EAX));
  /* 11ad63db push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad63dd call 0x11ada190 */
  push32(0x11ad63e2u); f_11ada190();
  /* 11ad63e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad63e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad63e8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad63ea mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad63ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad63f0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad63f6 push edx */
  push32((uint32_t)(EDX));
  /* 11ad63f7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 11ad63f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad63fc push eax */
  push32((uint32_t)(EAX));
  /* 11ad63fd push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad63ff call 0x11ada190 */
  push32(0x11ad6404u); f_11ada190();
  /* 11ad6404 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6407 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad640a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad640c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad640f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6412 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6418 push edx */
  push32((uint32_t)(EDX));
  /* 11ad6419 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11ad641b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad641e push eax */
  push32((uint32_t)(EAX));
  /* 11ad641f push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad6421 call 0x11ada190 */
  push32(0x11ad6426u); f_11ada190();
  /* 11ad6426 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6429 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad642c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad642e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad6431 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6434 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad643a push edx */
  push32((uint32_t)(EDX));
  /* 11ad643b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11ad643d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad6440 push eax */
  push32((uint32_t)(EAX));
  /* 11ad6441 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad6443 call 0x11ada190 */
  push32(0x11ad6448u); f_11ada190();
  /* 11ad6448 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad644b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad644e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad6450 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad6453 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6456 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad645c push edx */
  push32((uint32_t)(EDX));
  /* 11ad645d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 11ad6462 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad6465 push eax */
  push32((uint32_t)(EAX));
  /* 11ad6466 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad6468 call 0x11ada190 */
  push32(0x11ad646du); f_11ada190();
  /* 11ad646d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6470 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad6473 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad6475 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad6478 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_11ad647b:;
  /* 11ad647b mov esp, ebp */
  ESP = (EBP);
  /* 11ad647d pop ebp */
  EBP = (pop32());
  /* 11ad647e ret  */
  ESPCHK(0x11ad5ef0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x11ad6480 (779 bytes, 265 insns) */
void f_11ad6480(void) {
  FTRACE(0x11ad6480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad6480 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad6481 mov ebp, esp */
  EBP = (ESP);
  /* 11ad6483 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad6487 jne 0x11ad648e */
  if (!C.zf) goto L_11ad648e;
  /* 11ad6489 jmp 0x11ad6789 */
  goto L_11ad6789;
L_11ad648e:;
  /* 11ad648e push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad6490 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6493 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ad6496 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad6497 call 0x11aca0f0 */
  push32(0x11ad649cu); f_11aca0f0();
  /* 11ad649c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad649f push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad64a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad64a4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ad64a7 push eax */
  push32((uint32_t)(EAX));
  /* 11ad64a8 call 0x11aca0f0 */
  push32(0x11ad64adu); f_11aca0f0();
  /* 11ad64ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad64b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad64b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad64b5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ad64b8 push edx */
  push32((uint32_t)(EDX));
  /* 11ad64b9 call 0x11aca0f0 */
  push32(0x11ad64beu); f_11aca0f0();
  /* 11ad64be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad64c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad64c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad64c6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ad64c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad64ca call 0x11aca0f0 */
  push32(0x11ad64cfu); f_11aca0f0();
  /* 11ad64cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad64d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad64d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad64d7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11ad64da push eax */
  push32((uint32_t)(EAX));
  /* 11ad64db call 0x11aca0f0 */
  push32(0x11ad64e0u); f_11aca0f0();
  /* 11ad64e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad64e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad64e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad64e8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11ad64eb push edx */
  push32((uint32_t)(EDX));
  /* 11ad64ec call 0x11aca0f0 */
  push32(0x11ad64f1u); f_11aca0f0();
  /* 11ad64f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad64f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad64f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad64f9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ad64fb push ecx */
  push32((uint32_t)(ECX));
  /* 11ad64fc call 0x11aca0f0 */
  push32(0x11ad6501u); f_11aca0f0();
  /* 11ad6501 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6504 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad6506 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6509 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11ad650c push eax */
  push32((uint32_t)(EAX));
  /* 11ad650d call 0x11aca0f0 */
  push32(0x11ad6512u); f_11aca0f0();
  /* 11ad6512 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6515 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad6517 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad651a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11ad651d push edx */
  push32((uint32_t)(EDX));
  /* 11ad651e call 0x11aca0f0 */
  push32(0x11ad6523u); f_11aca0f0();
  /* 11ad6523 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6526 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad6528 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad652b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 11ad652e push ecx */
  push32((uint32_t)(ECX));
  /* 11ad652f call 0x11aca0f0 */
  push32(0x11ad6534u); f_11aca0f0();
  /* 11ad6534 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6537 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad6539 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad653c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 11ad653f push eax */
  push32((uint32_t)(EAX));
  /* 11ad6540 call 0x11aca0f0 */
  push32(0x11ad6545u); f_11aca0f0();
  /* 11ad6545 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6548 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad654a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad654d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11ad6550 push edx */
  push32((uint32_t)(EDX));
  /* 11ad6551 call 0x11aca0f0 */
  push32(0x11ad6556u); f_11aca0f0();
  /* 11ad6556 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6559 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad655b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad655e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 11ad6561 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad6562 call 0x11aca0f0 */
  push32(0x11ad6567u); f_11aca0f0();
  /* 11ad6567 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad656a push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad656c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad656f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11ad6572 push eax */
  push32((uint32_t)(EAX));
  /* 11ad6573 call 0x11aca0f0 */
  push32(0x11ad6578u); f_11aca0f0();
  /* 11ad6578 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad657b push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad657d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6580 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 11ad6583 push edx */
  push32((uint32_t)(EDX));
  /* 11ad6584 call 0x11aca0f0 */
  push32(0x11ad6589u); f_11aca0f0();
  /* 11ad6589 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad658c push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad658e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6591 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11ad6594 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad6595 call 0x11aca0f0 */
  push32(0x11ad659au); f_11aca0f0();
  /* 11ad659a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad659d push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad659f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad65a2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11ad65a5 push eax */
  push32((uint32_t)(EAX));
  /* 11ad65a6 call 0x11aca0f0 */
  push32(0x11ad65abu); f_11aca0f0();
  /* 11ad65ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad65ae push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad65b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad65b3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 11ad65b6 push edx */
  push32((uint32_t)(EDX));
  /* 11ad65b7 call 0x11aca0f0 */
  push32(0x11ad65bcu); f_11aca0f0();
  /* 11ad65bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad65bf push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad65c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad65c4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 11ad65c7 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad65c8 call 0x11aca0f0 */
  push32(0x11ad65cdu); f_11aca0f0();
  /* 11ad65cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad65d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad65d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad65d5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 11ad65d8 push eax */
  push32((uint32_t)(EAX));
  /* 11ad65d9 call 0x11aca0f0 */
  push32(0x11ad65deu); f_11aca0f0();
  /* 11ad65de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad65e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad65e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad65e6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11ad65e9 push edx */
  push32((uint32_t)(EDX));
  /* 11ad65ea call 0x11aca0f0 */
  push32(0x11ad65efu); f_11aca0f0();
  /* 11ad65ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad65f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad65f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad65f7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11ad65fa push ecx */
  push32((uint32_t)(ECX));
  /* 11ad65fb call 0x11aca0f0 */
  push32(0x11ad6600u); f_11aca0f0();
  /* 11ad6600 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6603 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad6605 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6608 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 11ad660b push eax */
  push32((uint32_t)(EAX));
  /* 11ad660c call 0x11aca0f0 */
  push32(0x11ad6611u); f_11aca0f0();
  /* 11ad6611 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6614 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad6616 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6619 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 11ad661c push edx */
  push32((uint32_t)(EDX));
  /* 11ad661d call 0x11aca0f0 */
  push32(0x11ad6622u); f_11aca0f0();
  /* 11ad6622 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6625 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad6627 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad662a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 11ad662d push ecx */
  push32((uint32_t)(ECX));
  /* 11ad662e call 0x11aca0f0 */
  push32(0x11ad6633u); f_11aca0f0();
  /* 11ad6633 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6636 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad6638 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad663b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 11ad663e push eax */
  push32((uint32_t)(EAX));
  /* 11ad663f call 0x11aca0f0 */
  push32(0x11ad6644u); f_11aca0f0();
  /* 11ad6644 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6647 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad6649 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad664c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 11ad664f push edx */
  push32((uint32_t)(EDX));
  /* 11ad6650 call 0x11aca0f0 */
  push32(0x11ad6655u); f_11aca0f0();
  /* 11ad6655 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6658 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad665a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad665d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11ad6660 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad6661 call 0x11aca0f0 */
  push32(0x11ad6666u); f_11aca0f0();
  /* 11ad6666 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6669 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad666b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad666e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 11ad6671 push eax */
  push32((uint32_t)(EAX));
  /* 11ad6672 call 0x11aca0f0 */
  push32(0x11ad6677u); f_11aca0f0();
  /* 11ad6677 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad667a push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad667c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad667f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 11ad6682 push edx */
  push32((uint32_t)(EDX));
  /* 11ad6683 call 0x11aca0f0 */
  push32(0x11ad6688u); f_11aca0f0();
  /* 11ad6688 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad668b push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad668d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6690 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 11ad6693 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad6694 call 0x11aca0f0 */
  push32(0x11ad6699u); f_11aca0f0();
  /* 11ad6699 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad669c push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad669e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad66a1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 11ad66a4 push eax */
  push32((uint32_t)(EAX));
  /* 11ad66a5 call 0x11aca0f0 */
  push32(0x11ad66aau); f_11aca0f0();
  /* 11ad66aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad66ad push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad66af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad66b2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 11ad66b8 push edx */
  push32((uint32_t)(EDX));
  /* 11ad66b9 call 0x11aca0f0 */
  push32(0x11ad66beu); f_11aca0f0();
  /* 11ad66be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad66c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad66c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad66c6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 11ad66cc push ecx */
  push32((uint32_t)(ECX));
  /* 11ad66cd call 0x11aca0f0 */
  push32(0x11ad66d2u); f_11aca0f0();
  /* 11ad66d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad66d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad66d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad66da mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 11ad66e0 push eax */
  push32((uint32_t)(EAX));
  /* 11ad66e1 call 0x11aca0f0 */
  push32(0x11ad66e6u); f_11aca0f0();
  /* 11ad66e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad66e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad66eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad66ee mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 11ad66f4 push edx */
  push32((uint32_t)(EDX));
  /* 11ad66f5 call 0x11aca0f0 */
  push32(0x11ad66fau); f_11aca0f0();
  /* 11ad66fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad66fd push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad66ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6702 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 11ad6708 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad6709 call 0x11aca0f0 */
  push32(0x11ad670eu); f_11aca0f0();
  /* 11ad670e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6711 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad6713 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6716 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 11ad671c push eax */
  push32((uint32_t)(EAX));
  /* 11ad671d call 0x11aca0f0 */
  push32(0x11ad6722u); f_11aca0f0();
  /* 11ad6722 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6725 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad6727 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad672a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 11ad6730 push edx */
  push32((uint32_t)(EDX));
  /* 11ad6731 call 0x11aca0f0 */
  push32(0x11ad6736u); f_11aca0f0();
  /* 11ad6736 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6739 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad673b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad673e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11ad6744 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad6745 call 0x11aca0f0 */
  push32(0x11ad674au); f_11aca0f0();
  /* 11ad674a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad674d push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad674f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6752 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11ad6758 push eax */
  push32((uint32_t)(EAX));
  /* 11ad6759 call 0x11aca0f0 */
  push32(0x11ad675eu); f_11aca0f0();
  /* 11ad675e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6761 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad6763 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6766 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11ad676c push edx */
  push32((uint32_t)(EDX));
  /* 11ad676d call 0x11aca0f0 */
  push32(0x11ad6772u); f_11aca0f0();
  /* 11ad6772 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6775 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad6777 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad677a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 11ad6780 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad6781 call 0x11aca0f0 */
  push32(0x11ad6786u); f_11aca0f0();
  /* 11ad6786 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ad6789:;
  /* 11ad6789 pop ebp */
  EBP = (pop32());
  /* 11ad678a ret  */
  ESPCHK(0x11ad6480u, _esp0);
  ESP += 4; return;
}

/* FUN_10016790 @ 0x11ad6790 (678 bytes, 180 insns) */
void f_11ad6790(void) {
  FTRACE(0x11ad6790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad6790 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad6791 mov ebp, esp */
  EBP = (ESP);
  /* 11ad6793 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad6796 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ad679d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad679f mov ax, word ptr [0x11af952a] */
  AX = (r16((uint32_t)(0x11af952a)));
  /* 11ad67a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad67a8 cmp dword ptr [0x11af94dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af94dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad67af je 0x11ad690a */
  if (C.zf) goto L_11ad690a;
  /* 11ad67b5 push 0x11af94f8 */
  push32((uint32_t)(0x11af94f8u));
  /* 11ad67ba push 0xe */
  push32((uint32_t)(0xeu));
  /* 11ad67bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad67bf push ecx */
  push32((uint32_t)(ECX));
  /* 11ad67c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad67c2 call 0x11ada190 */
  push32(0x11ad67c7u); f_11ada190();
  /* 11ad67c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad67ca mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad67cd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11ad67cf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ad67d2 push 0x11af94fc */
  push32((uint32_t)(0x11af94fcu));
  /* 11ad67d7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11ad67d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad67dc push eax */
  push32((uint32_t)(EAX));
  /* 11ad67dd push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad67df call 0x11ada190 */
  push32(0x11ad67e4u); f_11ada190();
  /* 11ad67e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad67e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad67ea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad67ec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ad67ef push 0x11af9500 */
  push32((uint32_t)(0x11af9500u));
  /* 11ad67f4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11ad67f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad67f9 push edx */
  push32((uint32_t)(EDX));
  /* 11ad67fa push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad67fc call 0x11ada190 */
  push32(0x11ad6801u); f_11ada190();
  /* 11ad6801 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6804 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad6807 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad6809 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ad680c mov edx, dword ptr [0x11af9500] */
  EDX = (r32((uint32_t)(0x11af9500)));
  /* 11ad6812 push edx */
  push32((uint32_t)(EDX));
  /* 11ad6813 call 0x11ad6a40 */
  push32(0x11ad6818u); f_11ad6a40();
  /* 11ad6818 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad681b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad681f je 0x11ad6879 */
  if (C.zf) goto L_11ad6879;
  /* 11ad6821 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad6823 mov eax, dword ptr [0x11af94f8] */
  EAX = (r32((uint32_t)(0x11af94f8)));
  /* 11ad6828 push eax */
  push32((uint32_t)(EAX));
  /* 11ad6829 call 0x11aca0f0 */
  push32(0x11ad682eu); f_11aca0f0();
  /* 11ad682e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6831 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad6833 mov ecx, dword ptr [0x11af94fc] */
  ECX = (r32((uint32_t)(0x11af94fc)));
  /* 11ad6839 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad683a call 0x11aca0f0 */
  push32(0x11ad683fu); f_11aca0f0();
  /* 11ad683f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6842 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad6844 mov edx, dword ptr [0x11af9500] */
  EDX = (r32((uint32_t)(0x11af9500)));
  /* 11ad684a push edx */
  push32((uint32_t)(EDX));
  /* 11ad684b call 0x11aca0f0 */
  push32(0x11ad6850u); f_11aca0f0();
  /* 11ad6850 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6853 mov dword ptr [0x11af94f8], 0 */
  w32((uint32_t)(0x11af94f8), (0x0u));
  /* 11ad685d mov dword ptr [0x11af94fc], 0 */
  w32((uint32_t)(0x11af94fc), (0x0u));
  /* 11ad6867 mov dword ptr [0x11af9500], 0 */
  w32((uint32_t)(0x11af9500), (0x0u));
  /* 11ad6871 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad6874 jmp 0x11ad6a32 */
  goto L_11ad6a32;
L_11ad6879:;
  /* 11ad6879 mov eax, dword ptr [0x11af7f70] */
  EAX = (r32((uint32_t)(0x11af7f70)));
  /* 11ad687e cmp dword ptr [eax], 0x11af7f38 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x11af7f38u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad6884 je 0x11ad68c0 */
  if (C.zf) goto L_11ad68c0;
  /* 11ad6886 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad6888 mov ecx, dword ptr [0x11af7f70] */
  ECX = (r32((uint32_t)(0x11af7f70)));
  /* 11ad688e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad6890 push edx */
  push32((uint32_t)(EDX));
  /* 11ad6891 call 0x11aca0f0 */
  push32(0x11ad6896u); f_11aca0f0();
  /* 11ad6896 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6899 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad689b mov eax, dword ptr [0x11af7f70] */
  EAX = (r32((uint32_t)(0x11af7f70)));
  /* 11ad68a0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ad68a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad68a4 call 0x11aca0f0 */
  push32(0x11ad68a9u); f_11aca0f0();
  /* 11ad68a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad68ac push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad68ae mov edx, dword ptr [0x11af7f70] */
  EDX = (r32((uint32_t)(0x11af7f70)));
  /* 11ad68b4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ad68b7 push eax */
  push32((uint32_t)(EAX));
  /* 11ad68b8 call 0x11aca0f0 */
  push32(0x11ad68bdu); f_11aca0f0();
  /* 11ad68bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ad68c0:;
  /* 11ad68c0 mov ecx, dword ptr [0x11af7f70] */
  ECX = (r32((uint32_t)(0x11af7f70)));
  /* 11ad68c6 mov edx, dword ptr [0x11af94f8] */
  EDX = (r32((uint32_t)(0x11af94f8)));
  /* 11ad68cc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11ad68ce mov eax, dword ptr [0x11af7f70] */
  EAX = (r32((uint32_t)(0x11af7f70)));
  /* 11ad68d3 mov ecx, dword ptr [0x11af94fc] */
  ECX = (r32((uint32_t)(0x11af94fc)));
  /* 11ad68d9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11ad68dc mov edx, dword ptr [0x11af7f70] */
  EDX = (r32((uint32_t)(0x11af7f70)));
  /* 11ad68e2 mov eax, dword ptr [0x11af9500] */
  EAX = (r32((uint32_t)(0x11af9500)));
  /* 11ad68e7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11ad68ea mov ecx, dword ptr [0x11af7f70] */
  ECX = (r32((uint32_t)(0x11af7f70)));
  /* 11ad68f0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad68f2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ad68f4 mov byte ptr [0x11af71d4], al */
  w8((uint32_t)(0x11af71d4), (AL));
  /* 11ad68f9 mov dword ptr [0x11af71d8], 1 */
  w32((uint32_t)(0x11af71d8), (0x1u));
  /* 11ad6903 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad6905 jmp 0x11ad6a32 */
  goto L_11ad6a32;
L_11ad690a:;
  /* 11ad690a push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad690c mov ecx, dword ptr [0x11af94f8] */
  ECX = (r32((uint32_t)(0x11af94f8)));
  /* 11ad6912 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad6913 call 0x11aca0f0 */
  push32(0x11ad6918u); f_11aca0f0();
  /* 11ad6918 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad691b push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad691d mov edx, dword ptr [0x11af94fc] */
  EDX = (r32((uint32_t)(0x11af94fc)));
  /* 11ad6923 push edx */
  push32((uint32_t)(EDX));
  /* 11ad6924 call 0x11aca0f0 */
  push32(0x11ad6929u); f_11aca0f0();
  /* 11ad6929 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad692c push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad692e mov eax, dword ptr [0x11af9500] */
  EAX = (r32((uint32_t)(0x11af9500)));
  /* 11ad6933 push eax */
  push32((uint32_t)(EAX));
  /* 11ad6934 call 0x11aca0f0 */
  push32(0x11ad6939u); f_11aca0f0();
  /* 11ad6939 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad693c mov dword ptr [0x11af94f8], 0 */
  w32((uint32_t)(0x11af94f8), (0x0u));
  /* 11ad6946 mov dword ptr [0x11af94fc], 0 */
  w32((uint32_t)(0x11af94fc), (0x0u));
  /* 11ad6950 mov dword ptr [0x11af9500], 0 */
  w32((uint32_t)(0x11af9500), (0x0u));
  /* 11ad695a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 11ad695f push 0x11af42dc */
  push32((uint32_t)(0x11af42dcu));
  /* 11ad6964 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad6966 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad6968 call 0x11ac9660 */
  push32(0x11ad696du); f_11ac9660();
  /* 11ad696d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6970 mov ecx, dword ptr [0x11af7f70] */
  ECX = (r32((uint32_t)(0x11af7f70)));
  /* 11ad6976 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ad6978 mov edx, dword ptr [0x11af7f70] */
  EDX = (r32((uint32_t)(0x11af7f70)));
  /* 11ad697e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad6981 jne 0x11ad698b */
  if (!C.zf) goto L_11ad698b;
  /* 11ad6983 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad6986 jmp 0x11ad6a32 */
  goto L_11ad6a32;
L_11ad698b:;
  /* 11ad698b push 0x11af41a8 */
  push32((uint32_t)(0x11af41a8u));
  /* 11ad6990 mov eax, dword ptr [0x11af7f70] */
  EAX = (r32((uint32_t)(0x11af7f70)));
  /* 11ad6995 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ad6997 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad6998 call 0x11acc610 */
  push32(0x11ad699du); f_11acc610();
  /* 11ad699d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad69a0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 11ad69a5 push 0x11af42dc */
  push32((uint32_t)(0x11af42dcu));
  /* 11ad69aa push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad69ac push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad69ae call 0x11ac9660 */
  push32(0x11ad69b3u); f_11ac9660();
  /* 11ad69b3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad69b6 mov edx, dword ptr [0x11af7f70] */
  EDX = (r32((uint32_t)(0x11af7f70)));
  /* 11ad69bc mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11ad69bf mov eax, dword ptr [0x11af7f70] */
  EAX = (r32((uint32_t)(0x11af7f70)));
  /* 11ad69c4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad69c8 jne 0x11ad69cf */
  if (!C.zf) goto L_11ad69cf;
  /* 11ad69ca or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad69cd jmp 0x11ad6a32 */
  goto L_11ad6a32;
L_11ad69cf:;
  /* 11ad69cf mov ecx, dword ptr [0x11af7f70] */
  ECX = (r32((uint32_t)(0x11af7f70)));
  /* 11ad69d5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ad69d8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11ad69db push 0x92 */
  push32((uint32_t)(0x92u));
  /* 11ad69e0 push 0x11af42dc */
  push32((uint32_t)(0x11af42dcu));
  /* 11ad69e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad69e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad69e9 call 0x11ac9660 */
  push32(0x11ad69eeu); f_11ac9660();
  /* 11ad69ee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad69f1 mov ecx, dword ptr [0x11af7f70] */
  ECX = (r32((uint32_t)(0x11af7f70)));
  /* 11ad69f7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11ad69fa mov edx, dword ptr [0x11af7f70] */
  EDX = (r32((uint32_t)(0x11af7f70)));
  /* 11ad6a00 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad6a04 jne 0x11ad6a0b */
  if (!C.zf) goto L_11ad6a0b;
  /* 11ad6a06 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad6a09 jmp 0x11ad6a32 */
  goto L_11ad6a32;
L_11ad6a0b:;
  /* 11ad6a0b mov eax, dword ptr [0x11af7f70] */
  EAX = (r32((uint32_t)(0x11af7f70)));
  /* 11ad6a10 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ad6a13 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11ad6a16 mov edx, dword ptr [0x11af7f70] */
  EDX = (r32((uint32_t)(0x11af7f70)));
  /* 11ad6a1c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ad6a1e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ad6a20 mov byte ptr [0x11af71d4], cl */
  w8((uint32_t)(0x11af71d4), (CL));
  /* 11ad6a26 mov dword ptr [0x11af71d8], 1 */
  w32((uint32_t)(0x11af71d8), (0x1u));
  /* 11ad6a30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ad6a32:;
  /* 11ad6a32 mov esp, ebp */
  ESP = (EBP);
  /* 11ad6a34 pop ebp */
  EBP = (pop32());
  /* 11ad6a35 ret  */
  ESPCHK(0x11ad6790u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11ad6a40 (125 bytes, 49 insns) */
void f_11ad6a40(void) {
  FTRACE(0x11ad6a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad6a40 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad6a41 mov ebp, esp */
  EBP = (ESP);
  /* 11ad6a43 push ecx */
  push32((uint32_t)(ECX));
L_11ad6a44:;
  /* 11ad6a44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6a47 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ad6a4a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad6a4c je 0x11ad6ab9 */
  if (C.zf) goto L_11ad6ab9;
  /* 11ad6a4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6a51 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ad6a54 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad6a57 jl 0x11ad6a7d */
  if ((C.sf!=C.of)) goto L_11ad6a7d;
  /* 11ad6a59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6a5c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ad6a5f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad6a62 jg 0x11ad6a7d */
  if ((!C.zf&&C.sf==C.of)) goto L_11ad6a7d;
  /* 11ad6a64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6a67 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ad6a6a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad6a6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6a70 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11ad6a72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6a75 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6a78 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ad6a7b jmp 0x11ad6ab7 */
  goto L_11ad6ab7;
L_11ad6a7d:;
  /* 11ad6a7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6a80 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ad6a83 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad6a86 jne 0x11ad6aae */
  if (!C.zf) goto L_11ad6aae;
  /* 11ad6a88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6a8b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ad6a8e:;
  /* 11ad6a8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6a91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6a94 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11ad6a97 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11ad6a99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6a9c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6a9f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ad6aa2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6aa5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ad6aa8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad6aaa jne 0x11ad6a8e */
  if (!C.zf) goto L_11ad6a8e;
  /* 11ad6aac jmp 0x11ad6ab7 */
  goto L_11ad6ab7;
L_11ad6aae:;
  /* 11ad6aae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6ab1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6ab4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11ad6ab7:;
  /* 11ad6ab7 jmp 0x11ad6a44 */
  goto L_11ad6a44;
L_11ad6ab9:;
  /* 11ad6ab9 mov esp, ebp */
  ESP = (EBP);
  /* 11ad6abb pop ebp */
  EBP = (pop32());
  /* 11ad6abc ret  */
  ESPCHK(0x11ad6a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10016ac0 @ 0x11ad6ac0 (304 bytes, 85 insns) */
void f_11ad6ac0(void) {
  FTRACE(0x11ad6ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad6ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad6ac1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad6ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad6ac4 cmp dword ptr [0x11af94d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af94d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad6acb je 0x11ad6b8c */
  if (C.zf) goto L_11ad6b8c;
  /* 11ad6ad1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11ad6ad3 push 0x11af42e8 */
  push32((uint32_t)(0x11af42e8u));
  /* 11ad6ad8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad6ada push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11ad6adc push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad6ade call 0x11ac9a70 */
  push32(0x11ad6ae3u); f_11ac9a70();
  /* 11ad6ae3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6ae6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad6ae9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad6aed jne 0x11ad6af9 */
  if (!C.zf) goto L_11ad6af9;
  /* 11ad6aef mov eax, 1 */
  EAX = (0x1u);
  /* 11ad6af4 jmp 0x11ad6bec */
  goto L_11ad6bec;
L_11ad6af9:;
  /* 11ad6af9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6afc push eax */
  push32((uint32_t)(EAX));
  /* 11ad6afd call 0x11ad6bf0 */
  push32(0x11ad6b02u); f_11ad6bf0();
  /* 11ad6b02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6b05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad6b07 je 0x11ad6b2d */
  if (C.zf) goto L_11ad6b2d;
  /* 11ad6b09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6b0c push ecx */
  push32((uint32_t)(ECX));
  /* 11ad6b0d call 0x11ad6e80 */
  push32(0x11ad6b12u); f_11ad6e80();
  /* 11ad6b12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6b15 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad6b17 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6b1a push edx */
  push32((uint32_t)(EDX));
  /* 11ad6b1b call 0x11aca0f0 */
  push32(0x11ad6b20u); f_11aca0f0();
  /* 11ad6b20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6b23 mov eax, 1 */
  EAX = (0x1u);
  /* 11ad6b28 jmp 0x11ad6bec */
  goto L_11ad6bec;
L_11ad6b2d:;
  /* 11ad6b2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6b30 mov ecx, dword ptr [0x11af7f70] */
  ECX = (r32((uint32_t)(0x11af7f70)));
  /* 11ad6b36 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad6b38 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ad6b3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6b3d mov ecx, dword ptr [0x11af7f70] */
  ECX = (r32((uint32_t)(0x11af7f70)));
  /* 11ad6b43 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ad6b46 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11ad6b49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6b4c mov ecx, dword ptr [0x11af7f70] */
  ECX = (r32((uint32_t)(0x11af7f70)));
  /* 11ad6b52 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ad6b55 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11ad6b58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6b5b mov dword ptr [0x11af7f70], eax */
  w32((uint32_t)(0x11af7f70), (EAX));
  /* 11ad6b60 mov ecx, dword ptr [0x11af9504] */
  ECX = (r32((uint32_t)(0x11af9504)));
  /* 11ad6b66 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad6b67 call 0x11ad6e80 */
  push32(0x11ad6b6cu); f_11ad6e80();
  /* 11ad6b6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6b6f push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad6b71 mov edx, dword ptr [0x11af9504] */
  EDX = (r32((uint32_t)(0x11af9504)));
  /* 11ad6b77 push edx */
  push32((uint32_t)(EDX));
  /* 11ad6b78 call 0x11aca0f0 */
  push32(0x11ad6b7du); f_11aca0f0();
  /* 11ad6b7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6b80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6b83 mov dword ptr [0x11af9504], eax */
  w32((uint32_t)(0x11af9504), (EAX));
  /* 11ad6b88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad6b8a jmp 0x11ad6bec */
  goto L_11ad6bec;
L_11ad6b8c:;
  /* 11ad6b8c mov ecx, dword ptr [0x11af7f70] */
  ECX = (r32((uint32_t)(0x11af7f70)));
  /* 11ad6b92 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad6b94 mov dword ptr [0x11af7f40], edx */
  w32((uint32_t)(0x11af7f40), (EDX));
  /* 11ad6b9a mov eax, dword ptr [0x11af7f70] */
  EAX = (r32((uint32_t)(0x11af7f70)));
  /* 11ad6b9f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ad6ba2 mov dword ptr [0x11af7f44], ecx */
  w32((uint32_t)(0x11af7f44), (ECX));
  /* 11ad6ba8 mov edx, dword ptr [0x11af7f70] */
  EDX = (r32((uint32_t)(0x11af7f70)));
  /* 11ad6bae mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ad6bb1 mov dword ptr [0x11af7f48], eax */
  w32((uint32_t)(0x11af7f48), (EAX));
  /* 11ad6bb6 mov dword ptr [0x11af7f70], 0x11af7f40 */
  w32((uint32_t)(0x11af7f70), (0x11af7f40u));
  /* 11ad6bc0 mov ecx, dword ptr [0x11af9504] */
  ECX = (r32((uint32_t)(0x11af9504)));
  /* 11ad6bc6 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad6bc7 call 0x11ad6e80 */
  push32(0x11ad6bccu); f_11ad6e80();
  /* 11ad6bcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6bcf push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad6bd1 mov edx, dword ptr [0x11af9504] */
  EDX = (r32((uint32_t)(0x11af9504)));
  /* 11ad6bd7 push edx */
  push32((uint32_t)(EDX));
  /* 11ad6bd8 call 0x11aca0f0 */
  push32(0x11ad6bddu); f_11aca0f0();
  /* 11ad6bdd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6be0 mov dword ptr [0x11af9504], 0 */
  w32((uint32_t)(0x11af9504), (0x0u));
  /* 11ad6bea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ad6bec:;
  /* 11ad6bec mov esp, ebp */
  ESP = (EBP);
  /* 11ad6bee pop ebp */
  EBP = (pop32());
  /* 11ad6bef ret  */
  ESPCHK(0x11ad6ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016bf0 @ 0x11ad6bf0 (525 bytes, 200 insns) */
void f_11ad6bf0(void) {
  FTRACE(0x11ad6bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad6bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad6bf1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad6bf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad6bf6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ad6bfd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad6bff mov ax, word ptr [0x11af9524] */
  AX = (r16((uint32_t)(0x11af9524)));
  /* 11ad6c05 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad6c08 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad6c0c jne 0x11ad6c16 */
  if (!C.zf) goto L_11ad6c16;
  /* 11ad6c0e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad6c11 jmp 0x11ad6df9 */
  goto L_11ad6df9;
L_11ad6c16:;
  /* 11ad6c16 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6c19 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6c1c push ecx */
  push32((uint32_t)(ECX));
  /* 11ad6c1d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11ad6c1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6c22 push edx */
  push32((uint32_t)(EDX));
  /* 11ad6c23 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad6c25 call 0x11ada190 */
  push32(0x11ad6c2au); f_11ada190();
  /* 11ad6c2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6c2d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad6c30 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad6c32 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ad6c35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6c38 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6c3b push edx */
  push32((uint32_t)(EDX));
  /* 11ad6c3c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11ad6c3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6c41 push eax */
  push32((uint32_t)(EAX));
  /* 11ad6c42 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad6c44 call 0x11ada190 */
  push32(0x11ad6c49u); f_11ada190();
  /* 11ad6c49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6c4c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad6c4f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad6c51 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ad6c54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6c57 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6c5a push edx */
  push32((uint32_t)(EDX));
  /* 11ad6c5b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11ad6c5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6c60 push eax */
  push32((uint32_t)(EAX));
  /* 11ad6c61 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad6c63 call 0x11ada190 */
  push32(0x11ad6c68u); f_11ada190();
  /* 11ad6c68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6c6b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad6c6e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad6c70 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ad6c73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6c76 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6c79 push edx */
  push32((uint32_t)(EDX));
  /* 11ad6c7a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11ad6c7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6c7f push eax */
  push32((uint32_t)(EAX));
  /* 11ad6c80 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad6c82 call 0x11ada190 */
  push32(0x11ad6c87u); f_11ada190();
  /* 11ad6c87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6c8a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad6c8d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad6c8f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ad6c92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6c95 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6c98 push edx */
  push32((uint32_t)(EDX));
  /* 11ad6c99 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11ad6c9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6c9e push eax */
  push32((uint32_t)(EAX));
  /* 11ad6c9f push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad6ca1 call 0x11ada190 */
  push32(0x11ad6ca6u); f_11ada190();
  /* 11ad6ca6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6ca9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad6cac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad6cae mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ad6cb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6cb4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11ad6cb7 push eax */
  push32((uint32_t)(EAX));
  /* 11ad6cb8 call 0x11ad6e00 */
  push32(0x11ad6cbdu); f_11ad6e00();
  /* 11ad6cbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6cc0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6cc3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6cc6 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad6cc7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11ad6cc9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6ccc push edx */
  push32((uint32_t)(EDX));
  /* 11ad6ccd push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad6ccf call 0x11ada190 */
  push32(0x11ad6cd4u); f_11ada190();
  /* 11ad6cd4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6cd7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad6cda or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad6cdc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ad6cdf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6ce2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6ce5 push edx */
  push32((uint32_t)(EDX));
  /* 11ad6ce6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 11ad6ce8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6ceb push eax */
  push32((uint32_t)(EAX));
  /* 11ad6cec push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad6cee call 0x11ada190 */
  push32(0x11ad6cf3u); f_11ada190();
  /* 11ad6cf3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6cf6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad6cf9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad6cfb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ad6cfe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6d01 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6d04 push edx */
  push32((uint32_t)(EDX));
  /* 11ad6d05 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11ad6d07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6d0a push eax */
  push32((uint32_t)(EAX));
  /* 11ad6d0b push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad6d0d call 0x11ada190 */
  push32(0x11ad6d12u); f_11ada190();
  /* 11ad6d12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6d15 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad6d18 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad6d1a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ad6d1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6d20 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6d23 push edx */
  push32((uint32_t)(EDX));
  /* 11ad6d24 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ad6d26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6d29 push eax */
  push32((uint32_t)(EAX));
  /* 11ad6d2a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad6d2c call 0x11ada190 */
  push32(0x11ad6d31u); f_11ada190();
  /* 11ad6d31 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6d34 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad6d37 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad6d39 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ad6d3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6d3f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6d42 push edx */
  push32((uint32_t)(EDX));
  /* 11ad6d43 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 11ad6d45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6d48 push eax */
  push32((uint32_t)(EAX));
  /* 11ad6d49 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad6d4b call 0x11ada190 */
  push32(0x11ad6d50u); f_11ada190();
  /* 11ad6d50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6d53 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad6d56 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad6d58 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ad6d5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6d5e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6d61 push edx */
  push32((uint32_t)(EDX));
  /* 11ad6d62 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 11ad6d64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6d67 push eax */
  push32((uint32_t)(EAX));
  /* 11ad6d68 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad6d6a call 0x11ada190 */
  push32(0x11ad6d6fu); f_11ada190();
  /* 11ad6d6f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6d72 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad6d75 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad6d77 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ad6d7a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6d7d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6d80 push edx */
  push32((uint32_t)(EDX));
  /* 11ad6d81 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 11ad6d83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6d86 push eax */
  push32((uint32_t)(EAX));
  /* 11ad6d87 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad6d89 call 0x11ada190 */
  push32(0x11ad6d8eu); f_11ada190();
  /* 11ad6d8e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6d91 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad6d94 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad6d96 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ad6d99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6d9c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6d9f push edx */
  push32((uint32_t)(EDX));
  /* 11ad6da0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 11ad6da2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6da5 push eax */
  push32((uint32_t)(EAX));
  /* 11ad6da6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad6da8 call 0x11ada190 */
  push32(0x11ad6dadu); f_11ada190();
  /* 11ad6dad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6db0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad6db3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad6db5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ad6db8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6dbb add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6dbe push edx */
  push32((uint32_t)(EDX));
  /* 11ad6dbf push 0x52 */
  push32((uint32_t)(0x52u));
  /* 11ad6dc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6dc4 push eax */
  push32((uint32_t)(EAX));
  /* 11ad6dc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad6dc7 call 0x11ada190 */
  push32(0x11ad6dccu); f_11ada190();
  /* 11ad6dcc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6dcf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad6dd2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad6dd4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ad6dd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6dda add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6ddd push edx */
  push32((uint32_t)(EDX));
  /* 11ad6dde push 0x53 */
  push32((uint32_t)(0x53u));
  /* 11ad6de0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6de3 push eax */
  push32((uint32_t)(EAX));
  /* 11ad6de4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad6de6 call 0x11ada190 */
  push32(0x11ad6debu); f_11ada190();
  /* 11ad6deb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6dee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad6df1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad6df3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ad6df6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11ad6df9:;
  /* 11ad6df9 mov esp, ebp */
  ESP = (EBP);
  /* 11ad6dfb pop ebp */
  EBP = (pop32());
  /* 11ad6dfc ret  */
  ESPCHK(0x11ad6bf0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11ad6e00 (125 bytes, 49 insns) */
void f_11ad6e00(void) {
  FTRACE(0x11ad6e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad6e00 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad6e01 mov ebp, esp */
  EBP = (ESP);
  /* 11ad6e03 push ecx */
  push32((uint32_t)(ECX));
L_11ad6e04:;
  /* 11ad6e04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6e07 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ad6e0a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad6e0c je 0x11ad6e79 */
  if (C.zf) goto L_11ad6e79;
  /* 11ad6e0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6e11 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ad6e14 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad6e17 jl 0x11ad6e3d */
  if ((C.sf!=C.of)) goto L_11ad6e3d;
  /* 11ad6e19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6e1c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ad6e1f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad6e22 jg 0x11ad6e3d */
  if ((!C.zf&&C.sf==C.of)) goto L_11ad6e3d;
  /* 11ad6e24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6e27 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ad6e2a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad6e2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6e30 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11ad6e32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6e35 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6e38 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ad6e3b jmp 0x11ad6e77 */
  goto L_11ad6e77;
L_11ad6e3d:;
  /* 11ad6e3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6e40 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ad6e43 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad6e46 jne 0x11ad6e6e */
  if (!C.zf) goto L_11ad6e6e;
  /* 11ad6e48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6e4b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ad6e4e:;
  /* 11ad6e4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6e51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6e54 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11ad6e57 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11ad6e59 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6e5c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6e5f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ad6e62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad6e65 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ad6e68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad6e6a jne 0x11ad6e4e */
  if (!C.zf) goto L_11ad6e4e;
  /* 11ad6e6c jmp 0x11ad6e77 */
  goto L_11ad6e77;
L_11ad6e6e:;
  /* 11ad6e6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6e71 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6e74 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11ad6e77:;
  /* 11ad6e77 jmp 0x11ad6e04 */
  goto L_11ad6e04;
L_11ad6e79:;
  /* 11ad6e79 mov esp, ebp */
  ESP = (EBP);
  /* 11ad6e7b pop ebp */
  EBP = (pop32());
  /* 11ad6e7c ret  */
  ESPCHK(0x11ad6e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10016e80 @ 0x11ad6e80 (147 bytes, 52 insns) */
void f_11ad6e80(void) {
  FTRACE(0x11ad6e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad6e80 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad6e81 mov ebp, esp */
  EBP = (ESP);
  /* 11ad6e83 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad6e87 jne 0x11ad6e8e */
  if (!C.zf) goto L_11ad6e8e;
  /* 11ad6e89 jmp 0x11ad6f11 */
  goto L_11ad6f11;
L_11ad6e8e:;
  /* 11ad6e8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6e91 cmp dword ptr [eax + 0xc], 0x11af9560 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x11af9560u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad6e98 je 0x11ad6f11 */
  if (C.zf) goto L_11ad6f11;
  /* 11ad6e9a push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad6e9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6e9f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ad6ea2 push edx */
  push32((uint32_t)(EDX));
  /* 11ad6ea3 call 0x11aca0f0 */
  push32(0x11ad6ea8u); f_11aca0f0();
  /* 11ad6ea8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6eab push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad6ead mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6eb0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ad6eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad6eb4 call 0x11aca0f0 */
  push32(0x11ad6eb9u); f_11aca0f0();
  /* 11ad6eb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6ebc push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad6ebe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6ec1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11ad6ec4 push eax */
  push32((uint32_t)(EAX));
  /* 11ad6ec5 call 0x11aca0f0 */
  push32(0x11ad6ecau); f_11aca0f0();
  /* 11ad6eca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6ecd push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad6ecf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6ed2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11ad6ed5 push edx */
  push32((uint32_t)(EDX));
  /* 11ad6ed6 call 0x11aca0f0 */
  push32(0x11ad6edbu); f_11aca0f0();
  /* 11ad6edb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6ede push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad6ee0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6ee3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11ad6ee6 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad6ee7 call 0x11aca0f0 */
  push32(0x11ad6eecu); f_11aca0f0();
  /* 11ad6eec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6eef push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad6ef1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6ef4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11ad6ef7 push eax */
  push32((uint32_t)(EAX));
  /* 11ad6ef8 call 0x11aca0f0 */
  push32(0x11ad6efdu); f_11aca0f0();
  /* 11ad6efd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6f00 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad6f02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad6f05 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11ad6f08 push edx */
  push32((uint32_t)(EDX));
  /* 11ad6f09 call 0x11aca0f0 */
  push32(0x11ad6f0eu); f_11aca0f0();
  /* 11ad6f0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ad6f11:;
  /* 11ad6f11 pop ebp */
  EBP = (pop32());
  /* 11ad6f12 ret  */
  ESPCHK(0x11ad6e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10016f20 @ 0x11ad6f20 (928 bytes, 284 insns) */
void f_11ad6f20(void) {
  FTRACE(0x11ad6f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad6f20 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad6f21 mov ebp, esp */
  EBP = (ESP);
  /* 11ad6f23 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad6f26 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11ad6f2d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11ad6f34 cmp dword ptr [0x11af94d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af94d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad6f3b je 0x11ad7271 */
  if (C.zf) goto L_11ad7271;
  /* 11ad6f41 cmp dword ptr [0x11af94e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af94e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad6f48 jne 0x11ad6f70 */
  if (!C.zf) goto L_11ad6f70;
  /* 11ad6f4a push 0x11af94e4 */
  push32((uint32_t)(0x11af94e4u));
  /* 11ad6f4f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11ad6f54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad6f56 mov ax, word ptr [0x11af951c] */
  AX = (r16((uint32_t)(0x11af951c)));
  /* 11ad6f5c push eax */
  push32((uint32_t)(EAX));
  /* 11ad6f5d push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad6f5f call 0x11ada190 */
  push32(0x11ad6f64u); f_11ada190();
  /* 11ad6f64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6f67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad6f69 je 0x11ad6f70 */
  if (C.zf) goto L_11ad6f70;
  /* 11ad6f6b jmp 0x11ad7232 */
  goto L_11ad7232;
L_11ad6f70:;
  /* 11ad6f70 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11ad6f72 push 0x11af42f4 */
  push32((uint32_t)(0x11af42f4u));
  /* 11ad6f77 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad6f79 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11ad6f7e call 0x11ac9660 */
  push32(0x11ad6f83u); f_11ac9660();
  /* 11ad6f83 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6f86 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11ad6f89 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11ad6f8b push 0x11af42f4 */
  push32((uint32_t)(0x11af42f4u));
  /* 11ad6f90 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad6f92 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11ad6f97 call 0x11ac9660 */
  push32(0x11ad6f9cu); f_11ac9660();
  /* 11ad6f9c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6f9f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11ad6fa2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11ad6fa4 push 0x11af42f4 */
  push32((uint32_t)(0x11af42f4u));
  /* 11ad6fa9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad6fab push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11ad6fb0 call 0x11ac9660 */
  push32(0x11ad6fb5u); f_11ac9660();
  /* 11ad6fb5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6fb8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11ad6fbb push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11ad6fbd push 0x11af42f4 */
  push32((uint32_t)(0x11af42f4u));
  /* 11ad6fc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad6fc4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11ad6fc9 call 0x11ac9660 */
  push32(0x11ad6fceu); f_11ac9660();
  /* 11ad6fce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad6fd1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11ad6fd4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad6fd8 je 0x11ad6fec */
  if (C.zf) goto L_11ad6fec;
  /* 11ad6fda cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad6fde je 0x11ad6fec */
  if (C.zf) goto L_11ad6fec;
  /* 11ad6fe0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad6fe4 je 0x11ad6fec */
  if (C.zf) goto L_11ad6fec;
  /* 11ad6fe6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad6fea jne 0x11ad6ff1 */
  if (!C.zf) goto L_11ad6ff1;
L_11ad6fec:;
  /* 11ad6fec jmp 0x11ad7232 */
  goto L_11ad7232;
L_11ad6ff1:;
  /* 11ad6ff1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad6ff4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11ad6ff7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11ad6ffe jmp 0x11ad7009 */
  goto L_11ad7009;
L_11ad7000:;
  /* 11ad7000 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad7003 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7006 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11ad7009:;
  /* 11ad7009 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7010 jge 0x11ad7025 */
  if ((C.sf==C.of)) goto L_11ad7025;
  /* 11ad7012 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad7015 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 11ad7018 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11ad701a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad701d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7020 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11ad7023 jmp 0x11ad7000 */
  goto L_11ad7000;
L_11ad7025:;
  /* 11ad7025 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11ad7028 push eax */
  push32((uint32_t)(EAX));
  /* 11ad7029 mov ecx, dword ptr [0x11af94e4] */
  ECX = (r32((uint32_t)(0x11af94e4)));
  /* 11ad702f push ecx */
  push32((uint32_t)(ECX));
  /* 11ad7030 call dword ptr [0x11afb330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb330))), 0x11ad7036u);
  /* 11ad7036 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad7038 jne 0x11ad703f */
  if (!C.zf) goto L_11ad703f;
  /* 11ad703a jmp 0x11ad7232 */
  goto L_11ad7232;
L_11ad703f:;
  /* 11ad703f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7043 jbe 0x11ad704a */
  if ((C.cf||C.zf)) goto L_11ad704a;
  /* 11ad7045 jmp 0x11ad7232 */
  goto L_11ad7232;
L_11ad704a:;
  /* 11ad704a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad704d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ad7053 mov dword ptr [0x11af71d0], edx */
  w32((uint32_t)(0x11af71d0), (EDX));
  /* 11ad7059 cmp dword ptr [0x11af71d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11af71d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7060 jle 0x11ad70b9 */
  if ((C.zf||C.sf!=C.of)) goto L_11ad70b9;
  /* 11ad7062 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 11ad7065 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ad7068 jmp 0x11ad7073 */
  goto L_11ad7073;
L_11ad706a:;
  /* 11ad706a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad706d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7070 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11ad7073:;
  /* 11ad7073 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad7076 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad7078 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ad707a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad707c je 0x11ad70b9 */
  if (C.zf) goto L_11ad70b9;
  /* 11ad707e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad7081 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ad7083 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11ad7086 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad7088 je 0x11ad70b9 */
  if (C.zf) goto L_11ad70b9;
  /* 11ad708a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad708d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad708f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ad7091 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11ad7094 jmp 0x11ad709f */
  goto L_11ad709f;
L_11ad7096:;
  /* 11ad7096 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad7099 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad709c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11ad709f:;
  /* 11ad709f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad70a2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad70a4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11ad70a7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad70aa jg 0x11ad70b7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ad70b7;
  /* 11ad70ac mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad70af add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad70b2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11ad70b5 jmp 0x11ad7096 */
  goto L_11ad7096;
L_11ad70b7:;
  /* 11ad70b7 jmp 0x11ad706a */
  goto L_11ad706a;
L_11ad70b9:;
  /* 11ad70b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad70bb push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad70bd push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad70bf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad70c2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad70c5 push eax */
  push32((uint32_t)(EAX));
  /* 11ad70c6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11ad70cb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad70ce push ecx */
  push32((uint32_t)(ECX));
  /* 11ad70cf push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad70d1 call 0x11ad35c0 */
  push32(0x11ad70d6u); f_11ad35c0();
  /* 11ad70d6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad70d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad70db jne 0x11ad70e2 */
  if (!C.zf) goto L_11ad70e2;
  /* 11ad70dd jmp 0x11ad7232 */
  goto L_11ad7232;
L_11ad70e2:;
  /* 11ad70e2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad70e5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 11ad70ea mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ad70ed mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ad70f0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11ad70f7 jmp 0x11ad7102 */
  goto L_11ad7102;
L_11ad70f9:;
  /* 11ad70f9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad70fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad70ff mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11ad7102:;
  /* 11ad7102 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7109 jge 0x11ad7120 */
  if ((C.sf==C.of)) goto L_11ad7120;
  /* 11ad710b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad710e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 11ad7112 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11ad7115 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad7118 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad711b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11ad711e jmp 0x11ad70f9 */
  goto L_11ad70f9;
L_11ad7120:;
  /* 11ad7120 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad7122 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad7124 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ad7127 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad712a push edx */
  push32((uint32_t)(EDX));
  /* 11ad712b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11ad7130 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ad7133 push eax */
  push32((uint32_t)(EAX));
  /* 11ad7134 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad7136 call 0x11ada430 */
  push32(0x11ad713bu); f_11ada430();
  /* 11ad713b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad713e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad7140 jne 0x11ad7147 */
  if (!C.zf) goto L_11ad7147;
  /* 11ad7142 jmp 0x11ad7232 */
  goto L_11ad7232;
L_11ad7147:;
  /* 11ad7147 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ad714a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11ad714f cmp dword ptr [0x11af71d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11af71d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7156 jle 0x11ad71b3 */
  if ((C.zf||C.sf!=C.of)) goto L_11ad71b3;
  /* 11ad7158 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 11ad715b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11ad715e jmp 0x11ad7169 */
  goto L_11ad7169;
L_11ad7160:;
  /* 11ad7160 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad7163 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7166 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11ad7169:;
  /* 11ad7169 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad716c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ad716e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ad7170 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad7172 je 0x11ad71b3 */
  if (C.zf) goto L_11ad71b3;
  /* 11ad7174 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad7177 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad7179 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11ad717c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad717e je 0x11ad71b3 */
  if (C.zf) goto L_11ad71b3;
  /* 11ad7180 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad7183 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad7185 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ad7187 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ad718a jmp 0x11ad7195 */
  goto L_11ad7195;
L_11ad718c:;
  /* 11ad718c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad718f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7192 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11ad7195:;
  /* 11ad7195 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad7198 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad719a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11ad719d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad71a0 jg 0x11ad71b1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ad71b1;
  /* 11ad71a2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad71a5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad71a8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 11ad71af jmp 0x11ad718c */
  goto L_11ad718c;
L_11ad71b1:;
  /* 11ad71b1 jmp 0x11ad7160 */
  goto L_11ad7160;
L_11ad71b3:;
  /* 11ad71b3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad71b6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad71b9 mov dword ptr [0x11af6fb8], eax */
  w32((uint32_t)(0x11af6fb8), (EAX));
  /* 11ad71be mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ad71c1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad71c4 mov dword ptr [0x11af6fbc], ecx */
  w32((uint32_t)(0x11af6fbc), (ECX));
  /* 11ad71ca cmp dword ptr [0x11af9508], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9508))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad71d1 je 0x11ad71e4 */
  if (C.zf) goto L_11ad71e4;
  /* 11ad71d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad71d5 mov edx, dword ptr [0x11af9508] */
  EDX = (r32((uint32_t)(0x11af9508)));
  /* 11ad71db push edx */
  push32((uint32_t)(EDX));
  /* 11ad71dc call 0x11aca0f0 */
  push32(0x11ad71e1u); f_11aca0f0();
  /* 11ad71e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ad71e4:;
  /* 11ad71e4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad71e7 mov dword ptr [0x11af9508], eax */
  w32((uint32_t)(0x11af9508), (EAX));
  /* 11ad71ec cmp dword ptr [0x11af950c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af950c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad71f3 je 0x11ad7206 */
  if (C.zf) goto L_11ad7206;
  /* 11ad71f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad71f7 mov ecx, dword ptr [0x11af950c] */
  ECX = (r32((uint32_t)(0x11af950c)));
  /* 11ad71fd push ecx */
  push32((uint32_t)(ECX));
  /* 11ad71fe call 0x11aca0f0 */
  push32(0x11ad7203u); f_11aca0f0();
  /* 11ad7203 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ad7206:;
  /* 11ad7206 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ad7209 mov dword ptr [0x11af950c], edx */
  w32((uint32_t)(0x11af950c), (EDX));
  /* 11ad720f push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad7211 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad7214 push eax */
  push32((uint32_t)(EAX));
  /* 11ad7215 call 0x11aca0f0 */
  push32(0x11ad721au); f_11aca0f0();
  /* 11ad721a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad721d push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad721f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ad7222 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad7223 call 0x11aca0f0 */
  push32(0x11ad7228u); f_11aca0f0();
  /* 11ad7228 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad722b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad722d jmp 0x11ad72bc */
  goto L_11ad72bc;
L_11ad7232:;
  /* 11ad7232 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad7234 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad7237 push edx */
  push32((uint32_t)(EDX));
  /* 11ad7238 call 0x11aca0f0 */
  push32(0x11ad723du); f_11aca0f0();
  /* 11ad723d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7240 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad7242 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ad7245 push eax */
  push32((uint32_t)(EAX));
  /* 11ad7246 call 0x11aca0f0 */
  push32(0x11ad724bu); f_11aca0f0();
  /* 11ad724b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad724e push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad7250 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad7253 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad7254 call 0x11aca0f0 */
  push32(0x11ad7259u); f_11aca0f0();
  /* 11ad7259 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad725c push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad725e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ad7261 push edx */
  push32((uint32_t)(EDX));
  /* 11ad7262 call 0x11aca0f0 */
  push32(0x11ad7267u); f_11aca0f0();
  /* 11ad7267 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad726a mov eax, 1 */
  EAX = (0x1u);
  /* 11ad726f jmp 0x11ad72bc */
  goto L_11ad72bc;
L_11ad7271:;
  /* 11ad7271 mov dword ptr [0x11af6fb8], 0x11af6fc2 */
  w32((uint32_t)(0x11af6fb8), (0x11af6fc2u));
  /* 11ad727b mov dword ptr [0x11af6fbc], 0x11af6fc2 */
  w32((uint32_t)(0x11af6fbc), (0x11af6fc2u));
  /* 11ad7285 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad7287 mov eax, dword ptr [0x11af9508] */
  EAX = (r32((uint32_t)(0x11af9508)));
  /* 11ad728c push eax */
  push32((uint32_t)(EAX));
  /* 11ad728d call 0x11aca0f0 */
  push32(0x11ad7292u); f_11aca0f0();
  /* 11ad7292 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7295 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad7297 mov ecx, dword ptr [0x11af950c] */
  ECX = (r32((uint32_t)(0x11af950c)));
  /* 11ad729d push ecx */
  push32((uint32_t)(ECX));
  /* 11ad729e call 0x11aca0f0 */
  push32(0x11ad72a3u); f_11aca0f0();
  /* 11ad72a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad72a6 mov dword ptr [0x11af9508], 0 */
  w32((uint32_t)(0x11af9508), (0x0u));
  /* 11ad72b0 mov dword ptr [0x11af950c], 0 */
  w32((uint32_t)(0x11af950c), (0x0u));
  /* 11ad72ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ad72bc:;
  /* 11ad72bc mov esp, ebp */
  ESP = (EBP);
  /* 11ad72be pop ebp */
  EBP = (pop32());
  /* 11ad72bf ret  */
  ESPCHK(0x11ad6f20u, _esp0);
  ESP += 4; return;
}

/* FUN_100172c0 @ 0x11ad72c0 (7 bytes, 5 insns) */
void f_11ad72c0(void) {
  FTRACE(0x11ad72c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad72c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad72c1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad72c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad72c5 pop ebp */
  EBP = (pop32());
  /* 11ad72c6 ret  */
  ESPCHK(0x11ad72c0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x11ad72d0 (129 bytes, 56 insns) */
void f_11ad72d0(void) {
  FTRACE(0x11ad72d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad72d0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ad72d4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ad72d8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11ad72de jne 0x11ad731c */
  if (!C.zf) goto L_11ad731c;
L_11ad72e0:;
  /* 11ad72e0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ad72e2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ad72e4 jne 0x11ad7314 */
  if (!C.zf) goto L_11ad7314;
  /* 11ad72e6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ad72e8 je 0x11ad7310 */
  if (C.zf) goto L_11ad7310;
  /* 11ad72ea cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ad72ed jne 0x11ad7314 */
  if (!C.zf) goto L_11ad7314;
  /* 11ad72ef or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11ad72f1 je 0x11ad7310 */
  if (C.zf) goto L_11ad7310;
  /* 11ad72f3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11ad72f6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ad72f9 jne 0x11ad7314 */
  if (!C.zf) goto L_11ad7314;
  /* 11ad72fb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ad72fd je 0x11ad7310 */
  if (C.zf) goto L_11ad7310;
  /* 11ad72ff cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ad7302 jne 0x11ad7314 */
  if (!C.zf) goto L_11ad7314;
  /* 11ad7304 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7307 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad730a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11ad730c jne 0x11ad72e0 */
  if (!C.zf) goto L_11ad72e0;
  /* 11ad730e mov edi, edi */
  EDI = (EDI);
L_11ad7310:;
  /* 11ad7310 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad7312 ret  */
  ESPCHK(0x11ad72d0u, _esp0);
  ESP += 4; return;
  /* 11ad7313 nop  */
  /* nop */
L_11ad7314:;
  /* 11ad7314 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad7316 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11ad7318 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ad7319 ret  */
  ESPCHK(0x11ad72d0u, _esp0);
  ESP += 4; return;
  /* 11ad731a mov edi, edi */
  EDI = (EDI);
L_11ad731c:;
  /* 11ad731c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 11ad7322 je 0x11ad7338 */
  if (C.zf) goto L_11ad7338;
  /* 11ad7324 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ad7326 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11ad7327 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ad7329 jne 0x11ad7314 */
  if (!C.zf) goto L_11ad7314;
  /* 11ad732b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ad732c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ad732e je 0x11ad7310 */
  if (C.zf) goto L_11ad7310;
  /* 11ad7330 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 11ad7336 je 0x11ad72e0 */
  if (C.zf) goto L_11ad72e0;
L_11ad7338:;
  /* 11ad7338 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11ad733b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad733e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ad7340 jne 0x11ad7314 */
  if (!C.zf) goto L_11ad7314;
  /* 11ad7342 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ad7344 je 0x11ad7310 */
  if (C.zf) goto L_11ad7310;
  /* 11ad7346 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ad7349 jne 0x11ad7314 */
  if (!C.zf) goto L_11ad7314;
  /* 11ad734b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11ad734d je 0x11ad7310 */
  if (C.zf) goto L_11ad7310;
  /* 11ad734f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7352 jmp 0x11ad72e0 */
  goto L_11ad72e0;
}

/* FUN_10017360 @ 0x11ad7360 (62 bytes, 35 insns) */
void f_11ad7360(void) {
  FTRACE(0x11ad7360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad7360 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad7361 mov ebp, esp */
  EBP = (ESP);
  /* 11ad7363 push esi */
  push32((uint32_t)(ESI));
  /* 11ad7364 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad7366 push eax */
  push32((uint32_t)(EAX));
  /* 11ad7367 push eax */
  push32((uint32_t)(EAX));
  /* 11ad7368 push eax */
  push32((uint32_t)(EAX));
  /* 11ad7369 push eax */
  push32((uint32_t)(EAX));
  /* 11ad736a push eax */
  push32((uint32_t)(EAX));
  /* 11ad736b push eax */
  push32((uint32_t)(EAX));
  /* 11ad736c push eax */
  push32((uint32_t)(EAX));
  /* 11ad736d push eax */
  push32((uint32_t)(EAX));
  /* 11ad736e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad7371 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ad7374:;
  /* 11ad7374 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ad7376 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ad7378 je 0x11ad7381 */
  if (C.zf) goto L_11ad7381;
  /* 11ad737a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11ad737b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11ad737b");
  /* 11ad737f jmp 0x11ad7374 */
  goto L_11ad7374;
L_11ad7381:;
  /* 11ad7381 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad7384 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ad7387 nop  */
  /* nop */
L_11ad7388:;
  /* 11ad7388 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ad7389 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ad738b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ad738d je 0x11ad7396 */
  if (C.zf) goto L_11ad7396;
  /* 11ad738f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ad7390 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11ad7390");
  /* 11ad7394 jae 0x11ad7388 */
  if (!C.cf) goto L_11ad7388;
L_11ad7396:;
  /* 11ad7396 mov eax, ecx */
  EAX = (ECX);
  /* 11ad7398 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad739b pop esi */
  ESI = (pop32());
  /* 11ad739c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ad739d ret  */
  ESPCHK(0x11ad7360u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11ad73a0 (56 bytes, 31 insns) */
void f_11ad73a0(void) {
  FTRACE(0x11ad73a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad73a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad73a1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad73a3 push edi */
  push32((uint32_t)(EDI));
  /* 11ad73a4 push esi */
  push32((uint32_t)(ESI));
  /* 11ad73a5 push ebx */
  push32((uint32_t)(EBX));
  /* 11ad73a6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad73a9 jecxz 0x11ad73d1 */
  x86_unimpl("jecxz @ 0x11ad73a9");
  /* 11ad73ab mov ebx, ecx */
  EBX = (ECX);
  /* 11ad73ad mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad73b0 mov esi, edi */
  ESI = (EDI);
  /* 11ad73b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad73b4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11ad73b6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ad73b8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad73ba mov edi, esi */
  EDI = (ESI);
  /* 11ad73bc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad73bf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11ad73c1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11ad73c4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad73c6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ad73c9 ja 0x11ad73cf */
  if ((!C.cf&&!C.zf)) goto L_11ad73cf;
  /* 11ad73cb je 0x11ad73d1 */
  if (C.zf) goto L_11ad73d1;
  /* 11ad73cd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11ad73ce dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_11ad73cf:;
  /* 11ad73cf not ecx */
  ECX = (~(ECX));
L_11ad73d1:;
  /* 11ad73d1 mov eax, ecx */
  EAX = (ECX);
  /* 11ad73d3 pop ebx */
  EBX = (pop32());
  /* 11ad73d4 pop esi */
  ESI = (pop32());
  /* 11ad73d5 pop edi */
  EDI = (pop32());
  /* 11ad73d6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ad73d7 ret  */
  ESPCHK(0x11ad73a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100173e0 @ 0x11ad73e0 (58 bytes, 32 insns) */
void f_11ad73e0(void) {
  FTRACE(0x11ad73e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad73e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad73e1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad73e3 push esi */
  push32((uint32_t)(ESI));
  /* 11ad73e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad73e6 push eax */
  push32((uint32_t)(EAX));
  /* 11ad73e7 push eax */
  push32((uint32_t)(EAX));
  /* 11ad73e8 push eax */
  push32((uint32_t)(EAX));
  /* 11ad73e9 push eax */
  push32((uint32_t)(EAX));
  /* 11ad73ea push eax */
  push32((uint32_t)(EAX));
  /* 11ad73eb push eax */
  push32((uint32_t)(EAX));
  /* 11ad73ec push eax */
  push32((uint32_t)(EAX));
  /* 11ad73ed push eax */
  push32((uint32_t)(EAX));
  /* 11ad73ee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad73f1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ad73f4:;
  /* 11ad73f4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ad73f6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ad73f8 je 0x11ad7401 */
  if (C.zf) goto L_11ad7401;
  /* 11ad73fa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11ad73fb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11ad73fb");
  /* 11ad73ff jmp 0x11ad73f4 */
  goto L_11ad73f4;
L_11ad7401:;
  /* 11ad7401 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11ad7404:;
  /* 11ad7404 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ad7406 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ad7408 je 0x11ad7414 */
  if (C.zf) goto L_11ad7414;
  /* 11ad740a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ad740b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11ad740b");
  /* 11ad740f jae 0x11ad7404 */
  if (!C.cf) goto L_11ad7404;
  /* 11ad7411 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11ad7414:;
  /* 11ad7414 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7417 pop esi */
  ESI = (pop32());
  /* 11ad7418 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ad7419 ret  */
  ESPCHK(0x11ad73e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017420 @ 0x11ad7420 (512 bytes, 147 insns) */
void f_11ad7420(void) {
  FTRACE(0x11ad7420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad7420 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad7421 mov ebp, esp */
  EBP = (ESP);
  /* 11ad7423 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad7426 cmp dword ptr [0x11af9554], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9554))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad742d jne 0x11ad7452 */
  if (!C.zf) goto L_11ad7452;
  /* 11ad742f call 0x11ad7ef0 */
  push32(0x11ad7434u); f_11ad7ef0();
  /* 11ad7434 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad7436 je 0x11ad7442 */
  if (C.zf) goto L_11ad7442;
  /* 11ad7438 mov eax, dword ptr [0x11afb2f8] */
  EAX = (r32((uint32_t)(0x11afb2f8)));
  /* 11ad743d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ad7440 jmp 0x11ad7449 */
  goto L_11ad7449;
L_11ad7442:;
  /* 11ad7442 mov dword ptr [ebp - 8], 0x11ad7f40 */
  w32((uint32_t)(EBP + -0x8), (0x11ad7f40u));
L_11ad7449:;
  /* 11ad7449 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad744c mov dword ptr [0x11af9554], ecx */
  w32((uint32_t)(0x11af9554), (ECX));
L_11ad7452:;
  /* 11ad7452 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7456 jne 0x11ad7462 */
  if (!C.zf) goto L_11ad7462;
  /* 11ad7458 call 0x11ad7d40 */
  push32(0x11ad745du); f_11ad7d40();
  /* 11ad745d jmp 0x11ad752e */
  goto L_11ad752e;
L_11ad7462:;
  /* 11ad7462 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad7465 mov dword ptr [0x11af9544], edx */
  w32((uint32_t)(0x11af9544), (EDX));
  /* 11ad746b cmp dword ptr [0x11af9544], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9544))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7472 je 0x11ad7494 */
  if (C.zf) goto L_11ad7494;
  /* 11ad7474 mov eax, dword ptr [0x11af9544] */
  EAX = (r32((uint32_t)(0x11af9544)));
  /* 11ad7479 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ad747c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad747e je 0x11ad7494 */
  if (C.zf) goto L_11ad7494;
  /* 11ad7480 push 0x11af9544 */
  push32((uint32_t)(0x11af9544u));
  /* 11ad7485 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11ad7487 push 0x11af7c40 */
  push32((uint32_t)(0x11af7c40u));
  /* 11ad748c call 0x11ad7620 */
  push32(0x11ad7491u); f_11ad7620();
  /* 11ad7491 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ad7494:;
  /* 11ad7494 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad7497 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad749a mov dword ptr [0x11af9548], edx */
  w32((uint32_t)(0x11af9548), (EDX));
  /* 11ad74a0 cmp dword ptr [0x11af9548], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9548))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad74a7 je 0x11ad74c9 */
  if (C.zf) goto L_11ad74c9;
  /* 11ad74a9 mov eax, dword ptr [0x11af9548] */
  EAX = (r32((uint32_t)(0x11af9548)));
  /* 11ad74ae movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ad74b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad74b3 je 0x11ad74c9 */
  if (C.zf) goto L_11ad74c9;
  /* 11ad74b5 push 0x11af9548 */
  push32((uint32_t)(0x11af9548u));
  /* 11ad74ba push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11ad74bc push 0x11af7b88 */
  push32((uint32_t)(0x11af7b88u));
  /* 11ad74c1 call 0x11ad7620 */
  push32(0x11ad74c6u); f_11ad7620();
  /* 11ad74c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ad74c9:;
  /* 11ad74c9 mov dword ptr [0x11af954c], 0 */
  w32((uint32_t)(0x11af954c), (0x0u));
  /* 11ad74d3 cmp dword ptr [0x11af9544], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9544))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad74da je 0x11ad750d */
  if (C.zf) goto L_11ad750d;
  /* 11ad74dc mov edx, dword ptr [0x11af9544] */
  EDX = (r32((uint32_t)(0x11af9544)));
  /* 11ad74e2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ad74e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad74e7 je 0x11ad750d */
  if (C.zf) goto L_11ad750d;
  /* 11ad74e9 cmp dword ptr [0x11af9548], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9548))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad74f0 je 0x11ad7506 */
  if (C.zf) goto L_11ad7506;
  /* 11ad74f2 mov ecx, dword ptr [0x11af9548] */
  ECX = (r32((uint32_t)(0x11af9548)));
  /* 11ad74f8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ad74fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad74fd je 0x11ad7506 */
  if (C.zf) goto L_11ad7506;
  /* 11ad74ff call 0x11ad76b0 */
  push32(0x11ad7504u); f_11ad76b0();
  /* 11ad7504 jmp 0x11ad750b */
  goto L_11ad750b;
L_11ad7506:;
  /* 11ad7506 call 0x11ad7aa0 */
  push32(0x11ad750bu); f_11ad7aa0();
L_11ad750b:;
  /* 11ad750b jmp 0x11ad752e */
  goto L_11ad752e;
L_11ad750d:;
  /* 11ad750d cmp dword ptr [0x11af9548], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9548))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7514 je 0x11ad7529 */
  if (C.zf) goto L_11ad7529;
  /* 11ad7516 mov eax, dword ptr [0x11af9548] */
  EAX = (r32((uint32_t)(0x11af9548)));
  /* 11ad751b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ad751e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad7520 je 0x11ad7529 */
  if (C.zf) goto L_11ad7529;
  /* 11ad7522 call 0x11ad7c40 */
  push32(0x11ad7527u); f_11ad7c40();
  /* 11ad7527 jmp 0x11ad752e */
  goto L_11ad752e;
L_11ad7529:;
  /* 11ad7529 call 0x11ad7d40 */
  push32(0x11ad752eu); f_11ad7d40();
L_11ad752e:;
  /* 11ad752e cmp dword ptr [0x11af954c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af954c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7535 jne 0x11ad753e */
  if (!C.zf) goto L_11ad753e;
  /* 11ad7537 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad7539 jmp 0x11ad761c */
  goto L_11ad761c;
L_11ad753e:;
  /* 11ad753e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad7541 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7547 push edx */
  push32((uint32_t)(EDX));
  /* 11ad7548 call 0x11ad7d70 */
  push32(0x11ad754du); f_11ad7d70();
  /* 11ad754d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7550 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad7553 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7557 je 0x11ad756c */
  if (C.zf) goto L_11ad756c;
  /* 11ad7559 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad755c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad7561 push eax */
  push32((uint32_t)(EAX));
  /* 11ad7562 call dword ptr [0x11afb308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb308))), 0x11ad7568u);
  /* 11ad7568 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad756a jne 0x11ad7573 */
  if (!C.zf) goto L_11ad7573;
L_11ad756c:;
  /* 11ad756c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad756e jmp 0x11ad761c */
  goto L_11ad761c;
L_11ad7573:;
  /* 11ad7573 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad7575 mov ecx, dword ptr [0x11af9534] */
  ECX = (r32((uint32_t)(0x11af9534)));
  /* 11ad757b push ecx */
  push32((uint32_t)(ECX));
  /* 11ad757c call dword ptr [0x11afb300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb300))), 0x11ad7582u);
  /* 11ad7582 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad7584 jne 0x11ad758d */
  if (!C.zf) goto L_11ad758d;
  /* 11ad7586 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad7588 jmp 0x11ad761c */
  goto L_11ad761c;
L_11ad758d:;
  /* 11ad758d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7591 je 0x11ad75b8 */
  if (C.zf) goto L_11ad75b8;
  /* 11ad7593 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad7596 mov ax, word ptr [0x11af9534] */
  AX = (r16((uint32_t)(0x11af9534)));
  /* 11ad759c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11ad759f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad75a2 mov dx, word ptr [0x11af9550] */
  DX = (r16((uint32_t)(0x11af9550)));
  /* 11ad75a9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 11ad75ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad75b0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11ad75b4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_11ad75b8:;
  /* 11ad75b8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad75bc je 0x11ad7617 */
  if (C.zf) goto L_11ad7617;
  /* 11ad75be push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11ad75c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad75c3 push edx */
  push32((uint32_t)(EDX));
  /* 11ad75c4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 11ad75c9 mov eax, dword ptr [0x11af9534] */
  EAX = (r32((uint32_t)(0x11af9534)));
  /* 11ad75ce push eax */
  push32((uint32_t)(EAX));
  /* 11ad75cf call dword ptr [0x11af9554] */
  call_ind((uint32_t)(r32((uint32_t)(0x11af9554))), 0x11ad75d5u);
  /* 11ad75d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad75d7 jne 0x11ad75dd */
  if (!C.zf) goto L_11ad75dd;
  /* 11ad75d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad75db jmp 0x11ad761c */
  goto L_11ad761c;
L_11ad75dd:;
  /* 11ad75dd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11ad75df mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad75e2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad75e5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad75e6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 11ad75eb mov edx, dword ptr [0x11af9550] */
  EDX = (r32((uint32_t)(0x11af9550)));
  /* 11ad75f1 push edx */
  push32((uint32_t)(EDX));
  /* 11ad75f2 call dword ptr [0x11af9554] */
  call_ind((uint32_t)(r32((uint32_t)(0x11af9554))), 0x11ad75f8u);
  /* 11ad75f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad75fa jne 0x11ad7600 */
  if (!C.zf) goto L_11ad7600;
  /* 11ad75fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad75fe jmp 0x11ad761c */
  goto L_11ad761c;
L_11ad7600:;
  /* 11ad7600 push 0xa */
  push32((uint32_t)(0xau));
  /* 11ad7602 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad7605 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad760a push eax */
  push32((uint32_t)(EAX));
  /* 11ad760b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad760e push ecx */
  push32((uint32_t)(ECX));
  /* 11ad760f call 0x11acc1a0 */
  push32(0x11ad7614u); f_11acc1a0();
  /* 11ad7614 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ad7617:;
  /* 11ad7617 mov eax, 1 */
  EAX = (0x1u);
L_11ad761c:;
  /* 11ad761c mov esp, ebp */
  ESP = (EBP);
  /* 11ad761e pop ebp */
  EBP = (pop32());
  /* 11ad761f ret  */
  ESPCHK(0x11ad7420u, _esp0);
  ESP += 4; return;
}

/* FUN_10017620 @ 0x11ad7620 (130 bytes, 47 insns) */
void f_11ad7620(void) {
  FTRACE(0x11ad7620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad7620 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad7621 mov ebp, esp */
  EBP = (ESP);
  /* 11ad7623 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad7626 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11ad762d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11ad7634:;
  /* 11ad7634 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad7637 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad763a jg 0x11ad769e */
  if ((!C.zf&&C.sf==C.of)) goto L_11ad769e;
  /* 11ad763c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7640 je 0x11ad769e */
  if (C.zf) goto L_11ad769e;
  /* 11ad7642 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad7645 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7648 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ad7649 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad764b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11ad764d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad7650 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad7653 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad7656 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 11ad7659 push eax */
  push32((uint32_t)(EAX));
  /* 11ad765a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad765d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad765f push edx */
  push32((uint32_t)(EDX));
  /* 11ad7660 call 0x11ada6a0 */
  push32(0x11ad7665u); f_11ada6a0();
  /* 11ad7665 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7668 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ad766b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad766f jne 0x11ad7682 */
  if (!C.zf) goto L_11ad7682;
  /* 11ad7671 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad7674 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad7677 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 11ad767b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad767e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ad7680 jmp 0x11ad769c */
  goto L_11ad769c;
L_11ad7682:;
  /* 11ad7682 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7686 jge 0x11ad7693 */
  if ((C.sf==C.of)) goto L_11ad7693;
  /* 11ad7688 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad768b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad768e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11ad7691 jmp 0x11ad769c */
  goto L_11ad769c;
L_11ad7693:;
  /* 11ad7693 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad7696 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7699 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11ad769c:;
  /* 11ad769c jmp 0x11ad7634 */
  goto L_11ad7634;
L_11ad769e:;
  /* 11ad769e mov esp, ebp */
  ESP = (EBP);
  /* 11ad76a0 pop ebp */
  EBP = (pop32());
  /* 11ad76a1 ret  */
  ESPCHK(0x11ad7620u, _esp0);
  ESP += 4; return;
}

/* FUN_100176b0 @ 0x11ad76b0 (186 bytes, 50 insns) */
void f_11ad76b0(void) {
  FTRACE(0x11ad76b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad76b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad76b1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad76b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad76b4 mov eax, dword ptr [0x11af9544] */
  EAX = (r32((uint32_t)(0x11af9544)));
  /* 11ad76b9 push eax */
  push32((uint32_t)(EAX));
  /* 11ad76ba call 0x11acc490 */
  push32(0x11ad76bfu); f_11acc490();
  /* 11ad76bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad76c2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad76c4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad76c7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11ad76ca mov dword ptr [0x11af9540], ecx */
  w32((uint32_t)(0x11af9540), (ECX));
  /* 11ad76d0 mov edx, dword ptr [0x11af9548] */
  EDX = (r32((uint32_t)(0x11af9548)));
  /* 11ad76d6 push edx */
  push32((uint32_t)(EDX));
  /* 11ad76d7 call 0x11acc490 */
  push32(0x11ad76dcu); f_11acc490();
  /* 11ad76dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad76df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad76e1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad76e4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11ad76e7 mov dword ptr [0x11af9538], ecx */
  w32((uint32_t)(0x11af9538), (ECX));
  /* 11ad76ed mov dword ptr [0x11af9534], 0 */
  w32((uint32_t)(0x11af9534), (0x0u));
  /* 11ad76f7 cmp dword ptr [0x11af9540], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9540))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad76fe je 0x11ad7709 */
  if (C.zf) goto L_11ad7709;
  /* 11ad7700 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11ad7707 jmp 0x11ad771b */
  goto L_11ad771b;
L_11ad7709:;
  /* 11ad7709 mov edx, dword ptr [0x11af9544] */
  EDX = (r32((uint32_t)(0x11af9544)));
  /* 11ad770f push edx */
  push32((uint32_t)(EDX));
  /* 11ad7710 call 0x11ad8150 */
  push32(0x11ad7715u); f_11ad8150();
  /* 11ad7715 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7718 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ad771b:;
  /* 11ad771b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad771e mov dword ptr [0x11af953c], eax */
  w32((uint32_t)(0x11af953c), (EAX));
  /* 11ad7723 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad7725 push 0x11ad7770 */
  push32((uint32_t)(0x11ad7770u));
  /* 11ad772a call dword ptr [0x11afb2f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb2f4))), 0x11ad7730u);
  /* 11ad7730 mov ecx, dword ptr [0x11af954c] */
  ECX = (r32((uint32_t)(0x11af954c)));
  /* 11ad7736 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad773c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad773e je 0x11ad775c */
  if (C.zf) goto L_11ad775c;
  /* 11ad7740 mov edx, dword ptr [0x11af954c] */
  EDX = (r32((uint32_t)(0x11af954c)));
  /* 11ad7746 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad774c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad774e je 0x11ad775c */
  if (C.zf) goto L_11ad775c;
  /* 11ad7750 mov eax, dword ptr [0x11af954c] */
  EAX = (r32((uint32_t)(0x11af954c)));
  /* 11ad7755 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad7758 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad775a jne 0x11ad7766 */
  if (!C.zf) goto L_11ad7766;
L_11ad775c:;
  /* 11ad775c mov dword ptr [0x11af954c], 0 */
  w32((uint32_t)(0x11af954c), (0x0u));
L_11ad7766:;
  /* 11ad7766 mov esp, ebp */
  ESP = (EBP);
  /* 11ad7768 pop ebp */
  EBP = (pop32());
  /* 11ad7769 ret  */
  ESPCHK(0x11ad76b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017770 @ 0x11ad7770 (804 bytes, 220 insns) */
void f_11ad7770(void) {
  FTRACE(0x11ad7770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad7770 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad7771 mov ebp, esp */
  EBP = (ESP);
  /* 11ad7773 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad7776 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad7779 push eax */
  push32((uint32_t)(EAX));
  /* 11ad777a call 0x11ad80d0 */
  push32(0x11ad777fu); f_11ad80d0();
  /* 11ad777f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7782 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11ad7785 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11ad7787 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11ad778a push ecx */
  push32((uint32_t)(ECX));
  /* 11ad778b mov edx, dword ptr [0x11af9538] */
  EDX = (r32((uint32_t)(0x11af9538)));
  /* 11ad7791 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ad7793 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad7795 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad779b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad77a1 push edx */
  push32((uint32_t)(EDX));
  /* 11ad77a2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ad77a5 push eax */
  push32((uint32_t)(EAX));
  /* 11ad77a6 call dword ptr [0x11af9554] */
  call_ind((uint32_t)(r32((uint32_t)(0x11af9554))), 0x11ad77acu);
  /* 11ad77ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad77ae jne 0x11ad77c4 */
  if (!C.zf) goto L_11ad77c4;
  /* 11ad77b0 mov dword ptr [0x11af954c], 0 */
  w32((uint32_t)(0x11af954c), (0x0u));
  /* 11ad77ba mov eax, 1 */
  EAX = (0x1u);
  /* 11ad77bf jmp 0x11ad7a8e */
  goto L_11ad7a8e;
L_11ad77c4:;
  /* 11ad77c4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11ad77c7 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad77c8 mov edx, dword ptr [0x11af9548] */
  EDX = (r32((uint32_t)(0x11af9548)));
  /* 11ad77ce push edx */
  push32((uint32_t)(EDX));
  /* 11ad77cf call 0x11ada6a0 */
  push32(0x11ad77d4u); f_11ada6a0();
  /* 11ad77d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad77d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad77d9 jne 0x11ad78ff */
  if (!C.zf) goto L_11ad78ff;
  /* 11ad77df push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11ad77e1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11ad77e4 push eax */
  push32((uint32_t)(EAX));
  /* 11ad77e5 mov ecx, dword ptr [0x11af9540] */
  ECX = (r32((uint32_t)(0x11af9540)));
  /* 11ad77eb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ad77ed sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad77ef and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad77f5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad77fb push ecx */
  push32((uint32_t)(ECX));
  /* 11ad77fc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ad77ff push edx */
  push32((uint32_t)(EDX));
  /* 11ad7800 call dword ptr [0x11af9554] */
  call_ind((uint32_t)(r32((uint32_t)(0x11af9554))), 0x11ad7806u);
  /* 11ad7806 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad7808 jne 0x11ad781e */
  if (!C.zf) goto L_11ad781e;
  /* 11ad780a mov dword ptr [0x11af954c], 0 */
  w32((uint32_t)(0x11af954c), (0x0u));
  /* 11ad7814 mov eax, 1 */
  EAX = (0x1u);
  /* 11ad7819 jmp 0x11ad7a8e */
  goto L_11ad7a8e;
L_11ad781e:;
  /* 11ad781e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11ad7821 push eax */
  push32((uint32_t)(EAX));
  /* 11ad7822 mov ecx, dword ptr [0x11af9544] */
  ECX = (r32((uint32_t)(0x11af9544)));
  /* 11ad7828 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad7829 call 0x11ada6a0 */
  push32(0x11ad782eu); f_11ada6a0();
  /* 11ad782e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7831 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad7833 jne 0x11ad7860 */
  if (!C.zf) goto L_11ad7860;
  /* 11ad7835 mov edx, dword ptr [0x11af954c] */
  EDX = (r32((uint32_t)(0x11af954c)));
  /* 11ad783b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad7841 mov dword ptr [0x11af954c], edx */
  w32((uint32_t)(0x11af954c), (EDX));
  /* 11ad7847 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ad784a mov dword ptr [0x11af9550], eax */
  w32((uint32_t)(0x11af9550), (EAX));
  /* 11ad784f mov ecx, dword ptr [0x11af9550] */
  ECX = (r32((uint32_t)(0x11af9550)));
  /* 11ad7855 mov dword ptr [0x11af9534], ecx */
  w32((uint32_t)(0x11af9534), (ECX));
  /* 11ad785b jmp 0x11ad78ff */
  goto L_11ad78ff;
L_11ad7860:;
  /* 11ad7860 mov edx, dword ptr [0x11af954c] */
  EDX = (r32((uint32_t)(0x11af954c)));
  /* 11ad7866 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad7869 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad786b jne 0x11ad78ff */
  if (!C.zf) goto L_11ad78ff;
  /* 11ad7871 cmp dword ptr [0x11af953c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af953c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7878 je 0x11ad78cd */
  if (C.zf) goto L_11ad78cd;
  /* 11ad787a mov eax, dword ptr [0x11af953c] */
  EAX = (r32((uint32_t)(0x11af953c)));
  /* 11ad787f push eax */
  push32((uint32_t)(EAX));
  /* 11ad7880 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11ad7883 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad7884 mov edx, dword ptr [0x11af9544] */
  EDX = (r32((uint32_t)(0x11af9544)));
  /* 11ad788a push edx */
  push32((uint32_t)(EDX));
  /* 11ad788b call 0x11ada770 */
  push32(0x11ad7890u); f_11ada770();
  /* 11ad7890 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7893 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad7895 jne 0x11ad78cd */
  if (!C.zf) goto L_11ad78cd;
  /* 11ad7897 mov eax, dword ptr [0x11af954c] */
  EAX = (r32((uint32_t)(0x11af954c)));
  /* 11ad789c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11ad789e mov dword ptr [0x11af954c], eax */
  w32((uint32_t)(0x11af954c), (EAX));
  /* 11ad78a3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ad78a6 mov dword ptr [0x11af9550], ecx */
  w32((uint32_t)(0x11af9550), (ECX));
  /* 11ad78ac mov edx, dword ptr [0x11af9544] */
  EDX = (r32((uint32_t)(0x11af9544)));
  /* 11ad78b2 push edx */
  push32((uint32_t)(EDX));
  /* 11ad78b3 call 0x11acc490 */
  push32(0x11ad78b8u); f_11acc490();
  /* 11ad78b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad78bb cmp eax, dword ptr [0x11af953c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11af953c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad78c1 jne 0x11ad78cb */
  if (!C.zf) goto L_11ad78cb;
  /* 11ad78c3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ad78c6 mov dword ptr [0x11af9534], eax */
  w32((uint32_t)(0x11af9534), (EAX));
L_11ad78cb:;
  /* 11ad78cb jmp 0x11ad78ff */
  goto L_11ad78ff;
L_11ad78cd:;
  /* 11ad78cd mov ecx, dword ptr [0x11af954c] */
  ECX = (r32((uint32_t)(0x11af954c)));
  /* 11ad78d3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad78d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad78d8 jne 0x11ad78ff */
  if (!C.zf) goto L_11ad78ff;
  /* 11ad78da mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ad78dd push edx */
  push32((uint32_t)(EDX));
  /* 11ad78de call 0x11ad7e10 */
  push32(0x11ad78e3u); f_11ad7e10();
  /* 11ad78e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad78e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad78e8 je 0x11ad78ff */
  if (C.zf) goto L_11ad78ff;
  /* 11ad78ea mov eax, dword ptr [0x11af954c] */
  EAX = (r32((uint32_t)(0x11af954c)));
  /* 11ad78ef or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11ad78f1 mov dword ptr [0x11af954c], eax */
  w32((uint32_t)(0x11af954c), (EAX));
  /* 11ad78f6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ad78f9 mov dword ptr [0x11af9550], ecx */
  w32((uint32_t)(0x11af9550), (ECX));
L_11ad78ff:;
  /* 11ad78ff mov edx, dword ptr [0x11af954c] */
  EDX = (r32((uint32_t)(0x11af954c)));
  /* 11ad7905 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad790b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7911 je 0x11ad7a81 */
  if (C.zf) goto L_11ad7a81;
  /* 11ad7917 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11ad7919 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11ad791c push eax */
  push32((uint32_t)(EAX));
  /* 11ad791d mov ecx, dword ptr [0x11af9540] */
  ECX = (r32((uint32_t)(0x11af9540)));
  /* 11ad7923 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ad7925 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad7927 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad792d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7933 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad7934 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ad7937 push edx */
  push32((uint32_t)(EDX));
  /* 11ad7938 call dword ptr [0x11af9554] */
  call_ind((uint32_t)(r32((uint32_t)(0x11af9554))), 0x11ad793eu);
  /* 11ad793e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad7940 jne 0x11ad7956 */
  if (!C.zf) goto L_11ad7956;
  /* 11ad7942 mov dword ptr [0x11af954c], 0 */
  w32((uint32_t)(0x11af954c), (0x0u));
  /* 11ad794c mov eax, 1 */
  EAX = (0x1u);
  /* 11ad7951 jmp 0x11ad7a8e */
  goto L_11ad7a8e;
L_11ad7956:;
  /* 11ad7956 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11ad7959 push eax */
  push32((uint32_t)(EAX));
  /* 11ad795a mov ecx, dword ptr [0x11af9544] */
  ECX = (r32((uint32_t)(0x11af9544)));
  /* 11ad7960 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad7961 call 0x11ada6a0 */
  push32(0x11ad7966u); f_11ada6a0();
  /* 11ad7966 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7969 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad796b jne 0x11ad7a20 */
  if (!C.zf) goto L_11ad7a20;
  /* 11ad7971 mov edx, dword ptr [0x11af954c] */
  EDX = (r32((uint32_t)(0x11af954c)));
  /* 11ad7977 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11ad797a mov dword ptr [0x11af954c], edx */
  w32((uint32_t)(0x11af954c), (EDX));
  /* 11ad7980 cmp dword ptr [0x11af9540], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9540))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7987 je 0x11ad79aa */
  if (C.zf) goto L_11ad79aa;
  /* 11ad7989 mov eax, dword ptr [0x11af954c] */
  EAX = (r32((uint32_t)(0x11af954c)));
  /* 11ad798e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11ad7991 mov dword ptr [0x11af954c], eax */
  w32((uint32_t)(0x11af954c), (EAX));
  /* 11ad7996 cmp dword ptr [0x11af9534], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9534))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad799d jne 0x11ad79a8 */
  if (!C.zf) goto L_11ad79a8;
  /* 11ad799f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ad79a2 mov dword ptr [0x11af9534], ecx */
  w32((uint32_t)(0x11af9534), (ECX));
L_11ad79a8:;
  /* 11ad79a8 jmp 0x11ad7a1e */
  goto L_11ad7a1e;
L_11ad79aa:;
  /* 11ad79aa cmp dword ptr [0x11af953c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af953c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad79b1 je 0x11ad79ff */
  if (C.zf) goto L_11ad79ff;
  /* 11ad79b3 mov edx, dword ptr [0x11af9544] */
  EDX = (r32((uint32_t)(0x11af9544)));
  /* 11ad79b9 push edx */
  push32((uint32_t)(EDX));
  /* 11ad79ba call 0x11acc490 */
  push32(0x11ad79bfu); f_11acc490();
  /* 11ad79bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad79c2 cmp eax, dword ptr [0x11af953c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11af953c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad79c8 jne 0x11ad79ff */
  if (!C.zf) goto L_11ad79ff;
  /* 11ad79ca push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad79cc mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ad79cf push eax */
  push32((uint32_t)(EAX));
  /* 11ad79d0 call 0x11ad7e60 */
  push32(0x11ad79d5u); f_11ad7e60();
  /* 11ad79d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad79d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad79da je 0x11ad79fd */
  if (C.zf) goto L_11ad79fd;
  /* 11ad79dc mov ecx, dword ptr [0x11af954c] */
  ECX = (r32((uint32_t)(0x11af954c)));
  /* 11ad79e2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11ad79e5 mov dword ptr [0x11af954c], ecx */
  w32((uint32_t)(0x11af954c), (ECX));
  /* 11ad79eb cmp dword ptr [0x11af9534], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9534))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad79f2 jne 0x11ad79fd */
  if (!C.zf) goto L_11ad79fd;
  /* 11ad79f4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ad79f7 mov dword ptr [0x11af9534], edx */
  w32((uint32_t)(0x11af9534), (EDX));
L_11ad79fd:;
  /* 11ad79fd jmp 0x11ad7a1e */
  goto L_11ad7a1e;
L_11ad79ff:;
  /* 11ad79ff mov eax, dword ptr [0x11af954c] */
  EAX = (r32((uint32_t)(0x11af954c)));
  /* 11ad7a04 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11ad7a07 mov dword ptr [0x11af954c], eax */
  w32((uint32_t)(0x11af954c), (EAX));
  /* 11ad7a0c cmp dword ptr [0x11af9534], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9534))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7a13 jne 0x11ad7a1e */
  if (!C.zf) goto L_11ad7a1e;
  /* 11ad7a15 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ad7a18 mov dword ptr [0x11af9534], ecx */
  w32((uint32_t)(0x11af9534), (ECX));
L_11ad7a1e:;
  /* 11ad7a1e jmp 0x11ad7a81 */
  goto L_11ad7a81;
L_11ad7a20:;
  /* 11ad7a20 cmp dword ptr [0x11af9540], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9540))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7a27 jne 0x11ad7a81 */
  if (!C.zf) goto L_11ad7a81;
  /* 11ad7a29 cmp dword ptr [0x11af953c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af953c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7a30 je 0x11ad7a81 */
  if (C.zf) goto L_11ad7a81;
  /* 11ad7a32 mov edx, dword ptr [0x11af953c] */
  EDX = (r32((uint32_t)(0x11af953c)));
  /* 11ad7a38 push edx */
  push32((uint32_t)(EDX));
  /* 11ad7a39 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11ad7a3c push eax */
  push32((uint32_t)(EAX));
  /* 11ad7a3d mov ecx, dword ptr [0x11af9544] */
  ECX = (r32((uint32_t)(0x11af9544)));
  /* 11ad7a43 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad7a44 call 0x11ada770 */
  push32(0x11ad7a49u); f_11ada770();
  /* 11ad7a49 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7a4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad7a4e jne 0x11ad7a81 */
  if (!C.zf) goto L_11ad7a81;
  /* 11ad7a50 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad7a52 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ad7a55 push edx */
  push32((uint32_t)(EDX));
  /* 11ad7a56 call 0x11ad7e60 */
  push32(0x11ad7a5bu); f_11ad7e60();
  /* 11ad7a5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7a5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad7a60 je 0x11ad7a81 */
  if (C.zf) goto L_11ad7a81;
  /* 11ad7a62 mov eax, dword ptr [0x11af954c] */
  EAX = (r32((uint32_t)(0x11af954c)));
  /* 11ad7a67 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11ad7a6a mov dword ptr [0x11af954c], eax */
  w32((uint32_t)(0x11af954c), (EAX));
  /* 11ad7a6f cmp dword ptr [0x11af9534], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9534))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7a76 jne 0x11ad7a81 */
  if (!C.zf) goto L_11ad7a81;
  /* 11ad7a78 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ad7a7b mov dword ptr [0x11af9534], ecx */
  w32((uint32_t)(0x11af9534), (ECX));
L_11ad7a81:;
  /* 11ad7a81 mov eax, dword ptr [0x11af954c] */
  EAX = (r32((uint32_t)(0x11af954c)));
  /* 11ad7a86 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad7a89 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ad7a8b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad7a8d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11ad7a8e:;
  /* 11ad7a8e mov esp, ebp */
  ESP = (EBP);
  /* 11ad7a90 pop ebp */
  EBP = (pop32());
  /* 11ad7a91 ret 4 */
  ESPCHK(0x11ad7770u, _esp0);
  ESP += 8; return;
}

/* FUN_10017aa0 @ 0x11ad7aa0 (116 bytes, 33 insns) */
void f_11ad7aa0(void) {
  FTRACE(0x11ad7aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad7aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad7aa1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad7aa3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad7aa4 mov eax, dword ptr [0x11af9544] */
  EAX = (r32((uint32_t)(0x11af9544)));
  /* 11ad7aa9 push eax */
  push32((uint32_t)(EAX));
  /* 11ad7aaa call 0x11acc490 */
  push32(0x11ad7aafu); f_11acc490();
  /* 11ad7aaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7ab2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad7ab4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7ab7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11ad7aba mov dword ptr [0x11af9540], ecx */
  w32((uint32_t)(0x11af9540), (ECX));
  /* 11ad7ac0 cmp dword ptr [0x11af9540], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9540))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7ac7 je 0x11ad7ad2 */
  if (C.zf) goto L_11ad7ad2;
  /* 11ad7ac9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11ad7ad0 jmp 0x11ad7ae4 */
  goto L_11ad7ae4;
L_11ad7ad2:;
  /* 11ad7ad2 mov edx, dword ptr [0x11af9544] */
  EDX = (r32((uint32_t)(0x11af9544)));
  /* 11ad7ad8 push edx */
  push32((uint32_t)(EDX));
  /* 11ad7ad9 call 0x11ad8150 */
  push32(0x11ad7adeu); f_11ad8150();
  /* 11ad7ade add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7ae1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ad7ae4:;
  /* 11ad7ae4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad7ae7 mov dword ptr [0x11af953c], eax */
  w32((uint32_t)(0x11af953c), (EAX));
  /* 11ad7aec push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad7aee push 0x11ad7b20 */
  push32((uint32_t)(0x11ad7b20u));
  /* 11ad7af3 call dword ptr [0x11afb2f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb2f4))), 0x11ad7af9u);
  /* 11ad7af9 mov ecx, dword ptr [0x11af954c] */
  ECX = (r32((uint32_t)(0x11af954c)));
  /* 11ad7aff and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad7b02 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad7b04 jne 0x11ad7b10 */
  if (!C.zf) goto L_11ad7b10;
  /* 11ad7b06 mov dword ptr [0x11af954c], 0 */
  w32((uint32_t)(0x11af954c), (0x0u));
L_11ad7b10:;
  /* 11ad7b10 mov esp, ebp */
  ESP = (EBP);
  /* 11ad7b12 pop ebp */
  EBP = (pop32());
  /* 11ad7b13 ret  */
  ESPCHK(0x11ad7aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017b20 @ 0x11ad7b20 (287 bytes, 86 insns) */
void f_11ad7b20(void) {
  FTRACE(0x11ad7b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad7b20 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad7b21 mov ebp, esp */
  EBP = (ESP);
  /* 11ad7b23 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad7b26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad7b29 push eax */
  push32((uint32_t)(EAX));
  /* 11ad7b2a call 0x11ad80d0 */
  push32(0x11ad7b2fu); f_11ad80d0();
  /* 11ad7b2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7b32 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11ad7b35 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11ad7b37 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11ad7b3a push ecx */
  push32((uint32_t)(ECX));
  /* 11ad7b3b mov edx, dword ptr [0x11af9540] */
  EDX = (r32((uint32_t)(0x11af9540)));
  /* 11ad7b41 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ad7b43 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad7b45 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad7b4b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7b51 push edx */
  push32((uint32_t)(EDX));
  /* 11ad7b52 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ad7b55 push eax */
  push32((uint32_t)(EAX));
  /* 11ad7b56 call dword ptr [0x11af9554] */
  call_ind((uint32_t)(r32((uint32_t)(0x11af9554))), 0x11ad7b5cu);
  /* 11ad7b5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad7b5e jne 0x11ad7b74 */
  if (!C.zf) goto L_11ad7b74;
  /* 11ad7b60 mov dword ptr [0x11af954c], 0 */
  w32((uint32_t)(0x11af954c), (0x0u));
  /* 11ad7b6a mov eax, 1 */
  EAX = (0x1u);
  /* 11ad7b6f jmp 0x11ad7c39 */
  goto L_11ad7c39;
L_11ad7b74:;
  /* 11ad7b74 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11ad7b77 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad7b78 mov edx, dword ptr [0x11af9544] */
  EDX = (r32((uint32_t)(0x11af9544)));
  /* 11ad7b7e push edx */
  push32((uint32_t)(EDX));
  /* 11ad7b7f call 0x11ada6a0 */
  push32(0x11ad7b84u); f_11ada6a0();
  /* 11ad7b84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7b87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad7b89 jne 0x11ad7bc9 */
  if (!C.zf) goto L_11ad7bc9;
  /* 11ad7b8b cmp dword ptr [0x11af9540], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9540))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7b92 jne 0x11ad7ba6 */
  if (!C.zf) goto L_11ad7ba6;
  /* 11ad7b94 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad7b96 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ad7b99 push eax */
  push32((uint32_t)(EAX));
  /* 11ad7b9a call 0x11ad7e60 */
  push32(0x11ad7b9fu); f_11ad7e60();
  /* 11ad7b9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7ba2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad7ba4 je 0x11ad7bc7 */
  if (C.zf) goto L_11ad7bc7;
L_11ad7ba6:;
  /* 11ad7ba6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ad7ba9 mov dword ptr [0x11af9550], ecx */
  w32((uint32_t)(0x11af9550), (ECX));
  /* 11ad7baf mov edx, dword ptr [0x11af9550] */
  EDX = (r32((uint32_t)(0x11af9550)));
  /* 11ad7bb5 mov dword ptr [0x11af9534], edx */
  w32((uint32_t)(0x11af9534), (EDX));
  /* 11ad7bbb mov eax, dword ptr [0x11af954c] */
  EAX = (r32((uint32_t)(0x11af954c)));
  /* 11ad7bc0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11ad7bc2 mov dword ptr [0x11af954c], eax */
  w32((uint32_t)(0x11af954c), (EAX));
L_11ad7bc7:;
  /* 11ad7bc7 jmp 0x11ad7c2c */
  goto L_11ad7c2c;
L_11ad7bc9:;
  /* 11ad7bc9 cmp dword ptr [0x11af9540], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9540))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7bd0 jne 0x11ad7c2c */
  if (!C.zf) goto L_11ad7c2c;
  /* 11ad7bd2 cmp dword ptr [0x11af953c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af953c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7bd9 je 0x11ad7c2c */
  if (C.zf) goto L_11ad7c2c;
  /* 11ad7bdb mov ecx, dword ptr [0x11af953c] */
  ECX = (r32((uint32_t)(0x11af953c)));
  /* 11ad7be1 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad7be2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 11ad7be5 push edx */
  push32((uint32_t)(EDX));
  /* 11ad7be6 mov eax, dword ptr [0x11af9544] */
  EAX = (r32((uint32_t)(0x11af9544)));
  /* 11ad7beb push eax */
  push32((uint32_t)(EAX));
  /* 11ad7bec call 0x11ada770 */
  push32(0x11ad7bf1u); f_11ada770();
  /* 11ad7bf1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7bf4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad7bf6 jne 0x11ad7c2c */
  if (!C.zf) goto L_11ad7c2c;
  /* 11ad7bf8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad7bfa mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ad7bfd push ecx */
  push32((uint32_t)(ECX));
  /* 11ad7bfe call 0x11ad7e60 */
  push32(0x11ad7c03u); f_11ad7e60();
  /* 11ad7c03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7c06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad7c08 je 0x11ad7c2c */
  if (C.zf) goto L_11ad7c2c;
  /* 11ad7c0a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ad7c0d mov dword ptr [0x11af9550], edx */
  w32((uint32_t)(0x11af9550), (EDX));
  /* 11ad7c13 mov eax, dword ptr [0x11af9550] */
  EAX = (r32((uint32_t)(0x11af9550)));
  /* 11ad7c18 mov dword ptr [0x11af9534], eax */
  w32((uint32_t)(0x11af9534), (EAX));
  /* 11ad7c1d mov ecx, dword ptr [0x11af954c] */
  ECX = (r32((uint32_t)(0x11af954c)));
  /* 11ad7c23 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad7c26 mov dword ptr [0x11af954c], ecx */
  w32((uint32_t)(0x11af954c), (ECX));
L_11ad7c2c:;
  /* 11ad7c2c mov eax, dword ptr [0x11af954c] */
  EAX = (r32((uint32_t)(0x11af954c)));
  /* 11ad7c31 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad7c34 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ad7c36 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad7c38 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11ad7c39:;
  /* 11ad7c39 mov esp, ebp */
  ESP = (EBP);
  /* 11ad7c3b pop ebp */
  EBP = (pop32());
  /* 11ad7c3c ret 4 */
  ESPCHK(0x11ad7b20u, _esp0);
  ESP += 8; return;
}

/* FUN_10017c40 @ 0x11ad7c40 (69 bytes, 20 insns) */
void f_11ad7c40(void) {
  FTRACE(0x11ad7c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad7c40 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad7c41 mov ebp, esp */
  EBP = (ESP);
  /* 11ad7c43 mov eax, dword ptr [0x11af9548] */
  EAX = (r32((uint32_t)(0x11af9548)));
  /* 11ad7c48 push eax */
  push32((uint32_t)(EAX));
  /* 11ad7c49 call 0x11acc490 */
  push32(0x11ad7c4eu); f_11acc490();
  /* 11ad7c4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7c51 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad7c53 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7c56 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11ad7c59 mov dword ptr [0x11af9538], ecx */
  w32((uint32_t)(0x11af9538), (ECX));
  /* 11ad7c5f push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad7c61 push 0x11ad7c90 */
  push32((uint32_t)(0x11ad7c90u));
  /* 11ad7c66 call dword ptr [0x11afb2f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb2f4))), 0x11ad7c6cu);
  /* 11ad7c6c mov edx, dword ptr [0x11af954c] */
  EDX = (r32((uint32_t)(0x11af954c)));
  /* 11ad7c72 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad7c75 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad7c77 jne 0x11ad7c83 */
  if (!C.zf) goto L_11ad7c83;
  /* 11ad7c79 mov dword ptr [0x11af954c], 0 */
  w32((uint32_t)(0x11af954c), (0x0u));
L_11ad7c83:;
  /* 11ad7c83 pop ebp */
  EBP = (pop32());
  /* 11ad7c84 ret  */
  ESPCHK(0x11ad7c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10017c90 @ 0x11ad7c90 (172 bytes, 54 insns) */
void f_11ad7c90(void) {
  FTRACE(0x11ad7c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad7c90 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad7c91 mov ebp, esp */
  EBP = (ESP);
  /* 11ad7c93 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad7c96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad7c99 push eax */
  push32((uint32_t)(EAX));
  /* 11ad7c9a call 0x11ad80d0 */
  push32(0x11ad7c9fu); f_11ad80d0();
  /* 11ad7c9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7ca2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11ad7ca5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11ad7ca7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11ad7caa push ecx */
  push32((uint32_t)(ECX));
  /* 11ad7cab mov edx, dword ptr [0x11af9538] */
  EDX = (r32((uint32_t)(0x11af9538)));
  /* 11ad7cb1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ad7cb3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad7cb5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad7cbb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7cc1 push edx */
  push32((uint32_t)(EDX));
  /* 11ad7cc2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ad7cc5 push eax */
  push32((uint32_t)(EAX));
  /* 11ad7cc6 call dword ptr [0x11af9554] */
  call_ind((uint32_t)(r32((uint32_t)(0x11af9554))), 0x11ad7cccu);
  /* 11ad7ccc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad7cce jne 0x11ad7ce1 */
  if (!C.zf) goto L_11ad7ce1;
  /* 11ad7cd0 mov dword ptr [0x11af954c], 0 */
  w32((uint32_t)(0x11af954c), (0x0u));
  /* 11ad7cda mov eax, 1 */
  EAX = (0x1u);
  /* 11ad7cdf jmp 0x11ad7d36 */
  goto L_11ad7d36;
L_11ad7ce1:;
  /* 11ad7ce1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11ad7ce4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad7ce5 mov edx, dword ptr [0x11af9548] */
  EDX = (r32((uint32_t)(0x11af9548)));
  /* 11ad7ceb push edx */
  push32((uint32_t)(EDX));
  /* 11ad7cec call 0x11ada6a0 */
  push32(0x11ad7cf1u); f_11ada6a0();
  /* 11ad7cf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7cf4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad7cf6 jne 0x11ad7d29 */
  if (!C.zf) goto L_11ad7d29;
  /* 11ad7cf8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ad7cfb push eax */
  push32((uint32_t)(EAX));
  /* 11ad7cfc call 0x11ad7e10 */
  push32(0x11ad7d01u); f_11ad7e10();
  /* 11ad7d01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7d04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad7d06 je 0x11ad7d29 */
  if (C.zf) goto L_11ad7d29;
  /* 11ad7d08 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ad7d0b mov dword ptr [0x11af9550], ecx */
  w32((uint32_t)(0x11af9550), (ECX));
  /* 11ad7d11 mov edx, dword ptr [0x11af9550] */
  EDX = (r32((uint32_t)(0x11af9550)));
  /* 11ad7d17 mov dword ptr [0x11af9534], edx */
  w32((uint32_t)(0x11af9534), (EDX));
  /* 11ad7d1d mov eax, dword ptr [0x11af954c] */
  EAX = (r32((uint32_t)(0x11af954c)));
  /* 11ad7d22 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11ad7d24 mov dword ptr [0x11af954c], eax */
  w32((uint32_t)(0x11af954c), (EAX));
L_11ad7d29:;
  /* 11ad7d29 mov eax, dword ptr [0x11af954c] */
  EAX = (r32((uint32_t)(0x11af954c)));
  /* 11ad7d2e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad7d31 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ad7d33 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad7d35 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11ad7d36:;
  /* 11ad7d36 mov esp, ebp */
  ESP = (EBP);
  /* 11ad7d38 pop ebp */
  EBP = (pop32());
  /* 11ad7d39 ret 4 */
  ESPCHK(0x11ad7c90u, _esp0);
  ESP += 8; return;
}

/* FUN_10017d40 @ 0x11ad7d40 (43 bytes, 11 insns) */
void f_11ad7d40(void) {
  FTRACE(0x11ad7d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad7d40 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad7d41 mov ebp, esp */
  EBP = (ESP);
  /* 11ad7d43 mov eax, dword ptr [0x11af954c] */
  EAX = (r32((uint32_t)(0x11af954c)));
  /* 11ad7d48 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad7d4d mov dword ptr [0x11af954c], eax */
  w32((uint32_t)(0x11af954c), (EAX));
  /* 11ad7d52 call dword ptr [0x11afb2fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb2fc))), 0x11ad7d58u);
  /* 11ad7d58 mov dword ptr [0x11af9550], eax */
  w32((uint32_t)(0x11af9550), (EAX));
  /* 11ad7d5d mov ecx, dword ptr [0x11af9550] */
  ECX = (r32((uint32_t)(0x11af9550)));
  /* 11ad7d63 mov dword ptr [0x11af9534], ecx */
  w32((uint32_t)(0x11af9534), (ECX));
  /* 11ad7d69 pop ebp */
  EBP = (pop32());
  /* 11ad7d6a ret  */
  ESPCHK(0x11ad7d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10017d70 @ 0x11ad7d70 (155 bytes, 57 insns) */
void f_11ad7d70(void) {
  FTRACE(0x11ad7d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad7d70 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad7d71 mov ebp, esp */
  EBP = (ESP);
  /* 11ad7d73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad7d76 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7d7a je 0x11ad7d9b */
  if (C.zf) goto L_11ad7d9b;
  /* 11ad7d7c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad7d7f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ad7d82 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad7d84 je 0x11ad7d9b */
  if (C.zf) goto L_11ad7d9b;
  /* 11ad7d86 push 0x11af4984 */
  push32((uint32_t)(0x11af4984u));
  /* 11ad7d8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad7d8e push edx */
  push32((uint32_t)(EDX));
  /* 11ad7d8f call 0x11ad72d0 */
  push32(0x11ad7d94u); f_11ad72d0();
  /* 11ad7d94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7d97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad7d99 jne 0x11ad7dc3 */
  if (!C.zf) goto L_11ad7dc3;
L_11ad7d9b:;
  /* 11ad7d9b push 8 */
  push32((uint32_t)(0x8u));
  /* 11ad7d9d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11ad7da0 push eax */
  push32((uint32_t)(EAX));
  /* 11ad7da1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11ad7da6 mov ecx, dword ptr [0x11af9550] */
  ECX = (r32((uint32_t)(0x11af9550)));
  /* 11ad7dac push ecx */
  push32((uint32_t)(ECX));
  /* 11ad7dad call dword ptr [0x11af9554] */
  call_ind((uint32_t)(r32((uint32_t)(0x11af9554))), 0x11ad7db3u);
  /* 11ad7db3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad7db5 jne 0x11ad7dbb */
  if (!C.zf) goto L_11ad7dbb;
  /* 11ad7db7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad7db9 jmp 0x11ad7e07 */
  goto L_11ad7e07;
L_11ad7dbb:;
  /* 11ad7dbb lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 11ad7dbe mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11ad7dc1 jmp 0x11ad7dfb */
  goto L_11ad7dfb;
L_11ad7dc3:;
  /* 11ad7dc3 push 0x11af4980 */
  push32((uint32_t)(0x11af4980u));
  /* 11ad7dc8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad7dcb push eax */
  push32((uint32_t)(EAX));
  /* 11ad7dcc call 0x11ad72d0 */
  push32(0x11ad7dd1u); f_11ad72d0();
  /* 11ad7dd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7dd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad7dd6 jne 0x11ad7dfb */
  if (!C.zf) goto L_11ad7dfb;
  /* 11ad7dd8 push 8 */
  push32((uint32_t)(0x8u));
  /* 11ad7dda lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11ad7ddd push ecx */
  push32((uint32_t)(ECX));
  /* 11ad7dde push 0xb */
  push32((uint32_t)(0xbu));
  /* 11ad7de0 mov edx, dword ptr [0x11af9550] */
  EDX = (r32((uint32_t)(0x11af9550)));
  /* 11ad7de6 push edx */
  push32((uint32_t)(EDX));
  /* 11ad7de7 call dword ptr [0x11af9554] */
  call_ind((uint32_t)(r32((uint32_t)(0x11af9554))), 0x11ad7dedu);
  /* 11ad7ded test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad7def jne 0x11ad7df5 */
  if (!C.zf) goto L_11ad7df5;
  /* 11ad7df1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad7df3 jmp 0x11ad7e07 */
  goto L_11ad7e07;
L_11ad7df5:;
  /* 11ad7df5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11ad7df8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11ad7dfb:;
  /* 11ad7dfb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad7dfe push ecx */
  push32((uint32_t)(ECX));
  /* 11ad7dff call 0x11ada880 */
  push32(0x11ad7e04u); f_11ada880();
  /* 11ad7e04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ad7e07:;
  /* 11ad7e07 mov esp, ebp */
  ESP = (EBP);
  /* 11ad7e09 pop ebp */
  EBP = (pop32());
  /* 11ad7e0a ret  */
  ESPCHK(0x11ad7d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10017e10 @ 0x11ad7e10 (79 bytes, 26 insns) */
void f_11ad7e10(void) {
  FTRACE(0x11ad7e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad7e10 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad7e11 mov ebp, esp */
  EBP = (ESP);
  /* 11ad7e13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad7e16 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 11ad7e1a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11ad7e1e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ad7e25 jmp 0x11ad7e30 */
  goto L_11ad7e30;
L_11ad7e27:;
  /* 11ad7e27 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad7e2a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7e2d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11ad7e30:;
  /* 11ad7e30 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7e34 jae 0x11ad7e56 */
  if (!C.cf) goto L_11ad7e56;
  /* 11ad7e36 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad7e39 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ad7e3f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad7e42 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad7e44 mov cx, word ptr [eax*2 + 0x11af7b74] */
  CX = (r16((uint32_t)(EAX*2 + 0x11af7b74)));
  /* 11ad7e4c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7e4e jne 0x11ad7e54 */
  if (!C.zf) goto L_11ad7e54;
  /* 11ad7e50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad7e52 jmp 0x11ad7e5b */
  goto L_11ad7e5b;
L_11ad7e54:;
  /* 11ad7e54 jmp 0x11ad7e27 */
  goto L_11ad7e27;
L_11ad7e56:;
  /* 11ad7e56 mov eax, 1 */
  EAX = (0x1u);
L_11ad7e5b:;
  /* 11ad7e5b mov esp, ebp */
  ESP = (EBP);
  /* 11ad7e5d pop ebp */
  EBP = (pop32());
  /* 11ad7e5e ret  */
  ESPCHK(0x11ad7e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10017e60 @ 0x11ad7e60 (135 bytes, 48 insns) */
void f_11ad7e60(void) {
  FTRACE(0x11ad7e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad7e60 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad7e61 mov ebp, esp */
  EBP = (ESP);
  /* 11ad7e63 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad7e66 push esi */
  push32((uint32_t)(ESI));
  /* 11ad7e67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad7e6a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad7e6f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad7e74 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad7e79 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 11ad7e7c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad7e81 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad7e84 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11ad7e86 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 11ad7e89 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad7e8a push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad7e8c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad7e8f push edx */
  push32((uint32_t)(EDX));
  /* 11ad7e90 call dword ptr [0x11af9554] */
  call_ind((uint32_t)(r32((uint32_t)(0x11af9554))), 0x11ad7e96u);
  /* 11ad7e96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad7e98 jne 0x11ad7e9e */
  if (!C.zf) goto L_11ad7e9e;
  /* 11ad7e9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad7e9c jmp 0x11ad7ee2 */
  goto L_11ad7ee2;
L_11ad7e9e:;
  /* 11ad7e9e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 11ad7ea1 push eax */
  push32((uint32_t)(EAX));
  /* 11ad7ea2 call 0x11ad80d0 */
  push32(0x11ad7ea7u); f_11ad80d0();
  /* 11ad7ea7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7eaa cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7ead je 0x11ad7edd */
  if (C.zf) goto L_11ad7edd;
  /* 11ad7eaf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7eb3 je 0x11ad7edd */
  if (C.zf) goto L_11ad7edd;
  /* 11ad7eb5 mov ecx, dword ptr [0x11af9544] */
  ECX = (r32((uint32_t)(0x11af9544)));
  /* 11ad7ebb push ecx */
  push32((uint32_t)(ECX));
  /* 11ad7ebc call 0x11ad8150 */
  push32(0x11ad7ec1u); f_11ad8150();
  /* 11ad7ec1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7ec4 mov esi, eax */
  ESI = (EAX);
  /* 11ad7ec6 mov edx, dword ptr [0x11af9544] */
  EDX = (r32((uint32_t)(0x11af9544)));
  /* 11ad7ecc push edx */
  push32((uint32_t)(EDX));
  /* 11ad7ecd call 0x11acc490 */
  push32(0x11ad7ed2u); f_11acc490();
  /* 11ad7ed2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7ed5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7ed7 jne 0x11ad7edd */
  if (!C.zf) goto L_11ad7edd;
  /* 11ad7ed9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad7edb jmp 0x11ad7ee2 */
  goto L_11ad7ee2;
L_11ad7edd:;
  /* 11ad7edd mov eax, 1 */
  EAX = (0x1u);
L_11ad7ee2:;
  /* 11ad7ee2 pop esi */
  ESI = (pop32());
  /* 11ad7ee3 mov esp, ebp */
  ESP = (EBP);
  /* 11ad7ee5 pop ebp */
  EBP = (pop32());
  /* 11ad7ee6 ret  */
  ESPCHK(0x11ad7e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10017ef0 @ 0x11ad7ef0 (77 bytes, 18 insns) */
void f_11ad7ef0(void) {
  FTRACE(0x11ad7ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad7ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad7ef1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad7ef3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad7ef9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 11ad7f03 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 11ad7f09 push eax */
  push32((uint32_t)(EAX));
  /* 11ad7f0a call dword ptr [0x11afb2ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb2ec))), 0x11ad7f10u);
  /* 11ad7f10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad7f12 je 0x11ad7f29 */
  if (C.zf) goto L_11ad7f29;
  /* 11ad7f14 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7f1b jne 0x11ad7f29 */
  if (!C.zf) goto L_11ad7f29;
  /* 11ad7f1d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 11ad7f27 jmp 0x11ad7f33 */
  goto L_11ad7f33;
L_11ad7f29:;
  /* 11ad7f29 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_11ad7f33:;
  /* 11ad7f33 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11ad7f39 mov esp, ebp */
  ESP = (EBP);
  /* 11ad7f3b pop ebp */
  EBP = (pop32());
  /* 11ad7f3c ret  */
  ESPCHK(0x11ad7ef0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x11ad7f40 (388 bytes, 118 insns) */
void f_11ad7f40(void) {
  FTRACE(0x11ad7f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad7f40 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad7f41 mov ebp, esp */
  EBP = (ESP);
  /* 11ad7f43 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad7f46 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11ad7f4d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 11ad7f54 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11ad7f5b:;
  /* 11ad7f5b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad7f5e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7f61 jg 0x11ad80a8 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ad80a8;
  /* 11ad7f67 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad7f6a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7f6d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ad7f6e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad7f70 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11ad7f72 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ad7f75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad7f78 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad7f7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad7f7e cmp edx, dword ptr [ecx + 0x11af76d0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x11af76d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7f84 jne 0x11ad807e */
  if (!C.zf) goto L_11ad807e;
  /* 11ad7f8a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad7f8d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ad7f90 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7f94 ja 0x11ad7fb7 */
  if ((!C.cf&&!C.zf)) goto L_11ad7fb7;
  /* 11ad7f96 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7f9a je 0x11ad8029 */
  if (C.zf) goto L_11ad8029;
  /* 11ad7fa0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7fa4 je 0x11ad7fd4 */
  if (C.zf) goto L_11ad7fd4;
  /* 11ad7fa6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7faa je 0x11ad7ff6 */
  if (C.zf) goto L_11ad7ff6;
  /* 11ad7fac cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7fb0 je 0x11ad8018 */
  if (C.zf) goto L_11ad8018;
  /* 11ad7fb2 jmp 0x11ad8048 */
  goto L_11ad8048;
L_11ad7fb7:;
  /* 11ad7fb7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7fbe je 0x11ad7fe5 */
  if (C.zf) goto L_11ad7fe5;
  /* 11ad7fc0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7fc7 je 0x11ad8007 */
  if (C.zf) goto L_11ad8007;
  /* 11ad7fc9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad7fd0 je 0x11ad803a */
  if (C.zf) goto L_11ad803a;
  /* 11ad7fd2 jmp 0x11ad8048 */
  goto L_11ad8048;
L_11ad7fd4:;
  /* 11ad7fd4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad7fd7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad7fda add ecx, 0x11af76d4 */
  { uint32_t _a=(ECX),_b=(0x11af76d4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad7fe0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ad7fe3 jmp 0x11ad8048 */
  goto L_11ad8048;
L_11ad7fe5:;
  /* 11ad7fe5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad7fe8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad7feb mov eax, dword ptr [edx + 0x11af76dc] */
  EAX = (r32((uint32_t)(EDX + 0x11af76dc)));
  /* 11ad7ff1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ad7ff4 jmp 0x11ad8048 */
  goto L_11ad8048;
L_11ad7ff6:;
  /* 11ad7ff6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad7ff9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad7ffc add ecx, 0x11af76e0 */
  { uint32_t _a=(ECX),_b=(0x11af76e0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8002 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ad8005 jmp 0x11ad8048 */
  goto L_11ad8048;
L_11ad8007:;
  /* 11ad8007 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad800a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad800d mov eax, dword ptr [edx + 0x11af76e4] */
  EAX = (r32((uint32_t)(EDX + 0x11af76e4)));
  /* 11ad8013 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ad8016 jmp 0x11ad8048 */
  goto L_11ad8048;
L_11ad8018:;
  /* 11ad8018 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad801b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad801e add ecx, 0x11af76e8 */
  { uint32_t _a=(ECX),_b=(0x11af76e8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8024 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ad8027 jmp 0x11ad8048 */
  goto L_11ad8048;
L_11ad8029:;
  /* 11ad8029 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad802c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad802f add edx, 0x11af76ec */
  { uint32_t _a=(EDX),_b=(0x11af76ecu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8035 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ad8038 jmp 0x11ad8048 */
  goto L_11ad8048;
L_11ad803a:;
  /* 11ad803a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad803d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad8040 add eax, 0x11af76f4 */
  { uint32_t _a=(EAX),_b=(0x11af76f4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8045 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11ad8048:;
  /* 11ad8048 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad804c je 0x11ad8054 */
  if (C.zf) goto L_11ad8054;
  /* 11ad804e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad8052 jge 0x11ad8056 */
  if ((C.sf==C.of)) goto L_11ad8056;
L_11ad8054:;
  /* 11ad8054 jmp 0x11ad80a8 */
  goto L_11ad80a8;
L_11ad8056:;
  /* 11ad8056 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad8059 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad805c push ecx */
  push32((uint32_t)(ECX));
  /* 11ad805d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad8060 push edx */
  push32((uint32_t)(EDX));
  /* 11ad8061 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad8064 push eax */
  push32((uint32_t)(EAX));
  /* 11ad8065 call 0x11acce80 */
  push32(0x11ad806au); f_11acce80();
  /* 11ad806a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad806d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad8070 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8073 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 11ad8077 mov eax, 1 */
  EAX = (0x1u);
  /* 11ad807c jmp 0x11ad80be */
  goto L_11ad80be;
L_11ad807e:;
  /* 11ad807e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad8081 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad8084 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad8087 cmp eax, dword ptr [edx + 0x11af76d0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x11af76d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad808d jae 0x11ad809a */
  if (!C.cf) goto L_11ad809a;
  /* 11ad808f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad8092 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad8095 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ad8098 jmp 0x11ad80a3 */
  goto L_11ad80a3;
L_11ad809a:;
  /* 11ad809a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad809d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad80a0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11ad80a3:;
  /* 11ad80a3 jmp 0x11ad7f5b */
  goto L_11ad7f5b;
L_11ad80a8:;
  /* 11ad80a8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad80ab push eax */
  push32((uint32_t)(EAX));
  /* 11ad80ac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad80af push ecx */
  push32((uint32_t)(ECX));
  /* 11ad80b0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad80b3 push edx */
  push32((uint32_t)(EDX));
  /* 11ad80b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad80b7 push eax */
  push32((uint32_t)(EAX));
  /* 11ad80b8 call dword ptr [0x11afb2f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb2f8))), 0x11ad80beu);
L_11ad80be:;
  /* 11ad80be mov esp, ebp */
  ESP = (EBP);
  /* 11ad80c0 pop ebp */
  EBP = (pop32());
  /* 11ad80c1 ret 0x10 */
  ESPCHK(0x11ad7f40u, _esp0);
  ESP += 20; return;
}

/* FUN_100180d0 @ 0x11ad80d0 (118 bytes, 42 insns) */
void f_11ad80d0(void) {
  FTRACE(0x11ad80d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad80d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad80d1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad80d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad80d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11ad80dd:;
  /* 11ad80dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad80e0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ad80e2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11ad80e5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11ad80e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad80ec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad80ef mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ad80f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad80f4 je 0x11ad813f */
  if (C.zf) goto L_11ad813f;
  /* 11ad80f6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11ad80fa cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad80fd jl 0x11ad8112 */
  if ((C.sf!=C.of)) goto L_11ad8112;
  /* 11ad80ff movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11ad8103 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad8106 jg 0x11ad8112 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ad8112;
  /* 11ad8108 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ad810b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ad810d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11ad8110 jmp 0x11ad812c */
  goto L_11ad812c;
L_11ad8112:;
  /* 11ad8112 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11ad8116 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad8119 jl 0x11ad812c */
  if ((C.sf!=C.of)) goto L_11ad812c;
  /* 11ad811b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11ad811f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad8122 jg 0x11ad812c */
  if ((!C.zf&&C.sf==C.of)) goto L_11ad812c;
  /* 11ad8124 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ad8127 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ad8129 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_11ad812c:;
  /* 11ad812c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad812f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11ad8132 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11ad8136 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11ad813a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad813d jmp 0x11ad80dd */
  goto L_11ad80dd;
L_11ad813f:;
  /* 11ad813f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad8142 mov esp, ebp */
  ESP = (EBP);
  /* 11ad8144 pop ebp */
  EBP = (pop32());
  /* 11ad8145 ret  */
  ESPCHK(0x11ad80d0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x11ad8150 (101 bytes, 36 insns) */
void f_11ad8150(void) {
  FTRACE(0x11ad8150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad8150 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad8151 mov ebp, esp */
  EBP = (ESP);
  /* 11ad8153 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad8156 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ad815d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad8160 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ad8162 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11ad8165 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad8168 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad816b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11ad816e:;
  /* 11ad816e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11ad8172 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad8175 jl 0x11ad8180 */
  if ((C.sf!=C.of)) goto L_11ad8180;
  /* 11ad8177 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11ad817b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad817e jle 0x11ad8192 */
  if ((C.zf||C.sf!=C.of)) goto L_11ad8192;
L_11ad8180:;
  /* 11ad8180 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11ad8184 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad8187 jl 0x11ad81ae */
  if ((C.sf!=C.of)) goto L_11ad81ae;
  /* 11ad8189 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11ad818d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad8190 jg 0x11ad81ae */
  if ((!C.zf&&C.sf==C.of)) goto L_11ad81ae;
L_11ad8192:;
  /* 11ad8192 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad8195 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8198 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ad819b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad819e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ad81a0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11ad81a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad81a6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad81a9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11ad81ac jmp 0x11ad816e */
  goto L_11ad816e;
L_11ad81ae:;
  /* 11ad81ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad81b1 mov esp, ebp */
  ESP = (EBP);
  /* 11ad81b3 pop ebp */
  EBP = (pop32());
  /* 11ad81b4 ret  */
  ESPCHK(0x11ad8150u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11ad81b8 (32 bytes, 18 insns) */
void f_11ad81b8(void) {
  FTRACE(0x11ad81b8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad81b8 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad81b9 mov ebp, esp */
  EBP = (ESP);
  /* 11ad81bb push ebx */
  push32((uint32_t)(EBX));
  /* 11ad81bc push esi */
  push32((uint32_t)(ESI));
  /* 11ad81bd push edi */
  push32((uint32_t)(EDI));
  /* 11ad81be push ebp */
  push32((uint32_t)(EBP));
  /* 11ad81bf push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad81c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad81c3 push 0x11ad81d0 */
  push32((uint32_t)(0x11ad81d0u));
  /* 11ad81c8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11ad81cb call 0x11adc58e */
  push32(0x11ad81d0u); f_11adc58e();
  /* 11ad81d0 pop ebp */
  EBP = (pop32());
  /* 11ad81d1 pop edi */
  EDI = (pop32());
  /* 11ad81d2 pop esi */
  ESI = (pop32());
  /* 11ad81d3 pop ebx */
  EBX = (pop32());
  /* 11ad81d4 mov esp, ebp */
  ESP = (EBP);
  /* 11ad81d6 pop ebp */
  EBP = (pop32());
  /* 11ad81d7 ret  */
  ESPCHK(0x11ad81b8u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11ad81fa (104 bytes, 33 insns) */
void f_11ad81fa(void) {
  FTRACE(0x11ad81fau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad81fa push ebx */
  push32((uint32_t)(EBX));
  /* 11ad81fb push esi */
  push32((uint32_t)(ESI));
  /* 11ad81fc push edi */
  push32((uint32_t)(EDI));
  /* 11ad81fd mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11ad8201 push eax */
  push32((uint32_t)(EAX));
  /* 11ad8202 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11ad8204 push 0x11ad81d8 */
  push32((uint32_t)(0x11ad81d8u));
  /* 11ad8209 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11ad8210 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11ad8217:;
  /* 11ad8217 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11ad821b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ad821e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11ad8221 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad8224 je 0x11ad8254 */
  if (C.zf) goto L_11ad8254;
  /* 11ad8226 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad822a je 0x11ad8254 */
  if (C.zf) goto L_11ad8254;
  /* 11ad822c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11ad822f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11ad8232 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11ad8236 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11ad8239 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad823e jne 0x11ad8252 */
  if (!C.zf) goto L_11ad8252;
  /* 11ad8240 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11ad8245 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11ad8249 call 0x11ad828e */
  push32(0x11ad824eu); f_11ad828e();
  /* 11ad824e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11ad8252u);
L_11ad8252:;
  /* 11ad8252 jmp 0x11ad8217 */
  goto L_11ad8217;
L_11ad8254:;
  /* 11ad8254 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11ad825b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad825e pop edi */
  EDI = (pop32());
  /* 11ad825f pop esi */
  ESI = (pop32());
  /* 11ad8260 pop ebx */
  EBX = (pop32());
  /* 11ad8261 ret  */
  ESPCHK(0x11ad81fau, _esp0);
  ESP += 4; return;
}

/* FUN_1001828e @ 0x11ad828e (24 bytes, 10 insns) */
void f_11ad828e(void) {
  FTRACE(0x11ad828eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad828e push ebx */
  push32((uint32_t)(EBX));
  /* 11ad828f push ecx */
  push32((uint32_t)(ECX));
  /* 11ad8290 mov ebx, 0x11af7e48 */
  EBX = (0x11af7e48u);
  /* 11ad8295 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad8298 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11ad829b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11ad829e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11ad82a1 pop ecx */
  ECX = (pop32());
  /* 11ad82a2 pop ebx */
  EBX = (pop32());
  /* 11ad82a3 ret 4 */
  ESPCHK(0x11ad828eu, _esp0);
  ESP += 8; return;
}

/* FUN_1001836d @ 0x11ad836d (27 bytes, 11 insns) */
void f_11ad836d(void) {
  FTRACE(0x11ad836du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad836d push ebp */
  push32((uint32_t)(EBP));
  /* 11ad836e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ad8372 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11ad8374 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11ad8377 push eax */
  push32((uint32_t)(EAX));
  /* 11ad8378 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11ad837b push eax */
  push32((uint32_t)(EAX));
  /* 11ad837c call 0x11ad81fa */
  push32(0x11ad8381u); f_11ad81fa();
  /* 11ad8381 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8384 pop ebp */
  EBP = (pop32());
  /* 11ad8385 ret 4 */
  ESPCHK(0x11ad836du, _esp0);
  ESP += 8; return;
}

/* FUN_10018390 @ 0x11ad8390 (1085 bytes, 299 insns) */
void f_11ad8390(void) {
  FTRACE(0x11ad8390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad8390 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad8391 mov ebp, esp */
  EBP = (ESP);
  /* 11ad8393 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad8396 mov word ptr [ebp - 0x2c], 0 */
  w16((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11ad839c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ad83a3 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11ad83aa mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11ad83b1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ad83b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad83bb mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 11ad83bf mov word ptr [ebp - 0x18], cx */
  w16((uint32_t)(EBP + -0x18), (CX));
  /* 11ad83c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad83c6 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 11ad83ca mov word ptr [ebp - 0x20], ax */
  w16((uint32_t)(EBP + -0x20), (AX));
  /* 11ad83ce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad83d1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ad83d7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad83da and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ad83e0 xor ecx, edx */
  { uint32_t _r=(ECX)^(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad83e2 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad83e8 mov word ptr [ebp - 0x2c], cx */
  w16((uint32_t)(EBP + -0x2c), (CX));
  /* 11ad83ec mov ax, word ptr [ebp - 0x18] */
  AX = (r16((uint32_t)(EBP + -0x18)));
  /* 11ad83f0 and ax, 0x7fff */
  { uint32_t _r=(AX)&(0x7fffu); AX = (_r); fl_logic(_r,16); }
  /* 11ad83f4 mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 11ad83f8 mov cx, word ptr [ebp - 0x20] */
  CX = (r16((uint32_t)(EBP + -0x20)));
  /* 11ad83fc and cx, 0x7fff */
  { uint32_t _r=(CX)&(0x7fffu); CX = (_r); fl_logic(_r,16); }
  /* 11ad8401 mov word ptr [ebp - 0x20], cx */
  w16((uint32_t)(EBP + -0x20), (CX));
  /* 11ad8405 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad8408 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ad840e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad8411 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad8416 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8418 mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
  /* 11ad841c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad841f and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ad8425 cmp ecx, 0x7fff */
  { uint32_t _a=(ECX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad842b jge 0x11ad844d */
  if ((C.sf==C.of)) goto L_11ad844d;
  /* 11ad842d mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad8430 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ad8436 cmp edx, 0x7fff */
  { uint32_t _a=(EDX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad843c jge 0x11ad844d */
  if ((C.sf==C.of)) goto L_11ad844d;
  /* 11ad843e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad8441 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad8446 cmp eax, 0xbffd */
  { uint32_t _a=(EAX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad844b jle 0x11ad8484 */
  if ((C.zf||C.sf!=C.of)) goto L_11ad8484;
L_11ad844d:;
  /* 11ad844d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad8450 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ad8456 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ad8458 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad845a and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad8460 add ecx, 0x7fff8000 */
  { uint32_t _a=(ECX),_b=(0x7fff8000u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8466 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad8469 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11ad846c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad846f mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11ad8476 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad8479 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11ad847f jmp 0x11ad87c9 */
  goto L_11ad87c9;
L_11ad8484:;
  /* 11ad8484 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad8487 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ad848d cmp edx, 0x3fbf */
  { uint32_t _a=(EDX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad8493 jg 0x11ad84b7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ad84b7;
  /* 11ad8495 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad8498 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11ad849f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad84a2 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11ad84a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad84ac mov dword ptr [edx], 0 */
  w32((uint32_t)(EDX), (0x0u));
  /* 11ad84b2 jmp 0x11ad87c9 */
  goto L_11ad87c9;
L_11ad84b7:;
  /* 11ad84b7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad84ba and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad84bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad84c1 jne 0x11ad84fd */
  if (!C.zf) goto L_11ad84fd;
  /* 11ad84c3 mov cx, word ptr [ebp - 0x30] */
  CX = (r16((uint32_t)(EBP + -0x30)));
  /* 11ad84c7 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11ad84cb mov word ptr [ebp - 0x30], cx */
  w16((uint32_t)(EBP + -0x30), (CX));
  /* 11ad84cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad84d2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ad84d5 and eax, 0x7fffffff */
  { uint32_t _r=(EAX)&(0x7fffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad84da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad84dc jne 0x11ad84fd */
  if (!C.zf) goto L_11ad84fd;
  /* 11ad84de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad84e1 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad84e5 jne 0x11ad84fd */
  if (!C.zf) goto L_11ad84fd;
  /* 11ad84e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad84ea cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad84ed jne 0x11ad84fd */
  if (!C.zf) goto L_11ad84fd;
  /* 11ad84ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad84f2 mov word ptr [eax + 0xa], 0 */
  w16((uint32_t)(EAX + 0xa), (0x0u));
  /* 11ad84f8 jmp 0x11ad87c9 */
  goto L_11ad87c9;
L_11ad84fd:;
  /* 11ad84fd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad8500 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ad8506 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad8508 jne 0x11ad8559 */
  if (!C.zf) goto L_11ad8559;
  /* 11ad850a mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 11ad850e add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 11ad8512 mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
  /* 11ad8516 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad8519 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ad851c and ecx, 0x7fffffff */
  { uint32_t _r=(ECX)&(0x7fffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ad8522 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad8524 jne 0x11ad8559 */
  if (!C.zf) goto L_11ad8559;
  /* 11ad8526 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad8529 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad852d jne 0x11ad8559 */
  if (!C.zf) goto L_11ad8559;
  /* 11ad852f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad8532 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad8535 jne 0x11ad8559 */
  if (!C.zf) goto L_11ad8559;
  /* 11ad8537 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad853a mov dword ptr [ecx + 8], 0 */
  w32((uint32_t)(ECX + 0x8), (0x0u));
  /* 11ad8541 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad8544 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 11ad854b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad854e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11ad8554 jmp 0x11ad87c9 */
  goto L_11ad87c9;
L_11ad8559:;
  /* 11ad8559 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11ad8560 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11ad8567 jmp 0x11ad8572 */
  goto L_11ad8572;
L_11ad8569:;
  /* 11ad8569 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ad856c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad856f mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
L_11ad8572:;
  /* 11ad8572 cmp dword ptr [ebp - 0x1c], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad8576 jge 0x11ad8631 */
  if ((C.sf==C.of)) goto L_11ad8631;
  /* 11ad857c mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ad857f shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11ad8581 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11ad8584 mov dword ptr [ebp - 8], 8 */
  w32((uint32_t)(EBP + -0x8), (0x8u));
  /* 11ad858b mov eax, 5 */
  EAX = (0x5u);
  /* 11ad8590 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad8593 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11ad8596 jmp 0x11ad85a1 */
  goto L_11ad85a1;
L_11ad8598:;
  /* 11ad8598 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ad859b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad859e mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
L_11ad85a1:;
  /* 11ad85a1 cmp dword ptr [ebp - 0x34], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad85a5 jle 0x11ad8623 */
  if ((C.zf||C.sf!=C.of)) goto L_11ad8623;
  /* 11ad85a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad85aa add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad85ad mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11ad85b0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad85b3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad85b6 mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 11ad85b9 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ad85bc lea edx, [ebp + ecx - 0x14] */
  EDX = ((uint32_t)(EBP + ECX*1 + -0x14));
  /* 11ad85c0 mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 11ad85c3 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ad85c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad85c8 mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11ad85cb mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ad85ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad85d0 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11ad85d3 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad85d6 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 11ad85d9 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11ad85dc push ecx */
  push32((uint32_t)(ECX));
  /* 11ad85dd mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11ad85e0 push edx */
  push32((uint32_t)(EDX));
  /* 11ad85e1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11ad85e4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ad85e6 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad85e7 call 0x11ad3ae0 */
  push32(0x11ad85ecu); f_11ad3ae0();
  /* 11ad85ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad85ef mov dword ptr [ebp - 0x48], eax */
  w32((uint32_t)(EBP + -0x48), (EAX));
  /* 11ad85f2 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad85f6 je 0x11ad860c */
  if (C.zf) goto L_11ad860c;
  /* 11ad85f8 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ad85fb mov ax, word ptr [ebp + edx - 0x10] */
  AX = (r16((uint32_t)(EBP + EDX*1 + -0x10)));
  /* 11ad8600 add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 11ad8604 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ad8607 mov word ptr [ebp + ecx - 0x10], ax */
  w16((uint32_t)(EBP + ECX*1 + -0x10), (AX));
L_11ad860c:;
  /* 11ad860c mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad860f add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8612 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11ad8615 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad8618 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad861b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ad861e jmp 0x11ad8598 */
  goto L_11ad8598;
L_11ad8623:;
  /* 11ad8623 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ad8626 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8629 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11ad862c jmp 0x11ad8569 */
  goto L_11ad8569;
L_11ad8631:;
  /* 11ad8631 mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 11ad8635 sub dx, 0x3ffe */
  { uint32_t _a=(DX),_b=(0x3ffeu),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11ad863a mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
L_11ad863e:;
  /* 11ad863e movsx eax, word ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 11ad8642 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad8644 jle 0x11ad866d */
  if ((C.zf||C.sf!=C.of)) goto L_11ad866d;
  /* 11ad8646 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad8649 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad864f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad8651 jne 0x11ad866d */
  if (!C.zf) goto L_11ad866d;
  /* 11ad8653 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11ad8656 push edx */
  push32((uint32_t)(EDX));
  /* 11ad8657 call 0x11ad3bd0 */
  push32(0x11ad865cu); f_11ad3bd0();
  /* 11ad865c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad865f mov ax, word ptr [ebp - 0x30] */
  AX = (r16((uint32_t)(EBP + -0x30)));
  /* 11ad8663 sub ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a-_b; AX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11ad8667 mov word ptr [ebp - 0x30], ax */
  w16((uint32_t)(EBP + -0x30), (AX));
  /* 11ad866b jmp 0x11ad863e */
  goto L_11ad863e;
L_11ad866d:;
  /* 11ad866d movsx ecx, word ptr [ebp - 0x30] */
  ECX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 11ad8671 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad8673 jg 0x11ad86cd */
  if ((!C.zf&&C.sf==C.of)) goto L_11ad86cd;
  /* 11ad8675 mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 11ad8679 sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11ad867d mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
L_11ad8681:;
  /* 11ad8681 movsx eax, word ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 11ad8685 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad8687 jge 0x11ad86bc */
  if ((C.sf==C.of)) goto L_11ad86bc;
  /* 11ad8689 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad868c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ad8692 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad8695 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad8697 je 0x11ad86a2 */
  if (C.zf) goto L_11ad86a2;
  /* 11ad8699 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad869c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad869f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ad86a2:;
  /* 11ad86a2 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11ad86a5 push eax */
  push32((uint32_t)(EAX));
  /* 11ad86a6 call 0x11ad3c30 */
  push32(0x11ad86abu); f_11ad3c30();
  /* 11ad86ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad86ae mov cx, word ptr [ebp - 0x30] */
  CX = (r16((uint32_t)(EBP + -0x30)));
  /* 11ad86b2 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11ad86b6 mov word ptr [ebp - 0x30], cx */
  w16((uint32_t)(EBP + -0x30), (CX));
  /* 11ad86ba jmp 0x11ad8681 */
  goto L_11ad8681;
L_11ad86bc:;
  /* 11ad86bc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad86c0 je 0x11ad86cd */
  if (C.zf) goto L_11ad86cd;
  /* 11ad86c2 mov dx, word ptr [ebp - 0x14] */
  DX = (r16((uint32_t)(EBP + -0x14)));
  /* 11ad86c6 or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 11ad86c9 mov word ptr [ebp - 0x14], dx */
  w16((uint32_t)(EBP + -0x14), (DX));
L_11ad86cd:;
  /* 11ad86cd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad86d0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad86d5 cmp eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad86da jg 0x11ad86ed */
  if ((!C.zf&&C.sf==C.of)) goto L_11ad86ed;
  /* 11ad86dc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad86df and ecx, 0x1ffff */
  { uint32_t _r=(ECX)&(0x1ffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ad86e5 cmp ecx, 0x18000 */
  { uint32_t _a=(ECX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad86eb jne 0x11ad874e */
  if (!C.zf) goto L_11ad874e;
L_11ad86ed:;
  /* 11ad86ed cmp dword ptr [ebp - 0x12], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x12))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad86f1 jne 0x11ad8745 */
  if (!C.zf) goto L_11ad8745;
  /* 11ad86f3 mov dword ptr [ebp - 0x12], 0 */
  w32((uint32_t)(EBP + -0x12), (0x0u));
  /* 11ad86fa cmp dword ptr [ebp - 0xe], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xe))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad86fe jne 0x11ad873a */
  if (!C.zf) goto L_11ad873a;
  /* 11ad8700 mov dword ptr [ebp - 0xe], 0 */
  w32((uint32_t)(EBP + -0xe), (0x0u));
  /* 11ad8707 mov edx, dword ptr [ebp - 0xa] */
  EDX = (r32((uint32_t)(EBP + -0xa)));
  /* 11ad870a and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ad8710 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad8716 jne 0x11ad872c */
  if (!C.zf) goto L_11ad872c;
  /* 11ad8718 mov word ptr [ebp - 0xa], 0x8000 */
  w16((uint32_t)(EBP + -0xa), (0x8000u));
  /* 11ad871e mov ax, word ptr [ebp - 0x30] */
  AX = (r16((uint32_t)(EBP + -0x30)));
  /* 11ad8722 add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 11ad8726 mov word ptr [ebp - 0x30], ax */
  w16((uint32_t)(EBP + -0x30), (AX));
  /* 11ad872a jmp 0x11ad8738 */
  goto L_11ad8738;
L_11ad872c:;
  /* 11ad872c mov cx, word ptr [ebp - 0xa] */
  CX = (r16((uint32_t)(EBP + -0xa)));
  /* 11ad8730 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11ad8734 mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
L_11ad8738:;
  /* 11ad8738 jmp 0x11ad8743 */
  goto L_11ad8743;
L_11ad873a:;
  /* 11ad873a mov edx, dword ptr [ebp - 0xe] */
  EDX = (r32((uint32_t)(EBP + -0xe)));
  /* 11ad873d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8740 mov dword ptr [ebp - 0xe], edx */
  w32((uint32_t)(EBP + -0xe), (EDX));
L_11ad8743:;
  /* 11ad8743 jmp 0x11ad874e */
  goto L_11ad874e;
L_11ad8745:;
  /* 11ad8745 mov eax, dword ptr [ebp - 0x12] */
  EAX = (r32((uint32_t)(EBP + -0x12)));
  /* 11ad8748 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad874b mov dword ptr [ebp - 0x12], eax */
  w32((uint32_t)(EBP + -0x12), (EAX));
L_11ad874e:;
  /* 11ad874e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad8751 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ad8757 cmp ecx, 0x7fff */
  { uint32_t _a=(ECX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad875d jl 0x11ad8793 */
  if ((C.sf!=C.of)) goto L_11ad8793;
  /* 11ad875f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad8762 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ad8768 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ad876a sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad876c and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad8772 add edx, 0x7fff8000 */
  { uint32_t _a=(EDX),_b=(0x7fff8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8778 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad877b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11ad877e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad8781 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11ad8788 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad878b mov dword ptr [edx], 0 */
  w32((uint32_t)(EDX), (0x0u));
  /* 11ad8791 jmp 0x11ad87c9 */
  goto L_11ad87c9;
L_11ad8793:;
  /* 11ad8793 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad8796 mov cx, word ptr [ebp - 0x12] */
  CX = (r16((uint32_t)(EBP + -0x12)));
  /* 11ad879a mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 11ad879d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad87a0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad87a3 mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 11ad87a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad87a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad87ac mov dword ptr [ecx + 6], edx */
  w32((uint32_t)(ECX + 0x6), (EDX));
  /* 11ad87af mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad87b2 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad87b7 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad87ba and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ad87c0 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad87c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad87c5 mov word ptr [edx + 0xa], ax */
  w16((uint32_t)(EDX + 0xa), (AX));
L_11ad87c9:;
  /* 11ad87c9 mov esp, ebp */
  ESP = (EBP);
  /* 11ad87cb pop ebp */
  EBP = (pop32());
  /* 11ad87cc ret  */
  ESPCHK(0x11ad8390u, _esp0);
  ESP += 4; return;
}

/* FUN_100187d0 @ 0x11ad87d0 (195 bytes, 67 insns) */
void f_11ad87d0(void) {
  FTRACE(0x11ad87d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad87d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad87d1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad87d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad87d6 mov eax, 0x11af7f80 */
  EAX = (0x11af7f80u);
  /* 11ad87db sub eax, 0x60 */
  { uint32_t _a=(EAX),_b=(0x60u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad87de mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad87e1 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad87e5 jne 0x11ad87ec */
  if (!C.zf) goto L_11ad87ec;
  /* 11ad87e7 jmp 0x11ad888f */
  goto L_11ad888f;
L_11ad87ec:;
  /* 11ad87ec cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad87f0 jge 0x11ad8805 */
  if ((C.sf==C.of)) goto L_11ad8805;
  /* 11ad87f2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad87f5 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ad87f7 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11ad87fa mov edx, 0x11af80e0 */
  EDX = (0x11af80e0u);
  /* 11ad87ff sub edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad8802 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ad8805:;
  /* 11ad8805 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad8809 jne 0x11ad8813 */
  if (!C.zf) goto L_11ad8813;
  /* 11ad880b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad880e mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
L_11ad8813:;
  /* 11ad8813 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad8817 je 0x11ad888f */
  if (C.zf) goto L_11ad888f;
  /* 11ad8819 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad881c add ecx, 0x54 */
  { uint32_t _a=(ECX),_b=(0x54u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad881f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ad8822 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad8825 and edx, 7 */
  { uint32_t _r=(EDX)&(0x7u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad8828 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11ad882b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad882e sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11ad8831 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11ad8834 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad8838 jne 0x11ad883c */
  if (!C.zf) goto L_11ad883c;
  /* 11ad883a jmp 0x11ad8813 */
  goto L_11ad8813;
L_11ad883c:;
  /* 11ad883c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad883f imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad8842 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad8845 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8847 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ad884a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad884d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad884f mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11ad8852 cmp ecx, 0x8000 */
  { uint32_t _a=(ECX),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad8858 jl 0x11ad887d */
  if ((C.sf!=C.of)) goto L_11ad887d;
  /* 11ad885a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad885d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ad885f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ad8862 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ad8865 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ad8868 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ad886b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11ad886e mov eax, dword ptr [ebp - 0x12] */
  EAX = (r32((uint32_t)(EBP + -0x12)));
  /* 11ad8871 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad8874 mov dword ptr [ebp - 0x12], eax */
  w32((uint32_t)(EBP + -0x12), (EAX));
  /* 11ad8877 lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 11ad887a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11ad887d:;
  /* 11ad887d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad8880 push edx */
  push32((uint32_t)(EDX));
  /* 11ad8881 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad8884 push eax */
  push32((uint32_t)(EAX));
  /* 11ad8885 call 0x11ad8390 */
  push32(0x11ad888au); f_11ad8390();
  /* 11ad888a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad888d jmp 0x11ad8813 */
  goto L_11ad8813;
L_11ad888f:;
  /* 11ad888f mov esp, ebp */
  ESP = (EBP);
  /* 11ad8891 pop ebp */
  EBP = (pop32());
  /* 11ad8892 ret  */
  ESPCHK(0x11ad87d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100188a0 @ 0x11ad88a0 (62 bytes, 21 insns) */
void f_11ad88a0(void) {
  FTRACE(0x11ad88a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad88a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad88a1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad88a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad88a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad88a9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ad88ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad88af mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ad88b2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad88b5 add edx, 0x3fe */
  { uint32_t _a=(EDX),_b=(0x3feu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad88bb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ad88be mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11ad88c1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad88c6 and eax, 0x800f */
  { uint32_t _r=(EAX)&(0x800fu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad88cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad88ce shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11ad88d1 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad88d3 mov word ptr [ebp - 6], ax */
  w16((uint32_t)(EBP + -0x6), (AX));
  /* 11ad88d7 fld qword ptr [ebp - 0xc] */
  fpu_push(rf64((uint32_t)(EBP + -0xc)));
  /* 11ad88da mov esp, ebp */
  ESP = (EBP);
  /* 11ad88dc pop ebp */
  EBP = (pop32());
  /* 11ad88dd ret  */
  ESPCHK(0x11ad88a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100188e0 @ 0x11ad88e0 (45 bytes, 15 insns) */
void f_11ad88e0(void) {
  FTRACE(0x11ad88e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad88e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad88e1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad88e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad88e4 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11ad88e7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad88ec and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad88f1 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11ad88f4 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11ad88f8 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11ad88fc sub cx, 0x3fe */
  { uint32_t _a=(CX),_b=(0x3feu),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11ad8901 mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11ad8905 movsx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x4))));
  /* 11ad8909 mov esp, ebp */
  ESP = (EBP);
  /* 11ad890b pop ebp */
  EBP = (pop32());
  /* 11ad890c ret  */
  ESPCHK(0x11ad88e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018910 @ 0x11ad8910 (51 bytes, 18 insns) */
void f_11ad8910(void) {
  FTRACE(0x11ad8910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad8910 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad8911 mov ebp, esp */
  EBP = (ESP);
  /* 11ad8913 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11ad8916 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad891b and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad8920 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11ad8923 movsx ecx, ax */
  ECX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 11ad8926 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad8929 lea eax, [ecx + edx - 0x3fe] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x3fe));
  /* 11ad8930 push eax */
  push32((uint32_t)(EAX));
  /* 11ad8931 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad8934 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad8935 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad8938 push edx */
  push32((uint32_t)(EDX));
  /* 11ad8939 call 0x11ad88a0 */
  push32(0x11ad893eu); f_11ad88a0();
  /* 11ad893e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8941 pop ebp */
  EBP = (pop32());
  /* 11ad8942 ret  */
  ESPCHK(0x11ad8910u, _esp0);
  ESP += 4; return;
}

/* FUN_10018950 @ 0x11ad8950 (52 bytes, 18 insns) */
void f_11ad8950(void) {
  FTRACE(0x11ad8950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad8950 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad8951 mov ebp, esp */
  EBP = (ESP);
  /* 11ad8953 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad8956 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad8959 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ad895c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad895f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ad8962 mov edx, dword ptr [ebp + 0xe] */
  EDX = (r32((uint32_t)(EBP + 0xe)));
  /* 11ad8965 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ad896b and edx, 0x800f */
  { uint32_t _r=(EDX)&(0x800fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ad8971 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad8974 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11ad8977 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11ad8979 mov word ptr [ebp - 2], dx */
  w16((uint32_t)(EBP + -0x2), (DX));
  /* 11ad897d fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 11ad8980 mov esp, ebp */
  ESP = (EBP);
  /* 11ad8982 pop ebp */
  EBP = (pop32());
  /* 11ad8983 ret  */
  ESPCHK(0x11ad8950u, _esp0);
  ESP += 4; return;
}

/* FUN_10018990 @ 0x11ad8990 (124 bytes, 37 insns) */
void f_11ad8990(void) {
  FTRACE(0x11ad8990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad8990 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad8991 mov ebp, esp */
  EBP = (ESP);
  /* 11ad8993 cmp dword ptr [ebp + 0xc], 0x7ff00000 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x7ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad899a jne 0x11ad89a9 */
  if (!C.zf) goto L_11ad89a9;
  /* 11ad899c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad89a0 jne 0x11ad89a9 */
  if (!C.zf) goto L_11ad89a9;
  /* 11ad89a2 mov eax, 1 */
  EAX = (0x1u);
  /* 11ad89a7 jmp 0x11ad8a0a */
  goto L_11ad8a0a;
L_11ad89a9:;
  /* 11ad89a9 cmp dword ptr [ebp + 0xc], 0xfff00000 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad89b0 jne 0x11ad89bf */
  if (!C.zf) goto L_11ad89bf;
  /* 11ad89b2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad89b6 jne 0x11ad89bf */
  if (!C.zf) goto L_11ad89bf;
  /* 11ad89b8 mov eax, 2 */
  EAX = (0x2u);
  /* 11ad89bd jmp 0x11ad8a0a */
  goto L_11ad8a0a;
L_11ad89bf:;
  /* 11ad89bf mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11ad89c2 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad89c7 and eax, 0x7ff8 */
  { uint32_t _r=(EAX)&(0x7ff8u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad89cc cmp eax, 0x7ff8 */
  { uint32_t _a=(EAX),_b=(0x7ff8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad89d1 jne 0x11ad89da */
  if (!C.zf) goto L_11ad89da;
  /* 11ad89d3 mov eax, 3 */
  EAX = (0x3u);
  /* 11ad89d8 jmp 0x11ad8a0a */
  goto L_11ad8a0a;
L_11ad89da:;
  /* 11ad89da mov ecx, dword ptr [ebp + 0xe] */
  ECX = (r32((uint32_t)(EBP + 0xe)));
  /* 11ad89dd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ad89e3 and ecx, 0x7ff8 */
  { uint32_t _r=(ECX)&(0x7ff8u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad89e9 cmp ecx, 0x7ff0 */
  { uint32_t _a=(ECX),_b=(0x7ff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad89ef jne 0x11ad8a08 */
  if (!C.zf) goto L_11ad8a08;
  /* 11ad89f1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad89f4 shl edx, 0xd */
  EDX = (sh_shl((uint32_t)(EDX), (0xdu)&0x1f, 32));
  /* 11ad89f7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad89f9 jne 0x11ad8a01 */
  if (!C.zf) goto L_11ad8a01;
  /* 11ad89fb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad89ff je 0x11ad8a08 */
  if (C.zf) goto L_11ad8a08;
L_11ad8a01:;
  /* 11ad8a01 mov eax, 4 */
  EAX = (0x4u);
  /* 11ad8a06 jmp 0x11ad8a0a */
  goto L_11ad8a0a;
L_11ad8a08:;
  /* 11ad8a08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ad8a0a:;
  /* 11ad8a0a pop ebp */
  EBP = (pop32());
  /* 11ad8a0b ret  */
  ESPCHK(0x11ad8990u, _esp0);
  ESP += 4; return;
}

/* FUN_10018a10 @ 0x11ad8a10 (313 bytes, 95 insns) */
void f_11ad8a10(void) {
  FTRACE(0x11ad8a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad8a10 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad8a11 mov ebp, esp */
  EBP = (ESP);
  /* 11ad8a13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad8a16 fld qword ptr [ebp + 8] */
  fpu_push(rf64((uint32_t)(EBP + 0x8)));
  /* 11ad8a19 fcomp qword ptr [0x11af3660] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11af3660)));
  (void)fpu_pop();
  /* 11ad8a1f fnstsw ax */
  AX = fpu_status();
  /* 11ad8a21 test ah, 0x40 */
  { uint32_t _r=(AH)&(0x40u); fl_logic(_r,8); }
  /* 11ad8a24 je 0x11ad8a40 */
  if (C.zf) goto L_11ad8a40;
  /* 11ad8a26 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ad8a2d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ad8a34 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ad8a3b jmp 0x11ad8b3a */
  goto L_11ad8b3a;
L_11ad8a40:;
  /* 11ad8a40 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11ad8a43 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad8a48 and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad8a4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad8a4f jne 0x11ad8b09 */
  if (!C.zf) goto L_11ad8b09;
  /* 11ad8a55 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad8a58 shl ecx, 0xc */
  ECX = (sh_shl((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 11ad8a5b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad8a5d jne 0x11ad8a69 */
  if (!C.zf) goto L_11ad8a69;
  /* 11ad8a5f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad8a63 je 0x11ad8b09 */
  if (C.zf) goto L_11ad8b09;
L_11ad8a69:;
  /* 11ad8a69 mov dword ptr [ebp - 4], 0xfffffc03 */
  w32((uint32_t)(EBP + -0x4), (0xfffffc03u));
  /* 11ad8a70 fld qword ptr [ebp + 8] */
  fpu_push(rf64((uint32_t)(EBP + 0x8)));
  /* 11ad8a73 fcomp qword ptr [0x11af3660] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11af3660)));
  (void)fpu_pop();
  /* 11ad8a79 fnstsw ax */
  AX = fpu_status();
  /* 11ad8a7b test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 11ad8a7e je 0x11ad8a89 */
  if (C.zf) goto L_11ad8a89;
  /* 11ad8a80 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 11ad8a87 jmp 0x11ad8a90 */
  goto L_11ad8a90;
L_11ad8a89:;
  /* 11ad8a89 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11ad8a90:;
  /* 11ad8a90 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad8a93 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11ad8a96:;
  /* 11ad8a96 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11ad8a99 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad8a9e and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad8aa1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad8aa3 jne 0x11ad8ad5 */
  if (!C.zf) goto L_11ad8ad5;
  /* 11ad8aa5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad8aa8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11ad8aaa mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11ad8aad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad8ab0 and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad8ab6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad8ab8 je 0x11ad8ac2 */
  if (C.zf) goto L_11ad8ac2;
  /* 11ad8aba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad8abd or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11ad8abf mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11ad8ac2:;
  /* 11ad8ac2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad8ac5 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11ad8ac7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11ad8aca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad8acd sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad8ad0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ad8ad3 jmp 0x11ad8a96 */
  goto L_11ad8a96;
L_11ad8ad5:;
  /* 11ad8ad5 mov ax, word ptr [ebp + 0xe] */
  AX = (r16((uint32_t)(EBP + 0xe)));
  /* 11ad8ad9 and ax, 0xffef */
  { uint32_t _r=(AX)&(0xffefu); AX = (_r); fl_logic(_r,16); }
  /* 11ad8add mov word ptr [ebp + 0xe], ax */
  w16((uint32_t)(EBP + 0xe), (AX));
  /* 11ad8ae1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad8ae5 je 0x11ad8af2 */
  if (C.zf) goto L_11ad8af2;
  /* 11ad8ae7 mov cx, word ptr [ebp + 0xe] */
  CX = (r16((uint32_t)(EBP + 0xe)));
  /* 11ad8aeb or ch, 0x80 */
  { uint32_t _r=(C.c.b.h)|(0x80u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11ad8aee mov word ptr [ebp + 0xe], cx */
  w16((uint32_t)(EBP + 0xe), (CX));
L_11ad8af2:;
  /* 11ad8af2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad8af4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad8af7 push edx */
  push32((uint32_t)(EDX));
  /* 11ad8af8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad8afb push eax */
  push32((uint32_t)(EAX));
  /* 11ad8afc call 0x11ad88a0 */
  push32(0x11ad8b01u); f_11ad88a0();
  /* 11ad8b01 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8b04 fstp qword ptr [ebp - 0xc] */
  wf64((uint32_t)(EBP + -0xc), FPU_ST(0));
  (void)fpu_pop();
  /* 11ad8b07 jmp 0x11ad8b3a */
  goto L_11ad8b3a;
L_11ad8b09:;
  /* 11ad8b09 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad8b0b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad8b0e push ecx */
  push32((uint32_t)(ECX));
  /* 11ad8b0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad8b12 push edx */
  push32((uint32_t)(EDX));
  /* 11ad8b13 call 0x11ad88a0 */
  push32(0x11ad8b18u); f_11ad88a0();
  /* 11ad8b18 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8b1b fstp qword ptr [ebp - 0xc] */
  wf64((uint32_t)(EBP + -0xc), FPU_ST(0));
  (void)fpu_pop();
  /* 11ad8b1e mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11ad8b21 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad8b26 and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad8b2b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11ad8b2e movsx ecx, ax */
  ECX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 11ad8b31 sub ecx, 0x3fe */
  { uint32_t _a=(ECX),_b=(0x3feu),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad8b37 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ad8b3a:;
  /* 11ad8b3a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad8b3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad8b40 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11ad8b42 fld qword ptr [ebp - 0xc] */
  fpu_push(rf64((uint32_t)(EBP + -0xc)));
  /* 11ad8b45 mov esp, ebp */
  ESP = (EBP);
  /* 11ad8b47 pop ebp */
  EBP = (pop32());
  /* 11ad8b48 ret  */
  ESPCHK(0x11ad8a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10018b50 @ 0x11ad8b50 (122 bytes, 39 insns) */
void f_11ad8b50(void) {
  FTRACE(0x11ad8b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad8b50 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad8b51 mov ebp, esp */
  EBP = (ESP);
  /* 11ad8b53 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad8b54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad8b57 cmp eax, dword ptr [0x11afadbc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11afadbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad8b5d jae 0x11ad8b81 */
  if (!C.cf) goto L_11ad8b81;
  /* 11ad8b5f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad8b62 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ad8b65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad8b68 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ad8b6b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad8b6e mov eax, dword ptr [ecx*4 + 0x11afac80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11afac80)));
  /* 11ad8b75 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11ad8b7a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad8b7d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad8b7f jne 0x11ad8b9c */
  if (!C.zf) goto L_11ad8b9c;
L_11ad8b81:;
  /* 11ad8b81 call 0x11ad21f0 */
  push32(0x11ad8b86u); f_11ad21f0();
  /* 11ad8b86 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11ad8b8c call 0x11ad2200 */
  push32(0x11ad8b91u); f_11ad2200();
  /* 11ad8b91 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11ad8b97 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad8b9a jmp 0x11ad8bc6 */
  goto L_11ad8bc6;
L_11ad8b9c:;
  /* 11ad8b9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad8b9f push edx */
  push32((uint32_t)(EDX));
  /* 11ad8ba0 call 0x11ad2720 */
  push32(0x11ad8ba5u); f_11ad2720();
  /* 11ad8ba5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8ba8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad8bab push eax */
  push32((uint32_t)(EAX));
  /* 11ad8bac call 0x11ad8bd0 */
  push32(0x11ad8bb1u); f_11ad8bd0();
  /* 11ad8bb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8bb4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad8bb7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad8bba push ecx */
  push32((uint32_t)(ECX));
  /* 11ad8bbb call 0x11ad27b0 */
  push32(0x11ad8bc0u); f_11ad27b0();
  /* 11ad8bc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8bc3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11ad8bc6:;
  /* 11ad8bc6 mov esp, ebp */
  ESP = (EBP);
  /* 11ad8bc8 pop ebp */
  EBP = (pop32());
  /* 11ad8bc9 ret  */
  ESPCHK(0x11ad8b50u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x11ad8bd0 (170 bytes, 59 insns) */
void f_11ad8bd0(void) {
  FTRACE(0x11ad8bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad8bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad8bd1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad8bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad8bd4 push esi */
  push32((uint32_t)(ESI));
  /* 11ad8bd5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad8bd8 push eax */
  push32((uint32_t)(EAX));
  /* 11ad8bd9 call 0x11ad25a0 */
  push32(0x11ad8bdeu); f_11ad25a0();
  /* 11ad8bde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8be1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad8be4 je 0x11ad8c23 */
  if (C.zf) goto L_11ad8c23;
  /* 11ad8be6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad8bea je 0x11ad8bf2 */
  if (C.zf) goto L_11ad8bf2;
  /* 11ad8bec cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad8bf0 jne 0x11ad8c0c */
  if (!C.zf) goto L_11ad8c0c;
L_11ad8bf2:;
  /* 11ad8bf2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad8bf4 call 0x11ad25a0 */
  push32(0x11ad8bf9u); f_11ad25a0();
  /* 11ad8bf9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8bfc mov esi, eax */
  ESI = (EAX);
  /* 11ad8bfe push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad8c00 call 0x11ad25a0 */
  push32(0x11ad8c05u); f_11ad25a0();
  /* 11ad8c05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8c08 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad8c0a je 0x11ad8c23 */
  if (C.zf) goto L_11ad8c23;
L_11ad8c0c:;
  /* 11ad8c0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad8c0f push ecx */
  push32((uint32_t)(ECX));
  /* 11ad8c10 call 0x11ad25a0 */
  push32(0x11ad8c15u); f_11ad25a0();
  /* 11ad8c15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8c18 push eax */
  push32((uint32_t)(EAX));
  /* 11ad8c19 call dword ptr [0x11afb2f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb2f0))), 0x11ad8c1fu);
  /* 11ad8c1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad8c21 je 0x11ad8c2c */
  if (C.zf) goto L_11ad8c2c;
L_11ad8c23:;
  /* 11ad8c23 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ad8c2a jmp 0x11ad8c35 */
  goto L_11ad8c35;
L_11ad8c2c:;
  /* 11ad8c2c call dword ptr [0x11afb3c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3c4))), 0x11ad8c32u);
  /* 11ad8c32 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ad8c35:;
  /* 11ad8c35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad8c38 push edx */
  push32((uint32_t)(EDX));
  /* 11ad8c39 call 0x11ad24c0 */
  push32(0x11ad8c3eu); f_11ad24c0();
  /* 11ad8c3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8c41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad8c44 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ad8c47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad8c4a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11ad8c4d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad8c50 mov edx, dword ptr [eax*4 + 0x11afac80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11afac80)));
  /* 11ad8c57 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 11ad8c5c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad8c60 je 0x11ad8c73 */
  if (C.zf) goto L_11ad8c73;
  /* 11ad8c62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad8c65 push eax */
  push32((uint32_t)(EAX));
  /* 11ad8c66 call 0x11ad2150 */
  push32(0x11ad8c6bu); f_11ad2150();
  /* 11ad8c6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8c6e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad8c71 jmp 0x11ad8c75 */
  goto L_11ad8c75;
L_11ad8c73:;
  /* 11ad8c73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ad8c75:;
  /* 11ad8c75 pop esi */
  ESI = (pop32());
  /* 11ad8c76 mov esp, ebp */
  ESP = (EBP);
  /* 11ad8c78 pop ebp */
  EBP = (pop32());
  /* 11ad8c79 ret  */
  ESPCHK(0x11ad8bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018c80 @ 0x11ad8c80 (146 bytes, 52 insns) */
void f_11ad8c80(void) {
  FTRACE(0x11ad8c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad8c80 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad8c81 mov ebp, esp */
  EBP = (ESP);
  /* 11ad8c83 push ebx */
  push32((uint32_t)(EBX));
  /* 11ad8c84 push esi */
  push32((uint32_t)(ESI));
  /* 11ad8c85 push edi */
  push32((uint32_t)(EDI));
L_11ad8c86:;
  /* 11ad8c86 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad8c8a jne 0x11ad8caa */
  if (!C.zf) goto L_11ad8caa;
  /* 11ad8c8c push 0x11af42c0 */
  push32((uint32_t)(0x11af42c0u));
  /* 11ad8c91 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad8c93 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11ad8c95 push 0x11af4988 */
  push32((uint32_t)(0x11af4988u));
  /* 11ad8c9a push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad8c9c call 0x11ac6a40 */
  push32(0x11ad8ca1u); f_11ac6a40();
  /* 11ad8ca1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8ca4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad8ca7 jne 0x11ad8caa */
  if (!C.zf) goto L_11ad8caa;
  /* 11ad8ca9 int3  */
  x86_unimpl("int3 @ 0x11ad8ca9");
L_11ad8caa:;
  /* 11ad8caa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad8cac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad8cae jne 0x11ad8c86 */
  if (!C.zf) goto L_11ad8c86;
  /* 11ad8cb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad8cb3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ad8cb6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad8cbc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad8cbe je 0x11ad8d0d */
  if (C.zf) goto L_11ad8d0d;
  /* 11ad8cc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad8cc3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11ad8cc6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad8cc9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad8ccb je 0x11ad8d0d */
  if (C.zf) goto L_11ad8d0d;
  /* 11ad8ccd push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad8ccf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad8cd2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ad8cd5 push eax */
  push32((uint32_t)(EAX));
  /* 11ad8cd6 call 0x11aca0f0 */
  push32(0x11ad8cdbu); f_11aca0f0();
  /* 11ad8cdb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8cde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad8ce1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ad8ce4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad8cea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad8ced mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11ad8cf0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad8cf3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11ad8cf9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad8cfc mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11ad8d03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad8d06 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_11ad8d0d:;
  /* 11ad8d0d pop edi */
  EDI = (pop32());
  /* 11ad8d0e pop esi */
  ESI = (pop32());
  /* 11ad8d0f pop ebx */
  EBX = (pop32());
  /* 11ad8d10 pop ebp */
  EBP = (pop32());
  /* 11ad8d11 ret  */
  ESPCHK(0x11ad8c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10018d20 @ 0x11ad8d20 (289 bytes, 97 insns) */
void f_11ad8d20(void) {
  FTRACE(0x11ad8d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad8d20 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad8d21 mov ebp, esp */
  EBP = (ESP);
  /* 11ad8d23 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad8d26 push esi */
  push32((uint32_t)(ESI));
  /* 11ad8d27 mov eax, dword ptr [0x11af7e80] */
  EAX = (r32((uint32_t)(0x11af7e80)));
  /* 11ad8d2c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ad8d2f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ad8d36 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11ad8d3d jmp 0x11ad8d48 */
  goto L_11ad8d48;
L_11ad8d3f:;
  /* 11ad8d3f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad8d42 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8d45 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11ad8d48:;
  /* 11ad8d48 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad8d4c jae 0x11ad8d81 */
  if (!C.cf) goto L_11ad8d81;
  /* 11ad8d4e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad8d51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad8d54 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11ad8d57 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad8d58 call 0x11acc490 */
  push32(0x11ad8d5du); f_11acc490();
  /* 11ad8d5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8d60 mov esi, eax */
  ESI = (EAX);
  /* 11ad8d62 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad8d65 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad8d68 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11ad8d6c push ecx */
  push32((uint32_t)(ECX));
  /* 11ad8d6d call 0x11acc490 */
  push32(0x11ad8d72u); f_11acc490();
  /* 11ad8d72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8d75 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8d78 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11ad8d7c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ad8d7f jmp 0x11ad8d3f */
  goto L_11ad8d3f;
L_11ad8d81:;
  /* 11ad8d81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad8d84 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8d87 push eax */
  push32((uint32_t)(EAX));
  /* 11ad8d88 call 0x11ac9640 */
  push32(0x11ad8d8du); f_11ac9640();
  /* 11ad8d8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8d90 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad8d93 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad8d97 je 0x11ad8e39 */
  if (C.zf) goto L_11ad8e39;
  /* 11ad8d9d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad8da0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11ad8da3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11ad8daa jmp 0x11ad8db5 */
  goto L_11ad8db5;
L_11ad8dac:;
  /* 11ad8dac mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad8daf add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8db2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11ad8db5:;
  /* 11ad8db5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad8db9 jae 0x11ad8e2a */
  if (!C.cf) goto L_11ad8e2a;
  /* 11ad8dbb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad8dbe mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11ad8dc1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad8dc4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8dc7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11ad8dca mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad8dcd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad8dd0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11ad8dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad8dd4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad8dd7 push edx */
  push32((uint32_t)(EDX));
  /* 11ad8dd8 call 0x11acc610 */
  push32(0x11ad8dddu); f_11acc610();
  /* 11ad8ddd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8de0 push eax */
  push32((uint32_t)(EAX));
  /* 11ad8de1 call 0x11acc490 */
  push32(0x11ad8de6u); f_11acc490();
  /* 11ad8de6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8de9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad8dec add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8dee mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11ad8df1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad8df4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11ad8df7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad8dfa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8dfd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ad8e00 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad8e03 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad8e06 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11ad8e0a push eax */
  push32((uint32_t)(EAX));
  /* 11ad8e0b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad8e0e push ecx */
  push32((uint32_t)(ECX));
  /* 11ad8e0f call 0x11acc610 */
  push32(0x11ad8e14u); f_11acc610();
  /* 11ad8e14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8e17 push eax */
  push32((uint32_t)(EAX));
  /* 11ad8e18 call 0x11acc490 */
  push32(0x11ad8e1du); f_11acc490();
  /* 11ad8e1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8e20 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad8e23 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8e25 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11ad8e28 jmp 0x11ad8dac */
  goto L_11ad8dac;
L_11ad8e2a:;
  /* 11ad8e2a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad8e2d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11ad8e30 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad8e33 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8e36 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11ad8e39:;
  /* 11ad8e39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad8e3c pop esi */
  ESI = (pop32());
  /* 11ad8e3d mov esp, ebp */
  ESP = (EBP);
  /* 11ad8e3f pop ebp */
  EBP = (pop32());
  /* 11ad8e40 ret  */
  ESPCHK(0x11ad8d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10018e50 @ 0x11ad8e50 (291 bytes, 97 insns) */
void f_11ad8e50(void) {
  FTRACE(0x11ad8e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad8e50 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad8e51 mov ebp, esp */
  EBP = (ESP);
  /* 11ad8e53 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad8e56 push esi */
  push32((uint32_t)(ESI));
  /* 11ad8e57 mov eax, dword ptr [0x11af7e80] */
  EAX = (r32((uint32_t)(0x11af7e80)));
  /* 11ad8e5c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ad8e5f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ad8e66 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11ad8e6d jmp 0x11ad8e78 */
  goto L_11ad8e78;
L_11ad8e6f:;
  /* 11ad8e6f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad8e72 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8e75 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11ad8e78:;
  /* 11ad8e78 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad8e7c jae 0x11ad8eb2 */
  if (!C.cf) goto L_11ad8eb2;
  /* 11ad8e7e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad8e81 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad8e84 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11ad8e88 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad8e89 call 0x11acc490 */
  push32(0x11ad8e8eu); f_11acc490();
  /* 11ad8e8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8e91 mov esi, eax */
  ESI = (EAX);
  /* 11ad8e93 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad8e96 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad8e99 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 11ad8e9d push ecx */
  push32((uint32_t)(ECX));
  /* 11ad8e9e call 0x11acc490 */
  push32(0x11ad8ea3u); f_11acc490();
  /* 11ad8ea3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8ea6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8ea9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11ad8ead mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ad8eb0 jmp 0x11ad8e6f */
  goto L_11ad8e6f;
L_11ad8eb2:;
  /* 11ad8eb2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad8eb5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8eb8 push eax */
  push32((uint32_t)(EAX));
  /* 11ad8eb9 call 0x11ac9640 */
  push32(0x11ad8ebeu); f_11ac9640();
  /* 11ad8ebe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8ec1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad8ec4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad8ec8 je 0x11ad8f6b */
  if (C.zf) goto L_11ad8f6b;
  /* 11ad8ece mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad8ed1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11ad8ed4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11ad8edb jmp 0x11ad8ee6 */
  goto L_11ad8ee6;
L_11ad8edd:;
  /* 11ad8edd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad8ee0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8ee3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11ad8ee6:;
  /* 11ad8ee6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad8eea jae 0x11ad8f5c */
  if (!C.cf) goto L_11ad8f5c;
  /* 11ad8eec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad8eef mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11ad8ef2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad8ef5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8ef8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11ad8efb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad8efe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad8f01 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11ad8f05 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad8f06 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad8f09 push edx */
  push32((uint32_t)(EDX));
  /* 11ad8f0a call 0x11acc610 */
  push32(0x11ad8f0fu); f_11acc610();
  /* 11ad8f0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8f12 push eax */
  push32((uint32_t)(EAX));
  /* 11ad8f13 call 0x11acc490 */
  push32(0x11ad8f18u); f_11acc490();
  /* 11ad8f18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8f1b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad8f1e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8f20 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11ad8f23 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad8f26 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11ad8f29 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad8f2c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8f2f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ad8f32 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad8f35 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad8f38 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11ad8f3c push eax */
  push32((uint32_t)(EAX));
  /* 11ad8f3d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad8f40 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad8f41 call 0x11acc610 */
  push32(0x11ad8f46u); f_11acc610();
  /* 11ad8f46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8f49 push eax */
  push32((uint32_t)(EAX));
  /* 11ad8f4a call 0x11acc490 */
  push32(0x11ad8f4fu); f_11acc490();
  /* 11ad8f4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8f52 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad8f55 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8f57 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11ad8f5a jmp 0x11ad8edd */
  goto L_11ad8edd;
L_11ad8f5c:;
  /* 11ad8f5c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad8f5f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11ad8f62 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad8f65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8f68 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11ad8f6b:;
  /* 11ad8f6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad8f6e pop esi */
  ESI = (pop32());
  /* 11ad8f6f mov esp, ebp */
  ESP = (EBP);
  /* 11ad8f71 pop ebp */
  EBP = (pop32());
  /* 11ad8f72 ret  */
  ESPCHK(0x11ad8e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10018f80 @ 0x11ad8f80 (878 bytes, 273 insns) */
void f_11ad8f80(void) {
  FTRACE(0x11ad8f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad8f80 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad8f81 mov ebp, esp */
  EBP = (ESP);
  /* 11ad8f83 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad8f86 push esi */
  push32((uint32_t)(ESI));
  /* 11ad8f87 mov eax, dword ptr [0x11af7e80] */
  EAX = (r32((uint32_t)(0x11af7e80)));
  /* 11ad8f8c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ad8f8f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ad8f96 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11ad8f9d jmp 0x11ad8fa8 */
  goto L_11ad8fa8;
L_11ad8f9f:;
  /* 11ad8f9f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad8fa2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8fa5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11ad8fa8:;
  /* 11ad8fa8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad8fac jae 0x11ad8fe1 */
  if (!C.cf) goto L_11ad8fe1;
  /* 11ad8fae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad8fb1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad8fb4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11ad8fb7 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad8fb8 call 0x11acc490 */
  push32(0x11ad8fbdu); f_11acc490();
  /* 11ad8fbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8fc0 mov esi, eax */
  ESI = (EAX);
  /* 11ad8fc2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad8fc5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad8fc8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11ad8fcc push ecx */
  push32((uint32_t)(ECX));
  /* 11ad8fcd call 0x11acc490 */
  push32(0x11ad8fd2u); f_11acc490();
  /* 11ad8fd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8fd5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8fd8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11ad8fdc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ad8fdf jmp 0x11ad8f9f */
  goto L_11ad8f9f;
L_11ad8fe1:;
  /* 11ad8fe1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11ad8fe8 jmp 0x11ad8ff3 */
  goto L_11ad8ff3;
L_11ad8fea:;
  /* 11ad8fea mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad8fed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad8ff0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11ad8ff3:;
  /* 11ad8ff3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad8ff7 jae 0x11ad902d */
  if (!C.cf) goto L_11ad902d;
  /* 11ad8ff9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad8ffc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad8fff mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11ad9003 push eax */
  push32((uint32_t)(EAX));
  /* 11ad9004 call 0x11acc490 */
  push32(0x11ad9009u); f_11acc490();
  /* 11ad9009 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad900c mov esi, eax */
  ESI = (EAX);
  /* 11ad900e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad9011 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad9014 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11ad9018 push eax */
  push32((uint32_t)(EAX));
  /* 11ad9019 call 0x11acc490 */
  push32(0x11ad901eu); f_11acc490();
  /* 11ad901e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9021 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9024 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11ad9028 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ad902b jmp 0x11ad8fea */
  goto L_11ad8fea;
L_11ad902d:;
  /* 11ad902d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad9030 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11ad9036 push eax */
  push32((uint32_t)(EAX));
  /* 11ad9037 call 0x11acc490 */
  push32(0x11ad903cu); f_11acc490();
  /* 11ad903c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad903f mov esi, eax */
  ESI = (EAX);
  /* 11ad9041 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad9044 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 11ad904a push edx */
  push32((uint32_t)(EDX));
  /* 11ad904b call 0x11acc490 */
  push32(0x11ad9050u); f_11acc490();
  /* 11ad9050 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9053 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9056 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11ad905a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ad905d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad9060 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11ad9066 push edx */
  push32((uint32_t)(EDX));
  /* 11ad9067 call 0x11acc490 */
  push32(0x11ad906cu); f_11acc490();
  /* 11ad906c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad906f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad9072 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11ad9076 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ad9079 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad907c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 11ad9082 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad9083 call 0x11acc490 */
  push32(0x11ad9088u); f_11acc490();
  /* 11ad9088 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad908b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad908e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11ad9092 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ad9095 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad9098 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11ad909e push edx */
  push32((uint32_t)(EDX));
  /* 11ad909f call 0x11acc490 */
  push32(0x11ad90a4u); f_11acc490();
  /* 11ad90a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad90a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad90aa lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11ad90ae mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ad90b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad90b4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad90b9 push eax */
  push32((uint32_t)(EAX));
  /* 11ad90ba call 0x11ac9640 */
  push32(0x11ad90bfu); f_11ac9640();
  /* 11ad90bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad90c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad90c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad90c9 je 0x11ad92e6 */
  if (C.zf) goto L_11ad92e6;
  /* 11ad90cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad90d2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11ad90d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad90d8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad90de mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11ad90e1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 11ad90e6 mov eax, dword ptr [0x11af7e80] */
  EAX = (r32((uint32_t)(0x11af7e80)));
  /* 11ad90eb push eax */
  push32((uint32_t)(EAX));
  /* 11ad90ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad90ef push ecx */
  push32((uint32_t)(ECX));
  /* 11ad90f0 call 0x11ad1e10 */
  push32(0x11ad90f5u); f_11ad1e10();
  /* 11ad90f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad90f8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11ad90ff jmp 0x11ad910a */
  goto L_11ad910a;
L_11ad9101:;
  /* 11ad9101 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad9104 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9107 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11ad910a:;
  /* 11ad910a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad910e jae 0x11ad917e */
  if (!C.cf) goto L_11ad917e;
  /* 11ad9110 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad9113 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad9116 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad9119 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11ad911c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad911f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad9122 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11ad9125 push edx */
  push32((uint32_t)(EDX));
  /* 11ad9126 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad9129 push eax */
  push32((uint32_t)(EAX));
  /* 11ad912a call 0x11acc610 */
  push32(0x11ad912fu); f_11acc610();
  /* 11ad912f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9132 push eax */
  push32((uint32_t)(EAX));
  /* 11ad9133 call 0x11acc490 */
  push32(0x11ad9138u); f_11acc490();
  /* 11ad9138 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad913b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad913e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11ad9142 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11ad9145 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad9148 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad914b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad914e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 11ad9152 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad9155 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad9158 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 11ad915c push edx */
  push32((uint32_t)(EDX));
  /* 11ad915d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad9160 push eax */
  push32((uint32_t)(EAX));
  /* 11ad9161 call 0x11acc610 */
  push32(0x11ad9166u); f_11acc610();
  /* 11ad9166 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9169 push eax */
  push32((uint32_t)(EAX));
  /* 11ad916a call 0x11acc490 */
  push32(0x11ad916fu); f_11acc490();
  /* 11ad916f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9172 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad9175 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11ad9179 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11ad917c jmp 0x11ad9101 */
  goto L_11ad9101;
L_11ad917e:;
  /* 11ad917e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11ad9185 jmp 0x11ad9190 */
  goto L_11ad9190;
L_11ad9187:;
  /* 11ad9187 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad918a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad918d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11ad9190:;
  /* 11ad9190 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9194 jae 0x11ad9206 */
  if (!C.cf) goto L_11ad9206;
  /* 11ad9196 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad9199 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad919c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad919f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 11ad91a3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad91a6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad91a9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11ad91ad push eax */
  push32((uint32_t)(EAX));
  /* 11ad91ae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad91b1 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad91b2 call 0x11acc610 */
  push32(0x11ad91b7u); f_11acc610();
  /* 11ad91b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad91ba push eax */
  push32((uint32_t)(EAX));
  /* 11ad91bb call 0x11acc490 */
  push32(0x11ad91c0u); f_11acc490();
  /* 11ad91c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad91c3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad91c6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11ad91ca mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ad91cd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad91d0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad91d3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad91d6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 11ad91da mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad91dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad91e0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11ad91e4 push eax */
  push32((uint32_t)(EAX));
  /* 11ad91e5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad91e8 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad91e9 call 0x11acc610 */
  push32(0x11ad91eeu); f_11acc610();
  /* 11ad91ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad91f1 push eax */
  push32((uint32_t)(EAX));
  /* 11ad91f2 call 0x11acc490 */
  push32(0x11ad91f7u); f_11acc490();
  /* 11ad91f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad91fa mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad91fd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11ad9201 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ad9204 jmp 0x11ad9187 */
  goto L_11ad9187;
L_11ad9206:;
  /* 11ad9206 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad9209 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad920c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 11ad9212 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad9215 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11ad921b push ecx */
  push32((uint32_t)(ECX));
  /* 11ad921c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad921f push edx */
  push32((uint32_t)(EDX));
  /* 11ad9220 call 0x11acc610 */
  push32(0x11ad9225u); f_11acc610();
  /* 11ad9225 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9228 push eax */
  push32((uint32_t)(EAX));
  /* 11ad9229 call 0x11acc490 */
  push32(0x11ad922eu); f_11acc490();
  /* 11ad922e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9231 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad9234 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11ad9238 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11ad923b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad923e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad9241 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 11ad9247 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad924a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11ad9250 push eax */
  push32((uint32_t)(EAX));
  /* 11ad9251 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad9254 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad9255 call 0x11acc610 */
  push32(0x11ad925au); f_11acc610();
  /* 11ad925a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad925d push eax */
  push32((uint32_t)(EAX));
  /* 11ad925e call 0x11acc490 */
  push32(0x11ad9263u); f_11acc490();
  /* 11ad9263 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9266 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad9269 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11ad926d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ad9270 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad9273 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad9276 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 11ad927c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad927f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 11ad9285 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad9286 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad9289 push edx */
  push32((uint32_t)(EDX));
  /* 11ad928a call 0x11acc610 */
  push32(0x11ad928fu); f_11acc610();
  /* 11ad928f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9292 push eax */
  push32((uint32_t)(EAX));
  /* 11ad9293 call 0x11acc490 */
  push32(0x11ad9298u); f_11acc490();
  /* 11ad9298 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad929b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad929e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11ad92a2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11ad92a5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad92a8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad92ab mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 11ad92b1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad92b4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11ad92ba push eax */
  push32((uint32_t)(EAX));
  /* 11ad92bb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad92be push ecx */
  push32((uint32_t)(ECX));
  /* 11ad92bf call 0x11acc610 */
  push32(0x11ad92c4u); f_11acc610();
  /* 11ad92c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad92c7 push eax */
  push32((uint32_t)(EAX));
  /* 11ad92c8 call 0x11acc490 */
  push32(0x11ad92cdu); f_11acc490();
  /* 11ad92cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad92d0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad92d3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11ad92d7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ad92da mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad92dd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad92e0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_11ad92e6:;
  /* 11ad92e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad92e9 pop esi */
  ESI = (pop32());
  /* 11ad92ea mov esp, ebp */
  ESP = (EBP);
  /* 11ad92ec pop ebp */
  EBP = (pop32());
  /* 11ad92ed ret  */
  ESPCHK(0x11ad8f80u, _esp0);
  ESP += 4; return;
}

/* FUN_100192f0 @ 0x11ad92f0 (31 bytes, 15 insns) */
void f_11ad92f0(void) {
  FTRACE(0x11ad92f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad92f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad92f1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad92f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad92f5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad92f8 push eax */
  push32((uint32_t)(EAX));
  /* 11ad92f9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad92fc push ecx */
  push32((uint32_t)(ECX));
  /* 11ad92fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad9300 push edx */
  push32((uint32_t)(EDX));
  /* 11ad9301 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad9304 push eax */
  push32((uint32_t)(EAX));
  /* 11ad9305 call 0x11ad9310 */
  push32(0x11ad930au); f_11ad9310();
  /* 11ad930a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad930d pop ebp */
  EBP = (pop32());
  /* 11ad930e ret  */
  ESPCHK(0x11ad92f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019310 @ 0x11ad9310 (393 bytes, 123 insns) */
void f_11ad9310(void) {
  FTRACE(0x11ad9310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad9310 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad9311 mov ebp, esp */
  EBP = (ESP);
  /* 11ad9313 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad9316 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad931a jne 0x11ad9326 */
  if (!C.zf) goto L_11ad9326;
  /* 11ad931c mov eax, dword ptr [0x11af7e80] */
  EAX = (r32((uint32_t)(0x11af7e80)));
  /* 11ad9321 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ad9324 jmp 0x11ad932c */
  goto L_11ad932c;
L_11ad9326:;
  /* 11ad9326 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ad9329 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11ad932c:;
  /* 11ad932c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad932f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ad9332 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad9335 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ad9338 push 0x11af9654 */
  push32((uint32_t)(0x11af9654u));
  /* 11ad933d call dword ptr [0x11afb3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3a4))), 0x11ad9343u);
  /* 11ad9343 cmp dword ptr [0x11af9644], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9644))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad934a je 0x11ad936a */
  if (C.zf) goto L_11ad936a;
  /* 11ad934c push 0x11af9654 */
  push32((uint32_t)(0x11af9654u));
  /* 11ad9351 call dword ptr [0x11afb394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb394))), 0x11ad9357u);
  /* 11ad9357 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ad9359 call 0x11acd060 */
  push32(0x11ad935eu); f_11acd060();
  /* 11ad935e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9361 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11ad9368 jmp 0x11ad9371 */
  goto L_11ad9371;
L_11ad936a:;
  /* 11ad936a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11ad9371:;
  /* 11ad9371 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9375 jbe 0x11ad9462 */
  if ((C.cf||C.zf)) goto L_11ad9462;
  /* 11ad937b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad937e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ad9380 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 11ad9383 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ad9387 je 0x11ad9391 */
  if (C.zf) goto L_11ad9391;
  /* 11ad9389 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ad938d je 0x11ad9396 */
  if (C.zf) goto L_11ad9396;
  /* 11ad938f jmp 0x11ad93f0 */
  goto L_11ad93f0;
L_11ad9391:;
  /* 11ad9391 jmp 0x11ad9462 */
  goto L_11ad9462;
L_11ad9396:;
  /* 11ad9396 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad9399 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad939c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11ad939f mov dword ptr [0x11af9630], 0 */
  w32((uint32_t)(0x11af9630), (0x0u));
  /* 11ad93a9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad93ac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ad93af cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad93b2 jne 0x11ad93c7 */
  if (!C.zf) goto L_11ad93c7;
  /* 11ad93b4 mov dword ptr [0x11af9630], 1 */
  w32((uint32_t)(0x11af9630), (0x1u));
  /* 11ad93be mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad93c1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad93c4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11ad93c7:;
  /* 11ad93c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad93ca push ecx */
  push32((uint32_t)(ECX));
  /* 11ad93cb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11ad93ce push edx */
  push32((uint32_t)(EDX));
  /* 11ad93cf lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11ad93d2 push eax */
  push32((uint32_t)(EAX));
  /* 11ad93d3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad93d6 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad93d7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad93da mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ad93dc push eax */
  push32((uint32_t)(EAX));
  /* 11ad93dd call 0x11ad94a0 */
  push32(0x11ad93e2u); f_11ad94a0();
  /* 11ad93e2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad93e5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad93e8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad93eb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11ad93ee jmp 0x11ad945d */
  goto L_11ad945d;
L_11ad93f0:;
  /* 11ad93f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad93f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad93f5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ad93f7 mov ecx, dword ptr [0x11af6fb8] */
  ECX = (r32((uint32_t)(0x11af6fb8)));
  /* 11ad93fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ad93ff mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11ad9403 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad9409 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad940b je 0x11ad9438 */
  if (C.zf) goto L_11ad9438;
  /* 11ad940d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9411 jbe 0x11ad9438 */
  if ((C.cf||C.zf)) goto L_11ad9438;
  /* 11ad9413 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad9416 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad9419 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ad941b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11ad941d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad9420 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9423 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ad9426 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad9429 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad942c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11ad942f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad9432 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad9435 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11ad9438:;
  /* 11ad9438 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad943b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad943e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ad9440 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11ad9442 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad9445 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9448 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ad944b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad944e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9451 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11ad9454 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad9457 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad945a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11ad945d:;
  /* 11ad945d jmp 0x11ad9371 */
  goto L_11ad9371;
L_11ad9462:;
  /* 11ad9462 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9466 je 0x11ad9474 */
  if (C.zf) goto L_11ad9474;
  /* 11ad9468 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ad946a call 0x11acd100 */
  push32(0x11ad946fu); f_11acd100();
  /* 11ad946f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9472 jmp 0x11ad947f */
  goto L_11ad947f;
L_11ad9474:;
  /* 11ad9474 push 0x11af9654 */
  push32((uint32_t)(0x11af9654u));
  /* 11ad9479 call dword ptr [0x11afb394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb394))), 0x11ad947fu);
L_11ad947f:;
  /* 11ad947f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9483 jbe 0x11ad9493 */
  if ((C.cf||C.zf)) goto L_11ad9493;
  /* 11ad9485 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad9488 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11ad948b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad948e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad9491 jmp 0x11ad9495 */
  goto L_11ad9495;
L_11ad9493:;
  /* 11ad9493 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ad9495:;
  /* 11ad9495 mov esp, ebp */
  ESP = (EBP);
  /* 11ad9497 pop ebp */
  EBP = (pop32());
  /* 11ad9498 ret  */
  ESPCHK(0x11ad9310u, _esp0);
  ESP += 4; return;
}

/* FUN_100194a0 @ 0x11ad94a0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_11ad94a0(void) {
  FTRACE(0x11ad94a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad94a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad94a1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad94a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad94a6 push esi */
  push32((uint32_t)(ESI));
  /* 11ad94a7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11ad94ab mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ad94ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad94b1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad94b4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad94b7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad94bb ja 0x11ad9a08 */
  if ((!C.cf&&!C.zf)) goto L_11ad9a08;
  /* 11ad94c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad94c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ad94c6 mov dl, byte ptr [eax + 0x11ad9a69] */
  DL = (r8((uint32_t)(EAX + 0x11ad9a69)));
  /* 11ad94cc jmp dword ptr [edx*4 + 0x11ad9a0d] */
  switch (EDX) {
    case 0: goto L_11ad99e6;
    case 1: goto L_11ad94f5;
    case 2: goto L_11ad953b;
    case 3: goto L_11ad9688;
    case 4: goto L_11ad96b0;
    case 5: goto L_11ad974f;
    case 6: goto L_11ad97bb;
    case 7: goto L_11ad97e4;
    case 8: goto L_11ad9825;
    case 9: goto L_11ad9907;
    case 10: goto L_11ad996e;
    case 11: goto L_11ad99bb;
    case 12: goto L_11ad94d3;
    case 13: goto L_11ad9518;
    case 14: goto L_11ad955e;
    case 15: goto L_11ad965e;
    case 16: goto L_11ad96f5;
    case 17: goto L_11ad9722;
    case 18: goto L_11ad9777;
    case 19: goto L_11ad97fb;
    case 20: goto L_11ad98a9;
    case 21: goto L_11ad9938;
    case 22: goto L_11ad9a08;
    default: x86_unimpl("switch@0x11ad94cc out of table"); return;
  }
L_11ad94d3:;
  /* 11ad94d3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad94d6 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad94d7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad94da push edx */
  push32((uint32_t)(EDX));
  /* 11ad94db mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad94de mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11ad94e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ad94e4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11ad94e7 push eax */
  push32((uint32_t)(EAX));
  /* 11ad94e8 call 0x11ad9ac0 */
  push32(0x11ad94edu); f_11ad9ac0();
  /* 11ad94ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad94f0 jmp 0x11ad9a08 */
  goto L_11ad9a08;
L_11ad94f5:;
  /* 11ad94f5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad94f8 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad94f9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad94fc push edx */
  push32((uint32_t)(EDX));
  /* 11ad94fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad9500 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11ad9503 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ad9506 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11ad950a push eax */
  push32((uint32_t)(EAX));
  /* 11ad950b call 0x11ad9ac0 */
  push32(0x11ad9510u); f_11ad9ac0();
  /* 11ad9510 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9513 jmp 0x11ad9a08 */
  goto L_11ad9a08;
L_11ad9518:;
  /* 11ad9518 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad951b push ecx */
  push32((uint32_t)(ECX));
  /* 11ad951c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad951f push edx */
  push32((uint32_t)(EDX));
  /* 11ad9520 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad9523 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ad9526 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ad9529 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11ad952d push eax */
  push32((uint32_t)(EAX));
  /* 11ad952e call 0x11ad9ac0 */
  push32(0x11ad9533u); f_11ad9ac0();
  /* 11ad9533 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9536 jmp 0x11ad9a08 */
  goto L_11ad9a08;
L_11ad953b:;
  /* 11ad953b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad953e push ecx */
  push32((uint32_t)(ECX));
  /* 11ad953f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad9542 push edx */
  push32((uint32_t)(EDX));
  /* 11ad9543 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad9546 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ad9549 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ad954c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11ad9550 push eax */
  push32((uint32_t)(EAX));
  /* 11ad9551 call 0x11ad9ac0 */
  push32(0x11ad9556u); f_11ad9ac0();
  /* 11ad9556 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9559 jmp 0x11ad9a08 */
  goto L_11ad9a08;
L_11ad955e:;
  /* 11ad955e cmp dword ptr [0x11af9630], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9630))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9565 je 0x11ad95e6 */
  if (C.zf) goto L_11ad95e6;
  /* 11ad9567 mov dword ptr [0x11af9630], 0 */
  w32((uint32_t)(0x11af9630), (0x0u));
  /* 11ad9571 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ad9574 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad9575 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad9578 push edx */
  push32((uint32_t)(EDX));
  /* 11ad9579 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad957c push eax */
  push32((uint32_t)(EAX));
  /* 11ad957d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad9580 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad9581 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ad9584 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11ad958a push eax */
  push32((uint32_t)(EAX));
  /* 11ad958b call 0x11ad9c70 */
  push32(0x11ad9590u); f_11ad9c70();
  /* 11ad9590 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9593 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad9596 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9599 jne 0x11ad95a0 */
  if (!C.zf) goto L_11ad95a0;
  /* 11ad959b jmp 0x11ad9a08 */
  goto L_11ad9a08;
L_11ad95a0:;
  /* 11ad95a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad95a3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ad95a5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11ad95a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad95ab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad95ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad95b0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad95b3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ad95b5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad95b8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad95ba sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad95bd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad95c0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ad95c2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ad95c5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad95c6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad95c9 push edx */
  push32((uint32_t)(EDX));
  /* 11ad95ca mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad95cd push eax */
  push32((uint32_t)(EAX));
  /* 11ad95ce mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad95d1 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad95d2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ad95d5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11ad95db push eax */
  push32((uint32_t)(EAX));
  /* 11ad95dc call 0x11ad9c70 */
  push32(0x11ad95e1u); f_11ad9c70();
  /* 11ad95e1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad95e4 jmp 0x11ad9659 */
  goto L_11ad9659;
L_11ad95e6:;
  /* 11ad95e6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ad95e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad95ea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad95ed push edx */
  push32((uint32_t)(EDX));
  /* 11ad95ee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad95f1 push eax */
  push32((uint32_t)(EAX));
  /* 11ad95f2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad95f5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad95f6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ad95f9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11ad95ff push eax */
  push32((uint32_t)(EAX));
  /* 11ad9600 call 0x11ad9c70 */
  push32(0x11ad9605u); f_11ad9c70();
  /* 11ad9605 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9608 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad960b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad960e jne 0x11ad9615 */
  if (!C.zf) goto L_11ad9615;
  /* 11ad9610 jmp 0x11ad9a08 */
  goto L_11ad9a08;
L_11ad9615:;
  /* 11ad9615 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad9618 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ad961a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11ad961d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad9620 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad9622 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9625 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad9628 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ad962a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad962d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad962f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad9632 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad9635 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ad9637 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ad963a push ecx */
  push32((uint32_t)(ECX));
  /* 11ad963b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad963e push edx */
  push32((uint32_t)(EDX));
  /* 11ad963f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad9642 push eax */
  push32((uint32_t)(EAX));
  /* 11ad9643 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad9646 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad9647 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ad964a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11ad9650 push eax */
  push32((uint32_t)(EAX));
  /* 11ad9651 call 0x11ad9c70 */
  push32(0x11ad9656u); f_11ad9c70();
  /* 11ad9656 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ad9659:;
  /* 11ad9659 jmp 0x11ad9a08 */
  goto L_11ad9a08;
L_11ad965e:;
  /* 11ad965e mov ecx, dword ptr [0x11af9630] */
  ECX = (r32((uint32_t)(0x11af9630)));
  /* 11ad9664 mov dword ptr [0x11af9640], ecx */
  w32((uint32_t)(0x11af9640), (ECX));
  /* 11ad966a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad966d push edx */
  push32((uint32_t)(EDX));
  /* 11ad966e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad9671 push eax */
  push32((uint32_t)(EAX));
  /* 11ad9672 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad9674 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad9677 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ad967a push edx */
  push32((uint32_t)(EDX));
  /* 11ad967b call 0x11ad9b10 */
  push32(0x11ad9680u); f_11ad9b10();
  /* 11ad9680 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9683 jmp 0x11ad9a08 */
  goto L_11ad9a08;
L_11ad9688:;
  /* 11ad9688 mov eax, dword ptr [0x11af9630] */
  EAX = (r32((uint32_t)(0x11af9630)));
  /* 11ad968d mov dword ptr [0x11af9640], eax */
  w32((uint32_t)(0x11af9640), (EAX));
  /* 11ad9692 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad9695 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad9696 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad9699 push edx */
  push32((uint32_t)(EDX));
  /* 11ad969a push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad969c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad969f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ad96a2 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad96a3 call 0x11ad9b10 */
  push32(0x11ad96a8u); f_11ad9b10();
  /* 11ad96a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad96ab jmp 0x11ad9a08 */
  goto L_11ad9a08;
L_11ad96b0:;
  /* 11ad96b0 mov edx, dword ptr [0x11af9630] */
  EDX = (r32((uint32_t)(0x11af9630)));
  /* 11ad96b6 mov dword ptr [0x11af9640], edx */
  w32((uint32_t)(0x11af9640), (EDX));
  /* 11ad96bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad96bf mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ad96c2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ad96c3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 11ad96c8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ad96ca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ad96cd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad96d1 jne 0x11ad96da */
  if (!C.zf) goto L_11ad96da;
  /* 11ad96d3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_11ad96da:;
  /* 11ad96da mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad96dd push edx */
  push32((uint32_t)(EDX));
  /* 11ad96de mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad96e1 push eax */
  push32((uint32_t)(EAX));
  /* 11ad96e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad96e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad96e7 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad96e8 call 0x11ad9b10 */
  push32(0x11ad96edu); f_11ad9b10();
  /* 11ad96ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad96f0 jmp 0x11ad9a08 */
  goto L_11ad9a08;
L_11ad96f5:;
  /* 11ad96f5 mov edx, dword ptr [0x11af9630] */
  EDX = (r32((uint32_t)(0x11af9630)));
  /* 11ad96fb mov dword ptr [0x11af9640], edx */
  w32((uint32_t)(0x11af9640), (EDX));
  /* 11ad9701 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad9704 push eax */
  push32((uint32_t)(EAX));
  /* 11ad9705 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad9708 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad9709 push 3 */
  push32((uint32_t)(0x3u));
  /* 11ad970b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad970e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11ad9711 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9714 push eax */
  push32((uint32_t)(EAX));
  /* 11ad9715 call 0x11ad9b10 */
  push32(0x11ad971au); f_11ad9b10();
  /* 11ad971a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad971d jmp 0x11ad9a08 */
  goto L_11ad9a08;
L_11ad9722:;
  /* 11ad9722 mov ecx, dword ptr [0x11af9630] */
  ECX = (r32((uint32_t)(0x11af9630)));
  /* 11ad9728 mov dword ptr [0x11af9640], ecx */
  w32((uint32_t)(0x11af9640), (ECX));
  /* 11ad972e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad9731 push edx */
  push32((uint32_t)(EDX));
  /* 11ad9732 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad9735 push eax */
  push32((uint32_t)(EAX));
  /* 11ad9736 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad9738 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad973b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11ad973e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9741 push edx */
  push32((uint32_t)(EDX));
  /* 11ad9742 call 0x11ad9b10 */
  push32(0x11ad9747u); f_11ad9b10();
  /* 11ad9747 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad974a jmp 0x11ad9a08 */
  goto L_11ad9a08;
L_11ad974f:;
  /* 11ad974f mov eax, dword ptr [0x11af9630] */
  EAX = (r32((uint32_t)(0x11af9630)));
  /* 11ad9754 mov dword ptr [0x11af9640], eax */
  w32((uint32_t)(0x11af9640), (EAX));
  /* 11ad9759 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad975c push ecx */
  push32((uint32_t)(ECX));
  /* 11ad975d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad9760 push edx */
  push32((uint32_t)(EDX));
  /* 11ad9761 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad9763 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad9766 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ad9769 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad976a call 0x11ad9b10 */
  push32(0x11ad976fu); f_11ad9b10();
  /* 11ad976f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9772 jmp 0x11ad9a08 */
  goto L_11ad9a08;
L_11ad9777:;
  /* 11ad9777 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad977a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad977e jg 0x11ad979c */
  if ((!C.zf&&C.sf==C.of)) goto L_11ad979c;
  /* 11ad9780 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad9783 push eax */
  push32((uint32_t)(EAX));
  /* 11ad9784 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad9787 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad9788 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ad978b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11ad9791 push eax */
  push32((uint32_t)(EAX));
  /* 11ad9792 call 0x11ad9ac0 */
  push32(0x11ad9797u); f_11ad9ac0();
  /* 11ad9797 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad979a jmp 0x11ad97b6 */
  goto L_11ad97b6;
L_11ad979c:;
  /* 11ad979c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad979f push ecx */
  push32((uint32_t)(ECX));
  /* 11ad97a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad97a3 push edx */
  push32((uint32_t)(EDX));
  /* 11ad97a4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ad97a7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11ad97ad push ecx */
  push32((uint32_t)(ECX));
  /* 11ad97ae call 0x11ad9ac0 */
  push32(0x11ad97b3u); f_11ad9ac0();
  /* 11ad97b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ad97b6:;
  /* 11ad97b6 jmp 0x11ad9a08 */
  goto L_11ad9a08;
L_11ad97bb:;
  /* 11ad97bb mov edx, dword ptr [0x11af9630] */
  EDX = (r32((uint32_t)(0x11af9630)));
  /* 11ad97c1 mov dword ptr [0x11af9640], edx */
  w32((uint32_t)(0x11af9640), (EDX));
  /* 11ad97c7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad97ca push eax */
  push32((uint32_t)(EAX));
  /* 11ad97cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad97ce push ecx */
  push32((uint32_t)(ECX));
  /* 11ad97cf push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad97d1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad97d4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ad97d6 push eax */
  push32((uint32_t)(EAX));
  /* 11ad97d7 call 0x11ad9b10 */
  push32(0x11ad97dcu); f_11ad9b10();
  /* 11ad97dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad97df jmp 0x11ad9a08 */
  goto L_11ad9a08;
L_11ad97e4:;
  /* 11ad97e4 mov ecx, dword ptr [0x11af9630] */
  ECX = (r32((uint32_t)(0x11af9630)));
  /* 11ad97ea mov dword ptr [0x11af9640], ecx */
  w32((uint32_t)(0x11af9640), (ECX));
  /* 11ad97f0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad97f3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11ad97f6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ad97f9 jmp 0x11ad984d */
  goto L_11ad984d;
L_11ad97fb:;
  /* 11ad97fb mov ecx, dword ptr [0x11af9630] */
  ECX = (r32((uint32_t)(0x11af9630)));
  /* 11ad9801 mov dword ptr [0x11af9640], ecx */
  w32((uint32_t)(0x11af9640), (ECX));
  /* 11ad9807 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad980a push edx */
  push32((uint32_t)(EDX));
  /* 11ad980b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad980e push eax */
  push32((uint32_t)(EAX));
  /* 11ad980f push 1 */
  push32((uint32_t)(0x1u));
  /* 11ad9811 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad9814 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11ad9817 push edx */
  push32((uint32_t)(EDX));
  /* 11ad9818 call 0x11ad9b10 */
  push32(0x11ad981du); f_11ad9b10();
  /* 11ad981d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9820 jmp 0x11ad9a08 */
  goto L_11ad9a08;
L_11ad9825:;
  /* 11ad9825 mov eax, dword ptr [0x11af9630] */
  EAX = (r32((uint32_t)(0x11af9630)));
  /* 11ad982a mov dword ptr [0x11af9640], eax */
  w32((uint32_t)(0x11af9640), (EAX));
  /* 11ad982f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad9832 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9836 jne 0x11ad9841 */
  if (!C.zf) goto L_11ad9841;
  /* 11ad9838 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 11ad983f jmp 0x11ad984d */
  goto L_11ad984d;
L_11ad9841:;
  /* 11ad9841 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad9844 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11ad9847 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad984a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11ad984d:;
  /* 11ad984d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad9850 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11ad9853 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9856 jge 0x11ad9861 */
  if ((C.sf==C.of)) goto L_11ad9861;
  /* 11ad9858 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ad985f jmp 0x11ad988e */
  goto L_11ad988e;
L_11ad9861:;
  /* 11ad9861 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad9864 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11ad9867 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ad9868 mov ecx, 7 */
  ECX = (0x7u);
  /* 11ad986d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ad986f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad9872 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad9875 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11ad9878 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ad9879 mov ecx, 7 */
  ECX = (0x7u);
  /* 11ad987e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ad9880 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9883 jl 0x11ad988e */
  if ((C.sf!=C.of)) goto L_11ad988e;
  /* 11ad9885 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad9888 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad988b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ad988e:;
  /* 11ad988e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad9891 push eax */
  push32((uint32_t)(EAX));
  /* 11ad9892 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad9895 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad9896 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad9898 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad989b push edx */
  push32((uint32_t)(EDX));
  /* 11ad989c call 0x11ad9b10 */
  push32(0x11ad98a1u); f_11ad9b10();
  /* 11ad98a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad98a4 jmp 0x11ad9a08 */
  goto L_11ad9a08;
L_11ad98a9:;
  /* 11ad98a9 cmp dword ptr [0x11af9630], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9630))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad98b0 je 0x11ad98e0 */
  if (C.zf) goto L_11ad98e0;
  /* 11ad98b2 mov dword ptr [0x11af9630], 0 */
  w32((uint32_t)(0x11af9630), (0x0u));
  /* 11ad98bc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ad98bf push eax */
  push32((uint32_t)(EAX));
  /* 11ad98c0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad98c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad98c4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad98c7 push edx */
  push32((uint32_t)(EDX));
  /* 11ad98c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad98cb push eax */
  push32((uint32_t)(EAX));
  /* 11ad98cc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ad98cf mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11ad98d5 push edx */
  push32((uint32_t)(EDX));
  /* 11ad98d6 call 0x11ad9c70 */
  push32(0x11ad98dbu); f_11ad9c70();
  /* 11ad98db add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad98de jmp 0x11ad9902 */
  goto L_11ad9902;
L_11ad98e0:;
  /* 11ad98e0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ad98e3 push eax */
  push32((uint32_t)(EAX));
  /* 11ad98e4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad98e7 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad98e8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad98eb push edx */
  push32((uint32_t)(EDX));
  /* 11ad98ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad98ef push eax */
  push32((uint32_t)(EAX));
  /* 11ad98f0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ad98f3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11ad98f9 push edx */
  push32((uint32_t)(EDX));
  /* 11ad98fa call 0x11ad9c70 */
  push32(0x11ad98ffu); f_11ad9c70();
  /* 11ad98ff add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ad9902:;
  /* 11ad9902 jmp 0x11ad9a08 */
  goto L_11ad9a08;
L_11ad9907:;
  /* 11ad9907 mov dword ptr [0x11af9630], 0 */
  w32((uint32_t)(0x11af9630), (0x0u));
  /* 11ad9911 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ad9914 push eax */
  push32((uint32_t)(EAX));
  /* 11ad9915 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad9918 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad9919 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad991c push edx */
  push32((uint32_t)(EDX));
  /* 11ad991d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad9920 push eax */
  push32((uint32_t)(EAX));
  /* 11ad9921 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ad9924 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11ad992a push edx */
  push32((uint32_t)(EDX));
  /* 11ad992b call 0x11ad9c70 */
  push32(0x11ad9930u); f_11ad9c70();
  /* 11ad9930 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9933 jmp 0x11ad9a08 */
  goto L_11ad9a08;
L_11ad9938:;
  /* 11ad9938 mov eax, dword ptr [0x11af9630] */
  EAX = (r32((uint32_t)(0x11af9630)));
  /* 11ad993d mov dword ptr [0x11af9640], eax */
  w32((uint32_t)(0x11af9640), (EAX));
  /* 11ad9942 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad9945 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11ad9948 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ad9949 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11ad994e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ad9950 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ad9953 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad9956 push edx */
  push32((uint32_t)(EDX));
  /* 11ad9957 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad995a push eax */
  push32((uint32_t)(EAX));
  /* 11ad995b push 2 */
  push32((uint32_t)(0x2u));
  /* 11ad995d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad9960 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad9961 call 0x11ad9b10 */
  push32(0x11ad9966u); f_11ad9b10();
  /* 11ad9966 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9969 jmp 0x11ad9a08 */
  goto L_11ad9a08;
L_11ad996e:;
  /* 11ad996e mov edx, dword ptr [0x11af9630] */
  EDX = (r32((uint32_t)(0x11af9630)));
  /* 11ad9974 mov dword ptr [0x11af9640], edx */
  w32((uint32_t)(0x11af9640), (EDX));
  /* 11ad997a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad997d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 11ad9980 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ad9981 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11ad9986 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ad9988 mov ecx, eax */
  ECX = (EAX);
  /* 11ad998a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad998d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad9990 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad9993 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11ad9996 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ad9997 mov esi, 0x64 */
  ESI = (0x64u);
  /* 11ad999c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ad999e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad99a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ad99a3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad99a6 push eax */
  push32((uint32_t)(EAX));
  /* 11ad99a7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad99aa push ecx */
  push32((uint32_t)(ECX));
  /* 11ad99ab push 4 */
  push32((uint32_t)(0x4u));
  /* 11ad99ad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad99b0 push edx */
  push32((uint32_t)(EDX));
  /* 11ad99b1 call 0x11ad9b10 */
  push32(0x11ad99b6u); f_11ad9b10();
  /* 11ad99b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad99b9 jmp 0x11ad9a08 */
  goto L_11ad9a08;
L_11ad99bb:;
  /* 11ad99bb call 0x11adaad0 */
  push32(0x11ad99c0u); f_11adaad0();
  /* 11ad99c0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad99c3 push eax */
  push32((uint32_t)(EAX));
  /* 11ad99c4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad99c7 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad99c8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad99cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad99cd cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad99d1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 11ad99d4 mov ecx, dword ptr [eax*4 + 0x11af82c8] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11af82c8)));
  /* 11ad99db push ecx */
  push32((uint32_t)(ECX));
  /* 11ad99dc call 0x11ad9ac0 */
  push32(0x11ad99e1u); f_11ad9ac0();
  /* 11ad99e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad99e4 jmp 0x11ad9a08 */
  goto L_11ad9a08;
L_11ad99e6:;
  /* 11ad99e6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad99e9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ad99eb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 11ad99ee mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad99f1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad99f3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad99f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad99f9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ad99fb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad99fe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad9a00 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad9a03 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad9a06 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11ad9a08:;
  /* 11ad9a08 pop esi */
  ESI = (pop32());
  /* 11ad9a09 mov esp, ebp */
  ESP = (EBP);
  /* 11ad9a0b pop ebp */
  EBP = (pop32());
  /* 11ad9a0c ret  */
  ESPCHK(0x11ad94a0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x11ad9ac0 (72 bytes, 30 insns) */
void f_11ad9ac0(void) {
  FTRACE(0x11ad9ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad9ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad9ac1 mov ebp, esp */
  EBP = (ESP);
L_11ad9ac3:;
  /* 11ad9ac3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad9ac6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9ac9 je 0x11ad9b06 */
  if (C.zf) goto L_11ad9b06;
  /* 11ad9acb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad9ace movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ad9ad1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad9ad3 je 0x11ad9b06 */
  if (C.zf) goto L_11ad9b06;
  /* 11ad9ad5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad9ad8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ad9ada mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad9add mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ad9adf mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11ad9ae1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad9ae4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad9ae6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9ae9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad9aec mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ad9aee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad9af1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9af4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11ad9af7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad9afa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ad9afc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad9aff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad9b02 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ad9b04 jmp 0x11ad9ac3 */
  goto L_11ad9ac3;
L_11ad9b06:;
  /* 11ad9b06 pop ebp */
  EBP = (pop32());
  /* 11ad9b07 ret  */
  ESPCHK(0x11ad9ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019b10 @ 0x11ad9b10 (173 bytes, 64 insns) */
void f_11ad9b10(void) {
  FTRACE(0x11ad9b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad9b10 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad9b11 mov ebp, esp */
  EBP = (ESP);
  /* 11ad9b13 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad9b14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ad9b1b cmp dword ptr [0x11af9640], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9640))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9b22 je 0x11ad9b3a */
  if (C.zf) goto L_11ad9b3a;
  /* 11ad9b24 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad9b27 push eax */
  push32((uint32_t)(EAX));
  /* 11ad9b28 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad9b2b push ecx */
  push32((uint32_t)(ECX));
  /* 11ad9b2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad9b2f push edx */
  push32((uint32_t)(EDX));
  /* 11ad9b30 call 0x11ad9bc0 */
  push32(0x11ad9b35u); f_11ad9bc0();
  /* 11ad9b35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9b38 jmp 0x11ad9bb9 */
  goto L_11ad9bb9;
L_11ad9b3a:;
  /* 11ad9b3a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad9b3d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad9b40 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9b42 jae 0x11ad9bb0 */
  if (!C.cf) goto L_11ad9bb0;
  /* 11ad9b44 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad9b47 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad9b4a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11ad9b4d jmp 0x11ad9b58 */
  goto L_11ad9b58;
L_11ad9b4f:;
  /* 11ad9b4f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad9b52 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad9b55 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11ad9b58:;
  /* 11ad9b58 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad9b5b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9b5e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad9b60 je 0x11ad9b94 */
  if (C.zf) goto L_11ad9b94;
  /* 11ad9b62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad9b65 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ad9b66 mov ecx, 0xa */
  ECX = (0xau);
  /* 11ad9b6b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ad9b6d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9b70 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad9b73 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ad9b75 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad9b78 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 11ad9b7b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad9b7e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ad9b7f mov ecx, 0xa */
  ECX = (0xau);
  /* 11ad9b84 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ad9b86 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ad9b89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad9b8c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9b8f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ad9b92 jmp 0x11ad9b4f */
  goto L_11ad9b4f;
L_11ad9b94:;
  /* 11ad9b94 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad9b97 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ad9b99 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9b9c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad9b9f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11ad9ba1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad9ba4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ad9ba6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad9ba9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad9bac mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11ad9bae jmp 0x11ad9bb9 */
  goto L_11ad9bb9;
L_11ad9bb0:;
  /* 11ad9bb0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad9bb3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11ad9bb9:;
  /* 11ad9bb9 mov esp, ebp */
  ESP = (EBP);
  /* 11ad9bbb pop ebp */
  EBP = (pop32());
  /* 11ad9bbc ret  */
  ESPCHK(0x11ad9b10u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x11ad9bc0 (172 bytes, 65 insns) */
void f_11ad9bc0(void) {
  FTRACE(0x11ad9bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad9bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad9bc1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad9bc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad9bc6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad9bc9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ad9bcb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ad9bce mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad9bd1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9bd4 jbe 0x11ad9c1b */
  if ((C.cf||C.zf)) goto L_11ad9c1b;
L_11ad9bd6:;
  /* 11ad9bd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad9bd9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ad9bda mov ecx, 0xa */
  ECX = (0xau);
  /* 11ad9bdf idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ad9be1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9be4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad9be7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11ad9be9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad9bec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9bef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ad9bf2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad9bf5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ad9bf7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad9bfa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad9bfd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ad9bff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad9c02 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ad9c03 mov ecx, 0xa */
  ECX = (0xau);
  /* 11ad9c08 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ad9c0a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ad9c0d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9c11 jle 0x11ad9c1b */
  if ((C.zf||C.sf!=C.of)) goto L_11ad9c1b;
  /* 11ad9c13 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad9c16 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9c19 ja 0x11ad9bd6 */
  if ((!C.cf&&!C.zf)) goto L_11ad9bd6;
L_11ad9c1b:;
  /* 11ad9c1b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad9c1e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ad9c20 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ad9c23 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad9c26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad9c29 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11ad9c2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad9c2e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad9c31 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ad9c34:;
  /* 11ad9c34 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad9c37 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ad9c39 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 11ad9c3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad9c3f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad9c42 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ad9c44 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11ad9c46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad9c49 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad9c4c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ad9c4f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad9c52 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11ad9c55 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11ad9c57 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad9c5a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9c5d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ad9c60 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad9c63 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9c66 jb 0x11ad9c34 */
  if (C.cf) goto L_11ad9c34;
  /* 11ad9c68 mov esp, ebp */
  ESP = (EBP);
  /* 11ad9c6a pop ebp */
  EBP = (pop32());
  /* 11ad9c6b ret  */
  ESPCHK(0x11ad9bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019c70 @ 0x11ad9c70 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_11ad9c70(void) {
  FTRACE(0x11ad9c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad9c70 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad9c71 mov ebp, esp */
  EBP = (ESP);
  /* 11ad9c73 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11ad9c76:;
  /* 11ad9c76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad9c79 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ad9c7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad9c7e je 0x11ada0ec */
  if (C.zf) goto L_11ada0ec;
  /* 11ad9c84 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad9c87 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9c8a je 0x11ada0ec */
  if (C.zf) goto L_11ada0ec;
  /* 11ad9c90 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ad9c94 mov dword ptr [0x11af9640], 0 */
  w32((uint32_t)(0x11af9640), (0x0u));
  /* 11ad9c9e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ad9ca5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad9ca8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad9cab jmp 0x11ad9cb6 */
  goto L_11ad9cb6;
L_11ad9cad:;
  /* 11ad9cad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad9cb0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9cb3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11ad9cb6:;
  /* 11ad9cb6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad9cb9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ad9cbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad9cbf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ad9cc2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad9cc5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9cc8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ad9ccb cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9ccd jne 0x11ad9cd1 */
  if (!C.zf) goto L_11ad9cd1;
  /* 11ad9ccf jmp 0x11ad9cad */
  goto L_11ad9cad;
L_11ad9cd1:;
  /* 11ad9cd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad9cd4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad9cd7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ad9cda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad9cdd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ad9ce0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11ad9ce3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad9ce6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad9ce9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11ad9cec cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9cf0 ja 0x11ada040 */
  if ((!C.cf&&!C.zf)) goto L_11ada040;
  /* 11ad9cf6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad9cf9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad9cfb mov al, byte ptr [ecx + 0x11ada11c] */
  AL = (r8((uint32_t)(ECX + 0x11ada11c)));
  /* 11ad9d01 jmp dword ptr [eax*4 + 0x11ada0f0] */
  switch (EAX) {
    case 0: goto L_11ad9f5f;
    case 1: goto L_11ad9e43;
    case 2: goto L_11ad9dce;
    case 3: goto L_11ad9d08;
    case 4: goto L_11ad9d46;
    case 5: goto L_11ad9da7;
    case 6: goto L_11ad9df5;
    case 7: goto L_11ad9e1c;
    case 8: goto L_11ad9e8a;
    case 9: goto L_11ad9d84;
    case 10: goto L_11ada040;
    default: x86_unimpl("switch@0x11ad9d01 out of table"); return;
  }
L_11ad9d08:;
  /* 11ad9d08 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad9d0b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11ad9d0e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad9d11 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad9d14 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ad9d17 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9d1b ja 0x11ad9d41 */
  if ((!C.cf&&!C.zf)) goto L_11ad9d41;
  /* 11ad9d1d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad9d20 jmp dword ptr [ecx*4 + 0x11ada16f] */
  switch (ECX) {
    case 0: goto L_11ad9d27;
    case 1: goto L_11ad9d31;
    case 2: goto L_11ad9d37;
    case 3: goto L_11ad9d3d;
    case 4: goto L_11ad9d65;
    case 5: goto L_11ad9d6f;
    case 6: goto L_11ad9d75;
    case 7: goto L_11ad9d7b;
    default: x86_unimpl("switch@0x11ad9d20 out of table"); return;
  }
L_11ad9d27:;
  /* 11ad9d27 mov dword ptr [0x11af9640], 1 */
  w32((uint32_t)(0x11af9640), (0x1u));
L_11ad9d31:;
  /* 11ad9d31 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 11ad9d35 jmp 0x11ad9d41 */
  goto L_11ad9d41;
L_11ad9d37:;
  /* 11ad9d37 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 11ad9d3b jmp 0x11ad9d41 */
  goto L_11ad9d41;
L_11ad9d3d:;
  /* 11ad9d3d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_11ad9d41:;
  /* 11ad9d41 jmp 0x11ada040 */
  goto L_11ada040;
L_11ad9d46:;
  /* 11ad9d46 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad9d49 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11ad9d4c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ad9d4f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad9d52 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11ad9d55 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9d59 ja 0x11ad9d7f */
  if ((!C.cf&&!C.zf)) goto L_11ad9d7f;
  /* 11ad9d5b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ad9d5e jmp dword ptr [ecx*4 + 0x11ada17f] */
  switch (ECX) {
    case 0: goto L_11ad9d65;
    case 1: goto L_11ad9d6f;
    case 2: goto L_11ad9d75;
    case 3: goto L_11ad9d7b;
    default: x86_unimpl("switch@0x11ad9d5e out of table"); return;
  }
L_11ad9d65:;
  /* 11ad9d65 mov dword ptr [0x11af9640], 1 */
  w32((uint32_t)(0x11af9640), (0x1u));
L_11ad9d6f:;
  /* 11ad9d6f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 11ad9d73 jmp 0x11ad9d7f */
  goto L_11ad9d7f;
L_11ad9d75:;
  /* 11ad9d75 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 11ad9d79 jmp 0x11ad9d7f */
  goto L_11ad9d7f;
L_11ad9d7b:;
  /* 11ad9d7b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_11ad9d7f:;
  /* 11ad9d7f jmp 0x11ada040 */
  goto L_11ada040;
L_11ad9d84:;
  /* 11ad9d84 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad9d87 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11ad9d8a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9d8e je 0x11ad9d98 */
  if (C.zf) goto L_11ad9d98;
  /* 11ad9d90 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9d94 je 0x11ad9d9e */
  if (C.zf) goto L_11ad9d9e;
  /* 11ad9d96 jmp 0x11ad9da2 */
  goto L_11ad9da2;
L_11ad9d98:;
  /* 11ad9d98 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 11ad9d9c jmp 0x11ad9da2 */
  goto L_11ad9da2;
L_11ad9d9e:;
  /* 11ad9d9e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_11ad9da2:;
  /* 11ad9da2 jmp 0x11ada040 */
  goto L_11ada040;
L_11ad9da7:;
  /* 11ad9da7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad9daa mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ad9dad cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9db1 je 0x11ad9dbb */
  if (C.zf) goto L_11ad9dbb;
  /* 11ad9db3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9db7 je 0x11ad9dc5 */
  if (C.zf) goto L_11ad9dc5;
  /* 11ad9db9 jmp 0x11ad9dc9 */
  goto L_11ad9dc9;
L_11ad9dbb:;
  /* 11ad9dbb mov dword ptr [0x11af9640], 1 */
  w32((uint32_t)(0x11af9640), (0x1u));
L_11ad9dc5:;
  /* 11ad9dc5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_11ad9dc9:;
  /* 11ad9dc9 jmp 0x11ada040 */
  goto L_11ada040;
L_11ad9dce:;
  /* 11ad9dce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad9dd1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11ad9dd4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9dd8 je 0x11ad9de2 */
  if (C.zf) goto L_11ad9de2;
  /* 11ad9dda cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9dde je 0x11ad9dec */
  if (C.zf) goto L_11ad9dec;
  /* 11ad9de0 jmp 0x11ad9df0 */
  goto L_11ad9df0;
L_11ad9de2:;
  /* 11ad9de2 mov dword ptr [0x11af9640], 1 */
  w32((uint32_t)(0x11af9640), (0x1u));
L_11ad9dec:;
  /* 11ad9dec mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_11ad9df0:;
  /* 11ad9df0 jmp 0x11ada040 */
  goto L_11ada040;
L_11ad9df5:;
  /* 11ad9df5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad9df8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 11ad9dfb cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9dff je 0x11ad9e09 */
  if (C.zf) goto L_11ad9e09;
  /* 11ad9e01 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9e05 je 0x11ad9e13 */
  if (C.zf) goto L_11ad9e13;
  /* 11ad9e07 jmp 0x11ad9e17 */
  goto L_11ad9e17;
L_11ad9e09:;
  /* 11ad9e09 mov dword ptr [0x11af9640], 1 */
  w32((uint32_t)(0x11af9640), (0x1u));
L_11ad9e13:;
  /* 11ad9e13 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_11ad9e17:;
  /* 11ad9e17 jmp 0x11ada040 */
  goto L_11ada040;
L_11ad9e1c:;
  /* 11ad9e1c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad9e1f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11ad9e22 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9e26 je 0x11ad9e30 */
  if (C.zf) goto L_11ad9e30;
  /* 11ad9e28 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9e2c je 0x11ad9e3a */
  if (C.zf) goto L_11ad9e3a;
  /* 11ad9e2e jmp 0x11ad9e3e */
  goto L_11ad9e3e;
L_11ad9e30:;
  /* 11ad9e30 mov dword ptr [0x11af9640], 1 */
  w32((uint32_t)(0x11af9640), (0x1u));
L_11ad9e3a:;
  /* 11ad9e3a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_11ad9e3e:;
  /* 11ad9e3e jmp 0x11ada040 */
  goto L_11ada040;
L_11ad9e43:;
  /* 11ad9e43 push 0x11af4abc */
  push32((uint32_t)(0x11af4abcu));
  /* 11ad9e48 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad9e4b push ecx */
  push32((uint32_t)(ECX));
  /* 11ad9e4c call 0x11ada6a0 */
  push32(0x11ad9e51u); f_11ada6a0();
  /* 11ad9e51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9e54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad9e56 jne 0x11ad9e63 */
  if (!C.zf) goto L_11ad9e63;
  /* 11ad9e58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad9e5b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9e5e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ad9e61 jmp 0x11ad9e81 */
  goto L_11ad9e81;
L_11ad9e63:;
  /* 11ad9e63 push 0x11af4ab8 */
  push32((uint32_t)(0x11af4ab8u));
  /* 11ad9e68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad9e6b push eax */
  push32((uint32_t)(EAX));
  /* 11ad9e6c call 0x11ada6a0 */
  push32(0x11ad9e71u); f_11ada6a0();
  /* 11ad9e71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9e74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad9e76 jne 0x11ad9e81 */
  if (!C.zf) goto L_11ad9e81;
  /* 11ad9e78 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad9e7b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9e7e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ad9e81:;
  /* 11ad9e81 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 11ad9e85 jmp 0x11ada040 */
  goto L_11ada040;
L_11ad9e8a:;
  /* 11ad9e8a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad9e8d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9e91 jg 0x11ad9ea1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ad9ea1;
  /* 11ad9e93 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ad9e96 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11ad9e9c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ad9e9f jmp 0x11ad9ead */
  goto L_11ad9ead;
L_11ad9ea1:;
  /* 11ad9ea1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ad9ea4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11ad9eaa mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11ad9ead:;
  /* 11ad9ead cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9eb1 jle 0x11ad9f54 */
  if ((C.zf||C.sf!=C.of)) goto L_11ad9f54;
  /* 11ad9eb7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad9eba cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9ebd jbe 0x11ad9f54 */
  if ((C.cf||C.zf)) goto L_11ad9f54;
  /* 11ad9ec3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad9ec6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad9ec8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ad9eca mov ecx, dword ptr [0x11af6fb8] */
  ECX = (r32((uint32_t)(0x11af6fb8)));
  /* 11ad9ed0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ad9ed2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11ad9ed6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad9edc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad9ede je 0x11ad9f17 */
  if (C.zf) goto L_11ad9f17;
  /* 11ad9ee0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad9ee3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9ee6 jbe 0x11ad9f17 */
  if ((C.cf||C.zf)) goto L_11ad9f17;
  /* 11ad9ee8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad9eeb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad9eed mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad9ef0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ad9ef2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11ad9ef4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad9ef7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ad9ef9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9efc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad9eff mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ad9f01 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad9f04 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9f07 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11ad9f0a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad9f0d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ad9f0f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad9f12 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad9f15 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11ad9f17:;
  /* 11ad9f17 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad9f1a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ad9f1c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad9f1f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ad9f21 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11ad9f23 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad9f26 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad9f28 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9f2b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad9f2e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ad9f30 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad9f33 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9f36 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ad9f39 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad9f3c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ad9f3e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad9f41 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad9f44 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ad9f46 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad9f49 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad9f4c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11ad9f4f jmp 0x11ad9ead */
  goto L_11ad9ead;
L_11ad9f54:;
  /* 11ad9f54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad9f57 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ad9f5a jmp 0x11ad9c76 */
  goto L_11ad9c76;
L_11ad9f5f:;
  /* 11ad9f5f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad9f62 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad9f65 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad9f67 je 0x11ada032 */
  if (C.zf) goto L_11ada032;
  /* 11ad9f6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad9f70 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9f73 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11ad9f76:;
  /* 11ad9f76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad9f79 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ad9f7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad9f7e je 0x11ada030 */
  if (C.zf) goto L_11ada030;
  /* 11ad9f84 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad9f87 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9f8a je 0x11ada030 */
  if (C.zf) goto L_11ada030;
  /* 11ad9f90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad9f93 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ad9f96 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9f99 jne 0x11ad9fa9 */
  if (!C.zf) goto L_11ad9fa9;
  /* 11ad9f9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad9f9e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9fa1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11ad9fa4 jmp 0x11ada030 */
  goto L_11ada030;
L_11ad9fa9:;
  /* 11ad9fa9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad9fac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad9fae mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ad9fb0 mov edx, dword ptr [0x11af6fb8] */
  EDX = (r32((uint32_t)(0x11af6fb8)));
  /* 11ad9fb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad9fb8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11ad9fbc and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11ad9fc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad9fc3 je 0x11ad9ffc */
  if (C.zf) goto L_11ad9ffc;
  /* 11ad9fc5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad9fc8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad9fcb jbe 0x11ad9ffc */
  if ((C.cf||C.zf)) goto L_11ad9ffc;
  /* 11ad9fcd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad9fd0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ad9fd2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad9fd5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ad9fd7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11ad9fd9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad9fdc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ad9fde add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9fe1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad9fe4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11ad9fe6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad9fe9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad9fec mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ad9fef mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad9ff2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad9ff4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad9ff7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ad9ffa mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11ad9ffc:;
  /* 11ad9ffc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad9fff mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ada001 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ada004 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ada006 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11ada008 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ada00b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ada00d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ada010 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ada013 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ada015 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ada018 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ada01b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11ada01e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ada021 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ada023 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ada026 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ada029 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11ada02b jmp 0x11ad9f76 */
  goto L_11ad9f76;
L_11ada030:;
  /* 11ada030 jmp 0x11ada03b */
  goto L_11ada03b;
L_11ada032:;
  /* 11ada032 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ada035 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ada038 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11ada03b:;
  /* 11ada03b jmp 0x11ad9c76 */
  goto L_11ad9c76;
L_11ada040:;
  /* 11ada040 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11ada044 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ada046 je 0x11ada06c */
  if (C.zf) goto L_11ada06c;
  /* 11ada048 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ada04b push edx */
  push32((uint32_t)(EDX));
  /* 11ada04c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ada04f push eax */
  push32((uint32_t)(EAX));
  /* 11ada050 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ada053 push ecx */
  push32((uint32_t)(ECX));
  /* 11ada054 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ada057 push edx */
  push32((uint32_t)(EDX));
  /* 11ada058 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ada05b push eax */
  push32((uint32_t)(EAX));
  /* 11ada05c call 0x11ad94a0 */
  push32(0x11ada061u); f_11ad94a0();
  /* 11ada061 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ada064 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ada067 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11ada06a jmp 0x11ada0e7 */
  goto L_11ada0e7;
L_11ada06c:;
  /* 11ada06c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ada06f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ada071 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ada073 mov ecx, dword ptr [0x11af6fb8] */
  ECX = (r32((uint32_t)(0x11af6fb8)));
  /* 11ada079 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ada07b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11ada07f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11ada085 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ada087 je 0x11ada0b8 */
  if (C.zf) goto L_11ada0b8;
  /* 11ada089 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ada08c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ada08e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ada091 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ada093 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11ada095 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ada098 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ada09a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ada09d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ada0a0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ada0a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ada0a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ada0a8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11ada0ab mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ada0ae mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ada0b0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ada0b3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ada0b6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11ada0b8:;
  /* 11ada0b8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ada0bb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ada0bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ada0c0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ada0c2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11ada0c4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ada0c7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ada0c9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ada0cc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ada0cf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11ada0d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ada0d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ada0d7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ada0da mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ada0dd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ada0df sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ada0e2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ada0e5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11ada0e7:;
  /* 11ada0e7 jmp 0x11ad9c76 */
  goto L_11ad9c76;
L_11ada0ec:;
  /* 11ada0ec mov esp, ebp */
  ESP = (EBP);
  /* 11ada0ee pop ebp */
  EBP = (pop32());
  /* 11ada0ef ret  */
  ESPCHK(0x11ad9c70u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a190 @ 0x11ada190 (650 bytes, 178 insns) */
void f_11ada190(void) {
  FTRACE(0x11ada190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ada190 push ebp */
  push32((uint32_t)(EBP));
  /* 11ada191 mov ebp, esp */
  EBP = (ESP);
  /* 11ada193 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ada199 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada19d jne 0x11ada2f9 */
  if (!C.zf) goto L_11ada2f9;
  /* 11ada1a3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ada1a6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 11ada1ac lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 11ada1b2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ada1b5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ada1bc mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 11ada1c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ada1c8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11ada1ce push edx */
  push32((uint32_t)(EDX));
  /* 11ada1cf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ada1d2 push eax */
  push32((uint32_t)(EAX));
  /* 11ada1d3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ada1d6 push ecx */
  push32((uint32_t)(ECX));
  /* 11ada1d7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ada1da push edx */
  push32((uint32_t)(EDX));
  /* 11ada1db call 0x11adb5b0 */
  push32(0x11ada1e0u); f_11adb5b0();
  /* 11ada1e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ada1e3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ada1e6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada1ea jne 0x11ada27f */
  if (!C.zf) goto L_11ada27f;
  /* 11ada1f0 call dword ptr [0x11afb3c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3c4))), 0x11ada1f6u);
  /* 11ada1f6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada1f9 je 0x11ada200 */
  if (C.zf) goto L_11ada200;
  /* 11ada1fb jmp 0x11ada2dd */
  goto L_11ada2dd;
L_11ada200:;
  /* 11ada200 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ada202 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ada204 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ada206 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ada209 push eax */
  push32((uint32_t)(EAX));
  /* 11ada20a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ada20d push ecx */
  push32((uint32_t)(ECX));
  /* 11ada20e call 0x11adb5b0 */
  push32(0x11ada213u); f_11adb5b0();
  /* 11ada213 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ada216 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 11ada21c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada223 jne 0x11ada22a */
  if (!C.zf) goto L_11ada22a;
  /* 11ada225 jmp 0x11ada2dd */
  goto L_11ada2dd;
L_11ada22a:;
  /* 11ada22a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 11ada22c push 0x11af4ac4 */
  push32((uint32_t)(0x11af4ac4u));
  /* 11ada231 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ada233 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11ada239 push edx */
  push32((uint32_t)(EDX));
  /* 11ada23a call 0x11ac9660 */
  push32(0x11ada23fu); f_11ac9660();
  /* 11ada23f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ada242 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ada245 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada249 jne 0x11ada250 */
  if (!C.zf) goto L_11ada250;
  /* 11ada24b jmp 0x11ada2dd */
  goto L_11ada2dd;
L_11ada250:;
  /* 11ada250 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ada257 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ada259 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 11ada25f push eax */
  push32((uint32_t)(EAX));
  /* 11ada260 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ada263 push ecx */
  push32((uint32_t)(ECX));
  /* 11ada264 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ada267 push edx */
  push32((uint32_t)(EDX));
  /* 11ada268 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ada26b push eax */
  push32((uint32_t)(EAX));
  /* 11ada26c call 0x11adb5b0 */
  push32(0x11ada271u); f_11adb5b0();
  /* 11ada271 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ada274 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ada277 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada27b jne 0x11ada27f */
  if (!C.zf) goto L_11ada27f;
  /* 11ada27d jmp 0x11ada2dd */
  goto L_11ada2dd;
L_11ada27f:;
  /* 11ada27f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11ada281 push 0x11af4ac4 */
  push32((uint32_t)(0x11af4ac4u));
  /* 11ada286 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ada288 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ada28b push ecx */
  push32((uint32_t)(ECX));
  /* 11ada28c call 0x11ac9660 */
  push32(0x11ada291u); f_11ac9660();
  /* 11ada291 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ada294 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 11ada29a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11ada29c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11ada2a2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada2a5 jne 0x11ada2a9 */
  if (!C.zf) goto L_11ada2a9;
  /* 11ada2a7 jmp 0x11ada2dd */
  goto L_11ada2dd;
L_11ada2a9:;
  /* 11ada2a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ada2ac push ecx */
  push32((uint32_t)(ECX));
  /* 11ada2ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ada2b0 push edx */
  push32((uint32_t)(EDX));
  /* 11ada2b1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11ada2b7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ada2b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ada2ba call 0x11acce80 */
  push32(0x11ada2bfu); f_11acce80();
  /* 11ada2bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ada2c2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada2c6 je 0x11ada2d6 */
  if (C.zf) goto L_11ada2d6;
  /* 11ada2c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ada2ca mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ada2cd push edx */
  push32((uint32_t)(EDX));
  /* 11ada2ce call 0x11aca0f0 */
  push32(0x11ada2d3u); f_11aca0f0();
  /* 11ada2d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ada2d6:;
  /* 11ada2d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ada2d8 jmp 0x11ada416 */
  goto L_11ada416;
L_11ada2dd:;
  /* 11ada2dd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada2e1 je 0x11ada2f1 */
  if (C.zf) goto L_11ada2f1;
  /* 11ada2e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ada2e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ada2e8 push eax */
  push32((uint32_t)(EAX));
  /* 11ada2e9 call 0x11aca0f0 */
  push32(0x11ada2eeu); f_11aca0f0();
  /* 11ada2ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ada2f1:;
  /* 11ada2f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ada2f4 jmp 0x11ada416 */
  goto L_11ada416;
L_11ada2f9:;
  /* 11ada2f9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada2fd jne 0x11ada413 */
  if (!C.zf) goto L_11ada413;
  /* 11ada303 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 11ada30d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ada310 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11ada316 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ada318 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11ada31e push edx */
  push32((uint32_t)(EDX));
  /* 11ada31f push 0x11af9558 */
  push32((uint32_t)(0x11af9558u));
  /* 11ada324 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ada327 push eax */
  push32((uint32_t)(EAX));
  /* 11ada328 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ada32b push ecx */
  push32((uint32_t)(ECX));
  /* 11ada32c call 0x11adb410 */
  push32(0x11ada331u); f_11adb410();
  /* 11ada331 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ada334 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ada336 jne 0x11ada340 */
  if (!C.zf) goto L_11ada340;
  /* 11ada338 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ada33b jmp 0x11ada416 */
  goto L_11ada416;
L_11ada340:;
  /* 11ada340 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11ada346 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11ada349 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 11ada353 jmp 0x11ada364 */
  goto L_11ada364;
L_11ada355:;
  /* 11ada355 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11ada35b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ada35e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_11ada364:;
  /* 11ada364 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada36b jge 0x11ada40f */
  if ((C.sf==C.of)) goto L_11ada40f;
  /* 11ada371 cmp dword ptr [0x11af71d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11af71d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada378 jle 0x11ada3ab */
  if ((C.zf||C.sf!=C.of)) goto L_11ada3ab;
  /* 11ada37a push 4 */
  push32((uint32_t)(0x4u));
  /* 11ada37c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11ada382 mov dl, byte ptr [ecx*2 + 0x11af9558] */
  DL = (r8((uint32_t)(ECX*2 + 0x11af9558)));
  /* 11ada389 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11ada38f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11ada395 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ada39a push eax */
  push32((uint32_t)(EAX));
  /* 11ada39b call 0x11ace1b0 */
  push32(0x11ada3a0u); f_11ace1b0();
  /* 11ada3a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ada3a3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11ada3a9 jmp 0x11ada3de */
  goto L_11ada3de;
L_11ada3ab:;
  /* 11ada3ab mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11ada3b1 mov dl, byte ptr [ecx*2 + 0x11af9558] */
  DL = (r8((uint32_t)(ECX*2 + 0x11af9558)));
  /* 11ada3b8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11ada3be mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11ada3c4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ada3c9 mov ecx, dword ptr [0x11af6fb8] */
  ECX = (r32((uint32_t)(0x11af6fb8)));
  /* 11ada3cf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ada3d1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11ada3d5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11ada3d8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_11ada3de:;
  /* 11ada3de cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ada3e5 je 0x11ada408 */
  if (C.zf) goto L_11ada408;
  /* 11ada3e7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11ada3ed movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ada3f0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ada3f3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 11ada3fa lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11ada3fe mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11ada404 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11ada406 jmp 0x11ada40a */
  goto L_11ada40a;
L_11ada408:;
  /* 11ada408 jmp 0x11ada40f */
  goto L_11ada40f;
L_11ada40a:;
  /* 11ada40a jmp 0x11ada355 */
  goto L_11ada355;
L_11ada40f:;
  /* 11ada40f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ada411 jmp 0x11ada416 */
  goto L_11ada416;
L_11ada413:;
  /* 11ada413 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11ada416:;
  /* 11ada416 mov esp, ebp */
  ESP = (EBP);
  /* 11ada418 pop ebp */
  EBP = (pop32());
  /* 11ada419 ret  */
  ESPCHK(0x11ada190u, _esp0);
  ESP += 4; return;
}

