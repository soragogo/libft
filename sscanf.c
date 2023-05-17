#include <stdio.h>

int main()
{
	char input[50];
	int num1, num2;
	printf("Enter two numbers: ");
	fgets(input, 50, stdin);
	sscanf(input, "%d %d", &num1, &num2);
	printf("You entered %d and %d", num1, num2);
	return 0;
}	
