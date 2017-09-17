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

    if (!(handle = dlopen("libasmlib.so", RTLD_LAZY | RTLD_GLOBAL | RTLD_NOW)))
        return 1;

	test_str = malloc(6);
	test_str2 = malloc(5);
	strcpy(test_str, "Ok...");
	strcpy(test_str2, "Hi !");
	test_chr = '.';

    asm_strlen = dlsym(handle, "asm_strlen");
    asm_strchr = dlsym(handle, "asm_strchr");
	asm_putchar = dlsym(handle, "asm_putchar");
	asm_putstr = dlsym(handle, "asm_putstr");
	asm_isneg = dlsym(handle, "asm_isneg");
	asm_swap = dlsym(handle, "asm_swap");

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

    return 0;
}

