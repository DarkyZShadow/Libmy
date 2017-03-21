#include "include/asm_libmy.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int             main(int argc, char **argv)
{
    char        *ptr;
    int         nb = 111;
    int         nb_neg = -222;
    char        c = '\n';
    char        empty_str[128];
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
    asm_putchar(c);

    /* isneg */
    printf("[ASM] Is neg %d : %d\n", nb, asm_isneg(nb));
    printf("[ASM] Is neg %d : %d\n", nb_neg, asm_isneg(nb_neg));
    printf("[ASM] Is neg %d : %d\n\n", 0, asm_isneg(0));
 
    /* swap */
    printf("[ASM] Nb 1 : %d\tNb2 : %d\n", nb, nb_neg);
    asm_swap(&nb, &nb_neg);
    printf("[ASM] Nb 1 : %d\tNb2 : %d\n\n", nb, nb_neg);

    /* strcpy/strncpy */
    printf("[ASM] strcpy : %s = %s\n", asm_strcpy(empty_str, toto), empty_str);
    memset(empty_str, 0, asm_strlen(toto));
    printf("[ASM] strncpy : %s = %s\n\n", asm_strncpy(empty_str, toto, 16), empty_str);
   
    /* strcat/strncat */
    printf("[ASM] strcat : %s = %s\n", asm_strcat(empty_str, " michou"), empty_str);
    printf("[ASM] strncat : %s = %s\n\n", asm_strncat(empty_str, " !!!!!!", 2), empty_str);

    /* strcmp/strncmp */
    printf("[ASM] strcmp \"cacahuete\" et \"catastrophe\" : %d\n", asm_strcmp("cacahuete", "catastrophe"));
    printf("[ASM] strcmp \"typhon\" et \"tournesol\" : %d\n", asm_strcmp("typhon", "tournesol"));
    printf("[ASM] strcmp \"moi\" et \"moi\" : %d\n", asm_strcmp("moi", "moi"));
    printf("[ASM] strncmp(4) \"cocorico\" et \"cocotier\" : %d\n", asm_strncmp("cocorico", "cocotier", 4));
    printf("[ASM] strncmp(5) \"cocorico\" et \"cocotier\" : %d\n\n", asm_strncmp("cocorico", "cocotier", 5));

    /* putnbr  */
    printf("[ASM] putnbr de 56465161 : \n");
    asm_putnbr(56465161);
    printf("\n\n");
    printf("[ASM] putnbr de -56465161 : \n");
    asm_putnbr(-56465161);
    printf("\n\n");

    return 0;
}

