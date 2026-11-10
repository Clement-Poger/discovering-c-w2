#include <stdio.h>

void print_str(char *str) {
    printf("%s", str);
}

int add(int nb1, int nb2) {
    double result = (nb1+nb2);
    return(result);
}

double compute_average(double nb1, double nb2, double nb3) {
    double result = (nb1+nb2+nb3)/3;
    return(result);
}
