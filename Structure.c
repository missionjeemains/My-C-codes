#include<stdio.h>
struct Book
{
	char author[20];
	float price;
	int pages;
};
void main()
{
	struct Book b;
	printf("Enter 1)Author Name\n2)Price of the book\n3)No.of Pages\n");
	scanf(" %[^\n]",b.author);
	scanf(" %f",&b.price);
	scanf(" %d",&b.pages);
	printf("The Details are \n");
	printf("1)%s\n",b.author);
	printf("2)%f\n",b.price);
	printf("3)%d\n",b.pages);
}
