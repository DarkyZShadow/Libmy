;
; int             				asm_strncmp(const char *s1, const char *s2, size_t num);
;
BITS 64

SECTION .text
GLOBAL asm_strncmp

asm_strncmp:
    PUSH RCX
    PUSH RBX
	XOR RAX, RAX
	XOR RBX, RBX
    XOR RCX, RCX				; Init counter

	CMP RDX, 0
	JE _end
	DEC RDX

_loop:
	MOVZX RAX, BYTE [RDI + RCX] ; Store s1[i]
    MOVZX RBX, BYTE [RSI + RCX] ; Store s2[i]
	CMP RCX, RDX				; if (i >= num)
	JGE _end
    CMP RAX, RBX				; if (s1[i] != s2[i])
    JNE _end
    CMP RAX, 0					; if (s1[i] == 0)
    JE _end
    CMP RBX, 0					; if (s2[i] == 0)
    JE _end
	INC RCX
    JMP _loop

_end:
    SUB RAX, RBX				; Return difference between s1[i] and s2[i]
    POP RBX
    POP RCX
    RET

