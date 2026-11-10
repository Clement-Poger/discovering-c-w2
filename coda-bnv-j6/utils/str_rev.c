#include <stdio.h>
#include "./str_len.h"

void str_rev(char *str) {
    int left = 0;
    int right = str_len(str);

    // Swap characters from both ends
    while (left < right){
        right--;

        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
    }
    printf("%s", str);
}