#include <stddef.h>
#include "../../header/ai.h"
#include "../../header/game_state.h"

// Basé sur https://medium.com/@mhhassaan.1/mini-max-algorithm-in-artificial-intelligence-e0a0da694b3b
// Évalue récursivement les coups possibles pour déterminer le meilleur résultat.
int minimax_search(int computer_turn, int depth) {
    // Attribue un score aux victoires en tenant compte de leur profondeur.
    if (has_winning_line(2)) return 10 - depth;
    if (has_winning_line(1)) return depth - 10;

    // Explore les cases libres et choisit le meilleur score pour le joueur actif.
    int has_empty = 0;
    int best = computer_turn ? -100 : 100;
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            if (game_board[i][j] != 0) continue;
            has_empty = 1;
            game_board[i][j] = computer_turn ? 2 : 1;
            int score = minimax_search(!computer_turn, depth + 1);
            game_board[i][j] = 0;
            if (computer_turn && score > best) best = score;
            if (!computer_turn && score < best) best = score;
        }
    }
    return has_empty ? best : 0;
}