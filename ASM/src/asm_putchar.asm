;
; void              asm_putchar(char c);
;
BITS 64

SECTION .text
GLOBAL asm_putchar
DB str 0

asm_putchar:
    MOV str, RDI

    MOV RAX, 4      ; Sous fonction
    MOV RBX, 1      ; Flux (0 : stdin, 1 : stdout, 2 : stderr)
    MOV RCX, str
    MOV RDX, 1      ; Length
    INT 0x80
    ;MOV RAX, 1      ; Sous fonction
    ;MOV RSI, RDI
    ;MOV RDI, 1      ; Flux (0 : stdin, 1 : stdout, 2 : stderr)
    ;MOV RDX, 1      ; Length
    ;SYSCALL
    RET

