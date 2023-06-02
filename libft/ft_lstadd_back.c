#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last;

    last = *lst;
    if (lst == NULL)
        return;
    if (*lst == NULL)
        *lst = new;
    else
    {
        while (last->next != NULL)
            last = last->next;
        last->next = new;
    }
}