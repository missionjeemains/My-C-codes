#include<stdio.h>
void main()
{
	int m;
	printf("Enter The Month according to numbers starting from 1,2,3....upto 12 \n");
	scanf("%d",&m);
	switch(m)
	{
		case 11:
		case 12:
		case 1:
		case 2:
		  printf("winter\n");
		  break;
		case 3:
		case 4:
		case 5:
		case 6:
		  printf("summer \n");
		  break;  
		case 9:
		case 10:
		case 7:
		case 8:
		  printf("Rainy or Monsoon \n");
		  break;
		default:
		  printf("Enter Numbers only from 1 to 12 to display a season ");  
	}
}
