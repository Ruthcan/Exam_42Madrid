#include "stdlib.h"
char *ft_strdup(const char *source)
{
    int i = 0;
    while (source[i] != '\0')
    i++;
    char *dest = malloc(sizeof(char) * i + 1);
    if (!dest)
        return NULL;
    i = 0;
    while (source[i] != '\0')
    {
        dest[i] = source[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

#include "stdio.h"
int main()
{
    printf("%s", ft_strdup("amazing"));
    return(0);
}