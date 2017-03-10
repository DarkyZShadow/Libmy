/*
** my_swap.c for my_swap in /home/darkyz/2_Jour03/master_repo
** 
** Made by SOULIE Sean
** Login   <soulie_s@etna-alternance.net>
** 
** Started on  Tue Sep 27 14:42:30 2016 SOULIE Sean
** Last update Thu Sep 29 06:32:45 2016 SOULIE Sean
*/

#include "common.h"

void            my_swap(int *a, int *b)
{
    int         c;

    c = *a;
    *a = *b;
    *b = c;
}

