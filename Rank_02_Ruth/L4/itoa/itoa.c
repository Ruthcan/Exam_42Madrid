#include <stdlib.h>
int intlen(int n)
{
    int i = 0;
    if (n <= 0)
        i++;
    while (n)
    {
        i++;
        n = n / 10;
    }
    return (i);
}

char    *ft_itoa(int nbr)
{
    if (nbr == -2147483648)
        return ("-2147483648");
    char    *str;
    int len = intlen(nbr);
    str = malloc(len + 1);
    if (!str)
        return (NULL);
    str[len] = '\0';
    if (nbr == 0)
    {
        str[0] = '0';
        return (str);
    }
    if (nbr < 0)
    {
        str[0] = '-';
        nbr = -nbr;
    }
    while (nbr > 0)
    {
        str[--len] = (nbr % 10) + '0';
        nbr = nbr / 10;
    }
    return(str);
}

#include <stdio.h>
int main()
{
    printf("%s\n", ft_itoa(4588));
    return(0);
}