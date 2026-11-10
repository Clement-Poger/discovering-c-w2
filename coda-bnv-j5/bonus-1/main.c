#include <stdio.h>
#include <stdlib.h>
#include "./utils/couleurs.h"
#include "./utils/operations.h"
#include "./utils/verif_op.h"
#include "./utils/verif_snd_nb.h"

int main() {
    int fst_number;
    int snd_number;
    double result;
    char operator;

    colors();
    printf(BBLU " ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n"
                " ┃░░░░░░░░░░░░░░░░░░░░  Calculatrice  ░░░░░░░░░░░░░░░░░░░░┃\n"
                " ┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n"
                " ┃  Bonjour !                                             ┃\n"
                " ┃  Pour commencer, choisissez l'une des opérations:      ┃\n"
                " ┃             +      -      *      /      %%              ┃\n"
                " ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n" CRESET);
    printf(CYN "  >> Symbole: " CRESET);
    scanf(" %c", &operator);
    snd_op_check(&operator);

    printf(BLU " ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n"
               " ┃  Indiquez le premier nombre entier.                    ┃\n"
               " ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n" CRESET);
    printf(CYN "  >> 1er Nombre: " CRESET);
    scanf("%d", &fst_number);

    printf(BLU " ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n"
               " ┃  Indiquez le second nombre entier.                     ┃\n"
               " ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n" CRESET);
    printf(CYN "  >> 2nd Nombre: " CRESET);
    scanf("%d", &snd_number);
    snd_nb_check(operator, &snd_number);

    calculate(fst_number, snd_number, operator, &result);

    printf(GRN " ┏━━━━━━━━━━━━━━━━━━━━━  Calculatrice  ━━━━━━━━━━━━━━━━━━━┓\n"
               "                       %d %c %d = %.2f\n"
               " ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n" CRESET,
           fst_number, operator, snd_number, result);
    return 0;
}