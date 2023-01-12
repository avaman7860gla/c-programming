#include <stdio.h>
int main()
{
	int q=10, num, n;
    int i, l;
    int freq[q];
    printf("Enter any number: ");
    scanf("%d", &num);
    for(i=0; i<q; i++)
    {
        freq[i] = 0;
    }
    n = num; 
    while(n != 0)
    {
        l = n % 10;
        n /= 10;
        freq[l]++;
    }
    printf("Frequency of each digit in %lld is: \n", num);
    for(i=0; i<q; i++)
    {
        printf("Frequency of %d = %d\n", i, freq[i]);
    }
}
