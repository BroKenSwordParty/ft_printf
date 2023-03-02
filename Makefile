NAME = libftprintf.a

SRCS = srcs/ft_printf.c\
	srcs/ft_hexapower.c\
	srcs/ft_putchar.c\
	srcs/ft_putnbr.c\
	srcs/ft_putstr.c\
	srcs/ft_strlen.c\
	srcs/ft_unsigned.c

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra
	
LIBC = ar rcs

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
		$(LIBC) $@ $^

clean:
	$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean bonus fclean re
