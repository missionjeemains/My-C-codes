#include<stdio.h>
int gcd(int,int);
void main()
{
	int a,b,hcf;
	printf("Enter two numbers \n");
	scanf("%d%d",&a,&b);
	hcf=gcd(a,b);
	printf("Result is %d",hcf);
}
int gcd(int x,int y)
{
    if(x==0)
	{
		return y;
	}
	else if(y==0)
	{
		return x;
	}
	else
	{
		return(y,x%y);
	}
}

