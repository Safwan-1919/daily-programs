#include <stdio.h>

int main()
{
    float length, breadth, perimeter, area;
    printf("Enter the length: ");
    scanf("%f", &length);
    printf("Enter the breadth: ");
    scanf("%f", &breadth);
    perimeter = 2 * (length + breadth);
    area = length * breadth;
    printf("Perimeter: %.2f\n", perimeter);
    printf("Area: %.2f\n", area);
    return 0;
}