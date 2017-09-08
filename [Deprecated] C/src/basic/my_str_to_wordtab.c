/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/darkyz/2_Jour07
** 
** Made by DarkyZ
** 
** Started on  Thu Sep 29 19:21:42 2016
** Last update Thu Sep 29 23:22:47 2016
*/

#include "common.h"

int             is_alphanumeric(char c);
char            *my_get_word(char *str);
int             my_word_count(char *str);
int             my_word_size(char *str);

char            **my_str_to_wordtab(char *str)
{
    int         i;
    int         j;
    char        **result;

    i = 0;
    j = 0;
    result = malloc(sizeof(char*) * (my_word_count(str + 1)));
    while (str[i] != 0)
    {
        result[j] = my_get_word(str + i);
        if (result[j][0] != 0)
            i += my_strlen(result[j++]);
        else
            i++;
    }
    result[j] = 0;
    return result;
}

int             my_word_count(char *str)
{
    int         i;
    int         result;
    int         is_word;

    i = 0;
    result = 0;
    is_word = 0;
    while (str[i])
    {
        if (is_alphanumeric(str[i]) == 1)
            is_word = 1;
        else if (is_word == 1)
        {
            result++;
            is_word = 0;
        }
        i++;
    }
    if (is_word == 1)
        result++;
    return result;
}

int             my_word_size(char *str)
{
    int         i;

    i = 0;
    while (is_alphanumeric(str[i]) == 1)
        i++;
    return i;
}

char            *my_get_word(char *str)
{
    int         i;
    char        *output;

    i = 0;
    output = malloc(my_word_size(str) + 1);
    if (output == 0)
        return 0;
    while (is_alphanumeric(str[i]) == 1)
    {
        output[i] = str[i];
        i++;
    }
    output[i] = 0;
    return output;
}

int             is_alphanumeric(char c)
{
    if ((c >= 'A' && c <= 'Z')
        || (c >='a' && c <= 'z')
        || (c >= '0' && c <= '9' ))
        return 1;
    return 0;
}

