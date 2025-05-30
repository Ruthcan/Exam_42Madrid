int ft_atoi(const char *str) //verifico el alfabeto 
{
    int i = 0;
    int sign = 1;
    int integer = 0;
    while (str[i] == 32 || str[i] > 9 && str[i] < 13)
    i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
        sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        integer = (integer * 10) + (str[i] - '0');
        i++; 
    }
    return(integer * sign);
}

#include <stdio.h>
int main()
{
    printf("%d", ft_atoi("123"));
    return(0);
}