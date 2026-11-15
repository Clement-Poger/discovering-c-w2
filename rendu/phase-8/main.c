#include <stdlib.h>
#include <stdio.h>

#include "./header/tic-tac-toe.h"

// Définition des Variables communes à tous les fichiers.

const char *player_one_color = BGRN;
const char *player_two_color = BRED;
const int BOARD_SIZE = 3;
char **game_board;
int computer_difficulty = 1;

// Question de Fin de lancement.

void replay(void) {
    printf(BBLU " ┏━━━━━━  "BLU"1"BBLU"  ━━━━━━┓  ┏━━━━━━  "BLU"2"BBLU"  ━━━━━━┓  ┏━━━━━━  "BLU"3"BBLU"  ━━━━━━━┓\n");
    printf(BBLU " ┃     "BCYN"Rejouer"BBLU"     ┃  ┃  "BCYN"Aller au Menu"BBLU"  ┃  ┃      "BCYN"Fermer"BBLU"      ┃\n");
    printf(BBLU " ┗━━━━━━━━━━━━━━━━━┛  ┗━━━━━━━━━━━━━━━━━┛  ┗━━━━━━━━━━━━━━━━━━┛\n");
    printf(BLU " >> Choix : " CRESET);
    
    // Redirection vers l'option choisi
    int option = read_integer_in_range(1,3);
    if (option == 1) {
        select_game_mode();
        replay();
    } else if (option == 2) {
        int systemRet = system("./tic_tac_toe");
        if (systemRet == -1) {
            printf(RED " ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
            printf(RED " ┃       "BRED"Une commande n'a pas été exécutée avec succès. "RED"      ┃\n");
            printf(RED " ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n" CRESET);
        };
    } else {
        clear_terminal();
    }
}

int main() {
    // Affichage du Menu d'Accueil
    clear_terminal();
    printf(BBLU " ┏━  Tic Tac Toe  ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
    printf(BBLU " ┃  "BLU"Bonjour. Avant de lancer une partie, vous pouvez "BBLU"         ┃\n");
    printf(BBLU " ┃  "BLU"choisir vos couleurs de joueurs."BBLU"                          ┃\n");
    printf(BBLU " ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
    printf(BBLU " ┏━━━━━━  "BLU"1"BBLU"  ━━━━━━┓  ┏━━━━━━  "BLU"2"BBLU"  ━━━━━━┓  ┏━━━━━━  "BLU"3"BBLU"  ━━━━━━━┓\n");
    printf(BBLU " ┃      "BCYN"Jouer"BBLU"      ┃  ┃  "BCYN"Configuration"BBLU"  ┃  ┃   "BCYN"Explications"BBLU"   ┃\n");
    printf(BBLU " ┗━━━━━━━━━━━━━━━━━┛  ┗━━━━━━━━━━━━━━━━━┛  ┗━━━━━━━━━━━━━━━━━━┛\n");
    printf(BLU " >> Choix : " CRESET);
    
    // Redirection vers l'option choisi
    int option = read_integer_in_range(1,3);
    if (option == 1) {
        select_game_mode();
        replay();
    } else if (option == 2) {
        configure_player_colors();
        main();
    } else {
        display_explanations();
        main();
    }
}