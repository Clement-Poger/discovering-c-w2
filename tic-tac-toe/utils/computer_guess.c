#include <stdlib.h>
#include <stdio.h>
#include "./utils.h"

int computer_guess() {
    for (size_t i = 0; i < lenght; i++)
    {   for (size_t j = 0; j < lenght; j++)
        {   
            if (GAME_BOARD[i][j] == 0) {
                return i * 3 + j;
            }
        }
    }
    return -1;  
}