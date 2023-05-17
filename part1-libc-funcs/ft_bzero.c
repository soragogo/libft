void *ft_bzero(void *b, int n)
{
	char *p = b;
	int i = 0;
	
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>
int main()
{
	void *b[30];
	ft_bzero(b, 3);
	b[3] = 0;
}*/
