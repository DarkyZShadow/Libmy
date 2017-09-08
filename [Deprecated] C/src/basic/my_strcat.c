/*
** my_strcat.c for my_strcat in /home/darkyz/2_Jour04/master_repo
** 
** Made by DarkyZ
** 
** Started on  Wed Sep 28 09:24:41 2016
** Last update Thu Sep 29 07:40:23 2016
*/

#include "common.h"

char            *my_strcat(char *dest, char *src)
{
    int         i;
    int         count;

    i = 0;
    count = my_strlen(dest);
    while (src[i] != 0)
    {
        dest[count + i] = src[i];
        i++;
    }
    dest[count + i] = 0;
    return dest;
}

