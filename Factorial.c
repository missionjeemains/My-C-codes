#include<stdio.h>
void main()
{
	int num,i,res=1;
	printf("Enter the number to find its factorial(!) \n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		res=res*i;
	}
	printf("%d",res);
}
