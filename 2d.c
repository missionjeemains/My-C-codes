#include<stdio.h>
void main()
{
	int i,j,r,c;
	int a[10][10];
	printf("Enter the number of rows\n");
	scanf("%d",&r);
	printf("Enter the number of columns\n");
	scanf("%d",&c);
	printf("Enter the values in the 2D array\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The 2D array is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
