#include<stdio.h>
void fab(int);
void main()
{
	int n;
	printf("Enter the digit upto which you want to find fabonacci series \n");
	scanf("%d",&n);
    fab(n);	
}
void fab(int x)
{
	int n1=0,n2=1;
	int z,j;
	printf("%d %d",n1,n2);
	for(j=1;j<=x-2;j++)
	{
		z=n1+n2;
		printf(" %d",z);
		n2=z;
		n1=n2;	
    }
}
