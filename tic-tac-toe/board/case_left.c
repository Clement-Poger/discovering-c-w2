#include <stdlib.h>
#include <stdio.h>
#include "../env/env.h"

int case_restantes() {
    int cases = 9;
    // Vérification des lignes et des colonnes
    for (int i = 0; i < lenght; i++) {
        for (int j = 0; j < lenght; j++) {
            if (GAME_BOARD[i][0] != 0) {
                cases--;
            }
        }
    }
    return cases;
}