#include<stdio.h>
void sod(int [50][50],int,int);
void main()
{
	int a[50][50],num,n,i,j;
	printf("Enter the number of rows you want for matrix \n");
	scanf("%d",&num);
    printf("Enter the number of columns you want for matrix \n");
    scanf("%d",&n);
    printf("Enter the numbers in Matrix \n");
    for(i=0;i<num;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		scanf("%d",&a[i][j]);
		}
	}
	sod(a,num,n);	
}
void sod(int b[50][50],int x,int y)
{
	int a,c,sum=0;
	for(a=0;a<x;a++)
	{
		for(c=0;c<y;c++)
		{
			if(a==c)
			{
				sum=sum+b[a][c];
			}
		}
	}
	printf("The trace of the matrix is %d",sum);
}

