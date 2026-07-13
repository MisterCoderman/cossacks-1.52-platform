#include "recomp.h"

/* Unwind@10026d00 @ 0x11bb6d00 (11 bytes, 5 insns) */
void f_11bb6d00(void) {
  FTRACE(0x11bb6d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bb6d00 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bb6d03 push eax */
  push32((uint32_t)(EAX));
  /* 11bb6d04 call 0x11b98650 */
  push32(0x11bb6d09u); f_11b98650();
  /* 11bb6d09 pop ecx */
  ECX = (pop32());
  /* 11bb6d0a ret  */
  ESPCHK(0x11bb6d00u, _esp0);
  ESP += 4; return;
}

