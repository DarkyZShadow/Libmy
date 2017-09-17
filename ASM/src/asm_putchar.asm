;
; char               	asm_putchar(char c);
;
BITS 64

SECTION .text
GLOBAL asm_putchar

asm_putchar:
    PUSH RSI
    PUSH RDI
    PUSH RDX
    PUSH RDI

    MOV RAX, 1      	; SYSCALL ID (sys_write)
    MOV RSI, RSP    	; Pointer to the character (into the stack)
    MOV RDI, 1      	; Fd (0 : stdin, 1 : stdout, 2 : stderr)
    MOV RDX, 1      	; Length
    SYSCALL
    
    POP RAX
    POP RDX
    POP RDI
    POP RSI
    RET

