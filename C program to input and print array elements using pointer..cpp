/*C program to input and print array elements using pointer.*/
#include<stdio.h>
int main()
{
	int arr[100];
	int i,n;
	int *ptr;
	printf("enter the range value of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the array value %d:",i);
		scanf("%d",&arr[i]);
	}
	ptr=&arr[0];
	printf("print the array element...\n");
	for(i=0;i<n;i++)
	{
		printf("%d: %d\n",i,*ptr);
		ptr++;
	}
}
