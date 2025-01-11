//HOLLOW MIRRORED RHOMBUS STAR PATTERN
#include<stdio.h>
int main()
{
	int i,j,n,k;
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
			if(i==1 or i==n or j==1 or j==n)
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
