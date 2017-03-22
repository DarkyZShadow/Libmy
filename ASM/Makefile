ASM				=	nasm
NAME			=	bin/libasmlib.a
SRC				=	src/asm_strchr.asm			\
					src/asm_strlen.asm          \
                    src/asm_putchar.asm         \
                    src/asm_putstr.asm          \
                    src/asm_isneg.asm			\
					src/asm_swap.asm			\
					src/asm_strcpy.asm			\
					src/asm_strncpy.asm			\
					src/asm_strcat.asm			\
					src/asm_strncat.asm			\
					src/asm_strcmp.asm			\
					src/asm_strncmp.asm         \
                    src/asm_putnbr.asm          \
                    src/asm_nbrlen.asm          \
                    src/asm_itoa.asm            \
                    src/asm_utoa.asm            \
                    src/asm_tolower.asm         \
                    src/asm_toupper.asm
OBJ				=	$(SRC:.asm=.o)
FLAGS			=	-f elf64 -g
RM				=	rm -rf

all             :   $(NAME)

$(NAME)			:	$(OBJ)
					mkdir -p bin
					ar rc $(NAME) $(OBJ)
					ranlib $(NAME)

%.o : %.asm
					$(ASM) $(FLAGS) -o $@ $<

clean			:	
					$(RM) $(OBJ)

fclean			:			clean
					$(RM) bin

re				:	fclean all

.PHONY			:	re

