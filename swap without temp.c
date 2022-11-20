#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter a and b \n");
	scanf("%d%d",&a,&b);
    printf("Before swapping a=%d and b=%d \ns",a,b);
	a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swapping a=%d and b=%d",a,b);
}
