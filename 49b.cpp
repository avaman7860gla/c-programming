#include <stdio.h>
int swap(int * num1, int * num2);
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    swap(&num1, &num2);
}
int swap(int * num1, int * num2)
{
    int temp;
    temp = *num1;
    *num1= *num2;
    *num2= temp;
    printf("Value of num1 after swap = %d \n", *num1);
    printf("Value of num2 after swap = %d \n\n", *num2);
}

