#include<stdio.h>
int main()
{
	int i,x,j;
	printf("enter number of rows=");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		for(j=1;j<=x;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}
