#include<stdio.h>
void main()
{
	int flag=0,i,n,a[1000],low,high,mid,key;
	printf("Enter the number of terms you want for an array \n");
	scanf("%d",&n);
	printf("Enter The numbers in array in ascending order \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter The Number you want to find \n");
	scanf("%d",&key);
	low=0;
	high=n-1;
	mid=(low+high)/2;
	while(low<=high)
	{
		if(key==a[mid])
		{
			flag=1;
			break;
		}
		else if(key<a[mid])
		{
			high=mid-1;
		}
		else if(key>a[mid])
		{
			low=mid+1;
		}
			mid=(low+high)/2;
	}
		if(flag==1)
		  printf("found");
		else
		  printf("not found");
}
