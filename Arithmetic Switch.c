#include<stdio.h>
void main()
{   int a,b,c,d,e,f;
    char n;
	printf("Enter Two Numbers to perform an action \n");
	scanf("%d%d",&a,&b);	
	printf("Enter The symbol to perform an action \n");
	scanf(" %c",&n);
	switch(n)
	{
	case '+':
		c=a+b;
		printf("Result=%d",c);
		break;
	case '-':
		d=a-b;
		printf("Result=%d",d);
		break;
	case '*':
		e=a*b;
		printf("Result=%d",e);
		break;
	case '/':
		f=a/b;
		printf("Result=%d",f);
		break;
	default:
		printf("Enter Valid symbols to perform Action \n");
    }
}
