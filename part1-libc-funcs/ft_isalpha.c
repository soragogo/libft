int ft_isalpha(char c)
{
	if ((c <= 'z' && c >= 'a')
			||(c <= 'Z' && c >='A'))
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
