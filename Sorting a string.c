#include<stdio.h>
void main()
{
	int len=0,i,j,k=0;
	char temp,a[200];
	printf("Enter a name \n");
	scanf("%[^\n]",a);
	printf("%s",a);
	while(a[k]!='\0')
	{
		len++;
	}
	len=len-1;
	for(i=0;i<len-1;i++)
	{
		for(j=i;j<len;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;	
			}
		}
	}
	printf("%s",a);
}
