CC	=		gcc

NAME	=		my_ls

SRC	=		my_ls.c \
			my_putstr.c \
			my_putchar.c \
			my_strlen.c   \
			my_strncmp.c\
			my_strcmp.c

OBJ	=		$(SRC:%.c=%.o)

RM	=		rm -f

CFLAGS	=		-ansi	-pedantic	-w

LDFLAGS	=		libmy.a

$(NAME)	:		$(OBJ)
			$(CC) $(OBJ) -o $(NAME)

all	:		$(NAME)

clean	:		$(RM)	$(OBJ)

fclean	:		clean
			$(RM)	$(NAME)

re	:		fclean all