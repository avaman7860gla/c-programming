#include <stdio.h>
int main()
{
    int i, j,x,y, n, fact, sum;
    printf("Enter any to print all strong number between them=");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        x = i;
        sum = 0;
        while(x > 0)
        {
            fact = 1;
            y = x % 10;
            for( j=1; j<=y; j++)
            {
                fact = fact * j;
            }
            sum += fact; 
            x /= 10;
        }
        if(sum == i)
        {
            printf("%d, ", i);
        }
    }
}

