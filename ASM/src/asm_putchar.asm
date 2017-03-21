;
; void              asm_putchar(char c);
;
BITS 64

SECTION .text
GLOBAL asm_putchar

asm_putchar:
    PUSH RBX
    PUSH RCX
    PUSH RDX
    PUSH RDI

    ;MOV RAX, 4      ; Sous fonction
    ;MOV RBX, 1      ; Flux (0 : stdin, 1 : stdout, 2 : stderr)
    ;MOV RCX, RSP    ; Buffer
    ;MOV RDX, 1      ; Length
    ;INT 0x80

    MOV RAX, 1      ; Sous fonction
    MOV RSI, RSP    ; Pointeur vers le caractere (dans la stack)
    MOV RDI, 1      ; Flux (0 : stdin, 1 : stdout, 2 : stderr)
    MOV RDX, 1      ; Length
    SYSCALL
    
    POP RDI
    POP RDX
    POP RCX
    POP RBX
    RET

