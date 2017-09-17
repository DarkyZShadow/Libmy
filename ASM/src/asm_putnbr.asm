;
; void                      asm_putnbr(long nbr, int base, bool is_unsigned)
;
BITS 64

SECTION .text
EXTERN asm_putchar
GLOBAL asm_putnbr

asm_putnbr:
    PUSH RBX
    PUSH RDX
	MOV R12, asm_putchar	; -fPIC
    CMP DL, 0               ; if (is_unsigned != FALSE)
    JNE _start
    CMP RDI, 0              ; if (nbr >= 0)
    JNS _start

_isneg:
	MOV R13, RDI
    MOV RDI, 45             ; '-' char
    CALL R12				; CALL asm_putchar
    MOV RDI, R13
    IMUL RDI, -1

_start:
    PUSH 0                  ; End of string
    MOV RAX, RDI
    MOV RBX, RSI

_loop_begin:
    XOR RDX, RDX            ; Clear high bits of RDX (dividend)
    IDIV RBX                ; Divide by base
    PUSH RDX                ; Save remainder
    ADD BYTE [RSP], 0x30    ; Convert to printable char
    CMP BYTE [RSP], 0x39    ; Is lower than '9' char
    JLE _loop_end
    ADD BYTE [RSP], 0x27    ; Convert 10 to 'a'

_loop_end:
    CMP RAX, 0
    JNE _loop_begin

_loop_print:                ; while (c != '\0') print(c);
    POP RDI
    CALL R12
    CMP RDI, 0
    JNE _loop_print

_end:
	XOR RAX, RAX
    POP RDX
    POP RBX
    RET

