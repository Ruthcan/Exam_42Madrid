//invertir la cadena
int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
    i++;
    return (i);
}


char    *ft_strrev(char *str)
{
    int inicio = 0;
    int final = ft_strlen(str) - 1;
    char temp;
    while (inicio < final)
    {
        temp = str[inicio];
        str[inicio] = str[final];
        str[final]  = temp;
        inicio++;
        final--;
    }
    return(str);
}
#include <stdio.h>
int main()
{
    char word[] = "Ruth";
    printf("%s", ft_strrev(word));
}