#ifndef __ASM_DLIBMY_H__
#define __ASM_DLIBMY_H__

#ifndef NULL
#define NULL    (void*)0
#endif

#ifndef BOOL
#define BOOL    int
#define TRUE    1
#define FALSE   0
#endif

typedef unsigned long size_t;

/* Function prototypes */
typedef BOOL 	(*asm_isneg_t)(long number);
typedef void	(*asm_swap_t)(void *ptr1, void *ptr2);
typedef char 	(*asm_putchar_t)(char c);
typedef void 	(*asm_putstr_t)(const char *str);
typedef long 	(*asm_strlen_t)(const char *str);
typedef char* 	(*asm_strchr_t)(const char *str, char c);
typedef char* 	(*asm_strcpy_t)(char *dest, const char *src);
typedef char* 	(*asm_strncpy_t)(char *dest, const char *src, size_t num);
typedef char* 	(*asm_strcat_t)(char *dest, const char *src);
typedef char* 	(*asm_strncat_t)(char *dest, const char *src, size_t num);
typedef int 	(*asm_strcmp_t)(const char *dest, const char *src);
typedef int 	(*asm_strncmp_t)(const char *dest, const char *src, size_t num);
typedef void 	(*asm_putnbr_t)(long nbr, int base, BOOL is_unsigned);
typedef size_t 	(*asm_nbrlen_t)(long nbr, int base, BOOL is_unsigned);
typedef char* 	(*asm_itoa_t)(long nbr, char *buf, int base);
typedef char* 	(*asm_utoa_t)(unsigned long nbr, char *buf, int base);
typedef char 	(*asm_tolower_t)(char c);
typedef char 	(*asm_toupper_t)(char c);
typedef char* 	(*asm_strtolower_t)(char *dest, const char *src);
typedef char* 	(*asm_strtoupper_t)(char *dest, const char *src);

#endif

