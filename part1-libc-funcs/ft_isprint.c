int ft_isprint(char c)
{
	if (c <= 126 && c >= 32)
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
