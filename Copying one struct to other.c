#include<stdio.h>
#include<string.h>
struct Student
{
	char name[15];
	int age;
	float marks;
};
void main()
{
	struct Student s1,s2,s3;
	printf("Enter The Following Details\n1)Name\t2)Age\t3)Marks\n");
	scanf("%s%d%f",s1.name,&s1.age,&s1.marks);
//	printf("%s\t%d\t%f",s1.name,s1.age,s1.marks);
	strcpy(s2.name,s1.name);
	s2.age=s1.age;
	s2.marks=s1.marks;
	s3=s1;
	printf("%s\t%d\t%f",s1.name,s1.age,s1.marks);
	printf("\n%s\t%d\t%f",s2.name,s2.age,s2.marks);
	printf("\n%s\t%d\t%f",s3.name,s3.age,s3.marks);
}
