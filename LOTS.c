#include<stdio.h>
void main()
{
	char a[20];
	int i=0;
	printf("Enter a Noun \n");
	scanf("%[^\n]",a);
	while(a[i]!='\0')
	{
		printf("%c",a);
		i++;
		printf("%d\n",i);
    }
	printf("The number of letters is or are %d",i);
}
