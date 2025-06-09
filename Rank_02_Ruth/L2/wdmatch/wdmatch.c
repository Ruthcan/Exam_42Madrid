#include <stdlib.h>
char    **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k; 
    char **split;
    split = (char **)malloc(sizeof(char *) * 256);
    if (!split)
        return NULL;
    while(str[i] == ' ' || str[i] == '\t')
        i++;
    while(str[i] != '\0')
    {
        k = 0;
        split[j] = (char *)malloc(sizeof(char) * 4856);
        if (!split[j])
            return NULL;
        while (str[i] != ' ' && str[i] != '\t')
            split[j][k++] = str[i++];
        split[j][k] = '\0';
        while(str[i] == ' ' || str[i] == '\t')
            i++;
        j++;  
    }
    split[j] = NULL;
    return (split);
}

#include <stdio.h>
int main(int argc, char **argv)
{
    char *str = "  you are the best";
    char **split = ft_split(str);
    int i = 0;
    while (split[i] != NULL)
    {
        printf("%s", split[i]);
        free (split[i]);
        i++;
    }
free(split);
return (0);
}