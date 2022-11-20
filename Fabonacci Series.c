#include<stdio.h>
void main()
{
	long long int n1=0,n2=1,n3,n,i;           	
	printf("Enter The No.of Terms You want for fibonacci series \n");
	scanf("%lld",&n);
	printf("%d %d",n1,n2);
  	for(i=1;i<=n-2;i++)
	{
		n3=n1+n2;
		printf(" %lld",n3);
		n1=n2;
		n2=n3;
	}
}
