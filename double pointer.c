#include<stdio.h>
void main()
{
	int a,*ptr,**ptr1;
	printf("Enter any Number \n");
	scanf("%d",&a);
	ptr=&a;
	ptr1=&ptr;
	printf("Using Variable=%d \n",a);
	printf("Using 1st pointer=%d \n",*ptr);
	printf("Using 2nd pointer=%d \n",**ptr1);
}
