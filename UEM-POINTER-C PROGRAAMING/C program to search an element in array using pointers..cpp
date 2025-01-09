/*C program to search an element in array using pointers.*/
#include<stdio.h>
int main()
{
	int arr[100];
	int i,n,search,flag=1;
	int *ptr;
	printf("enter the range value:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the value of array element %d:",i);
		scanf("%d",&arr[i]);
	}
	printf("enter the searching value:");
	scanf("%d",&search);
	ptr=arr;
	for(i=0;i<n;i++)
	{
		if(search==*ptr)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("search an element is present in array:%d",search);
	}
	else
	{
		printf("search an element is not present in array:%d",search);
	}
}
