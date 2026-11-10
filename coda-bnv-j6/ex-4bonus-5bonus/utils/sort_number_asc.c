#include <stdio.h>

void sort_numbers_asc(int *numbers) {
	int length = 0;
	while (numbers[length] != 0) {
		length++;
	}

	int i = 0;
	while (i < length - 1) {
		int j = 0;
	while (j < length - i - 1) {
			if (numbers[j] > numbers[j + 1]) {
				int temp = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	printf("Sort (Asc) : ");
	int k = 0;
	while (k < length) {
		printf("%d%s", numbers[k], k < length - 1 ? ", " : "");
		k++;
	}
	printf("\n");
}
