;
; char              		*asm_strtolower(char *dest, const char *src);
;
BITS 64

SECTION .text
EXTERN asm_tolower
GLOBAL asm_strtolower

asm_strtolower:
	PUSH RCX
	MOV R12, asm_tolower
    XOR RCX, RCX			; Reset counter

_loop:
	MOV R13, RDI
	MOV DIL, BYTE [RSI + RCX]
    CALL R12
	MOV RDI, R13
    MOV BYTE [RDI + RCX], AL

	INC RCX
    CMP AL, 0
    JNE _loop

_end:
    MOV RAX, RDI    		; Return buf
    POP RCX
    RET

