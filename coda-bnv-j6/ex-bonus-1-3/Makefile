# Makefile

NAME = bonus_pointer

SRCS = main.c ./utils/swap_ptr.c ./utils/count_words.c ./utils/revert_words.c ./utils/str_len.c

CFLAGS = -Wall -Wextra -O2

all: $(NAME)

$(NAME): $(SRCS)
	gcc $(CFLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all