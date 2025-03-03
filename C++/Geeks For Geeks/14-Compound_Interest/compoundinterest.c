#include <stdio.h>
#include <math.h>

int main()
{
    float p, t, r;
    printf("Enter the principal: ");
    scanf("%f", &p);
    printf("Enter the Time: ");
    scanf("%f", &t);
    printf("Enter the Rate: ");
    scanf("%f", &r);
    float amount = p * pow((1 + (r / 100)), t);
    float CI = amount - p;
    printf("Compound Interest: %.2f\n", CI);
    return 0;
}