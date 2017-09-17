#include "asm_dlibmy.h"
#include <stdio.h>
#include <dlfcn.h>

int                 main(int ac, char **av)
{
    void            *handle;
	char			*test_str;
	char			*test_str2;
	char			test_chr;
    int             res_int;
	BOOL            res_bool;
	char            *res_pchar;
	asm_strlen_t	asm_strlen;
	asm_strchr_t	asm_strchr;
	asm_putchar_t	asm_putchar;
	asm_putstr_t	asm_putstr;
	asm_isneg_t		asm_isneg;
	asm_swap_t		asm_swap;
	asm_strcpy_t	asm_strcpy;
	asm_strncpy_t	asm_strncpy;
	asm_strcat_t	asm_strcat;
	asm_strncat_t	asm_strncat;
	asm_strcmp_t	asm_strcmp;
	asm_strncmp_t	asm_strncmp;
	asm_putnbr_t	asm_putnbr;
	asm_nbrlen_t	asm_nbrlen;

    if (!(handle = dlopen("libasmlib.so", RTLD_LAZY | RTLD_GLOBAL | RTLD_NOW)))
        return 1;

    asm_strlen = dlsym(handle, "asm_strlen");
    asm_strchr = dlsym(handle, "asm_strchr");
	asm_putchar = dlsym(handle, "asm_putchar");
	asm_putstr = dlsym(handle, "asm_putstr");
	asm_isneg = dlsym(handle, "asm_isneg");
	asm_swap = dlsym(handle, "asm_swap");
	asm_strcpy = dlsym(handle, "asm_strcpy");
	asm_strncpy = dlsym(handle, "asm_strncpy");
	asm_strcat = dlsym(handle, "asm_strcat");
	asm_strncat = dlsym(handle, "asm_strncat");
	asm_strcmp = dlsym(handle, "asm_strcmp");
	asm_strncmp = dlsym(handle, "asm_strncmp");
	asm_putnbr = dlsym(handle, "asm_putnbr");
	asm_nbrlen = dlsym(handle, "asm_nbrlen");

	test_str = malloc(6);
	test_str2 = malloc(6);
	asm_strcpy(test_str, "Ok...");
	asm_strncpy(test_str2, "Hi !!", 6);
	test_chr = '.';

    res_int = asm_strlen(test_str);
    printf("%d\n", res_int);

	res_pchar = asm_strchr(test_str, test_chr);
    printf("%s\n", res_pchar);

	res_int = asm_putchar(test_chr);
    printf("%d\n", res_int);

	asm_putstr(test_str);
	printf("\n");

	res_bool = asm_isneg(42);
	printf("%s\n", res_bool ? "true" : "false");
	res_bool = asm_isneg(-42);
	printf("%s\n", res_bool ? "true" : "false");
	
	printf("%s %s\n", test_str, test_str2);
	asm_swap(test_str, test_str2);
	printf("%s %s\n", test_str, test_str2);

	test_str2[0] = 0;
	asm_strcat(test_str2, test_str);
	test_str2[2] = 0;
	asm_strncat(test_str2, test_str, 2);
	printf("%s\n", test_str2);

	printf("%d\n", asm_strcmp("", ""));
	printf("%d\n", asm_strcmp("a", "ad"));
	printf("%d\n", asm_strcmp("d", "a"));

	printf("%d\n", asm_strncmp("", "", 10));
	printf("%d\n", asm_strncmp("a", "ad", 1));
	printf("%d\n", asm_strncmp("d", "a", 1));

	asm_putnbr(-4242, 10, TRUE);
	printf("\n");
	asm_putnbr(-4242, 10, FALSE);
	printf("\n");
	asm_putnbr(-4242, 16, TRUE);
	printf("\n");
	asm_putnbr(42, 2, TRUE);
	printf("\n");

	printf("%d\n", asm_nbrlen(-4242, 10, TRUE));
	printf("%d\n", asm_nbrlen(-4242, 10, FALSE));
	printf("%d\n", asm_nbrlen(-4242, 16, TRUE));
	printf("%d\n", asm_nbrlen(42, 2, TRUE));

    return 0;
}

