#include <stdio.h>
void	ft_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 4;
    int y = 6;
    ft_swap(&x, &y);
    printf("%d y %d\n", x, y);
    return (0);
}