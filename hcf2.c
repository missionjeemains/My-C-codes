#include <stdio.h>
void main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    printf("HCF=%d",a);
}
