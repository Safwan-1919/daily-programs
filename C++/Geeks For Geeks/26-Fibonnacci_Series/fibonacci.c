#include <stdio.h>

int main()
{
    int a, b, c, n;
    printf("Enter the number of fibonacci series you want: ");
    scanf("%d", &n);
    a = 0;
    b = 1;
    printf("Fibonacci Series upto %d is: ", n);
    printf("%d ", a);
    printf("%d ", b);
    for (int i = 0; i < (n - 2); i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf(" \n");

    return 0;
}