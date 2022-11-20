#include<stdio.h>
void sea(int [],int);
void main()
{
	int i,a[50],num;
	printf("Enter how many numbers for array \n");
	scanf("%d",&num);
	printf("Enter the numbers \n");
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	sea(a,num);
}
void sea(int b[50],int n)
{
	int flag=0,key,j;
	printf("Enter The Number you want to search \n");
	scanf("%d",&key);
	for(j=0;j<n;j++);
	{
		if(b[j]==key)
		{
			flag=0;
		}
	}
	if(flag==0)
	{
		printf("The Number %d is found in the index %d",key,j);
	}
	else
	{
		printf("Number=%d is not found",key);
	}
}
