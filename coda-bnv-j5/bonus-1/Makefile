# Makefile

NAME = refactor_calculatrice

SRCS = main.c \
	   ./utils/operations.c \
	   ./operations/add.c ./operations/subtract.c \
	   ./operations/multiply.c ./operations/divide.c \
	   ./operations/modulo.c \
	   ./utils/verif_op.c \
	   ./utils/verif_snd_nb.c ./utils/couleurs.c

all: $(NAME)

$(NAME): $(SRCS)
	gcc $(CFLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all