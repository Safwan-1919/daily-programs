#include <stdio.h>

int main()
{
    float a, b, sum;
    printf("Enter the two decimal numbers: ");
    scanf("%f%f", &a, &b);
    sum = a + b;
    printf("Multiplication of %0.2f x %.2f = %.2f\n", a, b, sum);
    return 0;
}