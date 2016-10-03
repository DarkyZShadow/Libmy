/*
** my_put_nbr.c for my_put_nbr in /home/darkyz/2_Jour05/master_repo
** 
** Made by SOULIE Sean
** Login   <soulie_s@etna-alternance.net>
** 
** Started on  Wed Sep 28 23:28:20 2016 SOULIE Sean
** Last update Thu Sep 29 06:21:37 2016 SOULIE Sean
*/

void	my_putchar(char c);

void	my_put_nbr(int n)
{
  char	tmp;
  long	long_n;

  long_n = n;
  if (long_n < 0)
  {
    my_putchar('-');
    long_n *= -1;
  }
  if (long_n >= 10)
  {
    tmp = (long_n % 10);
    long_n = (long_n - tmp) / 10;
    my_put_nbr(long_n);
    my_putchar(tmp + '0');
  }
  else
    my_putchar(long_n + '0');
}
