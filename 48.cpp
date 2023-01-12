#include <stdio.h>
int main()
{
    int x,y,sum;
    int *a, *b;
    a = &x;
    b = &y; 
    printf("Enter any two numbers: ");
    scanf("%d %d", a, b);
    sum = *a + *b;
    printf("Sum = %d", sum);
}

