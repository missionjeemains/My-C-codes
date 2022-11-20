#include<stdio.h>
void inc(int [],int);
void main()
{
	int i,a[50],n;
	printf("Enter the number of values for array \n");
	scanf("%d",&n);
	printf("Enter the numbers in array \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Before adding 2 \n");
	for(i=0;i<n;i++)
	{
		printf("%d \n",a[i]);
	}
	inc(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d \n",a[i]);
	}
}
void inc(int b[],int y)
{
	int j,sum=0;
	printf("after adding 2 \n");
	for(j=0;j<y;j++)
	{
		b[j]=b[j]+2;
	}
    
}
