#include<stdio.h>
void main()
{
	int a,*ptr;
	printf("Enter The Value of the variable \n");
	scanf("%d",&a);
	ptr=&a;
	printf("Before adding '1' to the pointer a=%d \n",*ptr);
	printf("Location of variable 'a' is %u \n",ptr);
	ptr=ptr+1;
	*ptr=*ptr+1;
	printf("After adding '1' a=%d \n",*ptr);
	printf("Location now =%u \n",ptr);
}
