/*C program to create, initialize and use pointers.8*/
#include<stdio.h>
int main()
{
	int *p,a=5;
	p=&a;
	printf("%u\n",p);
	printf("%d\n",*p);
	printf("%u\n",*p);
	printf("%d\n",&p);
}
