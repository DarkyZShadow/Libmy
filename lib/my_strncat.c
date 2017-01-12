/*
** my_strncat.c for my_strncat in /home/darkyz/2_Jour04/master_repo
** 
** Made by SOULIE Sean
** Login   <soulie_s@etna-alternance.net>
** 
** Started on  Wed Sep 28 12:43:11 2016 SOULIE Sean
** Last update Thu Sep 29 08:16:48 2016 SOULIE Sean
*/

int			my_strlen(char *str);

char		*my_strncat(char *dest, char *src, int n)
{
	int		i;
	int		count;

	i = 0;
	count = my_strlen(dest);
	while (src[i] != 0 && i < n)
	{
		dest[count + i] = src[i];
		i++;
	}
	dest[count + i] = 0;
	return dest;
}

