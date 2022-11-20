#include<stdio.h>
void main()
{
	int a[5],i;
	int *ptr; ptr=a;
	printf("Enter Values of array \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",& ptr);
		ptr++;
	}
	printf("values entered are \n");
	ptr=a;
	for(i=0;i<5;i++)
	{
		printf("%d \n",*ptr);
	    ptr++;
	}
}
