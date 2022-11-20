#include<stdio.h>
void main()
{
	int a,b,res,n;
	printf("Enter The Number For Which You Want to print a table \n");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
    	for(b=0;b<=10;b++)
		{
			res=a*b;
			if(b==2)
			continue;
			printf(" %d*%d=%d \n",a,b,res);
		} 
		printf("\n");
	}
}
