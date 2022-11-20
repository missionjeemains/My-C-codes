#include<stdio.h>
#include<string.h>
void main()
{
	char a[20],b[20];
	printf("Enter The 1st string\n");
	scanf(" %[^\n]",a);
	printf("The 1st string is %s\n",a);
	printf("Enter The 2nd string\n");
	scanf(" %[^\n]",b);
	printf("The 2nd string is %s\n",b);
	strcpy(a,b);
	printf("The copied string is %s",a);
}
