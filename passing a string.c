#include<stdio.h>
void main()
{
	char a[20],b[20];
	int i;
	printf("Enter a Noun \n");
	scanf("%[^\n]",a);
	printf("%s \n",a);
	printf("---x--- \n");
	while(a[i]!='\0')
	{
		b[i]=a[i];
		//printf(" %c\n",b[i]);
		i++;
    }
    b[i]='\0';
    printf("%s",b);
}
