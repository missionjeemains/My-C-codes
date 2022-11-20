#include<stdio.h>
void main()
{
	int sum=0,num,arr[50],i;
	printf("Enter for how many numbers to find the sum \n");
	scanf("%d",&num);
	printf("Enter The Numbers \n");
	i=0;
	while(i<num)
	{
		scanf("%d",&arr[i]);
		i++;
	}
	for(i=0;i<num;i++)
	{
		if(arr[i]%2==0)
		{
			sum=sum+arr[i];
		}
	}
	printf("sum of even elements %d",sum);
}
