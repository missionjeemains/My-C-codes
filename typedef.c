#include<stdio.h>
typedef struct Book
{
	char name[15];
	int pages;
	float price;
}Book;
void main()
{
	Book b;
	printf("Enter\n1)Name\t2)Pages\t3)Price\n");
	scanf("%[^\n]%d%f",b.name,&b.pages,&b.price);
	printf("The details entered are\n1)Name=%s\t2)Pages=%d\t3)Price=%f",b.name,b.pages,b.price);
}
