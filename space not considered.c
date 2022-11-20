#include<stdio.h>
void main()
{
	char a[100];
	int i,cnt=0;
	printf("Enter a string \n");
	scanf("%[^\n]",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!=32)
		{
		  cnt++;
		}
	}
	printf("No.of digits without spaces considered is %d",cnt);
}
