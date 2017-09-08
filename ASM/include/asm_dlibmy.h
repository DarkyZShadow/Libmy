#ifndef __ASM_DLIBMY_H__
#define __ASM_DLIBMY_H__

#ifndef NULL
#define NULL    (void*)0
#endif

#ifndef BOOL
#define BOOL    char
#define true    1
#define false   0
#endif


/* Function prototypes */
typedef long 	(*asm_strlen_t)(const char *str);
typedef char* 	(*asm_strchr_t)(const char *str, char c);


#endif

