#include<stdio.h>
int factorial(int n);
void main()
{
	int num,fact;
	printf("Enter a Number \n");
	scanf("%d",&num);
	fact=factorial(num);
	printf("Factorial is %d",fact);
}
int factorial(int n)
{
	if(n==1)
	return 1;
	else
	return n*factorial(n-1);
}
