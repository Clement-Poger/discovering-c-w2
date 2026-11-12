#include <stdlib.h>
#include <stdio.h>
#include "./utils/utils.h"

int main()
{
	char * str;
	
	str = str_cpy_rev("Hello World!");
	printf("Voici ma chaine copiée et inversée:\n%s", str);

	free(str);
	exit(0);
}