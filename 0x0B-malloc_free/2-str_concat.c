#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *str = NULL;
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int copy_len = (n < len2) ? n : len2;

    str = malloc(len1 + copy_len + 1);
    if (str == NULL)
        return (NULL);

    strcpy(str, s1);
    strcat(str, s2);

    return (str);
}
