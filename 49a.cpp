#include<stdio.h>
int swap(int x,int y)
{
	x=x+y;
	y=x-y;
	x=x-y;
	printf("value of a and b after swapping=%d and %d",x,y);
}
int main()
{
	int a,b;
	printf("enter value of a=");
	scanf("%d",&a);
	printf("enter value of b=");
	scanf("%d",&b);
	swap(a,b);
}
