#ifndef __COMMON_H__
#define __COMMON_H__

#include <stdlib.h>

void        my_putchar(char c);
int         my_getnbr(char *str);
int         my_isneg(int n);
void        my_put_nbr(int n);
void        my_putstr(char *str);
char        **my_str_to_wordtab(char *str);
char        *my_strcat(char *dest, char *src);
int         my_strcmp(char *s1, char *s2);
char        *my_strcpy(char *dest, char *src);
char        *my_strdup(char *str);
int         my_strlen(char *str);
char        *my_strncat(char *dest, char *src, int n);
int         my_strncmp(char *s1, char *s2, int n);
char        *my_strncpy(char *dest, char *src, int n);
char        *my_strstr(char *str, char *to_find);
void        my_swap(int *a, int *b);

#endif

