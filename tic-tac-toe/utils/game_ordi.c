#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include "./utils.h"

int game_ordi() {
    GAME_BOARD = gen_board(lenght);
    int playing_player = 1;
    int is_win;

    system("clear");
    bool win = false;
    while (!win) {
        if (case_restantes() == 0) {
            win = !win;
            is_win = 5;
            break;
        }
        show_board(GAME_BOARD);
        printf(BLU " >> Player %d [%s▓▓▓▓"BLU"] ━━ Choix : " CRESET, playing_player, ENV_PLAYER_1_COLOR);
        
        int option = int_checker(0,8);
        
        int i = option / 3;
        int j = option % 3;
        
        if (GAME_BOARD[i][j] == 0) {
            GAME_BOARD[i][j] = playing_player;
            show_board(GAME_BOARD);
            system("clear");

            is_win = is_winner();
            if (is_win != 0) {
                break;
            }

            // Ordinateur
            // Check if there is at least one empty cell
            bool found_empty = false;
            for (int x = 0; x < 3 && !found_empty; ++x) {
                for (int y = 0; y < 3 && !found_empty; ++y) {
                    if (GAME_BOARD[x][y] == 0) {
                        found_empty = true;
                    }
                }
            }
            if (found_empty) {
                do {
                    option = computer_guess();
                    i = option / 3;
                    j = option % 3;
                } while (GAME_BOARD[i][j] != 0);
                show_board(GAME_BOARD);
                GAME_BOARD[i][j] = 3;
                printf(BLU " >> Ordinateur %s[▓▓▓▓] "BLU"━━ Choix : %d" CRESET, ENV_PLAYER_2_COLOR, option);
                sleep(1);
                system("clear");
            }

        } else {
            system("clear");
            printf(RED " ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
            printf(RED " ┃                "BRED"Cette case est déjà occupée."RED"                ┃\n");
            printf(RED " ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n" CRESET);
        }

        is_win = is_winner();
        if (is_win != 0) {
            win = true;
        }
    }
    show_winner(is_win);

    // On libère la mémoire en fin de programme
    free_board(GAME_BOARD);

}