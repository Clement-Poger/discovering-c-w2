#include <stdio.h>
#include "utils.h"

void str_rev(char *str) {
    int left = 0;
    int right = str_len(str)-1;
    char reverse[str_len(str)-1];
    
    while (right >= 0){
        reverse[left] = str[right];
        right--;
        left++;
    }
    reverse[left] = '\0';
    printf("%s\n", reverse);
}

