#include <unistd.h>
int main(int argc, char **argv)
{
    int j = 0;
    if (argc == 2)
    {
        while (argv[1][j] == ' ' || argv[1][j] == '\t')
            j++;
        while (argv[1][j] && (argv[1][j] != ' ' && argv[1][j] != '\t'))
                write(1, &argv[1][j++], 1);
    }
    write(1, "\n", 1);
    return (0);
}