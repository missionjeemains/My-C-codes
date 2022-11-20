#include<stdio.h>
void main()
{
	char *ptr,a[10];
	printf("Enter a word \n");
	scanf("%[^\n]",a);
    for(ptr=a;*ptr!='\0';ptr++)
    {
    	printf("%c",*ptr);
	}
}
