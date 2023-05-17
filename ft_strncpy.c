char *ft_strncpy(char *dst, const char *src, int len)
{
	int i = 0;
	while(src[i] && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	return dst;
}
/*
#include <stdio.h>
int main()
{
	char dst[50];
	char src[] = "Hello people";
	ft_strncpy (dst, src, 30);
	printf("%s", dst);
}*/
