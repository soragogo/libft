int ft_isdigit(char c)
{
	if (c <= '9' && c >= '0')
	return (0);
	else return (1);
}
int ft_isalpha(char c)
{
	if ((c <= 'z' && c >= 'a')
			||(c <= 'Z' && c >='A'))
	return (0);
	else return (1);
}
int ft_isalnum(char c)
{
	if ((ft_isdigit(c) == 0) || (ft_isalpha(c) == 0))
		return 0;
	else return 1;
}
/*
#include <stdio.h>
int main()
{
	printf("%d", ft_isalnum('('));
}*/
