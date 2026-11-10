#include <stdio.h>
#include "./utils/add.h"
#include "./utils/couleurs.h"

int main() {
    int number;
    int result;
    
    printf(GRN " ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n"
                " ┃  "BGRN"Auto Add Toggle On !"GRN"                                  ┃\n"
           GRN " ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n" CRESET);
    printf(CYN "  >> Add : " CRESET);
    scanf(" %d", &number);

    while (number != 0)
    {
        result = add(result, number);
        printf(BLU " ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n"
                    "    Total : "BBLU"%d\n"
               BLU " ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n" CRESET, result);
        printf(CYN "  >> Add : " CRESET);
        scanf(" %d", &number);
    }
    printf(RED " ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n"
                " ┃  "BRED"Auto Add Toggle Off ! "RED"                                ┃\n"
                "    "BRED"Total : %d\n"
           RED " ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n" CRESET, result);
    }