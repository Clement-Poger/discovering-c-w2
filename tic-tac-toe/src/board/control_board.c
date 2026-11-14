#include <stdlib.h>
#include "../../header/board.h"

char **create_board(int board_size) {
	char **board = malloc(board_size * sizeof(char*));
    for (size_t i = 0; i < board_size; i++) { board[i] = malloc(board_size * sizeof(int)); };
    for (size_t i = 0; i < board_size; i++) { 
        for (size_t j = 0; j < board_size; j++) { board[i][j] = 0; } 
    };
    return board;
}
void destroy_board(char **board) {
    for (size_t i = 0; i < 3; i++) { free(board[i]); };
    free(board);
}