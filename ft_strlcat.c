int ft_strlcat(char *dst, const char *src, int n)
{
	int i = 0;
	int j = 0;
	int k = 0;
	while(dst[i])
		i++;
	k = i;
	while (src[j] && i + j < n - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = 0;
	while (src[j])
		j++;
	if (k < n) return k + j;
	else 	return n + j;
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char src[50] = ":o:p:)";
	char dst[50] = "Helloo";
	printf("%d", ft_strlcat(dst, src, 10));
//	printf("%lu", strlcat(dst, src, 10));
	printf("%s", dst);
}*/