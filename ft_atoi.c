#include <stdio.h>
int ft_atoi(const char *str)
{
	int i = 0;
	int j = 0;
	int minus = 1;
	while(str[i] == ' ')
		i++;
	if(str[i] == '-')
	{
		minus = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		j *= 10;
		j += str[i] - '0';
		i++;
	}
	return (j * minus);
}
/*
int main()
{
	char str[] = "         -2147483648";
	printf("%d", ft_atoi(str));
}*/
