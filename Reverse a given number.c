#include<stdio.h>

void main()
{
	int num,res=0,rem,res1=0,res2=0,fres;
	printf("Enter any number \n");
	scanf("%d",&num);
	rem=num%10;
	res=rem*100;
//	printf("Reversed value is %d \n",res);
	num=num/10;
	rem=num%10;
	res1=rem*10;
//	printf("Reversed value is %d \n",res1);
	num=num/10;
	rem=num%10;
	res2=rem*1;
	fres=res+res1+res2;
	printf("Reversed value is %d \n",fres);
	//num=num/10;
	//rem=num%10;
	}
