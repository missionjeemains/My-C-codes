//Multiplication Of Matrix
#include<stdio.h>
void main()
{
	int a[2][2],b[2][2],c[2][2],i,j;
	printf("Enter The First Matrix Numbers \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
    }
    printf("Enter The Second Matrix Numbers \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
    }
	c[0][0]=a[0][0]*b[0][0]+a[0][1]*b[1][0];
	c[0][1]=a[0][0]*b[0][1]+a[0][1]*b[1][1];
	c[1][0]=a[1][0]*b[0][0]+a[1][1]*b[1][0];
	c[1][1]=a[1][0]*b[0][1]+a[1][1]*b[1][1];
	printf("The Result Of The Matrix is \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d \t",c[i][j]);
		}
	printf("\n");	
	}
}
