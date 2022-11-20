#include<stdio.h>
void main()
{
	int a,*ip;
	float b,*fp;
	char c,*cp;
	printf("Enter in A.O \n1)Integer\n2)Decimal\n3)Character\n");
	scanf(" %d",&a);
	scanf(" %f",&b);
	scanf(" %c",&c);
	ip=&a;
	fp=&b;
	cp=&c;
	printf("The Result is\n");
	printf("Integer=%d\n",*ip);
	printf("Decimal=%f\n",*fp);
	printf("Character=%c\n",*cp);
}
