#include<stdio.h>
void main()
{
	int n,temp,rem,num,res=0,res1=0;
	printf("Enter any number to find if it is an armstrong numbers \n");
	scanf("%d",&num);
	for(n=1;n<=num;n++)
	{
	temp=n;
	res1=0;
	while(n>0)
	{
	    rem=n%10;
	    res=rem*rem*rem;
	    res1=res1+res;
	    n=n/10;
    }
	    if(res1==temp)
        {
        	printf(" %d",n);
		}
    }
}


