#include<stdio.h>
void avg(int,int,int);
void main()
{
	int a,b,c;	
	printf("Enter the three numbers to find the average \n");
	scanf("%d%d%d",&a,&b,&c);
    avg(a,b,c);
}
void avg(int x,int y,int z)
{
	int av=0;
	av=(x+y+z)/3;
	
	printf("The Average is %d",av);
}
