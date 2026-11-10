#include "operations.h"
#include "../operations/add.h"
#include "../operations/subtract.h"
#include "../operations/multiply.h"
#include "../operations/divide.h"
#include "../operations/modulo.h"

int calculate(int first, int second, char operator, double *result) {
        if (operator == 43) {
            *result = add(first, second);
        } else if (operator == 45) {
            *result = subtract(first, second);
        } else if (operator == 42) {
            *result = multiply(first, second);
        } else if (operator == 47) {
            *result = divide(first, second);
        } else if (operator == 37) {
            *result = modulo(first, second);
        }
}