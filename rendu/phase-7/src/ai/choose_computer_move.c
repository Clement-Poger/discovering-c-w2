#include <stddef.h>
#include "../../header/ai.h"
#include "../../header/game_state.h"

// Choisit le prochain coup de l'ordinateur selon le niveau configuré.

int choose_computer_move(void) {
    if (computer_difficulty == 0) {
        // Niveau facile : joue dans la première case libre.
        for (int i = 0; i < BOARD_SIZE; i++)
        {   for (int j = 0; j < BOARD_SIZE; j++)
            {   
                if (game_board[i][j] == 0) {
                    return i * 3 + j;
                }
            }
        }
    } else if (computer_difficulty == 1) {
        /* Niveau normal : gagne si possible, bloque les coups dangereux et privilégie les cases fortes. */
        // Cherche d'abord un coup qui permet à l'ordinateur de gagner.
        for (int i = 0; i < BOARD_SIZE; i++)
        {   for (int j = 0; j < BOARD_SIZE; j++)
            {   
                if (game_board[i][j] == 0) {
                    game_board[i][j] = 2;
                    int wins = has_winning_line(2);
                    game_board[i][j] = 0;
                    if (wins) return i * 3 + j;
                }
            }
        }
        // Sinon, empêche le joueur de compléter une ligne gagnante.
        for (int i = 0; i < BOARD_SIZE; i++)
        {   for (int j = 0; j < BOARD_SIZE; j++)
            {
                if (game_board[i][j] == 0) {
                    game_board[i][j] = 1;
                    int blocks = has_winning_line(1);
                    game_board[i][j] = 0;
                    if (blocks) return i * 3 + j;
                }
            }
        }
        // À défaut, privilégie le centre, puis les coins et les autres cases.
        if (game_board[1][1] == 0) return 4;
        for (int i = 0; i < BOARD_SIZE; i += 2) {
            for (int j = 0; j < BOARD_SIZE; j += 2) {
                if (game_board[i][j] == 0) return i * 3 + j;
            }
        }
        for (int i = 0; i < BOARD_SIZE; i++) {
            for (int j = 0; j < BOARD_SIZE; j++) {
                if (game_board[i][j] == 0) return i * 3 + j;
            }
        }
    } else {
        /* Niveau difficile : recherche du meilleur coup avec l'algorithme Minimax. */
        int best_score = -100;
        int best_move = -1;
        // Simule chaque coup disponible et conserve celui au meilleur score.
        for (int i = 0; i < BOARD_SIZE; i++)
        {   for (int j = 0; j < BOARD_SIZE; j++)
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