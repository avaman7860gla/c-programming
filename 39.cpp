#include<stdio.h>
int main()
{
	int x,y;
	printf("enter number of rows=");
	scanf("%d",&x);
	printf("enter number of column=");
	scanf("%d",&y);
	int a[x][y],i,j;
	for(i=0;i<=x-1;i++)
	{
		for(j=0;j<=y-1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int sum=0;
	for(i=0;i<=x-1;i++)
	{
		for(j=0;j<=y-1;j++)
		{
			if(i==j)
			{
				printf("%d",a[i][j]);
				sum=sum+a[i][j];
			}
			else
			{
				printf("\t");
			}
		}
		printf("\n");
	}
	printf("sum=%d",sum);
	
}
