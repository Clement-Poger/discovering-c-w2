#include "./utils.h"

int has_won(int mark) {
    for (size_t i = 0; i < lenght; i++) {
        if (GAME_BOARD[i][0] == mark && GAME_BOARD[i][1] == mark && GAME_BOARD[i][2] == mark) return 1;
        if (GAME_BOARD[0][i] == mark && GAME_BOARD[1][i] == mark && GAME_BOARD[2][i] == mark) return 1;
    }
    return (GAME_BOARD[0][0] == mark && GAME_BOARD[1][1] == mark && GAME_BOARD[2][2] == mark) ||
           (GAME_BOARD[0][2] == mark && GAME_BOARD[1][1] == mark && GAME_BOARD[2][0] == mark);
}
