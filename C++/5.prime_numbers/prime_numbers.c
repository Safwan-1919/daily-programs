#include <stdio.h>

int main()
{
    int n, i, prime = 1;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n == 1)
        {
            printf("unique number");
            break;
        }
        if (n % i == 0)
        {
            prime = 0;
        }
    }
    if (prime == 0)
    {
        printf("%d is not a prime number\n", n);
    }
    else
    {
        printf("%d is a prime number\n", n);
    }
    return 0;
}