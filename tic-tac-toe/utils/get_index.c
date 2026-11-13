#include <stdio.h>
#include <stdlib.h>

int get_index(char **tab, const char *val)
{
    for (size_t i = 0; i < sizeof(tab); i++)
    {
        if (tab[i] == val) {
            return i;
        }
    }
    return -1;
}