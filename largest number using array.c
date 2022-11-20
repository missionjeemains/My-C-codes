#include<stdio.h>
void main()
{
	int max=0,i,arr[50],num;
	printf("Enter upto how many numbers to know the largest of all \n");
	scanf("%d",&num);
	printf("Enter The Numbers \n");
	for(i=0;i<num;i++)
	{
	scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
    	if(arr[i]>max)
		   max=arr[i]; 	
	}
	printf("The Largest number is %d",max);
}
    
