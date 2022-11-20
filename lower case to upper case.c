#include<stdio.h>
void main()
{
	char a[100];
	int i=0;
	printf("Enter any noun \n");
	scanf("%[^\n]",a);
	while(a[i]!='\0')
	{
		a[i]=a[i]-32;
		printf("%c",a[i]);
		i++;
	}
}
