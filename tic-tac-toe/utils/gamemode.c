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
    while (scanf("%d", &option) != 1 || (option != 1 && option != 2)) {
        printf(RED " ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
        printf(RED " ┃         "BRED"La valeur n'est pas comprise entre 1 et 2. "RED"        ┃\n");
        printf(RED " ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n" CRESET);
        int character;
        while ((character = getchar()) != '\n' && character != EOF) {
        }
        if (character == EOF) {
            return EXIT_FAILURE;
        }
    }
    if (option == 1) {
        game_ordi();
    } else if (option == 2) {
        game();
    }    
}