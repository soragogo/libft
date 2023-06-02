#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    void *newContent;
    t_list *new;
    t_list *lst_new;
    t_list *lst_last;

    if (lst == NULL)
        return (NULL);
    lst_new = NULL;
    lst_last = NULL;
    while (lst != NULL)
    {
        newContent = f(lst->content);
        new = ft_lstnew(newContent);
        if (new == NULL)
        {
            ft_lstclear(&lst_new, del);
            return (NULL);
        }
        if (lst_new == NULL)
        {
            lst_new = new;
            lst_last = new;
        }
        else
        {
            lst_last->next = new;
            lst_last = new;
        }
        lst = lst->next;
    }
    return (lst_new);
}