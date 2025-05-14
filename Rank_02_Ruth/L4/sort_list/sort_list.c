#include "list.h"

int ascending(int a, int b)
{
	return (a <= b);
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int temp;
    t_list *start;
    start = lst;
    while(lst != NULL)
    {
        if ((*cmp)lst->data, lst->data->next == 0)
        {
            temp = lst->data;
            lst->data = lst->next->data;
            lst->next->data = temp;
        }
        else
            lst = lst->next;
    }
    return (start);
}