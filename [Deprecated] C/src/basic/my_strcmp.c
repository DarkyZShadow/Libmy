/*
** my_strcmp.c for my_strcmp in /home/darkyz/2_Jour04/master_repo
** 
** Made by DarkyZ
** 
** Started on  Wed Sep 28 04:48:37 2016
** Last update Thu Sep 29 07:25:27 2016
*/

#include "common.h"

int             _my_strcmp(char *s1, char *s2, int i);

int             my_strcmp(char *s1, char *s2)
{
    return _my_strcmp(s1, s2, 0);
}

int             _my_strcmp(char *s1, char *s2, int i)
{
    if (s1[i] == 0 && s2[i] != 0)
        return -1;
    else if (s1[i] != 0 && s2[i] == 0)
        return 1;
    else if (s1[i] == 0 && s2[i] == 0)
        return 0;
    else if (s1[i] > s2[i])
        return 1;
    else if (s1[i] < s2[i])
        return -1;
    return _my_strcmp(s1, s2, ++i);
}

