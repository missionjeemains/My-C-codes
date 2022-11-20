#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter three values \n");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		if(a<c)
		{
			printf("The least value is %d \n",a);
		}
		else
		{
			printf("The least value is %d \n",c);
		}
    }
	else
	{
		if(b<c)
		{
			printf("The least value is %d \n",b);
		}
		else
		{
			printf("The least value is %d \n",c);
	    }	
	}
}
