#include<stdio.h>
void bsort(int [],int );
void main()
{
	int a[100],i,size;
	printf("Enter The Value You Want For An Array \n");
	scanf("%d",&size);
	printf("Enter The Numbers In Array \n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array before sorting \n");
	for(i=0;i<size;i++)
	{
		printf("%d \t",a[i]);
	}
	bsort(a,size);
	printf("\n Array After Sorting \n");
	for(i=0;i<size;i++)
	{
		printf("%d \t",a[i]);
	}
}
void bsort(int b[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(b[i]>b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
}
