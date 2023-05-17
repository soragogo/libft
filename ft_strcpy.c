char *ft_strcpy(char *dst, const char *src){
	int i;
	i = 0;
	
	while (src[i])
	{	
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return dst;
}
/*
#include <stdio.h>
int main(){
	char str1[] = "Helloooooooo;)";
	char str2[50];
	ft_strcpy(str2, str1);
	printf("%s", str2);
	return 0;
}*/
