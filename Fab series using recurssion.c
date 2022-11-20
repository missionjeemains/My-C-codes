#include<stdio.h>
int fibonacci(int);
void main()
{	
	int a,i,x;
	printf("Enter the value upto which you want to find fibonacci series \n");
	scanf("%d",&x);
	a=fibonacci(x);
	for(i=0;i<x;i++)
	{
	printf("%d  ",fibonacci(i));
    }
}
int fibonacci(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1 || n==2)
	{
		return 1;
	}
	else
	{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}
