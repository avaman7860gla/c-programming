#include<stdio.h>
int main()
{
	float a,b;
	char c;
	printf("enter operator c=");
	scanf("%c",&c);
	printf("enter first number a=");
	scanf("%f",&a);
	printf("enter second number b=");
	scanf("%f",&b);
	switch(c)
	{
		case'+':
			printf("addition=%0.2f",a+b);
			break;
		case'-':
			printf("subtraction=%0.2f",a-b);
			break;
		case'*':
			printf("multiplication=%0.2f",a*b);
			break;
		case'/':
			printf("division=%f",a/b);
			break;
	}
}
