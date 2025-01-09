/*C program to add two numbers using pointers.*/
#include<stdio.h>
int main()
{
	int a,b,sum=0;
	int *p,*q;
	printf("enter the first number:");
	scanf("%d",&a);
	printf("enter the second number:");
	scanf("%d",&b);
	p=&a;
	q=&b;
	sum=*p+*q;
	printf("sum of the two number:%d",sum);
}
