#include "./couleurs.h"
#include "./utils.h"

const char *color_id(int val) { 
    if (val == 1) {
        return ENV_PLAYER_1_COLOR;
    } else if (val == 2 || val == 3) {
        return ENV_PLAYER_2_COLOR;
    } else {
        return BLU;
    }
}