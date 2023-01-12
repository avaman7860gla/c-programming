#include <stdio.h>
int b(int *a, int size);
int main()
{
	int n;
    int a[n];
    int size;
    int *left = a;
    int *right;
    printf("Enter size of array: ");
    scanf("%d", &size);
    right = &a[size - 1];
    printf("Enter elements in array: ");
    while(left <= right)
    {
        scanf("%d", left++);
    }
    printf("\nArray before reverse: ");
    b(a, size);
    left = a;
    while(left < right) 
    {
        *left    ^= *right;
        *right   ^= *left;
        *left    ^= *right;
        left++;
        right--;
    }
    printf("\nArray after reverse: ");
    b(a, size);
}
int b(int * a, int size)
{
    int * c = (a + size - 1);
    while(a <= c)
    {
        printf("%d, ", *a);
        a++;
    }
}

