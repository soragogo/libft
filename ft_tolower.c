char *ft_tolower(char *str)
{
	int i = 0;
	
	while(str[i])
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] += 32;
		i++;
	}
	return str;
}

#include <stdio.h>
int main()
{
	char a[50] = "hEy PeopLE!!*:)";
	printf("%s", ft_tolower(a));
}
