#include<stdio.h>
void main()
{
	int amt,noh,nof,note,nofi;
	printf("Enter any number \n");
	scanf("%d",&amt);
	noh=amt/100;
	amt=amt%100;
	nof=amt/50;
	amt=amt%50;
	note=amt/10;
	amt=amt%10;
	nofi=amt/5;
    printf("no of hun =%d\n no of fifties=%d\t no of tens=%d\n no of fives=%d",noh,nof,note,nofi);
	}
