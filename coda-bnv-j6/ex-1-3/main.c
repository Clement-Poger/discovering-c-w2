#include <stdio.h>
#include <stdlib.h>
#include "./utils/utils.h"

int main(void) {
    char * word = "Hello World";
    char * word2 = "Helli World";
    printf("Longueur de la chaine %s : %d\n", word, str_len(word));
    printf("%s = %s ? : %d (%s)\n", word, word2, str_cmp(word, word2),(str_cmp(word, word2)==0) ? "True" : "False");
    printf("%s = %s ? : %d (%s)\n", word, word, str_cmp(word, word),(str_cmp(word, word)==0) ? "True" : "False");
    printf("%s <-> ", word);
    str_rev(word);
    return EXIT_SUCCESS;
}