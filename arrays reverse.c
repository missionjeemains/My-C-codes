#include<stdio.h>
void main()
{
	int i;
	int a[10];
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The Reverse order is\n");
	for(i=9;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
}

