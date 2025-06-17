#include <unistd.h>

int ft_atoi(char *str)
{
    int n = 0;
    while(*str != '\0')
    {
        n = n * 10 + *str - '0';
        str++;
    }
    return(n);
}

void ft_putnbr(int num)
{
    if (num >= 10)
        ft_putnbr( num / 10);
    char c = ( num % 10) + '0';
    write(1, &c, 1);
}

int main(int argc, char *argv[])
{

    if (argc == 2)
    {
        int i = 1;
        int num = ft_atoi(argv[1]);
        while (i <= 9)
        {
            ft_putnbr(i);
            write(1, " x ", 3);
            ft_putnbr(num);
            write(1, " = ", 3);
            ft_putnbr( i * num);
            write(1, "\n", 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);

}