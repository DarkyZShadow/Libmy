#include <stdio.h>

int             asm_strlen(char *str);

int             main(int argc, char **argv)
{
    char        toto[]   = "Bonjour, je suis toto";

    printf("Longeur de '%s' : %d\n", toto, asm_strlen(toto));
    return 0;
}

