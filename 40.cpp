#include<stdio.h>
int main()
{
	int x,y;
	printf("enter number of rows=");
	scanf("%d",&x);
	printf("enter number of column=");
	scanf("%d",&y);
	int a[x][y],i,j,c=0,t;
	t=x*y;
	for(i=0;i<=x-1;i++)
	{
		for(j=0;j<=y-1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<=x-1;i++)
	{
		for(j=0;j<=y-1;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of matrix\n");
	for(i=0;i<=x-1;i++)
	{
		for(j=0;j<=y-1;j++)
		{
			printf("%d",a[j][i]);
		}
		printf("\n");
	}
	for(i=0;i<=x-1;i++)
	{
		for(j=0;j<=y-1;j++)
		{
			if(a[i][j]==0)
			{
				c=c+1;
			}
		}
	}
	if(c>=t/2)
	printf(" it is sparse matrix\n");
	else
	printf("it is dense matrix\n");
}
		
