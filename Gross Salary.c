#include<stdio.h>
void main()
{
	int bs,da,hra,gs;
	printf("Enter basic salary \n");
	scanf("%d",&bs);
	if(bs<1500)
	{
		hra=bs/10;
		da=bs*9/10;
	}
	else
	{
		hra=500;
		da=bs*98/100;
	}
	gs=bs+da+hra;
	printf("The Gross Salary is %d \n",gs);
}
