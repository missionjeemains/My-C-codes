#include<stdio.h>
void main()
{
	int i,n,k=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		k++;
	}
	printf("%d",k);
}
