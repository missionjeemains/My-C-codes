#include<stdio.h>
void main()
{
	int l,r,n;
	char a[20],chk='t';
	printf("Enter a string \n");
	scanf("%[^\n]",a);
	n=strlen(a);
	l=0;
	r=n-1;
	while(l<r && chk=='t')
	{
		if(a[l]==a[r])
		;
		else
		chk='f';
		l++;
		r--;
	}
	if(chk=='t')
	{
		printf("The Word Entered is palindrome \n");
	}
	else
	{
		printf("The Word Entered is not a palindrome \n");
	}
}
