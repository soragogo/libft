char *ft_strcat(char *dst, const char *src)
{
	int i = 0;
	int j = 0;
	
	while (dst[i])
		i++;
	while (src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
	return dst;
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char dst[50] = "Hello";
	char src[] = ":)";
	ft_strcat(dst, src);
//	strcat(dst, src);
	printf("%s", dst);
	return 0;
	
}*/
