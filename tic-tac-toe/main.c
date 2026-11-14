#include <stdlib.h>
#include <stdio.h>
#include "./header/game.h"
#include "./header/game_state.h"
#include "./header/input.h"
#include "./header/settings.h"
#include "./header/terminal_colors.h"

const char *player_one_color = BGRN;
const char *player_two_color = BRED;
const int BOARD_SIZE = 3;
char **game_board;
int computer_difficulty = 1;

int main() {
    // Création de la Grille de jeu

    system("clear");
    printf(BBLU " ┏━  Tic Tac Toe  ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
    printf(BBLU " ┃  "BLU"Bonjour. Avant de lancer une partie, vous pouvez "BBLU"         ┃\n");
    printf(BBLU " ┃  "BLU"choisir vos couleurs de joueurs."BBLU"                          ┃\n");
    printf(BBLU " ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
    printf(BBLU " ┏━━━━━━━━━━━  "BLU"1"BBLU"  ━━━━━━━━━━━┓    ┏━━━━━━━━━━━  "BLU"2"BBLU"  ━━━━━━━━━━━┓\n");
    printf(BBLU " ┃       "BCYN"Lancer le Jeu"BBLU"       ┃    ┃   "BCYN"Changer vos couleurs."BBLU"   ┃\n");
    printf(BBLU " ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛    ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
    printf(BLU " >> Choix : " CRESET);
    
    int option = read_integer_in_range(1,2);
    if (option == 2) {
        configure_player_colors();
        main();
    } else if (option == 1) {
        select_game_mode();
    }    
}