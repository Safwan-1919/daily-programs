#include <stdio.h>

int main()
{
    int n, prime;
    printf("Enter the number to which you want print whether the number is prime or not: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        prime = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
            }
        }
        if (prime == 1)
        {
            printf("%d - Prime\n", i);
        }
        else
        {
            printf("%d - Not Prime\n", i);
        }
    }
    printf("\n");

    // second method
    for (int i = 2; i <= n; i++)
    {
        prime = 1;
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0 && i != j)
            {
                prime = 0;
                break;
            }
        }
        if (prime == 1)
        {
            printf("%d - Prime\n", i);
        }
        else
        {
            printf("%d - Not Prime\n", i);
        }
    }
    return 0;
}