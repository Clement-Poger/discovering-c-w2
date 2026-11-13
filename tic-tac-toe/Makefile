NAME = tic_tac_toe

SRCS = ./main.c \
		./utils/color_id.c \
		./utils/computer_guess.c \
		./utils/couleurs.c \
		./utils/def_colors.c \
		./utils/game.c \
		./utils/gamemode.c \
		./utils/game_ordi.c \
		./utils/get_index.c \
		./utils/show_board.c \
		./utils/show_winner.c \
		./utils/str_len.c \
		./board/case_left.c \
		./board/gest_board.c \
		./board/winner.c \
		./checker/int_checker.c

all: $(NAME)

$(NAME): $(SRCS)
		gcc $(CFLAGS) $(SRCS) -o $(NAME)

fclean:
		rm -f $(NAME)

re: fclean all