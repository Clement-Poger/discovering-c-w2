#include <string.h>
#include "utils.h"

void sort_numbers(int *numbers, char *order) {
	if (strcmp(order, "asc") == 0) {
		sort_numbers_asc(numbers);
	} else {
		sort_numbers_dsc(numbers);
	}
}
