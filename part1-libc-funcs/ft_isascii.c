int ft_isascii(char c)
{
	if (c <= 177 && c >= 0)
	return (0);
	else return (1);
}
/*
#include <stdio.h>
int main()
{
	char c = '3';
	printf("%d", ft_isalpha(c));
}*/
