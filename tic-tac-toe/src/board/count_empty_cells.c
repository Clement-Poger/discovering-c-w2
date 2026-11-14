#include "../../header/board.h"
#include "../../header/game_state.h"

int count_empty_cells(void) {
    int cases = 9;
    // Vérification des lignes et des colonnes
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            if (game_board[i][j] != 0) {
                cases--;
            }
        }
    }
    return cases;
}