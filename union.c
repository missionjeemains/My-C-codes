#include<stdio.h>
union a
{
	int i;
	char ch[2];
};
void main()
{
	union a key;
	key.i=512;
	printf("key.i=%d\n",key.i);
	printf("char[0]=%d\n",key.ch[0]);
	printf("char[1]=%d\n",key.ch[1]);
	printf("char[2]=%d",key.ch[2]);
}
