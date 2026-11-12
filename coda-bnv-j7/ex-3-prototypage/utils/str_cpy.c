#include <stdlib.h>
#include "./utils.h"

// SI UTILISE, AJOUTER UN FREE DE LA VAR D'ACCUEIL

char *str_cpy(char * str)
{
    int len = str_len(str);
    char * cpy = malloc(len * sizeof(char));
    cpy[len-1] = '\0';

    int i = 0;
    while (str[i] != '\0') {
        cpy[i] = str[i];
        i++;
    }
    cpy[i] = '\0';
    return cpy;
}