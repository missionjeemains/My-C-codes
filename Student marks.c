#include<stdio.h>
void main()
{
	int s1,s2,s3,s4,s5,per;
	printf("Enter the five subject marks \n");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	per=(s1+s2+s3+s4+s5)*100/500;
	if(per>=60)
	printf("First Division \n");
	else
	{
		if(per>=50&&per<59)
	    printf("Second Division \n");
		else
		      {
		      	if(per>=40&&per<49)
		      	printf("Third Division \n");
		      	else 
			    printf("Fail \n");
			  }	
	}
}
