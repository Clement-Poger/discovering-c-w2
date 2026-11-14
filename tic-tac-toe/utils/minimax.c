#include "./utils.h"

// Basé sur https://medium.com/@mhhassaan.1/mini-max-algorithm-in-artificial-intelligence-e0a0da694b3b
int minimax(int computer_turn, int depth) {
    if (has_won(2)) return 10 - depth;
    if (has_won(1)) return depth - 10;

    int has_empty = 0;
    int best = computer_turn ? -100 : 100;
    for (size_t i = 0; i < lenght; i++) {
        for (size_t j = 0; j < lenght; j++) {
            if (GAME_BOARD[i][j] != 0) continue;
            has_empty = 1;
            GAME_BOARD[i][j] = computer_turn ? 2 : 1;
            int score = minimax(!computer_turn, depth + 1);
            GAME_BOARD[i][j] = 0;
            if (computer_turn && score > best) best = score;
            if (!computer_turn && score < best) best = score;
        }
    }
    return has_empty ? best : 0;
}
