#include <stdio.h>

int main()
{
    int n, i, j, prime;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        prime = 1;
        if (i == 1)
        {
            printf("1 - unique\n");
            continue;
        }
        for (j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
            }
        }
        if (prime == 1)
        {
            printf("%d - prime \n", i);
        }
        else
        {
            printf("%d - not prime \n", i);
        }
    }
    return 0;
}