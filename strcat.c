#include<stdio.h>
#include<string.h>
void main()
{
	char a[20],b[20];
	printf("Enter the 1st string\n");
	scanf(" %[^\n]",a);
	printf("The entered string is %s\n",a);
	printf("Enter the second string\n");
	scanf(" %[^\n]",b);
	printf("The entered string is %s\n",b);
	strcat(a,b);
	printf("%s",a);
}
