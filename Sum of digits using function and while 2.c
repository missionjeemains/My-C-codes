#include<stdio.h>
int main() 
{
	int num,y,z;
	printf("Enter The number \n");
	scanf("%d",&num); 
    while(num!=0)
	{
		y=num%10;
	    z=z+y;
	    num=num/10;
	} 
	printf("The sum of digits is %d",z);
}
