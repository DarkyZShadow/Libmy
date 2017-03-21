#ifndef __ASM_LIBMY_H__
#define __ASM_LIBMY_H__

#include <stdio.h>

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

#endif

