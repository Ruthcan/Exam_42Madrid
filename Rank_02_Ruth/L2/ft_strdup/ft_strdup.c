#include <stdlib.h>
char *ft_strdup(char *str)
{
    int i = 0;
    while (str[i])
    i++;
    char *dest = malloc(sizeof(char) * i + 1);
    if (!dest)
        return NULL;
    i = 0;
    while (str[i])
    {
        dest[i] = str[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}