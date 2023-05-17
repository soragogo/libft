char *ft_strncat(char *dst, const char *src, int n)
{
	int i = 0;
	int j = 0;
	while (dst[i])
		i++;
	while (src[j] && j < n - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
	return dst;
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	char dst[50] = "hello";
	char src[] = ";):p:)";
	ft_strncat(dst, src, 10);
	printf("%s", dst);
}*/
