#include<stdio.h>
void main()
{
	char a[10],b[10];
	int i=0,j;
	printf("Enter a string \n");
	scanf("%[^\n]",a);
	while(a[i]!='\0')
	i++;
	printf("%d \n",i);
	i=i-1;
	printf("After Reversing \n");
	for(j=0;i>=0;j++,i--)
	{
		b[j]=a[i];
	}
	b[j]='\0';
	printf("%s",b);
}
