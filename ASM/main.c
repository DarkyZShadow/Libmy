#include <string.h>
#include <stdio.h>

size_t          asm_strlen(const char *str);
char            *asm_strchr(const char *str, int c);

int             main(int argc, char **argv)
{
    char        *ptr;
    char        toto[]   = "Bonjour, je suis toto";

    /* strlen */
    printf("[ORI] Longeur de '%s' : %d\n", toto, strlen(toto));
    printf("[ASM] Longeur de '%s' : %d\n\n", toto, asm_strlen(toto));

    /* strchr */
    ptr = strchr(toto,'o');
    while (ptr != NULL)
    {
        printf("[ORI] Caractere 'o' trouve a : %d\n", ptr - toto + 1);
        ptr = strchr(ptr+1,'o');
    }
    ptr = asm_strchr(toto, 'o');
    while (ptr != NULL)
    {
        printf("[ASM] Caractere 'o' trouve a : %d\n", ptr - toto + 1);
        ptr = asm_strchr(ptr+1,'o');
    }



    return 0;
}

