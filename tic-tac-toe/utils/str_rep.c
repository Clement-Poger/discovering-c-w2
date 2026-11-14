#ifndef __REPEAT_STRING__
#define __REPEAT_STRING__

#include <stdlib.h>
#include <string.h>

char *repeat_string(int count, char character)
{
    int name_length = count;
    if (name_length < 0) { name_length = 0; }

    char *result = malloc((size_t)(name_length + 1) * sizeof(char));
    if (result != NULL) {
        memset(result, (unsigned char)character, (size_t)name_length);
        result[name_length] = '\0';
    }

    return result;
}

#endif