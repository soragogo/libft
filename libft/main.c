#include "libft.h"
int main(void)
{
	char **s;
	char str[] = "sdfghj";

	str[3] = 1;
	s = ft_split(str, '\0');
	printf("%s", s[0]);
}