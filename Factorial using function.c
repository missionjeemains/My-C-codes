#include<stdio.h>
int fac(int);
void main()
{
	int res=0,n;
	printf("Enter The Number to get its factorial \n");
	scanf("%d",&n);
	res=fac(n);
	printf("The factorial result is %d",&res);
}
int fac(int x)
{
	int z;
	for(z=1;z<=x;z++)
	{
		x=x*z;
	}
	return x;
}
