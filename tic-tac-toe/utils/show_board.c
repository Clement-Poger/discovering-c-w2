#include <stdlib.h>
#include <stdio.h>
#include "./utils.h"

void show_board(char ** board) {
    int i = 0; int j = 0;
    while (i < lenght) {
        if (i == 0) {
            printf("                        ┏━━━━┳━━━━┳━━━━┓                        \n                        ");
        } else {
            printf("                        ┣━━━━╋━━━━╋━━━━┫                        \n                        ");
        }
        while (j < lenght) {
            printf("┃%s%s"CRESET"", color_id(board[i][j]), (board[i][j] >= 1 && board[i][j] <= 3) ? "▓▓▓▓" : "░░░░");
            j++;
        }
        printf("┃                        \n");
        i++;
        j = 0;
    }
    printf("                        ┗━━━━┻━━━━┻━━━━┛                        \n");
} 