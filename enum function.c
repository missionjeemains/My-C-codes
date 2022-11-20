#include<stdio.h>
enum week 
{Monday,Wednesday,Friday};
void main()
{
	int i;
	enum week w;
	for(i=Monday;i<=Friday;i++)
	    printf("%d",w);
}

