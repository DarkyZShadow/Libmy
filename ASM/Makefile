ASM				=	nasm
NAME			=	libmy.a
SRC				=	src/asm_strchr.asm			\
					src/asm_strlen.asm          \
                    src/asm_putchar.asm         \
                    src/asm_putstr.asm          \
                    src/asm_isneg.asm
OBJ				=	$(SRC:.asm=.o)
FLAGS			=	-f elf64 -g
RM				=	rm -f

all             :   $(NAME)

$(NAME)			:	$(OBJ)
					ar rc $(NAME) $(OBJ)
					ranlib $(NAME)
					$(RM) $(OBJ)

%.o : %.asm
					$(ASM) $(FLAGS) -o $@ $<

clean			:	
					$(RM) $(OBJ)

fclean			:			clean
					$(RM) $(NAME)

re				:	fclean all

.PHONY			:	re

