#include<stdio.h>
int sum();
int main() 
{
	int res;
	res=sum();
	printf("The sum of digits is %d",res);
    return 0;
}
int sum()
{
	int x,y,z; 
	printf("Enter The number \n");
	scanf("%d",&x);
    while(x!=0)
	{
		y=x%10;
	    z=z+y;
	    x=x/10;
	}
	return z;
}
