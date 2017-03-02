;
; char              *asm_strchr(char *str, int character);
;
BITS 64

SECTION .text
GLOBAL asm_strchr

asm_strchr:
    MOVZX RCX, DL    ; Init counter
    JMP _end

_loop:              ; Basic while
    INC RCX
    CMP BYTE [RAX + RCX], 0
    JNE _loop

_end:
    MOV RAX, RCX    ; Return counter
    RET

