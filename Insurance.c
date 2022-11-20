#include<stdio.h>
#include<stdlib.h>
void main()
{
	int age;
	char gen,ms;
	printf("Enter the age Marital Status(Enter Only m/n) and gender(Enter Only m/f)  to know if you are insured \n");
	scanf("%d",&age);
	//fflush(stdin);
	scanf(" %c",&ms);
	scanf(" %c",&gen);
	if(ms=='m')
	printf("You Have Insured \n");
	else if(ms=='n'&&gen=='m'&&age>30)
	printf("You Have Insured \n");
	else if(ms=='n'&&gen=='f'&&age>25)
	printf("You Have Insured \n");
	else
	printf("You Have Not Insured \n");
}

