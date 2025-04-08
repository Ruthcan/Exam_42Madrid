#include <unistd.h>
int main(int argc, char **argv)
{
    int repeticiones;
    int j = 0;
    if (argc == 2)
    {
        while (argv[1][j])
        {
            if (argv[1][j] >= 'a' && argv[1][j] <= 'z')
                repeticiones = (argv[1][j] - 'a' + 1);
            else if (argv[1][j] >= 'A' && argv[1][j] <= 'Z')
                repeticiones = (argv[1][j] - 'A' + 1);
            else
                repeticiones = 1;
            while(repeticiones--)
                write(1, &argv[1][j], 1);
            j++;
        }

    }
    write(1, "\n", 1);
    return (0);
}