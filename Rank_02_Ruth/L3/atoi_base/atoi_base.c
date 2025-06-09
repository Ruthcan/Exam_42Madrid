int ft_conver(char c)
{
    if (c >= '0' && c <= '9')
        return(c - '0');
    if (c >= 'a' && c <= 'f')
        return(c - 'a' + 10);
    if (c >= 'A' && c <= 'F')
        return(c - 'A' + 10);
    return (-1);
}



int ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int integer = 0;
    int sign = 1;
    int value = 0;
    if (str_base < 2 || str_base > 16)
        return (0);
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    if(str[i] == ' ' || str[i] == '+')
    {
        if(str[i] == '-')
            sign = -1; 
        i++;
    }
    while((value = ft_conver(str[i])) != -1 && value < str_base)
    {
        integer = integer * str_base + value;
        i++;
    }
    return (integer * sign);
}

#include <stdio.h>
int main()
{
    printf("%d", ft_atoi_base("1F", 16));
    return (0);
}


/*int ft_atoi(char *str)
{
    int i = 0;
    int integer = 0;
    int sign = 1;
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    if(str[i] == ' ' || str[i] == '+')
    {
        if(str[i] == '-')
            sign = -1; 
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        integer = integer * 10 + (str[i] - '0');
        i++;
    }
    return (integer * sign);
}

#include <stdio.h>
int main()
{
    printf("%d", ft_atoi("123"));
    return (0);
}*/