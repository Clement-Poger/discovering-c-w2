# Makefile

NAME = bonus_pointer

SRCS = main.c ./utils/sort_number.c ./utils/sort_number_asc.c ./utils/sort_number_dsc.c

CFLAGS = -Wall -Wextra -O2

all: $(NAME)

$(NAME): $(SRCS)
	gcc $(CFLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all