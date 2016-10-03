/*
** my_strdup.c for my_strdup in /home/darkyz/2_Jour07
** 
** Made by SOULIE Sean
** Login   <soulie_s@etna-alternance.net>
** 
** Started on  Thu Sep 29 18:59:34 2016 SOULIE Sean
** Last update Thu Sep 29 23:34:03 2016 SOULIE Sean
*/
#include <stdlib.h>

int	my_strlen(char *str);

char	*my_strdup(char *str)
{
  int	i;
  char	*result;

  result = malloc(sizeof(char) * my_strlen(str) + 1);
  if (result == 0)
    return 0;
  while (str[i])
  {
    result[i] = str[i];
    i++;
  }
  return result;
}
