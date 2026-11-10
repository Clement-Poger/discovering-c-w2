#include <stdio.h>
#include <stdlib.h>
#include "./utils/utils.h"

int main()
{
    // EX 1 BONUS
	int val1 = 42;
	int val2 = 21;

	printf("val1 : %d, val2 : %d\n", val1, val2);

	swap_ptr(&val1, &val2);

	printf("val1 : %d, val2 : %d\n", val1, val2);

    // EX 2 BONUS
    int nb_words;

	nb_words = count_words("Hello World!");
	printf("La phrase contient %d mots\n", nb_words);

	nb_words = count_words("La vie l'univers et tout le reste");
	printf("La phrase contient %d mots\n", nb_words);

    // EX 3 BONUS
	revert_words("Hello World!");
	revert_words("La vie, l'univers et tout le reste");

	exit(0);
}