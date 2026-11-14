#ifndef TIC_TAC_TOE_UI_H
#define TIC_TAC_TOE_UI_H

void display_board(char **board);
void display_game_result(int winner);
const char *get_player_color(int player_mark);
void display_explanations(void);
void show_explanations_step(int step);

#endif
