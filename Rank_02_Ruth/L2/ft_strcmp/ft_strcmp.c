int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] && s1[2] && s1[i] == s2[i])
        i++;
    return(s1[i] - s2[i]);
}

#include "stdio.h"
int main()
{
    printf("%d", ft_strcmp("c", "b"));
    return (0);
}