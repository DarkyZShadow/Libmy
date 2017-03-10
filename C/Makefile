CC			= 	gcc
NAME		= 	libmy.a
SRC			= 	src/utils/my_write.c          	\
				src/basic/my_putchar.c			\
	  			src/basic/my_isneg.c			\
	  			src/basic/my_put_nbr.c			\
	  			src/basic/my_swap.c				\
	  			src/basic/my_putstr.c			\
	  			src/basic/my_strlen.c			\
	  			src/basic/my_getnbr.c			\
	  			src/basic/my_strcpy.c			\
	  			src/basic/my_strncpy.c			\
	  			src/basic/my_strcmp.c			\
	  			src/basic/my_strncmp.c			\
	  			src/basic/my_strcat.c			\
	  			src/basic/my_strncat.c			\
	  			src/basic/my_strstr.c			\
				src/basic/my_strdup.c			\
				src/basic/my_str_to_wordtab.c
OBJ			=	$(SRC:%.c=%.o)
RM			= 	rm -f
INCS        =   -Iinclude
CFLAGS		= 	-W -Wall -Werror -ansi -pedantic $(INCS)
LDFLAGS 	= 	-lmy $(INCS)

$(NAME)		:	$(OBJ)
				$(CC) $(SRC) -c $(LDFLAGS)
				ar r $(NAME) $(OBJ)
				ranlib $(NAME)

all			:	$(NAME)

clean		:
				$(RM) $(OBJ)

fclean		:			clean
				$(RM) $(NAME)

re			:	fclean all

.PHONY		:	re

