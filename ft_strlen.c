int ft_strlen(const char *s)
{
	int i;

	i = 0;
	while(s[i])
		i++;
	return(i);
}
/*
#include <stdio.h>

int main()
{
	char test[] = "Helloooooooo:)";
	printf("%d", ft_strlen(test));
}*/
