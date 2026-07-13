#include "recomp.h"

/* RtlUnwind @ 0x105b6f5c (6 bytes, 1 insns) */
void f_105b6f5c(void) {
  FTRACE(0x105b6f5cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b6f5c jmp dword ptr [0x105d5300] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x105d5300)))); return;
}

