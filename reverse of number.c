#include<stdio.h>
void main()
{
	int i,n,rem,rev=0;
	printf("Enter any number to get its reverse\n");
	scanf("%d",&n);
	printf("Reverse of the number is\n");
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("%d",rev);
}
