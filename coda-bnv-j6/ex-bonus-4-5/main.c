#include <stdlib.h>
#include "./utils/utils.h"

int main()
{
    // EX 4 BONUS
	int numbers1[] = {5, -6, 29, 34, 0};
    int numbers2[] = {45, -128, 496, 11, -90};

	sort_numbers_asc(numbers1);
	sort_numbers_asc(numbers2);

    // EX 5 BONUS
    int numbers3[] = {5, -6, 29, 34, 0};
    int numbers4[] = {45, -128, 496, 11, -90};

	sort_numbers(numbers3, "asc");
	sort_numbers(numbers4, "hello");
	return EXIT_SUCCESS;
}