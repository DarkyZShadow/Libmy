#include <string.h>
#include <stdio.h>

size_t          asm_strlen(const char *str);
char            asm_strchr(const char *str, char c);

int             main(int argc, char **argv)
{
    char        ptr;
    char        toto[]   = "Bonjour, je suis toto";

    printf("Longeur de '%s' : %d\n", toto, strlen(toto));
    printf("Longeur de '%s' : %d\n", toto, asm_strlen(toto));
    printf("Longeur de '%s' : %d\n", "toto", strlen("toto"));
    printf("Longeur de '%s' : %d\n", "toto", asm_strlen("toto"));

    /*ptr = asm_strchr(toto, 'o');
    printf("----> %p:%d:%c <---\n", &ptr, ptr, ptr);
    /*while (ptr != 0)
    {
        printf("Charactere 'o' trouve a : %d\n", ptr-toto+1);
        ptr = asm_strchr(ptr+1,'s');
    }*/

    return 0;
}

