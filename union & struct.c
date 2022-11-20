#include<stdio.h>
struct Book
{
	int pages;
	float price;
	char name[10];
};
union a
{
	int integer;
	float decimal;
	char ch[10];
};
void main()
{
	struct Book b1,b2;
	union a key;
	int i;
	printf("Enter\n1)Pages\n2)Price\n3)Name\n");
	scanf("%d%f%s",&b1.pages,&b1.price,b1.name);
	printf("Pages=%d\nPrice=%f\nName=%s\n",&b1.pages,&b1.price,b1.name);
	key.integer=20;																																									")
	for(i=0;i<10;i++)
	{
		printf("%d\n",key.ch[i]);
	}
}
