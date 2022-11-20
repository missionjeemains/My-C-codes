#include<stdio.h>
void main()
{
	char a[20];
	printf("Enter a string\n");
	scanf("%[^\n]",a);
	printf("The string entered is\n%s",a);
}
