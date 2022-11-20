#include<stdio.h>
void main()
{
	int i,n,j,k=0;
	printf("Enter how many odd numbers you want\n");
	scanf("%d",&n);
	printf("Odd Numbers are\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<=n;j++)
		{
			k++;
			if(k%2==0)
		    {
			    ;
		    }
		    else
		    {
			    printf("%d\n",k);
			    break;
		    }
		}
	}
}
