/*
** my_strlen.c for my_strlen in /home/darkyz/2_Jour03
** 
** Made by DarkyZ
** 
** Started on  Tue Sep 27 13:43:44 2016
** Last update Thu Sep 29 06:37:27 2016
*/

#include "common.h"

int             my_strlen(char *str)
{
    int         i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

