#include <stddef.h>
#include "../../header/ai.h"
#include "../../header/game_state.h"

int has_winning_line(int mark) {
    for (size_t i = 0; i < BOARD_SIZE; i++) {
        if (game_board[i][0] == mark && game_board[i][1] == mark && game_board[i][2] == mark) return 1;
        if (game_board[0][i] == mark && game_board[1][i] == mark && game_board[2][i] == mark) return 1;
    }
    return (game_board[0][0] == mark && game_board[1][1] == mark && game_board[2][2] == mark) ||
           (game_board[0][2] == mark && game_board[1][1] == mark && game_board[2][0] == mark);
}
