NAME = copy_rev_string

SRCS = ./main.c ./utils/str_len.c ./utils/str_cpy_rev.c


all: $(NAME)

$(NAME): $(SRCS)
		gcc $(CFLAGS) $(SRCS) -o $(NAME)

fclean:
		rm -f $(NAME)

re: fclean all