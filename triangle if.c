#include<stdio.h>
void main()
{
	int anga,angb,angc;
	printf("Enter The Three Angles \n");
	scanf("%d%d%d",&anga,&angb,&angc);
	if(anga+angb+angc==180)
	{
		printf("\n This is a triangle");
	}
	else
	{
	    printf("\n This is not a triangle");
    }
}
