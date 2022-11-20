#include<stdio.h>
void main()
{
	int i,j,r,c;
	int a[10][10],b[10][10],d[10][10];
	printf("Enter the number of rows and columns for matrix\n");
	scanf("%d%d",&r,&c);
	printf("Enter the values in the matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the values in the matrix\n");
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
}
