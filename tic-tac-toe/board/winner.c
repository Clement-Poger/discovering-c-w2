#include <stdlib.h>
#include <stdio.h>
#include "../env/env.h"

int is_winner() {
    // Vérification des lignes et des colonnes
    for (int i = 0; i < lenght; i++) {
        // Lignes
        if (GAME_BOARD[i][0] != 0 && GAME_BOARD[i][0] == GAME_BOARD[i][1] && GAME_BOARD[i][1] == GAME_BOARD[i][2]) {
            return GAME_BOARD[i][0];
        }
        // Colonnes
        if (GAME_BOARD[0][i] != 0 && GAME_BOARD[0][i] == GAME_BOARD[1][i] && GAME_BOARD[1][i] == GAME_BOARD[2][i]) {
            return GAME_BOARD[0][i];
        }
    }

    
    // Vérification des diagonales
    if (GAME_BOARD[0][0] != 0 && GAME_BOARD[0][0] == GAME_BOARD[1][1] && GAME_BOARD[1][1] == GAME_BOARD[2][2]) {
        return GAME_BOARD[0][0];
    }
    if (GAME_BOARD[0][2] != 0 && GAME_BOARD[0][2] == GAME_BOARD[1][1] && GAME_BOARD[1][1] == GAME_BOARD[2][0]) {
        return GAME_BOARD[0][2];
    }
    
    // Pas de gagnant pour l'instant
    return 0;
}