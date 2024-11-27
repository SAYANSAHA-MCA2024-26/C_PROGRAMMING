/*Write a C program to find the sum and average of three numbers.*/
#include<stdio.h>
int main()
{
	int a,b,c,sum=0;
	float avg=0.0;
	printf("enter the first number:");
	scanf("%d",&a);
	printf("enter the second number:");
	scanf("%d",&b);
	printf("enter the third number:");
	scanf("%d",&c);
	sum=a+b+c;
	avg=sum/3;
	printf("the sum of the three number:%d\n",sum);
	printf("the average of the three number:%.2f",avg);
}
