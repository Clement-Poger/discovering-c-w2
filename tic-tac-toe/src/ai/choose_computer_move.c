#include <stddef.h>
#include "../../header/ai.h"
#include "../../header/game_state.h"

int choose_computer_move(void) {
    if (computer_difficulty == 0) {
        for (size_t i = 0; i < BOARD_SIZE; i++)
        {   for (size_t j = 0; j < BOARD_SIZE; j++)
            {   
                if (game_board[i][j] == 0) {
                    return i * 3 + j;
                }
            }
        }
    } else if (computer_difficulty == 1) {
        /* Normal: win immediately, block immediate losses, then favor good squares. */
        for (size_t i = 0; i < BOARD_SIZE; i++)
        {   for (size_t j = 0; j < BOARD_SIZE; j++)
            {   
                if (game_board[i][j] == 0) {
                    game_board[i][j] = 2;
                    int wins = has_winning_line(2);
                    game_board[i][j] = 0;
                    if (wins) return i * 3 + j;
                }
            }
        }
        for (size_t i = 0; i < BOARD_SIZE; i++)
        {   for (size_t j = 0; j < BOARD_SIZE; j++)
            {
                if (game_board[i][j] == 0) {
                    game_board[i][j] = 1;
                    int blocks = has_winning_line(1);
                    game_board[i][j] = 0;
                    if (blocks) return i * 3 + j;
                }
            }
        }
        if (game_board[1][1] == 0) return 4;
        for (size_t i = 0; i < BOARD_SIZE; i += 2) {
            for (size_t j = 0; j < BOARD_SIZE; j += 2) {
                if (game_board[i][j] == 0) return i * 3 + j;
            }
        }
        for (size_t i = 0; i < BOARD_SIZE; i++) {
            for (size_t j = 0; j < BOARD_SIZE; j++) {
                if (game_board[i][j] == 0) return i * 3 + j;
            }
        }
    } else {
        /* Hardcore: perfect play with minimax_search. */
        int best_score = -100;
        int best_move = -1;
        for (size_t i = 0; i < BOARD_SIZE; i++)
        {   for (size_t j = 0; j < BOARD_SIZE; j++)
            {   
                if (game_board[i][j] == 0) {
                    game_board[i][j] = 2;
                    int score = minimax_search(0, 1);
                    game_board[i][j] = 0;
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