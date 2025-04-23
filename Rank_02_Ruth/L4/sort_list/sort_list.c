t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int temp;
    t_list *start;
    while(lst != NULL)
    {
        temp = lst->data;
        lst->data = lst->data->next;
        lst->data->next = temp;
    }
    return (start);
}