#include <stdio.h>

int add(int nb1, int nb2) {
    double result = (nb1+nb2);
    return(result);
}

int main() {
    int nb_1 = 5;
    int nb_2 = 8;

    double r = add(nb_1,nb_2);
    printf("%d + %d = %.1f\n", nb_1,nb_2, r);
}