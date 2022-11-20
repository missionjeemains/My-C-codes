#include<stdio.h>
void main()
{
	int amt,noh,nof,note,nofi,notw,noon;
	printf("Enter an amount! \n");
	scanf("%d",&amt);
	noh=amt/100;
	amt=amt%100;
	nof=amt/50;
	amt=amt%50;
	note=amt/10;
	amt=amt%10;
	nofi=amt/5;
	amt=amt%5;
	notw=amt/2;
	amt=amt%2;
	noon=amt/1;
	printf("No.of Hundred notes=%d \n No.of Fifty notes=%d \n No.of Ten notes=%d \n No.of Five notes=%d \n No.of Two notes=%d \n No.of One notes=%d \n",noh,nof,note,nofi,notw,noon);
}
