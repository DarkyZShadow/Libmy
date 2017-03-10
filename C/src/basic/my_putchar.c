/*
** my_putchar.c for Libmy in /home/darkyz/Libmy/master_repo
** 
** Made by SOULIE Sean
** Login   <soulie_s@etna-alternance.net>
**
** Started on  Wed Sep 28 21:39:06 2016 SOULIE Sean
** Last update Thu Sep 29 09:31:25 2016 SOULIE Sean
*/

#include "common.h"

void                my_write(int output, void *buffer, int size);

void                my_putchar(char c)
{
    my_write(1, &c, 1);
}

