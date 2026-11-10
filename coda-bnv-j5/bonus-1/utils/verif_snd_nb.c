#include <stdio.h>
#include "couleurs.h"
#include "verif_snd_nb.h"

int snd_nb_check(char op, int *second) {
    while ((op == '/' || op == '%') && *second == 0) {
        printf(RED " ┏━━━━━━━━━━━━━━━━━━━  Erreur Détectée  ━━━━━━━━━━━━━━━━━━┓\n"
                   " ┃░░░░░  La valeur indiquée `0`, n'est pas acceptée.  ░░░░┃\n"
                   " ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n" CRESET);
        printf(CYN " >> 2nd Nombre: " CRESET);
        if (scanf("%d", second) != 1) {
            return 0;
        }
    }
    return 1;
}