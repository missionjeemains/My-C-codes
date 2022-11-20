#include<stdio.h>
void main()
{
	int py,jy,yw;
	printf("Enter the year of joining and present year to get bonus \n");
	scanf("%d%d",&jy,&py);
	yw=py-jy;
	if(yw>3)
	{
		printf("You have availed a bonus of 2500/- \n");
	}
	printf("-Regards-");
}
