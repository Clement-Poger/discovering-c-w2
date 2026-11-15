#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#include "../../header/game_state.h"
#include "../../header/input.h"
#include "../../header/settings.h"
#include "../../header/string_utils.h"
#include "../../header/terminal_colors.h"

// Permet de choisir et d'enregistrer le niveau de difficulté de l'ordinateur.

void configure_computer_difficulty(void) {
    int level = computer_difficulty;

    int color_count = 3;

    bool ia_confirm = false;
    clear_terminal();

    while (!ia_confirm) {
        // Affiche le niveau courant et les commandes de navigation.
        printf(BBLU " ┏━━━━━━━━━━━━━━━━━  Choix du Niveau de l'IA  ━━━━━━━━━━━━━━━━┓\n");
        printf(BBLU " ┃   %sFacile "BBLU" ••••••••••••••  %sNormal"BBLU"  •••••••••••••  %sHardcore"BBLU"  ┃\n",
                (level == 0) ? BGRN : BBLU, (level == 1) ? BYEL : BBLU, (level == 2) ? BRED : BBLU);
        printf(BBLU " ┃     %s◢◣%s     ┃\n",
                repeat_character((level)*24, ' '), repeat_character((2 - level)*24, ' '));
        printf(BBLU " ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
        printf(BBLU " ┏━━━━━━  1  ━━━━━━┓  ┏━━━━━━━  2  ━━━━━━┓  ┏━━━━━━  3  ━━━━━━┓\n");
        printf(BBLU " ┃    Précédent    ┃  ┃      Suivant     ┃  ┃     Valider     ┃\n");
        printf(BBLU " ┗━━━━━━━━━━━━━━━━━┛  ┗━━━━━━━━━━━━━━━━━━┛  ┗━━━━━━━━━━━━━━━━━┛\n");
        printf(BLU " >> Choix : " CRESET);

        int option = read_integer_in_range(1, 3);
        // Déplace le niveau ou confirme le choix.
        if (option == 1 && !ia_confirm) {
            level--;
        } else if (option == 2 && !ia_confirm) {
            level++;
        } else if (option == 3) {
            ia_confirm = true;
        }
        if (level < 0) { level = color_count - 1; }
        if (level > color_count - 1) { level = 0; }
        clear_terminal();
    }

    // Enregistre le niveau sélectionné pour la partie.
    computer_difficulty = level;
}