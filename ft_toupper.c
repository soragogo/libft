char *ft_toupper(char *str)
{
	int i = 0;
	
	while(str[i])
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] -= 32;
		i++;
	}
	return str;
}
/*
#include <stdio.h>
int main()
{
	char a[50] = "hEy PeopLE!!*:)";
	printf("%s", ft_toupper(a));
}*/
