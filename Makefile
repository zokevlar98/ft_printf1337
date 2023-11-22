NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c			\
		ft_putchar.c		\
		ft_putstr.c			\
		ft_putnbr.c			\
		ft_putnbrpos.c			\
		ft_puthex_low.c			\
		ft_puthex_upp.c			\
		ft_putaddress.c			\


RM = rm -rf

OBJS = $(SRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

%.o:%.c ft_printf.h Makefile
	cc $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)


re: fclean all

.PHONY: all clean fclean re