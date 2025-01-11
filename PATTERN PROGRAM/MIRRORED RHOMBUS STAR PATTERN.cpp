//MIRRORED RHOMBUS STAR PATTERN
#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=n;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
