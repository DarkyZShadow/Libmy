#include "asm_dlibmy.h"
#include <stdio.h>
#include <dlfcn.h>

int                 main(int ac, char **av)
{
    int             res_int;
	char            *res_pchar;
    void            *handle;
	asm_strlen_t	asm_strlen;
	asm_strchr_t	asm_strchr;

    if (!(handle = dlopen("libasmlib.so", RTLD_LAZY | RTLD_GLOBAL | RTLD_NOW)))
        return 1;

    asm_strlen = dlsym(handle, "asm_strlen");
    asm_strchr = dlsym(handle, "asm_strchr");

    res_int = asm_strlen("Ok...");
    printf("%d\n", res_int);
	res_pchar = asm_strchr("Ok...", '.');
    printf("%s\n", res_pchar);

    return 0;
}

