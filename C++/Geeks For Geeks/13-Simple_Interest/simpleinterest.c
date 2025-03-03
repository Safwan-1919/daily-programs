#include <stdio.h>

int main()
{
    float p, t, r;
    printf("Enter the principal: ");
    scanf("%f", &p);
    printf("Enter the Time: ");
    scanf("%f", &t);
    printf("Enter the Rate: ");
    scanf("%f", &r);
    float SI = (p * t * r) / 100;
    printf("Simple Interest : %.2f\n", SI);
    return 0;
}