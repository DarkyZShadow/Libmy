;
; size_t			asm_nbrlen(long nbr, int base, BOOL is_unsigned)
;
BITS 64

SECTION .text
GLOBAL asm_nbrlen

asm_nbrlen:
    PUSH RBX
    PUSH RCX
    PUSH RDX
    XOR RCX, RCX
    CMP DL, 0               	; if (is_unsigned != FALSE)
    JNE _start
    CMP RDI, 0              	; if (nbr >= 0)
    JNS _start

_isneg:
    INC RCX
    IMUL RDI, -1

_start:
    MOV RAX, RDI
    MOV RBX, RSI

_loop:
    INC RCX
    XOR RDX, RDX            	; Clear high bits of RDX (dividend)
    IDIV RBX                	; Divide by base
    CMP RAX, 0
    JNE _loop

_end:
    MOV RAX, RCX
    POP RDX
    POP RCX
    POP RBX
    RET

