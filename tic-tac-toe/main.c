#include <stdlib.h>
#include <stdio.h>
#include "./utils/utils.h"
#include "./env/env.h"
#include "./checker/checker.h"

const char *ENV_PLAYER_1_COLOR = BGRN;
const char *ENV_PLAYER_2_COLOR = BRED;
const int lenght = 3;
char **GAME_BOARD;
int COMPUTER_LEVEL = 1;

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
    
    int option = int_checker(1,2);
    if (option == 2) {
        def_players_colors();
        main();
    } else if (option == 1) {
        choose_gamemode();
    }    
}