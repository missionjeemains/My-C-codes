#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter three numbers to get the least number among them \n");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b&&a<c)
	{
		printf("The least value among them is %d",a);
	}
	if(b<c&&b<a)
	{
		printf("The least value among them is %d",b);
	}
	//if(c<a&&c<b)
	else
	{
		printf("The least value among them is %d",c);
	}
}
