#include<stdio.h>
void main()
{
	int num,res=0,rem;
	printf("Enter a number \n");
	scanf("%d",&num);
	rem=num%10;
	res=res+rem;
	num=num/10;
	num=num/10;
	num=num/10;
	res=res+num;
	printf("%d",res);
}
