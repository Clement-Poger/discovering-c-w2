// Header : Fonctions liées à la Gestion du Tableau de Jeu.
#ifndef TIC_TAC_TOE_BOARD_H
#define TIC_TAC_TOE_BOARD_H

char **create_board(int board_size);
void destroy_board(char **board);
int find_winner(void);
int count_empty_cells(void);

#endif