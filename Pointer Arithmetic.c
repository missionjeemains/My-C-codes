#include<stdio.h>
void sub(int);
void main()
{
	int a,*ptr;
	printf("Enter The Value of the variable \n");
	scanf("%d",&a);
	ptr=&a;
	printf("Location of variable 'a' is %u \n",ptr);
	ptr=ptr+1;
	printf("Location After Adding '1'is %u \n",ptr);
	sub(a);
}
void sub(int b)
{
	int *ptr1;
	printf("Enter The value of the variable \n");
	scanf("%d",&b);
	ptr1=&b;
	printf("Location Now is %u \n",ptr1);
	ptr1=ptr1-2;
	printf("Location after subtracting '2' is %u",ptr1);
}
