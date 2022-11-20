#include<stdio.h>
void main()
{
	int i,l=0,j=0,k=0;
	char a[100];
	printf("Enter a String \n");
	scanf("%[^\n]",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>=65 && a[i]<=90 || a[i]>=97 && a[i]<=122)
		l++;
		else if(a[i]>=48 && a[i]<=57)
		j++;
		else
		k++;
	}
	printf("No. of Alphabets =%d\n",l);
	printf("No. of Digits =%d \n",j);
	printf("No. of Symbols =%d",k);
}
