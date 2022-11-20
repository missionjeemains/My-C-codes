#include<stdio.h>
void main()
{
	int i,num,flag=0;
	printf("Enter Any Number \n");
	scanf("%d",&num);
	if(num==1)
	{
		printf("This is not a prime nor a composite \n");
    }
    else if(num==0)
	{
		printf("This is not a prime number \n");
	}
	else
	{
		for(i=2;i<num;i++)
		{
			if(num%i==0)
			{
				flag=1;
				printf("This is not a Prime number \n");
				break;
			}
		}
        if(flag==0)
		printf("Prime Number \n");
		else
		printf("This is not a Prime Number\n");   
    }   
}
