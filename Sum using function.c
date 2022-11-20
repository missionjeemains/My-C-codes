#include<stdio.h>
void main()
{
	int a,b,c;
	int add(int x,int y);
	printf("Enter the two numbers\n");
	scanf("%d%d",&a,&b);
	c=add(a,b);
	printf("The sum is %d",c);
}
int add(int x,int y)
{
	int z;
	z=x+y;
	return z;
}
