/*C program to copy one array to another using pointers.*/
#include<stdio.h>
int main()
{
	int arr[100];
	int arr1[100];
	int i,n;
	int *ptr;
	int *copy;
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
	for(i=0;i<n;i++)
	{
		arr1[i]=arr[i];
	}
	copy=&arr1[0];
	printf("print the array element another array element...\n");
	for(i=0;i<n;i++)
	{
		printf("%d: %d\n",i,*copy);
		copy++;
	}
}
