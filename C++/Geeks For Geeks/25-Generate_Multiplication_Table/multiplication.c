#include <stdio.h>

int main()
{
    int n, range, total;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Enter range: ");
    scanf("%d", &range);
    for (int i = 1; i <= range; i++)
    {
        total = n * i;
        printf("%d * %d = %d\n", n, i, total);
    }

    return 0;
}