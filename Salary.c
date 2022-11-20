#include<stdio.h>
void main()
{
	int sal,yos,qual;
	char gen;
	printf("Enter \n gen \n year of service \n qualification(Post-Graduate=0 & Graduate=1) \n");
	scanf("%c%d%d",&gen,&yos,&qual);
	if(gen=='m'&&yos>=10&&qual==0)
	sal=15000;
	else if(gen=='m'&&yos>=10&&qual==1)
	sal=10000;
	else if(gen=='m'&&yos<10&&qual==0)
	sal=10000;
	else if(gen=='m'&&yos<10&&qual==1)
	sal=7000;
	else if(gen=='f'&&yos>=10&&qual==0)
    sal=12000;
	else if(gen=='f'&&yos>=10&&qual==1) 
	sal=9000;
	else if(gen=='f'&&yos<10&&qual==0)
	sal=10000;
	else if(gen=='f'&&yos<10&&qual==1)
	sal=6000;
	printf("The salary is =%d",sal);
}
