/*
** my_strdup.c for my_strdup in /home/darkyz/2_Jour07
** 
** Made by DarkyZ
** 
** Started on  Thu Sep 29 18:59:34 2016
** Last update Thu Sep 29 23:34:03 2016
*/

#include "common.h"

char            *my_strdup(char *str)
{
    int         i;
    char        *result;

    result = malloc(sizeof(char) * (my_strlen(str) + 1));
    if (result == 0)
        return 0;
    while (str[i])
    {
        result[i] = str[i];
        i++;
    }
    return result;
}

