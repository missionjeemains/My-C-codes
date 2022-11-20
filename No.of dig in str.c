#include<stdio.h>
void main()
{
	int i,j=0;
	char a[100];
	printf("Enter a string \n");
	scanf("%[^\n]",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>=48 && a[i]<=57)
		{
			j++;
		}
	}
	printf("The Number of digits is or are %d",j);
}
