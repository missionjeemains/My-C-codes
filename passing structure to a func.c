#include<stdio.h>
struct Book
{
	char author[10];
	int pages;
	float price;
};
void display(struct Book b3);
void display1(char *,int,float);
void main()
{
	struct Book b1={"yashwanth",350,625.45};
	struct Book b2;
	b2=b1;
	//printf("%s\t%d\t%f\n",b1.author,b1.pages,b1.price);
    display1(b1.author,b1.pages,b1.price);
	display(b1);
}
void display(struct Book b3)
{
	printf("\nName=%s\tPages=%d\tPrice=%f\n",b3.author,b3.pages,b3.price);
}
void display1(char *n,int a,float b)
{
	printf("\nName=%s\tPages=%d\tPrice=%f",n,a,b);
}
