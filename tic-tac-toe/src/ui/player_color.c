#include "../../header/game_state.h"
#include "../../header/terminal_colors.h"
#include "../../header/ui.h"

const char *get_player_color(int player_mark) { 
    if (player_mark == 1) {
        return player_one_color;
    } else if (player_mark == 2 || player_mark == 3) {
        return player_two_color;
    } else {
        return BLU;
    }
}