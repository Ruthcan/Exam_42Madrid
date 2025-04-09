#include <unistd.h>
int main(int argc, char **argv)
{
    int j = 0;
    while (argc == 4 && argv[1][j] && argv[2][1] == '\0' && argv[3][1] == '\0')
    {
        if (argv[1][j] == argv[2][0])
            argv[1][j] = argv[3][0];
        write (1, &argv[1][j], 1);
        j++;
    }
    write (1, "\n", 1);
    return(0);
}