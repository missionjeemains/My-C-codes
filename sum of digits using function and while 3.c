#include<stdio.h>
void sum();
int main() 
{
	
	sum();
	return 0;
}
void sum()
{
	int num,rem,res=0; 
	printf("Enter The number \n");
	scanf("%d",&num);
    while(num!=0)
	{
		rem=num%10;
	    res=res+rem;
	    num=num/10;
	} 
	printf("The sum of digits is %d",res);
}
