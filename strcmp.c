#include<stdio.h>
#include<string.h>
void main()
{
	int n;
	char a[20],b[20];
	printf("Enter the 1st string\n");
	scanf(" %[^\n]",a);
	printf("The entered string is %s\n",a);
	printf("Enter the second string\n");
	scanf(" %[^\n]",b);
	printf("The entered string is %s\n",b);
	n=strcmp(a,b);
	printf("The difference of ASCII value of strings is %d",n);
}
