#include<stdio.h>
#include<string.h>
void main()
{
	int i,k=0;
	char a[20];
	printf("Enter a string\n");
	scanf("%[^\n]",a);
	for(i=0;a[i]!='\0';i++)
	{
		k++;
	}
	printf("The length of the string is %d\n",k);
	printf("The length of the string is %zu",strlen(a));
}
