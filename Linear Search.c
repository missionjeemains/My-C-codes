#include<stdio.h>
void main()
{
	int a[20],i,n,key,flag=0;
	printf("Enter The number of values you want for an array \n");
	scanf("%d",&n);
	printf("Enter the numbers in array \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number you want to find \n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
	{
		printf("The number %d is found in the Index Number=%d",key,i+1);
	}
	else
	{
		printf("The number %d is not found in the list",key);
	}
}
