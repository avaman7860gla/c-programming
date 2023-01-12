#include<stdio.h>
int main()
{
	int a,b,p=1,i;
	printf("Enter base=");
	scanf("%d",&a);
	printf("Enter power=");
	scanf("%d",&b);
	for(i=1;i<=b;i++)
	{
		p=p*a;
	}
	printf("%d power of %d is %d\n",b,a,p);
}
