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

#endif

