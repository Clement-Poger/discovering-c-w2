#include <stdlib.h>
#include "./utils.h"

char *str_cpy_rev(char * str)
{
    int len = str_len(str);
    char * cpy_rev = malloc((len + 1) * sizeof(char));
    int i = 0;
    while (i < len) {
        cpy_rev[i] = str[len-1-i];
        i++;
    }
    cpy_rev[len] = '\0';
    return cpy_rev;
}