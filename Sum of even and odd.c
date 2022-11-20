#include<stdio.h>
void main()
{
	int num,sum=0,a[50],i,s;
	printf("Enter Upto how many Numbers to find the sum \n");
	scanf("%d",&num);
	printf("Enter The Numbers \n");
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<num;i++)
	{
		if(a[i]%2==0)
		{
			sum=sum+a[i];
		}
		else
		{
			s=s+a[i];
		}
	}
	printf("The sum of even numbers is %d \n",sum);
	printf("The sum of odd numbers is %d",s);
}
