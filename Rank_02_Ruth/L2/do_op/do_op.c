#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc == 4)
    {
    int first = 0;
    int second = 0;
    int result = 0;
    first = atoi(argv[1]);
    second = atoi(argv[3]);
    if(argv[2][0] == '+')
        result = first + second;
    else if(argv[2][0] == '-')
        result = first - second;
    else if(argv[2][0] == '*')
        result = first * second;
    else if(argv[2][0] == '/')
        result = first / second;
    printf("%d", result);
    }
    printf("\n");
    return (0);
}