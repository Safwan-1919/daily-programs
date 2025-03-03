#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("%d - positive\n", n);
    }
    else if (n < 0)
    {
        printf("%d - negative\n", n);
    }
    else
    {
        printf("%d - zero\n", n);
    }

    // using another else if
    if (n > 0)
    {
        printf("%d - positive\n", n);
    }
    else if (n < 0)
    {
        printf("%d - negative\n", n);
    }
    else if (n == 0)
    {
        printf("%d - zero\n", n);
    }
    return 0;
}