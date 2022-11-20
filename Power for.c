#include<stdio.h>
void main()
{
	int i,b,p,res=1;
	printf("Enter The Base And The Power \n");
	scanf("%d%d",&b,&p);
	for(i=1;i<=p;i++)
	{
		res=res*b;
	}
	printf("%d^%d=%d",b,p,res);
}
