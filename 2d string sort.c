#include<stdio.h>
#include<string.h>
//#define c 20
//#define r 5
void main()
{
	int i=0,j=0;
	char a[5][20];
	char d[20];
	printf("Enter any 5 Nouns \n");
	while(i<5)
	{
	    scanf(" %[^\n]",a[i++]);
    }
    /*for(i=0;i<5;i++)
	{
		printf(" %s\n",a[i]);
	}*/
    for(i=1;i<5;i++)
    {
    	for(j=1;j<=5-i;j++)
		{	
    
    		if(strcmp(a[j-1],a[j])>0)
    		{
   				strcpy(d,a[j-1]);
 				strcpy(a[j-1],a[j]);
   				strcpy(a[j],d);
			}
		}
	}
	printf("Alphabetical order is \n");
	for(i=0;i<5;i++)
	{
		printf("%s \n",a[i]);
	}
}
