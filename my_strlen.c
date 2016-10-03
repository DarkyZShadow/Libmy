/*
** my_strlen.c for my_strlen in /home/darkyz/2_Jour03
** 
** Made by SOULIE Sean
** Login   <soulie_s@etna-alternance.net>
** 
** Started on  Tue Sep 27 13:43:44 2016 SOULIE Sean
** Last update Thu Sep 29 06:37:27 2016 SOULIE Sean
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return i;
}
