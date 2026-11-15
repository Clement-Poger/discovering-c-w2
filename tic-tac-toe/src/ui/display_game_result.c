#include <stdio.h>
#include "../../header/game_state.h"
#include "../../header/terminal_colors.h"
#include "../../header/ui.h"

// Affiche le message correspondant au gagnant ou à l'égalité.

void display_game_result(int winner) {
    if (winner == 3) {
        printf(RED " ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
        printf(RED " ┃        "BRED"Dommage, l'Ordinateur s'est révélé meilleur."RED"        ┃\n");
        printf(RED " ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n" CRESET);
    } else if (winner == 4) {
        printf(MAG " ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
        printf(MAG " ┃             "BMAG"Bien tenté, mais c'est une égalité."MAG"            ┃\n");
        printf(MAG " ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n" CRESET);
    } else {
        printf(GRN " ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
        printf(GRN " ┃        Félicitation %s■ Player %d ■"GRN", Vous avez Gagné !        ┃\n",
                (winner == 1) ? player_one_color : player_two_color , winner);
        printf(GRN " ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n" CRESET);
    }
}