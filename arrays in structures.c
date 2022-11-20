#include<stdio.h>
struct Book
{
	char author[15];
	int pages;
	float price;
};
void main()
{
	struct Book b[3];
	int i;
	printf("Enter 1)Author\t2)Pages\t3)Price\n");
	for(i=0;i<3;i++)
	{
		printf("Enter %d book details\n",i+1);
		scanf(" %[^\n]%d%f",b[i].author,&b[i].pages,&b[i].price);
	}
	for(i=0;i<3;i++)
	{
		printf("%d book detais are\n",i+1);
		printf("Author=%s\tPages=%d\tPrice=%f\n",b[i].author,b[i].pages,b[i].price);
	}
}
