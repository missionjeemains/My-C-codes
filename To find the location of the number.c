#include<stdio.h>
void main()
{
	int n,i,a[20],se,flag=0;
	printf("Enter the number of values you want for an array \n");
	scanf("%d",&n);
	printf("Enter the numbers of array \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number you want to search in the array and get its position \n");
	scanf("%d",&se);
	for(i=0;i<n;i++)
	{
		if(se==a[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("The number %d is found at the %d th element location",se,i+1);
	}
}
