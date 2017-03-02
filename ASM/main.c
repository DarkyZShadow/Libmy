#include <string.h>
#include <stdio.h>

size_t          asm_strlen(const char *str);
char            *asm_strchr(const char *str, int c);
void            asm_putchar(char c);
void            asm_putstr(char *str);

int             main(int argc, char **argv)
{
    char        *ptr;
    char        c = '\n';
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

    /* putchar/putstr */
    fputs("\n[ORI] Retour a la ligne.", stdout);
    putchar(c);
    asm_putstr("[ASM] Retour a la ligne.");
    asm_putchar(c);
    
    
    
    return 0;
}

