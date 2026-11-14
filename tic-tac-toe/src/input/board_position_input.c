#include <stdlib.h>
#include <stdio.h>
#include "../../header/game_state.h"
#include "../../header/input.h"
#include "../../header/terminal_colors.h"
#include "../../header/ui.h"

int read_board_position(int min, int max, int playing_player) {
    int option;

    while (scanf("%d", &option) != 1 || (option < min || option > max)) {
            system("clear");
            printf(RED " ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
            printf(RED " ┃         "BRED"La valeur n'est pas comprise entre %d et %d. "RED"        ┃\n", min, max);
            printf(RED " ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n" CRESET);
            display_board(game_board);            
            printf(BLU " >> Player %d [%s▓▓▓▓"BLU"] ━━ Choix : " CRESET,
                playing_player, (playing_player == 1) ? player_one_color : player_two_color);
            int character;
            while ((character = getchar()) != '\n' && character != EOF) {
            }
            if (character == EOF) {
                return EXIT_FAILURE;
            }
        }
    return option;
}