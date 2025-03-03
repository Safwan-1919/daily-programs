#include <stdio.h>

int main()
{
    float temperature;
    printf("What is the temperature in fahrenheit?\n");
    scanf("%f", &temperature);
    float fahtocel = (temperature - 32) * 5 / 9;
    printf("Fahrenheit: %.2f to Celsius %.2f", temperature, fahtocel);
    return 0;
}