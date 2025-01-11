//HOLLOW RHOMBUS STAR PATTERN
#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=n;j++)
		{
			if((i==1 or i==n) or (j==1 or j==n))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
