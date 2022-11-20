#include<stdio.h>
void swap(int*,int*);
void main()
{
	int a,b;
	printf("Enter two numbers for swapping \n");
	scanf("%d%d",&a,&b);
	printf(" Before swapping a=%d b=%d",a,b);
	swap(&a,&b);
	printf("\nAfter swapping a=%d b=%d",a,b);
}
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	
}
