# Makefile

NAME = tic_tac_toe

SRCS = main.c \
	src/ai/choose_computer_move.c \
	src/ai/has_winning_line.c \
	src/ai/minimax.c \
	src/board/control_board.c \
	src/board/count_empty_cells.c \
	src/board/find_winner.c \
	src/game/computer_game.c \
	src/game/game_mode_selection.c \
	src/game/two_player_game.c \
	src/input/board_position_input.c \
	src/input/integer_input.c \
	src/settings/configure_computer_difficulty.c \
	src/settings/configure_player_colors.c \
	src/ui/display_board.c \
	src/ui/display_game_result.c \
	src/ui/player_color.c \
	src/ui/terminal_colors.c \
	src/utils/find_string_index.c \
	src/utils/repeat_character.c \
	src/utils/string_length.c

all: $(NAME)

$(NAME): $(SRCS)
	gcc $(CFLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all
