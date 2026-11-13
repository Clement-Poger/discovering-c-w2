#include <stdlib.h>
#include <stdio.h>
#include "./utils.h"


int choose_gamemode() {
    // Choix du Mode de Jeu

    int option;
    system("clear");
    printf(BBLU " ┏━  Tic Tac Toe  ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
    printf(BBLU " ┃  "BLU"Veuillez sélectionner un mode de jeu. "BBLU"                    ┃\n");
    printf(BBLU " ┃  "BLU"Précision :"BBLU"                                               ┃\n");
    printf(BBLU " ┃  "BLU"L'option n°2 est réservée aux personnes ayant"BBLU"             ┃\n");
    printf(BBLU " ┃  "BLU"des ami(e)s."BBLU"                                              ┃\n");
    printf(BBLU " ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
    printf(BBLU " ┏━━━━━━━━━━━  "BLU"1"BBLU"  ━━━━━━━━━━━┓    ┏━━━━━━━━━━━  "BLU"2"BBLU"  ━━━━━━━━━━━┓\n");
    printf(BBLU " ┃    "BCYN"Joueur VS Ordinateur"BBLU"   ┃    ┃      "BCYN"Joueur VS Joueur"BBLU"     ┃\n");
    printf(BBLU " ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛    ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
    printf(BLU " >> Choix : " CRESET);
    option = int_checker(1,2);
    if (option == 1) {
        game_ordi();
    } else if (option == 2) {
        game();
    }    
}