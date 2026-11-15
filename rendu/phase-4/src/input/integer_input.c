#include <stdlib.h>
#include <stdio.h>

#include "../../header/input.h"
#include "../../header/terminal_colors.h"

// Lit un entier compris entre les bornes fournies.

int read_integer_in_range(int min, int max) {
    int option;
    
    while (scanf("%d", &option) != 1 || (option < min || option > max)) {
            // Signale une saisie invalide et redemande une valeur.
            printf(RED " ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
            printf(RED " ┃         "BRED"La valeur n'est pas comprise entre %d et %d. "RED"        ┃\n", min, max);
            printf(RED " ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n" CRESET);
            printf(BLU " >> Choix : " CRESET);
            
            int character;
            while ((character = getchar()) != '\n' && character != EOF) {
            }
            if (character == EOF) {
                return EXIT_FAILURE;
            }
        }
    return option;
}
