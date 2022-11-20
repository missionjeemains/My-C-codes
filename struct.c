#include<stdio.h>
struct Student
{
	char name[20];
	int roll_no;
	float marks;
};
void main()
{
	struct Student s[5];
	int i;
	printf("Enter the details\n1)Name\n2)Roll Number\n3)Marks\n\n");
	for(i=0;i<5;i++)
	{
		scanf(" %[^\n]%d%f",s[i].name,&s[i].roll_no,&s[i].marks);
	}
	printf("\nThe Details are\n");
	for(i=0;i<5;i++)
	{
		printf("\n1)Name=%s\n2)Roll Number=%d\n3)Marks=%f\n",s[i].name,s[i].roll_no,s[i].marks);
	}
	
}
