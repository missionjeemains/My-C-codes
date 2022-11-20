#include<stdio.h>
int fac(int);
void main()
{
	int res,num;
	printf("Enter The Number to get its factorial \n");
	scanf("%d",&num);
	res=fac(num);
	printf("The factorial result is %d",res);
}
int fac(int n)
{
	int z,fact=1;
	for(z=1;z<=n;z++)
	{
		fact=fact*z;
	}
	return fact;
}
