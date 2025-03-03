#include <stdio.h>

int main()
{
    int cr1, cr2, ci1, ci2, sr, si;
    printf("Enter the first complex numbers: ");
    scanf("%d%d", &cr1, &ci1);
    printf("Enter the second complex numbers: ");
    scanf("%d%d", &cr2, &ci2);
    printf("First Complex Number:\n%d + %di\n", cr1, ci1);
    printf("Second Complex Number:\n%d + %di\n", cr2, ci2);
    sr = cr1 + cr2;
    si = ci1 + ci2;
    printf("Sum Of Two Complex Number:\n%d + %di\n", sr, si);

    return 0;
}