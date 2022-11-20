#include<stdio.h>
void main()
{
	int i,j,r,c;
	int a[r][c],b[r][c],d[r][c];
	printf("Enter the number of rows and columns of matrix a and b\n");
	scanf("%d %d",&r,&c);
	printf("Enter the values in the 2D array\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the values in the 2D array\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			d[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("The resultant matrix is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",d[i][j]);
		}
		printf("\n");
	}
}
