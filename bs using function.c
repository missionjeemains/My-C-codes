#include<stdio.h>
void bs(int [],int);
void main()
{
	int a[50],i,size;
	printf("Enter the value upto which you want for the array \n");
	scanf("%d",&size);
	printf("Enter The Numbers in array \n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	bs(a,size);
}
void bs(int b[50],int n)
{
	int j,low,mid,high,key,flag=0;
	printf("Enter The Number You Want to find \n");
	scanf("%d",&key);
	low=0;
	high=n-1;
	mid=(low+high)/2;
	while(low<high)
	{
		if(key==b[mid])
		{
		    flag=1;
		    break;
	    }
		else if(key>b[mid])
		{
			low=mid+1;
		}
		else if(key<b[mid])
		{
			high=mid-1;
		}
		mid=(low+high)/2;
	}
	if(flag==1)
	{
		printf("The Number %d is found at Index Number %d",key,mid+1);
	}
	else
	{
		printf("The Number %d is Not found",key);
	}
}
