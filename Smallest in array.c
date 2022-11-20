#include<stdio.h>
void main()
{
	int i,j,n,a[15],min=a[0];
	printf("Enter the no.of elements you want for an array\n");
	scanf("%d",&n);
	printf("Enter the elements in the array\n");
	for(i=0;i<n;i++)
	{
		scanf(" %d",&a[i]);
    }
	for(i=0;i<n;i++)
	{
			if(a[i]<min)
			{
				min=a[i];
			}
	}
	printf("Smallest value in array is %d",min);
}
