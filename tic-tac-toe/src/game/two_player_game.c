#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../../header/board.h"
#include "../../header/game.h"
#include "../../header/game_state.h"
#include "../../header/input.h"
#include "../../header/terminal_colors.h"
#include "../../header/ui.h"

int play_two_player_game(void) {
    game_board = create_board(BOARD_SIZE);
    int playing_player = 1;
    int is_win;

    system("clear");
    bool win = false;
    while (!win) {
        if (count_empty_cells() == 0) {
            win = !win;
            is_win = 5;
            break;
        }

        display_board(game_board);
        printf(BLU " >> Player %d [%s▓▓▓▓"BLU"] ━━ Choix : " CRESET, playing_player, (playing_player == 1) ? player_one_color : player_two_color);

        int option = read_board_position(0, 8, playing_player);
        
        int i = option / 3;
        int j = option % 3;
        
        if (game_board[i][j] == 0) {
            game_board[i][j] = playing_player;
            playing_player = (playing_player + 1) % 3;
            if (playing_player == 0) { playing_player++; };
            system("clear");
        } else {
            system("clear");
            printf(RED " ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
            printf(RED " ┃                "BRED"Cette case est déjà occupée."RED"                ┃\n");
            printf(RED " ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n" CRESET);
        }
        is_win = find_winner();
        if (is_win != 0) {
            win = true;
        }
    }
    display_game_result(is_win);

    // On libère la mémoire en fin de programme
    destroy_board(game_board);

}