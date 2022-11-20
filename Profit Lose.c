#include<stdio.h>
void main()
{
	int cp=0,sp=0,x,y;
	printf("Enter The Cost Price and Selling Price \n");
	scanf("%d%d",&cp,&sp);
	x=cp-sp;
	y=sp-cp;
	if(cp>sp)	
	{
		printf("You have made a profit of %d rupees",x);	
	}
	else
	{
		printf("\n You are under loss of %d ruppes",y);
	}
}
