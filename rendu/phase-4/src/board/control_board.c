#include <stdlib.h>

#include "../../header/board.h"

// Crée un plateau carré et initialise toutes ses cases à zéro.

char **create_board(int board_size) {
	char **board = malloc(board_size * sizeof(char*));
    for (int i = 0; i < board_size; i++) { board[i] = malloc(board_size * sizeof(int)); };
    for (int i = 0; i < board_size; i++) { 
        for (int j = 0; j < board_size; j++) { board[i][j] = 0; } 
    };
    return board;
}

// Libère la mémoire allouée pour les lignes et le plateau.
void destroy_board(char **board) {
    for (size_t i = 0; i < 3; i++) { free(board[i]); };
    free(board);
}