;
; void              	asm_putstr(char *str);
;
BITS 64

SECTION .text
EXTERN asm_strlen
GLOBAL asm_putstr

asm_putstr:
    PUSH RBX
    PUSH RCX
    PUSH RDX

	MOV RBX, asm_strlen	; -fPIC
    CALL RBX			; Get buffer size => RAX

    MOV RSI, RDI    	; Buffer
    MOV RDX, RAX    	; Length
    MOV RAX, 1      	; SYSCALL ID (sys_write)
    MOV RDI, 1      	; Flux (0 : stdin, 1 : stdout, 2 : stderr)
    SYSCALL
    
	MOV RAX, 0
    POP RDX
    POP RCX
    POP RBX
    RET

