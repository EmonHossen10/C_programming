#include <stdio.h>
int main()
{
    float radius, area;
    printf("Enter the radius of circle :");
    scanf("%f", &radius);
    area = 3.1416 * radius * radius;
    printf("Area of Circle is : %.2f\n", area);

    // This program converts temperature from Celsius to Fahrenheit
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    return 0;
}