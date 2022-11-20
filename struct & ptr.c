#include<stdio.h>
struct Employee
{
	char name[25];
	int age;
	float salary;
};
void main()
{
	struct Employee e[3],*eptr[3];
	int i;
	printf("Enter 1)Name\t2)Age\t3)Salary\n");
	for(i=0;i<3;i++)
	{
		scanf(" %[^\n]%d%f",e[i].name,&e[i].age,&e[i].salary);
	}	
	eptr=&e[0];
	for(i=0;i<3;i++)
	{
		printf("Name=%s\tAge=%d\tSalary=%f",eptr[i]->name,eptr[i]->age,eptr[i]->salary);
	}
}
