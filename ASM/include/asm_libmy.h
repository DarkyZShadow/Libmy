#ifndef __ASM_LIBMY_H__
#define __ASM_LIBMY_H__

#include <stdio.h>

#ifndef NULL
#define NULL    (void*)0
#endif

#ifndef BOOL
#define BOOL    char
#define true    1
#define false   0
#endif


/* Function prototypes */
size_t          asm_strlen(const char *str);
char            *asm_strchr(const char *str, int c);
void            asm_putchar(char c);
void            asm_putstr(char *str);
int             asm_isneg(int nb);
void            asm_swap(void *a, void *b);
char            *asm_strcpy(char *dest, char *src);
char            *asm_strncpy(char *dest, char *src, size_t num);
char            *asm_strcat(char *dest, char *src);
char            *asm_strncat(char *dest, char *src, size_t num);
int             asm_strcmp(char *s1, char *s2);
int             asm_strncmp(char *s1, char *s2, size_t num);
void            asm_putnbr(long nbr, char base, BOOL is_unsigned);
int             asm_nbrlen(long nbr, char base, BOOL is_unsigned);
char            *asm_itoa(long nbr, char *buf, char base);
char            *asm_utoa(unsigned long nbr, char *buf, char base);
char            asm_toupper(char c);
char            asm_tolower(char c);
char            *asm_strtoupper(char *str, char *buf);
char            *asm_strtolower(char *str, char *buf);

#endif

