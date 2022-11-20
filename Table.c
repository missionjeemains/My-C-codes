#include <stdio.h>
void main()
 {
 	int a,i,res;
    printf("Enter any number to print the table \n"); 
    scanf("%d",&a);
    for(i=0;i<=10;i=i+1)
    {
    	res=a*i;
    	printf("%d*%d= %d\n",a,i,res);
    	printf("%d",res);
	}
 }
