;
; int             				asm_strcmp(const char *s1, const char *s2);
;
BITS 64

SECTION .text
GLOBAL asm_strcmp

asm_strcmp:
    PUSH RCX
    PUSH RDX
    XOR RCX, RCX				; Init counter

_loop:
	MOVZX RAX, BYTE [RDI + RCX] ; Store s1[i]
    MOVZX RDX, BYTE [RSI + RCX] ; Store s2[i]
    CMP RAX, RDX				; if (s1[i] != s2[i])
    JNE _end
    CMP RAX, 0					; if (s1[i] == 0)
    JE _end
    CMP RDX, 0					; if (s2[i] == 0)
    JE _end
	INC RCX
    JMP _loop

_end:
    SUB RAX, RDX				; Return difference between s1[i] and s2[i]
    POP RDX
    POP RCX
    RET

