NAME = libftprintf.a

OBJS = ${SRCS:.c=.o}

RM	= rm -rf

CC = cc -Wall -Wextra -Werror

AR = ar -rcs

SRCS =	ft_printf.c\
		ft_print_nbr.c\
		ft_print_str.c\
		ft_print_char.c\
		ft_print_unsigned_nbr.c\
		ft_print_hex.c\
		ft_print_x.c\
		ft_base.c\

.c.o:
		${CC} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		${AR} ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all