#include<stdio.h>
int sum(int);
void main() 
{
	int num,res;
	printf("Enter The number \n");
	scanf("%d",&num);
	res=sum(num);
	printf("The sum of digits is %d",res);
}
int sum(int y)
{
	int x,z=0; 
    while(y!=0)
	{
		x=y%10;
	    z=z+x;
	    y=y/10;
	} 
	return z;
}
