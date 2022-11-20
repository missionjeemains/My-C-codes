#include<stdio.h>
void main()
{
	int temp,rem,num,res=0,res1=0;
	printf("Enter any number to find if it is an armstrong numbers \n");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
	    rem=num%10;
	    res=rem*rem*rem;
	    res1=res1+res;
	    num=num/10;
    }
	    if(res1==temp)
        {
        	printf("Armstrong \n");
		}
		else
		{
			printf("Not Armstrong \n");
		}
}


