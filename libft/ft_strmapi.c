#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char *result;

    i = 0;
    if (s == NULL || f == NULL)
        return (NULL);
    result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (result == NULL)
        return (NULL);
    while (i < ft_strlen(s))
    {
        result[i] = f(i, s[i]);
        i++;
    }
    result[i] = '\0';
    return (result);
}