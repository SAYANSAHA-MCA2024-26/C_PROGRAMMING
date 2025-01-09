/*C program to swap two arrays using pointers.*/
#include<stdio.h>
int main()
{
	int arr[100];
	int arr1[100];
	int i,n,m,swap;
	int *ptr1,*ptr2;
	printf("enter the range value:");
	scanf("%d",&n);
	printf("enter the first value:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the second value:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<n;i++)
	{
		ptr1=arr;
		ptr2=arr1;
		swap=*(ptr1+i);
		*(ptr1+i)=*(ptr2+i);
		*(ptr2+i)=swap;
	}
	printf("after the swapping first array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("after the swapping seond array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr1[i]);
	}
}
