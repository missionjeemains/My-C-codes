#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter the numbers \n");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("The number largest of both is %d",a);
	}
	else
	{
		printf("The number largest of both is %d",b);
	}
}
