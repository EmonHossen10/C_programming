#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    // Ternary to check Adult or Minor
    age >= 18 ? printf("Adult\n") : printf("Not Adult\n");

    return 0;
}