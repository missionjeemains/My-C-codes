#include<stdio.h>
void main()
{
	int i,j,num,flag=0;
	printf("Enter Any number to find the prime number upto that number\n");
	scanf("%d",&num);
	if(num==0)
	{
		printf("Enter a Valid Number \n");
	}
	else if(num==1)
	{
		printf("This is not a prime nor a composite \n");
	}
	else
	{		
	for(j=2;j<=num;j++)
	    { 
			flag=0;
		    for(i=2;i<j;i++)
		    {   
				if(j%i==0)
				{
			    	flag=1;
			        break;
			    }
			}
		    if(flag==0)
			printf(" %d",j);
		}
	}
}
	
