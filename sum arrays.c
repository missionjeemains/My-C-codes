#include<stdio.h>
void main()
{
	int i,n,sum=0;
	int a[10];
	printf("Enter size of array\n");
	scanf("%d",&n);
	printf("Enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
		printf("The sum is %d",sum);
}

