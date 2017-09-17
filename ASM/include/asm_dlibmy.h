#ifndef __ASM_DLIBMY_H__
#define __ASM_DLIBMY_H__

#ifndef NULL
#define NULL    (void*)0
#endif

#ifndef BOOL
#define BOOL    int
#define true    1
#define false   0
#endif


/* Function prototypes */
typedef BOOL 	(*asm_isneg_t)(long number);
typedef void	(*asm_swap_t)(void *ptr1, void *ptr2);
typedef char 	(*asm_putchar_t)(char c);
typedef void 	(*asm_putstr_t)(const char *str);
typedef long 	(*asm_strlen_t)(const char *str);
typedef char* 	(*asm_strchr_t)(const char *str, char c);

#endif

