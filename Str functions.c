#include<stdio.h>
#include<string.h>
void main()
{
	int n,l;
	char a[20],b[20],c[10];
	printf("Enter a string \n");
	scanf("%[^\n]",a);
	l=strlen(a);
	printf("\nThe length of the string is %d",l);
	strcpy(b,a);
	printf("\nThe string copied is %s",b);
	printf("\nEnter a string for concatination");
	scanf("%s",c);
	strcat(a,c);
	printf("\n%s",a);
	n=strcmp(a,b);
	if(n>0)
	printf("\nThe string %s is greater than %s",a,b);
	else 
	printf("\nThe Strings are same");
}
