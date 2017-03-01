CC				=	gcc
ASM				=	nasm
NAME			=	libmy.a
SRC				=	src/asm_strchr.asm			\
					src/asm_strlen.asm
OBJ				=	$(SRC:%.c=%.o)
FLAGS			=	-f elf -g
RM				=	rm -f

$(NAME)			:	$(OBJ)
					$(ASM) $(FLAGS) $(SRC)
					ar r $(NAME) $(OBJ)
					ranlib $(NAME)

all				:	$(NAME)

clean			:	
					$(RM) $(OBJ)

fclean			:			clean
					$(RM) $(NAME)

re				:	fclean all

.PHONY			:	re

