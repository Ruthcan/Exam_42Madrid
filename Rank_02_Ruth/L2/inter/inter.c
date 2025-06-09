#include <unistd.h>
int main(int argc, char **argv)
{
    if(argc == 3)
    {
        int i = 0;
        char letters[256] = {0};
        while (argv[1][i])
        {
              int j = 0;
              while (argv[2][j])
              {
                if (argv[1][i] == argv[2][j] && letters[argv[1][i]] == 0)
                {
                    write(1, &argv[1][i], 1);
                    letters[argv[1][i]] = 1;
                    break;
                }
                j++;
              }
              i++;
        }
    }
    write (1, "\n", 1);
}