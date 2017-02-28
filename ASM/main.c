#include <stdio.h>

int             asm_strlen(char *str);
char            *asm_strchr(const char *str, int begin);

int             main(int argc, char **argv)
{
    char        *ptr;
    char        toto[]   = "Bonjour, je suis toto";

    printf("Longeur de '%s' : %d\n", toto, asm_strlen(toto));

    ptr = asm_strchr(toto, 'o');
    while (ptr != 0)
    {
        printf("Charactere 'o' trouve a : %d\n", ptr-toto+1);
        ptr = strchr(pch+1,'s');
    }

    return 0;
}

