/*C program to reverse an array using pointers.*/
#include<stdio.h>
int main()
{
	int arr[100];
	int i,n,swap;
	int *ptr1,*ptr2;
	printf("enter the range value:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the array element %d:",i);
		scanf("%d",&arr[i]);
	}
	ptr1=arr;
	ptr2=arr+n-1;
	while(ptr1<ptr2)
	{
		swap=*ptr1;
		*ptr1=*ptr2;
		*ptr2=swap;
		ptr1++;
		ptr2--;
	}
	printf("Reversed Array:");
    for(i=0;i<n;i++) 
	{
        printf("%d",arr[i]);
    }
}
