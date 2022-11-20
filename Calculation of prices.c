#include<stdio.h>
void main()
{
	int amt,dis,qua,pri;
	printf("Enter The quantity(KG) and Price to get the Final Bill \n");
	scanf("%d%d",&qua,&pri);
	dis=pri/10;
	amt=pri-dis;
	if(pri>1000)
	{
		printf("The amount is %d",amt);
	}
	else
	{
		printf("The amount is %d",pri);
	}
}
