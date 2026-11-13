#include <stdlib.h>
#include <stdio.h>
#include "../env/env.h"
#include "../utils/utils.h"

int board_checker(int min, int max, int playing_player) {
    int option;

    while (scanf("%d", &option) != 1 || (option < min || option > max)) {
            system("clear");
            printf(RED " ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
            printf(RED " ┃         "BRED"La valeur n'est pas comprise entre %d et %d. "RED"        ┃\n", min, max);
            printf(RED " ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n" CRESET);
            show_board(GAME_BOARD);            
            printf(BLU " >> Player %d [%s▓▓▓▓"BLU"] ━━ Choix : " CRESET,
                playing_player, (playing_player == 1) ? ENV_PLAYER_1_COLOR : ENV_PLAYER_2_COLOR);
            int character;
            while ((character = getchar()) != '\n' && character != EOF) {
            }
            if (character == EOF) {
                return EXIT_FAILURE;
            }
        }
    return option;
}