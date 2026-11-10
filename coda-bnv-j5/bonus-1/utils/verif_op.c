#include <stdio.h>
#include "couleurs.h"
#include "verif_op.h"

int snd_op_check(char *op) {
    while (*op != '+' && *op != '-' && *op != '*' && *op != '/' && *op != '%') {
        printf(RED " ┏━━━━━━━━━━━━━━━━━━━  Erreur Détectée  ━━━━━━━━━━━━━━━━━━┓\n"
                   " ┃░░░░░░░░  Le symbole indiqué n'est pas reconnu.  ░░░░░░░┃\n"
                   " ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n" CRESET);
        printf(CYN " >> Nouveau symbole: " CRESET);
        if (scanf(" %c", op) != 1) {
            return 0;
        }
    }
    return 1;
}