#include <stdio.h>

int main()
{
    int n, square, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    square = n * n;
    while (square > 0)
    {
        sum = sum + (square % 10);
        square = square / 10;
    }
    if (sum == n)
    {
        printf("%d is a neon number\n", n);
    }
    else
    {
        printf("%d is not a neon number\n", n);
    }
    return 0;
}