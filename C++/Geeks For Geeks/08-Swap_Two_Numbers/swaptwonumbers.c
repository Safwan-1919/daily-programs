#include <stdio.h>

int main()
{
    printf("Using Temporary Variable: \n");
    int a, b, temp;
    printf("Enter the two numbers to be swapped: ");
    scanf("%d%d", &a, &b);
    printf("Before Swap:\na = %d, b = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After Swap:\na = %d, b = %d\n", a, b);

    printf("\n");

    printf("Without Using Temporary Variable: \n");
    printf("Enter the two numbers to be swapped: ");
    scanf("%d%d", &a, &b);
    printf("Before Swap:\na = %d, b = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After Swap:\na = %d, b = %d\n", a, b);

    return 0;
}