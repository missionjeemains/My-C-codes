#include<stdio.h>
void main()
{
	int temp,num,rem,res=0,res1=0,res2=0,res3=0,resf=0;
	printf("Enter a Number \n");
	scanf("%d",&num);
	temp=num;
	rem=num%10;
	res=res+rem;
	res=res*10000;
	num=num/10;
	rem=num%10;
	res1=res1+rem;
	res1=res1*1000;
	num=num/10;
	rem=num%10;
	res2=res2+rem;
	res2=res2*100;
	num=num/10;
	rem=num%10;
	res3=res3+rem;
	res3=res3*10;
	num=num/10;
	rem=num%10;
	resf=res+res1+res2+res3+rem;
	printf("%d \n",resf);
	if(resf==temp)
	{
		printf("\n The Given Number is a Palindrome");
	}
	else
	{
		printf("\n The Given Number not equal to reversed number");
	}
}
