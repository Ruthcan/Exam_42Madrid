#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

int ft_list_size(t_list *begin_list) //cuenta nodos en una linked list
{
    int i = 0;
    while(begin_list != NULL)
    {
        begin_list = begin_list->next;
        i++;
    }
    return (i);
}

/*int strlen(char *str) // cuenta caracteres en una string
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}*/


/*Pasos:
    1. crear los nodos con Malloc
    2. enlazar los nodos
    3. imprimir el resultado
    4. liberar memoria*/

int main()
{
    t_list *n1 = malloc(sizeof(t_list));
    t_list *n2 = malloc(sizeof(t_list));
    t_list *n3 = malloc(sizeof(t_list));

    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    printf("%d", ft_list_size(n1));

    free(n1);
    free(n2);
    free(n3);

    return (0);
}
