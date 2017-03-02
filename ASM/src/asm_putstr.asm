;
; void              asm_putstr(char *str);
;
BITS 64

SECTION .text
EXTERN asm_strlen
GLOBAL asm_putstr

asm_putstr:
    PUSH RBX
    PUSH RCX
    PUSH RDX

    CALL asm_strlen

    ;MOV RAX, 4      ; Sous fonction
    ;MOV RBX, 1      ; Flux (0 : stdin, 1 : stdout, 2 : stderr)
    ;MOV RCX, RDI
    ;MOV RDX, 26     ; Length
    ;INT 0x80
    
    MOV RSI, RDI    ; Buffer
    MOV RDX, RAX    ; Length
    MOV RAX, 1      ; Sous fonction
    MOV RDI, 1      ; Flux (0 : stdin, 1 : stdout, 2 : stderr)
    SYSCALL
    
    POP RDX
    POP RCX
    POP RBX
    RET

