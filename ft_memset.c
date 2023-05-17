void *ft_memset(void *b, int c, int n)
{
	char *p = b;
	int i = 0;
	
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>
int main()
{
	void *b[30];
	ft_memset(b, 0, 3);
	b[3] = 0;
}*/
