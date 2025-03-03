#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("%d - Even\n", n);
    }
    else
    {
        printf("%d - Odd\n", n);
    }
    return 0;
}