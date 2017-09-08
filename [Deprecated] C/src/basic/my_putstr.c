/*
** my_putstr.c for my_putstr in /home/darkyz/2_Jour03
** 
** Made by DarkyZ
** 
** Started on  Tue Sep 27 13:37:16 2016
** Last update Thu Sep 29 06:32:20 2016
*/

#include "common.h"

void            my_putstr(char *str)
{
    int         i;

    i = 0;
    while (str[i] != '\0')
        my_putchar(str[i++]);
}

