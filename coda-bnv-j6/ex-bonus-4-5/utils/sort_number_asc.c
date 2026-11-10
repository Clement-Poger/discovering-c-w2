#include <stdio.h>

void sort_numbers_asc(int *numbers) {
	int length = 0;
	//  Compte le nombre d'éléments jusqu'à atteindre la sentinelle 0.
	while (numbers[length] != 0) {
		length++;
	}

	int i = 0;
	//  Répète les passages jusqu'à ce que le tableau soit entièrement trié.
	while (i < length - 1) {
		int j = 0;
		// Compare les valeurs voisines et les échange si elles sont dans le mauvais ordre.
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
	printf("Tri (Croissant) : ");
	int k = 0;
	// Affiche chaque valeur séparée par une virgule, sauf la dernière.
	while (k < length) {
		printf("%d%s", numbers[k], k < length - 1 ? ", " : "");
		k++;
	}
	printf("\n");
}
