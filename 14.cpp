#include<stdio.h>
int main()
{
	int a;
	printf("enter value of a to check positive negative or zero=");
	scanf("%d",&a);
	switch(a>0)
	{
		case 1:
			printf("positive number");
			break;
		case 0:
			switch(a<0)
			{
				case 1:
					printf("negative number");
					break;
				case 0:
					printf("zero");
					break;
			}
			break;
	}
}
