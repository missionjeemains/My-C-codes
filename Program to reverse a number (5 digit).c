#include<stdio.h>
void main()
{
	int num,rem,res=0,res1=0,res2=0,res3=0,res4=0,resf=0;
	printf("Enter any number! \n");
	scanf("%d",&num);
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
	res4=res4+rem;
	res4=res4*1;
	resf=res+res1+res2+res3+res4;
	printf("The reversed digit is %d",resf);
	}
