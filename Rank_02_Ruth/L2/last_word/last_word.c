#include <unistd.h>
int main(int argc, char ** argv)
{
    int j = 0;
    int end = 0;
    int start = 0;
    if (argc == 2)
    {
        while (argv[1][j]) //avanza hasta el final
        j++;
        while (argv[1][j] == '\0' || argv[1][j] == ' ' || argv[1][j] == '\t') //why: necesitamos llegar al final de la palabra, pero sin '\0' || ' ' || '\t'
        j--;
        end = j;
        while (argv[1][j] != ' ' && argv[1][j] != '\t') //why: necesitamos recorrer al inicio de la palabra y si no es ' ' || '\t', es abecedario 
        j--;
        start = j + 1; 
        while (start <= end)
            write(1, &argv[1][start++], 1);
    }
    write(1, "\n", 1);
    return (0);
}