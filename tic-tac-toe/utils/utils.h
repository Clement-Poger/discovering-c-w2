#ifndef __UTILS_H__
#define __UTILS_H__
#include <unistd.h>
#include "./couleurs.h"
#include "../env/env.h"
#include "../board/board.h"
#include "../checker/checker.h"

void show_board(char ** board);
int str_len(char *str);
const char *color_id(int val);
char *repeat_string(int count, char character);
void def_players_colors();
void def_ia_level();
int get_index(char **tab, const char *val);
void show_winner(int winner);
int choose_gamemode();
int game();
int game_ordi();
int computer_guess();
int has_won(int mark);
int minimax(int computer_turn, int depth);

#endif