#include <stddef.h>
#include "../../header/string_utils.h"

int find_string_index(char **tab, const char *val)
{
    for (size_t i = 0; i < sizeof(tab); i++)
    {
        if (tab[i] == val) {
            return i;
        }
    }
    return -1;
}