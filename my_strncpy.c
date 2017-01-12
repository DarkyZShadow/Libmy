/*
** my_strncpy.c for my_strncpy in /home/darkyz/2_Jour04/master_repo
** 
** Made by SOULIE Sean
** Login   <soulie_s@etna-alternance.net>
** 
** Started on  Wed Sep 28 04:10:07 2016 SOULIE Sean
** Last update Thu Sep 29 07:09:09 2016 SOULIE Sean
*/

char		*my_strncpy(char *dest, char *src, int n)
{
	int		i;
	int		is_end;

	i = 0;
	is_end = 0;
	while (i < n)
	{
		if (src[i] == '\0')
			is_end = 1;
		if (is_end == 1)
			dest[i] = 0;
		else
			dest[i] = src[i];
		i++;
	}
	return dest;
}

