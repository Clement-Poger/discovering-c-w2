#ifndef TIC_TAC_TOE_AI_H
#define TIC_TAC_TOE_AI_H

int choose_computer_move(void);
int has_winning_line(int player_mark);
int minimax_search(int is_computer_turn, int depth);

#endif
