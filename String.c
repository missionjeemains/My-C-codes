#include<stdio.h>
void main()
{
	char a[20];
	int i;
	printf("Enter The Name \n");
	scanf("%[^\n]",a);
	for(i=0;i<8;i++)
	{
		printf("%c\n",a[i]);
	}
	printf("%s",a);
}
