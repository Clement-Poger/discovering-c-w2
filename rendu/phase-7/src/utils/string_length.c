#include "../../header/string_utils.h"

// Compte les caractères d'une chaîne jusqu'à son terminateur nul.
int string_length(char *string) { 
    int i = 0;
    while(string[i] != '\0') {i++;}
    return i;
}