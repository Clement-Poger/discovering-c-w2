#include "./utils.h"

int computer_guess() {
    if (COMPUTER_LEVEL == 0) {
        for (size_t i = 0; i < lenght; i++)
        {   for (size_t j = 0; j < lenght; j++)
            {   
                if (GAME_BOARD[i][j] == 0) {
                    return i * 3 + j;
                }
            }
        }
    } else if (COMPUTER_LEVEL == 1) {
        /* Normal: win immediately, block immediate losses, then favor good squares. */
        for (size_t i = 0; i < lenght; i++)
        {   for (size_t j = 0; j < lenght; j++)
            {   
                if (GAME_BOARD[i][j] == 0) {
                    GAME_BOARD[i][j] = 2;
                    int wins = has_won(2);
                    GAME_BOARD[i][j] = 0;
                    if (wins) return i * 3 + j;
                }
            }
        }
        for (size_t i = 0; i < lenght; i++)
        {   for (size_t j = 0; j < lenght; j++)
            {
                if (GAME_BOARD[i][j] == 0) {
                    GAME_BOARD[i][j] = 1;
                    int blocks = has_won(1);
                    GAME_BOARD[i][j] = 0;
                    if (blocks) return i * 3 + j;
                }
            }
        }
        if (GAME_BOARD[1][1] == 0) return 4;
        for (size_t i = 0; i < lenght; i += 2) {
            for (size_t j = 0; j < lenght; j += 2) {
                if (GAME_BOARD[i][j] == 0) return i * 3 + j;
            }
        }
        for (size_t i = 0; i < lenght; i++) {
            for (size_t j = 0; j < lenght; j++) {
                if (GAME_BOARD[i][j] == 0) return i * 3 + j;
            }
        }
    } else {
        /* Hardcore: perfect play with minimax. */
        int best_score = -100;
        int best_move = -1;
        for (size_t i = 0; i < lenght; i++)
        {   for (size_t j = 0; j < lenght; j++)
            {   
                if (GAME_BOARD[i][j] == 0) {
                    GAME_BOARD[i][j] = 2;
                    int score = minimax(0, 1);
                    GAME_BOARD[i][j] = 0;
                    if (score > best_score) {
                        best_score = score;
                        best_move = i * 3 + j;
                    }
                }
            }
        }
        return best_move;
    }
    return -1;  
}