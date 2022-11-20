#include<stdio.h>
void main()
{
	int i;
	char choice;
	do
	{
		printf("Enter the numbers to get the result \n");
	    scanf("%d",&i);
	    if(i>0)
	    {
	    	printf("This Number is Positive \n");
		}
		else if(i<0)
		{
			printf("This Number is Negative \n");
		}
		else
		{
			printf("This is Zero \n");
		}
		printf("Do You Want To Enter More? (Y/N)");
		scanf("%c",&choice);
	}while(choice=='Y'||choice=='y');
} 
