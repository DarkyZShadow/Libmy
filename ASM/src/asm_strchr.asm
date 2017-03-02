;
; char              *strchr (const char *str, int c);
;
BITS 64

SECTION .text
GLOBAL asm_strchr

asm_strchr:
    PUSH RCX
    MOV RCX, -1     ; Init counter

_loop:              ; Basic while
    INC RCX
    CMP DWORD [RDI + RCX], 0x6F;ESI
    JE _end
    CMP DWORD [RDI + RCX], 0
    JNE _loop
    MOV RCX, 0

_end:
    MOV RAX, RCX    ; Return counter
    POP RCX
    RET

