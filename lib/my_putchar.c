/*
** my_putchar.c for Libmy in /home/darkyz/Libmy/master_repo
** 
** Made by SOULIE Sean
** Login   <soulie_s@etna-alternance.net>
**
** ---------------------------------------------------------------------- 
**
** Interruption 80h Fonction 04h                                                                       
** EAX = 04h (fonction)                                                                                
** EBX = Numéro de descripteur de flux (0 : stdin, 1 : stdout, 2 : stderr)                             
** ECX = Adresse des datas                                                                             
** EDX = Size en octet                                                                                 
**                                                                                                     
** http://www.gladir.com/LEXIQUE/INTR/int80f04.htm                                                     
*/

void				my_write(int output, void *buffer, int size)
{
	unsigned int	buff_addr;

	buff_addr = (long)buffer;
	__asm__
	(
		"movl $04, %%eax\n\t"
		"movl %00, %%ebx\n\t"
		"movl %01, %%ecx\n\t"
		"movl %02, %%edx\n\t"
		"int  $0x80\n\t"
		:
		: "r" (output), "r" (buff_addr), "r" (size)
		: "%eax", "%ebx", "%ecx", "%edx"
	);
}

void				my_putchar(char c)
{
	my_write(1, &c, 1);
}

