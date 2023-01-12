#include<stdio.h>
int main()
{
	int i,j,k;
	char x='A';
	printf("enter number of rows=");
	scanf("%d",&i);
	for(j=1;j<=i;j++)
	{
		for(k=1;k<=i;k++)
		{
			if(k==1||j==1||k==i||j==i)
			{
				printf(" *");
			}
			else
			{
				printf(" %c",x++);
			}
			if(x>'Z')
			{
				x='A';
			}
		}
		printf("\n");
	}
}
