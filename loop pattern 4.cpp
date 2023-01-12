#include<stdio.h>
int main()
{
	char x,y;
	for(x='a';x<='i';x++)
	{
		for(y='A';y<='I';y++)
		{
			if(x%2==0)
			{
				printf("%c",x+64);
			}
			else(x%2==1);
			{
				printf("%c",x+96);
			}
		}
		printf("\n");
	}
}
