#include <stdlib.h>

int str_cmp(char *str1, char *str2) { 
    int i = 0;
    while(str1[i] == str2[i] && str1[i] != '\0') {i++;}
    return (str1[i] == str2[i]) ? EXIT_SUCCESS : EXIT_FAILURE;
}
