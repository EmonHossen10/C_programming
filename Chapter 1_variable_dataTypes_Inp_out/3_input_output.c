#include <stdio.h>
int main()
{

    printf("Enter Your Age :");
    int age;
    scanf("%d", &age);
    printf("Your Age is : %d\n", age);
    // summation of two numbers
    int a, b;
    printf("Enter First Number :");
    scanf("%d", &a);
    printf("Enter Second Number :");
    scanf("%d", &b);

    int sum = a + b;
    printf("\nYour Sum Result is : %d\n", sum);
    printf("Your Subtraction Result is : %d\n", a - b);
    printf("Your multiply Result is : %d\n", a * b);
    printf("Your Division Result is : %d\n", a / b);

    return 0;
}