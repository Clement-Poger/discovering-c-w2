#include <stdio.h>
#include <stdlib.h>

char ** gen_board(int lenght) {
	char ** tab = malloc(lenght * sizeof(char*));
    for (size_t i = 0; i < lenght; i++) { tab[i] = malloc(lenght * sizeof(int)); };
    for (size_t i = 0; i < lenght; i++) { 
        for (size_t j = 0; j < lenght; j++) { tab[i][j] = 0; } 
    };
    return tab;
}
void free_board(char ** tab) {
    for (size_t i = 0; i < 3; i++) { free(tab[i]); };
    free(tab);
}