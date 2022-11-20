#include<stdio.h>
void main()
{
	int i;
	char a[5][10];
	for(i=0;i<5;i++)
	{
		scanf(" %[^\n]",a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%s",a[i]);
		printf("\n");
	}
}
