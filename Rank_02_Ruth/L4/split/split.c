#include <stdlib.h>
char **ft_split(char *str)
{
    int i = 0;
    int j;
    int k = 0;
    char **split;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
    i++; 
    split = (char **)malloc(sizeof(char *) * 256);
    if (!split)
    return NULL;
    while (str[i] != '\0')
    {
        j = 0;
        split[k] = (char *)malloc(sizeof(char) * 4096);
        if (!split[k])
        return NULL;
        while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
            split[k][j++] = str[i++];
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
        split[k][j] = '\0';
        k++;
    }
    split[k] = NULL;
    return(split);
}

#include <stdio.h>

int main(void)
{
    char **words = ft_split("   You are the best   ");
    int i = 0;

    while (words[i])
    {
        printf("%s\n", words[i]);
        free(words[i]);
        i++;
    }
    free(words);
    return 0;
}