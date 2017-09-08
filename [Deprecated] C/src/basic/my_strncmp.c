/*
** my_strncmp.c for my_strncmp in /home/darkyz/2_Jour04/master_repo
** 
** Made by DarkyZ
** 
** Started on  Wed Sep 28 08:54:55 2016
** Last update Thu Sep 29 07:28:48 2016
*/

#include "common.h"

int             _my_strncmp(char *s1, char *s2, int n, int i);

int             my_strncmp(char *s1, char *s2, int n)
{
    return _my_strncmp(s1, s2, n, 0);
}

int             _my_strncmp(char *s1, char *s2, int n, int i)
{
    if (i == n)
        return 0;
    else if (s1[i] == 0 && s2[i] != 0)
        return -1;
    else if (s1[i] != 0 && s2[i] == 0)
        return 1;
    else if (s1[i] == 0 && s2[i] == 0)
        return 0;
    else if (s1[i] > s2[i])
        return 1;
    else if (s1[i] < s2[i])
        return -1;
    return _my_strncmp(s1, s2, n, i + 1);
}

