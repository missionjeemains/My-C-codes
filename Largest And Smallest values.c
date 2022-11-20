#include<stdio.h>
void main()
{
	int n,max,min,a[50],i;
	printf("Enter upto how many numbers to know the largest value \n");
	scanf("%d",&n);
	printf("Enter the numbers \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
		if(a[i]<min)
		min=a[i];
	}
	printf("The Largest value is %d \n",max);
	printf("The Smallest values is %d",min);
}
