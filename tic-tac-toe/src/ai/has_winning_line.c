#include <stddef.h>
#include "../../header/ai.h"
#include "../../header/game_state.h"

// Vérifie si le symbole indiqué forme une ligne gagnante sur le plateau.

int has_winning_line(int mark) {
    // Vérifie chaque ligne et chaque colonne.
    for (int i = 0; i < BOARD_SIZE; i++) {
        if (game_board[i][0] == mark && game_board[i][1] == mark && game_board[i][2] == mark) return 1;
        if (game_board[0][i] == mark && game_board[1][i] == mark && game_board[2][i] == mark) return 1;
    }
    // Vérifie ensuite les deux diagonales.
    return (game_board[0][0] == mark && game_board[1][1] == mark && game_board[2][2] == mark) ||
           (game_board[0][2] == mark && game_board[1][1] == mark && game_board[2][0] == mark);
}