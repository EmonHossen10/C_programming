#include <stdio.h>

float celsius_to_fahrenheit(float cel);

int main()
{
    float cel;
    printf("Enter a Celsius value: ");
    scanf("%f", &cel);
    printf("The Fahrenheit value is: %.2f\n", celsius_to_fahrenheit(cel));

    return 0;
}

float celsius_to_fahrenheit(float cel)
{

    return (cel * 9.0 / 5.0) + 32;
}