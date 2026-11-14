#include <stddef.h>
#include "../../header/ai.h"
#include "../../header/game_state.h"

// Basé sur https://medium.com/@mhhassaan.1/mini-max-algorithm-in-artificial-intelligence-e0a0da694b3b
int minimax_search(int computer_turn, int depth) {
    if (has_winning_line(2)) return 10 - depth;
    if (has_winning_line(1)) return depth - 10;

    int has_empty = 0;
    int best = computer_turn ? -100 : 100;
    for (size_t i = 0; i < BOARD_SIZE; i++) {
        for (size_t j = 0; j < BOARD_SIZE; j++) {
            if (game_board[i][j] != 0) continue;
            has_empty = 1;
            game_board[i][j] = computer_turn ? 2 : 1;
            int score = minimax_search(!computer_turn, depth + 1);
            game_board[i][j] = 0;
            if (computer_turn && score > best) best = score;
            if (!computer_turn && score < best) best = score;
        }
    }
    return has_empty ? best : 0;
}
