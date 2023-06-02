#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *index;
    t_list *save;

    index = *lst;
    save = NULL;
    if (lst == NULL || *lst == NULL || del == NULL)
        return;
    while (index != NULL)
    {
        save = index->next;
        index->next = NULL;
        del(index->content);
        free(index);
        index = save;
    }
    *lst = NULL;
}