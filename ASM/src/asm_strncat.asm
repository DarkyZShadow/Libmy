;
; char              			*asm_strncat(char *dest, const char *src, size_t num);
;
BITS 64

SECTION .text
EXTERN asm_strlen
GLOBAL asm_strncat

asm_strncat:
    PUSH RCX
    PUSH RDI

	MOV RBX, asm_strlen			; -fPIC
    CALL RBX             		; Get first '\0' from dest
    ADD RDI, RAX                ; Start at '\0'
	MOV RCX, -1                 ; Init counter

_loop:                          ; Basic loop
    INC RCX
    CMP RCX, RDX
    JGE _end
    MOV AL, BYTE [RSI + RCX]
    MOV BYTE [RDI + RCX], AL
    CMP AL, 0     ; Wait a '\0'
    JNE _loop

_end:
    POP RDI
    POP RCX
    MOV RAX, RDI                ; Return dest
    RET

