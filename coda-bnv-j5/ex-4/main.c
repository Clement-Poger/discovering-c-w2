#include <stdio.h>
#include <string.h>
#include "functions.h"

int main() {
    char mot[256];
    printf("What do you want to print?: ");
    fgets(mot, sizeof(mot), stdin);
    mot[strcspn(mot, "\n")] = '\0';
    print_str(mot);
    printf("\n");
    
    int nb_1 = 5;
    int nb_2 = 8;
    int nb_3 = 15;

    double r = add(nb_1,nb_2);
    printf("%d + %d = %.1f\n", nb_1,nb_2, r);

    r = compute_average(nb_1,nb_2,nb_3);
    printf("Values: %d, %d, %d\nAverage = %.1f\n", nb_1,nb_2,nb_3, r);
}