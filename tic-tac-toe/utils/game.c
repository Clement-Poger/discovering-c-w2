#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "./utils.h"

int game() {
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
        printf(BLU " >> Player %d [%s▓▓▓▓"BLU"] ━━ Choix : " CRESET, playing_player, (playing_player == 1) ? ENV_PLAYER_1_COLOR : ENV_PLAYER_2_COLOR);

        int option = int_checker(0,8);
        
        int i = option / 3;
        int j = option % 3;
        
        if (GAME_BOARD[i][j] == 0) {
            GAME_BOARD[i][j] = playing_player;
            playing_player = (playing_player + 1) % 3;
            if (playing_player == 0) { playing_player++; };
            system("clear");
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