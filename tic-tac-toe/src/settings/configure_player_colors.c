#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include "../../header/game_state.h"
#include "../../header/input.h"
#include "../../header/settings.h"
#include "../../header/terminal_colors.h"

// https://www.quora.com/Can-the-define-value-be-changed


void configure_player_colors(void) {
    bool pl1_confirm = false;
    bool pl2_confirm = false;

    char * color_wheel[] = {BGRN, BMAG, BRED, BYEL, BWHT};
    int pl1_color = 0;
    int pl2_color = 2;
    int color_count = sizeof(color_wheel) / sizeof(color_wheel[0]);
    char * box1_color = BBLU;
    char * box2_color = BBLU;

    system("clear");

    while (!pl1_confirm || !pl2_confirm) {
        box1_color = pl1_confirm ? BGRN : BBLU;
        box2_color = pl2_confirm ? BGRN : BBLU;
        printf(BBLU " %s┏━━━━━━━━━ Player 1 ━━━━━━━━━┓  %s┏━━━━━━━━━ Player 2 ━━━━━━━━━┓\n", box1_color, box2_color);
        printf(BBLU " %s┃  %s▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓%s  ┃  %s┃  %s▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓%s  ┃\n",
                     box1_color, color_wheel[pl1_color], box1_color, box2_color, color_wheel[pl2_color], box2_color);
        printf(BBLU " %s┃  "CRESET" Switch: 1 ━ Confirm: 3 %s  ┃  %s┃  "CRESET" Switch: 2 ━ Confirm: 4 %s  ┃\n",
                     box1_color, box1_color, box2_color, box2_color);
        printf(BBLU " %s┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛  %s┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n", box1_color, box2_color);
        printf(CYN " >> Choix : " CRESET);

        int option = read_integer_in_range(1, 4);
        if (option == 1 && !pl1_confirm) {
            pl1_color++;
            if (pl1_color == pl2_color) { pl1_color++; }
            if (pl1_color >= color_count) {
                if (pl2_color != 0) {pl1_color = 0;}
                else {pl1_color = 1;}
            }
        } else if (option == 2 && !pl2_confirm) {
            pl2_color++;
            if (pl2_color == pl1_color) { pl2_color++; }
            if (pl2_color >= color_count) {
                if (pl1_color != 0) {pl2_color = 0;}
                else {pl2_color = 1;}
            }
        } else if (option == 3) {
            pl1_confirm = true;
        } else if (option == 4) {
            pl2_confirm = true;
        }
        system("clear");
    }
    printf(BBLU " %s┏━━━━━━━━━ Player 1 ━━━━━━━━━┓  %s┏━━━━━━━━━ Player 2 ━━━━━━━━━┓\n", box1_color, box2_color);
    printf(BBLU " %s┃  %s▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓%s  ┃  %s┃  %s▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓%s  ┃\n",
                 box1_color, color_wheel[pl1_color], box1_color, box2_color, color_wheel[pl2_color], box2_color);
    printf(BBLU " %s┃  "CRESET" Switch: 1 ━ Confirm: 3 %s  ┃  %s┃  "CRESET" Switch: 2 ━ Confirm: 4 %s  ┃\n",
                 box1_color, box1_color, box2_color, box2_color);
    printf(BBLU " %s┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛  %s┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n", box1_color, box2_color);
    sleep(1);
    system("clear");

    player_one_color = color_wheel[pl1_color];
    player_two_color = color_wheel[pl2_color];
}