#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include "../../header/ai.h"
#include "../../header/board.h"
#include "../../header/game.h"
#include "../../header/game_state.h"
#include "../../header/input.h"
#include "../../header/terminal_colors.h"
#include "../../header/ui.h"

int play_computer_game(void) {
    game_board = create_board(BOARD_SIZE);
    int playing_player = 1;
    int is_win;

    system("clear");
    bool win = false;
    while (!win) {
        if (count_empty_cells() == 0) {
            win = !win;
            is_win = 4;
            break;
        }
        display_board(game_board);
        printf(BLU " >> Player %d [%s▓▓▓▓"BLU"] ━━ Choix : " CRESET, playing_player, player_one_color);
        
        int option = read_board_position(0, 8, playing_player);
        
        int i = option / 3;
        int j = option % 3;
        
        if (game_board[i][j] == 0) {
            game_board[i][j] = playing_player;
            system("clear");

            is_win = find_winner();
            if (is_win != 0) {
                break;
            }

            // Ordinateur
            // Check if there is at least one empty cell
            bool found_empty = false;
            for (int x = 0; x < 3 && !found_empty; ++x) {
                for (int y = 0; y < 3 && !found_empty; ++y) {
                    if (game_board[x][y] == 0) {
                        found_empty = true;
                    }
                }
            }
            if (found_empty) {
                do {
                    option = choose_computer_move();
                    i = option / 3;
                    j = option % 3;
                } while (game_board[i][j] != 0);
                display_board(game_board);
                printf(BLU " >> Ordinateur [%s▓▓▓▓"BLU"] ━━ Choix : "CRESET"%d\n", player_two_color, option);
                sleep(1);
                system("clear");
                game_board[i][j] = 3;
            }

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