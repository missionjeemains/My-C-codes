#include<stdio.h>
void main()
{
	int a,b,hcf,i;
    printf("Enter the numbers \n");
	scanf("%d%d",&a,&b);
	for(i=1;i<=a && i<=b;i++)
    {
    	if(a%i==0 && b%i==0)
    	{
            hcf=i;
		}
	}
     i--;
	printf("HCF of entered Numbers is %d",i);
}
