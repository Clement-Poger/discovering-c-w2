#include <stdio.h>

void print_str(char *str) {
    printf("%s", str);
}

int main() {
    char mot[256];
    printf("What do you want to print?: ");
    fgets(mot, sizeof(mot), stdin);
    mot[strcspn(mot, "\n")] = '\0';
    print_str(mot);
    printf("\n");
    return 0;
}