#include<stdio.h>
void main()
{
	int a[3]={10,20,30};
	int *ptr,*ptr1;
	ptr=a;
	ptr1=&a[2];
	printf("Size of 1 array is %u bytes\n",ptr1-ptr);
	printf("Difference of elements of array is %d",*ptr1-*ptr);
}
