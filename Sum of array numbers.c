#include<stdio.h>
void soa(int [],int);
void main()
{
	int arr[5],i;
	printf("Enter the numbers to perform sum of array numbers \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	soa(arr,5);
}
void soa(int arr1[],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+arr1[i];
	}
	printf("The sum is %d",sum);
}
