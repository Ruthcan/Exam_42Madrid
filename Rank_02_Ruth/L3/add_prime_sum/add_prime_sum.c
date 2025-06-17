#include <unistd.h>

int atoi (char *str)
{
    int i = 0;
    int res = 0;
    while (str[i])
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return (res);
}

void putnbr(int n)
{
    if ( n >= 10)
        putnbr(n / 10);
    char c = (n % 10) + '0';
    write(1, &c, 1);
}

//Verificamos si es primo
int is_prime(int n)
{
    int i = 2;
    if ( n < 2) //todo numero < a 2 no es primo.
        return 0;
    while ( i * i <= n)
    {
        if ( n % i == 0)// si tiene un divisor distinto de si mismo y 1, no es primo
            return 0; //si n es divisible por i, no es primo
        i++;
    }
    return 1; // si no se encuentra ningun divisor es primo
}


int main(int argc, char *argv[])
{

    if ( argc == 2)
    {
        int num = atoi(argv[1]);
        int sum = 0;
        while (num > 0)
        {
            if (is_prime(num))
                sum = sum + num;
            num--;
        }
        putnbr(sum);
    }
    else
        putnbr(0);
    write(1, "\n", 1);
    return 0;
}