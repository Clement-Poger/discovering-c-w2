#include <stdio.h>

#include "./header/terminal_colors.h"

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
}
