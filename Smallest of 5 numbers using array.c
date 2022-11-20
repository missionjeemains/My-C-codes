#include<stdio.h>
void main()
{
	int i,arr[5];
	printf("Enter 5 numbers to know the largest of all \n");
	for(i=0;i<5;i++)
	{
	scanf("%d",&arr[i]);
    }
    if(arr[0]<arr[1]&&arr[0]<arr[3]&&arr[0]<arr[4]&&arr[0]<arr[2])
    {
    	printf("The smallest Value is %d",arr[0]);
	}
	else if(arr[1]<arr[0]&&arr[1]<arr[3]&&arr[1]<arr[4]&&arr[1]<arr[2])
	{
		printf("The smallest Value is %d",arr[1]);
	}
	else if(arr[2]<arr[1]&&arr[2]<arr[3]&&arr[2]<arr[4]&&arr[2]<arr[0])
	{
		printf("The smallest Value is %d",arr[2]);
	}
    else if(arr[3]<arr[1]&&arr[3]<arr[2]&&arr[3]<arr[4]&&arr[3]<arr[0])
	{
		printf("The smallest Value is %d",arr[3]);
	}
	else if(arr[4]<arr[1]&&arr[4]<arr[2]&&arr[4]<arr[0]&&arr[4]<arr[3])
	{
		printf("The smallest Value is %d",arr[4]);
	}
}
    
