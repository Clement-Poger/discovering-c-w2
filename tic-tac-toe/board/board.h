#ifndef __BOARD_H__
#define __BOARD_H__

char ** gen_board(int lenght);
void free_board(char ** tab);
int is_winner();
int case_restantes();

#endif