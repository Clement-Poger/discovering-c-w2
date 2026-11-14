#include <stdlib.h>
#include <stdio.h>
#include "../../header/game_state.h"
#include "../../header/terminal_colors.h"
#include "../../header/ui.h"

void display_board(char **board) {
    int i = 0; int j = 0;
    while (i < BOARD_SIZE) {
        if (i == 0) {
            printf("                        ┏━━━━┳━━━━┳━━━━┓                        \n                        ");
        } else {
            printf("                        ┣━━━━╋━━━━╋━━━━┫                        \n                        ");
        }
        while (j < BOARD_SIZE) {
            printf("┃%s%s"CRESET"", get_player_color(board[i][j]), (board[i][j] >= 1 && board[i][j] <= 3) ? "▓▓▓▓" : "░░░░");
            j++;
        }
        printf("┃                        \n");
        i++;
        j = 0;
    }
    printf("                        ┗━━━━┻━━━━┻━━━━┛                        \n");
} 