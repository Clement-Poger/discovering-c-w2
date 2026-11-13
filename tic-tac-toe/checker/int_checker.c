#include <stdlib.h>
#include <stdio.h>
#include "../env/env.h"
#include "../utils/utils.h"

int int_checker(int min, int max) {
    int option;
    while (scanf("%d", &option) != 1 || (option < min && option > max)) {
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