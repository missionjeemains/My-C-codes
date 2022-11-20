#include<stdio.h>

void main()
{
	int num,res=0,rem;
	printf("Enter any number \n");
	scanf("%d",&num);
	rem=num%10;
	res=res+rem;
	num=num/10;
	rem=num%10;
	res=res+rem;
	num=num/10;
	rem=num%10;
	res=res+rem;
	num=num/10;
	rem=num%10;
	res=res+rem;
	num=num/10;
	rem=num%10;
	res=res+rem;
	printf("The result is %d",res);
}
