#include <stdio.h>
#include <stdlib.h>

#include "../../header/terminal_colors.h"

// Rétablit les attributs de couleur par défaut du terminal.
void reset_terminal_colors(void) {
    printf(CRESET);
}

// Efface le terminal et affiche un message si la commande ne peut pas être lancée.
void clear_terminal(void) {
    int systemRet = system("clear");
    if (systemRet == -1) {
        printf(RED " ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
        printf(RED " ┃       "BRED"Une commande n'a pas été exécutée avec succès. "RED"      ┃\n");
        printf(RED " ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n" CRESET);
    }
}