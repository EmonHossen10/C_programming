#include <stdio.h>
#include <math.h>

float areaOfSquare(float a);
float areaOfCircle(float radius);
float areaOfRectangle(float length, float breadth);

int main()
{
    float a, radius, length, breadth;
    printf("Enter the side of square : ");
    scanf("%f", &a);
    printf("Area of square : %f\n", areaOfSquare(a));

    printf("Enter the radius of circle : ");
    scanf("%f", &radius);
    printf("Area of circle : %f\n", areaOfCircle(radius));

    printf("Enter the length and breadth of rectangle : ");
    scanf("%f %f", &length, &breadth);
    printf("Area of rectangle : %f\n", areaOfRectangle(length, breadth));

    return 0;
}

float areaOfSquare(float a)
{
    return a * a;
}
float areaOfCircle(float radius)
{
    return 3.1416 * radius * radius;
}
float areaOfRectangle(float length, float breadth)
{
    return length * breadth;
}
