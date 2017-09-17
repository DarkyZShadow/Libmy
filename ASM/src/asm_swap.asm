;
; void              asm_swap(void *a, void *b)
;
BITS 64

SECTION .text
GLOBAL asm_swap

asm_swap:
	MOV   R12, [RDX]
  	MOV   R13, [RSI]
  	MOV   [RDX], R13
  	MOV   [RSI], R12

_end:
    RET

