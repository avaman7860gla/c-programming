#include<stdio.h>
int area()
{
	float r,a;
	printf("enter radius of circle=");
	scanf("%f",&r);
	a=3.14*r*r;
	printf("area of circle=%f\n",a);
}
int diameter()
{
	float r,d;
	printf("enter radius of circle=");
	scanf("%f",&r);
	d=r*2;
	printf("diameter of circle=%f\n",d);
}
int circumference()
{
	float r,c;
	printf("enter radius of circle=");
	scanf("%f",&r);
	c=2*3.14*r;
	printf("circumference of circle=%f\n",c);
}
int main()
{
	area();
	diameter();
	circumference();
}

