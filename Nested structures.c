#include<stdio.h>
struct Details 
	{
		char address[20];
		long long int phone;
	};

struct Employee
{
	char name[25];
	int age;
	struct Details d;
};
void main()
{
	struct Employee e;
	printf("Enter\n1)Name\t2)Age\t3)Address\t4)Phone Number\n");
	scanf(" %[^\n]%d %[^\n]%lld",e.name,&e.age,e.d.address,&e.d.phone);
	printf("Entered details are\nName=%s\tAge=%d\tAddress=%s\tPhone Number=%lld",e.name,e.age,e.d.address,e.d.phone);
}
