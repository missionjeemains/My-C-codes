#include<stdio.h>
void ssort(int [],int);
void main()
{
	int a[100],size,i;
	printf("Enter Value Upto which you want for an array \n");
	scanf("%d",&size);
	printf("Enter Values in array \n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Before Swapping \n");
	for(i=0;i<size;i++)
	{
		printf("%d \t",a[i]);
	}
	ssort(a,size);
	printf("\n After Sorting \n");
	for(i=0;i<size;i++)
	{
		printf("%d \t",a[i]);
	}
}
void ssort(int b[],int n)
{
	int i,j,min,temp;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(b[j]<b[min])
			{
				min=j;
			}
		}
		temp=b[min];
		b[min]=b[i];
		b[i]=temp;
	}
}
