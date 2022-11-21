NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_prtchar.c ft_prtstr.c ft_itoa.c ft_prtnbr.c

OBJ = $(SRC:.c=.o)

%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.phony : all clean fclean re

