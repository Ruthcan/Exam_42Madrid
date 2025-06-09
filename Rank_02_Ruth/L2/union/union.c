#include <unistd.h>
int main(int argc, char **argv)
{
    if(argc == 3)
    {
        int i = 1;
        char letters[256] = {0};
        while (i < 3)
        {
              int j = 0;
              while (argv[i][j])
              {
                if (letters[argv[i][j]] == 0)
                {
                    write(1, &argv[i][j], 1);
                    letters[argv[i][j]] = 1;
                }
                j++;
              }
              i++;
        }
    }
    write (1, "\n", 1);
}

/*
#include <unistd.h>
int main(int argc, char **argv)
{
    if(argc == 3)
    {
    int i = 0;
    int j = 0;
    unsigned char seen[256] = {0};
    while(argv[1][i])
    {
        if (seen[(unsigned char) argv[1][i]] == 0)
        {
            write (1, &argv[1][i], 1);
            seen[(unsigned char) argv[1][i]] = 1;
        }
        i++;
    }

    while(argv[2][j])
    {
        if (seen[(unsigned char) argv[2][j]] == 0)
        {
            write (1, &argv[2][j], 1);
            seen [(unsigned char) argv[2][j]] = 1;
        }
        j++;
    }
    }
    write(1, "\n", 1);
    return(0);
}*/


