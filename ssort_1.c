#include<stdio.h>
void main()
{
	int i,j,n,min,a[50],temp;
	printf("Enter the no.of elements you want for an array\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
			
		}
	    temp=a[i];
		a[i]=min;
		min=temp;	
	}
	printf("Array after sorting is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
