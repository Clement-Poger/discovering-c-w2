NAME = show_parameters

SRCS = ./main.c ./utils/str_cpy.c ./utils/str_len.c ./utils/print_tab.c


all: $(NAME)

$(NAME): $(SRCS)
		gcc $(CFLAGS) $(SRCS) -o $(NAME)

fclean:
		rm -f $(NAME)

re: fclean all