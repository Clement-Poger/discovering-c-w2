#include <stdio.h>
#include "utils.h"

void revert_words(char *str) {
    int left = 0;
    char reverse[str_len(str)-1];
    
    while (str[left] != '\0'){
        reverse[left] = str[str_len(str)-1-left];
        left++;
    }
    reverse[left] = '\0';
    printf("%s\n", reverse);
}

