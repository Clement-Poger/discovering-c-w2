#include <stdio.h>

double compute_average(double nb1, double nb2, double nb3) {
    double result = (nb1+nb2+nb3)/3;
    return(result);
}

int main() {
    int nb_1 = 18;
    int nb_2 = 14;
    int nb_3 = 15;

    double r = compute_average(nb_1,nb_2,nb_3);
    printf("Values: %d, %d, %d\nAverage = %.1f\n", nb_1,nb_2,nb_3, r);
}