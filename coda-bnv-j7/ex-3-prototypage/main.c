#include <stdlib.h>
#include <stdio.h>
#include "./utils/utils.h"

int main(int argc, char ** argv)
{
	char ** arg_tab = malloc((argc+1) * sizeof(*arg_tab));
	arg_tab[argc] = NULL;

	for (int i = 0; i < argc; i++) { arg_tab[i] = str_cpy(argv[i]); };
	arg_tab[argc] = NULL;
	
	print_tab(arg_tab);

	int i = 0;
	while(arg_tab[i] != NULL) { free(arg_tab[i]); i++; }

	free(arg_tab);
	exit(0);
}