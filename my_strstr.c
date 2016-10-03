/*
** my_strstr.c for my_strstr in /home/darkyz/2_Jour04/master_repo
** 
** Made by SOULIE Sean
** Login   <soulie_s@etna-alternance.net>
** 
** Started on  Wed Sep 28 15:37:35 2016 SOULIE Sean
** Last update Thu Sep 29 08:21:41 2016 SOULIE Sean
*/

int     my_strlen(char *str);
char    *_my_strstr(char *str, char *to_find, int i, int j);

char    *my_strstr(char *str, char *to_find)
{
  return _my_strstr(str, to_find, 0, 0);
}

char 	*_my_strstr(char *str, char *to_find, int i, int j)
{
  if (to_find[j] == 0)
    return str + i - my_strlen(to_find);
  else if (str[i] == 0)
    return (void*)0;
  if (str[i] == to_find[j])
    return _my_strstr(str, to_find, i + 1, j + 1);
  else
    return _my_strstr(str, to_find, i + 1, 0);
}
