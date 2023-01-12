#include<stdio.h>
int main()
{
	int x;
	char i,j;
	printf("enter number of rows=");
	scanf("%d",&x);
	for(i='a';i<='e';i++)
	{
		for(j='a';j<='e';j++)
		{
			printf("%c",i);
		}
		printf("\n");
	}
}

