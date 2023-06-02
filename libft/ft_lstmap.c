#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new;
    t_list *save;

    if (lst == NULL)
        return (NULL);
    new = malloc(sizeof(t_list));
    if (new == NULL)
        return (NULL);
    save = new;
    while (lst != NULL)
    {
        new->next = malloc(sizeof(t_list));
        if (new->next = NULL)
        {
            new = save;
            while (new != NULL)
            {
                save = new;
                del(new->content);
                free(new);
                new = save->next;
            }
            return (NULL);
        }
        new = new->next;
        f(lst->content);
        ;
        lst = lst->next;
    }
}