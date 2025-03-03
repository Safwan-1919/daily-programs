#include <stdio.h>

int main()
{
    int n, fact = 1;
    printf("Enter number: ");
    scanf("%d", &n);
    if (n == 0 || n == 1)
    {
        printf("Factorial of %d is %d\n", n, fact);
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of %d is %d\n", n, fact);

    return 0;
}