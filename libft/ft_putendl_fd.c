#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    long long int len;

    len = ft_strlen(s);
    while (len > 0)
    {
        write(fd, s, len);
        s += INT_MAX;
        len -= INT_MAX;
    }
    write(fd, "\n", 1);
}