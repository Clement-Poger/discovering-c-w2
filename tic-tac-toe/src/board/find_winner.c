#include "../../header/board.h"
#include "../../header/game_state.h"

int find_winner(void) {
    // Vérification des lignes et des colonnes
    for (int i = 0; i < BOARD_SIZE; i++) {
        // Lignes
        if (game_board[i][0] != 0 && game_board[i][0] == game_board[i][1] && game_board[i][1] == game_board[i][2]) {
            return game_board[i][0];
        }
        // Colonnes
        if (game_board[0][i] != 0 && game_board[0][i] == game_board[1][i] && game_board[1][i] == game_board[2][i]) {
            return game_board[0][i];
        }
    }

    
    // Vérification des diagonales
    if (game_board[0][0] != 0 && game_board[0][0] == game_board[1][1] && game_board[1][1] == game_board[2][2]) {
        return game_board[0][0];
    }
    if (game_board[0][2] != 0 && game_board[0][2] == game_board[1][1] && game_board[1][1] == game_board[2][0]) {
        return game_board[0][2];
    }
    
    // Pas de gagnant pour l'instant
    return 0;
}