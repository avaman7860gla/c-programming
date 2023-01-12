#include <stdio.h>
int main()
{
    int x,y;
    int sum, sub, mult;
    float div;
    printf("Enter any two numbers: ");
    scanf("%d%d", &x, &y);
    sum = x + y;
    sub = x - y;
    mult = x * y;
    div = (float)x / y;
    printf("SUM = %d\n", sum);
    printf("DIFFERENCE = %d\n", sub);
    printf("PRODUCT = %d\n", mult);
    printf("QUOTIENT = %f\n", div);
}

