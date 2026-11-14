#include <stdio.h>
#include "../../header/input.h"
#include "../../header/terminal_colors.h"
#include "../../header/ui.h"

void display_explanations(void) {
    int option = 0;
    int step = 0;
    while (option != 3) {
        show_explanations_step(step);
        printf(BLU " >> Choix : " CRESET);
        option = read_integer_in_range(1, 3);
        if (option == 1) {
            step--;
            if (step < 0) { step = 2; }
        } else if (option == 2) {
            step++;
            if (step > 2) { step = 0; }
        }
    }
}