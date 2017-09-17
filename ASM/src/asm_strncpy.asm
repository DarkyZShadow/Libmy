;
; char              *asm_strncpy(char *dest, const char *src, size_t num);
;
BITS 64

SECTION .text
GLOBAL asm_strncpy

asm_strncpy:
    PUSH RCX
    MOV RCX, -1

_loop:
    INC RCX
    CMP RCX, RDX
    JGE _end
    MOV AL, BYTE [RSI + RCX]
    MOV BYTE [RDI + RCX], AL
    CMP AL, 0
    JNE _loop

_end:
    MOV RAX, RDI
    POP RCX
    RET

