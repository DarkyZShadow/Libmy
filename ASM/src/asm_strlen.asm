;
; int             asm_strlen(char *str);
;
BITS 32

SECTION .text
GLOBAL asm_strlen

asm_strlen:
    MOV ECX, -1     ; Init counter

_loop:              ; Basic while
    INC ECX
    CMP BYTE [EAX + ECX], 0
    JNE _loop

_end:
    MOV EAX, ECX    ; Return counter
    RET

