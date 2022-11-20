#include<stdio.h>
void main()
{
	int num;
	printf("Enter a Number \n");
	scanf("%d",&num);
	if(num%4==0)
	{
		printf("This year is a leap year");
	}
	else
	{
		printf("This year is not a leap year");
	}
}
