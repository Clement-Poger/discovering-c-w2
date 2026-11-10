# Makefile

NAME = total_add

SRCS = main.c ./utils/add.c ./utils/couleurs.c

all: $(NAME)

$(NAME): $(SRCS)
	gcc $(CFLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all