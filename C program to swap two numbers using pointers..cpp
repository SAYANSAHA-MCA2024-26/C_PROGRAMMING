/*C program to swap two numbers using pointers.*/
#include<stdio.h>
int main()
{
	int a,b,swap;
	int *p,*q;
	printf("enter the first number:");
	scanf("%d",&a);
	printf("enter the second number:");
	scanf("%d",&b);
	printf("before swapping value is a:%d b:%d",a,b);
	p=&a;
	q=&b;
	swap=*p;
	*p=*q;
	*q=swap;
	printf("\nafter swapping value is a:%d b:%d",*p,*q);
}
