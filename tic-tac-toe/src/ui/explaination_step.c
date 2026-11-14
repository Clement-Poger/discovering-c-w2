#include <stdio.h>
#include <stdlib.h>
#include "../../header/terminal_colors.h"

void show_explanations_step(int step) {
    system("clear");
    printf(BBLU " ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
    printf(BBLU " ┃                        "BLU"Explications"BBLU"                        ┃\n");
    printf(BBLU " ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n" CRESET);

    if (step == 0) {
            printf("\n\n\n\n\n");
            printf(BBLU "   ┏━━  Remplissage de la grille  ━━━━━━━━━━━━━━━━━━━━━━━━━━┓   \n");
            printf(BBLU "   ┃  "BLU"Le Remplssage de la Grille se fait de 0 à 8 de la  "BBLU"   ┃   \n");
            printf(BBLU "   ┃  "BLU"facon suivante :                                   "BBLU"   ┃   \n");
            printf(BBLU "   ┃  "WHT"                  ┏━━━━┳━━━━┳━━━━┓                 "BBLU"   ┃   \n");
            printf(BBLU "   ┃  "WHT"                  ┃ "BBLU"0."WHT" ┃ "BBLU"1."WHT" ┃ "BBLU"2."WHT" ┃                 "BBLU"   ┃   \n");
            printf(BBLU "   ┃  "WHT"                  ┣━━━━╋━━━━╋━━━━┫                 "BBLU"   ┃   \n");
            printf(BBLU "   ┃  "WHT"                  ┃ "BBLU"3."WHT" ┃ "BBLU"4."WHT" ┃ "BBLU"5."WHT" ┃                 "BBLU"   ┃   \n");
            printf(BBLU "   ┃  "WHT"                  ┣━━━━╋━━━━╋━━━━┫                 "BBLU"   ┃   \n");
            printf(BBLU "   ┃  "WHT"                  ┃ "BBLU"6."WHT" ┃ "BBLU"7."WHT" ┃ "BBLU"8."WHT" ┃                 "BBLU"   ┃   \n");
            printf(BBLU "   ┃  "WHT"                  ┗━━━━┻━━━━┻━━━━┛                 "BBLU"   ┃   \n");
            printf(BBLU "   ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛   \n" CRESET);
            printf("\n\n\n\n\n");
    } else if (step == 1) {
            printf("\n\n\n\n\n\n\n");
            printf(BBLU "   ┏━━  Couleurs disponibles   ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
            printf(BBLU "   ┃       "BRED"ROUGE              "BGRN"VERT              "BYEL"JAUNE       "BBLU"┃\n" CRESET);
            printf(BBLU "   ┃  "RED"░░░▓▓▓▓▓▓▓▓▓░░░    "GRN"░░░▓▓▓▓▓▓▓▓░░░    "YEL"░░░▓▓▓▓▓▓▓▓▓░░░  "BBLU"┃\n" CRESET);
            printf(BBLU "   ┃                                                        ┃\n" CRESET);
            printf(BBLU "   ┃       "CYN"CYAN               "BLU"BLEU              "BBLK"GRIS        "BBLU"┃\n" CRESET);
            printf(BBLU "   ┃  "CYN"░░░▓▓▓▓▓▓▓▓▓░░░    "BLU"░░░▓▓▓▓▓▓▓▓░░░    "BBLK"░░░▓▓▓▓▓▓▓▓▓░░░  "BBLU"┃\n" CRESET);
            printf(BBLU "   ┃                                                        ┃\n" CRESET);
            printf(BBLU "   ┃            "BMAG"MAGENTA                   "BWHT"BLANC             "BBLU"┃\n" CRESET);
            printf(BBLU "   ┃        "MAG"░░░▓▓▓▓▓▓▓▓▓░░░          "WHT"░░░▓▓▓▓▓▓▓▓▓░░░        "BBLU"┃\n" CRESET);
            printf(BBLU "   ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n" CRESET);
            printf("\n\n\n\n\n\n\n");
    } else {
            printf(BBLU "   ┏━━━  Fonctionnement des IA  ━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
            printf(BBLU "   ┃  "BGRN"┏━━━  Facile  ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓ "BBLU" ┃\n");
            printf(BBLU "   ┃  "BGRN"┃  "GRN"L'IA choisit la première case libre (De gauche  "BGRN"┃ "BBLU" ┃\n");
            printf(BBLU "   ┃  "BGRN"┃  "GRN"à droite, puis de haut en bas).                 "BGRN"┃ "BBLU" ┃\n");
            printf(BBLU "   ┃  "BGRN"┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛ "BBLU" ┃\n");
            printf(BBLU "   ┃  "BYEL"┏━━━  Normal  ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓ "BBLU" ┃\n");
            printf(BBLU "   ┃  "BYEL"┃  "YEL"L'IA choisit de gagner si possible, sinon elle  "BYEL"┃ "BBLU" ┃\n");
            printf(BBLU "   ┃  "BYEL"┃  "YEL"bloque le joueur. Elle préfère le centre puis   "BYEL"┃ "BBLU" ┃\n");
            printf(BBLU "   ┃  "BYEL"┃  "YEL"les coins, et enfin les autres cases libres.    "BYEL"┃ "BBLU" ┃\n");
            printf(BBLU "   ┃  "BYEL"┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛ "BBLU" ┃\n");
            printf(BBLU "   ┃  "BRED"┏━━━   Hardcore  ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓ "BBLU" ┃\n");
            printf(BBLU "   ┃  "BRED"┃   "RED"L'IA utilise l'algorithme Minimax.             "BRED"┃ "BBLU" ┃\n");
            printf(BBLU "   ┃  "BRED"┃   "RED"                                               "BRED"┃ "BBLU" ┃\n");
            printf(BBLU "   ┃  "BRED"┃   "RED"Elle vérifie les lignes, colonnes et           "BRED"┃ "BBLU" ┃\n");
            printf(BBLU "   ┃  "BRED"┃   "RED"diagonales pour détecter une victoire, puis    "BRED"┃ "BBLU" ┃\n");
            printf(BBLU "   ┃  "BRED"┃   "RED"simule les coups possibles des deux joueurs    "BRED"┃ "BBLU" ┃\n");
            printf(BBLU "   ┃  "BRED"┃   "RED"jusqu'à la fin.                                "BRED"┃ "BBLU" ┃\n");
            printf(BBLU "   ┃  "BRED"┃   "RED"Elle choisit le meilleur résultat :            "BRED"┃ "BBLU" ┃\n");
            printf(BBLU "   ┃  "BRED"┃   "RED"Victoire rapide, Défaite retardée ou Egalité.  "BRED"┃ "BBLU" ┃\n");
            printf(BBLU "   ┃  "BRED"┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛ "BBLU" ┃\n");
            printf(BBLU "   ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n" CRESET);
    }

    printf(BBLU " ┏━━━━━━  "BLU"1"BBLU"  ━━━━━━┓  ┏━━━━━━━  "BLU"2"BBLU"  ━━━━━━┓  ┏━━━━━━  "BLU"3"BBLU"  ━━━━━━┓\n");
    printf(BBLU " ┃    "BLU"Précédent"BBLU"    ┃  ┃      "BLU"Suivant"BBLU"     ┃  ┃     "BLU"Quitter"BBLU"     ┃\n");
    printf(BBLU " ┗━━━━━━━━━━━━━━━━━┛  ┗━━━━━━━━━━━━━━━━━━┛  ┗━━━━━━━━━━━━━━━━━┛\n");
}