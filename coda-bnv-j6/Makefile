# Makefile

NAME = tableaux_discover

SRCS = main.c \
	   ./utils/str_len.c \
	   ./utils/str_rev.c ./utils/str_same.c

all: $(NAME)

$(NAME): $(SRCS)
	gcc $(CFLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all