#include <stdlib.h>
#include <stdio.h>
#include "./utils/utils.h"

int main()
{
	char * str;

	str = str_cpy("Hello World!\n");

	printf("Voici ma chaine copiée:\n%s", str);

	free(str);
	exit(0);
}