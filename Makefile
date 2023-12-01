FILES = printf \
		printf_utils \
		printf_utils2

FILES_PATH = ./sources/
SOURCES = $(foreach buffer, $(FILES), $(FILES_PATH)ft_$(buffer).c)
LIBFT = ./libft/libft.a
OBJS = $(SOURCES:.c=.o)
NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
CC = gcc

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	cp -f $(LIBFT) ./
	mv libft.a $(NAME)
	ar r $(NAME) $(OBJS)

clean:
	make -C libft clean
	rm -rf $(OBJS)

fclean: clean
	make -C libft fclean
	rm -rf $(NAME)

allc: all clean

$(LIBFT):
	make -C libft

re: fclean all

.PHONY: all clean fclean re
