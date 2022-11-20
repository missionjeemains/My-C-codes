#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n,i=0;
    char ch,a[50],b[50];
    
	
	scanf("%c",&ch);
	
	
	scanf("%s",a);
    
    scanf("\n");
	scanf("%[^\n]%*c",b);
    
    
	n=strlen(b);
    
	
	printf("%c\n",ch);
    
	
	printf("%s\n",a);
    
	
	printf("%s",b);
    
	
	for(i=0;i<n;i++)
    {
        printf("%c",b);
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
