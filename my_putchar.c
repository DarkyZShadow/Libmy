/*
** my_putchar.c for Libmy in /home/darkyz/Libmy/master_repo
** 
** Made by SOULIE Sean
** Login   <soulie_s@etna-alternance.net>
** 
** Started on  Thu Sep 29 01:44:48 2016 SOULIE Sean
** Last update Thu Sep 29 09:10:15 2016 SOULIE Sean
*/
#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
