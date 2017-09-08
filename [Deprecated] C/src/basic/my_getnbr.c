/*
** my_getnbr.c for my_getnbr in /home/darkyz/2_Jour05/master_repo
** 
** Made by DarkyZ
** 
** Started on  Wed Sep 28 21:39:06 2016
** Last update Thu Sep 29 09:31:25 2016
*/

#include "common.h"

int         my_getnbr(char *str)
{
    int     i;
    int     count;
    int     is_positive;

    i = 0;
    count = 0;
    is_positive = 1;
    if (str != 0)
    {
        while (str[i] != 0)
        {
            if (str[i] == '-' && count == 0)
                is_positive *= -1;
            else if (str[i] == '+' && count == 0)
                is_positive = (is_positive == -1 ? -1 : 1);
            else if (str[i] >= '0' && str[i] <= '9')
                count = count * 10 + str[i] - '0';
            else
                break;
            i++;
        }
    }
    return count * is_positive;
}

