#include<stdio.h>
struct Employee
{
	char name[20];
	int age;
	float salary;
};
void main()
{
	struct Employee e;
	printf("Enter The following data of the Employee\n1)Name\t2)Age\t3)Salary\n");
	scanf("%s",e.name);
	scanf("%d",&e.age);
	scanf("%f",&e.salary);
	printf("The details of the employee are\n");
	printf("1)%s\t",e.name);
	printf("2)%d\t",e.age);
	printf("3)%f",e.salary);
}
