#include <stdio.h>

int main()
{
	char name[50];
	printf("Enter your name");
	fgets(name, 50, stdin);
	printf("Your name is: %s", name);
	return 0;
}
