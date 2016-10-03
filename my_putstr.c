/*
** my_putstr.c for my_putstr in /home/darkyz/2_Jour03
** 
** Made by SOULIE Sean
** Login   <soulie_s@etna-alternance.net>
** 
** Started on  Tue Sep 27 13:37:16 2016 SOULIE Sean
** Last update Thu Sep 29 06:32:20 2016 SOULIE Sean
*/

void	my_putchar(char c);

void 	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
  {
    my_putchar(str[i]);
    i++;
  }
}
