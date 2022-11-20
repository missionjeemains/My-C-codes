#include<stdio.h>
void main()
{
	char a[100],b[100];
	int i=0,j=0;
	printf("Enter 1st string \n");
	gets(a);
	printf("Enter 2nd string \n");
	gets(b);
	while(a[i]!='\0')
	{
		i++;
	}
	for(j=0;b[j]!='\0';j++)
	{
		a[i+1]=b[j];
	}
	printf("%s",a);
	printf("%s",b);
}
