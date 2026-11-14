#include "../../header/string_utils.h"

int string_length(char *string) { 
    int i = 0;
    while(string[i] != '\0') {i++;}
    return i;
}