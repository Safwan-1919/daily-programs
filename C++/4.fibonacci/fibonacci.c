#include <stdio.h>

int main()
{
    // Using For
    int n, a = 0, b = 1, fib;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Fibonacci Sequence: \n");
    printf("%d\n", a);
    printf("%d\n", b);
    for (int i = 0; i < n; i++)
    {
        fib = a + b;
        printf("%d\n", fib);
        a = b;
        b = fib;
    }


    // Using While
    int count, c;
    count = 0;
    a = 0; b = 1;
    printf("\n\nFibonacci Sequence: ");
    printf("%d\t%d\t",a,b);
    while(count<n){
        c = a + b;
        printf("%d\t",c);
        count++;
        a = b;
        b = c;
    }
    return 0;
}